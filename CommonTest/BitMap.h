#pragma once
#include "TestBase.h"

#include <vector>

class CBitMap :
	public CTestBase
{
public:
	CBitMap();
	CBitMap(size_t num)
	{
		_v.resize((num >> 5) + 1);
	}
	virtual ~CBitMap();

public:
	virtual void printInfo();


public:

	void Set(size_t num) //set 1
	{
		size_t index = num >> 5;
		size_t pos = num % 32;
		_v[index] |= (1 << pos);
	}

	void ReSet(size_t num) //set 0
	{
		size_t index = num >> 5;
		size_t pos = num % 32;
		_v[index] &= ~(1 << pos);
	}

	bool HasExisted(size_t num)//check whether it exists
	{
		size_t index = num >> 5;
		size_t pos = num % 32;
		bool flag = false;
		if (_v[index] & (1 << pos))
			flag = true;
		return flag;

	}

private:
	vector<size_t> _v;

};

