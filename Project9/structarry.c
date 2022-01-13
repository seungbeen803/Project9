#include<stdio.h>

struct student {
	int num;
	char name[20];
	int height;
};

int main(void)
{
	struct student s[3] = {
		{0, "박길동", 180},
		{1, "조길동", 177},
		{2, "윤길동", 169}
	};
	for (int i = 0; i < 3; i++)
	{
		printf("%d,%s,%d\n", s[i].num, s[i].name, s[i].height);
	}
	system("pause");
}