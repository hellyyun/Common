// CommonTest.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

#include "TestBase.h"
#include "STL_Test.h"
#include "Data_test.h"
#include "BitMap.h"

int main()
{
	char inchar;
	cout << "请选择需要调试的信息" << endl;
	cout << "0 - 基础结构算法测试" << endl;
	cout << "1 - stl测试类" << endl;
	cout << "2 - BitMap" << endl;

	cin >> inchar;

	CTestBase* tesbaseObj = NULL;
	switch (inchar)
	{
	case '0':
	{
		tesbaseObj = new CData_test();
		break;
	}
	case '1':
	{
		tesbaseObj = new CSTL_Test();
		break;
	}
	case '2':
	{
		tesbaseObj = new CBitMap();
		break;
	}
	default:
		break;
	}

	if (tesbaseObj != NULL)
	{
		tesbaseObj->printInfo();


		//end
		delete tesbaseObj;
		tesbaseObj = NULL;
	}



	return 0;
}

