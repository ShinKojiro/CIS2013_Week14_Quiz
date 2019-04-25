#include <string>
#include <cstdlib>

using namespace std;

class Card {

    private:

        string suit;
        char value;
        int weight;
        // int cardDeck[13]; // int array of number of cards in the deck
        // string cardSuit; // diamonds, clubs, hearts, spades
        // char faceLetter; // A, J, Q, K
        // int faceValue; // value of J, Q, K
        // int aceValue; // 1 or 11
        bool is_used;

    public:

    void set_suite(string s){
        suit = s;
    }
    void set_value(char v){
        value = v;
    }
    void set_used(bool u){
        is_used = u;
    }
    void set_weight(int w){
        weight = w;
    }

    string get_suit(){
        return suit;
    }
    char get_value(){
        return value;
    }
    bool get_used(){
        return is_used;
    }
    int get_weight(){
        return weight;
    }

    // void setFaceLetter(char l){
    //     faceLetter = l;
    // }

    // char setFaceLetter(){
    //     return faceLetter;
    // }

    // void setAceValue(int a){
    //     aceValue = a;
    //     // if( placeHolderName < 12){
    //     //     aceValue = 11;
    //     // }
    //     // else{
    //     //     aceValue = 1;
    //     // }
    // }

    // bool setAceValue(){
    //     return aceValue;
    // }

};