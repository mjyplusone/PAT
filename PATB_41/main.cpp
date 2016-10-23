#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int N,M,ESeat[1001],test,exam,check[1001],i;
    char num[1001][15],temp[15];
    cin>>N;
    while(N--)
    {
       cin>>temp>>test>>exam;
       ESeat[test]=exam;
       strcpy(num[test],temp);
    }
    cin>>M;
    for(i=0;i<M;i++) cin>>check[i];
    for(i=0;i<M;i++)
    {
       cout<<num[check[i]]<<" "<<ESeat[check[i]]<<endl;
    }

    return 0;
}
