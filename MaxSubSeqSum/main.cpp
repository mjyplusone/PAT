#include <iostream>

using namespace std;

//在线处理法 时间复杂度O(n)
int main ()
{
   int N;
   int sum=0,maxsum=0,temp;
   cin>>N;
   while(N--)
   {
      cin>>temp;
      sum+=temp;
      if(sum>maxsum) maxsum=sum;
      if(sum<0) sum=0;   //!
   }
   cout<<maxsum<<endl;

   return 0;

}
