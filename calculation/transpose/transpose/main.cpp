#include<iostream>
using namespace std;

void printTranspose(int** arr, int rows, int cols)
{
	int** transpose = new int* [cols];
	for (int i = 0; i < cols; i++)
	{
		transpose[i] = new int[rows];
	}

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			transpose[j][i] = arr[i][j];
		}
	}

	for (int i = 0; i < cols; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			cout << arr[j][i] << " ";

		}
		cout << endl;
	}

	for (int i = 0; i < cols; i++)
	{
		delete[]transpose[i];
	}
	delete[]transpose;
}

int main()
{
	int rows;
	int cols;
	cout << "rows = " << endl;
	cin >> rows;
	cout << endl;
	cout << "cols = " << endl;
	cin >> cols;
	cout << endl;

	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[cols];
		for (int j = 0; j < cols; j++)
		{
			cin >> arr[i][j];
		}
	}

	cout << endl;
	printTranspose(arr, rows, cols);

	for (int i = 0; i < rows; i++)
	{
		delete[]arr[i];
	}
	delete[]arr;

	return 0;
}