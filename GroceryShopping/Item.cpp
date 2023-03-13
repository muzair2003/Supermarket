#include "Item.h"
#include <iostream>
using namespace std;

Item::Item(string name, float price, int barcode, int limit, float discounted_price, float weight) :
	m_price(price),
	m_name(name),
	m_barcode(barcode),
	m_discounted_price(discounted_price),
	m_weight(weight)
{
	cout << "I am constructor Item #1" << endl;
}
//Item::Item(string name, float price, int barcode, int limit, float discounted_price) :
//	Item(name, price, barcode, discounted_price, 0, 0)
//{
//	cout << "I am constructor Item #2" << endl;
//}
//Item::Item(string name, float price, int barcode, int limit) :
//	Item(name, price, barcode, limit, 0, 0)
//{
//	cout << "I am constructor Item #3" << endl;
//}
//Item::Item(string name, float price, int barcode) :
//	Item(name, price, barcode, 0, 0, 0)
//{
//	cout << "I am constructor Item #4" << endl;
//}
Item:: ~Item() {

}