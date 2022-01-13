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
		{"홍길동", 82, 72, 58},
		{"강감찬", 97, 82, 39},
		{"이순신", 52, 62, 39},
		{"장보고", 52, 72, 62}
	};
	for (int i = 0; i < 4; i++)
	{
		printf("%s : 영어 = %3d 수학 = %3d 물리 = %3d\n", 
			list[i].name, list[i].eng, list[i].math, list[i].phys);
	}
	system("pause");
}