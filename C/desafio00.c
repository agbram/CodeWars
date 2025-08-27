#include <stdio.h>

int get_sum(int a, int b);

int main()
{
    int x = -1;
    int y = 2;

    int soma = get_sum(x, y);

    printf("resultado: %d\n", soma);
    return 0;
}

int get_sum(int a, int b)
{

    int result = 0;

     if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    
    for (int i = a; i <= b; i++)
    {
        result += i;
    }

    return result;
}