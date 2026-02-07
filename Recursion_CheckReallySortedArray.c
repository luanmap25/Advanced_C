#include <stdio.h>
#include <stdbool.h>

#define SIZE 5

// Really Sorted: result = 1, isReallySorted = 1
// Sorted: result = 1, isReallySorted = 0
// Not Sorted: result = 0, isReallySorted = 0

bool CheckReallySortedArray(int* arr, int size, bool* isReallySorted)
{
	int result;	
	
	// Mang se duoc mac dinh la really sorted
	if (size == 1)
	{
		*isReallySorted = 1;
		return 1;
	}
	
	// Xet duyet tu phan tu dau tien trong mang theo recursion
	// Kich thuoc cua mang giam dan (giam 1 phan tu)
	// Lay ket qua tra ve sau moi lan kiem tra cac phan tu tu nho den lon
	// lien ke nhau, gan ket qua tra ve vao result
	result = CheckReallySortedArray(arr, size-1, isReallySorted);
	
	// So sanh hai phan tu lien ke nhau
	// Kiem tra xem mang co hai phan tu lien ke bang nhau khong
	// khi result = 0 --> mang chua duoc sap xep
	if (result != 0 && arr[size - 1] == arr[size - 2])
	{
		*isReallySorted = 0;
	}
	
	// Kiem tra xem mang co duoc sap xep theo thu tu tang dan chua
	// khi result = 0 --> mang chua duoc sap xep
	if (result != 0 && arr[size - 1] < arr[size - 2])
	{
		*isReallySorted = 0;
		return 0; // tra ve result = 0	
	}
	
	return result;
}


int main()
{
//	int n;
//	printf("Nhap so phan tu n cua mang:");
//	scanf("%d",&n);

	int arr[SIZE] = {1, 2, 5, 7, 8};
	bool result;
	bool checkReallySorted;
	
	result = CheckReallySortedArray(arr, 5, &checkReallySorted);
	
	if (result == 0 && checkReallySorted == 0)
	{
		printf("Mang chua duoc sap xep\n");
	}
	else if (checkReallySorted == 0)
	{
		printf("Mang la sorted array\n");
	}
	else
	{
		printf("Mang la really sorted array\n");
	}
	
	return 0;
}
