#include<iostream>
using namespace std;
#define Max 5

int main()
{
	int golf[Max];
	cout << "Please enter your golf scores:" << endl;
	cout << "You must enter " << Max << " rounds" << endl;
	
	for (int i = 0; i < Max; i++)
	{
		cout << "round #" << i + 1 << ": ";
		while (!(cin >> golf[i]))
		{
			cin.clear();
			while (cin.get() != '\n')
			{
				continue;
			}
			cout << "Please enter a number: ";
		}
	}

	double total = 0.0;
	for (int i = 0; i < Max; i++)
	{
		total += golf[i];
	}
	cout << total / Max << " = average score " << Max << " rounds" << endl;
	return 0;
}