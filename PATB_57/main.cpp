#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string str;
    getline(cin,str);

    int i,sum=0;
    for(i=0;i<str.length();i++)
    {
       if(str[i]>='A'&&str[i]<='Z')
       {
          sum+=str[i]-'A'+1;
       }
       else if(str[i]>='a'&&str[i]<='z')
       {
          sum+=str[i]-'a'+1;
       }
    }

    int count0=0,count1=0,temp;
    while(sum)
    {
       temp=sum%2;
       if(temp==0) count0++;
       else count1++;
       sum/=2;
    }
    cout<<count0<<" "<<count1<<endl;

    return 0;
}
