#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int N,i,school,score,max=0,maxnum=0;
    cin>>N;
    int *per=new int[N];      //!
    memset(per,0,N*sizeof(int));   //÷√0   <csting>
    for(i=0;i<N;i++)
    {
       cin>>school>>score;
       per[school]+=score;
       if(per[school]>max) {max=per[school]; maxnum=school;}
    }
    cout<<maxnum<<" "<<per[maxnum]<<endl;

    return 0;
}
