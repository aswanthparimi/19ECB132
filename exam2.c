#include<stdio.h>
main()
{
	char *p;
	p="Hello";
	printf("%cn",*&*p);
	
}
