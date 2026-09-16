#include <iostream>
int main() {
    int n, a = 0, b = 1;
    std::cout << "N: "; std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cout << a << " ";
        int next = a + b;
        a = b; b = next;
    }
    return 0;
}