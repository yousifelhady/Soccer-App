#include "Organizer.h"

 void TeamSchedulerDisplayer (Organizer o)
 {
	 string s;
	 int count = o.matches.size();
	 switch (count)
	 {
	 case 16:
		 cout <<"Matches schedule at the 16th round is\n=====================================\n";
		 break;
	 case 8:
		 cout <<"Matches schedule at the 8th round is\n====================================\n";
		 break;
	 case 4:
		 cout <<"Matches schedule at the Semi-final round is\n=============================================\n";
		 break;
	 case 2:
		 cout <<"Matches schedule at the Final round is\n========================================\n";
		 break;
	 }
	 
	 for (int i = 0 ; i < count ; i++)
	 {
		 if (o.matches.empty())
		 {
			 return;
		 }
		 s = o.matches.top().GetName();
		 o.matches.pop();
		 s += " Vs " ;
		 s += o.matches.top().GetName();
		 o.matches.pop();
		 cout << s << endl;
	 }
 }
 template <class T>
 void Checker (T &input, int f=0)
 {
	 
	while (!cin)
	{
		cout << "\n<WRONG ENTRY!>\nPlease check your entry and enter it correctly!\n";
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> input;
	}
	if(f){
		cout << "\n<WRONG ENTRY!>";
		cout <<"\n\nTo enter teams via file parsing press (1)\nTo enter teams manually press (2)\n=> ";
		Checker(input,1);
	}
 }