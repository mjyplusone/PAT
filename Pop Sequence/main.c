#include <stdio.h>
#include <stdlib.h>

typedef struct SNode
{
   int data;
   struct SNode *next;
}*PtrSNode;

int M,N,K;

PtrSNode CreateStack()
{
   PtrSNode S;
   S=(PtrSNode)malloc(sizeof(struct SNode));
   S->next=NULL;
   return S;
}

int IsEmpty(PtrSNode S)
{
   if(S->next==NULL) return 1;
   else return 0;
}

PtrSNode Push(PtrSNode S,int x)
{
   PtrSNode temp;
   temp=(PtrSNode)malloc(sizeof(struct SNode));
   temp->data=x;
   temp->next=S->next;
   S->next=temp;
   return S;
}

PtrSNode Pop(PtrSNode S)
{
   PtrSNode temp;
   if(IsEmpty(S)) {printf("Stack Empty\n"); return;}
   else
   {
      temp=S->next;
      S->next=temp->next;
      free(temp);
      return S;
   }
}

int Top(PtrSNode S)
{
   if(IsEmpty(S)) {printf("Stack Empty\n"); return;}
   else return S->next->data;
}

int Size(PtrSNode S)
{
   int size=0;
   while(S->next)
   {
      size++;
      S=S->next;
   }
   return size;
}

int check(int v[])
{
   int cap=M+1,num=1,i;
   PtrSNode S;
   S=CreateStack();
   S=Push(S,0);
   for(i=0;i<N;i++)
   {
      while(v[i]>Top(S)&&Size(S)<cap) S=Push(S,num++);
      if(v[i]==Top(S)) S=Pop(S);
      else return 0;
   }
   return 1;
}

int main()
{
    scanf("%d%d%d",&M,&N,&K);
    int *v=(int*)malloc(sizeof(int)*N);
    int i,j;

    for(i=0;i<K;i++)
    {
       for(j=0;j<N;j++) scanf("%d",v+j);
       if(check(v)) printf("YES\n");
       else printf("NO\n");
    }

    return 0;
}
