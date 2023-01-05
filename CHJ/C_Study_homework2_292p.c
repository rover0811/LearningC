#include <stdio.h>

void input_nums(int *lotto_nums);
void print_nums(int *lotto_nums);

int main(void)
{
	int lotto_nums[6];
	input_nums(lotto_nums);
	print_nums(lotto_nums);
	return 0;
}

void input_nums(int *lotto_nums)
{
	int input_number;  //�Է� �޴� ��ȣ�� �����ϴ� ����  
	int i;
	int number1 = 0;  //�� ��°�� �޴� ��ȣ���� �� ��ȣ�� �����ϴ� ����(��ȣ-1) 
	int number2 = 0;  //number1���� ���Ͽ� �ߺ��� ���Ұ� �ִ��� �˻��ϱ� ���� ������ ����  
	for(i=0;i<6;i++)  //  �ζ� ��ȣ�� ������ �迭 ���Ҹ� ��� 0���� �ʱ�ȭ�ϴ� �ڵ�  
		lotto_nums[i] = 0;
	while(number1<6)                 // 7��° ���Ҹ� �ޱ� ������ while���� ������� ��� �ζ� ��ȣ �Է� �ޱ�  
	{
		number2 = number1;           // �ߺ��Ǵ� ���ڰ� ���� �� number2�� 1��ŭ �������� �ٽ�while�� ���ۺο��� 
		printf("��ȣ �Է� : ");      // number1�� ���� �ʱ�ȭ  
		scanf("%d",&input_number);
		if(input_number>45 || input_number<1) // �־��� ���� ���� ���� �Է��ϸ� �ٽ� ���� �ޱ�  
		{
			printf("��ȣ�� �ٽ� �Է��ϼ���!\n");
			continue;
		}
		for(i=0;i<6;i++)            // ���� ���Ұ� �ֳ� �˻��ϴ� for��  
		{
			if(lotto_nums[i] == input_number)
			{
				printf("���� ��ȣ�� �ֽ��ϴ�!\n");
				number2++;
				break;
			}
		}
		if(number1 != number2)     // �� ���ǹ��� �� ���� ���Ұ� �̹� �ִٴ� ���̹Ƿ� continue
			continue;
		lotto_nums[number1] = input_number;  //���� ���Ұ� ������ number1�� �ε��� ���ҿ� �Է� ���� �� ����  
		number1++;
		number2++;
	}
}

void print_nums(int *lotto_nums)
{
	int i;
	printf("�ζ� ��ȣ : ");
	for(i=0;i<6;i++)           // �迭�� �ִ� ���ҵ� ����ϴ� for��  
		printf("%3d",lotto_nums[i]);	
}
