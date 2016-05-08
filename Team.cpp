#include "Team.h"
Team::Team()
{
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