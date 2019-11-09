#ifndef FIND_MAX_H
#define FIND_MAX_H
#include <iostream>
using namespace std;

template<typename T>
int find_max(int len, T* &array)
{
	if (array == NULL)
	{
		return -1;
	}

	if (len <= 0)
	{
		return -1;
	}

	int max = 0;
	for (int i = 0; i < len; i++)
	{
		if (array[max] < array[i])
		{
			max = i;
		}
	}
	return max;
}

template<typename T>
int _find_max(int len, T* &array)
{
	if (array == NULL)
	{
		return -1;
	}

	if (len <= 0)
	{
		return -1;
	}

	int max = 0;
	for (int i = 0; i < len; i++)
	{
		if (array[max] < array[i])
		{
			max = i;
		}
	}
	return array[max];
}


#endif // !FIND_MAX_H

