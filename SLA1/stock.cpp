#include <iostream>
using namespace std;

class Stock
{
private:
    int stockLevel;
    float unitPrice;

public:
    // Set values
    void setValues(int s, float p)
    {
        stockLevel = s;
        unitPrice = p;
    }

    // Get stock level
    int getStockLevel()
    {
        return stockLevel;
    }

    // Get unit price
    float getUnitPrice()
    {
        return unitPrice;
    }

    // Stock receipt
    void receiveStock(int qty)
    {
        stockLevel = stockLevel + qty;
        cout << "Stock received successfully.\n";
    }

    // Stock issue
    void issueStock(int qty)
    {
        if (qty <= stockLevel)
        {
            stockLevel = stockLevel - qty;
            cout << "Stock issued successfully.\n";
        }
        else
        {
            cout << "Not enough stock available.\n";
        }
    }
};

int main()
{
    Stock s;
    int choice, qty, level;
    float price;

    do
    {
    
        cout << "1. Set Stock Details\n";
        cout << "2. Display Stock Details\n";
        cout << "3. Receive Stock\n";
        cout << "4. Issue Stock\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter Stock Level: ";
            cin >> level;
            cout << "Enter Unit Price: ";
            cin >> price;
            s.setValues(level, price);
            break;

        case 2:
            cout << "Stock Level: " << s.getStockLevel() << endl;
            cout << "Unit Price: " << s.getUnitPrice() << endl;
            break;

        case 3:
            cout << "Enter quantity to receive: ";
            cin >> qty;
            s.receiveStock(qty);
            break;

        case 4:
            cout << "Enter quantity to issue: ";
            cin >> qty;
            s.issueStock(qty);
            break;

        case 5:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}