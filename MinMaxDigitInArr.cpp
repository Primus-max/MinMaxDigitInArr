// Написать функцию, определяющую минимум
// и максимум(значение и номер) элементов передаваемого
// ей массива.


#include <iostream>
#include <windows.h>
#include <random>

using namespace std;


template <typename T>
void FillArray(T arr[], int size);

template <typename T>
void PrintArray(T arr[], int size);

int main()
{
	const int sizze = 30;
	int Array[sizze];

	FillArray(Array, sizze);
	PrintArray(Array, sizze);
}


template <typename T>
void FillArray(T arr[], int size) {
	random_device Random;

	for (size_t i = 0; i < size; i++)
	{
		arr[i] = Random() % (100 + 50) - 50;
	}
}

template <typename T>
void PrintArray(T arr[], int size) {
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}