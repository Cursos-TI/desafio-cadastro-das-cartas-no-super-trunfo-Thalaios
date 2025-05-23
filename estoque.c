#include <stdio.h>

int main() {

    unsigned int produtoA;
    unsigned int produtoB;

    float estoqueA;
    float estoqueB;

    float valorA = 20.40;
    float valorB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;    

    double valorTotalA;
    double valorTotalB;

    int resultadoA, resultadoB;

//Exibit as informações dos produtos
    printd("Produto %s tem estoque %u e o valor unitario é %f\n", produtoA, estoqueA);
    printd("Produto %s tem estoque %u e o valor unitario é %f\n", produtoA, estoqueB);

// Comparações com o valor mínimo de estoque
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O produto %s tem estoque mínimo %d\n", produtoA, resultadoA);
    printf("O produto %s tem estoque mínimo %d\n", produtoB, resultadoB);


    // Comparações com o





}