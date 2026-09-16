#include <iostream>
#include <thread>
#include <chrono>
int main() {
    int sec;
    std::cout << "Seconds: "; std::cin >> sec;
    while (sec > 0) {
        std::cout << sec << "... ";
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout << "\r";
        sec--;
    }
    std::cout << "Time up!" << std::endl;
    return 0;
}