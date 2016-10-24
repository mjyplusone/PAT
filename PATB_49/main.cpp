#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int N,i;
    double num[100001],sum=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
       cin>>num[i];
       sum+=(i+1)*num[i]*(N-i);
    }
    printf("%.2lf",sum);

    return 0;
}
