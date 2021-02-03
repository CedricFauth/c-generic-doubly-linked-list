# Generic Doubly Linked List

## Illustration
```
     +--list--+    
     |+-end--+|       +-node-+         +-node-+
 +-->|| next-||------>| next-|---...-->| next-|----+
 | +-||-prev ||<------|-prev |<--...---|-prev |<-+ |
 | | |+------+|       | data |         | data |  | |
 | | | size=3 |       +------+         +------+  | |
 | | +--------+                                  | |
 | +------------------------>--------------------+ |
 |                                                 |
 +--------------------------<----------------------+
```

## Implemented Functions
|Name|Worst Case|Description|
|-|-|-|
| dll_new | O(1) | Creates new list |
| dll_from_value_array | O(n) | array to list |
| dll_delete | O(n) | Deletes list |
| dll_display | O(n) | Prints the list |
| dll_insert | O(n) | Inserts data in list |
| dll_remove | O(n) | Removes and returns data from list |
| dll_push | O(1) | Adds frist/last item |
| dll_pop | O(1) | Removes first/last item |
| dll_size | O(1) | Returns size |
| dll_peek | O(n) | Looks up data in list |
| dll_reverse | O(n) | Reverses list |
| dll_clear| O(n) | Deletes all data from list |

## Conventions
- write smart and clean code - but readable
- refactor your code
- comments before/in every function
- no recursion
- no global variables
- CHECK FOR NULL and print error messages
- meaningful names for functions, variables etc.
- index variables may be short (i,j,k etc.)
- use snake_case NOT camelCase, kebab-case etc.

## Todos
### General
- [x] Project structure (Makefile, Directories, Sources, Headers)
- [x] structs for list and nodes
### Standard Functions
- [x] dll_new (+ dll_new_node)
- [x] dll_from_value_array 
- [x] dll_delete (+ dll_delete_node)
- [x] dll_display
- [x] dll_insert (from both sides)
- [x] dll_remove (from both sides)
- [x] dll_push (from both sides)
- [x] dll_pop (from both sides)
- [x] dll_size
- [x] dll_peek (from both sides)
- [x] dll_reverse
- [ ] dll_extend
- [x] dll_clear
### Higher Order Functions
- [x] dll_foreach (can also change data in list)
- [ ] dll_sort
- ( [ ] dll_filter (result: new list) )
- ( [ ] dll_map (result: new list) )
### Iterators
- [x] dll_iter
- [x] dlli_has_next
- [x] dlli_has_prev
- [x] dlli_next
- [x] dlli_prev
