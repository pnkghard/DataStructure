#include<stdio.h>

int main(){
    int i=0, j=0;
    for(i=0; i<5; i++) {
        for(j=0; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for(i=5; i>=0; i--) {
        for(j=0; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
    // for(i=5; i>=0; i--) {
    //     for(j=0; j<=5; j++) {
    //         if(j<i)
    //             printf(" ");
    //         else
    //             printf("*");
    //     }
    //     printf("\n");
    // }
    
    // int rows, i, j, space;
    // printf("Enter the number of rows: ");
    // scanf("%d", &rows);
    // for (i = rows; i >= 1; --i) {
    //     for (space = 0; space < rows - i; ++space)
    //         printf("  ");
    //     for (j = i; j <= 2 * i - 1; ++j)
    //         printf("* ");
    //     for (j = 0; j < i - 1; ++j)
    //         printf("* ");
    //     printf("\n");
    // }
}