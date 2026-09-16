#include <iostream>
class Account {
    double balance = 0;
public:
    void deposit(double a) { balance += a; }
    void withdraw(double a) { if (a <= balance) balance -= a; }
    double getBalance() { return balance; }
};
int main() {
    Account acc;
    acc.deposit(100);
    acc.withdraw(30);
    std::cout << "Balance: " << acc.getBalance() << std::endl;
    return 0;
}