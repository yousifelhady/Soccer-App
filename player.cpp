#include "player.h"

void Player::SetName(string n)
{
	Name = n;
}
void Player::SetNumOFGoals(int n)
{
	NumOFGoals = n;
}
void Player:: SetNumber(int n)
{
	Number = n;
}
string Player::GetName()
{
	return Name;
}
int Player::GetNumOfGoals()
{
	return NumOFGoals;
}
int Player::GetNumber()
{
	return Number;
}




