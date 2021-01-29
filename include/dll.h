#ifndef __DOUBLY_LINKED_LIST
#define __DOUBLY_LINKED_LIST

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

void dll_display(dll_t *list, display_data_fun func);

#endif//__DOUBLY_LINKED_LIST
