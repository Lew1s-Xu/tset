#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int a = 10;
//	int *p = &a;
//	printf("%p\n", p);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	char* p = arr;
//	//int *p=arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//		printf("%d\n", arr[i]);
//	}
//
//	return 0;
//}
int main()
{
	int arr[10] = { 0 };
	int* p = arr;
	//int *p=arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 1;
		printf("%d\n", arr[i]);
	}

	return 0;
}