#include <iostream>
#include <math.h>
#include <cstdio>

using namespace std;

int main()
{
    double R1,P1,R2,P2;
    double A,B;
    cin>>R1>>P1>>R2>>P2;
    A=R1*R2*cos(P1+P2);
    B=R1*R2*sin(P1+P2);
    if(A>-0.005&&A<0) A=0;
    if(B>-0.005&&B<0) B=0;    //考虑不出现-0.00形式
    if(B>=0) printf("%.2lf+%.2lfi",A,B);
    else if(B<0) printf("%.2lf%.2lfi",A,B);

    return 0;
}
