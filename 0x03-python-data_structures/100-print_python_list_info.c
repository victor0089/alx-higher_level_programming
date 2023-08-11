#include <Python.h>
#include <stdio.h>

/**
 * print_python_list_info - Print basic information
 * about Python lists.
 * @p: Pointer to Python object.
 * Return: void.
 */
void print_python_list_info(PyObject *p)
{
	Py_ssize_t list_size, i;
	PyListObject *list;

	list = (PyListObject *) p;
	list_size = PyList_Size(p);

	printf("[*] Size of the Python List = %ld\n", list_size);
	printf("[*] Allocated = %ld\n", list->allocated);

	for (i = 0; i < list_size; i++)
	{
		printf("Element %ld: ", i);
		printf("%s\n", Py_TYPE(PyList_GetItem(p, i))->tp_name);
	}
}
