#include "list.h"

void List_Create(List *l){

    l->first = (Node*) malloc(sizeof(Node)); //Aloca a cabeça da lista
    l->last = l->first;
    l->first->prox = NULL;
    l->size = 0;
    //Cabeca da lista criada - Lista vazia.
}

Node *List_CreateNode(int val){
    
    Node *new = (Node*)malloc(sizeof(Node));
    new->val = val;
    new->ant = NULL;
    new->prox = NULL;
    
    return new;
    //Nó criado e ponteiros setados.
}

void List_DestroyList(List *l){

    Node *pos = l->first->prox;
    Node *aux = NULL;

    while(pos != NULL){

        aux = pos;
        pos = pos->prox;
        free(aux);
    }

    free(pos);
    free(l);

    l = NULL;

}

bool List_isEmpty(List *l){
    
    return l->size == 0;
}

void List_InsertInHead(List *l, int val){

    Node *new = List_CreateNode(val);

    if(List_isEmpty(l)){

        l->first->prox = new;
        l->last = new;
    }else{

        new->prox = l->first->prox; // Novo nó aponta para o antigo 1o nó
        l->first->prox->ant = new; // O novo segundo nó tera seu ponteiro anterior apontando para o antigo nó
        l->first->prox = new; // A cabeça agora aponta para o novo 1o nó
    }

    l->size++;

}

void List_InsertFinalList(List *l, int val){

    Node *new = List_CreateNode(val);

    if(List_isEmpty(l)){

        l->first->prox = new;
        l->last = new;

    }else{
        
        new->ant = l->last; // o antigo ultimo elemento passa a ser o elemento anterior do novo nó
        l->last->prox = new; // O penultimo elemento agora tera seu ponteiro prox apontando para o ultimo nó
        l->last = new; // o ponteiro de ultimo agora aponta para o novo nó inserido
        l->last->prox = NULL;
    }

    l->size++;
}

void List_PrintListV1(List *l){

    if(!List_isEmpty(l)){

        Node *aux = l->first->prox;

        puts("\n");
        while(aux != NULL){

            printf("%d ", aux->val);
            aux = aux->prox;

        }

        printf("\t [%lu]\n", l->size);
    
    }else{

        puts("----> Lista vazia!\n\n");
    }

    //printf("first->prox == %d\nlast == %d\n last->ant == %d\n\n",l->first->prox->val, l->last->val, l->last->ant->val);
}
