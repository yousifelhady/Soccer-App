class Player
{
public:
	Player(string);                    // constructor that initializes a Player object
	void setPlayerName(string );       // function that sets the Player name
	string getPlayerName();            // function that gets the Player name
	void setPlayerNumber(int);         // function that sets the Player Number
	int getPlayerNumber();             // function that gets the Player Number
	void setNumberofGoals(int);        // function that sets Number of Goals
	int getNumberofGoals();            // function that gets Number of Goals
	int displayPlayerinfo();          // function that displays the player info

private:
	string playerName;          // Player name data
	int playerNumber;           // Player Number data
	int numberOfGoals;          // Player Goals data
};