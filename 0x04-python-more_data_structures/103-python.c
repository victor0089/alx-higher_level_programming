#include <Python.h>
#include <stdio.h>

/**
 * print_python_list - Print basic information
 * about Python lists
 * @p: python list
 * Return: void
 */
void print_python_list(PyObject *p)
{
	PyListObject *list = (PyListObject *)p;
	Py_ssize_t i, size = PyList_Size(p);
	const char *type;

	printf("[*] Python list info\n");
	printf("[*] Size of the Python List = %zd\n", size);
	printf("[*] Allocated = %zd\n", list->allocated);

	for (i = 0; i < size; i++)
	{
		type = Py_TYPE(PyList_GetItem(p, i))->tp_name;
		printf("Element %zd: %s\n", i, type);
		if (strcmp(type, "bytes") == 0)
			print_python_bytes(PyList_GetItem(p, i));
	}
}

/**
 * print_python_bytes - Print basic information
 * about Python byte objects
 *
 * @p: python byte object
 *
 * Return: void
 */
void print_python_bytes(PyObject *p)
{
	PyBytesObject *bytes = (PyBytesObject *)p;
	Py_ssize_t i, size = PyBytes_Size(p);

	printf("[.] bytes object info\n");
	printf("  size: %zd\n", size);
	printf("  trying string: %s\n", PyBytes_AsString(p));
	printf("  first %zd bytes: ", size < 10 ? size + 1 : 10);
	for (i = 0; i < size && i < 10; i++)
		printf("%02x%c", bytes->ob_sval[i], i == size - 1 || i == 9 ? '\n' : ' ');
	if (size >= 10)
		printf("  [...]\n");
}
