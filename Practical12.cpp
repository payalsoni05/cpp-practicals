#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include <iomanip>
#include <stdexcept>
#include <limits>
using namespace std;

// Base class
class InventoryItem {
protected:
    int id;
    string name;

public:
    InventoryItem(int i, string n) : id(i), name(n) {}

    virtual void display() const = 0;
    virtual ~InventoryItem() {}

    int getId() const {
        return id;
    }
};

// Derived class
class Product : public InventoryItem {
private:
    int quantity;
    double price;

public:
    Product(int i, string n, int q, double p)
        : InventoryItem(i, n), quantity(q), price(p) {}

    int getQuantity() const {
        return quantity;
    }

    void setQuantity(int q) {
        if (q < 0)
            throw invalid_argument("Quantity cannot be negative.");
        quantity = q;
    }

    void sell(int q) {
        if (q <= 0)
            throw invalid_argument("Enter a valid selling quantity.");

        if (q > quantity)
            throw runtime_error("Not enough stock available.");

        quantity -= q;
    }

    void display() const override {
        cout << "ID: " << id
             << " | Name: " << name
             << " | Quantity: " << quantity
             << " | Price: Rs. " << fixed << setprecision(2)
             << price << endl;
    }

    string toCSV() const {
        stringstream ss;
        ss << id << "," << name << ","
           << quantity << "," << price;
        return ss.str();
    }
};

// Inventory management class
class Inventory {
private:
    vector<Product> products;

    Product* findProduct(int id) {
        for (auto &p : products) {
            if (p.getId() == id)
                return &p;
        }
        return nullptr;
    }

public:
    void addProduct(int id, string name, int quantity, double price) {
        if (id <= 0 || name.empty() || quantity < 0 || price < 0)
            throw invalid_argument("Invalid product details.");

        if (findProduct(id) != nullptr)
            throw runtime_error("Product ID already exists.");

        products.push_back(Product(id, name, quantity, price));
        saveToFile();
        cout << "Product added successfully!\n";
    }

    void searchProduct(int id) {
        Product* p = findProduct(id);

        if (p == nullptr)
            throw runtime_error("Product not found.");

        p->display();
    }

    void displayAll() const {
        if (products.empty()) {
            cout << "No products available.\n";
            return;
        }

        cout << "\n--- INVENTORY LIST ---\n";
        for (const auto &p : products)
            p.display();
    }

    void updateQuantity(int id, int quantity) {
        Product* p = findProduct(id);

        if (p == nullptr)
            throw runtime_error("Product not found.");

        p->setQuantity(quantity);
        saveToFile();
        cout << "Quantity updated successfully!\n";
    }

    void sellProduct(int id, int quantity) {
        Product* p = findProduct(id);

        if (p == nullptr)
            throw runtime_error("Product not found.");

        p->sell(quantity);
        saveToFile();
        cout << "Product sold successfully!\n";
    }

    void saveToFile() const {
        ofstream file("inventory.csv");

        if (!file)
            throw runtime_error("Unable to save inventory file.");

        for (const auto &p : products)
            file << p.toCSV() << "\n";

        file.close();
    }

    void loadFromFile() {
        ifstream file("inventory.csv");

        if (!file)
            return;

        string line;
        while (getline(file, line)) {
            try {
                stringstream ss(line);
                string idText, name, quantityText, priceText;

                getline(ss, idText, ',');
                getline(ss, name, ',');
                getline(ss, quantityText, ',');
                getline(ss, priceText);

                int i = stoi(idText);
                int q = stoi(quantityText);
                double p = stod(priceText);

                if (i > 0 && !name.empty() && q >= 0 && p >= 0
                    && findProduct(i) == nullptr) {
                    products.push_back(Product(i, name, q, p));
                }
            }
            catch (...) {
                cout << "Skipping an invalid record in CSV file.\n";
            }
        }

        file.close();
    }
};

int main() {
    Inventory inventory;
    inventory.loadFromFile();

    int choice;

    do {
        cout << "\n===== INVENTORY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Product\n";
        cout << "2. Search Product\n";
        cout << "3. Display All Products\n";
        cout << "4. Update Quantity\n";
        cout << "5. Sell Product\n";
        cout << "6. Save Inventory\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";

        if (!(cin >> choice)) {
            cout << "Invalid input. Enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        try {
            int id, quantity;
            string name;
            double price;

            switch (choice) {
            case 1:
                cout << "Enter Product ID: ";
                cin >> id;
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                cout << "Enter Product Name: ";
                getline(cin, name);

                cout << "Enter Quantity: ";
                cin >> quantity;

                cout << "Enter Price: ";
                cin >> price;

                if (!cin)
                    throw invalid_argument("Invalid product input.");

                inventory.addProduct(id, name, quantity, price);
                break;

            case 2:
                cout << "Enter Product ID: ";
                cin >> id;
                inventory.searchProduct(id);
                break;

            case 3:
                inventory.displayAll();
                break;

            case 4:
                cout << "Enter Product ID: ";
                cin >> id;
                cout << "Enter New Quantity: ";
                cin >> quantity;

                if (!cin)
                    throw invalid_argument("Invalid quantity.");

                inventory.updateQuantity(id, quantity);
                break;

            case 5:
                cout << "Enter Product ID: ";
                cin >> id;
                cout << "Enter Selling Quantity: ";
                cin >> quantity;

                if (!cin)
                    throw invalid_argument("Invalid quantity.");

                inventory.sellProduct(id, quantity);
                break;

            case 6:
                inventory.saveToFile();
                cout << "Inventory saved successfully!\n";
                break;

            case 7:
                inventory.saveToFile();
                cout << "Thank you! Exiting program.\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
            }
        }
        catch (const exception &e) {
            cout << "Error: " << e.what() << endl;
            if (!cin)
                cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

    } while (choice != 7);

    return 0;
}
