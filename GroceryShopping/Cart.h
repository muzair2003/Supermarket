#pragma once
#include "Item.h"
#include <iostream>
#include <vector>
class Cart
{
public:
	Cart();
	~Cart();
	Item addItem(Item newItem, int quantity);
	float calculateTotal();
private:
	int m_quantity;
	Item m_newItem;
	
};

