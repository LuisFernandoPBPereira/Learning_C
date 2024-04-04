int dayOfYear(char* date) {
    int soma=0, mes, dia, ano;
    int diasDosMeses[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    dia = atoi(date+8); 
    mes = atoi(date+5);
    ano = atoi(date);

    if(ano%4==0 && ano%100!=0 || ano%400==0)
      diasDosMeses[1] = 29;

    for(int i=0; i<mes-1; i++)
        soma+=diasDosMeses[i];

    soma+=dia;
    return soma;
}