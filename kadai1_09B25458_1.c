/* 09b25458 沖本陽樹*/
#include<stdio.h>

int main(void){
    double a,b,x;

    //入力
    printf("Input a\n");
    scanf("%lf",&a);

    printf("Input b\n");
    scanf("%lf",&b);  

    //a*x + b = 0 の解
    if(a!=0) {
        x = -b/a;
        printf("x = %lf",x);
    }else if(a==0 && b!=0) {
        printf("No solution.\n");
    }else {
        printf("Infinitely many solution\n");
    }

    return 0;     
}