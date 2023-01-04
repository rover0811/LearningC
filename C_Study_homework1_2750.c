#include <stdio.h>
// 백준 2750
int number[1001];
int main(void)
{
	int i ,j;
	int minimum; // 최소값을 갖는 원소의 인덱스
	int temp;   // 최소값을 저장할 변수 
	int n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&number[i]);
	for(i=0;i<n-1;i++)
	{
		minimum = i;//i번째 원소를 최소라 생각하고 아래 for문에서
					//i번째 이후의 모든 원소에 접근하여 이 중 최소값을 갖는
					// 인덱스 값을 minimum에 저장
		for(j=i+1;j<n;j++)
		{
			if(number[minimum]>number[j]) 
				minimum = j;                 
		}
		temp = number[minimum]; //i번째 원소와 minimum인덱스를 갖는 원소의 값 교환
		number[minimum] = number[i];
		number[i] = temp;
	}
	for(i=0;i<n;i++)
		printf("%d\n",number[i]);
	return 0;	
}
