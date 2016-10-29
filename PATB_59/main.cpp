#include <iostream>
#include <cstdio>
#include <math.h>

using namespace std;

int Issushu(int a)
{
   int i;
   if(a<=1) return 0;
   for(i=2;i<=sqrt(a);i++)
   {
      if(a%i==0) return 0;
   }
   return 1;
}

int main()
{
    int N,i,temp,ID[10000]={0};
    cin>>N;
    for(i=0;i<N;i++) {cin>>temp; ID[temp]=i+1;}

    int K,j,check;
    cin>>K;
    for(j=0;j<K;j++)
    {
       cin>>check;
       if(ID[check]==1) {printf("%04d: Mystery Award\n",check); ID[check]=-1;}
       else if(Issushu(ID[check])==1) {printf("%04d: Minion\n",check); ID[check]=-1;}
       else if(ID[check]==0) printf("%04d: Are you kidding?\n",check);
       else if(ID[check]==-1) printf("%04d: Checked\n",check);
       else {printf("%04d: Chocolate\n",check); ID[check]=-1;}
    }

    return 0;
}
