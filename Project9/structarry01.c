#include<stdio.h>

struct student {
	char name[20];
	int eng;
	int math;
	int phys;
};

int main(void)
{
	struct student list[] = {
		{"ȫ�浿", 82, 72, 58},
		{"������", 97, 82, 39},
		{"�̼���", 52, 62, 39},
		{"�庸��", 52, 72, 62}
	};
	for (int i = 0; i < 4; i++)
	{
		printf("%s : ���� = %3d ���� = %3d ���� = %3d\n", 
			list[i].name, list[i].eng, list[i].math, list[i].phys);
	}
	system("pause");
}