#include<stdio.h>

struct student {
	int num;
	char name[20];
	int height;
};

int main(void)
{
	struct student s[3] = {
		{0, "�ڱ浿", 180},
		{1, "���浿", 177},
		{2, "���浿", 169}
	};
	for (int i = 0; i < 3; i++)
	{
		printf("%d,%s,%d\n", s[i].num, s[i].name, s[i].height);
	}
	system("pause");
}