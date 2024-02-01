#ifndef PYTHON_H
#define PYTHON_H

#include <stdlib.h>

/**
 * Function declarations
 *
 *
 */

typedef struct print_python
{
    int n;
    struct print_python *p;
} print_python;

void print_python_list(PyObject *p);
void print_python_bytes(PyObject *p);

#endif /* PYTHON_H*/


