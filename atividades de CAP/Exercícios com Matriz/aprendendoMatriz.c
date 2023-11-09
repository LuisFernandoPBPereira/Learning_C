#include<stdio.h>

main(){
    int matriz[3][3];
    int i, j;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Agora mude os valores\n");
    for(i=0; i<3; i++){
        scanf("%d", &matriz[i][i]);
    }

    printf("\n");

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d", matriz[i][j]);
        }
        printf("\n");
    }
}