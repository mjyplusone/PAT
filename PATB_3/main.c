#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    char str[101];
    int countP,countA,countT,posP,posT;
    scanf("%d",&n);
    while(n--)
    {
       countP=0; countA=0; countT=0;
       posP=0; posT=0;
       scanf("%s",str);
       for(i=0;i<strlen(str);i++)
       {
          if(str[i]=='P')
          {
            countP++;
            posP=i;
          }
          else if(str[i]=='A')
          {
             countA++;
          }
          else if(str[i]=='T')
          {
             countT++;
             posT=i;
          }
       }

       if(countP+countA+countT!=strlen(str) || posT-posP<=1 ||
          countP>1 || countT>1 || posP*(posT-posP-1)!=strlen(str)-posT-1)
         printf("NO\n");
       else printf("YES\n");

    }

    return 0;
}
