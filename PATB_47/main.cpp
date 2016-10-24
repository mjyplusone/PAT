#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N,i,team,member,score;
    vector<int> sum(10001,0);
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
       scanf("%d-%d %d",&team,&member,&score);
       sum[team]+=score;
    }
    vector<int>::iterator iter=max_element(sum.begin(),sum.end());
    cout<<distance(sum.begin(),iter)<<" "<<*iter<<endl;

    return 0;
}
