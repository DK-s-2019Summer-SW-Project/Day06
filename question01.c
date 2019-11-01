#include<stdio.h>
#define _CRT_SECURE_NO_WARNNIGNS

int main()
{

	int num1, num2;
	num1 = printf("12345\n");
	num2 = printf("I love my home\n");
	printf("%d %d\n", num1, num2); // num1 과 num2의 경우 값이 없어도 값을 출력 한다 --> printf 함수도 반환을 하기 떄문!


	return 0;
}