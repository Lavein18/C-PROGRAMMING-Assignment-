Quiz1
1)
#include <stdio.h>
void swap_by_value(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int a = 10, b = 20;
    printf("Before swapping (main): a = %d, b = %d\n", a, b);
    swap_by_value(&a, &b);
    printf("After swapping (main): a = %d, b = %d\n", a, b);
    return 0;
}


#include <stdio.h>
void swap_by_reference(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int a = 10, b = 20;
    printf("Before swapping (main): a = %d, b = %d\n", a, b);
    swap_by_reference(&a, &b);
    printf("After swapping (main): a = %d, b = %d\n", a, b);
    return 0;
}

2)
#include <stdio.h>
void find_duplicates(int arr[], int n) {
    int *ptr = arr, i, found = 0;
    printf("Duplicate elements: ");
    for (i = 0; i < n; i++) {
        int abs_val = *ptr >= 0 ? *ptr : -(*ptr);
        if (arr[abs_val] < 0) {
            printf("%d ", abs_val);
            found = 1;
        } else {
            arr[abs_val] *= -1;
        }
        ptr++;
    }
    if (!found) {
        printf("-1");
    }
    printf("\n");
}
int main() {
    int arr[] = {2, 3, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    find_duplicates(arr, n);
    return 0;
}

3)
#include <stdio.h>
void find_union(int arr1[], int n, int arr2[], int m) {
    int i = 0, j = 0;
    printf("Union of arrays: ");
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            printf("%d ", arr1[i++]);
        } else if (arr2[j] < arr1[i]) {
            printf("%d ", arr2[j++]);
        } else {
            printf("%d ", arr1[i++]);
            j++;
        }
    }
    while (i < n) {
        printf("%d ", arr1[i++]);
    }
    while (j < m) {
        printf("%d ", arr2[j++]);
    }
    printf("\n");
}
int main() 
{
    int arr1[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {1, 2, 3};
    int m = sizeof(arr2) / sizeof(arr2[0]);
    find_union(arr1, n, arr2, m);
    return 0;
}
Quiz 2
1)
#include <stdio.h>
int findSecondLargest(int arr[], int n) {
    int largest = arr[0];
    int secondLargest = -1;
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] != largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}
int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int secondLargest = findSecondLargest(arr, n);
    if (secondLargest != -1) {
        printf("Second Largest element is %d\n", secondLargest);
    } else {
        printf("No Second Largest element exists\n");
    }
    return 0;
}
2)
#include <stdio.h>
int find_pair(int A[], int N, int X) {
   int seen[N];
   for (int i = 0; i < N; i++) {
       seen[i] = 0;
   }
   for (int i = 0; i < N; i++) {
       int complement = X - A[i];
       if (seen[complement] == 1) {
           return 1;
       }
       seen[A[i]] = 1;
   }
   return 0;
}
int main() {
   int A[] = {1, 4, 45, 6, 10, 8};
   int N = sizeof(A) / sizeof(A[0]);
   int X = 16;
   if (find_pair(A, N, X)) {
       printf("Yes\n");
   } else {
       printf("No\n");
   }
   return 0;
}
3)
#include <stdio.h>
int find_pair(int A[], int N, int X) {
   int seen[N];
   for (int i = 0; i < N; i++) {
       seen[i] = 0;
   }
   for (int i = 0; i < N; i++) {
       int complement = X - A[i];
       if (seen[complement] == 1) {
           return 1;
       }
       seen[A[i]] = 1;
   }
   return 0;
}
int main() {
   int A[] = {1, 4, 45, 6, 10, 8};
   int N = sizeof(A) / sizeof(A[0]);
   int X = 16;
   if (find_pair(A, N, X)) {
       printf("Yes\n");
   } else {
       printf("No\n");
   }
   return 0;
}







