#include <stdio.h>
void ascending_number(int N, int num[]);
int main(void)
{
	int count;
	scanf("%d", &count);
	int num[1000];

	for (int i = 0; i < count; i++) {
		scanf("%d", &num[i]);
	}

	printf("\n");
	ascending_number(count, num);
	
	return 0;
}

void ascending_number(int N, int num[])
{

	int i, j, tmp;


	for (i = 0; i < N-1; i++)
		for (j = N-1; j > i; j--)
			if (num[j - 1] > num[j]) {
				tmp = num[j - 1];
				num[j - 1] = num[j];
				num[j] = tmp;
			}


	int h = 1;
	int tem[1000];
	tem[0] = num[0];
	for (int i = 1; i < 1000; i++)
		if (num[i] != tem[h - 1])
			tem[h++] = num[i];
	for (int i = 0; i < h-1; i++)
		printf("%d\n", tem[i]);

}
