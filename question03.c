// �پ��� ������ �Լ� ����2 --> ���� ���ڳ� ��ȯ ���� �������� �ʴ� ���

//void ShowAddresult(int num) --> ���� ���� �� , ��ȯ ���� ����
//{
//	printf("the result is : %d");
//}

//int Readnum(void) --> ���� ���� �ȵ� , ��ȯ �� ����
//{
//	int num;
//  scanf("%d", &num);
//  return 0;
//}

// ���� �Լ������� �Ű� ������ ���� ��ġ�� void ������ ���� �Ͽ���. ���⼭ void�� �ǹ̴� ���ڸ� �������� �ʴ´ٴ� �ǹ̸� ������ �ִ�. ���� �Լ��� ȣ�� �Ҷ� ���ڸ� �����ϸ� �ȵȴ�. 


//void HowToUseThisprog(void) --> ���� ���� x ��ȯ�� x
//{
//
//	printf("if you insert two number the result comes put: ");
//	printf("insert the two numbers: ");
//}
/* ���� ���õ��� ����� �ڵ�  */
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNIGNS

int Add(int num1, int num2)  // ���� ���� o ��ȯ�� o
{
	return num1 + num2; // <-- ���⼭ ���ڸ� ����
}

void ShowAddResult(int num) // ���� ����o ��ȯ�� x
{
	printf("print result of the sum: %d\n", num); // ���⼭�� �� ���ڰ� ������ �Ǿ��°�? 
}

int ReadNum(void) // ���� ���� x ��ȯ �� o
{

	int num;
	scanf_s("%d", &num);
	return num;
}

void HOWToUseProg(void) // ���� ���� x ��ȯ ��x
{
	printf("The result pop out, when you insert the two number\n");
	printf("Please insert the two number\n"); // ���� ���ް� ��ȯ ���� ���ٴ� �Ǵ� �׳� �ܼ��� ��¸� �Ѵٴ� �ǹ��̴�. 

}

int main()
{
	int result, num1, num2; // ���� ����� ���ڵ��� �����Ѵ�.
	HOWToUseProg(); // �� ���� ���� ���ϴ� ��� ���� ��� �ϴ�. 
	num1 = ReadNum(); /*    num�� �̿��� ������ ���� ������ �� �������� ���� ���� �ȴ�.       */
	num2 = ReadNum();
	result = Add(num1, num2); // ���� ���ϴ� ������ ����ϴ� �����̴�
	ShowAddResult(result); // ���ϴ� ������ ��� �� �� ()�ȿ� ���� ���ϴ� ������ �־ ����� �ߴ�.


	return 0;
}


// void�� ��� �ߴٴ� ���� �ڽ��� ���ڸ� �������� �ʰڴٴ� �ǹ��̴�!! ����� void�� ����ߴٴ� ���� (void) <-- �̷��� ����� �Ǿ��ٴ� �ǹ��̴�.
// ���ڰ� ���� �Ǿ��ٴ� ���� �ǹ̴�? --> txt���� ���� == �� �Լ��ȿ����� ���� main���� ���� ���ڴٴ� ���� ���ڸ� ���� �Ѵٴ� ��!