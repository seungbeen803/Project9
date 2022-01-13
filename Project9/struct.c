#include<stdio.h>
//클래스
struct student {
	int num;
	char name[10];
	double avg;
};

void main()
{
	struct student s; //구조체 변수는 s=객체(자바에서)
	s.num = 1; //객체.접근할 수 있는 변수
	s.avg = 4.5;
	strcpy(s.name, "홍길동");
	printf("학번 %d\n", s.num);
	printf("이름 %s\n", s.name);
	printf("평점 %4.2f\n", s.avg);
	system("pause");
	
}