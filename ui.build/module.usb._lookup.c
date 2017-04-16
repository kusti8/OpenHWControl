/* Generated code for Python source for module 'usb._lookup'
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

/* The _module_usb$_lookup is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_usb$_lookup;
PyDictObject *moduledict_usb$_lookup;

/* The module constants used, if any. */
static PyObject *const_str_digest_802325b00ad70bfe515244684031e0a1;
static PyObject *const_str_digest_581f39aaf6edda862d0e79266f1bca76;
static PyObject *const_str_digest_0895b5e7a67abd4d815e7156ee3957e5;
extern PyObject *const_str_plain___package__;
static PyObject *const_str_plain_MAX_POWER_UNITS_USB_SUPERSPEED;
static PyObject *const_str_digest_30dd0b8b9e5b61608f7de66d3654e047;
static PyObject *const_dict_b7f59510e50401df37aa8f26fd48c7c9;
extern PyObject *const_int_pos_220;
extern PyObject *const_int_pos_1;
extern PyObject *const_int_pos_9;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_device_classes;
extern PyObject *const_str_plain___cached__;
static PyObject *const_int_pos_239;
extern PyObject *const_int_0;
extern PyObject *const_int_pos_15;
extern PyObject *const_int_pos_3;
static PyObject *const_str_plain_Miscellaneous;
extern PyObject *const_int_pos_255;
extern PyObject *const_int_pos_8;
static PyObject *const_str_plain_Isochronous;
static PyObject *const_dict_099a62ca3e91aadb5a93e4c085f03d50;
extern PyObject *const_str_plain_MAX_POWER_UNITS_USB2p0;
extern PyObject *const_str_plain_usb;
static PyObject *const_dict_c9bb6569b075cccef66448c818e8ac01;
static PyObject *const_str_digest_6e0d401b6959acb913dd4b55010bb8de;
static PyObject *const_str_plain_Interrupt;
extern PyObject *const_str_digest_7b47c0b3c37c1817c3f2b3852be9f61e;
static PyObject *const_str_digest_8df552f723614cbd238dee2b55940446;
extern PyObject *const_int_pos_2;
static PyObject *const_str_plain_Bulk;
extern PyObject *const_str_plain___loader__;
static PyObject *const_str_plain_Hub;
static PyObject *const_int_pos_224;
extern PyObject *const_str_plain___annotations__;
extern PyObject *const_str_plain_ep_attributes;
static PyObject *const_str_plain_Control;
extern PyObject *const_str_plain_descriptors;
static PyObject *const_str_digest_26190a5d26813a105aefc95f41d50360;
extern PyObject *const_str_plain___doc__;
static PyObject *const_dict_fac2da3f3eace47b823a59ea891818d6;
static PyObject *const_str_digest_c6811c0f3c98b1871e7d9df3bdac70c4;
extern PyObject *const_str_plain_interface_classes;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_802325b00ad70bfe515244684031e0a1 = UNSTREAM_STRING( &constant_bin[ 72385 ], 22, 0 );
    const_str_digest_581f39aaf6edda862d0e79266f1bca76 = UNSTREAM_STRING( &constant_bin[ 72407 ], 15, 0 );
    const_str_digest_0895b5e7a67abd4d815e7156ee3957e5 = UNSTREAM_STRING( &constant_bin[ 72422 ], 47, 0 );
    const_str_plain_MAX_POWER_UNITS_USB_SUPERSPEED = UNSTREAM_STRING( &constant_bin[ 72469 ], 30, 1 );
    const_str_digest_30dd0b8b9e5b61608f7de66d3654e047 = UNSTREAM_STRING( &constant_bin[ 72499 ], 26, 0 );
    const_dict_b7f59510e50401df37aa8f26fd48c7c9 = _PyDict_NewPresized( 8 );
    PyDict_SetItem( const_dict_b7f59510e50401df37aa8f26fd48c7c9, const_int_0, const_str_digest_802325b00ad70bfe515244684031e0a1 );
    const_str_digest_26190a5d26813a105aefc95f41d50360 = UNSTREAM_STRING( &constant_bin[ 72525 ], 21, 0 );
    PyDict_SetItem( const_dict_b7f59510e50401df37aa8f26fd48c7c9, const_int_pos_2, const_str_digest_26190a5d26813a105aefc95f41d50360 );
    const_str_plain_Hub = UNSTREAM_STRING( &constant_bin[ 37554 ], 3, 1 );
    PyDict_SetItem( const_dict_b7f59510e50401df37aa8f26fd48c7c9, const_int_pos_9, const_str_plain_Hub );
    PyDict_SetItem( const_dict_b7f59510e50401df37aa8f26fd48c7c9, const_int_pos_15, const_str_digest_30dd0b8b9e5b61608f7de66d3654e047 );
    const_str_digest_6e0d401b6959acb913dd4b55010bb8de = UNSTREAM_STRING( &constant_bin[ 72546 ], 17, 0 );
    PyDict_SetItem( const_dict_b7f59510e50401df37aa8f26fd48c7c9, const_int_pos_220, const_str_digest_6e0d401b6959acb913dd4b55010bb8de );
    const_int_pos_224 = PyLong_FromUnsignedLong( 224ul );
    const_str_digest_8df552f723614cbd238dee2b55940446 = UNSTREAM_STRING( &constant_bin[ 72563 ], 19, 0 );
    PyDict_SetItem( const_dict_b7f59510e50401df37aa8f26fd48c7c9, const_int_pos_224, const_str_digest_8df552f723614cbd238dee2b55940446 );
    const_int_pos_239 = PyLong_FromUnsignedLong( 239ul );
    const_str_plain_Miscellaneous = UNSTREAM_STRING( &constant_bin[ 72582 ], 13, 1 );
    PyDict_SetItem( const_dict_b7f59510e50401df37aa8f26fd48c7c9, const_int_pos_239, const_str_plain_Miscellaneous );
    PyDict_SetItem( const_dict_b7f59510e50401df37aa8f26fd48c7c9, const_int_pos_255, const_str_digest_581f39aaf6edda862d0e79266f1bca76 );
    assert( PyDict_Size( const_dict_b7f59510e50401df37aa8f26fd48c7c9 ) == 8 );
    const_str_plain_Isochronous = UNSTREAM_STRING( &constant_bin[ 72595 ], 11, 1 );
    const_dict_099a62ca3e91aadb5a93e4c085f03d50 = _PyDict_NewPresized( 4 );
    const_str_plain_Control = UNSTREAM_STRING( &constant_bin[ 14224 ], 7, 1 );
    PyDict_SetItem( const_dict_099a62ca3e91aadb5a93e4c085f03d50, const_int_0, const_str_plain_Control );
    PyDict_SetItem( const_dict_099a62ca3e91aadb5a93e4c085f03d50, const_int_pos_1, const_str_plain_Isochronous );
    const_str_plain_Bulk = UNSTREAM_STRING( &constant_bin[ 72606 ], 4, 1 );
    PyDict_SetItem( const_dict_099a62ca3e91aadb5a93e4c085f03d50, const_int_pos_2, const_str_plain_Bulk );
    const_str_plain_Interrupt = UNSTREAM_STRING( &constant_bin[ 72610 ], 9, 1 );
    PyDict_SetItem( const_dict_099a62ca3e91aadb5a93e4c085f03d50, const_int_pos_3, const_str_plain_Interrupt );
    assert( PyDict_Size( const_dict_099a62ca3e91aadb5a93e4c085f03d50 ) == 4 );
    const_dict_c9bb6569b075cccef66448c818e8ac01 = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 72619 ], 364 );
    const_dict_fac2da3f3eace47b823a59ea891818d6 = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 72983 ], 386 );
    const_str_digest_c6811c0f3c98b1871e7d9df3bdac70c4 = UNSTREAM_STRING( &constant_bin[ 73369 ], 37, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_usb$_lookup( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.


static void createModuleCodeObjects(void)
{

}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_usb$_lookup =
{
    PyModuleDef_HEAD_INIT,
    "usb._lookup",   /* m_name */
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

MOD_INIT_DECL( usb$_lookup )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_usb$_lookup );
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
    puts("usb._lookup: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("usb._lookup: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initusb$_lookup" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_usb$_lookup = Py_InitModule4(
        "usb._lookup",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_usb$_lookup = PyModule_Create( &mdef_usb$_lookup );
#endif

    moduledict_usb$_lookup = (PyDictObject *)((PyModuleObject *)module_usb$_lookup)->md_dict;

    CHECK_OBJECT( module_usb$_lookup );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_7b47c0b3c37c1817c3f2b3852be9f61e, module_usb$_lookup );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_usb$_lookup );

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

    // Module code.
    tmp_assign_source_1 = const_str_digest_c6811c0f3c98b1871e7d9df3bdac70c4;
    UPDATE_STRING_DICT0( moduledict_usb$_lookup, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_0895b5e7a67abd4d815e7156ee3957e5;
    UPDATE_STRING_DICT0( moduledict_usb$_lookup, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_usb$_lookup, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_plain_usb;
    UPDATE_STRING_DICT0( moduledict_usb$_lookup, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    tmp_assign_source_5 = PyDict_New();
    UPDATE_STRING_DICT1( moduledict_usb$_lookup, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_5 );
    tmp_assign_source_6 = PyDict_Copy( const_dict_fac2da3f3eace47b823a59ea891818d6 );
    UPDATE_STRING_DICT1( moduledict_usb$_lookup, (Nuitka_StringObject *)const_str_plain_descriptors, tmp_assign_source_6 );
    tmp_assign_source_7 = PyDict_Copy( const_dict_b7f59510e50401df37aa8f26fd48c7c9 );
    UPDATE_STRING_DICT1( moduledict_usb$_lookup, (Nuitka_StringObject *)const_str_plain_device_classes, tmp_assign_source_7 );
    tmp_assign_source_8 = PyDict_Copy( const_dict_c9bb6569b075cccef66448c818e8ac01 );
    UPDATE_STRING_DICT1( moduledict_usb$_lookup, (Nuitka_StringObject *)const_str_plain_interface_classes, tmp_assign_source_8 );
    tmp_assign_source_9 = PyDict_Copy( const_dict_099a62ca3e91aadb5a93e4c085f03d50 );
    UPDATE_STRING_DICT1( moduledict_usb$_lookup, (Nuitka_StringObject *)const_str_plain_ep_attributes, tmp_assign_source_9 );
    tmp_assign_source_10 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_usb$_lookup, (Nuitka_StringObject *)const_str_plain_MAX_POWER_UNITS_USB2p0, tmp_assign_source_10 );
    tmp_assign_source_11 = const_int_pos_8;
    UPDATE_STRING_DICT0( moduledict_usb$_lookup, (Nuitka_StringObject *)const_str_plain_MAX_POWER_UNITS_USB_SUPERSPEED, tmp_assign_source_11 );

    return MOD_RETURN_VALUE( module_usb$_lookup );
}
