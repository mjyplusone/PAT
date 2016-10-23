#include <stdio.h>
#include <stdlib.h>

typedef struct yuebing
{
   double num;    //注意是正数，包括正小数
   double cost;
   double scale;
}Yue;

int cmp(const void *a,const void *b)
{
   return ((Yue*)b)->cost*((Yue*)a)->num-((Yue*)a)->cost*((Yue*)b)->num;    //!!!这里直接写比例万一大0.几就被强制转换为0了
}

int main()
{
    int N,D,i;
    double sum=0,currentD=0;
    Yue yue[1001];
    scanf("%d%d",&N,&D);
    for(i=0;i<N;i++)
      scanf("%lf",&yue[i].num);
    for(i=0;i<N;i++)
      scanf("%lf",&yue[i].cost);
    for(i=0;i<N;i++)
      yue[i].scale=yue[i].cost/yue[i].num;
    qsort(yue,N,sizeof(Yue),cmp);
    for(i=0;i<N;i++)
    {
       if(currentD+yue[i].num<=D)
       {
          currentD+=yue[i].num;
          sum+=yue[i].cost;
       }
       else
       {
          sum+=(D-currentD)*yue[i].cost/yue[i].num;
          break;
       }
    }
    printf("%.2lf",sum);

    return 0;
}
