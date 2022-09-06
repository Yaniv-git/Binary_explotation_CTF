#include <stdio.h>

void hacked(long first, long second)
{
    if (first == 0xdeadbeefdeadbeef && second == 0xc0debabec0debabe){
        printf("This function is TOP SECRET! and you are authorized:) \n");
    }else{
        printf("Who are you?! are you from Snyk?!!\n");
    }
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