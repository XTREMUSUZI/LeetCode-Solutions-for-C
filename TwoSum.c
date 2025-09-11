 #include <stdio.h>
 #include <stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i;
    *returnSize = 2;
    int j;
    int* sol=(int*)malloc(2*sizeof(int));
    
    for (i=0;i<numsSize-1;i++){
        for(j=i+1;j<numsSize;j++){
            if(*(nums+i)+*(nums+j)==target){
                sol[0]=i;
                sol[1]=j;
                return sol;
            }
        }
    }
    return sol;
}
