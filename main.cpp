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
    char vals[] = { 'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K' };
    Card deck[52];

    //char continueChoice = 'y';
    // new Player playerOne;
    // new Player playerTwo;

    cout << "Welcome to blackjack" << endl << "Enter Player 1 name: ";
   
    cin >> playerOneName;
    playerOne.set_name(playerOneName);
    // cout << endl << "Enter player 2 name: ";
 

    // Populate deck of cards
    int cnt = 0;
    for(int i = 0; i < 4; i++){
        string s = suites[i];
        for(int j = 1; j <= 13; j++){
            char v = vals[j];
            deck[cnt].set_value(j);
            deck[cnt].set_suite(s);
            cnt++;
        }
    }
    


    cout << "Dealer has a A of Diamonds, and a 5 of Clubs" << endl;
    cout << playerOne.get_name() << "has a A of Spades, and a K of Hearts" << endl;
    cout << "(h)it or (s)tay: ";
    cin >> hOrS;
    playerOne.set_hitting(hOrS);
    
    cout << "Printing our deck of cards:" << endl;
    for (int i = 0; i < 52; i++){
        cout << deck[i].get_value() << " of " << deck[i].get_suite() << endl;
    }
    // while(continueChoice == 'y'){
        
    // }

}