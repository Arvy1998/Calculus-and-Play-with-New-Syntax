#include <iostream>
#include <fstream>
#include <cstdio>
#include <vector>

using namespace std;
ofstream fout("output.txt");

long int negate_num[100000] = { 0 };

int getMax(long int arr[], long int n)
{
	int mx = arr[0];
	for (int i = 1; i < n; i++)
		if (arr[i] > mx)
			mx = arr[i];
	return mx;
}

void countSort(long int arr[], long int n, long int exp)
{
	int output[100000];
	int i, count[1000] = { 0 };

	for (i = 0; i < n; i++)
		count[(arr[i] / exp) % 10]++;

	for (i = 1; i < 10; i++)
		count[i] += count[i - 1];

	for (i = n - 1; i >= 0; i--)
	{
			output[count[(arr[i] / exp) % 10] - 1] = arr[i];
			count[(arr[i] / exp) % 10]--;
	}

	for (i = 0; i < n; i++)
		arr[i] = output[i];
}

void radixsortmax(long int arr[], long int n)
{
	int m = getMax(arr, n);
	for (int exp = 1; m / exp > 0; exp *= 10)
		countSort(arr, n, exp);
}

void radixsortmin(long int arr[], long int n) {
	long int i, m = 0, exp = 1, temp[100000];
	for (i = 0; i < n; i++)
		if (arr[i] > m)
			m = arr[i];
	while (m / exp > 0)
	{
		long int count[1000] = { 0 };
		for (i = 0; i < n; i++)
			count[9 - arr[i] / exp % 10]++;

		for (i = 1; i < 10; i++)
			count[i] += count[i - 1];

		for (i = n - 1; i >= 0; i--)
			temp[--count[9 - arr[i] / exp % 10]] = arr[i];

		for (i = 0; i < n; i++) {
			arr[i] = temp[i];
		}
		exp *= 10;
	}
}

void print(long int arr[], long int n)
{
	/*for (int i = 0; i < n - 1; i++) {
		fout << arr[i] << " ";
	}*/
	cout << "Result is: " << endl;
	for (auto i = 0; i < n - 1; i++) {
		cout << arr[i] << " ";
	}
}

void print_crr(long int arr[], long int n)
{
	for (auto i = 0; i < n - 1; i++) {
		cout << arr[i] << " ";
	}
}

int main()
{
	long int arr[100000];
	long int K = 0;
	ifstream fin;
	fin.open("input.txt");
	long int i = 0, temp, l;
	if (fin.good()) {
		fin.seekg(0, ios::end);
		l = fin.tellg();
		if (l != 0) {
			fin.seekg(0); 
			while (!fin.eof()) {
				fin >> arr[i];
				arr[i] = arr[i];
				i++;
			}
		}
		else {
			cout << "File is empty!" << endl;
		}
	}
	else {
		cout << "File is missing!" << endl;
	}
	fin.close();
	cout << "Current array: " << endl;
	print_crr(arr, i + 1);
	cout << endl << "Hello! This is the Radix Sort C++ program! Choose your option:" << endl;
	cout << "1. Ascending Order!" << endl;
	cout << "2. Descending Order!" << endl;
	int option;
	cin >> option;
	switch (option)
	{
	case 1:
	{
		radixsortmax(arr, i);
		print(arr, i + 1);
		break;
	}
	case 2:
	{
		radixsortmin(arr, i + 1);
		print(arr, i + 1);
		break;
	}
	}
}
