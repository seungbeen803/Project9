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
	//if (p1 == p2)printf("같습니다."); //문법에 맞지 않음
	if ((p1.x == p2.x) && (p1.y == p2.y))
		printf("p1과 p2가 같습니다.\n");
	else printf("p1과 p2가 같지 않습니다.\n");

	system("pause");
}