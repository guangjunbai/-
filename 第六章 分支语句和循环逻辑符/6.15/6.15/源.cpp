#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char automoblie[50];

	int year = 0;
	double a_price = 0.0;
	double d_price = 0.0;

	ofstream outFile;
	outFile.open("carinfo.txt");

	cout << "Enter the make and model of antomobile: ";
	cin.getline(automoblie, 50);
	cout << "Enter the model year: ";
	cin >> year;
	cout << "Enter the original asking price: ";
	cin >> a_price;
	d_price = 0.913 * a_price;

	/*cout << fixed;
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	cout << "Make and model: " << automoblie << endl;
	cout << "Year: " << year << endl;
	cout << "Was asking $" << a_price << endl;
	cout << "Now asking $" << d_price << endl;*/

	outFile << fixed;
	outFile.precision(2);
	outFile.setf(ios_base::showpoint);
	outFile << "Make and model: " << automoblie << endl;
	outFile << "Year: " << year << endl;
	outFile << "Was asking: " << a_price << endl;
	outFile << "Now asking: " << d_price << endl;

	outFile.close();
	return 0;
}