/*
* 2025 -03-18
* ���� : �迭�� ������
* 
* 1. �迭 (Array)
* ���� ����ǥ(����,����, ����)
* ������

*/



#include<stdio.h>
int main() {
	printf("�迭�� ������");
	printf("�迭 ���� ����ǥ �����\n");
	int scoreA= 80;//����
	int scoreB=70;//����
	int scoreC=65;//����

	//���� : ������ Ÿ������ ������ ����� : �޸𸮿� ����� ũ��, �����ϴ� �޸� �ּ�
	//���� Ÿ���� ������ �ϳ��� �̸����� �����ϴ� ��� : �迭

	int scores[3] = { 80,70,60 };;//�迭�� ���� int�� ������ Ÿ���� 3�� �����ϴ� score��� �̸��� ����

	scores[0]; //scores �ּ� +0 = �ڱ��ڽ�
	scores[1]; //scores �ּ� +1 = 2��° �ּ�
	scores[2];

	for (int i = 0; i < 3; i++) {
		printf("������ ������� ����ϼ���, %d\n",scores[i]);
	
	}
	//printf("���� : %d , ���� %d, ����%d", scoreA, scoreB, scoreC);

	//������ ����
	//������ �̸�(���ڿ�),������ ����, ������ index
	char itemname[10] = "AAA";
	int ItemCount = 1;
	int ItemIndex = 1;

	printf("������ 1���� ����:\n");
	printf("������ ��ȣ %d, ������ �̸� %s, ������ ����:%d", ItemIndex, itemname, ItemCount);
	//�������� ������ �����Ѵ�( ������ ����������, ���̺굥����)
	int ItemCount[10] = {1,2,3,4,5,6,7,8,9,10};
	int ItemIndex[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int itemname[10] = { "AAA","BBB","CCC","DDD","EEE" };

	printf("��� �������� �����Ѵ�");
	
	                                
}