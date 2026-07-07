/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // int i=0,j=numsSize-1;
    // while(i<j){
    //     if(nums[i]+nums[j]==target){
    //         break;
    //     }
    //     else if(nums[i]+nums[j]>target){
    //         j--;
    //     }
    //     else{
    //        i++;
    //     }
    // }
    int x,y;
    for(int i=0;i<numsSize-1;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j]==target){
                x=i,y=j;
                break;
            }
        }
    }
    int *ar=malloc(sizeof(int *)*2);
    ar[0]=x;
    ar[1]=y;
    *returnSize=2;
    return ar;
}