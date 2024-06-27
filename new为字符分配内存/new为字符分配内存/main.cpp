#include<iostream>
#include<string>
using namespace std;

char* getname();

int main()
{
	char* name = nullptr;

	name = getname();
	cout << name << " at " << (int*)name << endl;
	delete[]name;

	name = getname();
	cout << name << " at " << (int*)name << endl;
	delete[]name;
	return 0;
}

char* getname()
{
	char temp[80];
	cout << "Enter last name:" << endl;
	cin >> temp;
	char* pn = new char[strlen(temp) + 1];
	strcpy_s(pn,strlen(temp)+1, temp);
	return pn;
}