#include<stdio.h>

//typedef float F;
//typedef int N;
struct point
{
	int x;
	int y;
};

typedef struct point P;

P translat(P p1, P p2) // int add(int a, int b)
{
	P newP; //객체
	newP.x = p1.x + p2.x;
	newP.y = p1.y + p2.y;
	return newP; //return p;
}
void main()
{
	P p1 = { 1, 2 }; // int i=10;
	P p2 = { 10, 20 }; // int j=20;
	P result = translat(p1, p2); // result = add(10, 20);
	printf("새로운 좌표 값은 %d,%d 입니다.\n", result.x, result.y);

	system("pause");
}