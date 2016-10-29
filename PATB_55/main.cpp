#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct People
{
   string name;
   int high;
};

int cmp(People p1,People p2)
{
   if(p1.high==p2.high) return p1.name>p2.name;   //注意身高相同按名字字典序排
   return p1.high<p2.high;
}

int main()
{
    int N,K,i;
    cin>>N>>K;
    vector<People> per;    //结构体类型
    People temp;
    for(i=0;i<N;i++) {cin>>temp.name>>temp.high; per.push_back(temp);}
    sort(per.begin(),per.end(),cmp);

    int num=N/K;
    string result="";
    for(i=0;i<K;i++)
    {
       int begin=i*num,end=i*num+num;
       if(end+num>N) end=N;
       string line="";
       line=per[end-1].name;
       for(int j=end-2;j>=begin;j--)
       {
          if(j%2!=end%2) line=line+" "+per[j].name;
          else line=per[j].name+" "+line;
       }

       result=line+"\n"+result;   //!  注意换行符双引号（string）
    }

    cout<<result;

    return 0;
}
