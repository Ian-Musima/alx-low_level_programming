#include <stdio.h>
/**
 *main - Check size of datatypes
 *
 *Return:0
 */
int main(void)
{
	char char_type;
	int int_type;
	long long_type;
	long long int long_log_int;
	float float_type;

	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));

	return (0);

}
