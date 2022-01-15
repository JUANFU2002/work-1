#define _CRT_SECURE_NO_WARNINGS 1
//void swap()
//{
//	int y[5 + 3] = { 0,1,3,4,5 }
//	;
//}
//int main()
//{
//	int x = 3,y = 8;
//	swap();
//	printf("%d,%d\n", x, y);
//	return 0;
//}
#include<stdio.h>
int main()
{
    int year, month, day;
    int all = 0;;
    scanf("%d %d %d", &year, &month, &day);
    int leapyear[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
    int commonyear[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    if (year % 400 == 0 && (year % 4 == 0 || year % 100 != 0))
    {
        for (int i = 0; i < month - 1; i++)
        {
            all += leapyear[i];
        }
        all += day;
    }
    else
    {
        for (int j = 0; j < month - 1; j++)
        {
            all += commonyear[j];
        }
        all += day;
    }
    printf("%d", all);
    return 0;
}