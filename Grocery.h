#ifndef GROCERY_H
#define GROCERY_H

#include "Product.h"

class Grocery : public Product {

public:

    Grocery(int id, string name,
            double price, int quantity)
        : Product(id, name, price, quantity) {}

    void display() const override {

        cout << "\n[Grocery]"
             << "\nID: " << id
             << "\nName: " << name
             << "\nPrice: " << price
             << "\nQuantity: " << quantity
             << endl;
    }
};

#endif