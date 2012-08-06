/*
 * Code from:
 * http://en.wikibooks.org/wiki/Python_Programming/Extending_with_C
 */
#include <Python.h>
 
int _fib(int n)
{
    if (n < 2)
        return n;
    else
        return _fib(n-1) + _fib(n-2);
}

double _sum(double nlist[], int size)
{
    double out = 0;
    int cnt;
    for (cnt = 0; cnt < size; cnt++)
    {
        out = out + nlist[cnt];
    }
    return out;
}

static PyObject* fib(PyObject* self, PyObject* args)
{
    int n;

    if (!PyArg_ParseTuple(args, "i", &n))
        return NULL;

    return Py_BuildValue("i", _fib(n));
}

static PyObject* sum(PyObject* self, PyObject* args)
{
    int size;
    char * tok;
    int cols;

    PyObject * listObj;
    PyObject * obj;

    if (! PyArg_ParseTuple( args, "O", &PyList_Type, &listObj,
            &cols, &tok )) return NULL;

    size = PyList_Size(listObj);
    double nlist [size];

    if (size < 0) return NULL; /* Not a list */

    int i;
    for (i=0; i<size; i++)
    {
        obj = PyList_GetItem(listObj, i);
        nlist[i] = PyInt_AS_LONG( obj );
    }

    return Py_BuildValue("d", _sum(nlist, size));

}

static PyMethodDef FibMethods[] = {
    {"fib", fib, METH_VARARGS, "Calculate the Fibonacci numbers."},
    {"sum", sum, METH_VARARGS, "Calculate the sum of the numbers."},
    {NULL, NULL, 0, NULL}
};

PyMODINIT_FUNC
initfib(void)
{
    (void) Py_InitModule("fib", FibMethods);
    //(void) Py_InitModule("sum", SumMethods);
}
