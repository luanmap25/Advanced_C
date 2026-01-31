#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void GenericSwap(void* a, void* b, int size)
{
	void* tempSize = malloc(size);
	
	memcpy(tempSize, a, size);
	memcpy(a, b, size);
	memcpy(b, tempSize, size);
}

int main()
{
	int num1 = 5, num2 = 8;
	double num3 = 10.5, num4 = 12.6;
	
	GenericSwap(&num1, &num2, sizeof(int));
	printf("After swap: num1: %d and num2: %d\n", num1, num2);
	
	GenericSwap(&num3, &num4, sizeof(double));
	printf("After swap: num3: %.2f and num4: %.2f\n", num3, num4);
	
	return 0;	
}
