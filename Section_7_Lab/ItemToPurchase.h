#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase {
public:
    ItemToPurchase();
    ItemToPurchase(string itemName, int itemPrice, int itemQuantity);
    void SetName(string itemName);
    string GetName();
    void SetPrice(int itemPrice);
    int GetPrice();
    void SetQuantity(int itemQuantity);
    int GetQuantity();

private:
    string itemName;
    int itemPrice;
    int itemQuantity;


};

#endif