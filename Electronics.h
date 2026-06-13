#ifndef ELECTRONICS_H
#define ELECTRONICS_H

#include "Product.h"

class Electronics : public Product {

public:

    Electronics(int id, string name,
                double price, int quantity)
        : Product(id, name, price, quantity) {}

    void display() const override {
        cout << "\n[Electronics]"<< "\nID: " << id
            << "\nName: " << name
            << "\nPrice: " << price
            << "\nQuantity: " << quantity
            << endl;}
};

#endif