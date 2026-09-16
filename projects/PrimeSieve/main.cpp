#include <iostream>
#include <vector>
int main() {
    int n = 100;
    std::vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (int p = 2; p * p <= n; p++)
        if (is_prime[p])
            for (int i = p * p; i <= n; i += p) is_prime[i] = false;
    for (int p = 2; p <= n; p++)
        if (is_prime[p]) std::cout << p << " ";
    return 0;
}