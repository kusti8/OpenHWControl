#ifndef __NUITKA_CALLS_H__
#define __NUITKA_CALLS_H__

extern PyObject *CALL_FUNCTION_WITH_ARGS1( PyObject *called, PyObject **args );
extern PyObject *CALL_FUNCTION_WITH_ARGS2( PyObject *called, PyObject **args );
extern PyObject *CALL_FUNCTION_WITH_ARGS3( PyObject *called, PyObject **args );
extern PyObject *CALL_FUNCTION_WITH_ARGS4( PyObject *called, PyObject **args );
extern PyObject *CALL_FUNCTION_WITH_ARGS5( PyObject *called, PyObject **args );
extern PyObject *CALL_FUNCTION_WITH_ARGS6( PyObject *called, PyObject **args );
extern PyObject *CALL_FUNCTION_WITH_ARGS7( PyObject *called, PyObject **args );
extern PyObject *CALL_FUNCTION_WITH_ARGS8( PyObject *called, PyObject **args );
extern PyObject *CALL_FUNCTION_WITH_ARGS9( PyObject *called, PyObject **args );
extern PyObject *CALL_METHOD_WITH_ARGS1( PyObject *source, PyObject *attr_name, PyObject **args );
extern PyObject *CALL_METHOD_WITH_ARGS2( PyObject *source, PyObject *attr_name, PyObject **args );
extern PyObject *CALL_METHOD_WITH_ARGS3( PyObject *source, PyObject *attr_name, PyObject **args );
extern PyObject *CALL_METHOD_WITH_ARGS4( PyObject *source, PyObject *attr_name, PyObject **args );
extern PyObject *CALL_METHOD_WITH_ARGS5( PyObject *source, PyObject *attr_name, PyObject **args );
extern PyObject *CALL_METHOD_WITH_ARGS6( PyObject *source, PyObject *attr_name, PyObject **args );
#endif
