
#include <iostream>
#include <exception>
using namespace std;

class BankingException : public exception {
public:
    const char* what() const noexcept override {
        return "Banking transaction error!";
    }
};

class InsufficientBalance : public BankingException {
public:
    const char* what() const noexcept override {
        return "Error: Insufficient balance!";
    }
};

class InvalidAmount : public BankingException {
public:
    const char* what() const noexcept override {
        return "Error: Invalid amount!";
    }
};

class BankAccount {
private:
    double balance;

public:
    BankAccount(double b) {
        balance = b;
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            throw InvalidAmount();
        }

        if (amount > balance) {
            throw InsufficientBalance();
        }

        balance -= amount;
        cout << "Withdrawal successful!" << endl;
        cout << "Remaining Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account(5000);

    cout << "Initial Balance: 5000" << endl;

    try {
        account.withdraw(6000);
    }
    catch (const InsufficientBalance& e) {
        cout << e.what() << endl;
    }
    catch (const InvalidAmount& e) {
        cout << e.what() << endl;
    }

    try {
        account.withdraw(-500);
    }
    catch (const InvalidAmount& e) {
        cout << e.what() << endl;
    }

    return 0;
}
