#include "Data_test.h"
#include <time.h>

CData_test::CData_test()
{

}

CData_test::~CData_test()
{

}

void CData_test::ConvertScreen(const int& nDeviceHeight, const int& nDeviceWidth, int& nAdHeight, int& nAdWidth)
{
	if (nDeviceHeight <= 0 || nDeviceWidth <= 0)
	{
		return;
	}

	float fScale = (float)nDeviceHeight / nDeviceWidth;

	if (fScale < 1.7) //小屏：按广告位尺寸
	{
		return;
	}
	if (fScale > 2.0) //大屏：16:9,>2.0 
	{
		nAdHeight = 1280;
		nAdWidth = 720;
	}
	else //中屏：3:2,1.7-2.0
	{
		nAdHeight = 960;
		nAdWidth = 640;
	}
}

void CData_test::printInfo()
{
	int nAdH = 960;
	int nAdW = 640;

	int nDevH = 640;
	int nDevW = 480;
	
	ConvertScreen(nDevH, nDevW, nAdH, nAdW);

	cout << "H-W:" << nAdH << "-" << nAdW << endl;


	time_t tNow = time(NULL);

	time_t tBegin = 1599613663;

	int nday = (tNow - tBegin) / 86400;

	cout << "nowtime = " << tNow << " nday = " <<nday << endl;


	otherObj.PrintDataIn();

	cout << "get private:" << otherObj.m_Str << endl;

}


CData_other::CData_other()
{
	m_Str = "who are you?";
}

void CData_other::PrintDataIn()
{
	cout << "printDataIn:" << m_Str << endl;
}
