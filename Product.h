#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
#include <string>
#include "IProduct.h"

using namespace std;

class Product : public IProduct {

protected:
    int id;
    string name;
    double price;
    int quantity;

public:

    Product(int id, string name,double price, int quantity){
            this->id = id;
            this->name = name;
            this->price = price;
            this->quantity = quantity;}

    int getId() const override {
        return id;}

    void updateQuantity(int qty) {
        quantity += qty;}

    int getQuantity() const {
        return quantity;
    }

    virtual void display() const = 0;
};

#endif