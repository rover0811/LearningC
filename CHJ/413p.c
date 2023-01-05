#include <stdio.h>

void input(int (*)[6]);
void calculate(int (*)[6]);
void print(int (*)[6]);

int main(void)
{
	int ary[5][6];
	input(ary);
	calculate(ary);
	print(ary);
	return 0;
}

void input(int (*pary)[6])
{
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
			scanf("%d",&pary[i][j]);
	}
}

void calculate(int (*pary)[6])
{
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<5;j++)
		{
			pary[i][5] += pary[i][j];
			if(j!=4)
				pary[4][i] +=pary[j][i];
		}
		pary[4][4]+=pary[i][4];
		pary[4][5]+=pary[i][5];
	}
}

void print(int (*pary)[6])
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<6;j++)
		{
			printf("%5d",pary[i][j]);
		}
		printf("\n");	
	}
}

