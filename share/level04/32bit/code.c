#include <stdio.h>

void hacked(int first, int second)
{
    if (first == 0xdeadbeef && second == 0xc0debabe){
        printf("This function is TOP SECRET! and you are authorized:) \n");
    }else{
        printf("Who are you?! are you from Snyk?!!\n");
    }

    return;
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