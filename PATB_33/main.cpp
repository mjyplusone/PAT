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
    //cin>>key>>str;    //第一行可能是空行，用getline才能正常读出两行！
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
          if(broke.count(str[i])==0)   //count 结果只可为0/1,即是否出现过
          {
             if(str[i]>='A'&&str[i]<='Z'&&up==1) continue;
             else cout<<str[i];
          }
       }
       cout<<endl;
    }

    return 0;
}
