#include <stdlib.h>
int	ft_step(int a)
{
	int	i;

	i = 0;
	while (a != 0)
	{
		a = a / 10;
		i++;
	}
	return (i);
}

void	ft_convert(char *str, int b, int len, int k)
{
	while (len > k)
	{
		str[len -1] = ((b % 10) + 48);
		b = b / 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		index;
	int		size;

	index = 0;
	size = ft_step(n);
	str = ((char *)malloc(sizeof(char) * (size + 1)));
	if (!str)
		return (NULL);
	str[size] = 0;
	ft_convert (str, n, size, index);
	return (str);
}

int alternateDigitSum(int n){
    char *arr = ft_itoa(n);
    int i = 0;
    int ctl = 1;
    int sum = 0;

    while(arr[i] != '\0'){
        if (ctl % 2 == 0)
          sum -= (arr[i] - 48) ;
        else
          sum += (arr[i] - 48) ;
        i++;
        ctl++;
    }
    return(sum);
}