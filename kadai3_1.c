#include<stdio.h>
 
void input(double data[], int n);
double average(double data[], int n);
void binarize(double data[], int n, double threshold);

int main(void){
    int n = 5, i;
    double data[5], threshold;

    input(data, n);
    threshold = average(data, n);
    binarize(data, n, threshold);

    printf("Threshold: %.4f\n", threshold);
    printf("Binarized: ");
    for(i=0;i<n;i++){
        printf("%.0f", data[i]);
    }

    return 0 ;
}

void input(double data[], int n){
    int i;

    for(i=0;i<n;i++){
        printf("Input data[%d]: ",i);
        scanf("%lf",&data[i]);
    }
    
    return ;
}

double average(double data[], int n){
    int i;
    double sum = 0;

    for(i=0;i<n;i++){
        sum += data[i];
    }
    return sum / n ;
}
 
void binarize(double data[], int n, double threshold){
    int i;

    for(i=0;i<n;i++){
        if(data[i]<threshold){
            data[i] = 0;
        }
        else {
            data[i] = 1;
        }
    }

    return ;
}
