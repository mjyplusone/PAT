#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[61],str2[61],str3[61],str4[61];
    char DAY[7][4]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
    int i,j,len1,len2,count=0;
    gets(str1); gets(str2); gets(str3); gets(str4);
    len1=strlen(str1); len2=strlen(str2);
    for(i=0;i<(len1<len2?len1:len2);i++)
    {
       if(str1[i]==str2[i]&&count==0&&str1[i]>='A'&&str1[i]<='G') {printf("%s ",DAY[str1[i]-'A']); count++;}
       else if(str1[i]==str2[i]&&count==1)
       {
          if(str1[i]>='0'&&str1[i]<='9')
          {
             printf("%02d:",str1[i]-'0'); break;
          }
          else if(str1[i]>='A'&&str1[i]<='N')
          {
             printf("%02d:",str1[i]-'A'+10); break;
          }
       }
    }
    len1=strlen(str3); len2=strlen(str4);
    for(i=0;i<(len1<len2?len1:len2);i++)
    {
       if(str3[i]==str4[i]&&((str3[i]>='a'&&str2[i]<='z')||(str3[i]>='A'&&str2[i]<='Z')))
       {
          printf("%02d",i);
          break;
       }
    }
    return 0;
}
