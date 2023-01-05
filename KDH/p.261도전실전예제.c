#include <stdio.h>

int main()
{
    int i = 0, j = 0, num, temp;
    int arr[1001] = {0};

    scanf("%d", &num); // num 이라는 변수에 몇개 입력받을지 받음
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\n");

    for (i = 0; i < num; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}