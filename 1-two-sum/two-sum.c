/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result=(int *)malloc(2*sizeof(int));
    *returnSize=2;
    int flag=0;
    for(int i=0;i<numsSize;i++)
    {      
            for(int j=i+1;j<numsSize;j++)
            {
                if(nums[j]+nums[i]==target)
                {result[0]=i;
                result[1]=j;
                return result;
                
                 }

            }
      
        
    }
    return NULL;
  
}
    

    