#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,temp,i,j,wei=100,ge=1;
    scanf("%d",&num);
    for(i=0;i<3;i++)
    {
       temp=num/wei;
       num=num-temp*wei;
       wei=wei/10;
       if(temp!=0)
       {
          for(j=0;j<temp;j++)
          {
             if(wei*10==100) printf("B");
             else if(wei*10==10) printf("S");
             else {printf("%d",ge++);}
          }
       }
    }

    return 0;
}
