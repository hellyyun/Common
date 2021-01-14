#include "STL_Test.h"

#include <windows.h>

CSTL_Test::CSTL_Test()
{

}

CSTL_Test::~CSTL_Test()
{

}


void CSTL_Test::printInfo()
{
// 	for (int n = 0; n < 10; n++)
// 	{
// 
// 		cout << "tag:" << (0X1000700000000 + n) << endl;
// 
// 	}
// 
// 	std::map<int, stu*> m_1;
// 	std::map<int, stu*> m_2;
// 
// 	stu* tmp = new stu;
// 	tmp->name = "he";
// 	tmp->age = 21;
// 
// 	m_1[1] = tmp;
// 
// 	fun1(m_1);
// 
// 	m_2.swap(m_1);
// 
// 	fun1(m_2);
// 
// 	cout << "name: " << m_2[1]->name << " age: " << m_2[1]->age << endl;
// 
// 
// 	stu* tmp2 = new stu;
// 	tmp2->name = "xu";
// 	tmp2->age = 21;
// 
// 	m_1[1] = tmp2;
// 
// 	m_2.swap(m_1);
// 
// 	for (map<int, stu*>::iterator it = m_1.begin(); it != m_1.end(); it++)
// 	{
// 		delete it->second;
// 	}
// 	m_1.clear();
// 
// 	cout << "name: " << m_2[1]->name << " age: " << m_2[1]->age << endl;



	//////////////////////////////////////////////////////////////////////////

// 		map<long,string> mapTest;
// 		for (int n=0;n<20000000;n++)
// 		{
// 			mapTest[n] = "123456789123456789123456";
// 		}
// 
// 		__int64 nfind = ::GetTickCount64();
// 
// 
// 		map<long,string> mapTest1;
// 		mapTest1.swap(mapTest);
// 
// 		map<long,string>::iterator itGet = mapTest1.find(123456);
// 
// 
// 		cout<<"use time: "<<::GetTickCount64()-nfind<<"num:"<<itGet->second<<endl;

	/////////////////////////////////////////////////////////////////////////
	/*
	vector<string> vec1, vec2, vTmp,vRet;
	vec1.push_back("1");
	vec1.push_back("2");
	vec1.push_back("12");
	vec1.push_back("1333");
	vec1.push_back("1111");


	vec2.push_back("1");
	vec2.push_back("2");
	vec2.push_back("555");
	vec2.push_back("1333");
	vec2.push_back("3333");

	sort(vec1.begin(), vec1.end());
	sort(vec2.begin(), vec2.end());

	vTmp.resize(100);
	vector<string>::iterator it = std::set_intersection(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), vTmp.begin());
	vRet.assign(vTmp.begin(), it);

	for (int i=0; i< vRet.size(); i++)
	{
		cout << "vRet: " << vRet[i] << endl;
	}
	*/

	vector<int> vPrint;
	int a = 0, b = 0, c = 0;

	for (int n=0;n<a;n++)
	{
		vPrint.push_back(1);
	}
	for (int m = 0; m < b; m++)
	{
		vPrint.push_back(2);
	}
	for (int k = 0; k < c; k++)
	{
		vPrint.push_back(3);
	}

	int aCnt = 0;
	int bCnt = 0;
	int cCnt = 0;
	
	int nFor = 100;
	for (int i=0;i<nFor;i++)
	{
		int npos = rand() % (vPrint.size());
		cout << vPrint[npos] << endl;
	
		switch (vPrint[npos])
		{
		case 1:
			aCnt++;
			break;
		case 2:
			bCnt++;
			break;
		case 3:
			cCnt++;
			break;
		default:
			break;
		}
	}

	cout << "统计"<<nFor<< "次，1出现次数：" << aCnt << "  2出现次数：" << bCnt <<"  3出现次数："<<cCnt<< endl;


}



void CSTL_Test::fun1(const map<int, stu*>& maptemp)
{
	map<int, stu*>::const_iterator it = maptemp.begin();
	for (; it != maptemp.end(); it++)
	{
		cout << "test:" << it->second->name << endl;
	}
}