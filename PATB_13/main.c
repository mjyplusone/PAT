#include <stdio.h>
#include <stdlib.h>

int Issushu(int a)
{
   int i;
   for(i=2;i<=sqrt(a);i++)
   {
      if(a%i==0) return 0;
   }
   return 1;
}

int main()
{
    int M,N,count=0,flag=0,sushu=0;
    long num=2;
    scanf("%d%d",&M,&N);
    while(1)
    {
       if(Issushu(num)) {count++; sushu=1;}
       if(count>=M && count<N && sushu==1)
       {
          flag++; sushu=0;
          if(flag==10) {printf("%ld\n",num); flag=0;}
          else printf("%ld ",num);
       }
       if(count==N) {printf("%ld",num); break;}
       num++;
    }

    return 0;
}
