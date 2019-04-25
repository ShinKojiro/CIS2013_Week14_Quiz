#ifndef PLAYER_CPP
#define PLAYER_CPP

#include <string>
#include <cstdlib>
#include <iostream>
#include "Card.cpp"

using namespace std;

class Player {

    private:

        // int ownedCards[9];
        string name;
        bool is_hitting;
        Card hand[9];

    public:

    Player(){
        set_name("unknown");
        set_hitting(true);
    }

    void set_name(string n){
        name = n;
    }
    void set_hitting(bool h){
        is_hitting = h;
    }
    string get_name(){
        return name;
    }

};

#endif