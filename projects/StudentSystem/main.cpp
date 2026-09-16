#include <iostream>
#include <vector>
#include <string>
struct Student { std::string name; int id; };
int main() {
    std::vector<Student> students = {{"Alice", 1}, {"Bob", 2}};
    for (auto &s : students) std::cout << s.id << ": " << s.name << "\n";
    return 0;
}