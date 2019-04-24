#include <string>
#include <cstdlib>

using namespace std;

class Card {

    private:

        int cardDeck[13]; // int array of number of cards in the deck
        string cardSuit; // diamonds, clubs, hearts, spades
        char faceLetter; // A, J, Q, K
        int faceValue; // value of J, Q, K
        int aceValue; // 1 or 11
        bool is_used;

    public:

    Card(){
        
    }

    void setFaceLetter(char l){
        faceLetter = l;
    }

    char setFaceLetter(){
        return faceLetter;
    }

    void setAceValue(int a){
        aceValue = a;
        // if( placeHolderName < 12){
        //     aceValue = 11;
        // }
        // else{
        //     aceValue = 1;
        // }
    }

    bool setAceValue(){
        return aceValue;
    }

};