#include <stdio.h>
#include "dll.h"

// tests
void test_display(void *data) {
    printf("%d", (char)data);
}

int main(int argc, char const *argv[]) {
    dll_t *list = dll_new();

    dll_display(list, test_display);

    dll_push_back(list, (void *)123);dll_display(list, test_display);
    dll_insert(list, -1, (void*)11);dll_display(list, test_display);
    dll_insert(list, -2, (void *)99);dll_display(list, test_display);
    dll_push_back(list, (void *)0);dll_display(list, test_display);

    dll_delete(list, NULL);
}
