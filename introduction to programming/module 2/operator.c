#include<stdio.h>
int main(){
    int a=18;
    int b=5;
    int sum=a+b;
    int sub=a-b;
    int mul=a*b;
    float div=(1.0*a)/b;
    int rem=a%b;
    printf("Addition = %d\n",sum);
    printf("Subtraction = %d\n",sub);
    printf("Multiplication = %d\n",mul);
    printf("Division = %f\n",div);
    printf("Reminder = %d\n",rem);
}