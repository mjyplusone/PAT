#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N,i,j,len=1;
    double p;
    long num[100001];

    cin>>N>>p;
    for(i=0;i<N;i++)
      cin>>num[i];
    sort(num,num+N);

//长度从1开始，首位数字i从0到n－1，末尾数字从i＋长度－1向后取直到取到不符合规则为止，
//这样更新长度，下一次循环的时候就可以从新的长度开始了，不必做很多没必要的循环
    for(i=0;i<N;i++)
    for(j=i+len-1;j<N;j++)
    {
       if(num[j]<=num[i]*p)
       {
          if(j-i+1>len) len=j-i+1;
       }
       else break;
    }

    cout<<len<<endl;

    return 0;
}
