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

void Team::SetPlayers(Player p[]) {
	memcpy(Players, p, 11);
}

Player[] Team::GetPlayers() {
	return Players;
}