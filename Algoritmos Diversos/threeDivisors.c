bool isThree(int n) {
    int cont=0;
    for(int i=1; i<=n; i++){
        if(n%i==0)
            cont++;
            
        if(cont>3) return false;
    }
    if(cont<3) return false;

    return true;
}