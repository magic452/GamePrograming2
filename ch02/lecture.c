#include "lecture.h"


//��������
int gamescore = 0;
void ShowLecture()
{
	printf("���� ����1\n");

	//������ �����ϰ� �ּҸ� ����Ͻÿ�
	int num1 = 10;
	int* numptr = &num1;  //�ּ� +��
	
	printf("���� ��� %d:\n", num1);
		printf(" �ּ����:%p\n", &num1);

		printf("���ǽǽ�\n");
		//int* Ÿ���� 2�� �ʿ��ϴ� int�� �ּҰ� 2�� �ʿ��ϴ�
		int numA = 5;
		int numB = 6;
		printf("�� ���� ��:%d %d\n", numA, numB);
		Swap(&numA,&numB);
		printf("�� ���� ��:%d %d\n", numA, numB);

		printf("���� ����\n\n");//������ ȹ���ϴ� �ý����� ���� Ư�� �ൿ, �ð��� ���� ����


		IncreaseScore(&gamescore, 10);
		printf("���� ���� : %d\n", gamescore);

		printf("���� �ǽ�2\n");
		//���� 3���� �����غ�����
		float weight = 1.5f;
		int weaponLv = 1;
		int baseAP = 0;

		//������ݷ��� ������Ų �Լ�
		//���� �Լ��� ���� �� �� ������
		printf("����ġ ���� �⺻���ݷ�  %f  %d  %d\n", weight, weaponLv, baseAP);
		Upgradeweapon(&weaponLv,baseAP,&weight);
		printf("����ġ ���� �⺻���ݷ�  %f  %d  %d\n", weight, weaponLv, baseAP);

		//���� 
		//�Լ��� �̿��Ͽ� ���� �ٲ�µ� �ּҸ� �̿��ϰ� ���� �ٲܼ� �ִ�
		//���� �ּҸ� ������� 1. �ܺ��� ���� ���� �ؾ��Ҷ� 2. �����;��� ������ Ÿ���̳ʹ� Ŭ �� �ּҸ����� ������ �� �ִ�

		//������ ���� ���� �Լ�

		//�÷��̾��� ��ǥ�� �̵���Ű�� �Լ�
}

void Swap(int* a, int* b)
{
	int temp = *a; //a�� �ּ��ε� �ּҷκ��� ���� �������� ������
	*a = *b; // *�����ͺ��� = �� : a�� �ּҿ� ���� �����ض�
	*b = temp;		//*b : b�� �ּҿ� ����Ǿ� �ִ� ���� �ҷ��Ͷ�
				//(*b -> 6)
}

void IncreaseScore(int* score, int points)
{
	//Gamesrore�� �ּҸ� �޾ƿ�
	//*�ּҺ��� = �� �ܺο� �ִ� Gamescore ���� ����ȴ�.

	*score += points;
}

void Upgradeweapon(int* weaponLV, int baseAP, float* weight)
{
	//������ 1 ������Ų��
	//����ġ�� Ʋ���������� ���� ��Ų��

	*weaponLV += 4;
	if (*weaponLV % 5 == 0)
	{
		*weight = *weight * 1.5f;
	}

	printf("���� ���� ���ݷ� %f", (*weaponLV) * (*weight)+baseAP);
}

void mytemp(int a, int b)
{
	int temp =0;
	a = temp;
	a = b;
}

