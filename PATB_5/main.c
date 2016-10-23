#include <stdio.h>
#include <stdlib.h>

int cmp(const int *a,const int *b)
{
   return *b-*a;
}

int main()
{
    int i,j,k=0,n,number;
    int num[101],key[101],result[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%d",&num[i]);
       key[i]=0;
    }
    for(i=0;i<n;i++)
    {
       if(key[i]!=1)
       {
          number=num[i];
          while(number!=1)
          {
             if(number%2==0) number=number/2;
             else number=(number*3+1)/2;
             for(j=0;j<n;j++)
               if(num[j]==number) key[j]=1;
          }
       }
    }
    for(i=0;i<n;i++)
    {
       if(key[i]==0)
       {
          result[k++]=num[i];
       }
    }
    qsort(result,k,sizeof(int),cmp);
    for(i=0;i<k-1;i++) printf("%d ",result[i]);
    printf("%d",result[i]);


    return 0;
}
