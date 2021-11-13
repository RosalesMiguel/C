#include <stdio.h>
#include <math.h>

int main(){
    int choice;
    while(choice < 1 || choice > 5){
        printf("Menu:\n1. Perfect Number or Not.\n2. X Raised to Y\n3. Factorial\n4. Fibonacci\n5. Exit\nChoose a number: ");
        scanf("%d", &choice);
        if (choice < 1 || choice > 5){
            printf("Invalid input.\n");
        }
    }
    if(choice == 1){
        int n = 0;
        while(n <= 0){
            printf("Enter a positive number: ");
            scanf("%d", &n);
            if (n <= 0){
                printf("Invalid input.\n");
            }    
        }
        int sumDivisors = 0;
        for(int i = 1; i < n; i++){
            if(n % i == 0){
                sumDivisors += i;
            }
        }
        if (sumDivisors == n){
            printf("%d is a perfect number.\n", n);
        }
        else{
            printf("%d is not a perfect number.\n", n);
        }
    }
    else if(choice == 2){
        int x,y,ans;
        printf("Enter integer x: ");
        scanf("%d", &x);
        printf("Enter integer x: ");
        scanf("%d", &y);
        if(y == 0){
            printf("%d raised to %d is equal to 1.\n", x, y);
            return 0;
        }

        ans = x;

        for(int i = 0; i < abs(y)-1; i++){
            ans = ans * x;
        }
        if (y < 0 && ans < 0){
            printf("%d raised to %d is equal to -1/%d.\n", x, y, abs(ans));
        }
        else if(y < 0 && ans > 0){
            printf("%d raised to %d is equal to 1/%d.\n", x, y, ans);
        }
        else{
            printf("%d raised to %d is equal to %d.\n", x, y, ans);
        }
    }

    else if(choice == 3){
        int n = -1, ans = 1;
        while(n < 0){
            printf("Enter a non-negative number: ");
            scanf("%d", &n);
            if (n < 0)
            {
                printf("Invalid input.\n");
            }
        }
        int temp = n;
        for(int i = 0; i < n; i++){
            ans = ans * temp;
            temp = temp - 1; 
        }
        printf("%d factorial is equal to %d.\n", n, ans);
    }

    else if(choice == 4){
        int n = 0;
        while(n <= 0){
            printf("Enter a positive integer: ");
            scanf("%d", &n);
            if (n <= 0)
            {
                printf("Invalid input.\n");
            }
        }
        long long temp, fib[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};
        if(n <= 10){
            printf("%lld\n", fib[n-1]);
        }
        else{
            for(int i = 0; i < n - 10; i++){
                temp = fib[9];
                fib[9] = fib[9] + fib[8]; 
                fib[8] = temp;
            }
            printf("%lld\n", fib[9]);
        }
    }

    else{
        printf("Terminating program...\n");
        return 0;
    }
}
    