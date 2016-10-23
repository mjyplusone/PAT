#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    char a[1001],b[1001];
    int flag=1,count=0,i=0,j=0;
    cin>>a;
    cin>>b;
    sort(a,a+strlen(a));
    sort(b,b+strlen(b));
    while(i<strlen(b)&&j<strlen(a))
    {
       if(a[j]<b[i]) j++;
       else if(a[j]==b[i]) {count++; i++; j++;}
       else i++;
    }
    if(count==strlen(b)) cout<<"Yes "<<strlen(a)-count<<endl;
    else cout<<"No "<<strlen(b)-count<<endl;

    return 0;
}
