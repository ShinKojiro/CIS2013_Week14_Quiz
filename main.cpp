#include <iostream>
#include <cstdlib>
#include <string>
#include "Player.cpp"

using namespace std;

int main(){

    string playerOneName;
    char hOrS = 'h';
    Player dealer;
    Player playerOne;
    dealer.set_name("Dealer");

    char continueChoice = 'y';
    // new Player playerOne;
    // new Player playerTwo;

    cout << "Welcome to blackjack" << endl << "Enter Player 1 name: ";
    // playerOne.setName();
    cin >> playerOneName;
    playerOne.set_name(playerOneName);
    // cout << endl << "Enter player 2 name: ";
    // playerTwo.setName();

    cout << "Dealer has a A of Diamonds, and a 5 of Clubs" << endl;
    cout << playerOne.get_name() << "has a A of Spades, and a K of Hearts" << endl;
    cout << "(h)it or (s)tay: ";
    cin >> hOrS;
    playerOne.set_hitting(hOrS);
    

    // while(continueChoice == 'y'){
        
    // }

}