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
	printf("The result is : %d\n", result); // 값이 반환 된다는 것 == 함수의 호출문이 반환 값으로 대체 되는 것으로 이해를 할 수 있다.
	result = Add(5, 8);
	printf("The result2 is %d\n", result);



	return 0;
}
// 한번 정의 된 함수는 몇번이고 반복해서 호출을 할 수 있다. 

// C언어의 경우 call by value이기 때문에 원본이 변경이 되지 않는다. 그러나 객체지향 언어 같은 call by referance의 경우에는 원본이 같이 옮겨저 가기 때문에 원본에 변형이 생긴다. ==> 프로그래밍 언어론 복습!