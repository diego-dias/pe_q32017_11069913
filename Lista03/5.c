#include <stdio.h>
#include <stdlib.h>

struct tItem{
    int chave;
    int qtdd;
    struct tItem *proximo;
};

struct tLista{
    struct tItem *inicio;
};

struct tLista *criaLista(){
    struct tLista *lista = (struct tLista*) malloc(sizeof(struct tLista));
    if (lista!=NULL){
        lista->inicio = NULL;
    }
    return lista;
}

struct tItem *criaItem(int chave){
    struct tItem * item = (struct tItem*) malloc(sizeof(struct tItem));
    if(item!=NULL){
        item->chave = chave;
        item->qtdd = 1;
        item->proximo = NULL;
    }
    return item;
}

void inserir(struct tLista *l, struct tItem *novo){
    struct tItem *atual=l->inicio, *anterior=NULL;
    int achei = 0;
    
    while(!achei && atual!=NULL){
        if(atual->chave == novo->chave){
            achei = 1;
            atual->qtdd += novo->qtdd;
        } else{
            anterior = atual;
            atual = atual->proximo;
        }
    }
    
    if(achei==1){
        free (novo);
    } else{
        novo->proximo = atual;
        if(anterior!=NULL){
            anterior->proximo = novo;
        }else{
            l->inicio = novo;
        }
    }
}


void completa_vetor(int *vetor, int tamanho){
    int i;
    for (i=0; i<tamanho; i++){
        scanf("%d", &vetor[i]);
    }
}

void monta_lista(struct tLista *lista, int *vetor, int tamanho){
    int i, j;
    for (i=0; i<tamanho; i++){
        struct tItem *item = criaItem(vetor[i]);
        inserir(lista, item);
    }
}

void verifica_repeticoes(struct tLista *lista){
    struct tItem *atual = lista->inicio, *anterior =NULL;
    while(atual != NULL){
        if(atual->qtdd!=1){
            printf("%d-%d ", atual->chave, atual->qtdd);
        }
        anterior = atual;
        atual = atual->proximo;
    }
}

int main(){
    int tamanho;
    int *vetor;
    scanf("%d", &tamanho);
    vetor = (int*) malloc(tamanho *sizeof(int));
    struct tLista *lista = criaLista();
    completa_vetor(vetor, tamanho);
    monta_lista(lista, vetor, tamanho);
    verifica_repeticoes(lista);
    return 0;
}