#include <iostream>

using namespace std;

//���ߴ��� ʱ�临�Ӷ�O(n)
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
