#include "FoodItem.h"
#include <iostream>

using namespace std;
//FoodItem::FoodItem(string expiry, string name, float price, int barcode, int limit, float discounted_price) :
//	FoodItem(expiry, name, price, barcode, limit, discounted_price, 0)
//{
//	cout << "I am constructor Food Item #1" << endl;
//}
//FoodItem::FoodItem(string expiry, string name, float price, int barcode, int limit) :
//	FoodItem(expiry, name, price, barcode, limit, 0, 0)
//{
//
//	cout << "I am constructor Food Item #2" << endl;
//}
//
//FoodItem::FoodItem(string expiry, string name, float price, int barcode) :
//	FoodItem(expiry, name, price, barcode, 0, 0, 0)
//{
//	cout << "I am constructor Food Item #3" << endl;
//}
FoodItem::FoodItem(string expiry, string name, float price, int barcode, int limit, float discounted_price, float weight) :
	Item(name, price, barcode, limit, discounted_price, weight),
	m_expiry(expiry)
{
	cout << "I am constructor Food Item #4" << endl;
}

FoodItem::~FoodItem() {

}
