#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

void findmn(int N,int &m,int &n)
{
   int i,minus=N;
   for(i=1;i<=sqrt(N);i++)
   {
      if(N%i==0)
      {
         if((N/i-i)<minus)
         {
            minus=N/i-i;
            n=i; m=N/i;
         }
      }
   }
}

bool cmp(int a,int b)
{
   return a>b;
}

int main()
{
    int N,m,n,i,j,num[10001];
    cin>>N;
    findmn(N,m,n);
    for(i=0;i<N;i++) cin>>num[i];
    sort(num,num+N,cmp);

    int up=0,down=m-1,left=0,right=n-1;
    int k=0;
    int result[10000][100];

    i=0;j=0;
    while(right>=left)
    {
       if(right==left)
       {
          for(i=up;i<=down;i++) result[i][j]=num[k++];
          break;
       }
       while(i==up&&(j>=left&&j<right)) {result[i][j]=num[k++]; j++;}
       while(j==right&&(i>=up&&i<down)) {result[i][j]=num[k++]; i++;}
       while(i==down&&(j>left&&j<=right)) {result[i][j]=num[k++]; j--;}
       while(j==left&&(i>up&&i<=down)) {result[i][j]=num[k++]; i--;}
       if(i==up&&j==left)
       {
          up++; down--; left++; right--;
          i=up; j=left;
       }
    }

    for(i=0;i<m;i++)
    {
       if(n>1)
       {
          for(j=0;j<n-1;j++)
            cout<<result[i][j]<<" ";
          cout<<result[i][j]<<endl;
       }
       else cout<<result[i][0]<<endl;
    }

    return 0;
}
