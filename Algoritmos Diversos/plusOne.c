int* plusOne(int* digits, int digitsSize, int* returnSize) {

        int carry=0;
        
        for(int i=digitsSize-1; i>=0; i--){
            if(i==digitsSize-1){
              if((digits[digitsSize-1]+=1) == 10){
                  carry = 1;
                  digits[digitsSize-1] = 0;
                  continue;
              }
            }
            if(carry==1){
                carry=0;
                digits[i] += 1;
            } else {
                break;
            }
            if(digits[i] == 10){
                digits[i] = 0;
                carry = 1;
            }
        }
        if(carry == 1){
            int *arrayAlloc = malloc(sizeof(int) * (digitsSize + 2));
            arrayAlloc[0] = 1;
            for(int j=1;j<=digitsSize+1;j++){
                arrayAlloc[j] = 0;
            }
            *returnSize = digitsSize+1;
            return arrayAlloc;
        }

    *returnSize = digitsSize;
    return digits;
}