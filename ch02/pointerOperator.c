#include "pointerOperator.h"

void PointerExample()
{
	int num1 = 0;
	int* num1ptr = &num1;

	double doublenum1 = 1.0;
		double* doublenum1ptr = &doublenum1;
	printf("\n\n");
	printf("int 데이터의 크기%d\n", sizeof(num1));

	printf("int 주소의 크기%d\n", sizeof(num1ptr));

	printf("double 데이터의 크기%d\n", sizeof(doublenum1));
	printf("double 주소의 크기%d\n", sizeof(doublenum1ptr));

	//x86 주소의 크기 실행 4바이트
	//x64 주소의 크기 실행 8바이트
	//주소는 크기가 일정하다

	//주소를 더해보자
	printf("주소 출력 : %p\n", &num1ptr);
	//주소를 더하면 어떻게 될까

	//주소 자체를 더하기 vs 주소를 참조해서 더하기

	//주소형태로 가져오기(참조방식) - 프로그램이 종료되거나 직접 메모리를 삭제하기 전까지 남습니다
	//변수의 이름으로가져오는 방식(값 방식) - 코드영역이 끝나는 시점에 메모리가 해제됩니다

	printf("num1ptr의 값 출력%d\n", (num1ptr)+1);



	num1ptr = num1ptr + 1;
	printf("주소 출력 : %p\n", &num1ptr);
	printf("주소 출력 : %p\n", &doublenum1ptr);
	doublenum1ptr = doublenum1ptr + 1;
	printf("주소 출력 : %p\n", &doublenum1ptr);
	//주소를 더하면 주소의 값이 가진 크기 만큼 증가한다

	
}
