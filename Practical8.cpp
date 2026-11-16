
#include <iostream>
using namespace std;

class Database {
private:
    static Database* instance;

    Database() {
        cout << "Database connection created." << endl;
    }

public:
    static Database* getInstance() {
        if (instance == nullptr) {
            instance = new Database();
        }
        return instance;
    }

    void showMessage() {
        cout << "Connected to University Database." << endl;
    }

    Database(const Database&) = delete;
    Database& operator=(const Database&) = delete;
};

Database* Database::instance = nullptr;

int main() {
    Database* db1 = Database::getInstance();
    db1->showMessage();

    Database* db2 = Database::getInstance();

    if (db1 == db2) {
        cout << "Both objects refer to the same instance." << endl;
    }

    return 0;
}
