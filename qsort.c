//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include <string.h>
//void print(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
////void my_bubblesort(int arr[],int sz)
////{
////	int i = 0;
////	for (i = 0; i < sz - 1; i++)
////	{
////		int j = 0;
////		for (j = 0; j < sz - 1 - i; j++)
////		{
////			if (arr[j] > arr[j + 1])
////			{
////				int tmp = arr[j];
////				arr[j] = arr[j + 1];
////				arr[j + 1] = tmp;
////			}
////		}
////	}
////}
////int main()
////{
////	int arr[10] = { 10,8,9,6,4,5,2,1,3,7 };
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	print(arr,sz);
////	my_bubblesort(arr,sz);
////	print(arr,sz);
////	return 0;
////}
//
//void swap(char* buf1, char* buf2, size_t size)
//{
//	int i = 0;
//	for (i = 0; i < size; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void bubble_sort(void* base, size_t num, size_t size, int (*cmp)(const void* e1, const void* e2))
//{
//	//Ã°ÅÝÅÅÐòµÄÌËÊý
//	int i = 0;
//	for (i = 0; i < num - 1; i++)
//	{
//		//Ò»ÌËÃ°ÅÝÅÅÐò
//		int j = 0;
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			//if (arr[j] > arr[j + 1])
//			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size) > 0)
//			{
//				//½»»»
//				swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
//			}
//		}
//	}
//}
////void bubble_sort(void *arr,size_t sz,size_t size,int (*cmp)(const void *e1,const void*e2))
////{
////	int i = 0;
////	for (i = 0; i < sz - 1; i++)
////	{
////		int j = 0;
////		for (j = 0; j < i - sz - i; j++)
////		{
////			if (cmp((char*)arr + j * size, (char*)arr + (j + 1) * size) > 0)
////			{
////				swap((char*)arr+j*size,(char*)arr+(j+1)*size,size);
////			}
////		}
////	}
////
////}
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//int main()
//{
//	int arr[10] = { 10,8,9,6,4,5,2,1,3,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	print(arr, sz);
//}