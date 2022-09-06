#include <stdio.h>

void win()
{
    printf("How did you get in here?! This function is TOP SECRET!\n");
}

void register_name()
{
    char buffer[16];

    printf("Name:\n");
    scanf("%s", buffer);
    printf("Hi there, %s\n", buffer);    
}

int main()
{
    register_name();
    return 0;
}