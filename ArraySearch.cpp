#include <iostream>
#include <Windows.h>


int count(int* arr, int size, int startingPoint)
{
    int left = 0;
    int right = size; 
    while (left < right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] > startingPoint)
        {
            right = mid;  
        }
        else  
        {
            left = mid + 1;  
        }
    }
    return size - left;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int startingPoint;
	int arr[] = { 14, 16, 19, 32, 32, 32, 56, 69, 72 };
	int size = sizeof(arr) / sizeof(arr[0]);
	
	std::cout << "Введите точку отсчёта: ";
	std::cin >> startingPoint;

    int point = count(arr, size, startingPoint);
	std::cout << "Количество элементов в массиве больших, чем " << startingPoint << ": " << point;
	std::cout << std::endl;


	return 0;
}