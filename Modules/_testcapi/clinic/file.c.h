/*[clinic input]
preserve
[clinic start generated code]*/

#include "pycore_modsupport.h"    // _PyArg_CheckPositional()

PyDoc_STRVAR(_testcapi_py_fopen__doc__,
"py_fopen($module, path, mode, /)\n"
"--\n"
"\n"
"Call Py_fopen(), fread(256) and Py_fclose(). Return read bytes.");

#define _TESTCAPI_PY_FOPEN_METHODDEF    \
    {"py_fopen", _PyCFunction_CAST(_testcapi_py_fopen), METH_FASTCALL, _testcapi_py_fopen__doc__},

static PyObject *
_testcapi_py_fopen_impl(PyObject *module, PyObject *path, const char *mode,
                        Py_ssize_t mode_length);

static PyObject *
_testcapi_py_fopen(PyObject *module, PyObject *const *args, Py_ssize_t nargs)
{
    PyObject *return_value = NULL;
    PyObject *path;
    const char *mode;
    Py_ssize_t mode_length;

    if (!_PyArg_ParseStack(args, nargs, "Oz#:py_fopen",
        &path, &mode, &mode_length)) {
        goto exit;
    }
    return_value = _testcapi_py_fopen_impl(module, path, mode, mode_length);

exit:
    return return_value;
}
/*[clinic end generated code: output=c4dc92400306c3eb input=a9049054013a1b77]*/