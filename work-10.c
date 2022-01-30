
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

void bubble_sort(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
void print_arr(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\0");
}

int cmp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;

}

int main()
{
	int arr[] = { 1,3,2,5,4,7,0,8,9,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//bubble_sort(arr, sz);
	qsort(arr, sz, sizeoof(arr[0]),cmp_int);

	print_arr(arr, sz);
	return 0;
}