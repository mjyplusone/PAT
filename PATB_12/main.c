#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,num,flag=0,temp,count=0;
    int flag1=0,flag2=0,flag3=0,flag4=0,flag5=0;
    float result[5]={0};
    scanf("%d",&n);
    while(n--)
    {
       scanf("%d",&num);
       if(num%5==0 && num%2==0)
       {
          flag1=1;
          result[0]+=num;
       }
       else if(num%5==1)
       {
          flag2=1;
          if(flag==0) {temp=1; flag=1;}
          else {temp=-1; flag=0;}
          result[1]+=num*temp;
       }
       else if(num%5==2)
       {
          flag3=1;
          result[2]++;
       }
       else if(num%5==3)
       {
          flag4=1;
          result[3]+=num;
          count++;
       }
       else if(num%5==4)
       {
          flag5=1;
          if(num>result[4]) result[4]=num;
       }
    }
    if(!flag1) printf("N "); else printf("%d ",(int)result[0]);
    if(!flag2) printf("N "); else printf("%d ",(int)result[1]);
    if(!flag3) printf("N "); else printf("%d ",(int)result[2]);
    if(!flag4) printf("N "); else printf("%.1f ",result[3]*1.0/count);
    if(!flag5) printf("N"); else printf("%d",(int)result[4]);

    return 0;
}
