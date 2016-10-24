#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char A[101],B[101],result[101];
    int i,j,count=1,k=0,temp;
    cin>>A>>B;
    for(i=strlen(A)-1,j=strlen(B)-1;i>=0&&j>=0;i--,j--)
    {
       if(count%2!=0)
       {
          temp=(A[i]-'0'+B[j]-'0')%13;
          if(temp<10) result[k++]=temp+'0';
          else if(temp==10) result[k++]='J';
          else if(temp==11) result[k++]='Q';
          else if(temp==12) result[k++]='K';
       }
       else
       {
          if(B[j]-A[i]>=0) result[k++]=B[j]-A[i]+'0';
          else result[k++]=B[j]-A[i]+10+'0';
       }
       count++;
    }

    while(i>=0)
    {
       if(count%2!=0) result[k++]=A[i];
       else
       {
          if(A[i]=='0') result[k++]='0';   //!
          else result[k++]='0'-A[i]+10+'0';
       }
       i--; count++;
    }
    while(j>=0)
    {
       result[k++]=B[j];
       j--;
    }

    for(i=k-1;i>=0;i--) cout<<result[i];
    cout<<endl;

    return 0;
}
