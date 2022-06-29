#include <stdio.h>
#include <Windows.h>

int main(void)
{
    SetConsoleTitle("ReturnVars");
    int numberInside = 1337;
    int count = 0;
    char name[] = "Pedro";
    char quit[] = "no";

    while ((strcmp(quit, "no") == 0))
    {
        printf("\nNumber is: %i\nmemAddr: 0x%0.8p\n", numberInside, &numberInside);
        printf("\nCount is: %i\nmemAddr: 0x%0.8p\n", count, &count);
        printf("\nName: %s\nmemAddr: 0x%0.8p\n", name, &name);
        printf("\nDo you want to quit?\n");
        scanf("%s", quit);
        count++;
    }
    
    return 0;
}
