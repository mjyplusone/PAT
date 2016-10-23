#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
//InsertSort   MaergeSort   特点
// equal : 如果迭代器区间[first1，last1)和迭代器区间[first2， first2+(last1 - first1))上的元素相等（或者满足二元谓词判断条件binary_pred）
//返回true，否则返回false。
int main()
{
    int N,i,j,IsInsert=1;
    cin>>N;
    vector<int> a(N+1);
    vector<int> b(N+1);
    for(i=0;i<N;i++) cin>>a[i];
    for(i=0;i<N;i++) cin>>b[i];

    for(i=0;b[i]<=b[i+1]&&i<N-1;i++);
    for(j=i+1;j<N;j++)
    {
       if(a[j]!=b[j]) {IsInsert=0; break;}
    }
    if(IsInsert==1)
    {
       cout<<"Insertion Sort"<<endl;
       sort(&a[0],&a[i+2]);
       for(i=0;i<N-1;i++) cout<<a[i]<<" ";
       cout<<a[i]<<endl;
    }
    else
    {
       cout<<"Merge Sort"<<endl;
       int len=2;
       while(1)
       {
          for(i=0;i+len<N;i+=len) sort(&a[i],&a[i+len]);
          sort(&a[i],&a[N]);

          if(equal(a.begin(),a.end(),b.begin()))    //!
          {
             len*=2;
             for(i=0;i+len<N;i+=len) sort(&a[i],&a[i+len]);
             sort(&a[i],&a[N]);
             break;
          }
          len*=2;
       }

       for(i=0;i<N-1;i++) cout<<a[i]<<" ";
       cout<<a[i]<<endl;
    }

    return 0;
}
