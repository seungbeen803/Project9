#include<stdio.h>
struct student
{
	int num;
	char name[20];
	int height;
};

void main()
{
	struct student s[3] = {
		{0, "ȫ�浿", 180},
		{1, "�̼���", 177},
		{2, "�����", 168}
	}; //����ü �迭 ����\
	//�迭 = ������
	struct student* ptr; //����ü ������ ����
	ptr = &s;
	for (int i = 0; i < 3; i++)
	{
		printf("%d, %s, %d\n", (*(ptr + i)).num, (*(ptr + i)).name, (*(ptr + i)).height);
	}
	system("pause");

}