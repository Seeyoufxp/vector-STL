#include "head.h"

void myPrint(int val)
{
    std::cout << val << std::endl;
}

void test01()
{
    std::vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    // std::vector<int>::iterator itBegin = v.begin();
    // std::vector<int>::iterator itEnd = v.end();

    // while(itBegin!=itEnd)
    // {
    //     std::cout << *itBegin << std::endl;
    //     itBegin++;
    // }

    // for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
    // {
    //     std::cout << *it << std::endl;
    // }

    for_each(v.begin(), v.end(), myPrint);
}
