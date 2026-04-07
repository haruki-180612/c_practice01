#include<stdio.h>

int main(void){
    int array[10],i;
    int max,min;
    double avg;
    double sum = 0;

// --- 数値の入力 ---
    for(i=0;i<10;i+=1){
        printf("Input a number(%d of 10):",i+1);
        scanf("%d",&array[i]);
        printf("\n");
    }

// --- 最大値・最小値の初期値を最初の配列に設定 ---
    max = array[0];
    min = array[0];

// --- 最大・最小・合計を求める ---
    for(i=0;i<10;i+=1){
        if(max < array[i]){
            max = array[i];
        }
        if(min > array[i]){
            min = array[i];
        } 
        sum += array[i];  
    } 

// --- 平均値 ---
    avg = sum / 10.0;

// --- 結果の表示 ---    
    printf("Maximum number = %d\n",max);
    printf("Minimum number = %d\n",min);
    printf("Average = %.2f\n",avg);
    

    return 0;
}