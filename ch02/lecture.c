#include "lecture.h"


//전역변수
int gamescore = 0;
void ShowLecture()
{
	printf("강의 예제1\n");

	//변수를 선언하고 주소를 출력하시오
	int num1 = 10;
	int* numptr = &num1;  //주소 +값
	
	printf("값을 출력 %d:\n", num1);
		printf(" 주소출력:%p\n", &num1);

		printf("강의실습\n");
		//int* 타입이 2개 필요하다 int형 주소가 2개 필요하다
		int numA = 5;
		int numB = 6;
		printf("두 수의 값:%d %d\n", numA, numB);
		Swap(&numA,&numB);
		printf("두 수의 값:%d %d\n", numA, numB);

		printf("응용 예제\n\n");//점수를 획득하는 시스템을 구현 특정 행동, 시간에 따라 증가


		IncreaseScore(&gamescore, 10);
		printf("현재 점수 : %d\n", gamescore);

		printf("강의 실습2\n");
		//변수 3개를 선언해보세요
		float weight = 1.5f;
		int weaponLv = 1;
		int baseAP = 0;

		//무기공격력을 증가시킨 함수
		//같은 함수로 구현 할 수 없을까
		printf("가중치 레벨 기본공격력  %f  %d  %d\n", weight, weaponLv, baseAP);
		Upgradeweapon(&weaponLv,baseAP,&weight);
		printf("가중치 레벨 기본공격력  %f  %d  %d\n", weight, weaponLv, baseAP);

		//정리 
		//함수를 이용하여 값만 바꿨는데 주소를 이용하고 값을 바꿀수 있다
		//언제 주소를 사용할지 1. 외부의 값을 변경 해야할때 2. 가져와야할 데이터 타입이너무 클 때 주소만으로 가져올 수 있다

		//아이템 개수 증가 함수

		//플레이어의 좌표를 이동시키는 함수
}

void Swap(int* a, int* b)
{
	int temp = *a; //a는 주소인데 주소로부터 값을 가져오는 연산자
	*a = *b; // *포인터변수 = 값 : a의 주소에 값을 저장해라
	*b = temp;		//*b : b의 주소에 저장되어 있는 값을 불러와라
				//(*b -> 6)
}

void IncreaseScore(int* score, int points)
{
	//Gamesrore의 주소를 받아옴
	//*주소변수 = 값 외부에 있는 Gamescore 값이 변경된다.

	*score += points;
}

void Upgradeweapon(int* weaponLV, int baseAP, float* weight)
{
	//레벨을 1 증가시킨다
	//가중치를 틀정레벨에서 변경 시킨다

	*weaponLV += 4;
	if (*weaponLV % 5 == 0)
	{
		*weight = *weight * 1.5f;
	}

	printf("현재 무기 공격력 %f", (*weaponLV) * (*weight)+baseAP);
}

void mytemp(int a, int b)
{
	int temp =0;
	a = temp;
	a = b;
}

