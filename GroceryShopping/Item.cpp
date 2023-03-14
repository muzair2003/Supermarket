#include "Item.h"
#include <iostream>
using namespace std;
Item::Item():
	m_price(0),
	m_name(""),
	m_barcode(0),
	m_discounted_price(0),
	m_weight(0),
	m_limit(0)
{

}
Item::Item(string name, float price, int barcode, int limit, float discounted_price, float weight) :
	m_price(price),
	m_name(name),
	m_barcode(barcode),
	m_discounted_price(discounted_price),
	m_weight(weight),
	m_limit(limit)
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