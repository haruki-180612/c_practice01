#include<stdio.h>

int main (void){
    char last[50], first[50];
    char last_re[50], first_re[50];
    int i;

    printf("first name:");
    scanf("%s",&first);
    printf("last name:");
    scanf("%s",&last);

    if(first[0]>='a' && first[0]<='z'){
        first[0] = first[0] - 'a' + 'A';
    }
    first_re[0] = first[0];
    first_re[1] = '.';
    first_re[2] = '\0';
    

    if(last[0]>='a' && last[0]<='z'){
        last[0] = last[0] - 'a' + 'A';
    }
    for(i=0;last[i]!='\0';i++)
        last_re[i] = last[i];
    last_re[i] = ',';
    last_re[i+1] = '\0';
    
    printf("%s%s\n",last_re,first_re);
    
    return 0;

}
