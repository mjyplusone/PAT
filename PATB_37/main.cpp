#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int Galleon1,Sickle1,Knut1,Galleon2,Sickle2,Knut2,i;
    int Galleon,Sickle,Knut;
    int sum1,sum2,sum;
    scanf("%d.%d.%d %d.%d.%d",&Galleon1,&Sickle1,&Knut1,&Galleon2,&Sickle2,&Knut2);
    sum1=Galleon1*17*29+Sickle1*29+Knut1;
    sum2=Galleon2*17*29+Sickle2*29+Knut2;
    if(sum1>sum2)
    {
       printf("-");
       sum=sum1-sum2;
       Galleon=sum/(17*29);
       Sickle=sum/29%17;
       Knut=sum%29;
       printf("%d.%d.%d\n",Galleon,Sickle,Knut);
    }
    else
    {
       sum=sum2-sum1;
       Galleon=sum/(17*29);
       Sickle=sum/29%17;
       Knut=sum%29;
       printf("%d.%d.%d\n",Galleon,Sickle,Knut);
    }

    return 0;
}
