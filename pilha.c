#include <stdio.h>
#include <stdlib.h>

#define MAX 10 

    typedef struct {
    int itens[MAX];
    int topo;
    } pilha;

    void inicializarpilha(pilha *p) {
    p->topo = -1;
    }

    int pilhaCheia(pilha *p) {
    return p->topo == MAX - 1;
    }

    int pilhaVazia(pilha *p) {
    return p->topo == -1;
    }

    void empilhar(pilha *p, int item) {
    if (pilhaCheia(p)) {
        printf("Pilha cheia!\n");
        return;
    }
    p->itens[++(p->topo)] = item;
    }

    int desempilhar(pilha *p) {
    if (pilhaVazia(p)) {
        printf("Pilha vazia!\n");
        return -1; // Retorna um valor de erro
    }
    return p->itens[(p->topo)--];
    }

    int topoPilha(pilha *p) {
    if (pilhaVazia(p)) {
        printf("Pilha vazia!\n");
        return -1; // Retorna um valor de erro
    }
    return p->itens[p->topo];
    }

    int main() {
    pilha p;
    inicializarpilha(&p);

    empilhar(&p, 05);
    empilhar(&p, 06);
    empilhar(&p, 07);

    printf("Topo: %d\n", topoPilha(&p));

    printf("Desempilhado: %d\n", desempilhar(&p));
    printf("Desempilhado: %d\n", desempilhar(&p));
    printf("Desempilhado: %d\n", desempilhar(&p));
    printf("Desempilhado: %d\n", desempilhar(&p)); 

    return 0;
}