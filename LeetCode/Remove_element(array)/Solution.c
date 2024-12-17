int removeElement(int* nums, int numsSize, int val) {
int i=0,current=0;
while(i<numsSize)
{
 if(nums[i]==val)
    i++;
 else
 {
  nums[current]=nums[i];
  i++;
  current++;
 }
}
return current;
}
 