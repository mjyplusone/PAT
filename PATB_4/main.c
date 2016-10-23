#include <stdio.h>
#include <stdlib.h>

typedef struct Student
{
   char name[11];
   char num[11];
   int score;
}Student;

int main()
{
    int i,n,max=0,min=0,smin=100,smax=0;
    scanf("%d",&n);
    Student stu[1000];
    for(i=0;i<n;i++)
    {
       scanf("%s %s %d",stu[i].name,stu[i].num,&stu[i].score);
       if(stu[i].score>=smax) {smax=stu[i].score; max=i;}
       if(stu[i].score<=smin)  {smin=stu[i].score; min=i;}
    }
    printf("%s %s\n",stu[max].name,stu[max].num);
    printf("%s %s\n",stu[min].name,stu[min].num);

    return 0;
}
