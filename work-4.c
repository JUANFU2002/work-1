#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
//int fun(int n)
//{
//    return 3 * n - 1;
//}
//
//int main()
//{
//    int n;
//
//    while (EOF != scanf("%d", &n))
//    {
//        int sum = 0;
//        for (int i = 1; i <= n; i++)
//        {
//            sum += fun(i);
//        }
//        printf("%d\n", sum);
//    }
//
//    return 0;
//}
int i;
void prt()
{
	for (i = 5; i < 8; i++)
	{
		printf("%c", '*');
	}
	printf("\t");
	printf("165");

}
int main()
{
	for (i = 5; i < 8; i++)
	{
		prt();
		return 0;

	}
}
