#include <iostream>
#include <string>
#include "playerc.h"
using namespace std;

Player::Player(string name)    // constructor initializes Player with string supplied as argument
{
	setPlayerName(name);       // validate and store PlayerName
}                                    // end Player constructor

  // function that sets the Player name;
  // ensures that the palyer name has at most 25 characters
void   Player::setPlayerName(string name)
{
	if (name.length() <= 25)    // if name has 25 or fewer characters
		playerName = name;      // store the player name in the object
	if (name.length() > 25)     // if name has more than 25 characters
	{                           // set PlaerName to first 25 characters of parameter name
		playerName = name.substr(0, 25);    // start at 0, length of 25
	}                           // end if
}                               // end function setPlayerName
 
string Player::getPlayerName()     // function to get the Player name
{
	return playerName;             // return object's PlayerName
}                                  // end function getPlayerName
 
void   Player::setPlayerNumber(int number)     //function that sets the Player number;
{
	playerNumber = number;
}                                            // end function setplayerNumber

 int   Player::getPlayerNumber()     //function that gets the Player number;
{
	return playerNumber;           // return object's PlayerNumber
}                                  // end function getPlayerNumber

 void  Player::setNumberofGoals(int goals)   //function that sets the Player number of goals;
 {
	 numberofGoals = goals;
 }                                          // end function setplayerNumberofgoals

 int   Player::getNumberofGoals()   //function that gets the Player number of goals;
 {
	 return numberOfGoals ;
 }                                // end function getplayerNumberofgoals

int   Player::displayPlayerinfo()    // display the player info to the user
 {                                    // call gets to get the info
	 cout << "Name: " << getPlayerName() << "\nNumber: " << getPlayerNumber() << "\nno. Goals: " << getNumberofGoals() << endl;
	 return 0 ;
} // end function displayMessage