#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,one[3]={0},two[3]={0},Ccount1=0,Ccount2=0,Jcount1=0,Jcount2=0,Bcount1=0,Bcount2=0;
    char jia,yi;
    scanf("%d",&N);
    getchar();   //处理回车
    for(i=0;i<N;i++)
    {
       scanf("%c %c",&jia,&yi);
       getchar();
       if((jia=='C'&&yi=='J')||(jia=='J'&&yi=='B')||(jia=='B'&&yi=='C'))
       {
          one[0]++; two[2]++;
          if(jia=='C') Ccount1++;
          else if(jia=='J') Jcount1++;
          else Bcount1++;
       }
       else if((jia=='C'&&yi=='C')||(jia=='J'&&yi=='J')||(jia=='B'&&yi=='B')) {one[1]++; two[1]++;}
       else
       {
          one[2]++; two[0]++;
          if(yi=='C') Ccount2++;
          else if(yi=='J') Jcount2++;
          else Bcount2++;
       }
    }
    printf("%d %d %d\n",one[0],one[1],one[2]);
    printf("%d %d %d\n",two[0],two[1],two[2]);
    if(Bcount1>=Ccount1)
    {
       if(Bcount1>=Jcount1) printf("B ");
       else printf("J ");
    }
    else
    {
       if(Ccount1>=Jcount1) printf("C ");
       else printf("J ");
    }

    if(Bcount2>=Ccount2)
    {
       if(Bcount2>=Jcount2) printf("B");
       else printf("J");
    }
    else
    {
       if(Ccount2>=Jcount2) printf("C");
       else printf("J");
    }

    return 0;
}
