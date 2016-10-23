#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int N,i,j,count=0,sum;
    char M[11]={'1','0','X','9','8','7','6','5','4','3','2'};
    int weight[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char card[19],num,wrong[100][19];
    cin>>N;
    for(i=0;i<N;i++)
    {
       cin>>card;
       sum=0;
       for(j=0;j<17;j++)
         sum+=(card[j]-'0')*weight[j];
       num=M[sum%11];
       if(num!=card[17]) strcpy(wrong[count++],card);
    }
    if(count==0) cout<<"All passed"<<endl;
    else
      for(i=0;i<count;i++) cout<<wrong[i]<<endl;

    return 0;
}
