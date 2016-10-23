#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    char str[10001];
    int count[6]={0},i,j,len;
    cin>>str;
    for(i=0;i<strlen(str);i++)
    {
       if(str[i]=='P') count[0]++;
       else if(str[i]=='A') count[1]++;
       else if(str[i]=='T') count[2]++;
       else if(str[i]=='e') count[3]++;
       else if(str[i]=='s') count[4]++;
       else if(str[i]=='t') count[5]++;
    }
    len=*max_element(count,count+6);
    for(i=0;i<len;i++)
    {
       if(count[0]>0) {cout<<'P'; count[0]--;}
       if(count[1]>0) {cout<<'A'; count[1]--;}
       if(count[2]>0) {cout<<'T'; count[2]--;}
       if(count[3]>0) {cout<<'e'; count[3]--;}
       if(count[4]>0) {cout<<'s'; count[4]--;}
       if(count[5]>0) {cout<<'t'; count[5]--;}
    }

    return 0;
}
