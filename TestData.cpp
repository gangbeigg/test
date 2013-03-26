// TestData.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <map>
using namespace std;

void test(int& a)
{
    a = 1;
}

int main(int argc, char* argv[])
{
    printf("%s  \n", argv[0]);
    map<int, int> myMap;
    myMap[1] = 1;
    cout << myMap[1] << endl;
    myMap.erase(2);
    cout << (0 >> 4) << endl;
    char* p = new char[10 * 1024 * 1024];
    char* temp = NULL;
    delete []temp;

    int *pInt = NULL;
    cout << "sizeof: " << sizeof * pInt << endl;
    getchar();
	return 0;
}

