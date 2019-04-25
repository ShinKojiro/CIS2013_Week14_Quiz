#include <iostream>
#include <cstdlib>
#include <string>
#include "Player.cpp"
#include "Card.cpp"

using namespace std;

int main(){

    string playerOneName;
    char hOrS = 'h';
    Player dealer;
    Player playerOne;
    dealer.set_name("Dealer");
    string suites[] = { "Diamonds", "Clubs", "Spades", "Hearts" };
    Card deck[52];

    //char continueChoice = 'y';
    // new Player playerOne;
    // new Player playerTwo;

    cout << "Welcome to blackjack" << endl << "Enter Player 1 name: ";
   
    cin >> playerOneName;
    playerOne.set_name(playerOneName);
    // cout << endl << "Enter player 2 name: ";
 

    // Populate deck of cards
    

    cout << "Dealer has a A of Diamonds, and a 5 of Clubs" << endl;
    cout << playerOne.get_name() << "has a A of Spades, and a K of Hearts" << endl;
    cout << "(h)it or (s)tay: ";
    cin >> hOrS;
    playerOne.set_hitting(hOrS);
    

    // while(continueChoice == 'y'){
        
    // }

}