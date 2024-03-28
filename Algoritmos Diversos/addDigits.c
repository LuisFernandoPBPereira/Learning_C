int addDigits(int num) 
{
    int unidade1, unidade2;

    while(num > 9)
    {
        unidade1 = num % 10;
        unidade2 = num / 10;
        num = unidade1 + unidade2;
    }

    return num;
}

int main()
{
    printf("%d", addDigits(38));
    return 0;
}