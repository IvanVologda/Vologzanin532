#include <iostream>
#include <Windows.h>
#include <ctime>

void DynamicMemoryAllocation(int* &arr, int size);

void InitializeDynamicArray(int* arr, int size);

void PrintDynamicArr(int* arr, int size);

void InsertElement(int*& arr, int& size, int value);

void InsertElement(int*& arr, int& size, int value, int index);

void DeleteElement(int*& arr, int& size, int index);

void DeleteDynamicArr(int*& arr);

bool IsValidIndexInsert(int index, int size);

bool IsValidIndexDelete(int index, int size);

bool IsValidSize(int size);

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));

	int* ptr = nullptr;
	int size = 0, value = 0, index = 0;

	std::cout << "Введите размер массива: ";
	std::cin >> size;
	
	while (!IsValidSize(size))
	{
		std::cout << "Введите размер массива: ";
		std::cin >> size;
	}

	DynamicMemoryAllocation(ptr, size);
	InitializeDynamicArray(ptr, size);
	PrintDynamicArr(ptr, size);

	std::cout << "Введите число, которое хотите добавить в массив: ";
	std::cin >> value;
	InsertElement(ptr, size, value);
	PrintDynamicArr(ptr, size);

	std::cout << "Введите число, которое хотите добавить в массив: ";
	std::cin >> value;
	std::cout << "Введите индекс, куда хотите добавить число: ";
	std::cin >> index;

	while (!IsValidIndexInsert(index, size))
	{
		std::cout << "Введите индекс, куда хотите добавить число: ";
		std::cin >> index;
	}

	InsertElement(ptr, size, value, index);
	PrintDynamicArr(ptr, size);
	std::cout << "Введите индекс, который хотите удалить: ";
	std::cin >> index;

	while (!IsValidIndexDelete(index, size))
	{
		std::cout << "Введите индекс, который хотите удалить: ";
		std::cin >> index;
	}

	DeleteElement(ptr, size, index);
	PrintDynamicArr(ptr, size);

	DeleteDynamicArr(ptr);

	return 0;
}

void DynamicMemoryAllocation(int* &arr, int size)
{
	arr = new int[size];
}

void InitializeDynamicArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}

void PrintDynamicArr(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}

	std::cout << "\n";
}

void InsertElement(int* &arr, int& size, int value)
{
	int* temp = new int[size + 1];

	for (int i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}

	delete[] arr;
	
	temp[size] = value;

	arr = temp;

	size++;
}

void InsertElement(int*& arr, int& size, int value, int index)
{
	if (index == size)
	{
		InsertElement(arr, size, value);
		return;
	}

	int* temp = new int[size + 1];

	for (int i = 0, j = 0; j < size + 1; i++)
	{
		if (i == index)
		{
			temp[i] = value;
			continue;
		}

		temp[i] = arr[j++];
	}

	delete[] arr;
	arr = temp;
	size++;
}

void DeleteElement(int*& arr, int& size, int index)
{
	if (arr == nullptr)
	{
		std::cout << "Массив пуст!\n";
		return;
	}

	if (index < 0 || index >= size)
	{
		std::cout << "Индекс вне диапазона!\n";
		return;
	}


	if (size == 1)
	{
		DeleteDynamicArr(arr);
		size = 0;
		return;
	}

	int* temp = new int[size - 1];

	for (int i = 0, j = 0; i < size; i++)
	{
		if (i != index)
		{
			temp[j] = arr[i];
			j++;
		}
	}

	delete[] arr;
	arr = temp;
	size--;
}

void DeleteDynamicArr(int*& arr)
{
	if (arr == nullptr)
	{
		std::cout << "Массив уже удален!\n";
		return;
	}

	delete[] arr;
	arr = nullptr;
}

bool IsValidIndexInsert(int index, int size)
{
	if (index < 0 || index > size)
	{
		std::cout << "Индекс вне диапазона!\n";
		return false;
	}
	return true;
}

bool IsValidIndexDelete(int index, int size)
{
	if (index < 0 || index >= size)
	{
		std::cout << "Индекс вне диапазона!\n";
		return false;
	}
	return true;
}

bool IsValidSize(int size)
{
	if (size <= 0)
	{
		std::cout << "Размер массива должен быть больше 0!\n";
		return false;
	}
	return true;
}
