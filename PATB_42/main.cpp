#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

// C++ STL 求向量中的最大值和最小值
//min_element(v.begin(),v.end()) max_element(v.begin(),v.end()) sizeof(n)/sizeof(int)
//min_element 算法返回最小的元素的位置中序列 [first, last)。
//使用STL的Vector时，利用函数 max_element，min_element，distance可以获取Vector中最大、最小值的值和位置索引：
//std::vector<double>::iterator biggest = std::max_element(std::begin(v), std::end(v));
//std::cout << "Max element is " << *biggest<< " at position " << std::distance(std::begin(v), biggest) << std::endl;

int main()
{
    string str;    //要用getline读入必须string类型
    char ch;
    int i;
    vector<int> count(26);
    getline(cin,str);
    for(i=0;i<str.length();i++)
    {
       if(str[i]>='A'&&str[i]<='Z') {str[i]+=32; count[str[i]-'a']++;}
       else if(str[i]>='a'&&str[i]<='z') count[str[i]-'a']++;
    }

    vector<int>::iterator iter=max_element(count.begin(),count.end());

    //distance返回int型
    ch=distance(count.begin(),iter)+'a';

    cout<<ch<<" "<<*iter<<endl;

    return 0;
}
