#include <stdio.h>
#include "dll.h"

typedef struct tmp {
    int i;
    double d;
} tmp;

// tests
void test_display(void *data) {
    tmp *t = data;
    printf("%d, %.2f", t->i, t->d);
}

int main(int argc, char const *argv[]) {

    dll_t *list = dll_new(VALUE, sizeof(tmp));
    //dll_t *list = dll_new(REFERENCE, 0);

    dll_display(list, test_display);

    tmp t0 = {123, 1.23};
    tmp t1 = {11, 1.1};
    tmp t2 = {99, 9.9};

    dll_push_back(list, &t0);dll_display(list, test_display);
    //printf("%d\n", dll_length(list));

    dll_insert(list, 0, &t1);dll_display(list, test_display);

    dll_insert(list, -1, &t2);dll_display(list, test_display);

    printf("delete ");
    tmp *d = &t2;
    printf("ret: %p\n", (void*)(d = dll_remove(list, 0, d)));
    test_display(d);
    printf("\n");
    dll_display(list, test_display);

    tmp t;
    t.i = 0;
    t.d = 0.0;
    dll_push_front(list, &t);dll_display(list, test_display);

    t.i = 1;
    t.d = 1.11;
    dll_display(list, test_display);

    printf("%d\n", dll_length(list));

    dll_delete(list, NULL);
}
