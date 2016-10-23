#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A[15],B[15],Da[2],Db[2];
    int i,j=0,k=0,Pa=0,Pb=0,da,db,wei=1;
    scanf("%s%s%s%s",A,Da,B,Db);
    da=Da[0]-'0'; db=Db[0]-'0';
    for(i=0;i<strlen(A);i++)
    {
       if(A[i]==Da[0]) {Pa+=da*wei; wei=wei*10;}
    }
    wei=1;
    for(i=0;i<strlen(B);i++)
    {
       if(B[i]==Db[0]) {Pb+=db*wei; wei=wei*10;}
    }
    printf("%d",Pa+Pb);

    return 0;
}
