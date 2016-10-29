#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(int a,int b)
{
   return a>b;
}

int main()
{
    int N,i,length[100000],E=0;   //考虑每天都跑0，E=0情况
    cin>>N;
    for(i=0;i<N;i++) cin>>length[i];
    sort(length,length+N,cmp);

    for(i=1;i<N+1;i++)
    {
       if(length[i-1]>i) E=i;
       else break;
    }
    cout<<E<<endl;

    return 0;
}
