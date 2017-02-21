//============================================================================
// Name        : Hello.cpp
// Author      : Kwadwo Yeboah
// Version     :
// Copyright   : Your copyright notice
// Description : Card Dealer from standard input
//============================================================================

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

string get_card(string input){


	int input_length = input.length();

	string number = input.substr(0 , input_length - 1);
	string suit = input.substr(input_length - 1, input_length);


	if (suit == "D"){
		suit = "Diamonds";
	}
	else if(suit == "H"){
		suit = "Hearts";
	}
	else if(suit == "S"){
		suit = "Spades";
	}
	else if(suit == "C"){
		suit = "Clubs";
	}
	else{
		suit = "Invalid Suit";
	}

	if(number == "A"){
		number = "Ace";
	}
	else if(number == "J"){
		number = "Jack";
	}
	else if(number == "Q"){
		number = "Queen";
	}
	else if(number == "K"){
		number = "King";
	}
	else{
		// check is a valid number between 2 and 10
		int card_Value = stoi(number);

		if ( (card_Value < 2) | (card_Value > 10)){
			number = "Invalid Card Value";
		}

	}

	return number + " of " + suit;
	}

int main() {

	bool quit = false;
	string current;
	cout << "Enter the card notation: ";
	while( !quit){

		cin >> current;
		cout << get_card(current);
		cout << "\nEnter the card notation: ";
	}

}
