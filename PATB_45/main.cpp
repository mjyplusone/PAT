#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N,i,count[100001]={0},k=0;
    long num[100001],min,max,result[100001];
    cin>>N;
    for(i=0;i<N;i++) cin>>num[i];

    min=0;
    for(i=0;i<N;i++)
    {
       if(num[i]>min) {count[i]++; min=num[i];}
    }
    max=num[N-1];
    for(i=N-1;i>=0;i--)
    {
       if(num[i]<=max) {count[i]++; max=num[i];}
    }

    for(i=0;i<N;i++)
    {
       if(count[i]==2) result[k++]=num[i];
    }

    cout<<k<<endl;
    if(k>0)   //¿¼ÂÇk<0Çé¿ö
    {
       sort(result,result+k);
       for(i=0;i<k-1;i++) cout<<result[i]<<" ";
       cout<<result[i]<<endl;
    }
    else cout<<endl;

    return 0;
}
