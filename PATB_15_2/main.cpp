#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct Student
{
   int num;
   int de;
   int cai;
   int all;

   bool operator < (const Student &A) const
   {
      if(all!=A.all)
         return all>A.all;
      else
      {
         if(de!=A.de) return de>A.de;
         else return num<A.num;
      }
   }
};

int main()
{
    int L,H,N,i,count=0;
    Student temp;
    vector<Student>v1,v2,v3,v4;
    scanf("%d%d%d",&N,&L,&H);
    for(i=0;i<N;i++)
    {
       scanf("%d%d%d",&temp.num,&temp.de,&temp.cai);
       temp.all=temp.de+temp.cai;

       if(temp.de>=L&&temp.cai>=L)
       {
          count++;
          if(temp.de>=H&&temp.cai>=H)
          {
             v1.push_back(temp);
          }
          else if(temp.de>=H&&temp.cai<H)
          {
             v2.push_back(temp);
          }
          else if(temp.de<H&&temp.cai<H&&temp.de>=temp.cai)
          {
             v3.push_back(temp);
          }
          else
          {
             v4.push_back(temp);
          }
       }
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    sort(v3.begin(),v3.end());
    sort(v4.begin(),v4.end());

    cout<<count<<endl;
    vector<Student>::iterator itr;
    for(itr=v1.begin();itr!=v1.end();itr++)
      printf("%d %d %d\n",itr->num,itr->de,itr->cai);
    for(itr=v2.begin();itr!=v2.end();itr++)
      printf("%d %d %d\n",itr->num,itr->de,itr->cai);
    for(itr=v3.begin();itr!=v3.end();itr++)
      printf("%d %d %d\n",itr->num,itr->de,itr->cai);
    for(itr=v4.begin();itr!=v4.end();itr++)
      printf("%d %d %d\n",itr->num,itr->de,itr->cai);


    return 0;
}
