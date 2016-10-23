#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,num=1;
    double A,B,C;
    scanf("%d",&n);
    while(n--)
    {
       scanf("%lf%lf%lf",&A,&B,&C);
       if(A+B>C) printf("Case #%d: true\n",num++);
       else printf("Case #%d: false\n",num++);
    }

    return 0;
}
