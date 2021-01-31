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
- [ ] dll_remove (from both sides)
- [x] dll_push (from both sides)
- [ ] dll_pop (from both sides)
- [x] dll_length
- [ ] dll_peek (from both sides)
- [ ] dll_reverse
- [ ] dll_extend
- [ ] dll_clear
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
