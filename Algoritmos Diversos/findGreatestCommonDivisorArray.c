int findGCD(int* nums, int numsSize) {
    int maior=0, menor=nums[0], maiorDiv=0;

    for(int i=0; i<numsSize; i++){
        if(nums[i]>maior){
            maior = nums[i];
        }
        if(nums[i]<menor){
            menor = nums[i];
        }
    }

    for(int i=1; i<=maior; i++){
        if(maior%i==0 && menor%i==0){
            if(i>maiorDiv){
                maiorDiv=i;
            }
        }
    }
    return maiorDiv;
}