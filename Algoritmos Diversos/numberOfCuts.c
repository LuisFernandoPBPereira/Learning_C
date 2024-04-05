//Número de cortes em um círculo
int numberOfCuts(int n) {
    if(n==1) return 0;
    if(n%2!=0) return n;
    else return n/2;
}