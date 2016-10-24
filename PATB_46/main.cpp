#include <iostream>

using namespace std;

int main()
{
    int N,i,count1=0,count2=0;
    int han1,hua1,han2,hua2,sum;
    cin>>N;
    while(N--)
    {
       cin>>han1>>hua1>>han2>>hua2;
       sum=han1+han2;
       if(hua1==sum&&hua2!=sum) count2++;
       else if(hua1!=sum&&hua2==sum) count1++;
    }
    cout<<count1<<" "<<count2<<endl;

    return 0;
}
