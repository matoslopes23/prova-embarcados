// Curso: Engenharia de Software
// Disciplina: Sistemas Embarcados
// Professor: Vandermi Joao da Silva
// Autor: Lucas Weslen Lopes de Matos
// Data: 09/10/2021

// Circuito codificado em linguagem c
// questão 1 em linguagem de programação C.

#include <stdio.h>
int processamento(int a, int b, int op)
{
    if (op == 1)
    {
        //NOT
        return !a;
    }
    if (op == 2)
    {
        //NAND
        return !(!(a & b));
    }
    if (op == 3)
    {
        //NORna
        return !(!(a | b));
    }
    if (op == 4)
    {
        //AND
        return !(a & b);
    }
    if (op == 5)
    {
        //OR
        return !(a | b);
    }
    else
    {
        return -1;
    }
}

int main()
{
    //testando na porta AND com valores A  e B
    //basta trocar os valores que corresponde a tabela
    printf("!(%d or %d) = %d\n", 1, 0, processamento(1, 0, 4));
    // a,b             //a,b,op
    return 0;
}