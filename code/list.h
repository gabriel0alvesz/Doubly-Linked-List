#ifndef LIST_H
#define LIST_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdbool.h>

typedef struct DNode{

    int val;
    struct DNode *ant, *prox;

}Node;

typedef struct TypeList{

    Node *first, *last;
    size_t size;

}List;

/**
 * @brief Cria a cabeça da lista.   
 * 
 * @param l Recebe o endereço da lista(&l).
 */
void List_Create(List *l);

/**
 * @brief Cria um nó.
 * 
 * @param val Valor.
 * @return Retorno um nó.
 */
Node *List_CreateNode(int val);

/**
 * @brief Checa se a Lista está vazia.
 * 
 * @param l Endereço da Lista (&l).
 */
bool List_isEmpty(List *l);

/**
 * @brief Desaloca uma lista.
 * 
 * @param l Endereço da lista (&l).
 */
void List_DestroyList(List *l);

/**
 * @brief Insere um nó na cabeça da Lista.
 * 
 * @param l Endereco da Lista (&l).
 * @param val Valor.
 */
void List_InsertInHead(List *l, int val);

/**
 * @brief Insere um nó no Final da Lista.
 * 
 * @param l Endereço da Lista (&l)
 * @param val Valor.
 */
void List_InsertFinalList(List *l, int val);

/**
 * @brief Imprime Lista a partir do 1o nó.
 * 
 * @param l Endereço da lista (&l).
 */
void List_PrintListV1(List *l);

/**
 * @brief Remove um nó da lista.
 * 
 * @param l Endereço da lista (&l).
 * @param val Valor.
 */
void List_RemoveNode(List *l, int val);

#endif