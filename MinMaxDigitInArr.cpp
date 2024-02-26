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

template<typename T>
void MinMaxAndIndex(T arr[], int size);

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	const int sizze = 30;
	int Array[sizze];

	FillArray(Array, sizze);
	PrintArray(Array, sizze);
	MinMaxAndIndex(Array, sizze);
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

	cout << endl;
}

template<typename T>
void MinMaxAndIndex(T arr[], int size) {
	T min = arr[0], max = arr[0];
	int indexMax =  0, indexMin = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] < min){
			min = arr[i];
			indexMin = i;
		}
			
		if (arr[i] > max) {
			max = arr[i];
			indexMax = i;
		}
	}
	
	cout << "Минимальный элемент в массиве : " << min << " на позиции : " << indexMin << endl;
	cout << "Максимальный элемент в массиве : " << max << " на позиции : " << indexMax << endl;
}