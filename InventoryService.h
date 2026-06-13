#ifndef INVENTORYSERVICE_H
#define INVENTORYSERVICE_H

#include <iostream>
#include "Inventory.h"
#include "Product.h"

using namespace std;

class InventoryService {

private:
    Inventory& inventory;

public:

    InventoryService(Inventory& inventory)
        : inventory(inventory) {}

    void displayProducts() {

        for(auto product :
            inventory.getProducts()) {

            product->display();
        }
    }

    void searchProduct(int id) {

        for(auto product :
            inventory.getProducts()) {

            if(product->getId() == id) {

                product->display();
                return;
            }
        }

        cout << "Product Not Found\n";
    }

    void updateStock(int id, int qty) {

        for(auto product :
            inventory.getProducts()) {

                Product* p =
                    dynamic_cast<Product*>(product);

                if(p && p->getId() == id) {

                    p->updateQuantity(qty);

                    cout << "Stock Updated\n";
                    return;
                }
        }

        cout << "Product Not Found\n";
    }
};

#endif