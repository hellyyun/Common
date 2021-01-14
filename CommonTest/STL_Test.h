#pragma once
#include "TestBase.h"

struct stu
{
	string name;
	int age;

	stu()
	{
	}
};

class CSTL_Test :
	public CTestBase
{
public:

	CSTL_Test();
	virtual ~CSTL_Test();

public:
	virtual void printInfo();

private:
	void fun1(const map<int, stu*>& maptemp);

};


