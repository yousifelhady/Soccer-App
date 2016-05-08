#include "Team.h"
#include "playerc.h"
using namespace std;

Team::Team(string name)    // constructor initializes Player with string supplied as argument
{
	setTeamName(name);       // validate and store teamName
}                                    // end team constructor

  // function that sets the team name;
  // ensures that the team name has at most 25 characters
void   Team::setTeamName(string name)
{
	if (name.length() <= 25)    // if name has 25 or fewer characters
		TeamName = name;      // store the team name in the object
	if (name.length() > 25)     // if name has more than 25 characters
	{                           // set TeamName to first 25 characters of parameter name
		TeamName = name.substr(0, 25);    // start at 0, length of 25
	}                           // end if
}                               // end function setTeamName
 
string Team::getTeamName()     // function to get the Team name
{
	return TeamName;             // return object's TeamName
}                                  // end function getTeamName
 
 void  Team::setNumberofGoals(int goals)   //function that sets the Team number of goals;
 {
	 numberofGoals = goals;
 }                                          // end function setTeamNumberofgoals

 int   Team::getNumberofGoals()   //function that gets the Team number of goals;
 {
	 return numberofGoals ;
 }                                // end function getTeamNumberofgoals
 void Team::SetPlayer(Player p[])
 {
		players = p;
 }
int   Team::displayTeaminfo()    // display the Team info to the user
 {                                    // call gets to get the info
	 cout << "Name: " << getTeamName() << "\nno. Goals: " << getNumberofGoals() << endl;
	 return 0 ;
} // end function displayMessage