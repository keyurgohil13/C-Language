#include<stdio.h>

int main(){
    //Find area of circle = pi*r*r
    const float pi = 3.14;
    int r;
    float area;


    printf("Enter radius of circle :-");
    scanf("%d", &r);

    area = pi * r * r; //3.14 * 5 * 5= 78.50
    printf("Area of circle = %f", area);

}