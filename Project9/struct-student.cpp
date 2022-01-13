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
		{0, "홍길동", 180},
		{1, "이순신", 177},
		{2, "장금이", 168}
	}; //구조체 배열 설정\
	//배열 = 포인터
	struct student* ptr; //구조체 포인터 변수
	ptr = &s;
	for (int i = 0; i < 3; i++)
	{
		printf("%d, %s, %d\n", (*(ptr + i)).num, (*(ptr + i)).name, (*(ptr + i)).height);
	}
	system("pause");

}