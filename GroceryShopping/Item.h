#pragma once
#include <string>
using namespace std;
class Item
{
public:
	Item();
	Item(string name, float price, int barcode, int limit=0, float discounted_price=0, float weight=0);
	~Item();

	float GetPrice() {
		return m_price;
	}
private:
	float m_price;
	float m_weight;
	float m_discounted_price;
	string m_name;
	int m_barcode;
	int m_limit;

};

