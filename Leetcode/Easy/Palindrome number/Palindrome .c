int    ft_step(int a)
{
    int    i;

    i = 0;
    if (a <= 0)
        i = 1;
    while (a != 0)
    {
        a = a / 10;
        i++;
    }
    return (i);
}

void    ft_convert(char *str, int b, int len, int k)
{
    while (len > k)
    {
        str[len -1] = ((b % 10) + 48);
        b = b / 10;
        len--;
    }
}

char    *ft_itoa(int n)
{
    char    *str;
    int        index;
    int        size;

    index = 0;
    size = ft_step(n);
    str = ((char *)malloc(sizeof(char) * (size + 1)));
    if (!str)
        return (NULL);
    if (n == -2147483648)
    {
        index = 2;
        *(str + 1) = '2';
        *(str + 0) = '-';
        n = 147483648;
    }
    if (n < 0)
    {
        index = 1;
        *(str + 0) = '-';
        n = -n;
    }
    str[size] = 0;
    ft_convert (str, n, size, index);
    return (str);
}

int isPalindrome(int x){

    int i = 0;
    char *num;
    
    if(x < 0)
        return (0);
        
    if( x <= 9)
      return(1);

    num = ft_itoa(x);


    while(i < strlen(num) / 2){
        if(num[i] == num[strlen(num) -1 -i])
            i++;
        if(num[i] != num[strlen(num) - 1 -i])
            return(0);
    }
    return(1);
}