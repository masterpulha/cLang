#include <stdio.h>

char user_choice[50];
int i = 0;

void ft_print_logo(void);
void ft_put_char(char c);
char ft_print_options(void);
void ft_print_alphabet_az(void);
void ft_print_alphabet_za(void);
void ft_print_user_choice(char *user_choice);

int main(void)
{
    ft_print_logo();

    while (i == 0)
    {
        ft_print_options(); // Prints the options and waits for the input.
        ft_print_user_choice(user_choice);

        if (strcmp(user_choice, "1") == 0) // if input is 1 runs and exits loop.
        {
            ft_print_alphabet_az();
            break;
        }

        if (strcmp(user_choice, "2") == 0) // if input is 2 runs and exits loop.
        {
            ft_print_alphabet_za();
            break;
        }

        else // if input is something else, error msg and starts again.
        {
            printf("\n%s is not a valid option, please try again!\n\n", user_choice);
        }
    }
    printf("\n\n");
    system("pause");
    return 0;
}

void ft_print_user_choice(char *user_choice)
{
    printf("\nYou Selected Option: %s\n", user_choice);
}

void ft_put_char(char c)
{
    write(1, &c, 1);
    printf(" ");
}

char ft_print_options(void) // asks user to chose 1 or 2
{
    printf("Chose one option:\n");
    printf("1: Display the alphabet from A to Z\n");
    printf("2: Display the alphabet from Z to A\n");
    printf("\nType Your Choice:");
    scanf("%s", user_choice);
    return user_choice;
}

void ft_print_alphabet_az(void)
{
    printf("\nThe alphabet from A to Z:\n\n");
    char alphabet;

    alphabet = 'a';
    while (alphabet <= 'z')
    {
        ft_put_char(alphabet);
        alphabet++;
    }
}

void ft_print_alphabet_za(void)
{
    printf("\nThe alphabet from Z to A:\n\n");
    char alphabet;

    alphabet = 'z';
    while (alphabet >= 'a')
    {
        ft_put_char(alphabet);
        alphabet--;
    }
}

void ft_print_logo(void)
{
printf("\nWelcome To:\n");
// https://patorjk.com/software/taag/#p=display&f=JS%20Stick%20Letters&t=alphabet
// Font Used : JS Stick Letters
printf("          __            __   ___ ___ \n");
printf(" /| |    |__) |__|  /| |__) |__   |  \n");
printf("/~| |___ |    |  | /~| |__) |___  |  \n\n");
}
                                       
