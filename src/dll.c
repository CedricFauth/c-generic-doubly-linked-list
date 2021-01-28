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

// see header
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


