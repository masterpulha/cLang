#include <stdio.h>

float input1[30], input2[30];
char user_choice[30];
int i = 0, d = 0;

int ft_restart(void);
void ft_print_logo(void);
char ft_user_choice(void);
float ft_ask_numbers(int);
int ft_validate_choice(char *a);
int ft_convert_user_choice(char *a);
float ft_do_math(float a, float b, int c);
void ft_return_result(float a, float b, float c, int d);

int main(void)
{
    ft_print_logo();
    while (d == 0)
    {
        while (i == 0)
        {
            ft_user_choice();
            ft_validate_choice(user_choice);
        }
        int operation = ft_convert_user_choice(user_choice);
        float input1 = ft_ask_numbers(1);
        float input2 = ft_ask_numbers(2);
        float result = ft_do_math(input1, input2, operation);
        ft_return_result(input1, input2, result, operation);
        ft_restart();
    }
    return 0;
}

// Functions:

int ft_restart()
{
    printf("\nWould you like to quit? [Y/N]\n");
    char a[3];
    scanf("%s", a);
    if ((strcmp(a, "y") == 0) ||
        (strcmp(a, "Y") == 0) ||
        (strcmp(a, "yes") == 0) ||
        (strcmp(a, "Yes") == 0) ||
        (strcmp(a, "YES") == 0) ||
        (strcmp(a, "Sim") == 0) ||
        (strcmp(a, "sim") == 0) ||
        (strcmp(a, "SIM") == 0) ||
        (strcmp(a, "si") == 0) ||
        (strcmp(a, "ja") == 0) ||
        (strcmp(a, "JA") == 0) ||
        (strcmp(a, "Ja") == 0) ||
        (strcmp(a, "Si") == 0) ||
        (strcmp(a, "SI") == 0) ||
        (strcmp(a, "Oui") == 0) ||
        (strcmp(a, "oui") == 0) ||
        (strcmp(a, "OUI") == 0))
    {
        d = 1;
        return d;
    }
    else
    {
        i = 0;
        return i;
    }
}

int ft_validate_choice(char *a)
{
    if ((strcmp(a, "1") == 0) ||
        (strcmp(a, "Addition") == 0) ||
        (strcmp(a, "Add") == 0) ||
        (strcmp(a, "addition") == 0) ||
        (strcmp(a, "add") == 0) ||
        (strcmp(a, "2") == 0) ||
        (strcmp(a, "Subtraction") == 0) ||
        (strcmp(a, "Subtract") == 0) ||
        (strcmp(a, "subtraction") == 0) ||
        (strcmp(a, "subtract") == 0) ||
        (strcmp(a, "3") == 0) ||
        (strcmp(a, "Multiplication") == 0) ||
        (strcmp(a, "Multiply") == 0) ||
        (strcmp(a, "multiplication") == 0) ||
        (strcmp(a, "multiply") == 0) ||
        (strcmp(a, "4") == 0) ||
        (strcmp(a, "Division") == 0) ||
        (strcmp(a, "Divide") == 0) ||
        (strcmp(a, "division") == 0) ||
        (strcmp(a, "divide") == 0))
    {
        i = 1;
        return i;
    }
    else
    {
        printf("\n%s is not a valid option, please try again!\n\n", a);
    }
}

int ft_convert_user_choice(char *a)
{
    if ((strcmp(a, "1") == 0) ||
        (strcmp(a, "Addition") == 0) ||
        (strcmp(a, "Add") == 0) ||
        (strcmp(a, "addition") == 0) ||
        (strcmp(a, "add") == 0))
    {
        int b = 1;
        return b;
    }
    if ((strcmp(a, "2") == 0) ||
        (strcmp(a, "Subtraction") == 0) ||
        (strcmp(a, "Subtract") == 0) ||
        (strcmp(a, "subtraction") == 0) ||
        (strcmp(a, "subtract") == 0))
    {
        int b = 2;
        return b;
    }
    if ((strcmp(a, "3") == 0) ||
        (strcmp(a, "Multiplication") == 0) ||
        (strcmp(a, "Multiply") == 0) ||
        (strcmp(a, "multiplication") == 0) ||
        (strcmp(a, "multiply") == 0))
    {
        int b = 3;
        return b;
    }
    if ((strcmp(a, "4") == 0) ||
        (strcmp(a, "Division") == 0) ||
        (strcmp(a, "Divide") == 0) ||
        (strcmp(a, "division") == 0) ||
        (strcmp(a, "divide") == 0))
    {
        int b = 4;
        return b;
    }
}

void ft_return_result(float a, float b, float c, int d)
{
    if (d == 1)
    {
        printf("%g + %g = %g\n", a, b, c);
    }
    if (d == 2)
    {
        printf("%g - %g = %g\n", a, b, c);
    }
    if (d == 3)
    {
        printf("%g * %g = %g\n", a, b, c);
    }
    if (d == 4)
    {
        printf("%g / %g = %g\n", a, b, c);
    }
}

char ft_user_choice(void)
{
    printf("Chose an operation:\n\n");
    printf("1: Addition\n2: Subtraction\n3: Multiplication\n4: Division\n");
    printf("\nType Your Choice:");
    scanf("%s", user_choice);
    return user_choice;
}

float ft_ask_numbers(int a)
{
    if (a == 1)
    {
        printf("Enter a number\n");
        float inputed;
        scanf("%g", &inputed);
        return inputed;
    }
    if (a == 2)
    {
        printf("Enter another number\n");
        float inputed;
        scanf("%g", &inputed);
        return inputed;
    }
}

float ft_do_math(float a, float b, int c)
{
    if (c == 1)
    {
        float d = a + b;
        return d;
    }
    if (c == 2)
    {
        float d = a - b;
        return d;
    }
    if (c == 3)
    {
        float d = a * b;
        return d;
    }
    if (c == 4)
    {
        float d = a / b;
        return d;
    }
}

void ft_print_logo(void)
{
    printf("\nWelcome To:\n");
    // Font: Cyberlarge
    printf(" _______ _______ _______ _     _\n");
    printf(" |  |  | |_____|    |    |_____|\n");
    printf(" |  |  | |     |    |    |     |\n\n");
}