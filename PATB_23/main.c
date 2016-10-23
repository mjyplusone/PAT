#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count[10],i,num[50],j=1;
    for(i=0;i<10;i++)
      scanf("%d",&count[i]);
    for(i=1;i<10;i++)
    {
       if(count[i]!=0) {num[0]=i; count[i]--; break;}
    }
    for(i=0;i<10;i++)
    {
       while(count[i]!=0) {num[j++]=i; count[i]--;}
    }
    for(i=0;i<j;i++)
      printf("%d",num[i]);

    return 0;
}
