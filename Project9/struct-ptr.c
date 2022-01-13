#include<stdio.h>
struct point {
	int x;
	int y;
};
void main()
{
	struct point p1 = { 10, 20 }; //int i=10
	struct point* ptr; //int *ptr;
	ptr = &p1; //ptr=&i;
	//클래스는 사용자 정의 데이터 타입
	printf("%d, %d\n", ptr->x, ptr->y);


	system("pause");
}