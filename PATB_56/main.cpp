#include <iostream>

using namespace std;

int main()
{
    int N,i,j,num[10],sum=0;
    cin>>N;
    for(i=0;i<N;i++) cin>>num[i];
    for(i=0;i<N;i++)
    {
       for(j=0;j<N;j++)
       {
          if(j!=i) sum+=num[i]*10+num[j];
       }
    }
    cout<<sum<<endl;

    return 0;
}
