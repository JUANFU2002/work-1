#define _CRT_SECURE_NO_WARNINGS 1

int minNumberInRotateArray(int* rotateArray, int rotateArrayLen) {
    int min = *rotateArray;//��ʼ��ŵ�һ����
    for (int i = 1; i < rotateArrayLen; ++i)
    {
        if (*(rotateArray + i) < min)
        {
            min = *(rotateArray + i);
        }
    }
    return min;
}
