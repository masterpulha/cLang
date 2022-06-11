#include <stdio.h>

int input1[100], input2[100];
void ft_print_logo(void);
int ft_ask_numbers(void);
int ft_sum_numbers(int a, int b);
int ft_multiply_numbers(int a, int b);

int main(void)
{
    ft_print_logo();
    printf("Enter a number\n");
    int input1 = ft_ask_numbers();
    printf("Enter another number\n");
    int input2 = ft_ask_numbers();
    int result = ft_multiply_numbers(input1, input2);
    printf("%i + %i = %i\n", input1, input2, result);
    return 0;
}

int ft_ask_numbers()
{
    int inputed;
    scanf("%i", &inputed);
    return inputed;
}

int ft_sum_numbers(int a, int b)
{
    int c = a + b;
    return c;
}

int ft_multiply_numbers(int a, int b)
{
    int c = a * b;
    return c;
}

void ft_print_logo(void)
{
    printf("\nWelcome To:\n");
    // Font: Cyberlarge
    printf(" _______ _______ _______ _     _\n");
    printf(" |  |  | |_____|    |    |_____|\n");
    printf(" |  |  | |     |    |    |     |\n\n");
}