// array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
class FloatingPoint
{
private:
	float *array = NULL;
	int size; //size for array
	int num;
public:
	FloatingPoint(int n)
	{
		size = n;
		array = new float[size];
	}
	~FloatingPoint()
	{
		delete[] array;
		array = NULL;
	}
	void storeNum(float num, int index)
	{
		array[index] = num;
	}
	float getNum(int index)
	{
		num = array[index];
		return num;
	}

	float getHighVal()
	{
		int i = 0;
		float max = array[i];
		for (int i = 0; i < size; i++)
		{
			if (array[i] > max)
			{
				max = array[i];
			}
		}
		return max;
	}

	float getLowVal()
	{
		int i = 0;
		float min = array[i];
		for (int i = 0; i < size; i++)
		{
			if (array[i] < min)
			{
				min = array[i];
			}
		}
		return min;
	}
};

int main()
{
	FloatingPoint test(5);
	test.storeNum(2.3, 0);
	test.storeNum(3.6, 1);
	test.storeNum(5.9, 2);
	test.storeNum(8.9, 3);
	test.storeNum(1.2, 4);
	float highest = test.getHighVal();
	float lowest = test.getLowVal();
	std::cout << highest << std::endl;
	std::cout << lowest << std::endl;
	std::cout << "value at index 3: " << test.getNum(3) << std::endl;
	return 0;
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
