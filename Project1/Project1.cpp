#include "find_max.h"
#include <iostream>
using namespace std;

int main()
{
	int* intArray = new int[10];
	double* doubleArray = new double[10];

	for (int i = 0; i < 10; i++)
	{
		intArray[i] = i;
		doubleArray[i] = i;
		cout << doubleArray[i];
		
	}


	
	intArray[5] = 15; // forced max;
	doubleArray[2] = 14;

	


	cout << "The max in the int array is located at: " << _find_max(10, intArray) << endl;
	cout << "The max in the double array is located at: " << _find_max(10, doubleArray) << endl;

	delete[] intArray;
	delete[] doubleArray;


	return 0;
}