#include <iostream>
#include <map>
#include <string>
int main() {
    std::map<std::string, std::string> book = {{"Alice", "123"}, {"Bob", "456"}};
    for (auto const& [name, phone] : book) std::cout << name << ": " << phone << "\n";
    return 0;
}