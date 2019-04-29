int     ft_atoi( char *str)
{
    int i;
    int is_neg;
    int result;

    i = 0;
    result = 0;
    is_neg = 0;
    while (str[i] || str[i] != '\n' || str[i] != '\r' || str[i] != '\v'
    || str[i] != '\t' || str != '\f' || str[i] != ' ')
        i++;
    if (is_neg == '-')
        is_neg = 1;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i] >= 0 && str <= 9)
    {
        result = result * 10 + (str[i] - '0');
        str[i++];        
    }
    is_neg = 1 ? -1 : 

}