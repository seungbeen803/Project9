#include<stdio.h>
//Ŭ����
struct student {
	int num;
	char name[10];
	double avg;
};

void main()
{
	struct student s; //����ü ������ s=��ü(�ڹٿ���)
	s.num = 1; //��ü.������ �� �ִ� ����
	s.avg = 4.5;
	strcpy(s.name, "ȫ�浿");
	printf("�й� %d\n", s.num);
	printf("�̸� %s\n", s.name);
	printf("���� %4.2f\n", s.avg);
	system("pause");
	
}