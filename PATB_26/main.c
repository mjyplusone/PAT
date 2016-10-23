#include <stdio.h>
#include <stdlib.h>
#define CLK_TCK 100

int main()
{
    int c1,c2,h,m,s,time;
    scanf("%d%d",&c1,&c2);
    time=0.5+(c2-c1)*1.0/100;     //加0.5起到四舍五入的作用
    h=time/3600;
    m=time%3600/60;
    s=(int)time%3600%60;
    printf("%02d:%02d:%02d",h,m,s);

    return 0;
}
