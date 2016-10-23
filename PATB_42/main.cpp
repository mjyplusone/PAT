#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;

// C++ STL �������е����ֵ����Сֵ
//min_element(v.begin(),v.end()) max_element(v.begin(),v.end()) sizeof(n)/sizeof(int)
//min_element �㷨������С��Ԫ�ص�λ�������� [first, last)��
//ʹ��STL��Vectorʱ�����ú��� max_element��min_element��distance���Ի�ȡVector�������Сֵ��ֵ��λ��������
//std::vector<double>::iterator biggest = std::max_element(std::begin(v), std::end(v));
//std::cout << "Max element is " << *biggest<< " at position " << std::distance(std::begin(v), biggest) << std::endl;

int main()
{
    string str;    //Ҫ��getline�������string����
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

    //distance����int��
    ch=distance(count.begin(),iter)+'a';

    cout<<ch<<" "<<*iter<<endl;

    return 0;
}
