#include <iostream>
#include <cstdlib>
#include <string>
#include "Card.cpp"
#include "Player.cpp"

using namespace std;

int main(){

    string playerOne;
    char hOrS = 'h';

    char continueChoice = 'y';
    // new Player playerOne;
    // new Player playerTwo;

    cout << "Welcome to blackjack" << endl << "Enter Player 1 name: ";
    // playerOne.setName();
    cin >> playerOne;
    // cout << endl << "Enter player 2 name: ";
    // playerTwo.setName();

    cout << "Dealer has a A of Diamonds, and a 5 of Clubs" << endl;
    cout << playerOne << "has a A of Spades, and a K of Hearts" << endl;
    cout << "(h)it or (s)tay: ";
    cin >> hOrS;
    

    while(continueChoice == 'y'){
        
    }

}