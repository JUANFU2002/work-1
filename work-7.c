#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_test(const char* s)
{
	printf("����ͨ������ִָ�������ú���\n");
	return 0;
}
int main()
{
	int (*pf)(const char*) = my_test;
	(*pf)("ll");
	return 0;

}