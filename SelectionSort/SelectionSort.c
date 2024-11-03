#include <stdio.h>
#include <stdlib.h>

enum Sort{
    ORDEM_CRESCENTE,
    ORDEM_DECRESCENTE
};

void SelectionSort(int numeros[], int tamanho, int ordenacao);
void ImprimeVetor(int numeros[], int tamanho);
int BuscaMenorValor(int indiceAtual, int numeroMinimo, int numeros[], int tamanho);
int BuscaMaiorValor(int indiceAtual, int numeroMaximo, int numeros[], int tamanho);
void TrocaPosicaoDoNumero(int indiceAtual, int numeroMinimo, int numeros[]);
void InserirValores(int numeros[], int tamanho);
void Menu();

int main(){
    Menu();
    return 0;
}

void Menu(){
    int tamanho = 10;
    int vetor[tamanho];


    int ordemDeSelecao = 0; 
    printf("Selecione a ordem de selecao:\n1 - Crescente\n2 - Decrescente\n3 - Sair\n");
    scanf("%d", &ordemDeSelecao);

    
    system("cls");

    switch (ordemDeSelecao)
    {
    case 1:
        InserirValores(vetor, tamanho);
        printf("\nVetor a ser ordenado de forma crescente: ");
        ImprimeVetor(vetor, tamanho);
        printf("\n");
        SelectionSort(vetor, tamanho, ORDEM_CRESCENTE);
        break;
    case 2:
        InserirValores(vetor, tamanho);
        printf("\nVetor a ser ordenado de forma descrescente: ");
        ImprimeVetor(vetor, tamanho);
        printf("\n");
        SelectionSort(vetor, tamanho, ORDEM_DECRESCENTE);
        break;
    case 3:
        exit(1);
        break;
    default:
        printf("Selecao invalida, tente novamente...\n\n");
        Menu();
        break;
    }

    printf("\nVetor ordenado: ");
    ImprimeVetor(vetor, tamanho);
    printf("\n");
    Menu();
}

void InserirValores(int numeros[], int tamanho){
    printf("Insira 10 valores para serem organizados: \n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%do numero: ", i+1);
        scanf("%d", &numeros[i]);
    }
    
}

void SelectionSort(int numeros[], int tamanho, int ordenacao){
    if(ordenacao == ORDEM_CRESCENTE){
        int numeroMinimo = 0;

        for (int i = 0; i < (tamanho-1); i++) 
        {
            numeroMinimo = i;
            
            numeroMinimo = BuscaMenorValor(i, numeroMinimo, numeros, tamanho);

            TrocaPosicaoDoNumero(i, numeroMinimo, numeros);

            ImprimeVetor(numeros, tamanho);
        }
    }
    else{
        int numeroMaximo = 0;

        for (int i = 0; i < (tamanho-1); i++) 
        {
            numeroMaximo = i;
            
            numeroMaximo = BuscaMaiorValor(i, numeroMaximo, numeros, tamanho);

            TrocaPosicaoDoNumero(i, numeroMaximo, numeros);

            ImprimeVetor(numeros, tamanho);
        }
    }
}

void TrocaPosicaoDoNumero(int indiceAtual, int indiceDoNumeroParaTroca, int numeros[]){
        int auxiliar = 0;
        if (indiceAtual != indiceDoNumeroParaTroca)
        {
            auxiliar = numeros[indiceAtual];
            numeros[indiceAtual] = numeros[indiceDoNumeroParaTroca];
            numeros[indiceDoNumeroParaTroca] = auxiliar;
        }
}

int BuscaMaiorValor(int indiceAtual, int numeroMaximo, int numeros[], int tamanho){
    for (int indiceDeComparacao = (indiceAtual+1); indiceDeComparacao < tamanho; indiceDeComparacao++) 
    {
        if(numeros[indiceDeComparacao] > numeros[numeroMaximo]) 
            numeroMaximo = indiceDeComparacao;
    }

    return numeroMaximo;
}

int BuscaMenorValor(int indiceAtual, int numeroMinimo, int numeros[], int tamanho){
    for (int indiceDeComparacao = (indiceAtual+1); indiceDeComparacao < tamanho; indiceDeComparacao++) 
    {
        if(numeros[indiceDeComparacao] < numeros[numeroMinimo]) 
            numeroMinimo = indiceDeComparacao;
    }

    return numeroMinimo;
}

void ImprimeVetor(int numeros[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("%d ", numeros[i]);
    }

    printf("\n");
}
