#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char a[81],b[81],result[81];
    int i,j=0,k=0,n,flag;
    cin>>a>>b;
    for(i=0;i<strlen(a);i++)
    {
       flag=0;
       if(a[i]!=b[j])
       {
          if(a[i]>='a'&&a[i]<='z') a[i]-=32;
          for(n=0;n<k;n++)
            if(a[i]==result[n]) {flag=1; break;}
          if(flag==0) result[k++]=a[i];
       }
       else j++;
    }
    for(i=0;i<k;i++)
      cout<<result[i];
    cout<<endl;

    return 0;
}
