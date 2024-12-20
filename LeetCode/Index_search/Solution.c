int searchInsert(int* nums, int numsSize, int target) {
    int middle,right,left=0;
    right=numsSize-1;
    while(left<=right)
    {   
        middle=left+(right-left)/2;
        if(target==nums[middle])
            return middle;
        else if(target<nums[middle])
                right=middle-1;
        else if(target>nums[middle])
                left=middle+1;
    }
    return left;
}
   