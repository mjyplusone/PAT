#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20][81],string[81];
    int i=0,j=0,k=0;
    gets(string);
    for(i=0;i<strlen(string);i++)
    {
       if(string[i]==' ')
       {
          str[j][k]='\0';   //!!
          k=0; j++;
       }
       else
          str[j][k++]=string[i];
    }
    str[j][k]='\0';  //!!
    for(i=j;i>0;i--)
      printf("%s ",str[i]);
    printf("%s",str[0]);


    return 0;
}
