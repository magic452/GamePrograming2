/*
* �ۼ��� 2025-03-19
* ���� ����ü�� ���� ����


���� �ð� ����
���						�迭				������
�̸��� �����ϴ°�			������			������
������ �����ϴ°�			���� �ּ�		�ּҸ� �����ϴ� ����
�ּҰ��� ���氡���Ѱ�		�Ұ���			����


��� ������
const
*/

#include<stdio.h>
#include"struct.h"
//array�ּ��� ���� �������� �����ּ���
void ShowAllData(const int* Array, int length) {//�迭�� �����ͼ� �����͸� ����ʹ�
	for (int i = 0; i < length; i++) {
		//Array[i] += 1;
		printf("%d\n", Array[i]);
	}
}

void ShowData(const int* num1ptr) {//num1ptr�� �ִ� ���� �������� ����
	int* rptr = num1ptr;
	*rptr += 2;

	printf("%d\n", *num1ptr);
}


//�������� �̸��� ����ϴ� �Լ��� ����ÿ�
//�̸��� ���� ����Ǹ� �ʵ˴ϴ�
void ShowItemData(const char* Itemname)
{
	//*Itemname = "�ٸ��̸�";
	printf("������ �̸� :%s ",Itemname);
}


	int main() {


		int arr1[5] = { 0,1,2,3,4 };
		ShowAllData(arr1, 5);
		int n1 = 1;
		ShowData(&n1);

		char itemname1[10] = "Į";
		ShowItemData(itemname1);
		printf("ch05\n");
		//printf("��� ����\n");
		const int num1 = 10; //num1�� ����� �ȴ� const ���� �����ϴ°��� �����Ѵ�
		const int PI = 3.14;

		int number1 = 2;
		int number2 = 3;
		const int* number1ptr = &number1; //number1�� �ּҸ� �����ϴ� ������ number1�� �ּҸ� �����Ѵ�
		//*number1ptr += 2; �ּҾ��� ���� �������� ���� ��� ������
		number1ptr = &number2; //�ּ��� ���� �����ϴ� ���� �����ϴ�

		int* const number2ptr = &number2;
		//number2ptr = &number1;
		*number2ptr += 3;

		//const pointer
		//���� ������ �� �ִ� ����		�ּҸ� ������ �� �ִ� ����		�ּ�,������ �����
		//Ÿ��* const �̸�				constŸ��*�̸�						constŸ�� const�̸�


		printf("����ü ����\n");
		StructExample();
	}
