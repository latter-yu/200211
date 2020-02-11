#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0x11223344;
	int* pa = &a;
	char* pc = &a;
	// char* pa = (char*)&a;  强制类型转换
	printf("%p\n", pa);
	printf("%p\n", pa + 1);

	printf("%p\n", pc);
	printf("%p\n", pc + 1);
	return 0;
}


#include<stdio.h>

//my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

int my_strlen(char* str)
{
	char* start = str;
	while (*str != '\0')
	{
		str++;
	}
	return str - start;
}
int main()
{
	char arr[] = "hello";
	int len = my_strlen(arr);
	//int len = my_strlen("bit");
	printf("%d\n", len);
	return 0;
}