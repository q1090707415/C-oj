#include <stdio.h>

int main(void)
{
    int n = 0;
    int m = 0;
    int arr1[10][10] = {0};
    int arr2[10][10] = {0};
    //����n��m
    scanf("%d %d", &n, &m);
    //�����һ���������
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d ", &arr1[i][j]);
        }
    }
    //�ڶ������������
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d ", &arr2[i][j]);
        }
    }
    //�Ƚ�������Ķ�Ӧλ�õ�Ԫ��
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (arr1[i][j] != arr2[i][j])
            {
                printf("No\n");
                return 0;
            }
        }
    }
    printf("Yes\n");
    return 0;
}