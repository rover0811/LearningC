#include <stdio.h>
#include <stdlib.h>


void sort(int*, int);

int main(){

    int size;
    scanf("%d", &size);

    int* ary = (int*)malloc(sizeof(int) * size); //동적할당

    for (int i=0;i<size;i++){
        scanf("%d",&ary[i]);
    }

    sort(ary,size);

    for (int i=0;i<5;i++){
        printf("%d\n",ary[i]);
    }

    return 0;
}

void sort(int* pary, int COUNT){
    int temp=0;
    for (int i = 0; i < COUNT - 1; i++)
    {
        for (int j = 0; j < COUNT - 1 - i; j++)
        {
            if (pary[j] > pary[j + 1])
            {
                temp        = pary[j];
                pary[j]     = pary[j + 1];
                pary[j + 1] = temp;
            }
        }
    }
}
