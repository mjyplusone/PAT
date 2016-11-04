#include <iostream>

using namespace std;

int main()
{
    int N,a[10000],i,j;
    int temp,sum=0,maxsum=0,left_pos=0,right_pos=0,s=0,neg=0;
    cin>>N;
    for(i=0;i<N;i++)
    {
       cin>>a[i];
       if(a[i]>=0) neg=1;
       sum+=a[i];
       if(sum>maxsum||(sum==maxsum&&maxsum==0)) {maxsum=sum; right_pos=i; left_pos=s;}
       if(sum<0) {sum=0; s=i+1;}
    }


    if(neg==0) cout<<"0 "<<a[0]<<" "<<a[N-1]<<endl;
    else cout<<maxsum<<" "<<a[left_pos]<<" "<<a[right_pos]<<endl;

    return 0;
}
