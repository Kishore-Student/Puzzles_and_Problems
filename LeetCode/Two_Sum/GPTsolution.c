#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // Hash map to store the number and its index
    // We need a size big enough to store all unique elements
    int *hashMap = (int*)malloc(sizeof(int) * numsSize);
    
    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];
        
        // Check if the complement exists in the hash map
        if (hashMap[complement] > 0) {
            // Return the indices of the complement and current number
            int* result = (int*)malloc(2 * sizeof(int));
            result[0] = hashMap[complement];
            result[1] = i;
            *returnSize = 2;
            free(hashMap);
            return result;
        }

        // Store the current number and its index in the hash map
        hashMap[nums[i]] = i + 1;  // Use `i+1` to handle `0` as a valid index
    }

    // If no solution is found
    *returnSize = 0;
    free(hashMap);
    return NULL;
}

