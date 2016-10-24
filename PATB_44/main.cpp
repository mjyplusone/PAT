#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main()
{
    char low[13][5]={"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
    char high[12][4]={"tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};
    string str;
    int N,i,j,k,IsEarth,Esum,t,Msum;
    cin>>N;
    getchar();    //enter
    while(N--)
    {
       IsEarth=0;Esum=0;Msum=0;t=1;
       char Mhigh[4]="",Mlow[5]="";
       getline(cin,str);
       if(str[0]>='0'&&str[0]<='9') IsEarth=1;
       if(IsEarth==1)
       {
          for(i=str.length()-1;i>=0;i--)
          {
             Esum+=(str[i]-'0')*t;
             t*=10;
          }
          if(Esum>12&&Esum%13!=0) cout<<high[Esum/13-1]<<" "<<low[Esum%13]<<endl;
          else if(Esum>12&&Esum%13==0) cout<<high[Esum/13-1]<<endl;
          else cout<<low[Esum]<<endl;
       }
       else
       {
          i=0;j=0;k=0;
          if(str.length()>5)
          {
             while(str[i]!=' ')
             {
                Mhigh[j++]=str[i++];
             }
             Mhigh[j]='\0';    //!
             i++;
             while(str[i]) Mlow[k++]=str[i++];
             Mlow[k]='\0';    //!
          }
          else
          {
             while(str[i]) Mlow[k++]=str[i++];
             Mlow[k]='\0';
          }

          for(i=0;i<12;i++)
          {
             //�Ƚ��ַ������ strcmp
             if(strcmp(high[i],Mhigh)==0) {Msum+=(i+1)*13; break;}
          }
          for(i=0;i<13;i++)
          {
             if(strcmp(low[i],Mlow)==0) {Msum+=i; break;}
             else if(strcmp(high[i],Mlow)==0) {Msum+=(i+1)*13; break;}
          }
          cout<<Msum<<endl;
       }
    }

    return 0;
}



//��strtok���������ַ����ָ�
/*///////////////
//����strtokʵ��split,ֻ���ַ�������ã�string���Ͳ����ã�
//strtok()�������ַ����ָ��һ����Ƭ�Ρ�
//����strָ�����ָ���ַ���������delimiters��Ϊ�ָ��ַ�������strtok()�ڲ���str���ַ����з��ֵ�����delimiters�ķָ��ַ�ʱ��Ὣ���ַ���Ϊ'\0'�ַ���
//�ڵ�һ�ε���ʱ��strtok()����������str�ַ���������ĵ����򽫲���str���ó�NULL��ÿ�ε��óɹ��򷵻���һ���ָ����ַ���ָ�롣
#include <string.h>
#include <stdio.h>

int main()
{
        char s[] = "Golden Global      View,disk * desk";
        const char *d = " ,*";
        char *p;
        p = strtok(s,d);
        while(p)
        {
                printf("%s\n",p);
                p=strtok(NULL,d);
        }

        return 0;
}
*////////////////
