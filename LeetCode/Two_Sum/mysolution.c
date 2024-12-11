/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
int *returns,i,j,c=0;
returns=(int*)malloc(sizeof(int)*2);
returns[0]=returns[1]=-1;
for(i=0;i<numsSize;i++)
{
    for(j=0;j<numsSize;j++)
    {   
        if(j==i)
         continue;
        if(nums[i]+nums[j]==target)
        {
            returns[0]=i;
            returns[1]=j;
            break;
        }
        if(returns[0]>0||returns[1]>0)
         break;
    }
    
}
*returnSize=2;
return returns;
}
