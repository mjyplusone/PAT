#include <iostream>
#include <cstdio>

using namespace std;

long long Yue(long long a,long long b)  //找两个数的最大公约数,辗转相处法
{
   long long r;
   r=b%a;
   while(r)
   {
      b=a;
      a=r;
      r=b%a;
   }
   return a;
}

void print(long long a,long long b)
{
   long long k,r,aabs;
   if(a==0) printf("0");
   else
   {
      k=a/b;
      if(k>0) a=a-b*k;
      else if(k<0) a=(a-b*k)*(-1);

      if(a==0)
      {
         if(k>0) printf("%lld",k);
         else if(k<0) printf("(%lld)",k);
      }
      else
      {
         if(a>0) aabs=a; else aabs=-a;
         r=Yue(aabs,b);
         a=a/r; b=b/r;
         if(k>0) printf("%lld %lld/%lld",k,a,b);
         else if(k<0) printf("(%lld %lld/%lld)",k,a,b);
         else
         {
            if(a>0) printf("%lld/%lld",a,b);
            else printf("(%lld/%lld)",a,b);
         }
      }
   }
}

void add(long long a1,long long b1,long long a2,long long b2)
{
    print(a1,b1);
    printf(" + ");
    print(a2,b2);
    printf(" = ");
    print(a1*b2+a2*b1,b1*b2);
    printf("\n");
}

void minu(long long a1,long long b1,long long a2,long long b2)
{
   print(a1,b1);
   printf(" - ");
   print(a2,b2);
   printf(" = ");
   print(a1*b2-a2*b1,b1*b2);
   printf("\n");
}

void multi(long long a1,long long b1,long long a2,long long b2)
{
   print(a1,b1);
   printf(" * ");
   print(a2,b2);
   printf(" = ");
   print(a1*a2,b1*b2);
   printf("\n");
}

void divide(long long a1,long long b1,long long a2,long long b2)
{
   print(a1,b1);
   printf(" / ");
   print(a2,b2);
   printf(" = ");
   if(a2==0) printf("Inf");
   else
   {
      if(a2<0) {a2*=-1; a1*=-1;}
      print(a1*b2,b1*a2);
   }
   printf("\n");
}

int main()
{
    long long a1,b1,a2,b2,k1,k2;
    scanf("%lld/%lld %lld/%lld",&a1,&b1,&a2,&b2);

    add(a1,b1,a2,b2);
    minu(a1,b1,a2,b2);
    multi(a1,b1,a2,b2);
    divide(a1,b1,a2,b2);

    return 0;
}
