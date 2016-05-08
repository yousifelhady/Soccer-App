#include "Team.h"
#include <list>
#include "PublicFunctions.h"
#include <fstream>
#include "Organizer.h"

int main () {
	list<Team> t ,ti;
	Team team;
	vector<Player> v(11);
	string s, teamName, playerName;
	int nteams, playerNumber, method;
	//mido's code
	Organizer o;
	Team arr[16];
	for (int i = 0; i < 16; i++)
	{
		arr[i].SetName("T" + to_string(i));
	}
	for (int i = 0; i < 16; i++)
	{
		ti.push_back(arr[i]);
	}

	o.MakeSchedule(ti);
	Organizer::Results(o);
	system("Pause");
	////end of mido's code
	//cout <<"Welcome to World Cup App\n========================="<<endl;
	//cout <<"To enter teams via file parsing press (1)\nTo enter teams manually press (2)\n=> ";
	//cin >> method;
	//cout << endl;
	////file parsing method
	//if (method == 1)
	//{
	//	ifstream myReadFile;
	//	myReadFile.open("text.txt");
	//	string output;
	//	if (myReadFile.is_open()) {
	//		while (!myReadFile.eof()) {
	//			myReadFile >> output;
	//			teamName = output;
	//			team.SetName(teamName);
	//			for (int i = 0; i < 11; i++)
	//			{
	//				myReadFile >> output;
	//				playerName = output;
	//				myReadFile >> output;
	//				playerNumber = stoi(output);
	//				v[i].SetName(playerName);
	//				v[i].SetNumber(playerNumber);
	//			}
	//			team.SetPlayers(v);
	//			t.push_back(team);
	//		}
	//	}
	//	myReadFile.close();
	//}
	////manual method
	//else if (method == 2)
	//{
	//	cout <<"Enter number of teams: ";
	//	cin >> nteams;
	//	cout << endl;
	//	for (int i = 1; i <= nteams; i++)
	//	{
	//		cout <<"Enter the name of team " << i <<" : ";
	//		cin >> teamName;
	//		cout << endl;
	//		team.SetName(teamName);
	//		cout <<"Enter the Name & Number for each player in team " << "( " << team.GetName() << " )" << endl;
	//		for (int ii = 0; ii < 11; ii++)
	//		{
	//			if (ii == 0)
	//			{
	//				cout << ii + 1 << "st Player Name: ";
	//				cin >> playerName;
	//				cout << ii + 1 << "st Player Number: ";
	//				cin >> playerNumber;
	//				v[ii].SetName(playerName);
	//				v[ii].SetNumber(playerNumber);
	//			}
	//			else if (ii == 1)
	//			{
	//				cout << ii + 1 << "nd Player Name: ";
	//				cin >> playerName;
	//				cout << ii + 1 << "nd Player Number: ";
	//				cin >> playerNumber;
	//				v[ii].SetName(playerName);
	//				v[ii].SetNumber(playerNumber);
	//			}
	//			else if (ii == 2)
	//			{
	//				cout << ii + 1 << "rd Player Name: ";
	//				cin >> playerName;
	//				cout << ii + 1 << "rd Player Number: ";
	//				cin >> playerNumber;
	//				v[ii].SetName(playerName);
	//				v[ii].SetNumber(playerNumber);
	//			}
	//			else {
	//				cout << ii + 1 << "th Player Name: ";
	//				cin >> playerName;
	//				cout << ii + 1 << "th Player Number: ";
	//				cin >> playerNumber;
	//				v[ii].SetName(playerName);
	//				v[ii].SetNumber(playerNumber);
	//			}
	//		}
	//		cout <<"End of team " << "( " << team.GetName() << " )\n" << endl;
	//		team.SetPlayers(v);
	//		t.push_back(team);
	//	}
	//}	
}