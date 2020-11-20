#include <stdio.h>
#include <stdlib.h>
#include "Sort.h"

int main(int argc, char* argv[])
{
	int arr[] = { 38,49,65,97,76,13,27,49 };
	int arr2[] = { 38,49,65,97,76,13,27,49 };
	int len = sizeof(arr) / sizeof(arr[0]);

	printf("≈≈–Ú«∞:");
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n\n");
	InsertSort1(arr, len);
	InsertSort2(arr2, len);
	printf("≈≈–Ú∫Û:");
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	return EXIT_SUCCESS;
}


