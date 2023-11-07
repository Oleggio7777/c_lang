#include <unistd.h>
// #include <stdio.h>
void ft_putchar(char c)
{
    write(1,&c,1);
}
 int main()
 {
    char c = 'f';
    char v = '\n';
    ft_putchar(c);
    ft_putchar(v);
    return 0;
 }