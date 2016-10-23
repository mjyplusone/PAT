#include <stdio.h>
#include <stdlib.h>

int main()
{
    char num[1001];
    int i,count[10]={0};
    scanf("%s",num);
    for(i=0;i<strlen(num);i++)
    {
       count[num[i]-'0']++;
    }
    for(i=0;i<10;i++)
    {
       if(count[i]!=0)
         printf("%d:%d\n",i,count[i]);
    }

    return 0;
}
