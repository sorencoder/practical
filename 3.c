#include<stdio.h>
int squareNum(int n){
    int value =n*n;
    return value;
}
int main(){
    int num,value;
    printf("Enter a number ");
    scanf("%d",&num);
    value = squareNum(num);
    printf("%d",value);
    return 0;
}
