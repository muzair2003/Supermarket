#include "FoodItem.h"
#include <iostream>

using namespace std;
FoodItem::FoodItem(string expiry, string name, float price, int barcode, int limit, float discounted_price, float weight) :
	Item(name, price, barcode, limit, discounted_price, weight),
	m_expiry(expiry)
{
	cout << "I am constructor Food Item #4" << endl;
}

FoodItem::~FoodItem() {

}


