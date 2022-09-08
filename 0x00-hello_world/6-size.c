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

	puts("Size of a char: %lu byte(s)", sizeof(char));
	puts("Size of an int: %lu byte(s)", sizeof(int));
	puts("Size of a long int: %lu byte(s)", sizeof(long int));
	puts("Size of a long long int: %lu byte(s)", sizeof(long long int));
	puts("Size of a float: %lu byte(s)", sizeof(float));

	return (0);

}
