#include<stdio.h>

struct point
{
	int x;
	int y;
};

int main(void)
{
	struct point p1 = { 10, 20 };
	struct point p2 = { 100, 200 };
	//if (p1 == p2)printf("�����ϴ�."); //������ ���� ����
	if ((p1.x == p2.x) && (p1.y == p2.y))
		printf("p1�� p2�� �����ϴ�.\n");
	else printf("p1�� p2�� ���� �ʽ��ϴ�.\n");

	system("pause");
}