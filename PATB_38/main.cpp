#include <iostream>
#include <algorithm>

//这不是我想出来的，看见别人帖子上写的
//这个思路很好，将分数作为数组的下标，而对应存放的，是该分数出现的次数。
//这样一来，数组控制在101的大小，不管你来多少个数。
//并且，在查找的时候，用数组的下标进行查找就可以了。
//这样的思路把问题简单化了100倍都不止啊，既省时间又省空间啊真是！

using namespace std;

int main()
{
    int N,N2,i,score[101]={0},temp;
    cin>>N;
    for(i=0;i<N;i++)
    {
       cin>>temp;
       score[temp]++;
    }
    cin>>N2;
    for(i=0;i<N2;i++)
    {
       cin>>temp;
       if(i!=N2-1) cout<<score[temp]<<" ";
       else cout<<score[temp]<<endl;
    }

    return 0;
}
