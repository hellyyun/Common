#include "BitMap.h"

CBitMap::CBitMap()
{

}

CBitMap::~CBitMap()
{

}

void CBitMap::printInfo()
{
	CBitMap bm((size_t)-1);//store all unsigned int 
	bm.Set(3);
	bm.Set(111);
	bm.Set(222);
	bm.Set(3333);
	bm.Set(7777);
	bm.Set(9999);
	bm.Set(666666);
	bm.ReSet(1);
	bm.ReSet(666666);

	cout << bm.HasExisted(1) << endl;
	cout << bm.HasExisted(111) << endl;
	cout << bm.HasExisted(222) << endl;
	cout << bm.HasExisted(3333) << endl;
	cout << bm.HasExisted(7777) << endl;
	cout << bm.HasExisted(9999) << endl;
	cout << bm.HasExisted(666666) << endl;
}
