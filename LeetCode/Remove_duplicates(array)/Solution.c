int removeDuplicates(int* nums, int numsSize) {
int n=1,current=0;
if(numsSize==1)
return 1;
while(n<numsSize)
{
    if(nums[n]!=nums[current])
        current++;
    nums[current]=nums[n];
    ++n;
}
return current+1;
}