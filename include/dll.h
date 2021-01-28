#ifndef _DOUBLY_LINKED_LIST_
#define _DOUBLY_LINKED_LIST_

typedef struct dll_node dll_node_t;
typedef struct dll dll_t;

struct dll_node {
	dll_node_t *prev;
	dll_node_t *next;
	
	void *data;
};

struct dll {
	dll_node_t *first;
	dll_node_t *last;
	// optional: length
};

#endif//_DOUBLY_LINKED_LIST_
