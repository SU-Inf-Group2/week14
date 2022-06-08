/*
Да се напише шаблонна функция, която приема масив от 
неизвестен тип и връща негово копие с разменени най-големия
и най-малкия му елемент. За целта създайте и шаблонни 
помощни функции:

    void swap(T& elem1, T& elem2)
    unsigned int indexMax(T* arr)
    unsigned int indexMin(T* arr)

*/
#include <iostream>

using namespace std;

template <class T>
void my_swap(T& elem1, T& elem2);

template <class T> 
unsigned int indexMax(T* arr, unsigned int size);

template <class T> 
unsigned int indexMin(T* arr, unsigned int size);

template <class T>
T* array_swap(T* arr, unsigned int size);

int main()
{
	int arr[5] = {2, 3, 0, 5, 1};
	array_swap(arr, 5);
	for(int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}

template <class T>
void my_swap(T& elem1, T& elem2)
{
	cout << "double" << endl;
	T temp = elem1;
	elem1 = elem2;
	elem2 = temp;
}

template <class T> 
unsigned int indexMax(T* arr, unsigned int size)
{
	unsigned int max_index = 0;
	for(int i = 1; i < size; i++)
	{
		if(arr[i] > arr[max_index])
			max_index = i;
	}
	return max_index;
}

template <class T> 
unsigned int indexMin(T* arr, unsigned int size)
{
	unsigned int min_index = 0;
	for(int i = 1; i < size; i++)
	{
		if(arr[i] < arr[min_index])
			min_index = i;
	}
	return min_index;
}

template <class T>
T* array_swap(T* arr, unsigned int size)
{
	my_swap(arr[indexMin(arr, size)], arr[indexMax(arr, size)]);
	return arr;
}