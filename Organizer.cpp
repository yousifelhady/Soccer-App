#include "Organizer.h"

void Organizer::MakeSchedule(list<Team>& teams)
{
	int N;
	int count = teams.size();
	for (int i = 0; i < count ; i++)
	{
		N = rand() % teams.size();
		list<Team>::iterator it;
		it = next(teams.begin(), N);
		matches.push(*it);
		teams.erase(it);
		it = teams.begin();
	}
}

void Organizer::Results(Organizer o)
{
	cout << "\nSimulating matches results\n---------------------------\n";
	int n = o.matches.size()/2;
	for (int i = 0; i < n; i++)
	{
		int weight = rand() % 16;
		int weight2 = rand() % 16;

		int randomNumber = 0;
		int randomNumber2 = 0;

		switch (weight) {

		case 0:
		case 1:
		case 2:
			randomNumber = 0;
			break;
		case 3:
		case 4:
		case 5:
			randomNumber = 1;
			break;
		case 6:
		case 7:
		case 8:
			randomNumber = 2;
			break;
		case 9:
		case 10:
		case 11:
			randomNumber = 3;
			break;
		case 12:
		case 13:
			randomNumber = 4;
			break;
		case 14:
			randomNumber = 5;
			break;
		case 15:
			randomNumber = 6;
			break;

		case 16:
			randomNumber = 7;
			break;
		}
		switch (weight2) {
		case 0:
		case 1:
		case 2:
			randomNumber2 = 0;
			break;
		case 3:
		case 4:
		case 5:
			randomNumber2 = 1;
			break;
		case 6:
		case 7:
		case 8:
			randomNumber2 = 2;
			break;
		case 9:
		case 10:
		case 11:
			randomNumber2 = 3;
			break;
		case 12:
		case 13:
			randomNumber2 = 4;
			break;
		case 14:
			randomNumber2 = 5;
			break;
		case 15:
			randomNumber2 = 6;
			break;

		case 16:
			randomNumber2 = 7;
			break;
		}
	
		//cout << randomNumber << " : " << randomNumber2 << endl;
		o.result.push(randomNumber);
		cout << o.matches.top().GetName() << " [" << o.result.top() << "]" << " : ";
		o.matches.pop();
		o.result.push(randomNumber2);
		cout << "[" << o.result.top() << "] " << o.matches.top().GetName() << endl;
		o.matches.pop();



	/*	if (randomNumber == randomNumber2 && randomNumber != 3)
		{
			cout << "extra time -> result -> ";
			cout << randomNumber << " : " << randomNumber + 1 << endl;
		}
*/
	/*	if (randomNumber == randomNumber2 && randomNumber == 3)
		{
			cout << "extra time -> result -> ";
			cout << randomNumber << " : " << randomNumber << endl;
			cout << "Penalety time -> result -> ";
			cout << "5" << " : " << "6" << endl;
		}
*/
	}

}