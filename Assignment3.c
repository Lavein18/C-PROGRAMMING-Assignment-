1)
#include <stdio.h>
int main() {
   char shape;
   float size, area;
   printf("Enter the shape (S for square, C for circle): ");
   scanf("%c", &shape);
   printf("Enter the size: ");
   scanf("%f", &size);
   if (shape == 'S') {
       area = size * size;
       printf("Area of Square = %.2f\n", area);
   } else if (shape == 'C') {
       area = 3.14159 * size * size;
       printf("Area of Circle = %.2f\n", area);
   } else {
       printf("Invalid shape. Please enter 'S' or 'C'.\n");
   }
   return 0;
}


2)
#include <stdio.h>
void print_frequent(int arr[], int n) {
  int curr = arr[0], count = 1;
  for (int i = 1; i < n; i++) {
    if (arr[i] == curr) {
      count++;
    } else {
      if (count > 1) printf("%d->%d\n", curr, count);
      curr = arr[i]; count = 1;
    }
  }
  if (count > 1) printf("%d->%d\n", curr, count);
}
int main() {
  int arr[] = {1, 1, 1, 2, 4, 4, 4, 4, 5, 6, 9, 9};
  int n = sizeof(arr) / sizeof(arr[0]);
  print_frequent(arr, n);
  return 0;
}



3)
#include <stdio.h>
#include <string.h>
void justify(char sentence[], int screen_len) {
  int len = strlen(sentence);
  int extra = screen_len - len;
  int words = 0;
  for (int i = 0; i < len; i++) if (sentence[i] == ' ') words++;
  int per_gap = extra / words;
  int at_end = extra % words;
  int i = 0;
  while (i < len) {
    if (sentence[i] == ' ') {
      int j = 0; while (j < per_gap) { sentence[i + j + 1] = '*'; j++; }
      if (at_end > 0) { sentence[i + j + 1] = '*'; at_end--; }
      i += j + 2;
    }
    else i++;
  }
  printf("%s\n", sentence);
}
int main() 
{
  char sentence[] = "Welcome to Zoho Corporation";
  int screen_len = 34;
  justify(sentence, screen_len);
  return 0;
}
4)
#include <stdio.h>
int main() {
  int m[3][3];
  for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) scanf("%d", &m[i][j]);
  printf("The matrix is:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) printf("%d ", m[i][j]);
    printf("\n");
  }
  return 0;
}
5)
#include <stdio.h
int main() {
  char input[100];
  int i = 0, count;
  scanf("%s", input);
  while (input[i] != '\0') {
    count = 0;
    while (input[i + 1] >= '0' && input[i + 1] <= '9') { count = count * 10 + (input[i + 1] - '0'); i++; }
    for (int j = 0; j < count; j++) printf("%c", input[i]);
    i++;
  }
  printf("\n");
  return 0;
}
6)
#include <stdio.h>
int main()
{
  char input[100];
  int i = 0, count;
  scanf("%s", input);
  while (input[i] != '\0') 
  {
    count = 0;
    while (input[i + 1] >= '0' && input[i + 1] <= '9') { count = count * 10 + (input[i + 1] - '0'); i++;
  }
    for (int j = 0; j < count; j++) printf("%c", input[i]);
    i++;
  }
  printf("\n");
  return 0;
}



