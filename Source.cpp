#include<iostream>

using namespace std;

int main()
{
	double DP, mins;
	int choice = 0;
	while (choice != 'q')
	{
		cout << "What're you testing in?" << endl << "1 - Minutes" << endl << "2 - Data Points" << endl;
		cout << "3 - Quit" << endl << endl << ">> ";
		cin >> choice;
		if (choice == 1)
		{
			cout << "How many minutes do you want the test?" << endl;
			cin >> mins;
			DP = (mins * 60) / 3;
			cout << "================================";
			cout << endl << "That's " << DP << " Data Points." << endl;
			cout << "================================" << endl << endl;
		}
		else if (choice == 2)
		{
			cout << "How many Data Points are you going to use?" << endl;
			cin >> DP;
			mins = (DP * 3) / 60;
			cout << "================================";
			cout << endl << "That's " << mins << " minutes." << endl;
			cout << "================================" << endl << endl;
		}
		else if (choice == 3)
			break;
		else
			cout << "XXXXXXXXXXXXXXXXX Incorrect Input! XXXXXXXXXXXXXXXXX" << endl << endl;
	}
	system("pause");
	return 0;
}