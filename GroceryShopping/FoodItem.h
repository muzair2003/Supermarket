#pragma once
#include "Item.h"
#include <string>
using namespace std;

class FoodItem : public Item
{
public:
	FoodItem(string expiry, string name, float price, int barcode, int limit=0, float discounted_price=0, float weight=0);
	//FoodItem(string expiry, string name, float price, int barcode, int limit, float discounted_price);
	//FoodItem(string expiry, string name, float price, int barcode, int limit);
	//FoodItem(string expiry, string name, float price, int barcode);
	~FoodItem();
private:
	string m_expiry;
};




