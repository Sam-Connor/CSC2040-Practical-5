#ifndef SAFEARRAY_H
#define SAFEARRAY_H
#include <iostream>
using namespace std;

class s_array
{
public:
	s_array(int size);
	~s_array();

	int& operator[](int i);
	template<typename T> T& operator[](int i)
	{
		if (i < 0 || i >= size)
		{
			cout << "Index " << i << " is out of bounds." << endl;
			//exit(1);
			return NULL;
		}
		return data[i];
	}

private:
	int size;
	int* data;
};



#endif // !SAFEARRAY_H

