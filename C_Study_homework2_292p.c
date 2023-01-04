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
	int input_number;  //입력 받는 번호를 저장하는 변수  
	int i;
	int number1 = 0;  //몇 번째로 받는 번호인지 그 번호를 저장하는 변수(번호-1) 
	int number2 = 0;  //number1과의 비교하여 중복된 원소가 있는지 검사하기 위해 도입한 변수  
	while(number1<6)                 // 7번째 원소를 받기 전까지 while문을 실행시켜 모든 로또 번호 입력 받기  
	{
		number2 = number1;           // 중복되는 숫자가 있을 때 number2를 1만큼 증가시켜 다시while문 시작부에서 
		printf("번호 입력 : ");      // number1과 같은 값으로 초기화  
		scanf("%d",&input_number);
		if(input_number>45 || input_number<1) // 주어진 범위 밖의 수를 입력하면 다시 숫자 받기  
		{
			printf("번호를 다시 입력하세요!\n");
			continue;
		}
		for(i=0;i<number1;i++)            // 같은 원소가 있나 검사하는 for문  
		{
			if(lotto_nums[i] == input_number)
			{
				printf("같은 번호가 있습니다!\n");
				number2++;
				break;
			}
		}
		if(number1 != number2)     // 이 조건문이 참이면 곧 같은 원소가 있다는 뜻이므로 continue
			continue;
		lotto_nums[number1] = input_number;  //같은 원소가 없으면 number1의 인덱스 원소에 입력 받은 수 대입  
		number1++;
		number2++;
	}
}

void print_nums(int *lotto_nums)
{
	int i;
	printf("로또 번호 : ");
	for(i=0;i<6;i++)           // 배열에 있는 원소들 출력하는 for문  
		printf("%3d",lotto_nums[i]);	
}
