#include <stdio.h>
#include <stdlib.h>

int Issushu(int a)
{
   int i;
   for(i=2;i<=sqrt(a);i++)    //sqrt!
   {
      if(a%i==0) return 0;
   }
   return 1;
}

int main()
{
    int num,i,count=0,temp=0,flag=0;
    scanf("%d",&num);
    for(i=3;i+2<=num;i=i+2)
    {
       if(Issushu(i)==1 && Issushu(i+2)==1) count++;
    }
    printf("%d\n",count);

    return 0;
}
