#include <stdio.h>

int input1, input2;
void ft_print_logo(void);
int ft_sum_numbers(int input1, int input2);

int main(void)
{
    ft_print_logo();
    scanf("%i\n", &input1);
    scanf("%i", &input2);
    int result = ft_sum_numbers(input1, input2);
    printf("%i + %i = %i\n", input1, input2, result);
    return 0;
}

int ft_sum_numbers(int a, int b)
{
    int c = a + b;
    return c;
}

void ft_print_logo(void)
{
    printf("\nWelcome To:\n");
    // Font: Cyberlarge
    printf(" _______ _______ _______ _     _\n");
    printf(" |  |  | |_____|    |    |_____|\n");
    printf(" |  |  | |     |    |    |     |\n");
}