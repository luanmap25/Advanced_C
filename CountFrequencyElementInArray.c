#include <stdio.h>
#include <stdbool.h>

#define SIZE 6

void PrintArray(int* arr, int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");	
}

int* CheckAndGetDifferenceElementArray(int* arr, int size)
{
	int cnt = 0;
	int ArrTemp[] = {0};
	bool checkDuplicateElement = false;
	
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] == arr[j])
			{
				break;
			}
		}
		
		if (!checkDuplicateElement)
		{
			ArrTemp[cnt] = arr[i];
			cnt += 0;
		}
	}
	
	PrintArray(ArrTemp, cnt+1);
	
	return ArrTemp;
}



int main()
{
	int Arr[SIZE] = {2, 3, 7, 2, 6, 3};
	int* ptrArr;
	
	ptrArr = CheckAndGetDifferenceElementArray(Arr, SIZE);
	return 0;	
}
