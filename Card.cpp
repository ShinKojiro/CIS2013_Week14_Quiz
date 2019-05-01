#ifndef CARD_CPP
#define CARD_CPP

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

        void set_weight(char w){
        switch(w){
            case 'A':
                weight = 1;
                break;
            case 'T':
            case 'J':
            case 'Q':
            case 'K':
                weight = 10;
                break;
            default:
                weight = (int)w;
                break;
        }
    }

    public:

    void set_suite(string s){
        suit = s;
    }
    void set_value(char v){
        value = v;
        set_weight(v);
    }
    void set_used(bool u){
        is_used = u;
    }
    

    string get_suite(){
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

};

#endif