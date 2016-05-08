#include "Team.h"
Team::Team()
{
	NumberOfGoals = 0;
}

Team::~Team()
{
}

void Team::SetName(string n) {
	Name = n;
}

string Team::GetName() {
	return Name;
}

void Team::SetNumberOfGoals(int n) {
	NumberOfGoals = n;
}

int Team::GetNumberOfGoals() {
	return NumberOfGoals;
}

void Team::SetPlayers(vector<Player> p) {
	Players = p;
}

vector<Player> Team::GetPlayers() {
	vector<Player> tmp;
	for (vector<Player>::iterator it = Players.begin() ; it !=Players.end() ; it++) {
		tmp.push_back(*it);
	}
	return tmp;
}

void Team::DisplayTeamInfo() {
	vector<Player> vec = GetPlayers();
	cout << "Team Name: " << GetName() << "\n---------------------" << endl;
	for (int i = 0; i < 11; i++)
	{
		cout << "Player Name: " << vec[i].GetName() << "	T-shirt Number: " << vec[i].GetNumber() << "	Scored Goals: " << vec[i].GetNumOfGoals() << endl;
	}
	cout << endl;
}