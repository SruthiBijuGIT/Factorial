#include<stdio.h>
 int fact(int n) {
    if (n>=1)
        return n*fact(n-1);
    else
        return 1;
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    printf("Factorial of %d = %d", n, fact(n));
    return 0;
}
