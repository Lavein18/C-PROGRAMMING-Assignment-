1)
#include <stdio.h>
#include <stdlib.h>
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int carry = 1;
    for (int i = digitsSize - 1; i >= 0; i--) {
        int sum_digit = digits[i] + carry;
        carry = sum_digit / 10;
        digits[i] = sum_digit % 10;
    }    
    if (carry) {
        int* result = (int*)malloc(sizeof(int) * (digitsSize + 1));
        result[0] = 1;
        for (int i = 0; i < digitsSize; i++) {
            result[i + 1] = digits[i];
        }
        *returnSize = digitsSize + 1;
        return result;
    } else {
        *returnSize = digitsSize;
        return digits;
    }
}
int main() {
    int digits[] = {1, 2, 3};
    int digitsSize = sizeof(digits) / sizeof(digits[0]);
    int returnSize;
    int* result = plusOne(digits, digitsSize, &returnSize);
    printf("Incremented digits: ");
    for (int i = 0; i < returnSize; i++) {
        printf("%d", result[i]);
    }
    printf("\n");
    free(result);
    return 0;
}
2)
#include <stdbool.h>
bool can_jump_to_last(int* nums, int numsSize) {
   int reachable_index = 0;
   for (int i = 0; i < numsSize; i++) {
       if (i > reachable_index) {
           return false;
       }
       reachable_index = max(reachable_index, i + nums[i]);
   }
   return reachable_index >= numsSize - 1;
}
int main() {
   int nums1[] = {2, 3, 1, 1, 4};
   int nums2[] = {3, 2, 1, 0, 4};
   printf("Can reach last index in nums1: %s\n", can_jump_to_last(nums1, sizeof(nums1) / sizeof(nums1[0])) ? "true" : "false");
   printf("Can reach last index in nums2: %s\n", can_jump_to_last(nums2, sizeof(nums2) / sizeof(nums2[0])) ? "true" : "false");
   return 0;
}
3)
#include <stdio.h>
int max_subarray_sum(int* nums, int numsSize) {
    int current_sum = nums[0], max_sum = nums[0];
    for (int i = 1; i < numsSize; i++) {
        current_sum = max(nums[i], current_sum + nums[i]);
        max_sum = max(max_sum, current_sum);
    }
    return max_sum;
}
int main() {
    int nums1[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int nums2[] = {1};
    int nums3[] = {5, 4, -1, 7, 8};
    printf("Maximum subarray sum in nums1: %d\n", max_subarray_sum(nums1, sizeof(nums1) / sizeof(nums1[0])));
    printf("Maximum subarray sum in nums2: %d\n", max_subarray_sum(nums2, sizeof(nums2) / sizeof(nums2[0])));
    printf("Maximum subarray sum in nums3: %d\n", max_subarray_sum(nums3, sizeof(nums3) / sizeof(nums3[0])));
    return 0;
}


