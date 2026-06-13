#include <iostream>
#include "Inventory.h"
#include "InventoryService.h"
#include "Electronics.h"
#include "Grocery.h"

using namespace std;

int main() {

    Inventory inventory;
    InventoryService service(inventory);

    int choice;

    do {

        cout << "\n===== INVENTORY MANAGEMENT =====";
        cout << "\n1. Add Electronics";
        cout << "\n2. Add Grocery";
        cout << "\n3. View Products";
        cout << "\n4. Search Product";
        cout << "\n5. Update Stock";
        cout << "\n0. Exit";

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch(choice) {

        case 1:
        case 2: {

            int id, qty;
            string name;
            double price;

            cout << "Enter Product ID: ";
            cin >> id;

            cin.ignore();

            cout << "Enter Product Name: ";
            getline(cin, name);

            cout << "Enter Price: ";
            cin >> price;

            cout << "Enter Quantity: ";
            cin >> qty;

            if(choice == 1)
                inventory.addProduct(
                    new Electronics(
                        id, name,
                        price, qty));

            else
                inventory.addProduct(
                    new Grocery(
                        id, name,
                        price, qty));

            cout << "Product Added\n";
            break;
        }

        case 3:
            service.displayProducts();
            break;

        case 4: {

            int id;

            cout << "Enter Product ID: ";
            cin >> id;

            service.searchProduct(id);
            break;
        }

        case 5: {

            int id, qty;

            cout << "Enter Product ID: ";
            cin >> id;

            cout << "Enter Quantity To Add: ";
            cin >> qty;

            service.updateStock(id, qty);
            break;
        }

        case 0:
            cout << "Thank You\n";
            break;

        default:
            cout << "Invalid Choice\n";
        }

    } while(choice != 0);

    return 0;
}