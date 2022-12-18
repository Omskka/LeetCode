#include <ctype.h>
int	myAtoi(char *str){
	long long int	number;
	int				sign;

	number = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (isdigit(*str))
	{
		number = (number * 10) + (*str - '0') * sign;
		str++;
		if (number > 2147483647)
			return (2147483647);
		if (number < -2147483648)
			return (-2147483648);
	}
	return (number);
}