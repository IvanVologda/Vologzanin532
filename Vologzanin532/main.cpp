#include <iostream>
#include <Windows.h>

void FillAray(int* arr, int size);
void ArrPlus(int* &arr, int& size);
void DynamicMemoryAllocation(int* &arr, int size);
void DynamicArrayInitAllocation(int*& arr, int &size);
void PrintDynamicArr(int*& arr, int& size);
void DeleteDynamicArr(int*& arr);


int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));

	int* ptr = nullptr;
	int size = 5;

	DynamicMemoryAllocation(ptr, size);
	DynamicArrayInitAllocation(ptr, size);
	PrintDynamicArr(ptr, size);
	ArrPlus(ptr, size);
	PrintDynamicArr(ptr, size);
	DeleteDynamicArr(ptr);

	return 0;
}

void DynamicMemoryAllocation(int* &arr, int size)
{
	arr = new int[size];
}

void DynamicArrayInitAllocation(int*& arr, int& size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}

void PrintDynamicArr(int*& arr, int& size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}

	std::cout << "\n";
}

void ArrPlus(int* &arr, int& size)
{
	size++;

	int* temp = new int[size];

	for (int i = 0; i < size - 1; i++)
	{
		temp[i] = arr[i];
	}

	temp[size - 1] = 100;

	std::swap(arr, temp);

	delete[] temp;
}

void DeleteDynamicArr(int*& arr)
{
	delete[] arr;
	arr = nullptr;
}

/*int row = 4, col = 5;
int** arr = new int* [row];

for (int i = 0; i < row; i++)
	arr[i] = new int[col];

for (int i = 0; i < row; i++)
	delete[] arr[i];

delete[] arr;*/