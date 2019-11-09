#include "SafeArray.h"
#include <iostream>
using namespace std;

int main()
{
	s_array array(10);

	/*array[5] = 5;
	cout << array[5] << endl;



	array[-1] = 2;
	cout << array[15];*/

	char* charArray = new char[10];
	double* doubleArray = new double[10];

	charArray[-1] = 'h';
	charArray[4] = 'G';
	cout << charArray[4] << endl << charArray[15] << endl;
	doubleArray[-1] = 5;
	doubleArray[4] = 15;
	cout << doubleArray[4] << endl << doubleArray[22];

	delete[] charArray;
	delete[] doubleArray;
	return 0;
}