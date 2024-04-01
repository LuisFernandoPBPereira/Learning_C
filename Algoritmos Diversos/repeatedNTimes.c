int repeatedNTimes(int* nums, int numsSize) {
    int array[numsSize+1];
    array[0] = -1;

    for(int j=0; j<numsSize; j++){
        for(int i=0; array[i] != -1; i++){
            if(nums[j] == array[i]){
                return array[i];
            }
        }
        array[j] = nums[j];
        array[j+1] = -1;
    }
    return array[0];
}