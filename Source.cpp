#include "Team.h"
#include <list>
#include "PublicFunctions.h"
#include <fstream>
#include "Organizer.h"
#include "time.h"

int main () {
	list<Team> t;
	Team team;
	vector<Player> v(11);
	string teamName, playerName;
	int nteams, playerNumber, method;
	srand ( time(NULL) );
	cout <<"Welcome to World Cup App\n========================="<<endl;
	cout <<"To enter teams via file parsing press (1)\nTo enter teams manually press (2)\n=> ";
	cin >> method;
	Checker (method);
	cout << endl;
	while (!(method == 1 || method == 2))
	{
		cout <<"\n<WRONG ENTRY!>\n" << endl;
		cout <<"To enter teams via file parsing press (1)\nTo enter teams manually press (2)\n=> ";
		cin >> method;
		Checker (method);
	}
	
	//file parsing method
	if (method == 1)
	{
		ifstream myReadFile;
		myReadFile.open("text.txt");
		string output;
		if (myReadFile.is_open()) {
			while (!myReadFile.eof()) {
				myReadFile >> output;
				teamName = output;
				team.SetName(teamName);
				for (int i = 0; i < 11; i++)
				{
					myReadFile >> output;
					playerName = output;
					myReadFile >> output;
					playerNumber = stoi(output);
					v[i].SetName(playerName);
					v[i].SetNumber(playerNumber);
				}
				team.SetPlayers(v);
				t.push_back(team);
				team.DisplayTeamInfo();
			}
		}
		myReadFile.close();
	}
	//manual method
	else if (method == 2)
	{
		cout <<"Enter number of teams: ";
		cin >> nteams;
		Checker(nteams);
		cout << endl;
		for (int i = 1; i <= nteams; i++)
		{
			cout <<"Enter the name of team " << i <<" : ";
			cin >> teamName;
			Checker(teamName);
			cout << endl;
			team.SetName(teamName);
			cout <<"Enter the Name & Number for each player in team " << "( " << team.GetName() << " )" << endl;
			for (int ii = 0; ii < 11; ii++)
			{
				if (ii == 0)
				{
					cout << ii + 1 << "st Player Name: ";
					cin >> playerName;
					Checker(playerName);
					cout << ii + 1 << "st Player Number: ";
					cin >> playerNumber;
					Checker(playerNumber);
					v[ii].SetName(playerName);
					v[ii].SetNumber(playerNumber);
				}
				else if (ii == 1)
				{
					cout << ii + 1 << "nd Player Name: ";
					cin >> playerName;
					Checker(playerName);
					cout << ii + 1 << "nd Player Number: ";
					cin >> playerNumber;
					Checker(playerNumber);
					v[ii].SetName(playerName);
					v[ii].SetNumber(playerNumber);
				}
				else if (ii == 2)
				{
					cout << ii + 1 << "rd Player Name: ";
					cin >> playerName;
					Checker(playerName);
					cout << ii + 1 << "rd Player Number: ";
					cin >> playerNumber;
					Checker(playerNumber);
					v[ii].SetName(playerName);
					v[ii].SetNumber(playerNumber);
				}
				else {
					cout << ii + 1 << "th Player Name: ";
					cin >> playerName;
					Checker(playerName);
					cout << ii + 1 << "th Player Number: ";
					cin >> playerNumber;
					Checker(playerNumber);
					v[ii].SetName(playerName);
					v[ii].SetNumber(playerNumber);
				}
			}
			cout <<"-----------------------\nEnd of team " << "( " << team.GetName() << " )\n" << endl;
			team.SetPlayers(v);
			t.push_back(team);
			team.DisplayTeamInfo();
		}
	}
	
	//mido's code
	Organizer o;
	o.SetAllTeams(t);
	o.MakeSchedule(t);

	
	/*for (list<Team>::iterator ii = o.GetAllTeams().begin(); ii != o.GetAllTeams().end() ; ii++)
	{
		cout << ii->GetName() << "--->" << ii->GetNumberOfGoals() << endl;
	}*/
	//end of mido's code

	string TName;
	cout << endl << "choose your Favourit Team to show its information" << endl;
	cin >> TName;
	
	Team::Search(TName, o.GetAllTeams()).DisplayTeamInfo();
}