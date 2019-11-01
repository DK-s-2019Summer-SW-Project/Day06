// 다양한 형태의 함수 정의2 --> 전달 인자나 반환 값이 존재하지 않는 경우

//void ShowAddresult(int num) --> 인자 전달 됨 , 반환 값은 없음
//{
//	printf("the result is : %d");
//}

//int Readnum(void) --> 인자 전달 안됨 , 반환 값 있음
//{
//	int num;
//  scanf("%d", &num);
//  return 0;
//}

// 위의 함수에서는 매개 변수의 선언 위치에 void 선언이 등장 하였다. 여기서 void의 의미는 인자를 전달하지 않는다는 의미를 가지고 있다. 따라서 함수를 호출 할때 인자를 전달하면 안된다. 


//void HowToUseThisprog(void) --> 인자 전달 x 반환값 x
//{
//
//	printf("if you insert two number the result comes put: ");
//	printf("insert the two numbers: ");
//}
/* 위의 예시들을 사용한 코드  */
#include<stdio.h>
#define _CRT_SECURE_NO_WARNNIGNS

int Add(int num1, int num2)  // 인자 전달 o 반환값 o
{
	return num1 + num2; // <-- 여기서 인자를 전달
}

void ShowAddResult(int num) // 인자 전달o 반환값 x
{
	printf("print result of the sum: %d\n", num); // 여기서는 왜 인자가 전달이 되었는가? 
}

int ReadNum(void) // 인자 전달 x 반환 값 o
{

	int num;
	scanf_s("%d", &num);
	return num;
}

void HOWToUseProg(void) // 인자 전달 x 반환 값x
{
	printf("The result pop out, when you insert the two number\n");
	printf("Please insert the two number\n"); // 인자 전달과 반환 값이 없다는 의는 그냥 단순히 출력만 한다는 의미이다. 

}

int main()
{
	int result, num1, num2; // 먼저 사용할 인자들을 선언한다.
	HOWToUseProg(); // 그 다음 내가 원하는 출력 문을 출력 하다. 
	num1 = ReadNum(); /*    num을 이용한 변수는 위에 선언을 한 변수에서 가져 오게 된다.       */
	num2 = ReadNum();
	result = Add(num1, num2); // 내가 원하는 연산을 출력하는 문장이다
	ShowAddResult(result); // 원하는 연산을 출력 할 때 ()안에 내가 원하는 연산을 넣어서 출력을 했다.


	return 0;
}


// void를 사용 했다는 것은 자신의 인자를 전달하지 않겠다는 의미이다!! 참고로 void를 사용했다는 것은 (void) <-- 이렇게 사용이 되었다는 의미이다.
// 인자가 전달 되었다는 것의 의미는? --> txt파일 참조 == 그 함수안에서의 값을 main으로 가져 오겠다는 뜻이 인자를 전달 한다는 뜻!