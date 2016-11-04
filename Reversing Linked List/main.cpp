#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

typedef struct LNode
{
   int address;
   int data;
   int next;
};

int main()
{
    vector<LNode> vec(100000);
    vector<LNode> sort;
    vector<LNode> result;
    LNode temp;
    int first,N,K,i;

    scanf("%d%d%d",&first,&N,&K);
    for(i=0;i<N;i++)
    {
       scanf("%d%d%d",&temp.address,&temp.data,&temp.next);
       vec[temp.address]=temp;
    }

    if(first==-1) cout<<"-1"<<endl;
    else
    {
       int nextnode=first;
       while(nextnode!=-1)
       {
          sort.push_back(vec[nextnode]);
          nextnode=vec[nextnode].next;
       }
       int len=sort.size();
       int reserve=K-1;
       while(reserve<len)
       {
          for(i=reserve;i>=reserve-(K-1);i--) result.push_back(sort[i]);
          reserve+=K;
       }
       for(i=reserve-(K-1);i<len;i++) result.push_back(sort[i]);

       for(i=0;i<len-1;i++)
       {
          result[i].next=result[i+1].address;
          printf("%05d %d %05d\n",result[i].address,result[i].data,result[i].next);
       }
       printf("%05d %d %d\n",result[i].address,result[i].data,-1);
    }

    return 0;
}
