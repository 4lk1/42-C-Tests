// Assignment name  : ft_atoi
// Expected files   : ft_atoi.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that converts the string argument str to an integer (type int)
// and returns it.

// It works much like the standard atoi(const char *str) function, see the man.

// Your function must be declared as follows:

// int	ft_atoi(const char *str);

#include <unistd.h>

int	ft_atoi(const char *str)
{
	long int a;
    int s = 1;
	int i = 0;

    while(str[i] == " " || str[i] == "\t")
        i++;
    if(str[i] == "-")
    {
        s = s*(-1);
        i++;
    }
    while(*str)
    {
        if(str[i] >= "1" && str[i]<= "9")
        a = (a*10)+(str[i] + '0');
        i++;
    }
    return a*s;
}
