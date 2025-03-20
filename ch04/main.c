/*
* 2025 -03-18
* 주제 : 배열과 포인터
* 
* 1. 배열 (Array)
* 예시 성적표(국어,영어, 수학)
* 사용목적

*/



#include<stdio.h>
int main() {
	printf("배열과 포인터");
	printf("배열 예시 성적표 만들기\n");
	int scoreA= 80;//국어
	int scoreB=70;//영어
	int scoreC=65;//수학

	//변수 : 데이터 타입으로 저장한 저장소 : 메모리에 저장된 크기, 시작하는 메모리 주소
	//같은 타입의 변수를 하나의 이름으로 선언하는 방법 : 배열

	int scores[3] = { 80,70,60 };;//배열을 선언 int형 데이터 타입을 3개 저장하는 score라는 이름의 변수

	scores[0]; //scores 주소 +0 = 자기자신
	scores[1]; //scores 주소 +1 = 2번째 주소
	scores[2];

	for (int i = 0; i < 3; i++) {
		printf("성적을 순서대로 출력하세요, %d\n",scores[i]);
	
	}
	//printf("국어 : %d , 영어 %d, 수학%d", scoreA, scoreB, scoreC);

	//아이템 정의
	//아이템 이름(문자열),아이템 갯수, 아이템 index
	char itemname[10] = "AAA";
	int ItemCount = 1;
	int ItemIndex = 1;

	printf("아이템 1번의 정보:\n");
	printf("아이템 번호 %d, 아이템 이름 %s, 아이템 수량:%d", ItemIndex, itemname, ItemCount);
	//아이템을 데이터 설정한다( 게임의 고유데이터, 세이브데이터)
	int ItemCount[10] = {1,2,3,4,5,6,7,8,9,10};
	int ItemIndex[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int itemname[10] = { "AAA","BBB","CCC","DDD","EEE" };

	printf("모든 아이템을 열람한다");
	
	                                
}