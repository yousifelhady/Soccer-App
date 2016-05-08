class Team
{
public:
	Team(string);                    // constructor that initializes a Player object
	void setTeamName(string );       // function that sets the Player name
	string getTeamName();            // function that gets the Player name
	void setNumberofGoals(int);        // function that sets Number of Goals
	int getNumberofGoals();            // function that gets Number of Goals
	int displayTeaminfo();          // function that displays the player info
	void SetPlayer(Player p[]);
private:
	string TeamName;          // Player name data
	Player players[11];
	int numberofGoals;          // Player Goals data
};