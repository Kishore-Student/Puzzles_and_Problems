int removeElement(int* nums, int numsSize, int val) {
    int current = 0;
    
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {  // If nums[i] is not equal to val, move it to the front
            nums[current++] = nums[i];
        }
    }

    return current;  // The length of the new array without 'val'
}
