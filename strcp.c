#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include <string.h>
#include <assert.h>
char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest && src);

		while (*dest++ = *src++)
		{
			;
	     }
	return ret;
}
int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "James";
	printf("%s\n",my_strcpy(arr1,arr2) );
	return 0;
}