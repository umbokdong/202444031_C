#include<stdio.h>
#include<stdlib.h>

void main(){
    printf("%d", 358);
    printf(":정수형 기본 자릿수\n");
    printf("%5d", 358);
    printf(":전체 자릿수 5개\n");
    printf("%05d", 358);
    printf(":전체 자릿수는 5개이고 빈칸은 0으로 채움\n");
    int sum;
    scanf("%d", &sum);
    printf("%d", sum);
}
