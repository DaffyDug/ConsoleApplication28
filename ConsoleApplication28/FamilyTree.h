#pragma once
#include "TreeCell.h"
#include <iostream>
class FamilyTree
{
	TreeCell* cell;
public:
	FamilyTree()
	{
		cell = new TreeCell("ты мужского пола?", 1);
		cell->right = new TreeCell("ты млекопитающее?", 3,cell);
		cell->right->right = new TreeCell("ты мисис паф", 7, cell->right);
		cell->right->left = new TreeCell("ты сенди", 6, cell->right);

		cell->left = new TreeCell("ты доволен жизнью?", 2, cell);
		cell->left->right = new TreeCell("ты сквидвард", 5, cell->left);
		cell->left->left = new TreeCell("ты тупой?", 4, cell->left);
		cell->left->left->right = new TreeCell("ты планктон", 8, cell->left->left);
		cell->left->left->left = new TreeCell("на сколько ?", 9, cell->left->left);
		cell->left->left->left->right = new TreeCell("ты патрик", 10, cell->left->left->left);
		cell->left->left->left->left = new TreeCell("ты спантч-БОБ", 11, cell->left->left->left);
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

