#include "pointerOperator.h"

void PointerExample()
{
	int num1 = 0;
	int* num1ptr = &num1;

	double doublenum1 = 1.0;
		double* doublenum1ptr = &doublenum1;
	printf("\n\n");
	printf("int �������� ũ��%d\n", sizeof(num1));

	printf("int �ּ��� ũ��%d\n", sizeof(num1ptr));

	printf("double �������� ũ��%d\n", sizeof(doublenum1));
	printf("double �ּ��� ũ��%d\n", sizeof(doublenum1ptr));

	//x86 �ּ��� ũ�� ���� 4����Ʈ
	//x64 �ּ��� ũ�� ���� 8����Ʈ
	//�ּҴ� ũ�Ⱑ �����ϴ�

	//�ּҸ� ���غ���
	printf("�ּ� ��� : %p\n", &num1ptr);
	//�ּҸ� ���ϸ� ��� �ɱ�

	//�ּ� ��ü�� ���ϱ� vs �ּҸ� �����ؼ� ���ϱ�

	//�ּ����·� ��������(�������) - ���α׷��� ����ǰų� ���� �޸𸮸� �����ϱ� ������ �����ϴ�
	//������ �̸����ΰ������� ���(�� ���) - �ڵ念���� ������ ������ �޸𸮰� �����˴ϴ�

	printf("num1ptr�� �� ���%d\n", (num1ptr)+1);



	num1ptr = num1ptr + 1;
	printf("�ּ� ��� : %p\n", &num1ptr);
	printf("�ּ� ��� : %p\n", &doublenum1ptr);
	doublenum1ptr = doublenum1ptr + 1;
	printf("�ּ� ��� : %p\n", &doublenum1ptr);
	//�ּҸ� ���ϸ� �ּ��� ���� ���� ũ�� ��ŭ �����Ѵ�

	
}
