#include <iostream>
#include <cstring>

using namespace std;

//ԭ���Ĵ���ᳬʱ���ο������ϵĳ���ת��˼·
//ÿ������Aʱǰ���м���P,��ôPA�ĸ��������Ӽ�����
//ÿ������Tʱǰ���м���PA����ôPAT�ĸ��������Ӽ���
//�ü�࣬����ôû�뵽������
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
    /*  //�������Ե㳬ʱ������
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
