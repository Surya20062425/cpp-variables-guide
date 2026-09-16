#include <iostream>
#include <string>
#include <map>
#include <vector>

struct Location {
    std::string name;
    std::string description;
};

class OpenWorld {
    std::map<std::pair<int, int>, Location> world;
    int px = 0, py = 0;

public:
    OpenWorld() {
        world[{0, 0}] = {"Starting Village", "A quiet hamlet. The journey begins here."};
        world[{0, 1}] = {"Dark Forest", "Tangled trees block the sunlight."};
        world[{1, 0}] = {"Sunny Plains", "Golden grass waving in the breeze."};
        world[{1, 1}] = {"Ancient Ruins", "Stone pillars of a forgotten civilization."};
        world[{-1, 0}] = {"Frozen Tundra", "Biting wind and endless snow."};
    }

    void move(std::string dir) {
        if (dir == "n") py++; else if (dir == "s") py--;
        else if (dir == "e") px++; else if (dir == "w") px--;
        else { std::cout << "Invalid direction.\n"; return; }
        std::cout << "You traveled " << dir << ".\n";
    }

    void look() {
        auto it = world.find({px, py});
        if (it != world.end()) {
            std::cout << "Location: " << it->second.name << "\n" << it->second.description << "\n";
        } else {
            std::cout << "You are in the uncharted wilderness. Nothing but wasteland.\n";
        }
        std::cout << "Coords: (" << px << "," << py << ")\n";
    }
};

int main() {
    OpenWorld game;
    std::string cmd;
    std::cout << "Welcome to C++ OpenWorld. Commands: n, s, e, w, look, quit\n";
    while (true) {
        std::cout << "> "; std::cin >> cmd;
        if (cmd == "quit") break;
        if (cmd == "look") game.look();
        else game.move(cmd);
    }
    return 0;
}
