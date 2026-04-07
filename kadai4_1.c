#include<stdio.h>

void to_uppercase(char *s, char c);
void remove_uppercase(char *s);

int main(void){
    char s[100], c;

    printf("Input a lowercase character: ");
    scanf("%c",&c);

    printf("Input a string: ");
    scanf("%s",s);

    to_uppercase(s, c);
    printf("After conversion: %s\n", s);

    remove_uppercase(s);
    printf("After removing uppercase characters: %s\n", s);

    return 0;
}

void to_uppercase(char *s, char c){
    while(*s != '\0'){
        if(*s == c){
            *s = *s - 'a' + 'A';
        }
        s++;
    }
}

void remove_uppercase(char *s){
    char *read = s, *write = s;

    while(*read != '\0'){
        if('a' <= *read && *read <= 'z'){
            *write = *read;
            write++;
        }
        read++;
    }
    *write = '\0';
}
