#include<stdio.h>

int main(){

    int numbers[3][4] = {{1, 2, 3, 4}, 
                        {5, 6, 7,  8}, 
                        {9,10,11,12}};


    printf("%d", numbers[2][2]);
    printf("%d", numbers[0][2]); //3
    printf("%d", numbers[1][1]); //3
    
    numbers[1][1] = 50;
    
    printf("%d", numbers[1][1]); //3


    int marks[3][3];

    // scanf("%d", &marks[0][0]);
    // scanf("%d", &marks[0][1]);
    // scanf("%d", &marks[0][2]);

    //  scanf("%d", &marks[1][0]);
    // scanf("%d", &marks[1][1]);
    // scanf("%d", &marks[1][2]);

    //  scanf("%d", &marks[2][0]);
    // scanf("%d", &marks[2][1]);
    // scanf("%d", &marks[2][2]);

    for(int i =0; i<3; i++){
        for(int j=0; j<3; j++){
            
            scanf("%d", &marks[i][j]);
        }
    }

      for(int i =0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", marks[i][j]);
        }
        printf("\n");
    }
    return 0;

}