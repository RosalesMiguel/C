#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(){

    srand((unsigned int)time(NULL));  //sets the seed of  the random() function to the system time
    int r, n;
    r = rand() % 100;
    int remainingTry = 5;
    printf("A number from 1 t 100 is generated. Guess the number. ");
    while (remainingTry > 0 ){
        printf("%d tries left.\nYour guess: ", remainingTry);
        scanf("%d", &n);
        if (n == r){
            printf("Your guess is correct!\nThe number is %d.\n", n);
            return 0;
        }
        else{
            remainingTry = remainingTry - 1;
            printf("Wrong guess!\n");
            if(remainingTry > 0){
                if (n < r){
                    printf("Clue: Higher\n");
                }
                else{
                    printf("Clue: Lower\n");
                }
            }
        }
        
    }
    if (remainingTry <= 0){
        printf("No more tries left. The number was %d.\n", r);
    }   
    return 0; 
}