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
             //比较字符串相等 strcmp
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



//用strtok函数进行字符串分割
/*///////////////
//借助strtok实现split,只有字符数组可用，string类型不可用！
//strtok()用来将字符串分割成一个个片段。
//参数str指向欲分割的字符串，参数delimiters则为分割字符串，当strtok()在参数str的字符串中发现到参数delimiters的分割字符时则会将该字符改为'\0'字符。
//在第一次调用时，strtok()必需给予参数str字符串，往后的调用则将参数str设置成NULL。每次调用成功则返回下一个分割后的字符串指针。
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
