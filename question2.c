#include<stdio.h>
#define _CRT_SECURE_NO_WARNNIGNS

int Add(int num1, int num2)
{
	return num1 + num2;
}



int main()
{
	int result;
	result = Add(3, 4);
	printf("The result is : %d\n", result); // ���� ��ȯ �ȴٴ� �� == �Լ��� ȣ�⹮�� ��ȯ ������ ��ü �Ǵ� ������ ���ظ� �� �� �ִ�.
	result = Add(5, 8);
	printf("The result2 is %d\n", result);



	return 0;
}
// �ѹ� ���� �� �Լ��� ����̰� �ݺ��ؼ� ȣ���� �� �� �ִ�. 

// C����� ��� call by value�̱� ������ ������ ������ ���� �ʴ´�. �׷��� ��ü���� ��� ���� call by referance�� ��쿡�� ������ ���� �Ű��� ���� ������ ������ ������ �����. ==> ���α׷��� ���� ����!