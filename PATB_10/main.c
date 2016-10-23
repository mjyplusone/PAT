#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,flag=0;
    int coe,exp;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
       if(m*n)
       {
          coe=m*n;
          exp=n-1;
          if(flag==0) {printf("%d %d",coe,exp); flag=1;}
          else printf(" %d %d",coe,exp);
       }
    }
    if(flag==0) printf("0 0");

    return 0;
}
