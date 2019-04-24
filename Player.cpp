#include <string>
#include <cstdlib>
#include <iostream>

using namespace std;

class Player {

    private:

        int ownedCards[10];
        string playerName;
        bool is_hitting;


    public:

    Player(){
        
    }

    void setName(string n){
        playerName = n;
        cin >> playerName;
    }

    void setCards(int c[10]){

    }

    string getName(){
        return playerName;
    }
};