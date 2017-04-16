/* Generated code for Python source for module 'usb'
 * created by Nuitka version 0.5.25
 *
 * This code is in part copyright 2017 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The _module_usb is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_usb;
PyDictObject *moduledict_usb;

/* The module constants used, if any. */
static PyObject *const_str_digest_67933d32e09e99802ff129a0d6f713ae;
static PyObject *const_str_plain_setLevel;
extern PyObject *const_str_plain_legacy;
extern PyObject *const_str_plain_metaclass;
static PyObject *const_str_digest_15491c0e6fb4a0277d4196dbf5dd1c9e;
extern PyObject *const_str_plain_getLogger;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_CRITICAL;
extern PyObject *const_str_plain_libloader;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_str_plain_Formatter;
static PyObject *const_tuple_str_plain_PYUSB_LOG_FILENAME_tuple;
static PyObject *const_str_plain_NullHandler;
static PyObject *const_str_plain_fmt;
static PyObject *const_str_plain_PYUSB_DEBUG;
extern PyObject *const_str_plain_enable_tracing;
extern PyObject *const_str_chr_42;
static PyObject *const_tuple_str_digest_a20532bb0fe072f224175b62b20de554_tuple;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain__debug;
static PyObject *const_str_plain_LEVELS;
extern PyObject *const_tuple_true_tuple;
static PyObject *const_str_digest_89f1cddd846502a8e86a245d082fff79;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_WARNING;
extern PyObject *const_str_plain___package__;
static PyObject *const_str_digest_64deb1d8bcb4e7a3b00bb45e20166aab;
extern PyObject *const_str_plain_control;
static PyObject *const_list_str_digest_89f1cddd846502a8e86a245d082fff79_list;
static PyObject *const_tuple_7831b667955f9f01dfb844a01514be02_tuple;
static PyObject *const_str_plain_addHandler;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_plain_Handler;
extern PyObject *const_str_plain_getenv;
static PyObject *const_str_plain_critical;
static PyObject *const_str_plain_StreamHandler;
extern PyObject *const_str_digest_1aee2a014f8416c1b3c39706f3f900c9;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_setFormatter;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_int_pos_10;
extern PyObject *const_str_plain_util;
extern PyObject *const_str_plain_error;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___version__;
extern PyObject *const_int_0;
static PyObject *const_str_plain_debug_level;
static PyObject *const_str_digest_a20532bb0fe072f224175b62b20de554;
static PyObject *const_str_plain_record;
extern PyObject *const_str_plain___author__;
static PyObject *const_str_digest_419c5230bbe308cf5c003e0a9fe10287;
extern PyObject *const_str_plain_core;
static PyObject *const_str_plain_warning;
static PyObject *const_str_digest_3880ffc667f52a493cbf7f2d01bdb005;
extern PyObject *const_str_plain_type;
static PyObject *const_tuple_str_plain_self_str_plain_record_tuple;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_debug;
extern PyObject *const_str_plain_filename;
static PyObject *const_str_plain_emit;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_backend;
static PyObject *const_tuple_str_plain__debug_tuple;
static PyObject *const_tuple_str_plain_PYUSB_DEBUG_tuple;
static PyObject *const_tuple_str_plain_usb_tuple;
extern PyObject *const_str_plain_logger;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_str_plain_ERROR;
static PyObject *const_tuple_int_pos_1_int_0_int_0_tuple;
static PyObject *const_str_plain_level;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain_usb;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_DEBUG;
extern PyObject *const_str_plain_logging;
extern PyObject *const_str_plain_info;
static PyObject *const_str_plain_INFO;
static PyObject *const_str_plain_FileHandler;
static PyObject *const_list_5c62faef856761e390efda9debaf5526_list;
static PyObject *const_str_plain_PYUSB_LOG_FILENAME;
extern PyObject *const_str_plain___annotations__;
extern PyObject *const_str_plain_handler;
extern PyObject *const_str_digest_d2456b99ed9c7f9a3040f89cc25bca4a;
static PyObject *const_str_plain__setup_log;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_67933d32e09e99802ff129a0d6f713ae = UNSTREAM_STRING( &constant_bin[ 71188 ], 31, 0 );
    const_str_plain_setLevel = UNSTREAM_STRING( &constant_bin[ 71219 ], 8, 1 );
    const_str_digest_15491c0e6fb4a0277d4196dbf5dd1c9e = UNSTREAM_STRING( &constant_bin[ 71227 ], 8, 0 );
    const_str_plain_CRITICAL = UNSTREAM_STRING( &constant_bin[ 71235 ], 8, 1 );
    const_str_plain_Formatter = UNSTREAM_STRING( &constant_bin[ 71243 ], 9, 1 );
    const_tuple_str_plain_PYUSB_LOG_FILENAME_tuple = PyTuple_New( 1 );
    const_str_plain_PYUSB_LOG_FILENAME = UNSTREAM_STRING( &constant_bin[ 71252 ], 18, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PYUSB_LOG_FILENAME_tuple, 0, const_str_plain_PYUSB_LOG_FILENAME ); Py_INCREF( const_str_plain_PYUSB_LOG_FILENAME );
    const_str_plain_NullHandler = UNSTREAM_STRING( &constant_bin[ 71208 ], 11, 1 );
    const_str_plain_fmt = UNSTREAM_STRING( &constant_bin[ 71270 ], 3, 1 );
    const_str_plain_PYUSB_DEBUG = UNSTREAM_STRING( &constant_bin[ 71273 ], 11, 1 );
    const_tuple_str_digest_a20532bb0fe072f224175b62b20de554_tuple = PyTuple_New( 1 );
    const_str_digest_a20532bb0fe072f224175b62b20de554 = UNSTREAM_STRING( &constant_bin[ 71284 ], 46, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_a20532bb0fe072f224175b62b20de554_tuple, 0, const_str_digest_a20532bb0fe072f224175b62b20de554 ); Py_INCREF( const_str_digest_a20532bb0fe072f224175b62b20de554 );
    const_str_plain_LEVELS = UNSTREAM_STRING( &constant_bin[ 71330 ], 6, 1 );
    const_str_digest_89f1cddd846502a8e86a245d082fff79 = UNSTREAM_STRING( &constant_bin[ 71336 ], 36, 0 );
    const_str_plain_WARNING = UNSTREAM_STRING( &constant_bin[ 9149 ], 7, 1 );
    const_str_digest_64deb1d8bcb4e7a3b00bb45e20166aab = UNSTREAM_STRING( &constant_bin[ 71372 ], 469, 0 );
    const_list_str_digest_89f1cddd846502a8e86a245d082fff79_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_89f1cddd846502a8e86a245d082fff79_list, 0, const_str_digest_89f1cddd846502a8e86a245d082fff79 ); Py_INCREF( const_str_digest_89f1cddd846502a8e86a245d082fff79 );
    const_tuple_7831b667955f9f01dfb844a01514be02_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_7831b667955f9f01dfb844a01514be02_tuple, 0, const_str_plain__debug ); Py_INCREF( const_str_plain__debug );
    PyTuple_SET_ITEM( const_tuple_7831b667955f9f01dfb844a01514be02_tuple, 1, const_str_plain_logger ); Py_INCREF( const_str_plain_logger );
    const_str_plain_debug_level = UNSTREAM_STRING( &constant_bin[ 71841 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_7831b667955f9f01dfb844a01514be02_tuple, 2, const_str_plain_debug_level ); Py_INCREF( const_str_plain_debug_level );
    PyTuple_SET_ITEM( const_tuple_7831b667955f9f01dfb844a01514be02_tuple, 3, const_str_plain_filename ); Py_INCREF( const_str_plain_filename );
    PyTuple_SET_ITEM( const_tuple_7831b667955f9f01dfb844a01514be02_tuple, 4, const_str_plain_LEVELS ); Py_INCREF( const_str_plain_LEVELS );
    const_str_plain_level = UNSTREAM_STRING( &constant_bin[ 13410 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_7831b667955f9f01dfb844a01514be02_tuple, 5, const_str_plain_level ); Py_INCREF( const_str_plain_level );
    PyTuple_SET_ITEM( const_tuple_7831b667955f9f01dfb844a01514be02_tuple, 6, const_str_plain_handler ); Py_INCREF( const_str_plain_handler );
    PyTuple_SET_ITEM( const_tuple_7831b667955f9f01dfb844a01514be02_tuple, 7, const_str_plain_fmt ); Py_INCREF( const_str_plain_fmt );
    PyTuple_SET_ITEM( const_tuple_7831b667955f9f01dfb844a01514be02_tuple, 8, const_str_plain_NullHandler ); Py_INCREF( const_str_plain_NullHandler );
    const_str_plain_addHandler = UNSTREAM_STRING( &constant_bin[ 71852 ], 10, 1 );
    const_str_plain_Handler = UNSTREAM_STRING( &constant_bin[ 71212 ], 7, 1 );
    const_str_plain_critical = UNSTREAM_STRING( &constant_bin[ 71862 ], 8, 1 );
    const_str_plain_StreamHandler = UNSTREAM_STRING( &constant_bin[ 71870 ], 13, 1 );
    const_str_plain_setFormatter = UNSTREAM_STRING( &constant_bin[ 71883 ], 12, 1 );
    const_str_plain_record = UNSTREAM_STRING( &constant_bin[ 43849 ], 6, 1 );
    const_str_digest_419c5230bbe308cf5c003e0a9fe10287 = UNSTREAM_STRING( &constant_bin[ 71895 ], 48, 0 );
    const_str_plain_warning = UNSTREAM_STRING( &constant_bin[ 54918 ], 7, 1 );
    const_str_digest_3880ffc667f52a493cbf7f2d01bdb005 = UNSTREAM_STRING( &constant_bin[ 71943 ], 36, 0 );
    const_tuple_str_plain_self_str_plain_record_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_record_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_record_tuple, 1, const_str_plain_record ); Py_INCREF( const_str_plain_record );
    const_str_plain_emit = UNSTREAM_STRING( &constant_bin[ 71975 ], 4, 1 );
    const_tuple_str_plain__debug_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__debug_tuple, 0, const_str_plain__debug ); Py_INCREF( const_str_plain__debug );
    const_tuple_str_plain_PYUSB_DEBUG_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PYUSB_DEBUG_tuple, 0, const_str_plain_PYUSB_DEBUG ); Py_INCREF( const_str_plain_PYUSB_DEBUG );
    const_tuple_str_plain_usb_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_usb_tuple, 0, const_str_plain_usb ); Py_INCREF( const_str_plain_usb );
    const_str_plain_ERROR = UNSTREAM_STRING( &constant_bin[ 19818 ], 5, 1 );
    const_tuple_int_pos_1_int_0_int_0_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_int_pos_1_int_0_int_0_tuple, 0, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_1_int_0_int_0_tuple, 1, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_pos_1_int_0_int_0_tuple, 2, const_int_0 ); Py_INCREF( const_int_0 );
    const_str_plain_INFO = UNSTREAM_STRING( &constant_bin[ 68390 ], 4, 1 );
    const_str_plain_FileHandler = UNSTREAM_STRING( &constant_bin[ 71979 ], 11, 1 );
    const_list_5c62faef856761e390efda9debaf5526_list = PyList_New( 6 );
    PyList_SET_ITEM( const_list_5c62faef856761e390efda9debaf5526_list, 0, const_str_plain_legacy ); Py_INCREF( const_str_plain_legacy );
    PyList_SET_ITEM( const_list_5c62faef856761e390efda9debaf5526_list, 1, const_str_plain_control ); Py_INCREF( const_str_plain_control );
    PyList_SET_ITEM( const_list_5c62faef856761e390efda9debaf5526_list, 2, const_str_plain_core ); Py_INCREF( const_str_plain_core );
    PyList_SET_ITEM( const_list_5c62faef856761e390efda9debaf5526_list, 3, const_str_plain_backend ); Py_INCREF( const_str_plain_backend );
    PyList_SET_ITEM( const_list_5c62faef856761e390efda9debaf5526_list, 4, const_str_plain_util ); Py_INCREF( const_str_plain_util );
    PyList_SET_ITEM( const_list_5c62faef856761e390efda9debaf5526_list, 5, const_str_plain_libloader ); Py_INCREF( const_str_plain_libloader );
    const_str_plain__setup_log = UNSTREAM_STRING( &constant_bin[ 71188 ], 10, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_usb( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_b033ce4f36a869a89ee1058ee01d0ce8;
static PyCodeObject *codeobj_9a3ab83389f2cc5bf1684432c6766e85;
static PyCodeObject *codeobj_1953c069e4ec8cb4c7cac8c4856fa6b6;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_419c5230bbe308cf5c003e0a9fe10287;
    codeobj_b033ce4f36a869a89ee1058ee01d0ce8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__setup_log, 54, const_tuple_7831b667955f9f01dfb844a01514be02_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9a3ab83389f2cc5bf1684432c6766e85 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_emit, 82, const_tuple_str_plain_self_str_plain_record_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1953c069e4ec8cb4c7cac8c4856fa6b6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_usb, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_usb$$$function_1__setup_log$$$class_1_NullHandler( PyObject **python_pars, PyObject ** closure_usb$_$$function_1__setup_log_class_creation_1__bases, PyObject ** closure_usb$_$$function_1__setup_log_class_creation_1__class_decl_dict, PyObject ** closure_usb$_$$function_1__setup_log_class_creation_1__metaclass, PyObject ** closure_usb$_$$function_1__setup_log_class_creation_1__prepared );


static PyObject *MAKE_FUNCTION_usb$$$function_1__setup_log(  );


static PyObject *MAKE_FUNCTION_usb$$$function_1__setup_log$$$class_1_NullHandler$$$function_1_emit(  );


// The module function definitions.
static PyObject *impl_usb$$$function_1__setup_log( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var__debug = NULL;
    PyObject *var_logger = NULL;
    PyObject *var_debug_level = NULL;
    PyObject *var_filename = NULL;
    PyObject *var_LEVELS = NULL;
    PyObject *var_level = NULL;
    PyObject *var_handler = NULL;
    PyObject *var_fmt = NULL;
    PyObject *var_NullHandler = NULL;
    PyObject *tmp_usb$_$$function_1__setup_log_class_creation_1__bases = NULL;
    PyObject *tmp_usb$_$$function_1__setup_log_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_usb$_$$function_1__setup_log_class_creation_1__metaclass = NULL;
    PyObject *tmp_usb$_$$function_1__setup_log_class_creation_1__prepared = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_bases_name_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *tmp_frame_locals;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_name_from_1;
    bool tmp_isnot_1;
    PyObject *tmp_key_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_metaclass_name_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_type_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b033ce4f36a869a89ee1058ee01d0ce8, module_usb );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_usb)->md_dict;
    frame_function->f_lineno = 55;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_usb, tmp_import_globals_1, Py_None, const_tuple_str_plain__debug_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain__debug );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto frame_exception_exit_1;
    }
    assert( var__debug == NULL );
    var__debug = tmp_assign_source_1;

    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_usb, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 56;
    tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_getLogger, &PyTuple_GET_ITEM( const_tuple_str_plain_usb_tuple, 0 ) );

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        goto frame_exception_exit_1;
    }
    assert( var_logger == NULL );
    var_logger = tmp_assign_source_2;

    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_usb, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 57;
    tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_getenv, &PyTuple_GET_ITEM( const_tuple_str_plain_PYUSB_DEBUG_tuple, 0 ) );

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        goto frame_exception_exit_1;
    }
    assert( var_debug_level == NULL );
    var_debug_level = tmp_assign_source_3;

    tmp_compare_left_1 = var_debug_level;

    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_instance_3 = var__debug;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_debug" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 60;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_enable_tracing, &PyTuple_GET_ITEM( const_tuple_true_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_4 = GET_STRING_DICT_VALUE( moduledict_usb, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_called_instance_4 == NULL ))
    {
        tmp_called_instance_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 61;
    tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_getenv, &PyTuple_GET_ITEM( const_tuple_str_plain_PYUSB_LOG_FILENAME_tuple, 0 ) );

    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        goto frame_exception_exit_1;
    }
    assert( var_filename == NULL );
    var_filename = tmp_assign_source_4;

    tmp_assign_source_5 = _PyDict_NewPresized( 5 );
    tmp_dict_key_1 = const_str_plain_debug;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_usb, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_DEBUG );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_5, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    tmp_dict_key_2 = const_str_plain_info;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_usb, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_INFO );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        exception_lineno = 64;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_5, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    tmp_dict_key_3 = const_str_plain_warning;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_usb, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_WARNING );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        exception_lineno = 65;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_5, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    tmp_dict_key_4 = const_str_plain_error;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_usb, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ERROR );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        exception_lineno = 66;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_5, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    tmp_dict_key_5 = const_str_plain_critical;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_usb, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_CRITICAL );
    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_5 );

        exception_lineno = 67;
        goto frame_exception_exit_1;
    }
    PyDict_SetItem( tmp_assign_source_5, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    assert( var_LEVELS == NULL );
    var_LEVELS = tmp_assign_source_5;

    tmp_source_name_6 = var_LEVELS;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_get );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_debug_level;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "debug_level" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_usb, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_CRITICAL );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 69;
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_10;
    tmp_args_element_name_2 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 69;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 69;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        goto frame_exception_exit_1;
    }
    assert( var_level == NULL );
    var_level = tmp_assign_source_6;

    tmp_source_name_8 = var_logger;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "logger" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_setLevel );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_key_6 = const_str_plain_level;
    tmp_dict_value_6 = var_level;

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "level" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        goto frame_exception_exit_1;
    }

    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_6, tmp_dict_value_6 );
    frame_function->f_lineno = 70;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    // Tried code:
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_usb, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;
        goto try_except_handler_2;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_FileHandler );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        goto try_except_handler_2;
    }
    tmp_args_element_name_3 = var_filename;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "filename" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;
        goto try_except_handler_2;
    }

    frame_function->f_lineno = 73;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        goto try_except_handler_2;
    }
    assert( var_handler == NULL );
    var_handler = tmp_assign_source_7;

    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != -1 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_function, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_called_instance_5 = GET_STRING_DICT_VALUE( moduledict_usb, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_called_instance_5 == NULL ))
    {
        tmp_called_instance_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_called_instance_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        goto try_except_handler_3;
    }

    frame_function->f_lineno = 75;
    tmp_assign_source_8 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_StreamHandler );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        goto try_except_handler_3;
    }
    assert( var_handler == NULL );
    var_handler = tmp_assign_source_8;

    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( usb$$$function_1__setup_log );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_called_instance_6 = GET_STRING_DICT_VALUE( moduledict_usb, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_called_instance_6 == NULL ))
    {
        tmp_called_instance_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_called_instance_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 77;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 77;
    tmp_assign_source_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_Formatter, &PyTuple_GET_ITEM( const_tuple_str_digest_a20532bb0fe072f224175b62b20de554_tuple, 0 ) );

    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        goto frame_exception_exit_1;
    }
    assert( var_fmt == NULL );
    var_fmt = tmp_assign_source_9;

    tmp_source_name_10 = var_handler;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "handler" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_setFormatter );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_fmt;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fmt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 78;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_11 = var_logger;

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "logger" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_addHandler );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = var_handler;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "handler" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 79;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_1;
    branch_no_1:;
    // Tried code:
    tmp_assign_source_10 = PyTuple_New( 1 );
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_usb, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_assign_source_10 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 81;
        goto try_except_handler_4;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_Handler );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_10 );

        exception_lineno = 81;
        goto try_except_handler_4;
    }
    PyTuple_SET_ITEM( tmp_assign_source_10, 0, tmp_tuple_element_1 );
    assert( tmp_usb$_$$function_1__setup_log_class_creation_1__bases == NULL );
    tmp_usb$_$$function_1__setup_log_class_creation_1__bases = tmp_assign_source_10;

    tmp_assign_source_11 = PyDict_New();
    assert( tmp_usb$_$$function_1__setup_log_class_creation_1__class_decl_dict == NULL );
    tmp_usb$_$$function_1__setup_log_class_creation_1__class_decl_dict = tmp_assign_source_11;

    tmp_compare_left_2 = const_str_plain_metaclass;
    tmp_compare_right_2 = tmp_usb$_$$function_1__setup_log_class_creation_1__class_decl_dict;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_dict_name_1 = tmp_usb$_$$function_1__setup_log_class_creation_1__class_decl_dict;

    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_metaclass_name_1 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto try_except_handler_4;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_1 = tmp_usb$_$$function_1__setup_log_class_creation_1__bases;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto try_except_handler_4;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_subscribed_name_1 = tmp_usb$_$$function_1__setup_log_class_creation_1__bases;

    tmp_subscript_name_1 = const_int_0;
    tmp_type_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto try_except_handler_4;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto try_except_handler_4;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_1 != NULL );
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_usb$_$$function_1__setup_log_class_creation_1__bases;

    tmp_assign_source_12 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 81;
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_usb$_$$function_1__setup_log_class_creation_1__metaclass == NULL );
    tmp_usb$_$$function_1__setup_log_class_creation_1__metaclass = tmp_assign_source_12;

    tmp_compare_left_3 = const_str_plain_metaclass;
    tmp_compare_right_3 = tmp_usb$_$$function_1__setup_log_class_creation_1__class_decl_dict;

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    assert( !(tmp_cmp_In_2 == -1) );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_dictdel_dict = tmp_usb$_$$function_1__setup_log_class_creation_1__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto try_except_handler_4;
    }
    branch_no_2:;
    tmp_hasattr_source_1 = tmp_usb$_$$function_1__setup_log_class_creation_1__metaclass;

    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto try_except_handler_4;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_source_name_13 = tmp_usb$_$$function_1__setup_log_class_creation_1__metaclass;

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain___prepare__ );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto try_except_handler_4;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_NullHandler;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_usb$_$$function_1__setup_log_class_creation_1__bases;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_2 = tmp_usb$_$$function_1__setup_log_class_creation_1__class_decl_dict;

    frame_function->f_lineno = 81;
    tmp_assign_source_13 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_1, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto try_except_handler_4;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_13 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_usb$_$$function_1__setup_log_class_creation_1__prepared == NULL );
    tmp_usb$_$$function_1__setup_log_class_creation_1__prepared = tmp_assign_source_13;

    tmp_assign_source_14 = impl_usb$$$function_1__setup_log$$$class_1_NullHandler( NULL, &tmp_usb$_$$function_1__setup_log_class_creation_1__bases, &tmp_usb$_$$function_1__setup_log_class_creation_1__class_decl_dict, &tmp_usb$_$$function_1__setup_log_class_creation_1__metaclass, &tmp_usb$_$$function_1__setup_log_class_creation_1__prepared );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto try_except_handler_4;
    }
    assert( var_NullHandler == NULL );
    var_NullHandler = tmp_assign_source_14;

    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_usb$_$$function_1__setup_log_class_creation_1__bases );
    tmp_usb$_$$function_1__setup_log_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_usb$_$$function_1__setup_log_class_creation_1__class_decl_dict );
    tmp_usb$_$$function_1__setup_log_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_usb$_$$function_1__setup_log_class_creation_1__metaclass );
    tmp_usb$_$$function_1__setup_log_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_usb$_$$function_1__setup_log_class_creation_1__prepared );
    tmp_usb$_$$function_1__setup_log_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_usb$_$$function_1__setup_log_class_creation_1__bases );
    tmp_usb$_$$function_1__setup_log_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_usb$_$$function_1__setup_log_class_creation_1__class_decl_dict );
    tmp_usb$_$$function_1__setup_log_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_usb$_$$function_1__setup_log_class_creation_1__metaclass );
    tmp_usb$_$$function_1__setup_log_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_usb$_$$function_1__setup_log_class_creation_1__prepared );
    tmp_usb$_$$function_1__setup_log_class_creation_1__prepared = NULL;

    tmp_source_name_14 = var_logger;

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "logger" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_setLevel );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        goto frame_exception_exit_1;
    }
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_usb, (Nuitka_StringObject *)const_str_plain_logging );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
    }

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "logging" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        goto frame_exception_exit_1;
    }

    tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_CRITICAL );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 88;
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_int_pos_10;
    tmp_args_element_name_6 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 88;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 88;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_16 = var_logger;

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "logger" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        goto frame_exception_exit_1;
    }

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_addHandler );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        goto frame_exception_exit_1;
    }
    tmp_called_name_9 = var_NullHandler;

    if ( tmp_called_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "NullHandler" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 90;
    tmp_args_element_name_7 = CALL_FUNCTION_NO_ARGS( tmp_called_name_9 );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 90;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 90;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    {
        bool needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_lineno != -1 )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( var__debug )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__debug,
                    var__debug
                );

                assert( res == 0 );
            }

            if ( var_logger )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_logger,
                    var_logger
                );

                assert( res == 0 );
            }

            if ( var_debug_level )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_debug_level,
                    var_debug_level
                );

                assert( res == 0 );
            }

            if ( var_filename )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_filename,
                    var_filename
                );

                assert( res == 0 );
            }

            if ( var_LEVELS )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_LEVELS,
                    var_LEVELS
                );

                assert( res == 0 );
            }

            if ( var_level )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_level,
                    var_level
                );

                assert( res == 0 );
            }

            if ( var_handler )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_handler,
                    var_handler
                );

                assert( res == 0 );
            }

            if ( var_fmt )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fmt,
                    var_fmt
                );

                assert( res == 0 );
            }

            if ( var_NullHandler )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_NullHandler,
                    var_NullHandler
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( usb$$$function_1__setup_log );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var__debug );
    var__debug = NULL;

    Py_XDECREF( var_logger );
    var_logger = NULL;

    Py_XDECREF( var_debug_level );
    var_debug_level = NULL;

    Py_XDECREF( var_filename );
    var_filename = NULL;

    Py_XDECREF( var_LEVELS );
    var_LEVELS = NULL;

    Py_XDECREF( var_level );
    var_level = NULL;

    Py_XDECREF( var_handler );
    var_handler = NULL;

    Py_XDECREF( var_fmt );
    var_fmt = NULL;

    Py_XDECREF( var_NullHandler );
    var_NullHandler = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var__debug );
    var__debug = NULL;

    Py_XDECREF( var_logger );
    var_logger = NULL;

    Py_XDECREF( var_debug_level );
    var_debug_level = NULL;

    Py_XDECREF( var_filename );
    var_filename = NULL;

    Py_XDECREF( var_LEVELS );
    var_LEVELS = NULL;

    Py_XDECREF( var_level );
    var_level = NULL;

    Py_XDECREF( var_handler );
    var_handler = NULL;

    Py_XDECREF( var_fmt );
    var_fmt = NULL;

    Py_XDECREF( var_NullHandler );
    var_NullHandler = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( usb$$$function_1__setup_log );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_usb$$$function_1__setup_log$$$class_1_NullHandler( PyObject **python_pars, PyObject ** closure_usb$_$$function_1__setup_log_class_creation_1__bases, PyObject ** closure_usb$_$$function_1__setup_log_class_creation_1__class_decl_dict, PyObject ** closure_usb$_$$function_1__setup_log_class_creation_1__metaclass, PyObject ** closure_usb$_$$function_1__setup_log_class_creation_1__prepared )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *var___class__ = NULL;
    PyObject *var___module__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *var_emit = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = *closure_usb$_$$function_1__setup_log_class_creation_1__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_plain_usb;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_67933d32e09e99802ff129a0d6f713ae;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_usb$$$function_1__setup_log$$$class_1_NullHandler$$$function_1_emit(  );
    assert( var_emit == NULL );
    var_emit = tmp_assign_source_3;

    // Tried code:
    tmp_called_name_1 = *closure_usb$_$$function_1__setup_log_class_creation_1__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_NullHandler;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = *closure_usb$_$$function_1__setup_log_class_creation_1__bases;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_dict;
    Py_INCREF( locals_dict );
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___class__, var___class__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___module__, var___module__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___qualname__, var___qualname__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_emit, var_emit );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = *closure_usb$_$$function_1__setup_log_class_creation_1__class_decl_dict;

    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_4;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( usb$$$function_1__setup_log$$$class_1_NullHandler );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___class__ );
    Py_DECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var_emit );
    var_emit = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var_emit );
    var_emit = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( usb$$$function_1__setup_log$$$class_1_NullHandler );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_usb$$$function_1__setup_log$$$class_1_NullHandler$$$function_1_emit( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_record = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( usb$$$function_1__setup_log$$$class_1_NullHandler$$$function_1_emit );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_record );
    Py_DECREF( par_record );
    par_record = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_record );
    Py_DECREF( par_record );
    par_record = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( usb$$$function_1__setup_log$$$class_1_NullHandler$$$function_1_emit );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_usb$$$function_1__setup_log(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_usb$$$function_1__setup_log,
        const_str_plain__setup_log,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b033ce4f36a869a89ee1058ee01d0ce8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_usb,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_usb$$$function_1__setup_log$$$class_1_NullHandler$$$function_1_emit(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_usb$$$function_1__setup_log$$$class_1_NullHandler$$$function_1_emit,
        const_str_plain_emit,
#if PYTHON_VERSION >= 330
        const_str_digest_3880ffc667f52a493cbf7f2d01bdb005,
#endif
        codeobj_9a3ab83389f2cc5bf1684432c6766e85,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_usb,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_usb =
{
    PyModuleDef_HEAD_INIT,
    "usb",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

#if PYTHON_VERSION >= 300
extern PyObject *metapath_based_loader;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineType();
extern void _initCompiledCoroutineWrapperType();
#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( usb )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_usb );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();

#if PYTHON_VERSION >= 350
    _initCompiledCoroutineType();
    _initCompiledCoroutineWrapperType();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("usb: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("usb: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initusb" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_usb = Py_InitModule4(
        "usb",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_usb = PyModule_Create( &mdef_usb );
#endif

    moduledict_usb = (PyDictObject *)((PyModuleObject *)module_usb)->md_dict;

    CHECK_OBJECT( module_usb );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_usb, module_usb );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_usb );

    if ( PyDict_GetItem( module_dict, const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

#ifndef __NUITKA_NO_ASSERT__
        int res =
#endif
            PyDict_SetItem( module_dict, const_str_plain___builtins__, value );

        assert( res == 0 );
    }

#if PYTHON_VERSION >= 330
    PyDict_SetItem( module_dict, const_str_plain___loader__, metapath_based_loader );
#endif

    // Temp variables if any
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_called_name_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_left_name_1;
    bool tmp_result;
    PyObject *tmp_right_name_1;
    PyObject *tmp_star_imported_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_64deb1d8bcb4e7a3b00bb45e20166aab;
    UPDATE_STRING_DICT0( moduledict_usb, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_419c5230bbe308cf5c003e0a9fe10287;
    UPDATE_STRING_DICT0( moduledict_usb, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_89f1cddd846502a8e86a245d082fff79_list );
    UPDATE_STRING_DICT1( moduledict_usb, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_usb, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    tmp_assign_source_5 = const_str_plain_usb;
    UPDATE_STRING_DICT0( moduledict_usb, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_5 );
    tmp_assign_source_6 = PyDict_New();
    UPDATE_STRING_DICT1( moduledict_usb, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_6 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_1953c069e4ec8cb4c7cac8c4856fa6b6, module_usb );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_usb)->md_dict;
    frame_module->f_lineno = 43;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_logging, tmp_import_globals_1, Py_None, Py_None, const_int_0 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_usb, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_7 );
    tmp_import_globals_2 = ((PyModuleObject *)module_usb)->md_dict;
    frame_module->f_lineno = 44;
    tmp_assign_source_8 = IMPORT_MODULE( const_str_plain_os, tmp_import_globals_2, Py_None, Py_None, const_int_0 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_usb, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_8 );
    tmp_assign_source_9 = const_str_digest_1aee2a014f8416c1b3c39706f3f900c9;
    UPDATE_STRING_DICT0( moduledict_usb, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_9 );
    tmp_assign_source_10 = const_tuple_int_pos_1_int_0_int_0_tuple;
    UPDATE_STRING_DICT0( moduledict_usb, (Nuitka_StringObject *)const_str_plain_version_info, tmp_assign_source_10 );
    tmp_left_name_1 = const_str_digest_15491c0e6fb4a0277d4196dbf5dd1c9e;
    tmp_right_name_1 = GET_STRING_DICT_VALUE( moduledict_usb, (Nuitka_StringObject *)const_str_plain_version_info );

    if (unlikely( tmp_right_name_1 == NULL ))
    {
        tmp_right_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_version_info );
    }

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "version_info" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_11 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_usb, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_11 );
    tmp_assign_source_12 = LIST_COPY( const_list_5c62faef856761e390efda9debaf5526_list );
    UPDATE_STRING_DICT1( moduledict_usb, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_12 );
    tmp_assign_source_13 = MAKE_FUNCTION_usb$$$function_1__setup_log(  );
    UPDATE_STRING_DICT1( moduledict_usb, (Nuitka_StringObject *)const_str_plain__setup_log, tmp_assign_source_13 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_usb, (Nuitka_StringObject *)const_str_plain__setup_log );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__setup_log );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_setup_log" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 93;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 93;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_import_globals_3 = ((PyModuleObject *)module_usb)->md_dict;
    frame_module->f_lineno = 97;
    tmp_star_imported_1 = IMPORT_MODULE( const_str_digest_d2456b99ed9c7f9a3040f89cc25bca4a, tmp_import_globals_3, Py_None, const_tuple_str_chr_42_tuple, const_int_0 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_usb, true, tmp_star_imported_1 );
    Py_DECREF( tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        goto frame_exception_exit_1;
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif
    popFrameStack();

    assertFrameObject( frame_module );
    Py_DECREF( frame_module );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_module, exception_lineno );
    }
    else if ( exception_tb->tb_frame != frame_module )
    {
        PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_module, exception_lineno );
        traceback_new->tb_next = exception_tb;
        exception_tb = traceback_new;
    }

    // Put the previous frame back on top.
    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_module->f_executing -= 1;
#endif
    Py_DECREF( frame_module );

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_usb );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
