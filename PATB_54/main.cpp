#include <iostream>
#include <vector>
#include <cstring>
#include <cstdlib>
#include <cstdio>

using namespace std;

int main()
{
    int N,i,j,count=0;
    double sum=0;
    cin>>N;
    vector<string> num(N);
    for(i=0;i<N;i++)
    {
       cin>>num[i];
       int flag=0,numflag=0,countdot=0;
       double temp;
       for(j=0;j<num[i].length();j++)
       {
          if(num[i][j]=='-')   //1-2���
          {
             if(j!=0) {flag=1; break;}
          }
          else if(num[i][j]=='.')    //.12    -.12���
          {
             if(numflag==0) {flag=1; break;}
             countdot++;
             if(countdot>1) {flag=1; break;}
          }
          else if(!(num[i][j]>='0'&&num[i][j]<='9')) {flag=1; break;}
          else if(num[i][j]>='0'&&num[i][j]<='9') numflag=1;
       }

       if(flag==0)
       {
          temp=atof(num[i].c_str());   //s.c_str()�ǰ�sתΪchar*��atof�ǰ�char*תΪ������
          if(!(temp>=-1000&&temp<=1000)) flag=1;
          else if(countdot!=0)
          {
             int dotflag=0,afterdot=0;
             for(j=0;j<num[i].length();j++)
             {
                if(dotflag==1) afterdot++;
                if(num[i][j]=='.') dotflag=1;
             }
             if(!(afterdot<=2)) flag=1;   //������[.]��Ϊ�ַ������һλ,��Ȼ���һ�����Ե㲻ͨ��...
          }
       }

       if(flag==1) printf("ERROR: %s is not a legal number\n",num[i].c_str());
       else {count++; sum+=temp;}
    }

    if(count==0) printf("The average of 0 numbers is Undefined\n");
    else if(count==1) printf("The average of %d number is %.2lf\n",count,sum);   //��������number��������numbers,������������Ե��޷�ͨ����
    else printf("The average of %d numbers is %.2lf\n",count,sum/count);

    return 0;
}
