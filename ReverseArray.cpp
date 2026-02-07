#include <stdio.h>

#define SIZE 5

void SwapCharElement(char* ptr1, char* ptr2)
{
	char temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

void PrintArray(char* arr, int size)
{
	for (int i = 0; i < size; i++)
		printf("%c ", arr[i]);
	printf("\n");	
}

void ReverseArrayIterative(char* arr, int size)
{
	for (int i = 0; i < (size/2); i++)
		SwapCharElement(&arr[i], &arr[size - 1 - i]);
}

void ReverseArrayRecursive(char* arr, int size)
{
	if (size > 1)
	{
		SwapCharElement(&arr[0], &arr[size - 1]);
		ReverseArrayRecursive(&arr[1], size - 2);
	}
}


int main()
{
	char arr[SIZE] = {'a', 'b', 'c', 'd', 'e'};
	
	PrintArray(arr, SIZE);
//	ReverseArrayIterative(arr, SIZE);
	ReverseArrayRecursive(arr, SIZE);
	PrintArray(arr, SIZE);	
	
	return 0;
}
