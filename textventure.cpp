#include <iostream>

enum Direction { NORTH, SOUTH, EAST, WEST};

class Player {
public:
    int x = 0;
    int y = 0;

    void move(Direction dir) {
        switch(dir) {
            case NORTH: y++; break;
            case SOUTH: y--; break;
            case EAST: x++; break;
            case WEST: x--; break;
            
        }
    }

};

int main() {
    Player player;
    int choice;

    while(true){
        std::cout << "Your position: (" << player.x << ", " << player.y << ")\n";
        std::cout << "1. North 2. South 3. East 4. West 0. Quit\nChoice: ";
        std::cin >> choice;
        
        if(choice ==0) break;
        player.move(static_cast<Direction>(choice-1));


    }

    return 0;

}