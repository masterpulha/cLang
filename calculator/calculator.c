#include <stdio.h>

int loop_options = 0, loop_run = 0;
float input1, input2;
char user_choice[9], s[3];
char *ary_quit[1][17] = {"y", "Y", "yes", "Yes", "YES", "Sim", "sim", "SIM", "si", "SI", "Si", "ja", "JA", "Ja", "Oui", "oui", "OUI"};
char *ary_choices[1][20] = {"1", "Addition", "Add", "addition", "add", "2", "Subtraction", "Subtract", "subtraction", "subtract", "3", "Multiplication", "Multiply", "multiplication", "multiply", "4", "Division", "Divide", "division", "divide"};

int strcmp();
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
    while (loop_run == 0)
    {
        while (loop_options == 0)
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

void ft_print_logo(void)
{
    printf("\nWelcome To:\n");
    // Font: Cyberlarge
    printf(" _______ _______ _______ _     _\n");
    printf(" |  |  | |_____|    |    |_____|\n");
    printf(" |  |  | |     |    |    |     |\n");
}

char ft_user_choice(void)
{
    printf("\nChose an operation:\n\n");
    printf("1: Addition\n2: Subtraction\n3: Multiplication\n4: Division\n");
    printf("\nType Your Choice: ");
    scanf("%s", user_choice);
    return user_choice;
}

int ft_validate_choice(char *a)
{
    int loop = 0;
    while (loop < (sizeof(ary_choices) / 8))
    {
        if (strcmp(a, ary_choices[0][loop]) == 0)
        {

            loop_options = 1;
            break;
        }
        else
        {
            loop_options = 0;
        }
        loop++;
    }
    if (loop_options == 0)
    {
        printf("\n############# W A R N I N G ! ##################\n");
        printf("\n%s is not a valid option, please try again!\n", a);
    }

    return loop_options;
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

float ft_ask_numbers(int a)
{
    if (a == 1)
    {
        printf("\nEnter a number\n");
        float inputed;
        scanf("%g", &inputed);
        return inputed;
    }
    if (a == 2)
    {
        printf("\nEnter another number\n");
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

void ft_return_result(float a, float b, float c, int d)
{
    if (d == 1)
    {
        printf("\n%g + %g = %g\n", a, b, c);
    }
    if (d == 2)
    {
        printf("\n%g - %g = %g\n", a, b, c);
    }
    if (d == 3)
    {
        printf("\n%g * %g = %g\n", a, b, c);
    }
    if (d == 4)
    {
        printf("\n%g / %g = %g\n", a, b, c);
    }
}

int ft_restart()
{
    printf("\nWould you like to quit?\n\n");
    int loop = 0;
    scanf("%s", s);
    while (loop < (sizeof(ary_quit) / 8))
    {
        if (strcmp(s, ary_quit[0][loop]) == 0)
        {
            printf("\n#############     B Y E !     ##################\n\n");
            loop_run = 1;
            return loop_run;
            break;
        }
        else
        {
            loop_options = 0;
        }
        loop++;
    }
 
    return loop_run;
}