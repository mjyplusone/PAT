#include <iostream>
#include <algorithm>

//�ⲻ����������ģ���������������д��
//���˼·�ܺã���������Ϊ������±꣬����Ӧ��ŵģ��Ǹ÷������ֵĴ�����
//����һ�������������101�Ĵ�С�������������ٸ�����
//���ң��ڲ��ҵ�ʱ����������±���в��ҾͿ����ˡ�
//������˼·������򵥻���100������ֹ������ʡʱ����ʡ�ռ䰡���ǣ�

using namespace std;

int main()
{
    int N,N2,i,score[101]={0},temp;
    cin>>N;
    for(i=0;i<N;i++)
    {
       cin>>temp;
       score[temp]++;
    }
    cin>>N2;
    for(i=0;i<N2;i++)
    {
       cin>>temp;
       if(i!=N2-1) cout<<score[temp]<<" ";
       else cout<<score[temp]<<endl;
    }

    return 0;
}
