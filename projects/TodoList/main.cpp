#include <iostream>
#include <vector>
#include <string>
int main() {
    std::vector<std::string> todo;
    std::string task;
    std::cout << "Enter tasks (type 'done' to stop):\n";
    while (std::cin >> task && task != "done") todo.push_back(task);
    for (auto &t : todo) std::cout << "- " << t << "\n";
    return 0;
}