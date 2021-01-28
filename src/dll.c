#include <stdio.h>
#include <stdlib.h>
#include "dll.h"

typedef struct __dll_node_internal dll_node_t;

struct __dll_node_internal {
    dll_node_t *prev; // link to previous node
    dll_node_t *next; // link to next node

    void *data;
};

struct __dll_internal {
    dll_node_t *first; // link to first node
    dll_node_t *last; // link to last node
    // optional: length
};

/**
 * @brief prints an error and details; useful to print error messages
 *
 * @param location name of the caller function
 * @param msg description of the error
 */
void error(char *location, char *msg) {
    fprintf(stderr, "Error [%s] : %s.", location, msg);
}

// see dll.h
dll_t *dll_new() {
    dll_t *list = malloc(sizeof(dll_t));
    if (!list) {
        error("dll_new", "Could not allocate enough memory");
        return NULL;
    }
    list->first = NULL;
    list->last = NULL;
    return list;
}

/**
 * @brief allocates new node containing data
 *
 * @param data user data
 * @return new node
 */
dll_node_t *dll_new_node(void *data) {
    dll_node_t *node = malloc(sizeof(dll_node_t));
    if (!node) {
        error("dll_new_node", "Could not allocate enough memory");
        return NULL;
    }
    node->prev = NULL;
    node->next = NULL;
    node->data = data;
    return node;
}

void dll_delete_node(dll_node_t *node, delete_data_fun func) {
    if (!node) return;
    if (func) (*func)(node->data);
    free(node);
}

// see dll.h
void dll_delete(dll_t *list, delete_data_fun func) {
    if (!list) return;
    dll_node_t *curr = list->first;
    dll_node_t *tmp;
    while (curr) {
        tmp = curr;
        curr = curr->next;
        dll_delete_node(tmp, func);
    }
    free(list);
}

void test() {
    dll_t *list = dll_new();
    dll_node_t *n1 = dll_new_node(NULL);
    dll_node_t *n2 = dll_new_node(NULL);
    dll_node_t *n3 = dll_new_node(NULL);

    n1->next = n2;

    n2->prev = n1;
    n2->next = n3;

    n3->prev = n2;

    list->first = n1;
    list->last = n3;

    dll_delete(list, NULL);
}
