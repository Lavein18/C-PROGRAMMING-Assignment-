#1)Get three values x, y, z and write a program to print 1 if x is the middle value, 2 if y is the middle value and 3 if z is the middle value. Assume that all three variables (x, y, z) are distinct and have different values.#
#include <stdio.h>
int main() {
    int x, y, z;
    printf("Enter three distinct values for x, y, and z: ");
    scanf("%d %d %d", &x, &y, &z);
    if (x < y && x > z || x > y && x < z) {
        printf("1\n");
    } else if (y < x && y > z || y > x && y < z) {
        printf("2\n");
    } else {
        printf("3\n");
    }
    return 0;
}





#2)A password is said to be strong if it satisfies the following criteria: 
It contains at least one lowercase English character. 
It contains at least one uppercase English character. 
It contains at least one special character. 
The special characters are: !@#$%^&*()-+ 
Its length is at least 8.
It contains at least one digit. Given a string, find its strength.#
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
bool isStrongPassword(const char *password) {
    int length = strlen(password);
    if (length < 8) {
        return false;
    }
    bool hasLower = false, hasUpper = false, hasDigit = false, hasSpecial = false;
    for (int i = 0; i < length; i++) {
        char ch = password[i];
        if (islower(ch)) {
            hasLower = true;
        } else if (isupper(ch)) {
            hasUpper = true;
        } else if (isdigit(ch)) {
            hasDigit = true;
        } else if (strchr("!@#$%^&*()-+", ch) != NULL) {
            hasSpecial = true;
        }
    }
    return hasLower && hasUpper && hasDigit && hasSpecial;
}
int main() {
    char password[100];
    printf("Enter a password: ");
    scanf("%s", password);
    if (isStrongPassword(password)) {
        printf("The password is strong.\n");
    } else {
        printf("The password is not strong.\n");
    }
    return 0;
}

#3) A firm creates projects for which a certain number of hours are needed. The firm has a certain number of days. During 10% of the days, the workers are being trained and cannot work on the project. A normal working day is 8 hours long. The project is important for the firm and every worker must work on it with overtime of 2 hours per day. The hours must be rounded down to the nearest integer (for example, 6.98 hours are rounded to 6 hours). Write a program that calculates whether the firm can finish the project on time and how many hours more are needed or left.
Input:
Accept three integers as input(total number of hours needed,number of days,number of workers).
Output:
If the time is enough,print "Yes!{the hours left} hours left.".
If the time is NOT enough, print "Not enough time!{additional hours} hours needed.#
#include <stdio.h>
int main() {
 int hours_needed, days, workers;
 printf("Enter total hours needed: ");
 scanf("%d", &hours_needed);
 printf("Enter number of days: ");
 scanf("%d", &days);
 printf("Enter number of workers: ");
 scanf("%d", &workers);
 int training_days = days * 0.1;
 int working_days = days - training_days;
 double available_hours = (working_days * 8 + training_days * 0) * workers + working_days * 2 * workers;
 if (available_hours >= hours_needed) {
   int hours_left = (int) (available_hours - hours_needed);
   printf("Yes! %d hours left.\n", hours_left);
 } 
 else {
   int extra_hours_needed = (int) (hours_needed - available_hours);
   printf("Not enough time! %d hours needed.\n", extra_hours_needed);
 }
 return 0;
}
  

  

