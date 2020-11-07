#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i;
	struct profile {
		char name[20];
		int age;
	} s[5];
	for (i = 0; i < 5; i++)
	{
		printf("Student[%d]\n", i);
		printf("\t name:");
		scanf("%s", s[i].name);
		printf("\t age:");
		scanf("%d", &s[i].age);
	}
	for (i = 0; i < 5; i++)
		if (s[i].age > 18)
			printf("\n %s,%d", s[i].name, s[i].age);
	return 0;
}