#include<stdio.h>
int sum_first_10_even() {
    int sum = 0;
    for (int i = 2; i <= 20; i += 2) {
        sum += i;
    }
    return sum;
}

int main() {
    int result = sum_first_10_even();
    printf("Sum of the first ten even numbers: %d\n", result);
    return 0;
}
