#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A[1001],Q[1001];
    int B,R,i,temp=0,j=0,flag=0;
    scanf("%s%d",A,&B);
    for(i=0;i<strlen(A);i++)
    {
       temp=temp*10+A[i]-'0';
       if(temp>=B)
       {
          Q[j++]=temp/B+'0';
          temp=temp%B;
          flag=1;
       }
       else if(flag==1) Q[j++]='0';
    }
    R=temp; Q[j]='\0';
    if(j==0) printf("0 %d",R);    //6 7
    else printf("%s %d",Q,R);

    return 0;
}
