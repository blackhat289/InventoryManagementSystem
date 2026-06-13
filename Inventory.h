#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include "IProduct.h"

using namespace std;

class Inventory {

private:
    vector<IProduct*> products;

public:

    void addProduct(IProduct* product) {
        products.push_back(product);
    }

    vector<IProduct*>& getProducts() {
        return products;
    }
};

#endif