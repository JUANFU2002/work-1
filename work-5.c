#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    int a[1000];
    while (scanf("%d", &num) != EOF)
    {
        int count = 0;
        int countint = 0;
        float sum = 0;
        for (int i = 0; i < num; i++)
        {
            scanf("%d", &a[i]);
            if (a[i] < 0)
            {
                count++;
            }
            if (a[i] > 0)
            {
                countint++;
                sum += a[i];
            }
        }
        printf("%d %0.1f\n", count, sum / countint);
    }
}