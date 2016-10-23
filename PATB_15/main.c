#include <stdio.h>
#include <stdlib.h>

typedef struct score
{
   int num;
   int de;
   int cai;
   int all;
}Student;

int cmp(const void *a,const void *b)
{
   if((((Student*)b)->all==((Student*)a)->all))
   {
      if((((Student*)b)->de==((Student*)a)->de))
         return ((Student*)a)->num-((Student*)b)->num;
      else return ((Student*)b)->de-((Student*)a)->de;
   }
   else return ((Student*)b)->all-((Student*)a)->all;
}

int main()
{
    int L,H,N,i,t1=0,t2=0,t3=0,t4=0;
    Student *type1 = (Student *)malloc(100000*sizeof(Student));
    Student *type2 = (Student *)malloc(100000*sizeof(Student));
    Student *type3 = (Student *)malloc(100000*sizeof(Student));
    Student *type4 = (Student *)malloc(100000*sizeof(Student));
    Student temp;
    scanf("%d%d%d",&N,&L,&H);
    for(i=0;i<N;i++)
    {
       scanf("%d%d%d",&temp.num,&temp.de,&temp.cai);
       temp.all=temp.de+temp.cai;

       if(temp.de>=L&&temp.cai>=L)
       {
          if(temp.de>=H&&temp.cai>=H)
          {
             type1[t1++]=temp;
          }
          else if(temp.de>=H&&temp.cai<H)
          {
             type2[t2++]=temp;
          }
          else if(temp.de<H&&temp.cai<H&&temp.de>=temp.cai)
          {
             type3[t3++]=temp;
          }
          else
          {
             type4[t4++]=temp;
          }
       }
    }
    qsort(type1,t1,sizeof(Student),cmp);
    qsort(type2,t2,sizeof(Student),cmp);
    qsort(type3,t3,sizeof(Student),cmp);
    qsort(type4,t4,sizeof(Student),cmp);

    printf("%d\n",t1+t2+t3+t4);
    for(i=0;i<t1;i++)
       printf("%d %d %d\n",type1[i].num,type1[i].de,type1[i].cai);
    for(i=0;i<t2;i++)
       printf("%d %d %d\n",type2[i].num,type2[i].de,type2[i].cai);
    for(i=0;i<t3;i++)
       printf("%d %d %d\n",type3[i].num,type3[i].de,type3[i].cai);
    for(i=0;i<t4;i++)
       printf("%d %d %d\n",type4[i].num,type4[i].de,type4[i].cai);

    return 0;
}
