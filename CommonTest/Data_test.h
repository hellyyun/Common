#pragma once
#include "TestBase.h"

class CData_other
{
public:
	CData_other();
	~CData_other() {};

private:
	friend class CData_test;

	/*friend*/ void PrintDataIn();

	string m_Str;
};

class CData_test :
	public CTestBase
{
public:
	CData_test();
	virtual ~CData_test();

public:
	void ConvertScreen(const int& nDeviceHeight, const int& nDeviceWidth, int& nAdHeight, int& nAdWidth);
	virtual void printInfo();

	CData_other otherObj;

};



