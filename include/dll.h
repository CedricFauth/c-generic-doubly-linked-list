#ifndef _DOUBLY_LINKED_LIST
#define _DOUBLY_LINKED_LIST

#include <stdbool.h>

typedef enum mode {
	VALUE,
	REFERENCE
} op_mode;

/**
 * @brief dll_t is the type of the doubly-linked-list (dll)
 * forward declaration of dll_t; you can only use dll_t POINTERS
 */
typedef struct _dll_internal dll_t;

typedef struct _dll_iterator dlli_t;

/**
 * @brief function pointer for deleting user data
 * user can use create a function to free or remove own data
 */
typedef void (*delete_data_fun)(void *data);

/**
 * @brief function pointer for displaying user data
 * 
 */
typedef void (*display_data_fun)(void *data);

typedef void (*foreach_fun)(int index, void *data, void *usr);

typedef int (*cmp)(void *dl, void *dr);

/**
 * @brief creates new doubly-linked-list (dll)
 * 
 * @param mode value: copies data; reference: stores the reference pointer
 * @param data_size value: size of the data; reference: don't care
 * @return dll_t* pointer to a list
 */
dll_t *dll_new(op_mode mode, size_t data_size);

/**
 * @brief takes data from an array and creates a list
 * if array consists of pointers: the pointers will be referenced/copied
 * @param array array of values that will be referenced or copied
 * @param len number of elements
 * @param mode copy(value) or reference array entries
 * @param elem_size size of elements
 * @return dll_t* 
 */
dll_t *dll_from_value_array(void *array, int len, op_mode mode, size_t elem_size);

/**
 * @brief deletes dll and optionally all user data
 *
 * @param list list to delete
 * @param func see typedefs; function to free/delete user data
 */
void dll_delete(dll_t *list, delete_data_fun func);

/**
 * @brief prints the list
 * 
 * @param list list to display
 * @param func function to print a (void *) data item or NULL
 */
void dll_display(dll_t *list, display_data_fun func);

/**
 * @brief inserts data in the list
 * 
 * @param list
 * @param pos position (can be negative); +: count from begin; -: count from end (-1: last index)
 * @param data data to insert
 */
void dll_insert(dll_t *list, int pos, void *data);

/**
 * @brief inserts data at the beginning
 * 
 * @param list 
 * @param data 
 */
void dll_push_front(dll_t *list, void *data);

/**
 * @brief inserts data at the end
 * 
 * @param list 
 * @param data 
 */
void dll_push_back(dll_t *list, void *data);

/**
 * @brief gets size of the list
 *
 * @param list
 * @return int number of nodes in list
 */
int dll_size(dll_t *list);

/**
 * @brief removes item from list
 * mode=REFERENCE returns data address; dest may be null
 * mode=VALUE copies data to dest location and returns address
 *             IMPORTANT dest 'buffer' needs to be large enough 
 *             to hold user data; 
 *             if dest=NULL data gets deleted and returns NULL
 * 
 * @param list 
 * @param pos index of data
 * @param dest see description
 * @return pointer to data
 */
void *dll_remove(dll_t *list, int pos, void *dest);

/**
 * @brief pops data at the end of the list and returns it
 * 
 * @param list 
 * @param dest see dll_remove
 * @return void* 
 */
void *dll_pop_back(dll_t *list, void *dest);

/**
 * @brief pops data at the start of the list and returns it
 * 
 * @param list 
 * @param dest see dll_remove
 * @return void* 
 */
void *dll_pop_front(dll_t *list, void *dest);

/**
 * @brief peeks inside data in the list
 * 
 * @param list 
 * @param pos (may be negative)
 * @return reference to user data in list
 */
void *dll_peek(dll_t *list, int pos);

/**
 * @brief reverses a list
 * 
 * @param list 
 */
void dll_reverse(dll_t *list);

/**
 * @brief deletes all data inside list
 * 
 * @param list 
 */
void dll_clear(dll_t *list);

void dll_foreach(dll_t *list, foreach_fun func, void *usr);

dlli_t *dll_iter(dll_t *list);

void dlli_delete(dlli_t *iter);

bool dlli_has_next(dlli_t *iter);

bool dlli_has_prev(dlli_t *iter);

void *dlli_next(dlli_t *iter);

void *dlli_prev(dlli_t *iter);

void dll_sort(dll_t *list, cmp c);

#endif//_DOUBLY_LINKED_LIST
