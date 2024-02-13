#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <iostream>
class TreeCell
{
public:
	char _info[100];
	int _id;
	TreeCell* right=nullptr;
	TreeCell* left=nullptr;
	TreeCell* parent=nullptr;
	TreeCell(const char info[100], int id)
	{
		_id = id;
		strcpy_s(_info, info);

	}
	TreeCell(const char info[100], int id, TreeCell* p)
	{
		_id = id;
		strcpy_s(_info, info);
		parent = p;

	}
};

