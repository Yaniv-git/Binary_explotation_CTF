#include <stdio.h>

int secret_function() {
    asm("jmp %esp");
}

void receive_feedback()
{
    char buffer[64];

    puts("What are you saying:\n");
    gets(buffer);
}

int main()
{
    setuid(0);
    setgid(0);

    receive_feedback();

    return 0;
}