#include <stdlib.h>
#include <stdio.h>

int main(){
    int ans, i = 1;
    int four = 1, seven = 1;
    int num, count = 1;
    
    while (num < 1){
        printf("Enter integer: ");
        scanf("%d", &num);
        if (num < 1){
            printf("Invalid value.\n");
        }
    }

    while (i <= num){
        if (count <= 2)
            {
                ans = 4 * four;
                four++;
            } else {
                ans = 7 * seven;
                seven++;
            }
    
            if(count == 4){
                count = 1;
            } else{
                count++;
            }
            printf("%d ", ans);
            i++;
    }

    return 0;
}