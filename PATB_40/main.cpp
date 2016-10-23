#include <iostream>
#include <cstring>

using namespace std;

//原来的代码会超时，参考了网上的程序，转换思路
//每次遇到A时前面有几个P,那么PA的个数就增加几个，
//每次遇到T时前面有几个PA，那么PAT的个数就增加几个
//好简洁，我怎么没想到。。。
int main()
{
    char str[100001];
    long numP=0,numPA=0,numPAT=0;
    int i;
    cin>>str;

    for(i=0;i<strlen(str);i++)
    {
       if(str[i]=='P') numP++;
       else if(str[i]=='A') numPA+=numP;
       else numPAT+=numPA;
    }
    cout<<numPAT%1000000007<<endl;
    /*  //三个测试点超时。。。
    for(i=0;i<strlen(str);i++)
    {
       if(str[i]=='P')
       {
          for(j=i+1;j<strlen(str);j++)
          {
             if(str[j]=='A')
             {
                for(k=j+1;k<strlen(str);k++)
                {
                   if(str[k]=='T') count++;
                }
             }
          }
       }
    }
    cout<<count%1000000007<<endl;
    */

    return 0;
}
