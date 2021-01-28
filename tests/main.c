#include <stdio.h>
#include "dll.h"

int main(int argc, char const *argv[]) {
	// testing if it works
	dll_node_t note;
	dll_t d;
	d.first = &note;
	d.last = NULL;

	return 0;
}
