#include<iostream>
using namespace std;

int main()
{
	int array[10];
	int key = 0;
	for (int i = 0; i < 10; i++)
	{
		cin >> array[i];
	}
	cin >> key;
	int left = 0;
	int right = 9;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (array[mid] < key)
		{
			left = mid+1;
		}
		else if (array[mid] > key)
		{
			right = mid-1;
		}
		else
		{
			cout << mid << endl;
			return -1;
		}

	}
	cout << "error" << endl;
	system("pause");
	return 0;
}