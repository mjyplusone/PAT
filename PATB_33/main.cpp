#include <iostream>
#include <cstring>
#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    string key,str;
    int up=0,i;
    set<char> broke;
    //cin>>key>>str;    //��һ�п����ǿ��У���getline���������������У�
    getline(cin,key);
    getline(cin,str);

    if(key.empty())
    {
       cout<<str<<endl;
    }
    else
    {
       for(i=0;i<key.length();i++)
       {
          if(key[i]=='+') up=1;
          else if(key[i]>='A'&&key[i]<='Z')
          {
             broke.insert(key[i]);
             broke.insert(key[i]+32);
          }
          else broke.insert(key[i]);
       }
       for(i=0;i<str.length();i++)
       {
          if(broke.count(str[i])==0)   //count ���ֻ��Ϊ0/1,���Ƿ���ֹ�
          {
             if(str[i]>='A'&&str[i]<='Z'&&up==1) continue;
             else cout<<str[i];
          }
       }
       cout<<endl;
    }

    return 0;
}
