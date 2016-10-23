#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int sum;
    int i=0,j,num[100],A,B,D;
    scanf("%d%d%d",&A,&B,&D);
    sum=A+B;
    if(sum==0) printf("0");    //!
    else
    {
       while(sum)
       {
          num[i++]=sum%D;
          sum=sum/D;
       }
       for(j=i-1;j>=0;j--)
         printf("%d",num[j]);
    }

    return 0;
}
