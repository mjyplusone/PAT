#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int M,N,K;

int check(vector<int> &v)
{
   int num=1,cap=M+1,i;
   stack<int> sta;
   sta.push(0);   //stack容量要多加一个

   for(i=0;i<N;i++)
   {
      while(v[i]>sta.top()&&sta.size()<cap) sta.push(num++);
      if(sta.top()==v[i]) sta.pop();
      else return 0;
   }
   return 1;
}

int main()
{
    int i,j;
    vector<int> vec(N,0);
    cin>>M>>N>>K;

    for(i=0;i<K;i++)
    {
       for(j=0;j<N;j++)
       {
          int temp;
          cin>>temp;
          vec.push_back(temp);
       }
       if(check(vec)) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
       vec.clear();
    }

    return 0;
}
