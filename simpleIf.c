#include <stdio.h>

void main()
{

    int bornYear, currentYear, age;

    printf("Enter your born year :-");
    scanf("%d", &bornYear);

    printf("Enter current year :-");
    scanf("%d", &currentYear);

    age = currentYear - bornYear;

    printf("Your age is %d\n", age);

    if (age <= 0)
    {
        printf("Enter valid bornYear");
    }
    else
    {

        // age > 18 = false

        if (age > 18)
        { // 4 > 18
            printf("You are eligible for apply driving licence\n");
        }

        // age < 18 -false - your are  adult
        if (age <= 18)
        { // 24 <= 18
            printf("Hey!!, You are not adult..");
        }
        else
        {
            printf("Hey!!, You are adult");
        }

        // 0<age<14 - kids, 15<age<40 - young, 40<age - seniour citizen

        // age <= 14 - true
        if (age <= 14)
        { // 78 <= 14
            printf("\n You are in kid group");
        }
        else if (age <= 40)
        { // 78 <= 40
            printf("\n You are in young group");
        }
        else
        {
            printf("\n You are in cinior citizen group");
        }
    }
}
