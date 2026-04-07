# kadai4_09B25458.c
#include<stdio.h>

struct Student{
    char name[80];
    int score;
};

void show_name_score(struct Student s[], int n){
    int i;

    for(i=0;i<n;i++){
        printf("%d: %s's score is %d.\n", i+1, s[i].name, s[i].score);
    }
}

void find_max_score(struct Student s[], int n, int *smaxp){
    int i;
    int max = -1;

    for (i = 0; i < n; i++) {
        if (s[i].score < *smaxp && s[i].score > max) {
            max = s[i].score;
        }
    }
    *smaxp = max;
}

int main(void){
    struct Student slist[10];
    int i, j = 0, n = 0, smax = 101;

    printf("How many students are there in your class? [1-10]>");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("Student %d:\n", i+1);
        printf(" Name? >");  scanf("%s", slist[i].name);
        printf(" Score? >");  scanf("%d", &slist[i].score);
    }
    printf("\n");
    show_name_score(slist, n);
    printf("\n");

    while(j < 3){
        find_max_score(slist, n, &smax);
        for(i=0;i<n;i++){
            if(slist[i].score == smax){
                printf("%s got ranked No. %d.\n", slist[i].name, ++j);
            }
        }
    }
    return 0;
}
