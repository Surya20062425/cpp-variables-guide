#include <iostream>
int main() {
    double a, b;
    char op;
    std::cout << "Enter expression (e.g., 5 + 2): ";
    if (!(std::cin >> a >> op >> b)) return 1;
    if (op == '+') std::cout << a + b;
    else if (op == '-') std::cout << a - b;
    else if (op == '*') std::cout << a * b;
    else if (op == '/') std::cout << (b != 0 ? a / b : 0);
    std::cout << std::endl;
    return 0;
}