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

//���ȴ�1��ʼ����λ����i��0��n��1��ĩβ���ִ�i�����ȣ�1���ȡֱ��ȡ�������Ϲ���Ϊֹ��
//�������³��ȣ���һ��ѭ����ʱ��Ϳ��Դ��µĳ��ȿ�ʼ�ˣ��������ܶ�û��Ҫ��ѭ��
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
