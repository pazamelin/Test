#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "task1.h"

int main()
{
	int age = 0;
	scanf("%i", &age);
	if (ageCheck(age) == 1)
		printf("Access granted\n");
	else 
                printf("Access denied\n");

	return 0;
}