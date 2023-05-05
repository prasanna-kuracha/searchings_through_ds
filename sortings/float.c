#include<stdio.h>
struct student{
	int rollno;
	char stuname[20];
	float per;
}a={20,"sana",90.0};
printf("%d\n%s\n%f",a.rollno,a.stuname,a.per);
