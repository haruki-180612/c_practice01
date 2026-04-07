#include<stdio.h>

int my_strlen(char str[]);
int count_char(char str[], int len, char c);

int main (void){
    char c, str[100];
    int len, count;
    double rate;

    printf("Input a character: ");
    scanf("%c", &c);
    printf("Input a string: ");
    scanf("%s", &str);

    len = my_strlen(str);
    count = count_char(str, len, c);
    rate = (double)count / len;
    printf("Occurrence rate = %.2f\n", rate); 

    return 0;
}

int my_strlen(char str[]){
    int i = 0;

    while(str[i]!='\0'){
        i++;
    }
    return i;
}

int count_char(char str[], int len, char c){
    int i;
    int count = 0;

    for(i=0;i<len;i++){
        if(str[i] == c){
            count++;
        }
    }
    return count;
}