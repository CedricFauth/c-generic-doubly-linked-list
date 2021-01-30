#ifndef _DOUBLY_LINKED_LIST
#define _DOUBLY_LINKED_LIST

/**
 * @brief just for testing
 * @todo remove  
 */
void test();

/**
 * @brief dll_t is the type of the doubly-linked-list (dll)
 * forward declaration of dll_t; you can only use dll_t POINTERS
 */
typedef struct __dll_internal dll_t;

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

/**
 * @brief creates new doubly-linked-list (dll)
 *
 * @return dll_t* pointer to a list
 */
dll_t *dll_new();

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

#endif//_DOUBLY_LINKED_LIST
