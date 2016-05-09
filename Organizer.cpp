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
	TeamSchedulerDisplayer(*this);
	Results(*this);


}

void Organizer::Results(Organizer o)
{
	cout << "\nSimulating matches results\n---------------------------\n";
	int n = o.matches.size() / 2;
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
		if (randomNumber == randomNumber2)
		{
			randomNumber++;
		}
		//cout << randomNumber << " : " << randomNumber2 << endl;
		o.result.push(randomNumber);
		o.result.push(randomNumber2);



		/*if (randomNumber == randomNumber2 && randomNumber != 3)
		{
			cout << "extra time -> result -> ";
			cout << randomNumber << " : " << randomNumber + 1 << endl;
		}

		if (randomNumber == randomNumber2 && randomNumber == 3)
		{
			cout << "extra time -> result -> ";
			cout << randomNumber << " : " << randomNumber << endl;
			cout << "Penalety time -> result -> ";
			cout << "5" << " : " << "6" << endl;
		}

	}
	*/
	}
	Organizer::PrintResult(o.matches, o.result);
	o.Qualify();
}
void Organizer::Qualify()
{
	list<Team> teams;
	int iterations = result.size()/2;
	int first, second;
	for (int i = 0; i < iterations; i++)
	{
		first = result.top();
		result.pop();
		second = result.top();
		result.pop();
		if (first > second)
		{
			teams.push_back(matches.top());
			matches.pop();
			loser.push_back(matches.top());
			matches.pop();

		}
		else
		{
			loser.push_back(matches.top());
			matches.pop();
			teams.push_back(matches.top());
			matches.pop();

		}
	}
	if (teams.size() == 1)
	{
		cout << "winner is " <<teams.begin()->GetName()<<endl;
		return;
	}
	MakeSchedule(teams);
}

void Organizer::PrintResult(stack<Team> m, stack<int> r)
{
	int length = m.size() / 2;
	for (int i = 0; i < length; i++)
	{
		cout << m.top().GetName() << " [" << r.top() << "]" << " : ";
		m.pop();
		r.pop();
		cout << "[" << r.top() << "] " << m.top().GetName() << endl;
		m.pop();
		r.pop();
	}
	

}
