#include <stdio.h>
#include <stdlib.h>

int cmp1(const void *a,const void *b)
{
   return *(int *)a-*(int *)b;
}

int cmp2(const void *a,const void *b)
{
   return *(int *)b-*(int *)a;
}

int main()
{
    int N,num1[4],num2[4],i,temp1,temp2,result;
    scanf("%d",&N);
    while(1)
    {
       num1[0]=num2[0]=N/1000;
       num1[1]=num2[1]=N/100%10;
       num1[2]=num2[2]=N/10%10;
       num1[3]=num2[3]=N%10;
       qsort(num1,4,sizeof(int),cmp1);
       qsort(num2,4,sizeof(int),cmp2);
       temp1=num1[0]*1000+num1[1]*100+num1[2]*10+num1[3];
       temp2=num2[0]*1000+num2[1]*100+num2[2]*10+num2[3];
       result=temp2-temp1;
       printf("%04d - %04d = %04d\n",temp2,temp1,result);
       if(result==6174||result==0) break;
       else N=result;
    }

    return 0;
}
