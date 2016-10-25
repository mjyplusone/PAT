#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int N,D,K;
    int i,j,mayempty=0,empty=0;
    double e,E;
    cin>>N>>e>>D;
    for(i=0;i<N;i++)
    {
       int day=0;
       cin>>K;
       for(j=0;j<K;j++)
       {
          cin>>E;
          if(E<e) day++;
       }
       if(day>K/2&&K<=D) mayempty++;
       if(day>K/2&&K>D) empty++;
    }
    printf("%.1f%% %.1f%%",mayempty*1.0*100/N,empty*1.0*100/N);    //printf里百分号也要使用%%转义!

    return 0;
}
