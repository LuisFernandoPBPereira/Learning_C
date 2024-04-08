bool isPalindrome(int x) {
    char number[50];
    sprintf(number, "%d", x);
    
    for(int i=0; number[i] != '\0'; i++){
        if(number[i] != number[strlen(number)-i-1])
            return false;
    }
    return true;
}