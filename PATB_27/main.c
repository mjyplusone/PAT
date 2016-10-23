#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,line,rest=0,num,i,j,space=0;
    char ch;
    scanf("%d %c",&N,&ch);
    while(sqrt((N-rest+1)*1.0/2)!=(int)(sqrt((N-rest+1)*1.0/2)))
    {
       rest++;
    }

    line=sqrt((N-rest+1)*1.0/2);
    num=2*line-1;

    for(i=0;i<line;i++)
    {
       space=i*1;
       for(j=0;j<space;j++) printf(" ");
       for(j=0;j<num;j++) printf("%c",ch);
       //for(j=0;j<space;j++) printf(" ");   //注意不要输出多余的空格
       printf("\n");
       num-=2;
    }

    num+=2;

    for(i=line-2;i>=0;i--)
    {
       space=i*1;
       num+=2;
       for(j=0;j<space;j++) printf(" ");
       for(j=0;j<num;j++) printf("%c",ch);
       //for(j=0;j<space;j++) printf(" ");
       printf("\n");
    }
    printf("%d",rest);

    return 0;
}
