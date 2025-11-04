/*
 * Exercise 3-1. Our binary search makes two tests inside the loop, when one would suffice (at
 * the price of more tests outside.) Write a version with only one test inside the loop and
 * measure the difference in run-time.
 */

#include <stdio.h>

int bin_s(int x, int a[], int n);

int main() {
    int ex[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int r = bin_s(9, ex, 10);

    printf("O número 3 está em %d\n", r);
    return 0;
}

int bin_s(int x, int a[], int n) {
    int low, high, mid;

    low = 0;
    high = n - 1;

    while (low<high) {
        mid = (low + high) / 2;
        
        if (x <= a[mid])
            high = mid;
        else
            low = mid + 1;
    }

    return (x==a[low]) ? low : -1;
}

