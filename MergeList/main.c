#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
    ElementType Data;
    PtrToNode   Next;
};
typedef PtrToNode List;

List Read(); /* 细节在此不表 */
void Print( List L ); /* 细节在此不表；空链表将输出NULL */

List Merge( List L1, List L2 );

int main()
{
    List L1, L2, L;
    L1 = Read();
    L2 = Read();
    L = Merge(L1, L2);
    Print(L);
    Print(L1);
    Print(L2);
    return 0;
}

/* 你的代码将被嵌在这里 */

List Read()
{
   int N;
   scanf("%d",&N);
   List head,p;
   head=(List)malloc(sizeof(struct Node));
   head->Next=NULL;
   p=head;
   while(N--)
   {
      List temp;
      temp=(List)malloc(sizeof(struct Node));
      scanf("%d",&temp->Data);
      temp->Next=NULL;
      p->Next=temp;
      p=temp;
   }
   return head;
}

List Merge(List L1,List L2)
{
   List head,p,pa,pb;
   pa=L1->Next; pb=L2->Next;
   head=(List)malloc(sizeof(struct Node));
   head->Next=NULL;
   p=head;
   while(pa&&pb)
   {
      if(pa->Data<pb->Data)
      {
         p->Next=pa;
         p=pa;
         pa=pa->Next;
      }
      else
      {
         p->Next=pb;
         p=pb;
         pb=pb->Next;
      }
   }
   if(pa) p->Next=pa;
   if(pb) p->Next=pb;
   L1->Next=NULL; L2->Next=NULL;
   return head;
}

void Print(List L)
{
   List p;
   p=L->Next;
   if(p==NULL) printf("NULL\n");
   else
   {
      printf("%d",p->Data);
      p=p->Next;
      while(p)
      {
         printf(" %d",p->Data);
         p=p->Next;
      }
      printf("\n");
   }
}
