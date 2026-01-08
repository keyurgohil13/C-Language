#include<stdio.h>

int main(){

    int bornyear =10;
    int curyear;

    int age;

    printf("Enter you born year :- ");
    scanf("%d", &bornyear);

    printf("Enter you cur year :- ");
    scanf("%d", &curyear);

    age = curyear - bornyear;
    printf("Your age is  = %d", age);

    return 0;
}