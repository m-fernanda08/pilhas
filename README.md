# Pilhas em C

Este repositório contém uma implementação básica de uma estrutura de dados Pilha em C. Pilhas são estruturas LIFO (Last In, First Out), onde o último elemento inserido é o primeiro a ser removido.

# Estrutura da Pilha
```
#define MAX 100 

struct Stack {
  int arr[MAX];
  int top;
};
```

# Operações Básicas
Push: Adiciona um elemento ao topo da pilha.  
Pop: Remove e retorna o elemento do topo da pilha.  
Peek: Retorna o elemento do topo sem removê-lo.  
isEmpty: Verifica se a pilha está vazia.


## Exemplo de uso 

```
#include <stdio.h>
#define MAX 100

struct Stack {
  int arr [MAX];
  int top;
};

void push(struct Stack *stack, int value){
 if (stack->top == MAX - 1) return;
 stack->arr[++(stack->top)] = value;
}

int pop(struct Stack *stack) {
    if (stack->top == -1) return -1;
    return stack->arr[(stack->top)--];
}

int peek(struct Stack *stack) {
    if (stack->top == -1) return -1;
    return stack->arr[stack->top];
}

int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

int main() {
    struct Stack stack;
    stack.top = -1;

    push(&stack, 10);
    push(&stack, 20);
    printf("Elemento no topo: %d\n", peek(&stack));
    printf("Elemento removido: %d\n", pop(&stack));

    return 0;
}
```
## Compilação
Compile o código com:
```bash
gcc -o pilha pilha.c
```
