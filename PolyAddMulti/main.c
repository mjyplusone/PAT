#include <stdio.h>
#include <stdlib.h>

typedef struct PolyNode
{
   int coef;
   int exp;
   struct PolyNode *next;
}*Poly;

void Attach(int c,int e,Poly *pRear);
Poly ReadPoly();
Poly Multi(Poly p1,Poly p2);
Poly Add(Poly p1,Poly p2);
void PrintPoly(Poly p);

int main()
{
    Poly p1,p2,pm,pa;
    p1=ReadPoly();
    p2=ReadPoly();
    pm=Multi(p1,p2);
    PrintPoly(pm);
    pa=Add(p1,p2);
    PrintPoly(pa);

    return 0;
}

void Attach(int c,int e,Poly *pRear)
{
   Poly p;
   p=(Poly)malloc(sizeof(struct PolyNode));
   p->coef=c; p->exp=e;
   p->next=NULL;
   (*pRear)->next=p;
   *pRear=p;
}

Poly ReadPoly()
{
   Poly head,pRear;
   int N,c,e;

   head=(Poly)malloc(sizeof(struct PolyNode));
   head->next=NULL;
   pRear=head;

   scanf("%d",&N);
   while(N--)
   {
      scanf("%d%d",&c,&e);
      Attach(c,e,&pRear);
   }

   return head;
}

Poly Add(Poly p1,Poly p2)
{
   Poly head,rear,t1,t2;
   int sum;

   t1=p1->next; t2=p2->next;
   if(!t1) return p2;    //处理输入有0多项式情况
   if(!t2) return p1;

   head=(Poly)malloc(sizeof(struct PolyNode));
   head->next=NULL;
   rear=head;
   while(t1&&t2)
   {
      if(t1->exp>t2->exp)
      {
         Attach(t1->coef,t1->exp,&rear);
         t1=t1->next;
      }
      else if(t1->exp<t2->exp)
      {
         Attach(t2->coef,t2->exp,&rear);
         t2=t2->next;
      }
      else
      {
         sum=t1->coef+t2->coef;
         if(sum!=0) Attach(sum,t1->exp,&rear);
         t1=t1->next; t2=t2->next;
      }
   }
   while(t1) {Attach(t1->coef,t1->exp,&rear); t1=t1->next;}
   while(t2) {Attach(t2->coef,t2->exp,&rear); t2=t2->next;}

   return head;
}

Poly Multi(Poly p1,Poly p2)
{
   Poly head,rear,t1,t2,temp;
   int c,e;

   t1=p1->next; t2=p2->next;
   if(!t1||!t2) return NULL;   //处理输入有0多项式情况

   head=(Poly)malloc(sizeof(struct PolyNode));
   head->next=NULL;
   rear=head;

   while(t2)
   {
      if(t1->coef*t2->coef!=0)
      {
         Attach(t1->coef*t2->coef,t1->exp+t2->exp,&rear);
         t2=t2->next;
      }
   }
   t1=t1->next;
   while(t1)
   {
      t2=p2->next; rear=head;   //rear从头再来比较
      while(t2)
      {
         c=t1->coef*t2->coef;
         e=t1->exp+t2->exp;
         if(c!=0)
         {
            while(rear->next&&rear->next->exp>e) rear=rear->next;
            if(rear->next&&rear->next->exp==e)  //系数相等情况
            {
               if(rear->next->coef+c!=0) rear->next->coef+=c;
               else  //系数相加等于0，去掉这项
               {
                  temp=rear->next;
                  rear->next=temp->next;
                  free(temp);
               }
            }
            else
            {
               temp=(Poly)malloc(sizeof(struct PolyNode));
               temp->coef=c; temp->exp=e;
               temp->next=rear->next;
               rear->next=temp;
               rear=rear->next;  //!
            }
         }
         t2=t2->next;
      }
      t1=t1->next;
   }
   return head;
}

void PrintPoly(Poly head)
{
   Poly p;
   int flag=0;

   if(!head) {printf("0 0\n"); return;}   //输入有0多项式，返回后head直接是NULL，不存在空节点
   p=head->next;
   if(!p) {printf("0 0\n"); return;}
   while(p)
   {
      if(flag==0) {flag=1; printf("%d %d",p->coef,p->exp); p=p->next;}
      else
      {
         printf(" %d %d",p->coef,p->exp);
         p=p->next;
      }
   }
   printf("\n");
}


