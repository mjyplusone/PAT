#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N,M,i,j;
    cin>>N>>M;

    int score[100],option[100],right[100];
    char ch[100][6];   //¸ø'\0'ÁôÎ»ÖÃ
    for(i=0;i<M;i++)
    {
       cin>>score[i]>>option[i]>>right[i];
       for(j=0;j<right[i];j++) cin>>ch[i][j];
       ch[i][j]='\0';
    }

    getchar();

    vector<int> error(100,0);
    int errorflag=0;
    for(i=0;i<N;i++)
    {
       int count=0,flag=0,Mnum=0,k=0;
       char ch1[100][6];
       string answer;
       getline(cin,answer);

       int j;
       for(j=0;j<answer.length();j++)
       {
          if(answer[j]=='('&&flag==0) flag=1;
          else if(answer[j]==')'&&flag==1) {ch1[Mnum][k]='\0'; flag=0; Mnum++; k=0;}
          else if(answer[j]>='a'&&answer[j]<='e'&&flag==1) ch1[Mnum][k++]=answer[j];
       }

       int sum=0;
       for(j=0;j<M;j++)
       {
          if(strcmp(ch[j],ch1[j])==0) sum+=score[j];
          else {error[j]++; errorflag=1;}
       }

       cout<<sum<<endl;
    }

    if(errorflag==0) cout<<"Too simple"<<endl;
    else
    {
       vector<int>::iterator iter=max_element(error.begin(),error.end());
       cout<<*iter;
       for(i=0;i<M;i++)
       {
          if(error[i]==*iter) cout<<" "<<i+1;
       }
       cout<<endl;
    }


    return 0;
}
