#include "Cart.h"
#include "Item.h"
using namespace std;
vector<Item> allItems;
Cart::Cart()
{
}
Cart::~Cart()
{
}
Item addItem(Item newItem, int quantity) {
	for (int i = 0; i < quantity; i++) {
		allItems.push_back(newItem);
	}
}

float calculateTotal() {
	float sum;
	for (int i = 0; i < allItems.size(); i++) {
		sum += allItems[i].GetPrice();
	}
	return sum;
}
