#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,step=0;
    scanf("%d",&n);
    while(n!=1)
    {
       if(n%2==0)
       {
          n=n/2;
          step++;
       }
       else
       {
          n=(3*n+1)/2;
          step++;
       }
    }
    printf("%d",step);


    return 0;
}
