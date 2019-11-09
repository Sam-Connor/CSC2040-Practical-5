#include "SafeArray.h"
#include <iostream>
using namespace std;

s_array::s_array(int size)
	:size(size)
{
	if (size > 0) data = new int[size];
	else
	{
		cout << "Invalid array size " << size << endl;
			exit(1);
	}
}

s_array::~s_array()
{
	delete[] data;
}

int& s_array::operator[](int i)
{
	if (i < 0 || i >= size)
	{
		cout << "Index " << i << " is out of bounds." << endl;
		exit(1);
	}
	return data[i];
}
