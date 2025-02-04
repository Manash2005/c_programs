#include<stdio.h>

int main(int argc, char* argv[])
{
	printf("Hello world!!!\n");
	printf("%d\n", argc);
	printf("%s\n", argv[0]);
	printf("%s\n", argv[1]);
	printf("%s\n", argv[2]);
	printf("%s", argv[3]);

	return 0;
}