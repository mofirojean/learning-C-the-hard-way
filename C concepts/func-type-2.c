// No arguments passed but returns a value

#include <stdio.h>
int getInteger();


int main(int argc, char *argv[]) {

	int n, i, flag = 0;

        // No arguments is passed
	n = getInteger();

        // 0 and 1 are not prime numbers
        if (n == 0 || n == 1) { flag = 1; }

        for(i = 2; i <= n/2; ++i) {
                if(n%i == 0) {
                        flag = 1;
                        break;
                }
        }

        if (flag == 1) {
                printf("%d is not a prime number.\n", n);
        } else {
                printf("%d is a prime number.\n", n);
        }
}

int getInteger() {
	int n;

	printf("Enter a positive integer: ");
        scanf("%d", &n);
	return n;
}
