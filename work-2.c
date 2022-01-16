#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int num;
    while (scanf("%d", &num) != EOF)
    {
        int tri = num * num * num;
        for (int i = 1; i < 65000; i += 2)
        {
            int sum = (i + (i + (num - 1) * 2)) * num / 2;
            if (sum == tri)
            {
                for (int j = 0; j < num - 1; j++)
                {
                    printf("%d+", i + 2 * j);
                }
                printf("%d\n", i + 2 * (num - 1));
            }
        }
    }
    return 0;
}