#include <iostream>
#include <vector>

#include "./Class/Player/Player.h"



int main() {

    Player p1;
    Player p2;
    Player *ennemy = new Player;
    ennemy->talk();
    delete ennemy;

    std::vector<Player> players {p1,p2};

    p1.talk();
    p1.bla();

    int r=99;
    int *bla = {&r};

    int tada = *bla;

    int myNumber=0;
    int myPointer = 10;


    std::cout<<tada<<std::endl;

    std::cout<<*&*&myPointer<<std::endl;

    std::cout << "hello world" << std::endl;

    
    return 0;
}