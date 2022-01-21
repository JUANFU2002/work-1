#define _CRT_SECURE_NO_WARNINGS 1

int minNumberInRotateArray(int* rotateArray, int rotateArrayLen) {
    int min = *rotateArray;//初始存放第一个数
    for (int i = 1; i < rotateArrayLen; ++i)
    {
        if (*(rotateArray + i) < min)
        {
            min = *(rotateArray + i);
        }
    }
    return min;
}
