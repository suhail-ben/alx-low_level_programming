#include <stdio.h>
/**
 *  main - Entry point
 *
 *  Return: Always 0 (Success)
 *
 */
int main(void)
{
		int type_int;
		long int type_long_int;
		long long int type_long_long;
		char type_char;
		float type_float;

		printf("Size of a char:%2lu byte(s)\n", sizeof(type_char));
		printf("Size of an int:%2lu byte(s)\n", sizeof(type_int));
		printf("Size of a long int:%2lu byte(s)\n", sizeof(type_long_int));
		printf("Size of a long long int:%2lu byte(s)\n", sizeof(type_long_long));
		printf("Size of a float:%2lu byte(s)\n", sizeof(type_float));
		return (0);
}
