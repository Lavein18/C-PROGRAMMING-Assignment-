#1)1.  Given two numbers, Swap those two numbers without using temporary variable#
#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);
    num1 ^= num2;
    num2 ^= num1;
    num1 ^= num2;
    printf("After swapping:  num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}
#2)2.  Calculate the number of years,weeks and the remaining days for the given total days#
#include <stdio.h>
int main() {
    int total_days, years, weeks, days;
    printf("Enter the total number of days: ");
    scanf("%d", &total_days);
    years = total_days / 365;
    days = total_days % 365;
    weeks = days / 7;
    days = days % 7;
    printf("Number of Years: %d\n", years);
    printf("Number of Weeks: %d\n", weeks);
    printf("Number of Days: %d\n", days);
    return 0;
}
#3)3.  Evaluate a polynomial of degree n.#
#include <stdio.h>
int main() {
    int degree;
    double coefficients[100];  // Assuming a maximum of 100 coefficients
    double x, result = 0;
    printf("Enter the degree of the polynomial: ");
    scanf("%d", &degree);
    printf("Enter the coefficients: ");
    for (int i = 0; i <= degree; i++) {
        scanf("%lf", &coefficients[i]);
    }
    printf("Enter the value of x: ");
    scanf("%lf", &x);
    for (int i = degree; i >= 0; i--) {
        result += coefficients[i] * pow(x, i);  // pow(x, i) calculates x raised to the power of i
    }
    printf("P(x) = %.2lf\n", result);
    return 0;
}

