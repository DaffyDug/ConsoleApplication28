#pragma once
#include "TreeCell.h"
#include <iostream>
class FamilyTree
{
	TreeCell* cell;
public:
	FamilyTree()
	{
		cell = new TreeCell("�� �������� ����?", 1);
		cell->right = new TreeCell("�� �������������?", 3,cell);
		cell->right->right = new TreeCell("�� ����� ���", 7, cell->right);
		cell->right->left = new TreeCell("�� �����", 6, cell->right);

		cell->left = new TreeCell("�� ������� ������?", 2, cell);
		cell->left->right = new TreeCell("�� ���������", 5, cell->left);
		cell->left->left = new TreeCell("�� �����?", 4, cell->left);
		cell->left->left->right = new TreeCell("�� ��������", 8, cell->left->left);
		cell->left->left->left = new TreeCell("�� ������� ?", 9, cell->left->left);
		cell->left->left->left->right = new TreeCell("�� ������", 10, cell->left->left->left);
		cell->left->left->left->left = new TreeCell("�� ������-���", 11, cell->left->left->left);
	}
	TreeCell* getCell()
	{
		return cell;
	}
	void Yes()
	{
		cell = cell->left;
	}
	void No()
	{
		cell = cell->right;
	}
	void showinfo()
	{
		std::cout << cell->_info;
	}
};

