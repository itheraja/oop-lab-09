#include <iostream>
using namespace std;

// Abstract Class
class PaymentMethod {
public:
    virtual void processPayment(double amount) = 0;
};

// Derived Class: CreditCard
class CreditCard : public PaymentMethod {
private:
    string cardNumber;

public:
    CreditCard(string number) {
        cardNumber = number;
    }

    void processPayment(double amount) {
        if (cardNumber.length() == 16) {
            cout << "Credit Card payment of $" << amount << " successful." << endl;
        } else {
            cout << "Credit Card payment failed: Invalid card number." << endl;
        }
    }
};

// Derived Class: DigitalWallet
class DigitalWallet : public PaymentMethod {
private:
    double balance;

public:
    DigitalWallet(double b) {
        balance = b;
    }

    void processPayment(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Digital Wallet payment of $" << amount << " successful. Remaining balance: $" << balance << endl;
        } else {
            cout << "Digital Wallet payment failed: Insufficient funds." << endl;
        }
    }
};

int main() {
    PaymentMethod* payment1;
    PaymentMethod* payment2;

    CreditCard card("1234567812345678");
    DigitalWallet wallet(100.0);

    payment1 = &card;
    payment2 = &wallet;

    // Process payments
    payment1->processPayment(50.0);
    payment2->processPayment(75.0);
    payment2->processPayment(50.0); // Should fail due to insufficient balance

    return 0;
}
