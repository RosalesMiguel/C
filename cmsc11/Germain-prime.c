#include <math.h>
#include <stdio.h>

int isPrime(int number) {
	if (number == 0 || number == 1 || (number % 2 == 0 && number > 2)) {
		return 0;
	}

	else {
		
		for (int i = 3; i <= sqrt(number)+1; i++) {
			if (number % i == 0) {
				return 0;
			}
		}
		return 1;
	}
}

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    if (isPrime(n) == 1 && isPrime((2*n)+1) == 1)
        printf("%d is a Germain prime.", n);
    else
        printf("%d is not a Germain prime.", n);
    return 0;
}