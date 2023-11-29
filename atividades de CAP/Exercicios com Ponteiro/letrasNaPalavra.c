int qtdeCarac(char *s){
    char *ptrPal = s;
    int tam=0;

    while(*ptrPal != '\0'){
        //Para o espaço do nome não ser contado como o tamanho do nome
        if(*ptrPal == ' '){
            tam--;
        }
        ptrPal += 1;
        tam++;
    }
    return tam;
}

main(){
    char palavra[100];

    gets(palavra);

    printf("Qtde de caracteres: %d\n", qtdeCarac(palavra));
}