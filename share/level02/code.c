#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void get_input(){
    int key = 0x12345678;
    char buffer[32];
    printf("How would you like your buffer? ");
    fflush(stdout);
    gets(buffer);
    if(key == 0xdeadbeef){
        printf("You know and changed the key? good job!\n");
        printf("%04x\n", key);
        fflush(stdout);
    }
    else{
        printf("%04x\n", key);
        printf("...\n");
        fflush(stdout);
    }
}

int main(int argc, char* argv[]){
    get_input();
    return 0;
}
