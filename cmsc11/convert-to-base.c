#include <stdio.h>
#include <math.h>

int main()
{
    int n = 0, b = 0;
    int r;
    int fin = 0;
    int i = 1;
    
    while (n <= 0)
    {
        printf("Enter a positive integer: ");
        scanf("%d", &n);
        if (n <= 0)
        {
            printf("Invalid input.\n");
        }
    }

    while (b <= 0 || b >= 10)
    {
        printf("Enter a positive integer less than 10: ");
        scanf("%d", &b);
        if (b <= 0 || b >= 10)
        {
            printf("Invalid input.\n");
        }
    }
    
    int ans = n;

    while (ans > 0){
        r = ans % b;
        ans = floor(ans / b);
        fin = fin + r * i;
        i = i * 10;
    }
    printf("%d\n", fin);
    return 0;
}