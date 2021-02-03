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
- [ ] dll_from_array 
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
- [ ] dll_foreach
- [ ] dll_sort
- [ ] dll_filter
- [ ] dll_map
- [ ] dll_reduce
### Iterators
- [ ] dll_iter_begin
- [ ] dll_iter_end
- [ ] dll_has_next
- [ ] dll_has_prev
- [ ] dll_next
- [ ] dll_prev
