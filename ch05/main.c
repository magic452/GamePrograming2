/*
* 작성일 2025-03-19
* 주제 구조체에 대한 이해


지난 시간 복습
비고						배열				포인터
이름이 존재하는가			가능함			가능함
무엇을 저장하는가			시작 주소		주소를 저장하는 변수
주소값이 변경가능한가		불가능			가능


상수 포인터
const
*/

#include<stdio.h>
#include"struct.h"
//array주소의 값을 변경하지 말아주세요
void ShowAllData(const int* Array, int length) {//배열을 가져와서 데이터를 보고싶다
	for (int i = 0; i < length; i++) {
		//Array[i] += 1;
		printf("%d\n", Array[i]);
	}
}

void ShowData(const int* num1ptr) {//num1ptr에 있는 값을 변경하지 마라
	int* rptr = num1ptr;
	*rptr += 2;

	printf("%d\n", *num1ptr);
}


//아이템의 이름을 출력하는 함수를 만드시오
//이름의 값은 변경되면 않됩니다
void ShowItemData(const char* Itemname)
{
	//*Itemname = "다른이름";
	printf("아이템 이름 :%s ",Itemname);
}


	int main() {


		int arr1[5] = { 0,1,2,3,4 };
		ShowAllData(arr1, 5);
		int n1 = 1;
		ShowData(&n1);

		char itemname1[10] = "칼";
		ShowItemData(itemname1);
		printf("ch05\n");
		//printf("상수 예제\n");
		const int num1 = 10; //num1이 상수가 된다 const 값을 변경하는것을 제한한다
		const int PI = 3.14;

		int number1 = 2;
		int number2 = 3;
		const int* number1ptr = &number1; //number1의 주소를 저장하는 변수에 number1의 주소를 저장한다
		//*number1ptr += 2; 주소안의 값을 변경하지 마라 상수 포인터
		number1ptr = &number2; //주소의 값을 변경하는 것은 가능하다

		int* const number2ptr = &number2;
		//number2ptr = &number1;
		*number2ptr += 3;

		//const pointer
		//값만 변경할 수 있는 형태		주소만 변경할 수 있는 형태		주소,값까지 변경됨
		//타입* const 이름				const타입*이름						const타입 const이름


		printf("구조체 예제\n");
		StructExample();
	}
