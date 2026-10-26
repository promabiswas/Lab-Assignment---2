
#include <stdio.h>

int main() {
int n, x, reverse = 0;

printf("Enter a number: ");
scanf("%d", &n);

while (n > 0) {
        x = n % 10;
    reverse = reverse * 10 + x;
    n = n / 10;
    }

printf("Reverse = %d", reverse);

    return 0;
}
