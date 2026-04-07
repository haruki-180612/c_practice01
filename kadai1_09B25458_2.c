#include<stdio.h>

int main(void){
    int i,j,n,x;

    //入力
    printf("Input n\n");
    scanf("%d",&n);

    //上の行
    printf("    |");
    for(i=n;i>=1;i--) {
        printf("%3d",i);
    }    
    printf("\n");

    //横枠線
    printf(" ---+");
    for(i=n;i>=1;i--) {
        printf("---");
    }
    printf("-\n");

    //表
    for(i=n;i>=1;i--) {
        printf("%3d |",i);
        for(j=n;j>=1;j--) {
            x = i*j;
            printf("%3d",x);
        }
        printf("\n");
    }

return 0;
}
