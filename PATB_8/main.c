#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,M,i,j=0,num[100],result[100];
    scanf("%d %d",&N,&M);
    while(M>N) M=M-N;    //±»»Á6 7£¨ªÚ6 13
    for(i=0;i<N;i++)
    {
       scanf("%d",&num[i]);
    }
    for(i=N-M;i<N;i++)
    {
       result[j++]=num[i];
    }
    for(i=0;i<N-M;i++)
    {
       result[j++]=num[i];
    }
    for(i=0;i<N-1;i++)
      printf("%d ",result[i]);
    printf("%d",result[i]);

    return 0;
}
