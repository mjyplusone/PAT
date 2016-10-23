#include <iostream>

using namespace std;

int main()
{
    char ch;
    int N,i,j;
    cin>>N>>ch;
    for(i=0;i<N;i++) cout<<ch;
    cout<<endl;
    for(i=0;i<(int)(N*1.0/2+0.5)-2;i++)    //*1.0   !
    {
       cout<<ch;
       for(j=0;j<N-2;j++) cout<<" ";
       cout<<ch<<endl;
    }
    for(i=0;i<N;i++) cout<<ch;
    cout<<endl;

    return 0;
}
