int searchInsertRecursive(int* nums, int left, int right, int target) {
    if (left > right) {
        // If target is not found, return the position where it should be inserted
        return left;
    }

    int middle = left + (right - left) / 2;

    if (nums[middle] == target) {
        return middle;  // Target found
    } else if (target < nums[middle]) {
        return searchInsertRecursive(nums, left, middle - 1, target);  // Search in the left half
    } else {
        return searchInsertRecursive(nums, middle + 1, right, target);  // Search in the right half
    }
}

int searchInsert(int* nums, int numsSize, int target) {
    return searchInsertRecursive(nums, 0, numsSize - 1, target);
}
