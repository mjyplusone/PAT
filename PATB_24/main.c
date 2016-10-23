#include <stdio.h>
#include <stdlib.h>

int main()
{
    char num[10000],sign[2];
    int i,j=0,k,p=0,di[10000],zhi[9999],zhinum=0,wei=1;
    scanf("%s",num);
    sign[0]=num[0];
    for(i=1;i<strlen(num);i++)
    {
       if(i!=2)
       {
          if(num[i]!='E')  di[j++]=num[i]-'0';
          else break;
       }
    }
    sign[1]=num[i+1];
    for(k=i+2;k<strlen(num);k++)
    {
       zhi[p++]=num[k]-'0';
    }
    for(i=p-1;i>=0;i--)
    {
       zhinum+=zhi[i]*wei;
       wei*=10;
    }

    if(sign[0]=='-') printf("-");
    if(zhinum==0)
    {
       printf("%d",di[0]);
       printf(".");
       for(i=1;i<j;i++) printf("%d",di[i]);
    }
    else
    {
       if(sign[1]=='+')
       {
          if(zhinum<j-1)
          {
             for(i=0;i<zhinum+1;i++) printf("%d",di[i]);
             printf(".");
             for(i=zhinum+1;i<j;i++) printf("%d",di[i]);
          }
          else
          {
             for(i=0;i<j;i++) printf("%d",di[i]);
             for(i=0;i<zhinum-j+1;i++) printf("0");
          }
       }
       else
       {
          printf("0.");
          for(i=0;i<zhinum-1;i++) printf("0");
          for(i=0;i<j;i++) printf("%d",di[i]);
       }
    }


/*
    printf("%c\n",sign[0]);
    for(i=0;i<j;i++) printf("%d",di[i]);
    printf("\n");
    printf("%c\n",sign[1]);
    for(i=0;i<p;i++) printf("%d",zhi[i]);
    printf("\n");
    printf("%d\n",zhinum);*/

    return 0;
}
