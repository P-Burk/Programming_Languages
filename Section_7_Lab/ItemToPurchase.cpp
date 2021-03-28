#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

// default constructor
ItemToPurchase::ItemToPurchase() {
    string itemName = "None";
    int itemPrice = 0;
    int itemQuantity = 0;
}

//overloaded constructor
ItemToPurchase::ItemToPurchase(string itemName, int itemPrice, int itemQuantity) {
    this->itemName = itemName;
    this->itemPrice = itemPrice;
    this->itemQuantity = itemQuantity;
}

void ItemToPurchase::SetName(string itemName) {
    this->itemName = itemName;
}

string ItemToPurchase::GetName() {
    return itemName;
}

void ItemToPurchase::SetPrice(int itemPrice) {
    this->itemPrice = itemPrice;
}

int ItemToPurchase::GetPrice() {
    return itemPrice;
}

void ItemToPurchase::SetQuantity(int itemQuantity) {
    this->itemQuantity = itemQuantity;
}

int ItemToPurchase::GetQuantity() {
    return itemQuantity;
}