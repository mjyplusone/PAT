#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>

using namespace std;

typedef struct People
{
   char name[6];
   char birth[11];
};

int cmp(char a[11],char b[11])   //>:1   <=:0
{
   int i;
   for(i=0;i<10;i++)
   {
      if(a[i]-b[i]>0) return 1;
      else if(a[i]-b[i]<0) return 0;
   }
   return 0;
}

int main()
{
    int N,i,count=0;
    char a[6],b[11],big[11]="2014/09/07",small[11]="1814/09/05",
    maxa[6],maxb[11]="1814/09/06",mina[6],minb[11]="2014/09/06";
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
       scanf("%s%s",a,b);
       if(cmp(b,small) && cmp(big,b))
       {
          count++;
          if(cmp(b,maxb)) {strcpy(maxa,a); strcpy(maxb,b);}
          if(cmp(minb,b)) {strcpy(mina,a); strcpy(minb,b);}
       }
    }
    if(count==0) printf("0");
    else printf("%d %s %s\n",count,mina,maxa);

    return 0;
}
