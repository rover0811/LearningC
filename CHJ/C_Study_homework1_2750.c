#include <stdio.h>
// ���� 2750
int number[1001];
int main(void)
{
	int i ,j;
	int minimum; // �ּҰ��� ���� ������ �ε���
	int temp;   // �ּҰ��� ������ ���� 
	int n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&number[i]);
	for(i=0;i<n-1;i++)
	{
		minimum = i;//i��° ���Ҹ� �ּҶ� �����ϰ� �Ʒ� for������
					//i��° ������ ��� ���ҿ� �����Ͽ� �� �� �ּҰ��� ����
					// �ε��� ���� minimum�� ����
		for(j=i+1;j<n;j++)
		{
			if(number[minimum]>number[j]) 
				minimum = j;                 
		}
		temp = number[minimum]; //i��° ���ҿ� minimum�ε����� ���� ������ �� ��ȯ
		number[minimum] = number[i];
		number[i] = temp;
	}
	for(i=0;i<n;i++)
		printf("%d\n",number[i]);
	return 0;	
}
