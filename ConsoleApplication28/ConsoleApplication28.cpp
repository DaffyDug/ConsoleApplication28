#include <iostream>
#include "CircleQueue.h"
#include "Stack.h"
#include <time.h>
#include "FamilyTree.h"
using namespace std;
int main()
{
	system("chcp 1251");
	FamilyTree test;
	while (test.getCell()!=nullptr)
	{
		test.showinfo();
		int x;
		cin >> x;
		if (x==1)
			test.Yes();
		else
		{
			test.No();
		}

	}

}