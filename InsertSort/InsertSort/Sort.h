#pragma once
#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b);

void InsertSort1(int arr[], int len)
{
	int count1 = 0, count2 = 0;
	for (int i = 1; i < len; i++)
	{
		count1++;
		if (arr[i - 1] > arr[i])
		{
			swap(&arr[i - 1], &arr[i]);
			count2++;
		}
		for (int j = i - 1; j > 0; j--)
			//for (int j = i - 1; j > 0 && arr[j-i]>arr[j]; j--)
		{
			count1++;
			if (arr[j - 1] > arr[j])
			{
				swap(&arr[j - 1], &arr[j]);
				count2++;
			}
		}
	}
	printf("总共进行 %d 次比较， %d 次交换\n", count1, count2);
}

void InsertSort2(int arr[], int len)
{
	int i, j;
	for (i = 1; i < len; i++)
	{
		if (arr[i] < arr[i - 1])
		{
			int temp = arr[i];
			for (j = i - 1; j >= 0 && temp < arr[j]; j--)
			{
				arr[j + 1] = arr[j];
			}
			arr[j + 1] = temp;
		}
	}
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}