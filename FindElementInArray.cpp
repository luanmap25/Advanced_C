#include <stdio.h>

#define SIZE 5

bool FindAnElementInArray(int* arr, int size, int key)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key)
			return 1;
	}
	return 0;
}

int main()
{
	int arr[SIZE] = {10,15,20,25,30};
	bool result;
	int key;
	
	printf("Nhap key can tim:");
	scanf("%d", &key);
	
	result = FindAnElementInArray(arr, SIZE, key);
	// "1": co, "0": khong
	printf("Ket qua tim kiem key trong array: %d\n", result);
	
	return 0;
}
