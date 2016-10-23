#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[1000]; int num[1000];
    char zimu[10][10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    int len,i,sum=0,j=0,k=0;
    int result1[10];char result2[3];
    scanf("%s",str);
    len=strlen(str);


    for(i=0;i<len;i++)
    {
       num[i]=str[i]-'0';
       sum+=num[i];
    }

    while(sum!=0)
    {
       result1[j++]=sum%10;
       sum=sum/10;
    }

    for(i=j-1;i>0;i--)
       printf("%s ",zimu[result1[i]]);
    if(i==0) printf("%s",zimu[result1[i]]);

    return 0;
}
