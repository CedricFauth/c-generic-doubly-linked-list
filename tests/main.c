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

void a_display(void *v) {
    int val = *(int *)v;
    printf("%d", val);
}

void a_sum(int index, void *curr, void *acc) {
    printf("%d ", index);
    *(int *)acc += *(int *)curr;
}

int main(int argc, char const *argv[]) {

    int arr[5] = {1,2,3,4,5};
    int s = 0;
    dll_t *list_a = dll_from_value_array(arr, 5, VALUE, sizeof(*arr));
    // [1]<=>[2]<=>[3]<=>[4]<=>[5]
    dll_foreach(list_a, a_sum, &s);
    printf("\nsum: %d\n", s);

    dll_display(list_a, a_display);
    dll_delete(list_a, NULL);

    /*
    dll_t *list = dll_new(VALUE, sizeof(tmp));
    //dll_t *list = dll_new(REFERENCE, 0);

    dll_display(list, test_display);

    tmp t0 = {123, 1.23};
    //tmp t1 = {11, 1.1};
    tmp t2 = {99, 9.9};

    dll_push_back(list, &t0);dll_display(list, test_display);
    //printf("%d\n", dll_length(list));

    dll_insert(list, -2, &t2);dll_display(list, test_display);

    tmp t;
    t.i = 0;
    t.d = 0.0;
    dll_push_front(list, &t);dll_display(list, test_display);

    t.i = 1;
    t.d = 1.11;
    dll_display(list, test_display);

    dll_reverse(list);
    dll_display(list, test_display);

    printf("%d\n", dll_size(list));

    dll_clear(list); dll_display(list, test_display);
    dll_push_front(list, &t);dll_display(list, test_display);
    dll_push_front(list, &t2);dll_display(list, test_display);


    dll_delete(list, NULL);
    */
}
