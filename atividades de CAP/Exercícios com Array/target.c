void findTarget(int nums[], int qtde, int target){

    int i, j;

    printf("Digite o target:\n");
    scanf("%d", &target);

    num[qtde];
    printf("Digite %d valor(es)\n", qtde);

    for(i=0; i<qtde; i++){
        for(j=0; j<qtde; j++){
            if(nums[i] + nums[j] == target){
                printf("[%d, %d]", i, j);
                i=qtde;
                j=qtde;
            }
        }
    }
}

main(){
    int qtde, target;

    printf("Digite a quantidade de numeros para a operacao:\n");
    scanf("%d", &qtde);

    int num[qtde];
    findTarget(num, qtde, target);
}