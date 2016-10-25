#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string str[3];
    char ch[30][5]={};
    int i,j,k,flag,count;
    for(i=0;i<3;i++)
    {
       getline(cin,str[i]);
       flag=0;k=0;count=-1;
       for(j=0;j<str[i].length();j++)
       {
          if(str[i][j]=='[') {flag=1; count++;}
          else if(str[i][j]==']') {ch[i*10+count][k]='\0'; flag=0; k=0;}
          else if(flag==1) ch[i*10+count][k++]=str[i][j];
       }
    }

    int N,five=5,temp,hang;
    cin>>N;
    for(i=0;i<N;i++)
    {
       char result[5][6];
       k=0; flag=0;

       for(j=0;j<five;j++)
       {
          cin>>temp;
          if(j==0)
          {
             hang=0;
             //要输出“\”，需要添加转移字符“\\”，例如，输出“\/”，cout<<"\\/"；
             if(strcmp(ch[hang*10+temp-1],"")==0) {cout<<"Are you kidding me? @\\/@"<<endl; flag=1; break;}
             else strcpy(result[k++],ch[hang*10+temp-1]);
             //cout<<ch[hang*10+temp-1]<<'(';
          }
          else if(j==1||j==3)
          {
             hang=1;
             if(strcmp(ch[hang*10+temp-1],"")==0) {cout<<"Are you kidding me? @\\/@"<<endl; flag=1; break;}
             else strcpy(result[k++],ch[hang*10+temp-1]);
             //cout<<ch[hang*10+temp-1];
          }
          else if(j==2)
          {
             hang=2;
             if(strcmp(ch[hang*10+temp-1],"")==0) {cout<<"Are you kidding me? @\\/@"<<endl; flag=1; break;}
             else strcpy(result[k++],ch[hang*10+temp-1]);
             //cout<<ch[hang*10+temp-1];
          }
          else if(j==4)
          {
             hang=0;
             if(strcmp(ch[hang*10+temp-1],"")==0) {cout<<"Are you kidding me? @\\/@"<<endl; flag=1; break;}
             else strcpy(result[k++],ch[hang*10+temp-1]);
             //cout<<')'<<ch[hang*10+temp-1];
          }
       }
       if(flag==0)
       {
          cout<<result[0]<<"(";
          for(k=1;k<4;k++) cout<<result[k];
          cout<<")"<<result[4]<<endl;
       }
       else flag=0;
    }

    return 0;
}
