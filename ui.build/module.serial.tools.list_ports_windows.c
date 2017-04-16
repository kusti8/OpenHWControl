/* Generated code for Python source for module 'serial.tools.list_ports_windows'
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

/* The _module_serial$tools$list_ports_windows is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_serial$tools$list_ports_windows;
PyDictObject *moduledict_serial$tools$list_ports_windows;

/* The module constants used, if any. */
extern PyObject *const_str_plain_INVALID_HANDLE_VALUE;
static PyObject *const_str_digest_d7ba96010f1a397fbd068a8158f3fa12;
static PyObject *const_int_pos_122;
extern PyObject *const_int_pos_12;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_index;
extern PyObject *const_tuple_int_pos_5_tuple;
static PyObject *const_str_plain_PBYTE;
static PyObject *const_str_plain_FTDIBUS;
static PyObject *const_str_plain_setupapi;
static PyObject *const_str_plain_ULONG;
static PyObject *const_str_plain_c_wchar_p;
extern PyObject *const_dict_empty;
static PyObject *const_str_digest_4d3f565b0dfa5040aa4e9ae0d9bdba89;
static PyObject *const_str_plain_PSP_DEVINFO_DATA;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_PCTSTR;
extern PyObject *const_str_plain_group;
static PyObject *const_str_plain_Advapi32;
static PyObject *const_str_plain_LONG;
extern PyObject *const_int_pos_11;
extern PyObject *const_str_plain_BOOL;
extern PyObject *const_str_digest_5cf36b708703fd37649115cac3d2ec3c;
static PyObject *const_str_plain_Data3;
static PyObject *const_str_plain_guids_size;
static PyObject *const_str_plain_loc_path_str;
extern PyObject *const_tuple_str_plain_list_ports_common_tuple;
static PyObject *const_str_plain_LPBYTE;
extern PyObject *const_str_plain_m;
static PyObject *const_tuple_str_plain_HKEY_tuple;
extern PyObject *const_int_pos_250;
extern PyObject *const_str_plain_LoadLibrary;
extern PyObject *const_str_plain__fields_;
extern PyObject *const_str_plain_windll;
static PyObject *const_int_pos_131097;
static PyObject *const_str_plain_port_name_buffer;
extern PyObject *const_int_pos_5;
static PyObject *const_str_plain_cbSize;
extern PyObject *const_str_plain_func;
extern PyObject *const_str_plain_c_void_p;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_Ports;
extern PyObject *const_int_pos_16;
static PyObject *const_str_plain_PSP_DEVICE_INTERFACE_DETAIL_DATA;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_plain_serial;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_SPDRP_FRIENDLYNAME;
extern PyObject *const_slice_none_int_pos_2_none;
extern PyObject *const_str_plain_description;
static PyObject *const_str_plain_Data1;
extern PyObject *const_str_dot;
extern PyObject *const_str_plain_Structure;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_POINTER;
extern PyObject *const_str_plain_DWORD;
static PyObject *const_str_plain_LPCTSTR;
static PyObject *const_str_plain_PTSTR;
static PyObject *const_str_digest_7af243434176135357b668d213a63a9c;
extern PyObject *const_str_plain_WORD;
extern PyObject *const_str_plain_BYTE;
extern PyObject *const_str_plain_ULONG_PTR;
static PyObject *const_str_plain_PortName;
extern PyObject *const_str_plain_GetLastError;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_tuple_int_pos_250_tuple;
static PyObject *const_str_plain_Reserved;
extern PyObject *const_tuple_int_pos_4_tuple;
static PyObject *const_tuple_str_plain_ULONG_tuple;
extern PyObject *const_str_plain_LPDWORD;
extern PyObject *const_str_plain_arguments;
static PyObject *const_str_chr_45;
extern PyObject *const_str_plain_sizeof;
extern PyObject *const_str_plain_g;
extern PyObject *const_str_plain_value;
static PyObject *const_tuple_str_plain_USB_tuple;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_plain_advapi32;
extern PyObject *const_tuple_str_plain_BOOL_tuple;
static PyObject *const_str_plain_SetupDiGetDeviceRegistryPropertyW;
extern PyObject *const_str_plain_hwid;
static PyObject *const_str_plain_NULL;
extern PyObject *const_int_pos_8;
extern PyObject *const_str_plain_argtypes;
extern PyObject *const_str_plain_byref;
extern PyObject *const_tuple_str_dot_tuple;
static PyObject *const_tuple_str_chr_45_tuple;
static PyObject *const_str_plain_KEY_READ;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_digest_912bc8bb225b7547fc80e2202734bf7c;
extern PyObject *const_str_plain_append;
static PyObject *const_str_plain_SPDRP_HARDWAREID;
extern PyObject *const_tuple_str_plain_BYTE_tuple;
extern PyObject *const_str_plain_manufacturer;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_list_ports_common;
static PyObject *const_tuple_str_plain_FTDIBUS_tuple;
static PyObject *const_str_plain_SetupDiGetDeviceRegistryProperty;
extern PyObject *const_str_plain_restype;
extern PyObject *const_str_plain_ListPortInfo;
static PyObject *const_str_plain_szManufacturer;
static PyObject *const_str_plain_DICS_FLAG_GLOBAL;
static PyObject *const_str_plain_ClassGuid;
static PyObject *const_str_plain_SetupDiGetDeviceInstanceId;
static PyObject *const_str_plain_RegCloseKey;
extern PyObject *const_tuple_int_pos_3_tuple;
static PyObject *const_str_plain_HDEVINFO;
static PyObject *const_str_plain_SetupDiOpenDevRegKey;
extern PyObject *const_str_digest_4434d3fa3d749d79efdf09f3d091b7fa;
static PyObject *const_str_plain_REGSAM;
static PyObject *const_str_plain_finditer;
static PyObject *const_tuple_str_plain_LPT_tuple;
static PyObject *const_str_plain_SPDRP_MFG;
extern PyObject *const_str_plain_I;
extern PyObject *const_str_plain_ctypes;
extern PyObject *const_int_0;
static PyObject *const_str_plain_HKEY;
static PyObject *const_str_plain_devinfo;
extern PyObject *const_str_plain_comports;
static PyObject *const_str_plain_SetupDiClassGuidsFromNameW;
static PyObject *const_str_plain_SPDRP_LOCATION_PATHS;
static PyObject *const_str_plain_hkey;
static PyObject *const_tuple_str_plain_Advapi32_tuple;
static PyObject *const_tuple_int_pos_2_tuple;
static PyObject *const_tuple_str_plain_LONG_tuple;
static PyObject *const_str_plain_DevInst;
extern PyObject *const_str_plain_search;
static PyObject *const_str_plain_USB;
static PyObject *const_str_plain_list_ports_windows;
static PyObject *const_str_plain_g_hdi;
extern PyObject *const_str_plain_vid;
static PyObject *const_str_plain_GUIDs;
extern PyObject *const_str_plain_location;
static PyObject *const_str_plain_Data4;
static PyObject *const_str_plain_LPT;
extern PyObject *const_int_pos_4;
extern PyObject *const_str_plain_type;
static PyObject *const_str_plain_SetupDiDestroyDeviceInfoList;
static PyObject *const_str_plain_GUID;
static PyObject *const_str_digest_154809b1108d17aabb1baf5aef96965e;
extern PyObject *const_str_plain_create_unicode_buffer;
static PyObject *const_str_plain_SetupDiGetClassDevs;
static PyObject *const_str_digest_af155e22823b02ebfdc380a93ed7dc8f;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_SetupDiGetDeviceInstanceIdW;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_plain_SetupDiClassGuidsFromName;
static PyObject *const_str_plain_szFriendlyName;
static PyObject *const_str_plain_ValidHandle;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain___str__;
static PyObject *const_str_plain_SetupDiGetClassDevsW;
static PyObject *const_str_plain_ERROR_INSUFFICIENT_BUFFER;
static PyObject *const_tuple_str_plain_HWND_tuple;
extern PyObject *const_str_digest_1b1b6b23a4b523b9fca1e553f8d15eaf;
static PyObject *const_str_digest_768b2bc4cb25c1172f889d1b7de16791;
static PyObject *const_str_plain_PDWORD;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain_DIGCF_PRESENT;
static PyObject *const_str_plain_iterate_comports;
static PyObject *const_str_digest_116c3eaeea9958e59e9e6756df1ec9b6;
static PyObject *const_str_digest_d53afb1e07f3ee81f7c6c0213dcdd766;
static PyObject *const_str_plain_SP_DEVINFO_DATA;
static PyObject *const_str_plain_errcheck;
static PyObject *const_slice_int_pos_2_none_none;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_pid;
extern PyObject *const_str_plain_serial_number;
static PyObject *const_str_plain_SetupDiEnumDeviceInfo;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_self;
static PyObject *const_str_plain_HWND;
static PyObject *const_tuple_str_plain_value_str_plain_func_str_plain_arguments_tuple;
static PyObject *const_str_digest_ee3920580023d1af94223c48071ae060;
extern PyObject *const_str_digest_2a9b9e88acca55347e5ef4ae4b4dfd80;
extern PyObject *const_str_plain_usb_info;
static PyObject *const_str_plain_Data2;
extern PyObject *const_str_plain_WinError;
static PyObject *const_str_plain_DIREG_DEV;
static PyObject *const_str_plain_ACCESS_MASK;
static PyObject *const_str_plain_port_name_length;
static PyObject *const_tuple_str_plain_setupapi_tuple;
extern PyObject *const_int_pos_35;
extern PyObject *const_int_pos_2;
static PyObject *const_str_digest_86fa33899a79b80323a28f9628b50153;
extern PyObject *const_tuple_str_plain_DWORD_tuple;
extern PyObject *const_str_plain_format;
static PyObject *const_str_plain_szHardwareID_str;
extern PyObject *const_str_plain_info;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_empty;
static PyObject *const_str_plain_RegQueryValueExW;
static PyObject *const_str_plain_szHardwareID;
static PyObject *const_str_plain_RegQueryValueEx;
static PyObject *const_tuple_str_plain_ULONG_PTR_tuple;
static PyObject *const_str_plain_DIGCF_DEVICEINTERFACE;
extern PyObject *const_tuple_str_plain_WORD_tuple;
extern PyObject *const_str_plain___annotations__;
static PyObject *const_str_digest_7a4b7d4aa73ef8f7e432ed3df7a3e1e7;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_d7ba96010f1a397fbd068a8158f3fa12 = UNSTREAM_STRING( &constant_bin[ 68384 ], 23, 0 );
    const_int_pos_122 = PyLong_FromUnsignedLong( 122ul );
    const_str_plain_PBYTE = UNSTREAM_STRING( &constant_bin[ 68407 ], 5, 1 );
    const_str_plain_FTDIBUS = UNSTREAM_STRING( &constant_bin[ 68412 ], 7, 1 );
    const_str_plain_setupapi = UNSTREAM_STRING( &constant_bin[ 68419 ], 8, 1 );
    const_str_plain_ULONG = UNSTREAM_STRING( &constant_bin[ 68427 ], 5, 1 );
    const_str_plain_c_wchar_p = UNSTREAM_STRING( &constant_bin[ 68432 ], 9, 1 );
    const_str_digest_4d3f565b0dfa5040aa4e9ae0d9bdba89 = UNSTREAM_STRING( &constant_bin[ 68441 ], 46, 0 );
    const_str_plain_PSP_DEVINFO_DATA = UNSTREAM_STRING( &constant_bin[ 68487 ], 16, 1 );
    const_str_plain_PCTSTR = UNSTREAM_STRING( &constant_bin[ 68503 ], 6, 1 );
    const_str_plain_Advapi32 = UNSTREAM_STRING( &constant_bin[ 68509 ], 8, 1 );
    const_str_plain_LONG = UNSTREAM_STRING( &constant_bin[ 68428 ], 4, 1 );
    const_str_plain_Data3 = UNSTREAM_STRING( &constant_bin[ 68517 ], 5, 1 );
    const_str_plain_guids_size = UNSTREAM_STRING( &constant_bin[ 68522 ], 10, 1 );
    const_str_plain_loc_path_str = UNSTREAM_STRING( &constant_bin[ 68532 ], 12, 1 );
    const_str_plain_LPBYTE = UNSTREAM_STRING( &constant_bin[ 68544 ], 6, 1 );
    const_tuple_str_plain_HKEY_tuple = PyTuple_New( 1 );
    const_str_plain_HKEY = UNSTREAM_STRING( &constant_bin[ 11319 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HKEY_tuple, 0, const_str_plain_HKEY ); Py_INCREF( const_str_plain_HKEY );
    const_int_pos_131097 = PyLong_FromUnsignedLong( 131097ul );
    const_str_plain_port_name_buffer = UNSTREAM_STRING( &constant_bin[ 68550 ], 16, 1 );
    const_str_plain_cbSize = UNSTREAM_STRING( &constant_bin[ 68566 ], 6, 1 );
    const_str_plain_PSP_DEVICE_INTERFACE_DETAIL_DATA = UNSTREAM_STRING( &constant_bin[ 68572 ], 32, 1 );
    const_str_plain_SPDRP_FRIENDLYNAME = UNSTREAM_STRING( &constant_bin[ 68604 ], 18, 1 );
    const_str_plain_Data1 = UNSTREAM_STRING( &constant_bin[ 68622 ], 5, 1 );
    const_str_plain_LPCTSTR = UNSTREAM_STRING( &constant_bin[ 68627 ], 7, 1 );
    const_str_plain_PTSTR = UNSTREAM_STRING( &constant_bin[ 68634 ], 5, 1 );
    const_str_digest_7af243434176135357b668d213a63a9c = UNSTREAM_STRING( &constant_bin[ 68639 ], 67, 0 );
    const_str_plain_PortName = UNSTREAM_STRING( &constant_bin[ 68706 ], 8, 1 );
    const_tuple_int_pos_250_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_250_tuple, 0, const_int_pos_250 ); Py_INCREF( const_int_pos_250 );
    const_str_plain_Reserved = UNSTREAM_STRING( &constant_bin[ 68714 ], 8, 1 );
    const_tuple_str_plain_ULONG_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ULONG_tuple, 0, const_str_plain_ULONG ); Py_INCREF( const_str_plain_ULONG );
    const_str_chr_45 = UNSTREAM_STRING( &constant_bin[ 23 ], 1, 0 );
    const_tuple_str_plain_USB_tuple = PyTuple_New( 1 );
    const_str_plain_USB = UNSTREAM_STRING( &constant_bin[ 26498 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_USB_tuple, 0, const_str_plain_USB ); Py_INCREF( const_str_plain_USB );
    const_str_plain_advapi32 = UNSTREAM_STRING( &constant_bin[ 68722 ], 8, 1 );
    const_str_plain_SetupDiGetDeviceRegistryPropertyW = UNSTREAM_STRING( &constant_bin[ 68730 ], 33, 1 );
    const_str_plain_NULL = UNSTREAM_STRING( &constant_bin[ 68763 ], 4, 1 );
    const_tuple_str_chr_45_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_chr_45_tuple, 0, const_str_chr_45 ); Py_INCREF( const_str_chr_45 );
    const_str_plain_KEY_READ = UNSTREAM_STRING( &constant_bin[ 68767 ], 8, 1 );
    const_str_plain_SPDRP_HARDWAREID = UNSTREAM_STRING( &constant_bin[ 68775 ], 16, 1 );
    const_tuple_str_plain_FTDIBUS_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_FTDIBUS_tuple, 0, const_str_plain_FTDIBUS ); Py_INCREF( const_str_plain_FTDIBUS );
    const_str_plain_SetupDiGetDeviceRegistryProperty = UNSTREAM_STRING( &constant_bin[ 68730 ], 32, 1 );
    const_str_plain_szManufacturer = UNSTREAM_STRING( &constant_bin[ 68791 ], 14, 1 );
    const_str_plain_DICS_FLAG_GLOBAL = UNSTREAM_STRING( &constant_bin[ 68805 ], 16, 1 );
    const_str_plain_ClassGuid = UNSTREAM_STRING( &constant_bin[ 68821 ], 9, 1 );
    const_str_plain_SetupDiGetDeviceInstanceId = UNSTREAM_STRING( &constant_bin[ 68830 ], 26, 1 );
    const_str_plain_RegCloseKey = UNSTREAM_STRING( &constant_bin[ 68856 ], 11, 1 );
    const_str_plain_HDEVINFO = UNSTREAM_STRING( &constant_bin[ 68867 ], 8, 1 );
    const_str_plain_SetupDiOpenDevRegKey = UNSTREAM_STRING( &constant_bin[ 68875 ], 20, 1 );
    const_str_plain_REGSAM = UNSTREAM_STRING( &constant_bin[ 68895 ], 6, 1 );
    const_str_plain_finditer = UNSTREAM_STRING( &constant_bin[ 68901 ], 8, 1 );
    const_tuple_str_plain_LPT_tuple = PyTuple_New( 1 );
    const_str_plain_LPT = UNSTREAM_STRING( &constant_bin[ 68909 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_LPT_tuple, 0, const_str_plain_LPT ); Py_INCREF( const_str_plain_LPT );
    const_str_plain_SPDRP_MFG = UNSTREAM_STRING( &constant_bin[ 68912 ], 9, 1 );
    const_str_plain_devinfo = UNSTREAM_STRING( &constant_bin[ 68921 ], 7, 1 );
    const_str_plain_SetupDiClassGuidsFromNameW = UNSTREAM_STRING( &constant_bin[ 68928 ], 26, 1 );
    const_str_plain_SPDRP_LOCATION_PATHS = UNSTREAM_STRING( &constant_bin[ 68954 ], 20, 1 );
    const_str_plain_hkey = UNSTREAM_STRING( &constant_bin[ 68974 ], 4, 1 );
    const_tuple_str_plain_Advapi32_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Advapi32_tuple, 0, const_str_plain_Advapi32 ); Py_INCREF( const_str_plain_Advapi32 );
    const_tuple_int_pos_2_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_2_tuple, 0, const_int_pos_2 ); Py_INCREF( const_int_pos_2 );
    const_tuple_str_plain_LONG_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_LONG_tuple, 0, const_str_plain_LONG ); Py_INCREF( const_str_plain_LONG );
    const_str_plain_DevInst = UNSTREAM_STRING( &constant_bin[ 68978 ], 7, 1 );
    const_str_plain_list_ports_windows = UNSTREAM_STRING( &constant_bin[ 68685 ], 18, 1 );
    const_str_plain_g_hdi = UNSTREAM_STRING( &constant_bin[ 68985 ], 5, 1 );
    const_str_plain_GUIDs = UNSTREAM_STRING( &constant_bin[ 68990 ], 5, 1 );
    const_str_plain_Data4 = UNSTREAM_STRING( &constant_bin[ 68995 ], 5, 1 );
    const_str_plain_SetupDiDestroyDeviceInfoList = UNSTREAM_STRING( &constant_bin[ 69000 ], 28, 1 );
    const_str_plain_GUID = UNSTREAM_STRING( &constant_bin[ 68990 ], 4, 1 );
    const_str_digest_154809b1108d17aabb1baf5aef96965e = UNSTREAM_STRING( &constant_bin[ 69028 ], 48, 0 );
    const_str_plain_SetupDiGetClassDevs = UNSTREAM_STRING( &constant_bin[ 69076 ], 19, 1 );
    const_str_digest_af155e22823b02ebfdc380a93ed7dc8f = UNSTREAM_STRING( &constant_bin[ 69095 ], 30, 0 );
    const_str_plain_SetupDiGetDeviceInstanceIdW = UNSTREAM_STRING( &constant_bin[ 69125 ], 27, 1 );
    const_str_plain_SetupDiClassGuidsFromName = UNSTREAM_STRING( &constant_bin[ 68928 ], 25, 1 );
    const_str_plain_szFriendlyName = UNSTREAM_STRING( &constant_bin[ 69152 ], 14, 1 );
    const_str_plain_ValidHandle = UNSTREAM_STRING( &constant_bin[ 69166 ], 11, 1 );
    const_str_plain_SetupDiGetClassDevsW = UNSTREAM_STRING( &constant_bin[ 69177 ], 20, 1 );
    const_str_plain_ERROR_INSUFFICIENT_BUFFER = UNSTREAM_STRING( &constant_bin[ 69197 ], 25, 1 );
    const_tuple_str_plain_HWND_tuple = PyTuple_New( 1 );
    const_str_plain_HWND = UNSTREAM_STRING( &constant_bin[ 69222 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HWND_tuple, 0, const_str_plain_HWND ); Py_INCREF( const_str_plain_HWND );
    const_str_digest_768b2bc4cb25c1172f889d1b7de16791 = UNSTREAM_STRING( &constant_bin[ 69226 ], 4, 0 );
    const_str_plain_PDWORD = UNSTREAM_STRING( &constant_bin[ 69230 ], 6, 1 );
    const_str_plain_DIGCF_PRESENT = UNSTREAM_STRING( &constant_bin[ 69236 ], 13, 1 );
    const_str_plain_iterate_comports = UNSTREAM_STRING( &constant_bin[ 69249 ], 16, 1 );
    const_str_digest_116c3eaeea9958e59e9e6756df1ec9b6 = UNSTREAM_STRING( &constant_bin[ 69265 ], 12, 0 );
    const_str_digest_d53afb1e07f3ee81f7c6c0213dcdd766 = UNSTREAM_STRING( &constant_bin[ 69277 ], 60, 0 );
    const_str_plain_SP_DEVINFO_DATA = UNSTREAM_STRING( &constant_bin[ 68384 ], 15, 1 );
    const_str_plain_errcheck = UNSTREAM_STRING( &constant_bin[ 69337 ], 8, 1 );
    const_slice_int_pos_2_none_none = PySlice_New( const_int_pos_2, Py_None, Py_None );
    const_str_plain_SetupDiEnumDeviceInfo = UNSTREAM_STRING( &constant_bin[ 69345 ], 21, 1 );
    const_tuple_str_plain_value_str_plain_func_str_plain_arguments_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_value_str_plain_func_str_plain_arguments_tuple, 0, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_str_plain_value_str_plain_func_str_plain_arguments_tuple, 1, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_str_plain_value_str_plain_func_str_plain_arguments_tuple, 2, const_str_plain_arguments ); Py_INCREF( const_str_plain_arguments );
    const_str_digest_ee3920580023d1af94223c48071ae060 = UNSTREAM_STRING( &constant_bin[ 69366 ], 48, 0 );
    const_str_plain_Data2 = UNSTREAM_STRING( &constant_bin[ 69414 ], 5, 1 );
    const_str_plain_DIREG_DEV = UNSTREAM_STRING( &constant_bin[ 69419 ], 9, 1 );
    const_str_plain_ACCESS_MASK = UNSTREAM_STRING( &constant_bin[ 69428 ], 11, 1 );
    const_str_plain_port_name_length = UNSTREAM_STRING( &constant_bin[ 69439 ], 16, 1 );
    const_tuple_str_plain_setupapi_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_setupapi_tuple, 0, const_str_plain_setupapi ); Py_INCREF( const_str_plain_setupapi );
    const_str_digest_86fa33899a79b80323a28f9628b50153 = UNSTREAM_STRING( &constant_bin[ 69455 ], 23, 0 );
    const_str_plain_szHardwareID_str = UNSTREAM_STRING( &constant_bin[ 69478 ], 16, 1 );
    const_str_plain_RegQueryValueExW = UNSTREAM_STRING( &constant_bin[ 69494 ], 16, 1 );
    const_str_plain_szHardwareID = UNSTREAM_STRING( &constant_bin[ 69478 ], 12, 1 );
    const_str_plain_RegQueryValueEx = UNSTREAM_STRING( &constant_bin[ 69494 ], 15, 1 );
    const_tuple_str_plain_ULONG_PTR_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ULONG_PTR_tuple, 0, const_str_plain_ULONG_PTR ); Py_INCREF( const_str_plain_ULONG_PTR );
    const_str_plain_DIGCF_DEVICEINTERFACE = UNSTREAM_STRING( &constant_bin[ 69510 ], 21, 1 );
    const_str_digest_7a4b7d4aa73ef8f7e432ed3df7a3e1e7 = UNSTREAM_STRING( &constant_bin[ 69531 ], 30, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_serial$tools$list_ports_windows( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_85609830d33a4dd1406cc2548d47d9db;
static PyCodeObject *codeobj_0f4f36fb56eb1cdf22b7c62e42b1c696;
static PyCodeObject *codeobj_fe4cc9f7fff101a3c255e0acc8cc7931;
static PyCodeObject *codeobj_48da0a5213b974d93d7eda631d11b05d;
static PyCodeObject *codeobj_17656170c87e220dda6d76720d2e872e;
static PyCodeObject *codeobj_b326b7563e32b8984ed0e5711cac07d3;
static PyCodeObject *codeobj_d889dff9f2b7c5ff804bc6eacab6bdb9;
static PyCodeObject *codeobj_95e23fa2ed7347ae84322d88836fdfed;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_7af243434176135357b668d213a63a9c;
    codeobj_85609830d33a4dd1406cc2548d47d9db = MAKE_CODEOBJ( module_filename_obj, const_str_plain_GUID, 46, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_0f4f36fb56eb1cdf22b7c62e42b1c696 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SP_DEVINFO_DATA, 64, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_fe4cc9f7fff101a3c255e0acc8cc7931 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ValidHandle, 27, const_tuple_str_plain_value_str_plain_func_str_plain_arguments_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_48da0a5213b974d93d7eda631d11b05d = MAKE_CODEOBJ( module_filename_obj, const_str_plain___str__, 54, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_17656170c87e220dda6d76720d2e872e = MAKE_CODEOBJ( module_filename_obj, const_str_plain___str__, 72, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b326b7563e32b8984ed0e5711cac07d3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_comports, 290, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d889dff9f2b7c5ff804bc6eacab6bdb9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_iterate_comports, 133, const_tuple_empty, 0, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_95e23fa2ed7347ae84322d88836fdfed = MAKE_CODEOBJ( module_filename_obj, const_str_plain_list_ports_windows, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_serial$tools$list_ports_windows$$$class_1_GUID( PyObject **python_pars, PyObject ** closure_serial$tools$list_ports_windows_class_creation_1__bases, PyObject ** closure_serial$tools$list_ports_windows_class_creation_1__class_decl_dict, PyObject ** closure_serial$tools$list_ports_windows_class_creation_1__metaclass, PyObject ** closure_serial$tools$list_ports_windows_class_creation_1__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_serial$tools$list_ports_windows$$$class_1_GUID$$$function_1___str__$$$function_1_listcontraction( PyObject **python_pars );


NUITKA_LOCAL_MODULE PyObject *impl_serial$tools$list_ports_windows$$$class_1_GUID$$$function_1___str__$$$function_2_listcontraction( PyObject **python_pars );


NUITKA_LOCAL_MODULE PyObject *impl_serial$tools$list_ports_windows$$$class_2_SP_DEVINFO_DATA( PyObject **python_pars, PyObject ** closure_serial$tools$list_ports_windows_class_creation_2__bases, PyObject ** closure_serial$tools$list_ports_windows_class_creation_2__class_decl_dict, PyObject ** closure_serial$tools$list_ports_windows_class_creation_2__metaclass, PyObject ** closure_serial$tools$list_ports_windows_class_creation_2__prepared );


static void serial$tools$list_ports_windows$$$function_2_iterate_comports$$$genobj_1_iterate_comports_context( struct Nuitka_GeneratorObject *generator );


static PyObject *MAKE_FUNCTION_serial$tools$list_ports_windows$$$class_1_GUID$$$function_1___str__(  );


static PyObject *MAKE_FUNCTION_serial$tools$list_ports_windows$$$class_2_SP_DEVINFO_DATA$$$function_1___str__(  );


static PyObject *MAKE_FUNCTION_serial$tools$list_ports_windows$$$function_1_ValidHandle(  );


static PyObject *MAKE_FUNCTION_serial$tools$list_ports_windows$$$function_2_iterate_comports(  );


static PyObject *MAKE_FUNCTION_serial$tools$list_ports_windows$$$function_3_comports(  );


// The module function definitions.
static PyObject *impl_serial$tools$list_ports_windows$$$function_1_ValidHandle( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[ 0 ];
    PyObject *par_func = python_pars[ 1 ];
    PyObject *par_arguments = python_pars[ 2 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_fe4cc9f7fff101a3c255e0acc8cc7931, module_serial$tools$list_ports_windows );
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
    tmp_compare_left_1 = par_value;

    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 29;
    tmp_raise_type_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_WinError );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 29;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_return_value = par_value;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 30;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto try_return_handler_1;

    frame_exception_exit_1:;
#if 0
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
            if ( par_value )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_value,
                    par_value
                );

                assert( res == 0 );
            }

            if ( par_func )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_func,
                    par_func
                );

                assert( res == 0 );
            }

            if ( par_arguments )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_arguments,
                    par_arguments
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

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows$$$function_1_ValidHandle );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_value );
    par_value = NULL;

    Py_XDECREF( par_func );
    par_func = NULL;

    Py_XDECREF( par_arguments );
    par_arguments = NULL;

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

    Py_XDECREF( par_value );
    par_value = NULL;

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_arguments );
    Py_DECREF( par_arguments );
    par_arguments = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows$$$function_1_ValidHandle );
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


NUITKA_LOCAL_MODULE PyObject *impl_serial$tools$list_ports_windows$$$class_1_GUID( PyObject **python_pars, PyObject ** closure_serial$tools$list_ports_windows_class_creation_1__bases, PyObject ** closure_serial$tools$list_ports_windows_class_creation_1__class_decl_dict, PyObject ** closure_serial$tools$list_ports_windows_class_creation_1__metaclass, PyObject ** closure_serial$tools$list_ports_windows_class_creation_1__prepared )
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
    PyObject *var__fields_ = NULL;
    PyObject *var___str__ = NULL;
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
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_list_element_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = *closure_serial$tools$list_ports_windows_class_creation_1__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_1b1b6b23a4b523b9fca1e553f8d15eaf;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain_GUID;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_85609830d33a4dd1406cc2548d47d9db, module_serial$tools$list_ports_windows );
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
    tmp_assign_source_3 = PyList_New( 4 );
    tmp_list_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_Data1;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyDict_GetItem( locals_dict, const_str_plain_DWORD );

    if ( tmp_tuple_element_1 == NULL )
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_tuple_element_1 == NULL ))
        {
            tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_tuple_element_1 == NULL )
        {
            Py_DECREF( tmp_assign_source_3 );
            Py_DECREF( tmp_list_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 48;
            goto frame_exception_exit_1;
        }

    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_1 );
    PyList_SET_ITEM( tmp_assign_source_3, 0, tmp_list_element_1 );
    tmp_list_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_Data2;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = PyDict_GetItem( locals_dict, const_str_plain_WORD );

    if ( tmp_tuple_element_2 == NULL )
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_WORD );

        if (unlikely( tmp_tuple_element_2 == NULL ))
        {
            tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WORD );
        }

        if ( tmp_tuple_element_2 == NULL )
        {
            Py_DECREF( tmp_assign_source_3 );
            Py_DECREF( tmp_list_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 49;
            goto frame_exception_exit_1;
        }

    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_2 );
    PyList_SET_ITEM( tmp_assign_source_3, 1, tmp_list_element_1 );
    tmp_list_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_3 = const_str_plain_Data3;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = PyDict_GetItem( locals_dict, const_str_plain_WORD );

    if ( tmp_tuple_element_3 == NULL )
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_WORD );

        if (unlikely( tmp_tuple_element_3 == NULL ))
        {
            tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WORD );
        }

        if ( tmp_tuple_element_3 == NULL )
        {
            Py_DECREF( tmp_assign_source_3 );
            Py_DECREF( tmp_list_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 50;
            goto frame_exception_exit_1;
        }

    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_3 );
    PyList_SET_ITEM( tmp_assign_source_3, 2, tmp_list_element_1 );
    tmp_list_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_4 = const_str_plain_Data4;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_4 );
    tmp_left_name_1 = PyDict_GetItem( locals_dict, const_str_plain_BYTE );

    if ( tmp_left_name_1 == NULL )
    {
        tmp_left_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_BYTE );

        if (unlikely( tmp_left_name_1 == NULL ))
        {
            tmp_left_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BYTE );
        }

        if ( tmp_left_name_1 == NULL )
        {
            Py_DECREF( tmp_assign_source_3 );
            Py_DECREF( tmp_list_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BYTE" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 51;
            goto frame_exception_exit_1;
        }

    }

    tmp_right_name_1 = const_int_pos_8;
    tmp_tuple_element_4 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );
        Py_DECREF( tmp_list_element_1 );

        exception_lineno = 51;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_4 );
    PyList_SET_ITEM( tmp_assign_source_3, 3, tmp_list_element_1 );
    assert( var__fields_ == NULL );
    var__fields_ = tmp_assign_source_3;


#if 0
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
#if 0
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

            tmp_frame_locals = locals_dict;
            Py_INCREF( locals_dict );
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___class__, var___class__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 46;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___module__, var___module__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 46;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___qualname__, var___qualname__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 46;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain__fields_, var__fields_ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 46;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___str__, var___str__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 46;
                goto frame_exception_exit_1;
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

    tmp_assign_source_4 = MAKE_FUNCTION_serial$tools$list_ports_windows$$$class_1_GUID$$$function_1___str__(  );
    assert( var___str__ == NULL );
    var___str__ = tmp_assign_source_4;

    tmp_called_name_1 = *closure_serial$tools$list_ports_windows_class_creation_1__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_5 = const_str_plain_GUID;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = *closure_serial$tools$list_ports_windows_class_creation_1__bases;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_5 );
    tmp_tuple_element_5 = locals_dict;
    Py_INCREF( locals_dict );
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_5, const_str_plain___class__, var___class__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_5, const_str_plain___module__, var___module__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_5, const_str_plain___qualname__, var___qualname__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_5, const_str_plain__fields_, var__fields_ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_5, const_str_plain___str__, var___str__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_5 );
    tmp_kw_name_1 = *closure_serial$tools$list_ports_windows_class_creation_1__class_decl_dict;

    tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_5;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows$$$class_1_GUID );
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

    Py_XDECREF( var__fields_ );
    var__fields_ = NULL;

    Py_XDECREF( var___str__ );
    var___str__ = NULL;

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

    Py_XDECREF( var__fields_ );
    var__fields_ = NULL;

    Py_XDECREF( var___str__ );
    var___str__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows$$$class_1_GUID );
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


static PyObject *impl_serial$tools$list_ports_windows$$$class_1_GUID$$$function_1___str__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_48da0a5213b974d93d7eda631d11b05d, module_serial$tools$list_ports_windows );
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
    tmp_source_name_1 = const_str_digest_7a4b7d4aa73ef8f7e432ed3df7a3e1e7;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_format );
    assert( tmp_called_name_1 != NULL );
    tmp_source_name_2 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_Data1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 56;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_Data2 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 57;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_Data3 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 58;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = const_str_empty;
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_join );
    assert( tmp_called_name_2 != NULL );
    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 59;
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_Data4 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 59;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_slice_none_int_pos_2_none;
    tmp_iter_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 59;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 59;
        goto frame_exception_exit_1;
    }

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
        tmp_args_element_name_5 = impl_serial$tools$list_ports_windows$$$class_1_GUID$$$function_1___str__$$$function_1_listcontraction( dir_call_args );
    }
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 59;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 59;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_args_element_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 59;
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = const_str_empty;
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_join );
    assert( tmp_called_name_3 != NULL );
    tmp_source_name_8 = par_self;

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_Data4 );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_slice_int_pos_2_none_none;
    tmp_iter_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_2 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_dircall_arg1_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 60;
        goto frame_exception_exit_1;
    }

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
        tmp_args_element_name_7 = impl_serial$tools$list_ports_windows$$$class_1_GUID$$$function_1___str__$$$function_2_listcontraction( dir_call_args );
    }
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 60;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );

        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 55;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_6 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto try_return_handler_1;

    frame_exception_exit_1:;
#if 0
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
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

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows$$$class_1_GUID$$$function_1___str__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows$$$class_1_GUID$$$function_1___str__ );
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


NUITKA_LOCAL_MODULE PyObject *impl_serial$tools$list_ports_windows$$$class_1_GUID$$$function_1___str__$$$function_1_listcontraction( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *par_$0 = python_pars[ 0 ];
    PyObject *var_d = NULL;
    PyObject *tmp_contraction_result = NULL;
    PyObject *tmp_iter_value_0 = NULL;
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
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_next_source_1;
    int tmp_res;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyList_New( 0 );
    assert( tmp_contraction_result == NULL );
    tmp_contraction_result = tmp_assign_source_1;

    // Tried code:
    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = par_$0;

    tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            PyThreadState_GET()->frame->f_lineno = 59;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_iter_value_0;
        tmp_iter_value_0 = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_assign_source_3 = tmp_iter_value_0;

    {
        PyObject *old = var_d;
        var_d = tmp_assign_source_3;
        Py_INCREF( var_d );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_contraction_result;

    tmp_called_instance_1 = const_str_digest_912bc8bb225b7547fc80e2202734bf7c;
    tmp_args_element_name_1 = var_d;

    PyThreadState_GET()->frame->f_lineno = 59;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_append_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_format, call_args );
    }

    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        goto try_except_handler_2;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_return_value = tmp_contraction_result;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows$$$class_1_GUID$$$function_1___str__$$$function_1_listcontraction );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( tmp_contraction_result );
    tmp_contraction_result = NULL;

    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    goto try_return_handler_1;
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

    Py_XDECREF( tmp_contraction_result );
    tmp_contraction_result = NULL;

    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_1;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows$$$class_1_GUID$$$function_1___str__$$$function_1_listcontraction );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_$0 );
    par_$0 = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( par_$0 );
    par_$0 = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows$$$class_1_GUID$$$function_1___str__$$$function_1_listcontraction );
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


NUITKA_LOCAL_MODULE PyObject *impl_serial$tools$list_ports_windows$$$class_1_GUID$$$function_1___str__$$$function_2_listcontraction( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *par_$0 = python_pars[ 0 ];
    PyObject *var_d = NULL;
    PyObject *tmp_contraction_result = NULL;
    PyObject *tmp_iter_value_0 = NULL;
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
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_next_source_1;
    int tmp_res;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyList_New( 0 );
    assert( tmp_contraction_result == NULL );
    tmp_contraction_result = tmp_assign_source_1;

    // Tried code:
    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = par_$0;

    tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            PyThreadState_GET()->frame->f_lineno = 60;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_iter_value_0;
        tmp_iter_value_0 = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_assign_source_3 = tmp_iter_value_0;

    {
        PyObject *old = var_d;
        var_d = tmp_assign_source_3;
        Py_INCREF( var_d );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_contraction_result;

    tmp_called_instance_1 = const_str_digest_912bc8bb225b7547fc80e2202734bf7c;
    tmp_args_element_name_1 = var_d;

    PyThreadState_GET()->frame->f_lineno = 60;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_append_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_format, call_args );
    }

    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto try_except_handler_2;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_return_value = tmp_contraction_result;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows$$$class_1_GUID$$$function_1___str__$$$function_2_listcontraction );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( tmp_contraction_result );
    tmp_contraction_result = NULL;

    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    goto try_return_handler_1;
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

    Py_XDECREF( tmp_contraction_result );
    tmp_contraction_result = NULL;

    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_1;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows$$$class_1_GUID$$$function_1___str__$$$function_2_listcontraction );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_$0 );
    par_$0 = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( par_$0 );
    par_$0 = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows$$$class_1_GUID$$$function_1___str__$$$function_2_listcontraction );
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


NUITKA_LOCAL_MODULE PyObject *impl_serial$tools$list_ports_windows$$$class_2_SP_DEVINFO_DATA( PyObject **python_pars, PyObject ** closure_serial$tools$list_ports_windows_class_creation_2__bases, PyObject ** closure_serial$tools$list_ports_windows_class_creation_2__class_decl_dict, PyObject ** closure_serial$tools$list_ports_windows_class_creation_2__metaclass, PyObject ** closure_serial$tools$list_ports_windows_class_creation_2__prepared )
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
    PyObject *var__fields_ = NULL;
    PyObject *var___str__ = NULL;
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
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_list_element_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = *closure_serial$tools$list_ports_windows_class_creation_2__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_1b1b6b23a4b523b9fca1e553f8d15eaf;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain_SP_DEVINFO_DATA;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_0f4f36fb56eb1cdf22b7c62e42b1c696, module_serial$tools$list_ports_windows );
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
    tmp_assign_source_3 = PyList_New( 4 );
    tmp_list_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_str_plain_cbSize;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyDict_GetItem( locals_dict, const_str_plain_DWORD );

    if ( tmp_tuple_element_1 == NULL )
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_tuple_element_1 == NULL ))
        {
            tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_tuple_element_1 == NULL )
        {
            Py_DECREF( tmp_assign_source_3 );
            Py_DECREF( tmp_list_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 66;
            goto frame_exception_exit_1;
        }

    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_1 );
    PyList_SET_ITEM( tmp_assign_source_3, 0, tmp_list_element_1 );
    tmp_list_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_ClassGuid;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = PyDict_GetItem( locals_dict, const_str_plain_GUID );

    if ( tmp_tuple_element_2 == NULL )
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_GUID );

        if (unlikely( tmp_tuple_element_2 == NULL ))
        {
            tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GUID );
        }

        if ( tmp_tuple_element_2 == NULL )
        {
            Py_DECREF( tmp_assign_source_3 );
            Py_DECREF( tmp_list_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GUID" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 67;
            goto frame_exception_exit_1;
        }

    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_2 );
    PyList_SET_ITEM( tmp_assign_source_3, 1, tmp_list_element_1 );
    tmp_list_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_3 = const_str_plain_DevInst;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = PyDict_GetItem( locals_dict, const_str_plain_DWORD );

    if ( tmp_tuple_element_3 == NULL )
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_tuple_element_3 == NULL ))
        {
            tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_tuple_element_3 == NULL )
        {
            Py_DECREF( tmp_assign_source_3 );
            Py_DECREF( tmp_list_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 68;
            goto frame_exception_exit_1;
        }

    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_3 );
    PyList_SET_ITEM( tmp_assign_source_3, 2, tmp_list_element_1 );
    tmp_list_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_4 = const_str_plain_Reserved;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = PyDict_GetItem( locals_dict, const_str_plain_ULONG_PTR );

    if ( tmp_tuple_element_4 == NULL )
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ULONG_PTR );

        if (unlikely( tmp_tuple_element_4 == NULL ))
        {
            tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ULONG_PTR );
        }

        if ( tmp_tuple_element_4 == NULL )
        {
            Py_DECREF( tmp_assign_source_3 );
            Py_DECREF( tmp_list_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ULONG_PTR" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 69;
            goto frame_exception_exit_1;
        }

    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_4 );
    PyList_SET_ITEM( tmp_assign_source_3, 3, tmp_list_element_1 );
    assert( var__fields_ == NULL );
    var__fields_ = tmp_assign_source_3;


#if 0
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
#if 0
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

            tmp_frame_locals = locals_dict;
            Py_INCREF( locals_dict );
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___class__, var___class__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 64;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___module__, var___module__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 64;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___qualname__, var___qualname__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 64;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain__fields_, var__fields_ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 64;
                goto frame_exception_exit_1;
            }
            tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_frame_locals, const_str_plain___str__, var___str__ );

            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 64;
                goto frame_exception_exit_1;
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

    tmp_assign_source_4 = MAKE_FUNCTION_serial$tools$list_ports_windows$$$class_2_SP_DEVINFO_DATA$$$function_1___str__(  );
    assert( var___str__ == NULL );
    var___str__ = tmp_assign_source_4;

    tmp_called_name_1 = *closure_serial$tools$list_ports_windows_class_creation_2__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_5 = const_str_plain_SP_DEVINFO_DATA;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = *closure_serial$tools$list_ports_windows_class_creation_2__bases;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_5 );
    tmp_tuple_element_5 = locals_dict;
    Py_INCREF( locals_dict );
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_5, const_str_plain___class__, var___class__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_5, const_str_plain___module__, var___module__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_5, const_str_plain___qualname__, var___qualname__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_5, const_str_plain__fields_, var__fields_ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_5, const_str_plain___str__, var___str__ );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_5 );
    tmp_kw_name_1 = *closure_serial$tools$list_ports_windows_class_creation_2__class_decl_dict;

    tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_5;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows$$$class_2_SP_DEVINFO_DATA );
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

    Py_XDECREF( var__fields_ );
    var__fields_ = NULL;

    Py_XDECREF( var___str__ );
    var___str__ = NULL;

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

    Py_XDECREF( var__fields_ );
    var__fields_ = NULL;

    Py_XDECREF( var___str__ );
    var___str__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows$$$class_2_SP_DEVINFO_DATA );
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


static PyObject *impl_serial$tools$list_ports_windows$$$class_2_SP_DEVINFO_DATA$$$function_1___str__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_17656170c87e220dda6d76720d2e872e, module_serial$tools$list_ports_windows );
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
    tmp_source_name_1 = const_str_digest_86fa33899a79b80323a28f9628b50153;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_format );
    assert( tmp_called_name_1 != NULL );
    tmp_source_name_2 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ClassGuid );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 73;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_DevInst );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 73;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 73;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto try_return_handler_1;

    frame_exception_exit_1:;
#if 0
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
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

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows$$$class_2_SP_DEVINFO_DATA$$$function_1___str__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows$$$class_2_SP_DEVINFO_DATA$$$function_1___str__ );
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


static PyObject *impl_serial$tools$list_ports_windows$$$function_2_iterate_comports( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_return_value = Nuitka_Generator_New(
        serial$tools$list_ports_windows$$$function_2_iterate_comports$$$genobj_1_iterate_comports_context,
        module_serial$tools$list_ports_windows,
        self->m_name,
#if PYTHON_VERSION >= 350
        self->m_qualname,
#endif
        codeobj_d889dff9f2b7c5ff804bc6eacab6bdb9,
        0
    );



    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows$$$function_2_iterate_comports );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static void serial$tools$list_ports_windows$$$function_2_iterate_comports$$$genobj_1_iterate_comports_context( struct Nuitka_GeneratorObject *generator )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_GUIDs = NULL;
    PyObject *var_guids_size = NULL;
    PyObject *var_index = NULL;
    PyObject *var_g_hdi = NULL;
    PyObject *var_devinfo = NULL;
    PyObject *var_hkey = NULL;
    PyObject *var_port_name_buffer = NULL;
    PyObject *var_port_name_length = NULL;
    PyObject *var_szHardwareID = NULL;
    PyObject *var_szHardwareID_str = NULL;
    PyObject *var_info = NULL;
    PyObject *var_m = NULL;
    PyObject *var_loc_path_str = NULL;
    PyObject *var_location = NULL;
    PyObject *var_g = NULL;
    PyObject *var_szFriendlyName = NULL;
    PyObject *var_szManufacturer = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_args_element_name_13;
    PyObject *tmp_args_element_name_14;
    PyObject *tmp_args_element_name_15;
    PyObject *tmp_args_element_name_16;
    PyObject *tmp_args_element_name_17;
    PyObject *tmp_args_element_name_18;
    PyObject *tmp_args_element_name_19;
    PyObject *tmp_args_element_name_20;
    PyObject *tmp_args_element_name_21;
    PyObject *tmp_args_element_name_22;
    PyObject *tmp_args_element_name_23;
    PyObject *tmp_args_element_name_24;
    PyObject *tmp_args_element_name_25;
    PyObject *tmp_args_element_name_26;
    PyObject *tmp_args_element_name_27;
    PyObject *tmp_args_element_name_28;
    PyObject *tmp_args_element_name_29;
    PyObject *tmp_args_element_name_30;
    PyObject *tmp_args_element_name_31;
    PyObject *tmp_args_element_name_32;
    PyObject *tmp_args_element_name_33;
    PyObject *tmp_args_element_name_34;
    PyObject *tmp_args_element_name_35;
    PyObject *tmp_args_element_name_36;
    PyObject *tmp_args_element_name_37;
    PyObject *tmp_args_element_name_38;
    PyObject *tmp_args_element_name_39;
    PyObject *tmp_args_element_name_40;
    PyObject *tmp_args_element_name_41;
    PyObject *tmp_args_element_name_42;
    PyObject *tmp_args_element_name_43;
    PyObject *tmp_args_element_name_44;
    PyObject *tmp_args_element_name_45;
    PyObject *tmp_args_element_name_46;
    PyObject *tmp_args_element_name_47;
    PyObject *tmp_args_element_name_48;
    PyObject *tmp_args_element_name_49;
    PyObject *tmp_args_element_name_50;
    PyObject *tmp_args_element_name_51;
    PyObject *tmp_args_element_name_52;
    PyObject *tmp_args_element_name_53;
    PyObject *tmp_args_element_name_54;
    PyObject *tmp_args_element_name_55;
    PyObject *tmp_args_element_name_56;
    PyObject *tmp_args_element_name_57;
    PyObject *tmp_args_element_name_58;
    PyObject *tmp_args_element_name_59;
    PyObject *tmp_args_element_name_60;
    PyObject *tmp_args_element_name_61;
    PyObject *tmp_args_element_name_62;
    PyObject *tmp_args_element_name_63;
    PyObject *tmp_args_element_name_64;
    PyObject *tmp_args_element_name_65;
    PyObject *tmp_args_element_name_66;
    PyObject *tmp_args_element_name_67;
    PyObject *tmp_args_element_name_68;
    PyObject *tmp_args_element_name_69;
    PyObject *tmp_args_element_name_70;
    PyObject *tmp_args_element_name_71;
    PyObject *tmp_args_element_name_72;
    PyObject *tmp_args_element_name_73;
    PyObject *tmp_args_element_name_74;
    PyObject *tmp_args_element_name_75;
    PyObject *tmp_args_element_name_76;
    PyObject *tmp_args_element_name_77;
    PyObject *tmp_args_element_name_78;
    PyObject *tmp_args_element_name_79;
    PyObject *tmp_args_element_name_80;
    PyObject *tmp_args_element_name_81;
    PyObject *tmp_args_element_name_82;
    PyObject *tmp_args_element_name_83;
    PyObject *tmp_args_element_name_84;
    PyObject *tmp_args_element_name_85;
    PyObject *tmp_args_element_name_86;
    PyObject *tmp_args_element_name_87;
    PyObject *tmp_args_element_name_88;
    PyObject *tmp_args_element_name_89;
    PyObject *tmp_args_element_name_90;
    PyObject *tmp_args_element_name_91;
    PyObject *tmp_args_element_name_92;
    PyObject *tmp_args_element_name_93;
    PyObject *tmp_args_element_name_94;
    PyObject *tmp_args_element_name_95;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_name_8;
    PyObject *tmp_assattr_name_9;
    PyObject *tmp_assattr_name_10;
    PyObject *tmp_assattr_name_11;
    PyObject *tmp_assattr_name_12;
    PyObject *tmp_assattr_name_13;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_assattr_target_8;
    PyObject *tmp_assattr_target_9;
    PyObject *tmp_assattr_target_10;
    PyObject *tmp_assattr_target_11;
    PyObject *tmp_assattr_target_12;
    PyObject *tmp_assattr_target_13;
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
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_base_name_1;
    PyObject *tmp_base_name_2;
    PyObject *tmp_base_name_3;
    PyObject *tmp_base_name_4;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_instance_7;
    PyObject *tmp_called_instance_8;
    PyObject *tmp_called_instance_9;
    PyObject *tmp_called_instance_10;
    PyObject *tmp_called_instance_11;
    PyObject *tmp_called_instance_12;
    PyObject *tmp_called_instance_13;
    PyObject *tmp_called_instance_14;
    PyObject *tmp_called_instance_15;
    PyObject *tmp_called_instance_16;
    PyObject *tmp_called_instance_17;
    PyObject *tmp_called_instance_18;
    PyObject *tmp_called_instance_19;
    PyObject *tmp_called_instance_20;
    PyObject *tmp_called_instance_21;
    PyObject *tmp_called_instance_22;
    PyObject *tmp_called_instance_23;
    PyObject *tmp_called_instance_24;
    PyObject *tmp_called_instance_25;
    PyObject *tmp_called_instance_26;
    PyObject *tmp_called_instance_27;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_called_name_11;
    PyObject *tmp_called_name_12;
    PyObject *tmp_called_name_13;
    PyObject *tmp_called_name_14;
    PyObject *tmp_called_name_15;
    PyObject *tmp_called_name_16;
    PyObject *tmp_called_name_17;
    PyObject *tmp_called_name_18;
    PyObject *tmp_called_name_19;
    PyObject *tmp_called_name_20;
    PyObject *tmp_called_name_21;
    PyObject *tmp_called_name_22;
    PyObject *tmp_called_name_23;
    PyObject *tmp_called_name_24;
    PyObject *tmp_called_name_25;
    PyObject *tmp_called_name_26;
    PyObject *tmp_called_name_27;
    PyObject *tmp_called_name_28;
    PyObject *tmp_called_name_29;
    PyObject *tmp_called_name_30;
    PyObject *tmp_called_name_31;
    PyObject *tmp_called_name_32;
    PyObject *tmp_called_name_33;
    PyObject *tmp_called_name_34;
    PyObject *tmp_called_name_35;
    PyObject *tmp_called_name_36;
    PyObject *tmp_called_name_37;
    PyObject *tmp_called_name_38;
    PyObject *tmp_called_name_39;
    PyObject *tmp_called_name_40;
    PyObject *tmp_called_name_41;
    PyObject *tmp_called_name_42;
    PyObject *tmp_called_name_43;
    PyObject *tmp_called_name_44;
    PyObject *tmp_called_name_45;
    PyObject *tmp_called_name_46;
    PyObject *tmp_called_name_47;
    int tmp_cmp_Gt_1;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    int tmp_cond_truth_8;
    int tmp_cond_truth_9;
    int tmp_cond_truth_10;
    int tmp_cond_truth_11;
    int tmp_cond_truth_12;
    int tmp_cond_truth_13;
    int tmp_cond_truth_14;
    int tmp_cond_truth_15;
    int tmp_cond_truth_16;
    int tmp_cond_truth_17;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_cond_value_8;
    PyObject *tmp_cond_value_9;
    PyObject *tmp_cond_value_10;
    PyObject *tmp_cond_value_11;
    PyObject *tmp_cond_value_12;
    PyObject *tmp_cond_value_13;
    PyObject *tmp_cond_value_14;
    PyObject *tmp_cond_value_15;
    PyObject *tmp_cond_value_16;
    PyObject *tmp_cond_value_17;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_left_name_8;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    bool tmp_result;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_right_name_7;
    PyObject *tmp_right_name_8;
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
    PyObject *tmp_source_name_17;
    PyObject *tmp_source_name_18;
    PyObject *tmp_source_name_19;
    PyObject *tmp_source_name_20;
    PyObject *tmp_source_name_21;
    PyObject *tmp_source_name_22;
    PyObject *tmp_source_name_23;
    PyObject *tmp_source_name_24;
    PyObject *tmp_source_name_25;
    PyObject *tmp_source_name_26;
    PyObject *tmp_source_name_27;
    PyObject *tmp_source_name_28;
    PyObject *tmp_source_name_29;
    PyObject *tmp_source_name_30;
    PyObject *tmp_source_name_31;
    PyObject *tmp_source_name_32;
    PyObject *tmp_source_name_33;
    PyObject *tmp_source_name_34;
    PyObject *tmp_source_name_35;
    PyObject *tmp_source_name_36;
    PyObject *tmp_source_name_37;
    PyObject *tmp_source_name_38;
    PyObject *tmp_source_name_39;
    PyObject *tmp_source_name_40;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    PyObject *tmp_value_name_2;
    PyObject *tmp_value_name_3;
    PyObject *tmp_value_name_4;
    PyObject *tmp_xrange_low_1;
    static PyFrameObject *cache_frame_generator = NULL;


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_d889dff9f2b7c5ff804bc6eacab6bdb9, module_serial$tools$list_ports_windows );
    generator->m_frame = cache_frame_generator;
    Py_INCREF( generator->m_frame );

#if PYTHON_VERSION >= 340
    generator->m_frame->f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->f_back );

    generator->m_frame->f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->f_back );

    PyThreadState_GET()->frame = generator->m_frame;
    Py_INCREF( generator->m_frame );

#if PYTHON_VERSION >= 340
    generator->m_frame->f_executing += 1;
#endif

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.

    PyThreadState *thread_state = PyThreadState_GET();

    generator->m_frame->f_exc_type = thread_state->exc_type;
    if ( generator->m_frame->f_exc_type == Py_None ) generator->m_frame->f_exc_type = NULL;
    Py_XINCREF( generator->m_frame->f_exc_type );
    generator->m_frame->f_exc_value = thread_state->exc_value;
    Py_XINCREF( generator->m_frame->f_exc_value );
    generator->m_frame->f_exc_traceback = thread_state->exc_traceback;
    Py_XINCREF( generator->m_frame->f_exc_traceback );
#endif

    // Framed code:
    tmp_left_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_GUID );

    if (unlikely( tmp_left_name_1 == NULL ))
    {
        tmp_left_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GUID );
    }

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GUID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 135;
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = const_int_pos_8;
    tmp_called_name_1 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        goto frame_exception_exit_1;
    }
    generator->m_frame->f_lineno = 135;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        goto frame_exception_exit_1;
    }
    assert( var_GUIDs == NULL );
    var_GUIDs = tmp_assign_source_1;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 136;
        goto frame_exception_exit_1;
    }

    generator->m_frame->f_lineno = 136;
    tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        goto frame_exception_exit_1;
    }
    assert( var_guids_size == NULL );
    var_guids_size = tmp_assign_source_2;

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiClassGuidsFromName );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiClassGuidsFromName );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiClassGuidsFromName" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 137;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = const_str_plain_Ports;
    tmp_args_element_name_2 = var_GUIDs;

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "GUIDs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 139;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 140;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_sizeof );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_GUIDs;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "GUIDs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 140;
        goto frame_exception_exit_1;
    }

    generator->m_frame->f_lineno = 140;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_args_element_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 141;
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_byref );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 141;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = var_guids_size;

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "guids_size" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 141;
        goto frame_exception_exit_1;
    }

    generator->m_frame->f_lineno = 141;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_args_element_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 141;
        goto frame_exception_exit_1;
    }
    generator->m_frame->f_lineno = 137;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_5 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 137;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 142;
        goto frame_exception_exit_1;
    }

    generator->m_frame->f_lineno = 142;
    tmp_raise_type_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_WinError );
    if ( tmp_raise_type_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        goto frame_exception_exit_1;
    }
    exception_type = tmp_raise_type_1;
    exception_lineno = 142;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_3 = var_guids_size;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "guids_size" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 145;
        goto frame_exception_exit_1;
    }

    tmp_xrange_low_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_value );
    if ( tmp_xrange_low_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
    Py_DECREF( tmp_xrange_low_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_3;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_4 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            generator->m_frame->f_lineno = 145;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_assign_source_5 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_index;
        var_index = tmp_assign_source_5;
        Py_INCREF( var_index );
        Py_XDECREF( old );
    }

    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetClassDevs );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiGetClassDevs );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiGetClassDevs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 146;
        goto try_except_handler_2;
    }

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 147;
        goto try_except_handler_2;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_byref );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        goto try_except_handler_2;
    }
    tmp_subscribed_name_1 = var_GUIDs;

    if ( tmp_subscribed_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "GUIDs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 147;
        goto try_except_handler_2;
    }

    tmp_subscript_name_1 = var_index;

    if ( tmp_subscript_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "index" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 147;
        goto try_except_handler_2;
    }

    tmp_args_element_name_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 147;
        goto try_except_handler_2;
    }
    generator->m_frame->f_lineno = 147;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_args_element_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        goto try_except_handler_2;
    }
    tmp_args_element_name_9 = Py_None;
    tmp_args_element_name_10 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_NULL );

    if (unlikely( tmp_args_element_name_10 == NULL ))
    {
        tmp_args_element_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NULL );
    }

    if ( tmp_args_element_name_10 == NULL )
    {
        Py_DECREF( tmp_args_element_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NULL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 149;
        goto try_except_handler_2;
    }

    tmp_args_element_name_11 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DIGCF_PRESENT );

    if (unlikely( tmp_args_element_name_11 == NULL ))
    {
        tmp_args_element_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DIGCF_PRESENT );
    }

    if ( tmp_args_element_name_11 == NULL )
    {
        Py_DECREF( tmp_args_element_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DIGCF_PRESENT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 150;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 146;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_g_hdi;
        var_g_hdi = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SP_DEVINFO_DATA );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SP_DEVINFO_DATA );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SP_DEVINFO_DATA" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 152;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 152;
    tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS( tmp_called_name_8 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_devinfo;
        var_devinfo = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 153;
        goto try_except_handler_2;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_sizeof );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        goto try_except_handler_2;
    }
    tmp_args_element_name_12 = var_devinfo;

    if ( tmp_args_element_name_12 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "devinfo" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 153;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 153;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        goto try_except_handler_2;
    }
    tmp_assattr_target_1 = var_devinfo;

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "devinfo" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 153;
        goto try_except_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_cbSize, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 153;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_assign_source_8 = const_int_0;
    {
        PyObject *old = var_index;
        var_index = tmp_assign_source_8;
        Py_INCREF( var_index );
        Py_XDECREF( old );
    }

    loop_start_2:;
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiEnumDeviceInfo );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiEnumDeviceInfo );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiEnumDeviceInfo" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 155;
        goto try_except_handler_2;
    }

    tmp_args_element_name_13 = var_g_hdi;

    if ( tmp_args_element_name_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "g_hdi" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 155;
        goto try_except_handler_2;
    }

    tmp_args_element_name_14 = var_index;

    if ( tmp_args_element_name_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "index" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 155;
        goto try_except_handler_2;
    }

    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 155;
        goto try_except_handler_2;
    }

    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_byref );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        goto try_except_handler_2;
    }
    tmp_args_element_name_16 = var_devinfo;

    if ( tmp_args_element_name_16 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "devinfo" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 155;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 155;
    {
        PyObject *call_args[] = { tmp_args_element_name_16 };
        tmp_args_element_name_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    if ( tmp_args_element_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        goto try_except_handler_2;
    }
    generator->m_frame->f_lineno = 155;
    {
        PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15 };
        tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_args_element_name_15 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        goto try_except_handler_2;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 155;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    goto loop_end_2;
    branch_no_2:;
    tmp_left_name_2 = var_index;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "index" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 156;
        goto try_except_handler_2;
    }

    tmp_right_name_2 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_9 = tmp_left_name_2;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        goto try_except_handler_2;
    }
    var_index = tmp_assign_source_9;

    tmp_called_name_12 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiOpenDevRegKey );

    if (unlikely( tmp_called_name_12 == NULL ))
    {
        tmp_called_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiOpenDevRegKey );
    }

    if ( tmp_called_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiOpenDevRegKey" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 159;
        goto try_except_handler_2;
    }

    tmp_args_element_name_17 = var_g_hdi;

    if ( tmp_args_element_name_17 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "g_hdi" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 160;
        goto try_except_handler_2;
    }

    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 161;
        goto try_except_handler_2;
    }

    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_byref );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;
        goto try_except_handler_2;
    }
    tmp_args_element_name_19 = var_devinfo;

    if ( tmp_args_element_name_19 == NULL )
    {
        Py_DECREF( tmp_called_name_13 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "devinfo" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 161;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 161;
    {
        PyObject *call_args[] = { tmp_args_element_name_19 };
        tmp_args_element_name_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_called_name_13 );
    if ( tmp_args_element_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;
        goto try_except_handler_2;
    }
    tmp_args_element_name_20 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DICS_FLAG_GLOBAL );

    if (unlikely( tmp_args_element_name_20 == NULL ))
    {
        tmp_args_element_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DICS_FLAG_GLOBAL );
    }

    if ( tmp_args_element_name_20 == NULL )
    {
        Py_DECREF( tmp_args_element_name_18 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DICS_FLAG_GLOBAL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 162;
        goto try_except_handler_2;
    }

    tmp_args_element_name_21 = const_int_0;
    tmp_args_element_name_22 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DIREG_DEV );

    if (unlikely( tmp_args_element_name_22 == NULL ))
    {
        tmp_args_element_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DIREG_DEV );
    }

    if ( tmp_args_element_name_22 == NULL )
    {
        Py_DECREF( tmp_args_element_name_18 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DIREG_DEV" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 164;
        goto try_except_handler_2;
    }

    tmp_args_element_name_23 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_KEY_READ );

    if (unlikely( tmp_args_element_name_23 == NULL ))
    {
        tmp_args_element_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_KEY_READ );
    }

    if ( tmp_args_element_name_23 == NULL )
    {
        Py_DECREF( tmp_args_element_name_18 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "KEY_READ" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 165;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 159;
    {
        PyObject *call_args[] = { tmp_args_element_name_17, tmp_args_element_name_18, tmp_args_element_name_20, tmp_args_element_name_21, tmp_args_element_name_22, tmp_args_element_name_23 };
        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_args_element_name_18 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_hkey;
        var_hkey = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 166;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 166;
    tmp_assign_source_11 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_create_unicode_buffer, &PyTuple_GET_ITEM( const_tuple_int_pos_250_tuple, 0 ) );

    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_port_name_buffer;
        var_port_name_buffer = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_called_name_14 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ULONG );

    if (unlikely( tmp_called_name_14 == NULL ))
    {
        tmp_called_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ULONG );
    }

    if ( tmp_called_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ULONG" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 167;
        goto try_except_handler_2;
    }

    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 167;
        goto try_except_handler_2;
    }

    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_sizeof );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        goto try_except_handler_2;
    }
    tmp_args_element_name_25 = var_port_name_buffer;

    if ( tmp_args_element_name_25 == NULL )
    {
        Py_DECREF( tmp_called_name_15 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "port_name_buffer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 167;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 167;
    {
        PyObject *call_args[] = { tmp_args_element_name_25 };
        tmp_args_element_name_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_called_name_15 );
    if ( tmp_args_element_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        goto try_except_handler_2;
    }
    generator->m_frame->f_lineno = 167;
    {
        PyObject *call_args[] = { tmp_args_element_name_24 };
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_args_element_name_24 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_port_name_length;
        var_port_name_length = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    tmp_called_name_16 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_RegQueryValueEx );

    if (unlikely( tmp_called_name_16 == NULL ))
    {
        tmp_called_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RegQueryValueEx );
    }

    if ( tmp_called_name_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RegQueryValueEx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 168;
        goto try_except_handler_2;
    }

    tmp_args_element_name_26 = var_hkey;

    if ( tmp_args_element_name_26 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hkey" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 169;
        goto try_except_handler_2;
    }

    tmp_args_element_name_27 = const_str_plain_PortName;
    tmp_args_element_name_28 = Py_None;
    tmp_args_element_name_29 = Py_None;
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 173;
        goto try_except_handler_2;
    }

    tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_byref );
    if ( tmp_called_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        goto try_except_handler_2;
    }
    tmp_args_element_name_31 = var_port_name_buffer;

    if ( tmp_args_element_name_31 == NULL )
    {
        Py_DECREF( tmp_called_name_17 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "port_name_buffer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 173;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 173;
    {
        PyObject *call_args[] = { tmp_args_element_name_31 };
        tmp_args_element_name_30 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
    }

    Py_DECREF( tmp_called_name_17 );
    if ( tmp_args_element_name_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        goto try_except_handler_2;
    }
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_args_element_name_30 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 174;
        goto try_except_handler_2;
    }

    tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_byref );
    if ( tmp_called_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_30 );

        exception_lineno = 174;
        goto try_except_handler_2;
    }
    tmp_args_element_name_33 = var_port_name_length;

    if ( tmp_args_element_name_33 == NULL )
    {
        Py_DECREF( tmp_args_element_name_30 );
        Py_DECREF( tmp_called_name_18 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "port_name_length" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 174;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 174;
    {
        PyObject *call_args[] = { tmp_args_element_name_33 };
        tmp_args_element_name_32 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
    }

    Py_DECREF( tmp_called_name_18 );
    if ( tmp_args_element_name_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_30 );

        exception_lineno = 174;
        goto try_except_handler_2;
    }
    generator->m_frame->f_lineno = 168;
    {
        PyObject *call_args[] = { tmp_args_element_name_26, tmp_args_element_name_27, tmp_args_element_name_28, tmp_args_element_name_29, tmp_args_element_name_30, tmp_args_element_name_32 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_16, call_args );
    }

    Py_DECREF( tmp_args_element_name_30 );
    Py_DECREF( tmp_args_element_name_32 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_19 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_RegCloseKey );

    if (unlikely( tmp_called_name_19 == NULL ))
    {
        tmp_called_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RegCloseKey );
    }

    if ( tmp_called_name_19 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RegCloseKey" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 175;
        goto try_except_handler_2;
    }

    tmp_args_element_name_34 = var_hkey;

    if ( tmp_args_element_name_34 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "hkey" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 175;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 175;
    {
        PyObject *call_args[] = { tmp_args_element_name_34 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_11 = var_port_name_buffer;

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "port_name_buffer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        goto try_except_handler_2;
    }

    tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_value );
    if ( tmp_called_instance_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        goto try_except_handler_2;
    }
    generator->m_frame->f_lineno = 180;
    tmp_cond_value_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_plain_LPT_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_3 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        goto try_except_handler_2;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 180;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    goto loop_start_2;
    branch_no_3:;
    tmp_called_instance_4 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_called_instance_4 == NULL ))
    {
        tmp_called_instance_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 184;
    tmp_assign_source_13 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_create_unicode_buffer, &PyTuple_GET_ITEM( const_tuple_int_pos_250_tuple, 0 ) );

    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_szHardwareID;
        var_szHardwareID = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    tmp_called_name_20 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceInstanceId );

    if (unlikely( tmp_called_name_20 == NULL ))
    {
        tmp_called_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceInstanceId );
    }

    if ( tmp_called_name_20 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiGetDeviceInstanceId" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 186;
        goto try_except_handler_2;
    }

    tmp_args_element_name_35 = var_g_hdi;

    if ( tmp_args_element_name_35 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "g_hdi" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 187;
        goto try_except_handler_2;
    }

    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 188;
        goto try_except_handler_2;
    }

    tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_byref );
    if ( tmp_called_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        goto try_except_handler_2;
    }
    tmp_args_element_name_37 = var_devinfo;

    if ( tmp_args_element_name_37 == NULL )
    {
        Py_DECREF( tmp_called_name_21 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "devinfo" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 188;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 188;
    {
        PyObject *call_args[] = { tmp_args_element_name_37 };
        tmp_args_element_name_36 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, call_args );
    }

    Py_DECREF( tmp_called_name_21 );
    if ( tmp_args_element_name_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        goto try_except_handler_2;
    }
    tmp_args_element_name_38 = var_szHardwareID;

    if ( tmp_args_element_name_38 == NULL )
    {
        Py_DECREF( tmp_args_element_name_36 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "szHardwareID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 190;
        goto try_except_handler_2;
    }

    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_args_element_name_36 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 191;
        goto try_except_handler_2;
    }

    tmp_called_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_sizeof );
    if ( tmp_called_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_36 );

        exception_lineno = 191;
        goto try_except_handler_2;
    }
    tmp_args_element_name_40 = var_szHardwareID;

    if ( tmp_args_element_name_40 == NULL )
    {
        Py_DECREF( tmp_args_element_name_36 );
        Py_DECREF( tmp_called_name_22 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "szHardwareID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 191;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 191;
    {
        PyObject *call_args[] = { tmp_args_element_name_40 };
        tmp_left_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_22, call_args );
    }

    Py_DECREF( tmp_called_name_22 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_36 );

        exception_lineno = 191;
        goto try_except_handler_2;
    }
    tmp_right_name_3 = const_int_pos_1;
    tmp_args_element_name_39 = BINARY_OPERATION_SUB( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_args_element_name_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_36 );

        exception_lineno = 191;
        goto try_except_handler_2;
    }
    tmp_args_element_name_41 = Py_None;
    generator->m_frame->f_lineno = 186;
    {
        PyObject *call_args[] = { tmp_args_element_name_35, tmp_args_element_name_36, tmp_args_element_name_38, tmp_args_element_name_39, tmp_args_element_name_41 };
        tmp_cond_value_4 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_20, call_args );
    }

    Py_DECREF( tmp_args_element_name_36 );
    Py_DECREF( tmp_args_element_name_39 );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        goto try_except_handler_2;
    }
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 186;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    tmp_called_name_23 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceRegistryProperty );

    if (unlikely( tmp_called_name_23 == NULL ))
    {
        tmp_called_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceRegistryProperty );
    }

    if ( tmp_called_name_23 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiGetDeviceRegistryProperty" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 194;
        goto try_except_handler_2;
    }

    tmp_args_element_name_42 = var_g_hdi;

    if ( tmp_args_element_name_42 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "g_hdi" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 195;
        goto try_except_handler_2;
    }

    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 196;
        goto try_except_handler_2;
    }

    tmp_called_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_byref );
    if ( tmp_called_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        goto try_except_handler_2;
    }
    tmp_args_element_name_44 = var_devinfo;

    if ( tmp_args_element_name_44 == NULL )
    {
        Py_DECREF( tmp_called_name_24 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "devinfo" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 196;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 196;
    {
        PyObject *call_args[] = { tmp_args_element_name_44 };
        tmp_args_element_name_43 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_24, call_args );
    }

    Py_DECREF( tmp_called_name_24 );
    if ( tmp_args_element_name_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        goto try_except_handler_2;
    }
    tmp_args_element_name_45 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SPDRP_HARDWAREID );

    if (unlikely( tmp_args_element_name_45 == NULL ))
    {
        tmp_args_element_name_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SPDRP_HARDWAREID );
    }

    if ( tmp_args_element_name_45 == NULL )
    {
        Py_DECREF( tmp_args_element_name_43 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SPDRP_HARDWAREID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 197;
        goto try_except_handler_2;
    }

    tmp_args_element_name_46 = Py_None;
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_args_element_name_43 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 199;
        goto try_except_handler_2;
    }

    tmp_called_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_byref );
    if ( tmp_called_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_43 );

        exception_lineno = 199;
        goto try_except_handler_2;
    }
    tmp_args_element_name_48 = var_szHardwareID;

    if ( tmp_args_element_name_48 == NULL )
    {
        Py_DECREF( tmp_args_element_name_43 );
        Py_DECREF( tmp_called_name_25 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "szHardwareID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 199;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 199;
    {
        PyObject *call_args[] = { tmp_args_element_name_48 };
        tmp_args_element_name_47 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_25, call_args );
    }

    Py_DECREF( tmp_called_name_25 );
    if ( tmp_args_element_name_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_43 );

        exception_lineno = 199;
        goto try_except_handler_2;
    }
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_16 == NULL )
    {
        Py_DECREF( tmp_args_element_name_43 );
        Py_DECREF( tmp_args_element_name_47 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 200;
        goto try_except_handler_2;
    }

    tmp_called_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_sizeof );
    if ( tmp_called_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_43 );
        Py_DECREF( tmp_args_element_name_47 );

        exception_lineno = 200;
        goto try_except_handler_2;
    }
    tmp_args_element_name_50 = var_szHardwareID;

    if ( tmp_args_element_name_50 == NULL )
    {
        Py_DECREF( tmp_args_element_name_43 );
        Py_DECREF( tmp_args_element_name_47 );
        Py_DECREF( tmp_called_name_26 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "szHardwareID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 200;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 200;
    {
        PyObject *call_args[] = { tmp_args_element_name_50 };
        tmp_left_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_26, call_args );
    }

    Py_DECREF( tmp_called_name_26 );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_43 );
        Py_DECREF( tmp_args_element_name_47 );

        exception_lineno = 200;
        goto try_except_handler_2;
    }
    tmp_right_name_4 = const_int_pos_1;
    tmp_args_element_name_49 = BINARY_OPERATION_SUB( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_4 );
    if ( tmp_args_element_name_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_43 );
        Py_DECREF( tmp_args_element_name_47 );

        exception_lineno = 200;
        goto try_except_handler_2;
    }
    tmp_args_element_name_51 = Py_None;
    generator->m_frame->f_lineno = 194;
    {
        PyObject *call_args[] = { tmp_args_element_name_42, tmp_args_element_name_43, tmp_args_element_name_45, tmp_args_element_name_46, tmp_args_element_name_47, tmp_args_element_name_49, tmp_args_element_name_51 };
        tmp_cond_value_5 = CALL_FUNCTION_WITH_ARGS7( tmp_called_name_23, call_args );
    }

    Py_DECREF( tmp_args_element_name_43 );
    Py_DECREF( tmp_args_element_name_47 );
    Py_DECREF( tmp_args_element_name_49 );
    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;
        goto try_except_handler_2;
    }
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        exception_lineno = 194;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_no_5;
    }
    else
    {
        goto branch_yes_5;
    }
    branch_yes_5:;
    tmp_called_instance_5 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_called_instance_5 == NULL ))
    {
        tmp_called_instance_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_called_instance_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 203;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 203;
    tmp_compare_left_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_GetLastError );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;
        goto try_except_handler_2;
    }
    tmp_compare_right_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ERROR_INSUFFICIENT_BUFFER );

    if (unlikely( tmp_compare_right_1 == NULL ))
    {
        tmp_compare_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ERROR_INSUFFICIENT_BUFFER );
    }

    if ( tmp_compare_right_1 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ERROR_INSUFFICIENT_BUFFER" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 203;
        goto try_except_handler_2;
    }

    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 203;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_called_instance_6 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_called_instance_6 == NULL ))
    {
        tmp_called_instance_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_called_instance_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 204;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 204;
    tmp_raise_type_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_WinError );
    if ( tmp_raise_type_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        goto try_except_handler_2;
    }
    exception_type = tmp_raise_type_2;
    exception_lineno = 204;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_except_handler_2;
    branch_no_6:;
    branch_no_5:;
    branch_no_4:;
    tmp_source_name_17 = var_szHardwareID;

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "szHardwareID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 206;
        goto try_except_handler_2;
    }

    tmp_assign_source_14 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_value );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_szHardwareID_str;
        var_szHardwareID_str = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_list_ports_common );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_list_ports_common );
    }

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "list_ports_common" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 208;
        goto try_except_handler_2;
    }

    tmp_called_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_ListPortInfo );
    if ( tmp_called_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        goto try_except_handler_2;
    }
    tmp_source_name_19 = var_port_name_buffer;

    if ( tmp_source_name_19 == NULL )
    {
        Py_DECREF( tmp_called_name_27 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "port_name_buffer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 208;
        goto try_except_handler_2;
    }

    tmp_args_element_name_52 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_value );
    if ( tmp_args_element_name_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_27 );

        exception_lineno = 208;
        goto try_except_handler_2;
    }
    generator->m_frame->f_lineno = 208;
    {
        PyObject *call_args[] = { tmp_args_element_name_52 };
        tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_27, call_args );
    }

    Py_DECREF( tmp_called_name_27 );
    Py_DECREF( tmp_args_element_name_52 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_info;
        var_info = tmp_assign_source_15;
        Py_XDECREF( old );
    }

    tmp_called_instance_7 = var_szHardwareID_str;

    if ( tmp_called_instance_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "szHardwareID_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 212;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 212;
    tmp_cond_value_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_plain_USB_tuple, 0 ) );

    if ( tmp_cond_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        goto try_except_handler_2;
    }
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_6 );

        exception_lineno = 212;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_source_name_20 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_20 == NULL ))
    {
        tmp_source_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 213;
        goto try_except_handler_2;
    }

    tmp_called_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_search );
    if ( tmp_called_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 213;
        goto try_except_handler_2;
    }
    tmp_args_element_name_53 = const_str_digest_154809b1108d17aabb1baf5aef96965e;
    tmp_args_element_name_54 = var_szHardwareID_str;

    if ( tmp_args_element_name_54 == NULL )
    {
        Py_DECREF( tmp_called_name_28 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "szHardwareID_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 213;
        goto try_except_handler_2;
    }

    tmp_source_name_21 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_21 == NULL ))
    {
        tmp_source_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_21 == NULL )
    {
        Py_DECREF( tmp_called_name_28 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 213;
        goto try_except_handler_2;
    }

    tmp_args_element_name_55 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_I );
    if ( tmp_args_element_name_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_28 );

        exception_lineno = 213;
        goto try_except_handler_2;
    }
    generator->m_frame->f_lineno = 213;
    {
        PyObject *call_args[] = { tmp_args_element_name_53, tmp_args_element_name_54, tmp_args_element_name_55 };
        tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_28, call_args );
    }

    Py_DECREF( tmp_called_name_28 );
    Py_DECREF( tmp_args_element_name_55 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 213;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_m;
        var_m = tmp_assign_source_16;
        Py_XDECREF( old );
    }

    tmp_cond_value_7 = var_m;

    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;
        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_7 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_called_instance_8 = var_m;

    generator->m_frame->f_lineno = 215;
    tmp_value_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

    if ( tmp_value_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        goto try_except_handler_2;
    }
    tmp_base_name_1 = const_int_pos_16;
    tmp_assattr_name_2 = TO_INT2( tmp_value_name_1, tmp_base_name_1 );
    Py_DECREF( tmp_value_name_1 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        goto try_except_handler_2;
    }
    tmp_assattr_target_2 = var_info;

    if ( tmp_assattr_target_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "info" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 215;
        goto try_except_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_vid, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 215;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_called_instance_9 = var_m;

    if ( tmp_called_instance_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "m" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 216;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 216;
    tmp_cond_value_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_3_tuple, 0 ) );

    if ( tmp_cond_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        goto try_except_handler_2;
    }
    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_8 );

        exception_lineno = 216;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_called_instance_10 = var_m;

    if ( tmp_called_instance_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "m" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 217;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 217;
    tmp_value_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_3_tuple, 0 ) );

    if ( tmp_value_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        goto try_except_handler_2;
    }
    tmp_base_name_2 = const_int_pos_16;
    tmp_assattr_name_3 = TO_INT2( tmp_value_name_2, tmp_base_name_2 );
    Py_DECREF( tmp_value_name_2 );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 217;
        goto try_except_handler_2;
    }
    tmp_assattr_target_3 = var_info;

    if ( tmp_assattr_target_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "info" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 217;
        goto try_except_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_pid, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 217;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_assattr_name_3 );
    branch_no_9:;
    tmp_called_instance_11 = var_m;

    if ( tmp_called_instance_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "m" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 218;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 218;
    tmp_cond_value_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_11, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_5_tuple, 0 ) );

    if ( tmp_cond_value_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        goto try_except_handler_2;
    }
    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_9 );

        exception_lineno = 218;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_called_instance_12 = var_m;

    if ( tmp_called_instance_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "m" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 219;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 219;
    tmp_assattr_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_12, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_5_tuple, 0 ) );

    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        goto try_except_handler_2;
    }
    tmp_assattr_target_4 = var_info;

    if ( tmp_assattr_target_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "info" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 219;
        goto try_except_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_serial_number, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 219;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_assattr_name_4 );
    branch_no_10:;
    branch_no_8:;
    tmp_called_instance_13 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_called_instance_13 == NULL ))
    {
        tmp_called_instance_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_called_instance_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 221;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 221;
    tmp_assign_source_17 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_13, const_str_plain_create_unicode_buffer, &PyTuple_GET_ITEM( const_tuple_int_pos_250_tuple, 0 ) );

    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_loc_path_str;
        var_loc_path_str = tmp_assign_source_17;
        Py_XDECREF( old );
    }

    tmp_called_name_29 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceRegistryProperty );

    if (unlikely( tmp_called_name_29 == NULL ))
    {
        tmp_called_name_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceRegistryProperty );
    }

    if ( tmp_called_name_29 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiGetDeviceRegistryProperty" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 222;
        goto try_except_handler_2;
    }

    tmp_args_element_name_56 = var_g_hdi;

    if ( tmp_args_element_name_56 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "g_hdi" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 223;
        goto try_except_handler_2;
    }

    tmp_source_name_22 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_22 == NULL ))
    {
        tmp_source_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_22 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 224;
        goto try_except_handler_2;
    }

    tmp_called_name_30 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_byref );
    if ( tmp_called_name_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        goto try_except_handler_2;
    }
    tmp_args_element_name_58 = var_devinfo;

    if ( tmp_args_element_name_58 == NULL )
    {
        Py_DECREF( tmp_called_name_30 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "devinfo" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 224;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 224;
    {
        PyObject *call_args[] = { tmp_args_element_name_58 };
        tmp_args_element_name_57 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_30, call_args );
    }

    Py_DECREF( tmp_called_name_30 );
    if ( tmp_args_element_name_57 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        goto try_except_handler_2;
    }
    tmp_args_element_name_59 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SPDRP_LOCATION_PATHS );

    if (unlikely( tmp_args_element_name_59 == NULL ))
    {
        tmp_args_element_name_59 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SPDRP_LOCATION_PATHS );
    }

    if ( tmp_args_element_name_59 == NULL )
    {
        Py_DECREF( tmp_args_element_name_57 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SPDRP_LOCATION_PATHS" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 225;
        goto try_except_handler_2;
    }

    tmp_args_element_name_60 = Py_None;
    tmp_source_name_23 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_23 == NULL ))
    {
        tmp_source_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_23 == NULL )
    {
        Py_DECREF( tmp_args_element_name_57 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 227;
        goto try_except_handler_2;
    }

    tmp_called_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_byref );
    if ( tmp_called_name_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_57 );

        exception_lineno = 227;
        goto try_except_handler_2;
    }
    tmp_args_element_name_62 = var_loc_path_str;

    if ( tmp_args_element_name_62 == NULL )
    {
        Py_DECREF( tmp_args_element_name_57 );
        Py_DECREF( tmp_called_name_31 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "loc_path_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 227;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 227;
    {
        PyObject *call_args[] = { tmp_args_element_name_62 };
        tmp_args_element_name_61 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_31, call_args );
    }

    Py_DECREF( tmp_called_name_31 );
    if ( tmp_args_element_name_61 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_57 );

        exception_lineno = 227;
        goto try_except_handler_2;
    }
    tmp_source_name_24 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_24 == NULL ))
    {
        tmp_source_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_24 == NULL )
    {
        Py_DECREF( tmp_args_element_name_57 );
        Py_DECREF( tmp_args_element_name_61 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 228;
        goto try_except_handler_2;
    }

    tmp_called_name_32 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_sizeof );
    if ( tmp_called_name_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_57 );
        Py_DECREF( tmp_args_element_name_61 );

        exception_lineno = 228;
        goto try_except_handler_2;
    }
    tmp_args_element_name_64 = var_loc_path_str;

    if ( tmp_args_element_name_64 == NULL )
    {
        Py_DECREF( tmp_args_element_name_57 );
        Py_DECREF( tmp_args_element_name_61 );
        Py_DECREF( tmp_called_name_32 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "loc_path_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 228;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 228;
    {
        PyObject *call_args[] = { tmp_args_element_name_64 };
        tmp_left_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_32, call_args );
    }

    Py_DECREF( tmp_called_name_32 );
    if ( tmp_left_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_57 );
        Py_DECREF( tmp_args_element_name_61 );

        exception_lineno = 228;
        goto try_except_handler_2;
    }
    tmp_right_name_5 = const_int_pos_1;
    tmp_args_element_name_63 = BINARY_OPERATION_SUB( tmp_left_name_5, tmp_right_name_5 );
    Py_DECREF( tmp_left_name_5 );
    if ( tmp_args_element_name_63 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_57 );
        Py_DECREF( tmp_args_element_name_61 );

        exception_lineno = 228;
        goto try_except_handler_2;
    }
    tmp_args_element_name_65 = Py_None;
    generator->m_frame->f_lineno = 222;
    {
        PyObject *call_args[] = { tmp_args_element_name_56, tmp_args_element_name_57, tmp_args_element_name_59, tmp_args_element_name_60, tmp_args_element_name_61, tmp_args_element_name_63, tmp_args_element_name_65 };
        tmp_cond_value_10 = CALL_FUNCTION_WITH_ARGS7( tmp_called_name_29, call_args );
    }

    Py_DECREF( tmp_args_element_name_57 );
    Py_DECREF( tmp_args_element_name_61 );
    Py_DECREF( tmp_args_element_name_63 );
    if ( tmp_cond_value_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        goto try_except_handler_2;
    }
    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_10 );

        exception_lineno = 222;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_source_name_25 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_25 == NULL ))
    {
        tmp_source_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_25 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 230;
        goto try_except_handler_2;
    }

    tmp_called_name_33 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_finditer );
    if ( tmp_called_name_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 230;
        goto try_except_handler_2;
    }
    tmp_args_element_name_66 = const_str_digest_af155e22823b02ebfdc380a93ed7dc8f;
    tmp_source_name_26 = var_loc_path_str;

    if ( tmp_source_name_26 == NULL )
    {
        Py_DECREF( tmp_called_name_33 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "loc_path_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 230;
        goto try_except_handler_2;
    }

    tmp_args_element_name_67 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_value );
    if ( tmp_args_element_name_67 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_33 );

        exception_lineno = 230;
        goto try_except_handler_2;
    }
    generator->m_frame->f_lineno = 230;
    {
        PyObject *call_args[] = { tmp_args_element_name_66, tmp_args_element_name_67 };
        tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_33, call_args );
    }

    Py_DECREF( tmp_called_name_33 );
    Py_DECREF( tmp_args_element_name_67 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 230;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_m;
        var_m = tmp_assign_source_18;
        Py_XDECREF( old );
    }

    tmp_assign_source_19 = PyList_New( 0 );
    {
        PyObject *old = var_location;
        var_location = tmp_assign_source_19;
        Py_XDECREF( old );
    }

    tmp_iter_arg_2 = var_m;

    tmp_assign_source_20 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;
        goto try_except_handler_2;
    }
    {
        PyObject *old = tmp_for_loop_2__for_iterator;
        tmp_for_loop_2__for_iterator = tmp_assign_source_20;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_3:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

    tmp_assign_source_21 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_21 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_3;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            generator->m_frame->f_lineno = 232;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_21;
        Py_XDECREF( old );
    }

    tmp_assign_source_22 = tmp_for_loop_2__iter_value;

    {
        PyObject *old = var_g;
        var_g = tmp_assign_source_22;
        Py_INCREF( var_g );
        Py_XDECREF( old );
    }

    tmp_called_instance_14 = var_g;

    generator->m_frame->f_lineno = 233;
    tmp_cond_value_11 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_14, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

    if ( tmp_cond_value_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 233;
        goto try_except_handler_3;
    }
    tmp_cond_truth_11 = CHECK_IF_TRUE( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_11 );

        exception_lineno = 233;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_source_name_27 = var_location;

    if ( tmp_source_name_27 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "location" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 234;
        goto try_except_handler_3;
    }

    tmp_called_name_34 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_append );
    if ( tmp_called_name_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 234;
        goto try_except_handler_3;
    }
    tmp_source_name_28 = const_str_digest_768b2bc4cb25c1172f889d1b7de16791;
    tmp_called_name_35 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_format );
    assert( tmp_called_name_35 != NULL );
    tmp_called_instance_15 = var_g;

    if ( tmp_called_instance_15 == NULL )
    {
        Py_DECREF( tmp_called_name_34 );
        Py_DECREF( tmp_called_name_35 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "g" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 234;
        goto try_except_handler_3;
    }

    generator->m_frame->f_lineno = 234;
    tmp_int_arg_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_15, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_34 );
        Py_DECREF( tmp_called_name_35 );

        exception_lineno = 234;
        goto try_except_handler_3;
    }
    tmp_left_name_6 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_left_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_34 );
        Py_DECREF( tmp_called_name_35 );

        exception_lineno = 234;
        goto try_except_handler_3;
    }
    tmp_right_name_6 = const_int_pos_1;
    tmp_args_element_name_69 = BINARY_OPERATION_ADD( tmp_left_name_6, tmp_right_name_6 );
    Py_DECREF( tmp_left_name_6 );
    if ( tmp_args_element_name_69 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_34 );
        Py_DECREF( tmp_called_name_35 );

        exception_lineno = 234;
        goto try_except_handler_3;
    }
    generator->m_frame->f_lineno = 234;
    {
        PyObject *call_args[] = { tmp_args_element_name_69 };
        tmp_args_element_name_68 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_35, call_args );
    }

    Py_DECREF( tmp_called_name_35 );
    Py_DECREF( tmp_args_element_name_69 );
    if ( tmp_args_element_name_68 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_34 );

        exception_lineno = 234;
        goto try_except_handler_3;
    }
    generator->m_frame->f_lineno = 234;
    {
        PyObject *call_args[] = { tmp_args_element_name_68 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_34, call_args );
    }

    Py_DECREF( tmp_called_name_34 );
    Py_DECREF( tmp_args_element_name_68 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 234;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_12;
    branch_no_12:;
    tmp_len_arg_1 = var_location;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "location" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 236;
        goto try_except_handler_3;
    }

    tmp_compare_left_2 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;
        goto try_except_handler_3;
    }
    tmp_compare_right_2 = const_int_pos_1;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 236;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_called_instance_16 = var_location;

    if ( tmp_called_instance_16 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "location" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 237;
        goto try_except_handler_3;
    }

    generator->m_frame->f_lineno = 237;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_16, const_str_plain_append, &PyTuple_GET_ITEM( const_tuple_str_dot_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_13;
    branch_no_13:;
    tmp_called_instance_17 = var_location;

    if ( tmp_called_instance_17 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "location" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 239;
        goto try_except_handler_3;
    }

    generator->m_frame->f_lineno = 239;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_17, const_str_plain_append, &PyTuple_GET_ITEM( const_tuple_str_chr_45_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    branch_end_13:;
    tmp_source_name_29 = var_location;

    if ( tmp_source_name_29 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "location" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 240;
        goto try_except_handler_3;
    }

    tmp_called_name_36 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_append );
    if ( tmp_called_name_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        goto try_except_handler_3;
    }
    tmp_called_instance_18 = var_g;

    if ( tmp_called_instance_18 == NULL )
    {
        Py_DECREF( tmp_called_name_36 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "g" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 240;
        goto try_except_handler_3;
    }

    generator->m_frame->f_lineno = 240;
    tmp_args_element_name_70 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_18, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_2_tuple, 0 ) );

    if ( tmp_args_element_name_70 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_36 );

        exception_lineno = 240;
        goto try_except_handler_3;
    }
    generator->m_frame->f_lineno = 240;
    {
        PyObject *call_args[] = { tmp_args_element_name_70 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_36, call_args );
    }

    Py_DECREF( tmp_called_name_36 );
    Py_DECREF( tmp_args_element_name_70 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    branch_end_12:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;
        goto try_except_handler_3;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    tmp_cond_value_12 = var_location;

    if ( tmp_cond_value_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "location" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 241;
        goto try_except_handler_2;
    }

    tmp_cond_truth_12 = CHECK_IF_TRUE( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_12 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_source_name_30 = const_str_empty;
    tmp_called_name_37 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_join );
    assert( tmp_called_name_37 != NULL );
    tmp_args_element_name_71 = var_location;

    if ( tmp_args_element_name_71 == NULL )
    {
        Py_DECREF( tmp_called_name_37 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "location" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 242;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 242;
    {
        PyObject *call_args[] = { tmp_args_element_name_71 };
        tmp_assattr_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_37, call_args );
    }

    Py_DECREF( tmp_called_name_37 );
    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;
        goto try_except_handler_2;
    }
    tmp_assattr_target_5 = var_info;

    if ( tmp_assattr_target_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "info" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 242;
        goto try_except_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_location, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        exception_lineno = 242;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_assattr_name_5 );
    branch_no_14:;
    branch_no_11:;
    tmp_called_instance_19 = var_info;

    if ( tmp_called_instance_19 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "info" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 243;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 243;
    tmp_assattr_name_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_19, const_str_plain_usb_info );
    if ( tmp_assattr_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 243;
        goto try_except_handler_2;
    }
    tmp_assattr_target_6 = var_info;

    if ( tmp_assattr_target_6 == NULL )
    {
        Py_DECREF( tmp_assattr_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "info" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 243;
        goto try_except_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_hwid, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_6 );

        exception_lineno = 243;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_assattr_name_6 );
    goto branch_end_7;
    branch_no_7:;
    tmp_called_instance_20 = var_szHardwareID_str;

    if ( tmp_called_instance_20 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "szHardwareID_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 244;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 244;
    tmp_cond_value_13 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_20, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_plain_FTDIBUS_tuple, 0 ) );

    if ( tmp_cond_value_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;
        goto try_except_handler_2;
    }
    tmp_cond_truth_13 = CHECK_IF_TRUE( tmp_cond_value_13 );
    if ( tmp_cond_truth_13 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_13 );

        exception_lineno = 244;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_13 );
    if ( tmp_cond_truth_13 == 1 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_source_name_31 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_31 == NULL ))
    {
        tmp_source_name_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_31 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 245;
        goto try_except_handler_2;
    }

    tmp_called_name_38 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_search );
    if ( tmp_called_name_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 245;
        goto try_except_handler_2;
    }
    tmp_args_element_name_72 = const_str_digest_4d3f565b0dfa5040aa4e9ae0d9bdba89;
    tmp_args_element_name_73 = var_szHardwareID_str;

    if ( tmp_args_element_name_73 == NULL )
    {
        Py_DECREF( tmp_called_name_38 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "szHardwareID_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 245;
        goto try_except_handler_2;
    }

    tmp_source_name_32 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_32 == NULL ))
    {
        tmp_source_name_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_32 == NULL )
    {
        Py_DECREF( tmp_called_name_38 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 245;
        goto try_except_handler_2;
    }

    tmp_args_element_name_74 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_I );
    if ( tmp_args_element_name_74 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_38 );

        exception_lineno = 245;
        goto try_except_handler_2;
    }
    generator->m_frame->f_lineno = 245;
    {
        PyObject *call_args[] = { tmp_args_element_name_72, tmp_args_element_name_73, tmp_args_element_name_74 };
        tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_38, call_args );
    }

    Py_DECREF( tmp_called_name_38 );
    Py_DECREF( tmp_args_element_name_74 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 245;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_m;
        var_m = tmp_assign_source_23;
        Py_XDECREF( old );
    }

    tmp_cond_value_14 = var_m;

    tmp_cond_truth_14 = CHECK_IF_TRUE( tmp_cond_value_14 );
    if ( tmp_cond_truth_14 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;
        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_14 == 1 )
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_called_instance_21 = var_m;

    generator->m_frame->f_lineno = 247;
    tmp_value_name_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_21, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

    if ( tmp_value_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        goto try_except_handler_2;
    }
    tmp_base_name_3 = const_int_pos_16;
    tmp_assattr_name_7 = TO_INT2( tmp_value_name_3, tmp_base_name_3 );
    Py_DECREF( tmp_value_name_3 );
    if ( tmp_assattr_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        goto try_except_handler_2;
    }
    tmp_assattr_target_7 = var_info;

    if ( tmp_assattr_target_7 == NULL )
    {
        Py_DECREF( tmp_assattr_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "info" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 247;
        goto try_except_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_vid, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_7 );

        exception_lineno = 247;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_assattr_name_7 );
    tmp_called_instance_22 = var_m;

    if ( tmp_called_instance_22 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "m" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 248;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 248;
    tmp_value_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_22, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_2_tuple, 0 ) );

    if ( tmp_value_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 248;
        goto try_except_handler_2;
    }
    tmp_base_name_4 = const_int_pos_16;
    tmp_assattr_name_8 = TO_INT2( tmp_value_name_4, tmp_base_name_4 );
    Py_DECREF( tmp_value_name_4 );
    if ( tmp_assattr_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 248;
        goto try_except_handler_2;
    }
    tmp_assattr_target_8 = var_info;

    if ( tmp_assattr_target_8 == NULL )
    {
        Py_DECREF( tmp_assattr_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "info" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 248;
        goto try_except_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_pid, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_8 );

        exception_lineno = 248;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_assattr_name_8 );
    tmp_called_instance_23 = var_m;

    if ( tmp_called_instance_23 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "m" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 249;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 249;
    tmp_cond_value_15 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_23, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_4_tuple, 0 ) );

    if ( tmp_cond_value_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        goto try_except_handler_2;
    }
    tmp_cond_truth_15 = CHECK_IF_TRUE( tmp_cond_value_15 );
    if ( tmp_cond_truth_15 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_15 );

        exception_lineno = 249;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_15 );
    if ( tmp_cond_truth_15 == 1 )
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    tmp_called_instance_24 = var_m;

    if ( tmp_called_instance_24 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "m" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 250;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 250;
    tmp_assattr_name_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_24, const_str_plain_group, &PyTuple_GET_ITEM( const_tuple_int_pos_4_tuple, 0 ) );

    if ( tmp_assattr_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 250;
        goto try_except_handler_2;
    }
    tmp_assattr_target_9 = var_info;

    if ( tmp_assattr_target_9 == NULL )
    {
        Py_DECREF( tmp_assattr_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "info" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 250;
        goto try_except_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_serial_number, tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_9 );

        exception_lineno = 250;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_assattr_name_9 );
    branch_no_17:;
    branch_no_16:;
    tmp_called_instance_25 = var_info;

    if ( tmp_called_instance_25 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "info" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 252;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 252;
    tmp_assattr_name_10 = CALL_METHOD_NO_ARGS( tmp_called_instance_25, const_str_plain_usb_info );
    if ( tmp_assattr_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        goto try_except_handler_2;
    }
    tmp_assattr_target_10 = var_info;

    if ( tmp_assattr_target_10 == NULL )
    {
        Py_DECREF( tmp_assattr_name_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "info" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 252;
        goto try_except_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_hwid, tmp_assattr_name_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_10 );

        exception_lineno = 252;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_assattr_name_10 );
    goto branch_end_15;
    branch_no_15:;
    tmp_assattr_name_11 = var_szHardwareID_str;

    if ( tmp_assattr_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "szHardwareID_str" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 254;
        goto try_except_handler_2;
    }

    tmp_assattr_target_11 = var_info;

    if ( tmp_assattr_target_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "info" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 254;
        goto try_except_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_hwid, tmp_assattr_name_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto try_except_handler_2;
    }
    branch_end_15:;
    branch_end_7:;
    tmp_called_instance_26 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_called_instance_26 == NULL ))
    {
        tmp_called_instance_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_called_instance_26 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 257;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 257;
    tmp_assign_source_24 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_26, const_str_plain_create_unicode_buffer, &PyTuple_GET_ITEM( const_tuple_int_pos_250_tuple, 0 ) );

    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 257;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_szFriendlyName;
        var_szFriendlyName = tmp_assign_source_24;
        Py_XDECREF( old );
    }

    tmp_called_name_39 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceRegistryProperty );

    if (unlikely( tmp_called_name_39 == NULL ))
    {
        tmp_called_name_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceRegistryProperty );
    }

    if ( tmp_called_name_39 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiGetDeviceRegistryProperty" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 258;
        goto try_except_handler_2;
    }

    tmp_args_element_name_75 = var_g_hdi;

    if ( tmp_args_element_name_75 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "g_hdi" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 259;
        goto try_except_handler_2;
    }

    tmp_source_name_33 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_33 == NULL ))
    {
        tmp_source_name_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_33 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 260;
        goto try_except_handler_2;
    }

    tmp_called_name_40 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_byref );
    if ( tmp_called_name_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 260;
        goto try_except_handler_2;
    }
    tmp_args_element_name_77 = var_devinfo;

    if ( tmp_args_element_name_77 == NULL )
    {
        Py_DECREF( tmp_called_name_40 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "devinfo" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 260;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 260;
    {
        PyObject *call_args[] = { tmp_args_element_name_77 };
        tmp_args_element_name_76 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_40, call_args );
    }

    Py_DECREF( tmp_called_name_40 );
    if ( tmp_args_element_name_76 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 260;
        goto try_except_handler_2;
    }
    tmp_args_element_name_78 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SPDRP_FRIENDLYNAME );

    if (unlikely( tmp_args_element_name_78 == NULL ))
    {
        tmp_args_element_name_78 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SPDRP_FRIENDLYNAME );
    }

    if ( tmp_args_element_name_78 == NULL )
    {
        Py_DECREF( tmp_args_element_name_76 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SPDRP_FRIENDLYNAME" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 261;
        goto try_except_handler_2;
    }

    tmp_args_element_name_79 = Py_None;
    tmp_source_name_34 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_34 == NULL ))
    {
        tmp_source_name_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_34 == NULL )
    {
        Py_DECREF( tmp_args_element_name_76 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 264;
        goto try_except_handler_2;
    }

    tmp_called_name_41 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_byref );
    if ( tmp_called_name_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_76 );

        exception_lineno = 264;
        goto try_except_handler_2;
    }
    tmp_args_element_name_81 = var_szFriendlyName;

    if ( tmp_args_element_name_81 == NULL )
    {
        Py_DECREF( tmp_args_element_name_76 );
        Py_DECREF( tmp_called_name_41 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "szFriendlyName" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 264;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 264;
    {
        PyObject *call_args[] = { tmp_args_element_name_81 };
        tmp_args_element_name_80 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_41, call_args );
    }

    Py_DECREF( tmp_called_name_41 );
    if ( tmp_args_element_name_80 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_76 );

        exception_lineno = 264;
        goto try_except_handler_2;
    }
    tmp_source_name_35 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_35 == NULL ))
    {
        tmp_source_name_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_35 == NULL )
    {
        Py_DECREF( tmp_args_element_name_76 );
        Py_DECREF( tmp_args_element_name_80 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 265;
        goto try_except_handler_2;
    }

    tmp_called_name_42 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_sizeof );
    if ( tmp_called_name_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_76 );
        Py_DECREF( tmp_args_element_name_80 );

        exception_lineno = 265;
        goto try_except_handler_2;
    }
    tmp_args_element_name_83 = var_szFriendlyName;

    if ( tmp_args_element_name_83 == NULL )
    {
        Py_DECREF( tmp_args_element_name_76 );
        Py_DECREF( tmp_args_element_name_80 );
        Py_DECREF( tmp_called_name_42 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "szFriendlyName" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 265;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 265;
    {
        PyObject *call_args[] = { tmp_args_element_name_83 };
        tmp_left_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_42, call_args );
    }

    Py_DECREF( tmp_called_name_42 );
    if ( tmp_left_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_76 );
        Py_DECREF( tmp_args_element_name_80 );

        exception_lineno = 265;
        goto try_except_handler_2;
    }
    tmp_right_name_7 = const_int_pos_1;
    tmp_args_element_name_82 = BINARY_OPERATION_SUB( tmp_left_name_7, tmp_right_name_7 );
    Py_DECREF( tmp_left_name_7 );
    if ( tmp_args_element_name_82 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_76 );
        Py_DECREF( tmp_args_element_name_80 );

        exception_lineno = 265;
        goto try_except_handler_2;
    }
    tmp_args_element_name_84 = Py_None;
    generator->m_frame->f_lineno = 258;
    {
        PyObject *call_args[] = { tmp_args_element_name_75, tmp_args_element_name_76, tmp_args_element_name_78, tmp_args_element_name_79, tmp_args_element_name_80, tmp_args_element_name_82, tmp_args_element_name_84 };
        tmp_cond_value_16 = CALL_FUNCTION_WITH_ARGS7( tmp_called_name_39, call_args );
    }

    Py_DECREF( tmp_args_element_name_76 );
    Py_DECREF( tmp_args_element_name_80 );
    Py_DECREF( tmp_args_element_name_82 );
    if ( tmp_cond_value_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 258;
        goto try_except_handler_2;
    }
    tmp_cond_truth_16 = CHECK_IF_TRUE( tmp_cond_value_16 );
    if ( tmp_cond_truth_16 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_16 );

        exception_lineno = 258;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_16 );
    if ( tmp_cond_truth_16 == 1 )
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    tmp_source_name_36 = var_szFriendlyName;

    if ( tmp_source_name_36 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "szFriendlyName" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 267;
        goto try_except_handler_2;
    }

    tmp_assattr_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_value );
    if ( tmp_assattr_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 267;
        goto try_except_handler_2;
    }
    tmp_assattr_target_12 = var_info;

    if ( tmp_assattr_target_12 == NULL )
    {
        Py_DECREF( tmp_assattr_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "info" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 267;
        goto try_except_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_description, tmp_assattr_name_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_12 );

        exception_lineno = 267;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_assattr_name_12 );
    branch_no_18:;
    tmp_called_instance_27 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_called_instance_27 == NULL ))
    {
        tmp_called_instance_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_called_instance_27 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 275;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 275;
    tmp_assign_source_25 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_27, const_str_plain_create_unicode_buffer, &PyTuple_GET_ITEM( const_tuple_int_pos_250_tuple, 0 ) );

    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 275;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_szManufacturer;
        var_szManufacturer = tmp_assign_source_25;
        Py_XDECREF( old );
    }

    tmp_called_name_43 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceRegistryProperty );

    if (unlikely( tmp_called_name_43 == NULL ))
    {
        tmp_called_name_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceRegistryProperty );
    }

    if ( tmp_called_name_43 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiGetDeviceRegistryProperty" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 276;
        goto try_except_handler_2;
    }

    tmp_args_element_name_85 = var_g_hdi;

    if ( tmp_args_element_name_85 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "g_hdi" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 277;
        goto try_except_handler_2;
    }

    tmp_source_name_37 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_37 == NULL ))
    {
        tmp_source_name_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_37 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 278;
        goto try_except_handler_2;
    }

    tmp_called_name_44 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_byref );
    if ( tmp_called_name_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        goto try_except_handler_2;
    }
    tmp_args_element_name_87 = var_devinfo;

    if ( tmp_args_element_name_87 == NULL )
    {
        Py_DECREF( tmp_called_name_44 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "devinfo" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 278;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 278;
    {
        PyObject *call_args[] = { tmp_args_element_name_87 };
        tmp_args_element_name_86 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_44, call_args );
    }

    Py_DECREF( tmp_called_name_44 );
    if ( tmp_args_element_name_86 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        goto try_except_handler_2;
    }
    tmp_args_element_name_88 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SPDRP_MFG );

    if (unlikely( tmp_args_element_name_88 == NULL ))
    {
        tmp_args_element_name_88 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SPDRP_MFG );
    }

    if ( tmp_args_element_name_88 == NULL )
    {
        Py_DECREF( tmp_args_element_name_86 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SPDRP_MFG" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 279;
        goto try_except_handler_2;
    }

    tmp_args_element_name_89 = Py_None;
    tmp_source_name_38 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_38 == NULL ))
    {
        tmp_source_name_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_38 == NULL )
    {
        Py_DECREF( tmp_args_element_name_86 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 282;
        goto try_except_handler_2;
    }

    tmp_called_name_45 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_byref );
    if ( tmp_called_name_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_86 );

        exception_lineno = 282;
        goto try_except_handler_2;
    }
    tmp_args_element_name_91 = var_szManufacturer;

    if ( tmp_args_element_name_91 == NULL )
    {
        Py_DECREF( tmp_args_element_name_86 );
        Py_DECREF( tmp_called_name_45 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "szManufacturer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 282;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 282;
    {
        PyObject *call_args[] = { tmp_args_element_name_91 };
        tmp_args_element_name_90 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_45, call_args );
    }

    Py_DECREF( tmp_called_name_45 );
    if ( tmp_args_element_name_90 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_86 );

        exception_lineno = 282;
        goto try_except_handler_2;
    }
    tmp_source_name_39 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_39 == NULL ))
    {
        tmp_source_name_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_39 == NULL )
    {
        Py_DECREF( tmp_args_element_name_86 );
        Py_DECREF( tmp_args_element_name_90 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 283;
        goto try_except_handler_2;
    }

    tmp_called_name_46 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_sizeof );
    if ( tmp_called_name_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_86 );
        Py_DECREF( tmp_args_element_name_90 );

        exception_lineno = 283;
        goto try_except_handler_2;
    }
    tmp_args_element_name_93 = var_szManufacturer;

    if ( tmp_args_element_name_93 == NULL )
    {
        Py_DECREF( tmp_args_element_name_86 );
        Py_DECREF( tmp_args_element_name_90 );
        Py_DECREF( tmp_called_name_46 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "szManufacturer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 283;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 283;
    {
        PyObject *call_args[] = { tmp_args_element_name_93 };
        tmp_left_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_46, call_args );
    }

    Py_DECREF( tmp_called_name_46 );
    if ( tmp_left_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_86 );
        Py_DECREF( tmp_args_element_name_90 );

        exception_lineno = 283;
        goto try_except_handler_2;
    }
    tmp_right_name_8 = const_int_pos_1;
    tmp_args_element_name_92 = BINARY_OPERATION_SUB( tmp_left_name_8, tmp_right_name_8 );
    Py_DECREF( tmp_left_name_8 );
    if ( tmp_args_element_name_92 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_86 );
        Py_DECREF( tmp_args_element_name_90 );

        exception_lineno = 283;
        goto try_except_handler_2;
    }
    tmp_args_element_name_94 = Py_None;
    generator->m_frame->f_lineno = 276;
    {
        PyObject *call_args[] = { tmp_args_element_name_85, tmp_args_element_name_86, tmp_args_element_name_88, tmp_args_element_name_89, tmp_args_element_name_90, tmp_args_element_name_92, tmp_args_element_name_94 };
        tmp_cond_value_17 = CALL_FUNCTION_WITH_ARGS7( tmp_called_name_43, call_args );
    }

    Py_DECREF( tmp_args_element_name_86 );
    Py_DECREF( tmp_args_element_name_90 );
    Py_DECREF( tmp_args_element_name_92 );
    if ( tmp_cond_value_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;
        goto try_except_handler_2;
    }
    tmp_cond_truth_17 = CHECK_IF_TRUE( tmp_cond_value_17 );
    if ( tmp_cond_truth_17 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_17 );

        exception_lineno = 276;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_17 );
    if ( tmp_cond_truth_17 == 1 )
    {
        goto branch_yes_19;
    }
    else
    {
        goto branch_no_19;
    }
    branch_yes_19:;
    tmp_source_name_40 = var_szManufacturer;

    if ( tmp_source_name_40 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "szManufacturer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 285;
        goto try_except_handler_2;
    }

    tmp_assattr_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_value );
    if ( tmp_assattr_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        goto try_except_handler_2;
    }
    tmp_assattr_target_13 = var_info;

    if ( tmp_assattr_target_13 == NULL )
    {
        Py_DECREF( tmp_assattr_name_13 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "info" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 285;
        goto try_except_handler_2;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain_manufacturer, tmp_assattr_name_13 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_13 );

        exception_lineno = 285;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_assattr_name_13 );
    branch_no_19:;
    tmp_expression_name_1 = var_info;

    if ( tmp_expression_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "info" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 286;
        goto try_except_handler_2;
    }

    tmp_unused = GENERATOR_YIELD( generator, INCREASE_REFCOUNT( tmp_expression_name_1 ) );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 286;
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        goto try_except_handler_2;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_called_name_47 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiDestroyDeviceInfoList );

    if (unlikely( tmp_called_name_47 == NULL ))
    {
        tmp_called_name_47 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiDestroyDeviceInfoList );
    }

    if ( tmp_called_name_47 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiDestroyDeviceInfoList" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 287;
        goto try_except_handler_2;
    }

    tmp_args_element_name_95 = var_g_hdi;

    if ( tmp_args_element_name_95 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "g_hdi" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 287;
        goto try_except_handler_2;
    }

    generator->m_frame->f_lineno = 287;
    {
        PyObject *call_args[] = { tmp_args_element_name_95 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_47, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

#if PYTHON_VERSION >= 340
    generator->m_frame->f_executing -= 1;
#endif

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->f_exc_type );
    Py_CLEAR( generator->m_frame->f_exc_value );
    Py_CLEAR( generator->m_frame->f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( exception_type ) )
    {
        int needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( generator->m_frame, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_tb->tb_frame != generator->m_frame )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( generator->m_frame, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( var_GUIDs )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_GUIDs,
                    var_GUIDs
                );

                assert( res == 0 );
            }

            if ( var_guids_size )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_guids_size,
                    var_guids_size
                );

                assert( res == 0 );
            }

            if ( var_index )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_index,
                    var_index
                );

                assert( res == 0 );
            }

            if ( var_g_hdi )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_g_hdi,
                    var_g_hdi
                );

                assert( res == 0 );
            }

            if ( var_devinfo )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_devinfo,
                    var_devinfo
                );

                assert( res == 0 );
            }

            if ( var_hkey )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_hkey,
                    var_hkey
                );

                assert( res == 0 );
            }

            if ( var_port_name_buffer )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_port_name_buffer,
                    var_port_name_buffer
                );

                assert( res == 0 );
            }

            if ( var_port_name_length )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_port_name_length,
                    var_port_name_length
                );

                assert( res == 0 );
            }

            if ( var_szHardwareID )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_szHardwareID,
                    var_szHardwareID
                );

                assert( res == 0 );
            }

            if ( var_szHardwareID_str )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_szHardwareID_str,
                    var_szHardwareID_str
                );

                assert( res == 0 );
            }

            if ( var_info )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_info,
                    var_info
                );

                assert( res == 0 );
            }

            if ( var_m )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_m,
                    var_m
                );

                assert( res == 0 );
            }

            if ( var_loc_path_str )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_loc_path_str,
                    var_loc_path_str
                );

                assert( res == 0 );
            }

            if ( var_location )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_location,
                    var_location
                );

                assert( res == 0 );
            }

            if ( var_g )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_g,
                    var_g
                );

                assert( res == 0 );
            }

            if ( var_szFriendlyName )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_szFriendlyName,
                    var_szFriendlyName
                );

                assert( res == 0 );
            }

            if ( var_szManufacturer )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_szManufacturer,
                    var_szManufacturer
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->f_exc_type );
    Py_CLEAR( generator->m_frame->f_exc_value );
    Py_CLEAR( generator->m_frame->f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );
    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    goto try_end_3;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var_GUIDs );
    var_GUIDs = NULL;

    Py_XDECREF( var_guids_size );
    var_guids_size = NULL;

    Py_XDECREF( var_index );
    var_index = NULL;

    Py_XDECREF( var_g_hdi );
    var_g_hdi = NULL;

    Py_XDECREF( var_devinfo );
    var_devinfo = NULL;

    Py_XDECREF( var_hkey );
    var_hkey = NULL;

    Py_XDECREF( var_port_name_buffer );
    var_port_name_buffer = NULL;

    Py_XDECREF( var_port_name_length );
    var_port_name_length = NULL;

    Py_XDECREF( var_szHardwareID );
    var_szHardwareID = NULL;

    Py_XDECREF( var_szHardwareID_str );
    var_szHardwareID_str = NULL;

    Py_XDECREF( var_info );
    var_info = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_loc_path_str );
    var_loc_path_str = NULL;

    Py_XDECREF( var_location );
    var_location = NULL;

    Py_XDECREF( var_g );
    var_g = NULL;

    Py_XDECREF( var_szFriendlyName );
    var_szFriendlyName = NULL;

    Py_XDECREF( var_szManufacturer );
    var_szManufacturer = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    Py_XDECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    Py_XDECREF( var_GUIDs );
    var_GUIDs = NULL;

    Py_XDECREF( var_guids_size );
    var_guids_size = NULL;

    Py_XDECREF( var_index );
    var_index = NULL;

    Py_XDECREF( var_g_hdi );
    var_g_hdi = NULL;

    Py_XDECREF( var_devinfo );
    var_devinfo = NULL;

    Py_XDECREF( var_hkey );
    var_hkey = NULL;

    Py_XDECREF( var_port_name_buffer );
    var_port_name_buffer = NULL;

    Py_XDECREF( var_port_name_length );
    var_port_name_length = NULL;

    Py_XDECREF( var_szHardwareID );
    var_szHardwareID = NULL;

    Py_XDECREF( var_szHardwareID_str );
    var_szHardwareID_str = NULL;

    Py_XDECREF( var_info );
    var_info = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_loc_path_str );
    var_loc_path_str = NULL;

    Py_XDECREF( var_location );
    var_location = NULL;

    Py_XDECREF( var_g );
    var_g = NULL;

    Py_XDECREF( var_szFriendlyName );
    var_szFriendlyName = NULL;

    Py_XDECREF( var_szManufacturer );
    var_szManufacturer = NULL;


    generator->m_yielded = NULL;
    return;

    function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    generator->m_yielded = NULL;
    return;
}


static PyObject *impl_serial$tools$list_ports_windows$$$function_3_comports( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_return_value;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b326b7563e32b8984ed0e5711cac07d3, module_serial$tools$list_ports_windows );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_iterate_comports );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_iterate_comports );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "iterate_comports" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 292;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 292;
    tmp_list_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 292;
        goto frame_exception_exit_1;
    }
    tmp_return_value = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 292;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto function_return_exit;

    frame_exception_exit_1:;
#if 0
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


            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$tools$list_ports_windows$$$function_3_comports );
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



static PyObject *MAKE_FUNCTION_serial$tools$list_ports_windows$$$class_1_GUID$$$function_1___str__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$tools$list_ports_windows$$$class_1_GUID$$$function_1___str__,
        const_str_plain___str__,
#if PYTHON_VERSION >= 330
        const_str_digest_116c3eaeea9958e59e9e6756df1ec9b6,
#endif
        codeobj_48da0a5213b974d93d7eda631d11b05d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$tools$list_ports_windows,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$tools$list_ports_windows$$$class_2_SP_DEVINFO_DATA$$$function_1___str__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$tools$list_ports_windows$$$class_2_SP_DEVINFO_DATA$$$function_1___str__,
        const_str_plain___str__,
#if PYTHON_VERSION >= 330
        const_str_digest_d7ba96010f1a397fbd068a8158f3fa12,
#endif
        codeobj_17656170c87e220dda6d76720d2e872e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$tools$list_ports_windows,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$tools$list_ports_windows$$$function_1_ValidHandle(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$tools$list_ports_windows$$$function_1_ValidHandle,
        const_str_plain_ValidHandle,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fe4cc9f7fff101a3c255e0acc8cc7931,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$tools$list_ports_windows,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$tools$list_ports_windows$$$function_2_iterate_comports(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$tools$list_ports_windows$$$function_2_iterate_comports,
        const_str_plain_iterate_comports,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d889dff9f2b7c5ff804bc6eacab6bdb9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$tools$list_ports_windows,
        const_str_digest_d53afb1e07f3ee81f7c6c0213dcdd766,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_serial$tools$list_ports_windows$$$function_3_comports(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$tools$list_ports_windows$$$function_3_comports,
        const_str_plain_comports,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b326b7563e32b8984ed0e5711cac07d3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$tools$list_ports_windows,
        const_str_digest_ee3920580023d1af94223c48071ae060,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_serial$tools$list_ports_windows =
{
    PyModuleDef_HEAD_INIT,
    "serial.tools.list_ports_windows",   /* m_name */
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

MOD_INIT_DECL( serial$tools$list_ports_windows )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_serial$tools$list_ports_windows );
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
    puts("serial.tools.list_ports_windows: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("serial.tools.list_ports_windows: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initserial$tools$list_ports_windows" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_serial$tools$list_ports_windows = Py_InitModule4(
        "serial.tools.list_ports_windows",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_serial$tools$list_ports_windows = PyModule_Create( &mdef_serial$tools$list_ports_windows );
#endif

    moduledict_serial$tools$list_ports_windows = (PyDictObject *)((PyModuleObject *)module_serial$tools$list_ports_windows)->md_dict;

    CHECK_OBJECT( module_serial$tools$list_ports_windows );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_1b1b6b23a4b523b9fca1e553f8d15eaf, module_serial$tools$list_ports_windows );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_serial$tools$list_ports_windows );

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
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_assign_unpack_2__assign_source = NULL;
    PyObject *tmp_serial$tools$list_ports_windows_class_creation_1__bases = NULL;
    PyObject *tmp_serial$tools$list_ports_windows_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_serial$tools$list_ports_windows_class_creation_1__metaclass = NULL;
    PyObject *tmp_serial$tools$list_ports_windows_class_creation_1__prepared = NULL;
    PyObject *tmp_serial$tools$list_ports_windows_class_creation_2__bases = NULL;
    PyObject *tmp_serial$tools$list_ports_windows_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_serial$tools$list_ports_windows_class_creation_2__metaclass = NULL;
    PyObject *tmp_serial$tools$list_ports_windows_class_creation_2__prepared = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_name_8;
    PyObject *tmp_assattr_name_9;
    PyObject *tmp_assattr_name_10;
    PyObject *tmp_assattr_name_11;
    PyObject *tmp_assattr_name_12;
    PyObject *tmp_assattr_name_13;
    PyObject *tmp_assattr_name_14;
    PyObject *tmp_assattr_name_15;
    PyObject *tmp_assattr_name_16;
    PyObject *tmp_assattr_name_17;
    PyObject *tmp_assattr_name_18;
    PyObject *tmp_assattr_name_19;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_assattr_target_8;
    PyObject *tmp_assattr_target_9;
    PyObject *tmp_assattr_target_10;
    PyObject *tmp_assattr_target_11;
    PyObject *tmp_assattr_target_12;
    PyObject *tmp_assattr_target_13;
    PyObject *tmp_assattr_target_14;
    PyObject *tmp_assattr_target_15;
    PyObject *tmp_assattr_target_16;
    PyObject *tmp_assattr_target_17;
    PyObject *tmp_assattr_target_18;
    PyObject *tmp_assattr_target_19;
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
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_assign_source_26;
    PyObject *tmp_assign_source_27;
    PyObject *tmp_assign_source_28;
    PyObject *tmp_assign_source_29;
    PyObject *tmp_assign_source_30;
    PyObject *tmp_assign_source_31;
    PyObject *tmp_assign_source_32;
    PyObject *tmp_assign_source_33;
    PyObject *tmp_assign_source_34;
    PyObject *tmp_assign_source_35;
    PyObject *tmp_assign_source_36;
    PyObject *tmp_assign_source_37;
    PyObject *tmp_assign_source_38;
    PyObject *tmp_assign_source_39;
    PyObject *tmp_assign_source_40;
    PyObject *tmp_assign_source_41;
    PyObject *tmp_assign_source_42;
    PyObject *tmp_assign_source_43;
    PyObject *tmp_assign_source_44;
    PyObject *tmp_assign_source_45;
    PyObject *tmp_assign_source_46;
    PyObject *tmp_assign_source_47;
    PyObject *tmp_assign_source_48;
    PyObject *tmp_assign_source_49;
    PyObject *tmp_assign_source_50;
    PyObject *tmp_assign_source_51;
    PyObject *tmp_assign_source_52;
    PyObject *tmp_assign_source_53;
    PyObject *tmp_assign_source_54;
    PyObject *tmp_assign_source_55;
    PyObject *tmp_assign_source_56;
    PyObject *tmp_assign_source_57;
    PyObject *tmp_assign_source_58;
    PyObject *tmp_assign_source_59;
    PyObject *tmp_assign_source_60;
    PyObject *tmp_assign_source_61;
    PyObject *tmp_assign_source_62;
    PyObject *tmp_assign_source_63;
    PyObject *tmp_assign_source_64;
    PyObject *tmp_assign_source_65;
    PyObject *tmp_assign_source_66;
    PyObject *tmp_assign_source_67;
    PyObject *tmp_assign_source_68;
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_attr_2;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_source_2;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_globals_6;
    PyObject *tmp_import_globals_7;
    PyObject *tmp_import_globals_8;
    PyObject *tmp_import_globals_9;
    PyObject *tmp_import_globals_10;
    PyObject *tmp_import_globals_11;
    PyObject *tmp_import_globals_12;
    PyObject *tmp_import_globals_13;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_import_name_from_8;
    PyObject *tmp_import_name_from_9;
    PyObject *tmp_import_name_from_10;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_list_element_3;
    PyObject *tmp_list_element_4;
    PyObject *tmp_list_element_5;
    PyObject *tmp_list_element_6;
    PyObject *tmp_list_element_7;
    PyObject *tmp_list_element_8;
    PyObject *tmp_list_element_9;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_metaclass_name_2;
    int tmp_res;
    bool tmp_result;
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
    PyObject *tmp_source_name_17;
    PyObject *tmp_source_name_18;
    PyObject *tmp_source_name_19;
    PyObject *tmp_source_name_20;
    PyObject *tmp_source_name_21;
    PyObject *tmp_source_name_22;
    PyObject *tmp_source_name_23;
    PyObject *tmp_source_name_24;
    PyObject *tmp_source_name_25;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_7af243434176135357b668d213a63a9c;
    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_2a9b9e88acca55347e5ef4ae4b4dfd80;
    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    tmp_assign_source_5 = PyDict_New();
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_5 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_95e23fa2ed7347ae84322d88836fdfed, module_serial$tools$list_ports_windows );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_serial$tools$list_ports_windows)->md_dict;
    frame_module->f_lineno = 12;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_re, tmp_import_globals_1, Py_None, Py_None, const_int_0 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_6 );
    tmp_import_globals_2 = ((PyModuleObject *)module_serial$tools$list_ports_windows)->md_dict;
    frame_module->f_lineno = 13;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_ctypes, tmp_import_globals_2, Py_None, Py_None, const_int_0 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes, tmp_assign_source_7 );
    tmp_import_globals_3 = ((PyModuleObject *)module_serial$tools$list_ports_windows)->md_dict;
    frame_module->f_lineno = 14;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_5cf36b708703fd37649115cac3d2ec3c, tmp_import_globals_3, Py_None, const_tuple_str_plain_BOOL_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_BOOL );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_BOOL, tmp_assign_source_8 );
    tmp_import_globals_4 = ((PyModuleObject *)module_serial$tools$list_ports_windows)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_5cf36b708703fd37649115cac3d2ec3c, tmp_import_globals_4, Py_None, const_tuple_str_plain_HWND_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_HWND );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HWND, tmp_assign_source_9 );
    tmp_import_globals_5 = ((PyModuleObject *)module_serial$tools$list_ports_windows)->md_dict;
    frame_module->f_lineno = 16;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_digest_5cf36b708703fd37649115cac3d2ec3c, tmp_import_globals_5, Py_None, const_tuple_str_plain_DWORD_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_DWORD );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD, tmp_assign_source_10 );
    tmp_import_globals_6 = ((PyModuleObject *)module_serial$tools$list_ports_windows)->md_dict;
    frame_module->f_lineno = 17;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_digest_5cf36b708703fd37649115cac3d2ec3c, tmp_import_globals_6, Py_None, const_tuple_str_plain_WORD_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_WORD );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_WORD, tmp_assign_source_11 );
    tmp_import_globals_7 = ((PyModuleObject *)module_serial$tools$list_ports_windows)->md_dict;
    frame_module->f_lineno = 18;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_digest_5cf36b708703fd37649115cac3d2ec3c, tmp_import_globals_7, Py_None, const_tuple_str_plain_LONG_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_LONG );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_LONG, tmp_assign_source_12 );
    tmp_import_globals_8 = ((PyModuleObject *)module_serial$tools$list_ports_windows)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_digest_5cf36b708703fd37649115cac3d2ec3c, tmp_import_globals_8, Py_None, const_tuple_str_plain_ULONG_tuple, const_int_0 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_ULONG );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ULONG, tmp_assign_source_13 );
    tmp_import_globals_9 = ((PyModuleObject *)module_serial$tools$list_ports_windows)->md_dict;
    frame_module->f_lineno = 20;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_digest_5cf36b708703fd37649115cac3d2ec3c, tmp_import_globals_9, Py_None, const_tuple_str_plain_HKEY_tuple, const_int_0 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_HKEY );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HKEY, tmp_assign_source_14 );
    tmp_import_globals_10 = ((PyModuleObject *)module_serial$tools$list_ports_windows)->md_dict;
    frame_module->f_lineno = 21;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_digest_5cf36b708703fd37649115cac3d2ec3c, tmp_import_globals_10, Py_None, const_tuple_str_plain_BYTE_tuple, const_int_0 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_BYTE );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_BYTE, tmp_assign_source_15 );
    tmp_import_globals_11 = ((PyModuleObject *)module_serial$tools$list_ports_windows)->md_dict;
    frame_module->f_lineno = 22;
    tmp_assign_source_16 = IMPORT_MODULE( const_str_plain_serial, tmp_import_globals_11, Py_None, Py_None, const_int_0 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_serial, tmp_assign_source_16 );
    tmp_import_globals_12 = ((PyModuleObject *)module_serial$tools$list_ports_windows)->md_dict;
    frame_module->f_lineno = 23;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_digest_4434d3fa3d749d79efdf09f3d091b7fa, tmp_import_globals_12, Py_None, const_tuple_str_plain_ULONG_PTR_tuple, const_int_0 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_ULONG_PTR );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ULONG_PTR, tmp_assign_source_17 );
    tmp_import_globals_13 = ((PyModuleObject *)module_serial$tools$list_ports_windows)->md_dict;
    frame_module->f_lineno = 24;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_digest_2a9b9e88acca55347e5ef4ae4b4dfd80, tmp_import_globals_13, Py_None, const_tuple_str_plain_list_ports_common_tuple, const_int_0 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_list_ports_common );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_list_ports_common, tmp_assign_source_18 );
    tmp_assign_source_19 = MAKE_FUNCTION_serial$tools$list_ports_windows$$$function_1_ValidHandle(  );
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ValidHandle, tmp_assign_source_19 );
    tmp_assign_source_20 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_NULL, tmp_assign_source_20 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 34;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_21 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_c_void_p );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HDEVINFO, tmp_assign_source_21 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 35;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_22 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_c_wchar_p );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_LPCTSTR, tmp_assign_source_22 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 36;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_23 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_c_wchar_p );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PCTSTR, tmp_assign_source_23 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_24 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_c_wchar_p );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PTSTR, tmp_assign_source_24 );
    // Tried code:
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        goto try_except_handler_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_POINTER );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto try_except_handler_1;
    }
    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_args_element_name_1 == NULL ))
    {
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        goto try_except_handler_1;
    }

    frame_module->f_lineno = 38;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto try_except_handler_1;
    }
    assert( tmp_assign_unpack_1__assign_source == NULL );
    tmp_assign_unpack_1__assign_source = tmp_assign_source_25;

    goto try_end_1;
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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_26 = tmp_assign_unpack_1__assign_source;

    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_LPDWORD, tmp_assign_source_26 );
    tmp_assign_source_27 = tmp_assign_unpack_1__assign_source;

    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PDWORD, tmp_assign_source_27 );
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_1__assign_source );
    Py_DECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    // Tried code:
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;
        goto try_except_handler_2;
    }

    tmp_assign_source_28 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_c_void_p );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        goto try_except_handler_2;
    }
    assert( tmp_assign_unpack_2__assign_source == NULL );
    tmp_assign_unpack_2__assign_source = tmp_assign_source_28;

    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    tmp_assign_source_29 = tmp_assign_unpack_2__assign_source;

    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_LPBYTE, tmp_assign_source_29 );
    tmp_assign_source_30 = tmp_assign_unpack_2__assign_source;

    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PBYTE, tmp_assign_source_30 );
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_2__assign_source );
    Py_DECREF( tmp_assign_unpack_2__assign_source );
    tmp_assign_unpack_2__assign_source = NULL;

    tmp_assign_source_31 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_assign_source_31 == NULL ))
    {
        tmp_assign_source_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_assign_source_31 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 42;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ACCESS_MASK, tmp_assign_source_31 );
    tmp_assign_source_32 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ACCESS_MASK );

    if (unlikely( tmp_assign_source_32 == NULL ))
    {
        tmp_assign_source_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ACCESS_MASK );
    }

    if ( tmp_assign_source_32 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ACCESS_MASK" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 43;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_REGSAM, tmp_assign_source_32 );
    // Tried code:
    tmp_assign_source_33 = PyTuple_New( 1 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_33 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;
        goto try_except_handler_3;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_Structure );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_33 );

        exception_lineno = 46;
        goto try_except_handler_3;
    }
    PyTuple_SET_ITEM( tmp_assign_source_33, 0, tmp_tuple_element_1 );
    assert( tmp_serial$tools$list_ports_windows_class_creation_1__bases == NULL );
    tmp_serial$tools$list_ports_windows_class_creation_1__bases = tmp_assign_source_33;

    tmp_assign_source_34 = PyDict_New();
    assert( tmp_serial$tools$list_ports_windows_class_creation_1__class_decl_dict == NULL );
    tmp_serial$tools$list_ports_windows_class_creation_1__class_decl_dict = tmp_assign_source_34;

    tmp_compare_left_1 = const_str_plain_metaclass;
    tmp_compare_right_1 = tmp_serial$tools$list_ports_windows_class_creation_1__class_decl_dict;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
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
    tmp_dict_name_1 = tmp_serial$tools$list_ports_windows_class_creation_1__class_decl_dict;

    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_metaclass_name_1 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        goto try_except_handler_3;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_1 = tmp_serial$tools$list_ports_windows_class_creation_1__bases;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        goto try_except_handler_3;
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
    tmp_subscribed_name_1 = tmp_serial$tools$list_ports_windows_class_creation_1__bases;

    tmp_subscript_name_1 = const_int_0;
    tmp_type_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        goto try_except_handler_3;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        goto try_except_handler_3;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_1 != NULL );
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_serial$tools$list_ports_windows_class_creation_1__bases;

    tmp_assign_source_35 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 46;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_serial$tools$list_ports_windows_class_creation_1__metaclass == NULL );
    tmp_serial$tools$list_ports_windows_class_creation_1__metaclass = tmp_assign_source_35;

    tmp_compare_left_2 = const_str_plain_metaclass;
    tmp_compare_right_2 = tmp_serial$tools$list_ports_windows_class_creation_1__class_decl_dict;

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_In_2 == -1) );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_dictdel_dict = tmp_serial$tools$list_ports_windows_class_creation_1__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        goto try_except_handler_3;
    }
    branch_no_1:;
    tmp_hasattr_source_1 = tmp_serial$tools$list_ports_windows_class_creation_1__metaclass;

    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        goto try_except_handler_3;
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
    tmp_source_name_8 = tmp_serial$tools$list_ports_windows_class_creation_1__metaclass;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain___prepare__ );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        goto try_except_handler_3;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_GUID;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_serial$tools$list_ports_windows_class_creation_1__bases;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = tmp_serial$tools$list_ports_windows_class_creation_1__class_decl_dict;

    frame_module->f_lineno = 46;
    tmp_assign_source_36 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        goto try_except_handler_3;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_36 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_serial$tools$list_ports_windows_class_creation_1__prepared == NULL );
    tmp_serial$tools$list_ports_windows_class_creation_1__prepared = tmp_assign_source_36;

    tmp_assign_source_37 = impl_serial$tools$list_ports_windows$$$class_1_GUID( NULL, &tmp_serial$tools$list_ports_windows_class_creation_1__bases, &tmp_serial$tools$list_ports_windows_class_creation_1__class_decl_dict, &tmp_serial$tools$list_ports_windows_class_creation_1__metaclass, &tmp_serial$tools$list_ports_windows_class_creation_1__prepared );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_GUID, tmp_assign_source_37 );
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_serial$tools$list_ports_windows_class_creation_1__bases );
    tmp_serial$tools$list_ports_windows_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_serial$tools$list_ports_windows_class_creation_1__class_decl_dict );
    tmp_serial$tools$list_ports_windows_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_serial$tools$list_ports_windows_class_creation_1__metaclass );
    tmp_serial$tools$list_ports_windows_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_serial$tools$list_ports_windows_class_creation_1__prepared );
    tmp_serial$tools$list_ports_windows_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_serial$tools$list_ports_windows_class_creation_1__bases );
    tmp_serial$tools$list_ports_windows_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_serial$tools$list_ports_windows_class_creation_1__class_decl_dict );
    tmp_serial$tools$list_ports_windows_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_serial$tools$list_ports_windows_class_creation_1__metaclass );
    tmp_serial$tools$list_ports_windows_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_serial$tools$list_ports_windows_class_creation_1__prepared );
    tmp_serial$tools$list_ports_windows_class_creation_1__prepared = NULL;

    // Tried code:
    tmp_assign_source_38 = PyTuple_New( 1 );
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_38 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        goto try_except_handler_4;
    }

    tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_Structure );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_38 );

        exception_lineno = 64;
        goto try_except_handler_4;
    }
    PyTuple_SET_ITEM( tmp_assign_source_38, 0, tmp_tuple_element_3 );
    assert( tmp_serial$tools$list_ports_windows_class_creation_2__bases == NULL );
    tmp_serial$tools$list_ports_windows_class_creation_2__bases = tmp_assign_source_38;

    tmp_assign_source_39 = PyDict_New();
    assert( tmp_serial$tools$list_ports_windows_class_creation_2__class_decl_dict == NULL );
    tmp_serial$tools$list_ports_windows_class_creation_2__class_decl_dict = tmp_assign_source_39;

    tmp_compare_left_3 = const_str_plain_metaclass;
    tmp_compare_right_3 = tmp_serial$tools$list_ports_windows_class_creation_2__class_decl_dict;

    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    assert( !(tmp_cmp_In_3 == -1) );
    if ( tmp_cmp_In_3 == 1 )
    {
        goto condexpr_true_4;
    }
    else
    {
        goto condexpr_false_4;
    }
    condexpr_true_4:;
    tmp_dict_name_2 = tmp_serial$tools$list_ports_windows_class_creation_2__class_decl_dict;

    tmp_key_name_2 = const_str_plain_metaclass;
    tmp_metaclass_name_2 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        goto try_except_handler_4;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_cond_value_2 = tmp_serial$tools$list_ports_windows_class_creation_2__bases;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        goto try_except_handler_4;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto condexpr_true_5;
    }
    else
    {
        goto condexpr_false_5;
    }
    condexpr_true_5:;
    tmp_subscribed_name_2 = tmp_serial$tools$list_ports_windows_class_creation_2__bases;

    tmp_subscript_name_2 = const_int_0;
    tmp_type_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_type_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        goto try_except_handler_4;
    }
    tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
    Py_DECREF( tmp_type_arg_2 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        goto try_except_handler_4;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_metaclass_name_2 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_2 != NULL );
    Py_INCREF( tmp_metaclass_name_2 );
    condexpr_end_5:;
    condexpr_end_4:;
    tmp_bases_name_2 = tmp_serial$tools$list_ports_windows_class_creation_2__bases;

    tmp_assign_source_40 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_2 );

        exception_lineno = 64;
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_metaclass_name_2 );
    assert( tmp_serial$tools$list_ports_windows_class_creation_2__metaclass == NULL );
    tmp_serial$tools$list_ports_windows_class_creation_2__metaclass = tmp_assign_source_40;

    tmp_compare_left_4 = const_str_plain_metaclass;
    tmp_compare_right_4 = tmp_serial$tools$list_ports_windows_class_creation_2__class_decl_dict;

    tmp_cmp_In_4 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    assert( !(tmp_cmp_In_4 == -1) );
    if ( tmp_cmp_In_4 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_dictdel_dict = tmp_serial$tools$list_ports_windows_class_creation_2__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        goto try_except_handler_4;
    }
    branch_no_2:;
    tmp_hasattr_source_2 = tmp_serial$tools$list_ports_windows_class_creation_2__metaclass;

    tmp_hasattr_attr_2 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_2, tmp_hasattr_attr_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        goto try_except_handler_4;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_6;
    }
    else
    {
        goto condexpr_false_6;
    }
    condexpr_true_6:;
    tmp_source_name_10 = tmp_serial$tools$list_ports_windows_class_creation_2__metaclass;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain___prepare__ );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        goto try_except_handler_4;
    }
    tmp_args_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_4 = const_str_plain_SP_DEVINFO_DATA;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = tmp_serial$tools$list_ports_windows_class_creation_2__bases;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
    tmp_kw_name_2 = tmp_serial$tools$list_ports_windows_class_creation_2__class_decl_dict;

    frame_module->f_lineno = 64;
    tmp_assign_source_41 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        goto try_except_handler_4;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_41 = PyDict_New();
    condexpr_end_6:;
    assert( tmp_serial$tools$list_ports_windows_class_creation_2__prepared == NULL );
    tmp_serial$tools$list_ports_windows_class_creation_2__prepared = tmp_assign_source_41;

    tmp_assign_source_42 = impl_serial$tools$list_ports_windows$$$class_2_SP_DEVINFO_DATA( NULL, &tmp_serial$tools$list_ports_windows_class_creation_2__bases, &tmp_serial$tools$list_ports_windows_class_creation_2__class_decl_dict, &tmp_serial$tools$list_ports_windows_class_creation_2__metaclass, &tmp_serial$tools$list_ports_windows_class_creation_2__prepared );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SP_DEVINFO_DATA, tmp_assign_source_42 );
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_serial$tools$list_ports_windows_class_creation_2__bases );
    tmp_serial$tools$list_ports_windows_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_serial$tools$list_ports_windows_class_creation_2__class_decl_dict );
    tmp_serial$tools$list_ports_windows_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_serial$tools$list_ports_windows_class_creation_2__metaclass );
    tmp_serial$tools$list_ports_windows_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_serial$tools$list_ports_windows_class_creation_2__prepared );
    tmp_serial$tools$list_ports_windows_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_serial$tools$list_ports_windows_class_creation_2__bases );
    tmp_serial$tools$list_ports_windows_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_serial$tools$list_ports_windows_class_creation_2__class_decl_dict );
    tmp_serial$tools$list_ports_windows_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_serial$tools$list_ports_windows_class_creation_2__metaclass );
    tmp_serial$tools$list_ports_windows_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_serial$tools$list_ports_windows_class_creation_2__prepared );
    tmp_serial$tools$list_ports_windows_class_creation_2__prepared = NULL;

    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_POINTER );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SP_DEVINFO_DATA );

    if (unlikely( tmp_args_element_name_2 == NULL ))
    {
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SP_DEVINFO_DATA );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SP_DEVINFO_DATA" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 76;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_43 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PSP_DEVINFO_DATA, tmp_assign_source_43 );
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_44 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_c_void_p );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PSP_DEVICE_INTERFACE_DETAIL_DATA, tmp_assign_source_44 );
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_windll );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 80;
    tmp_assign_source_45 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_LoadLibrary, &PyTuple_GET_ITEM( const_tuple_str_plain_setupapi_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_setupapi, tmp_assign_source_45 );
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_setupapi );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_setupapi );
    }

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "setupapi" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 81;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_46 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_SetupDiDestroyDeviceInfoList );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiDestroyDeviceInfoList, tmp_assign_source_46 );
    tmp_assattr_name_1 = PyList_New( 1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HDEVINFO );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HDEVINFO );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HDEVINFO" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_1, 0, tmp_list_element_1 );
    tmp_assattr_target_1 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiDestroyDeviceInfoList );

    if (unlikely( tmp_assattr_target_1 == NULL ))
    {
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiDestroyDeviceInfoList );
    }

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiDestroyDeviceInfoList" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_argtypes, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 82;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_assattr_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_2 == NULL ))
    {
        tmp_assattr_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiDestroyDeviceInfoList );

    if (unlikely( tmp_assattr_target_2 == NULL ))
    {
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiDestroyDeviceInfoList );
    }

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiDestroyDeviceInfoList" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_restype, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        goto frame_exception_exit_1;
    }
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_setupapi );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_setupapi );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "setupapi" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_47 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_SetupDiClassGuidsFromNameW );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiClassGuidsFromName, tmp_assign_source_47 );
    tmp_assattr_name_3 = PyList_New( 4 );
    tmp_list_element_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PCTSTR );

    if (unlikely( tmp_list_element_2 == NULL ))
    {
        tmp_list_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PCTSTR );
    }

    if ( tmp_list_element_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PCTSTR" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_assattr_name_3, 0, tmp_list_element_2 );
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_16 == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_POINTER );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 86;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_GUID );

    if (unlikely( tmp_args_element_name_3 == NULL ))
    {
        tmp_args_element_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GUID );
    }

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GUID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 86;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_list_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_list_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 86;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assattr_name_3, 1, tmp_list_element_2 );
    tmp_list_element_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_2 == NULL ))
    {
        tmp_list_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_assattr_name_3, 2, tmp_list_element_2 );
    tmp_list_element_2 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PDWORD );

    if (unlikely( tmp_list_element_2 == NULL ))
    {
        tmp_list_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PDWORD );
    }

    if ( tmp_list_element_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PDWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_assattr_name_3, 3, tmp_list_element_2 );
    tmp_assattr_target_3 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiClassGuidsFromName );

    if (unlikely( tmp_assattr_target_3 == NULL ))
    {
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiClassGuidsFromName );
    }

    if ( tmp_assattr_target_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiClassGuidsFromName" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_argtypes, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 86;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    tmp_assattr_name_4 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_4 == NULL ))
    {
        tmp_assattr_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_4 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiClassGuidsFromName );

    if (unlikely( tmp_assattr_target_4 == NULL ))
    {
        tmp_assattr_target_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiClassGuidsFromName );
    }

    if ( tmp_assattr_target_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiClassGuidsFromName" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_restype, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        goto frame_exception_exit_1;
    }
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_setupapi );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_setupapi );
    }

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "setupapi" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 89;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_48 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_SetupDiEnumDeviceInfo );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiEnumDeviceInfo, tmp_assign_source_48 );
    tmp_assattr_name_5 = PyList_New( 3 );
    tmp_list_element_3 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HDEVINFO );

    if (unlikely( tmp_list_element_3 == NULL ))
    {
        tmp_list_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HDEVINFO );
    }

    if ( tmp_list_element_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HDEVINFO" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_assattr_name_5, 0, tmp_list_element_3 );
    tmp_list_element_3 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_3 == NULL ))
    {
        tmp_list_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_assattr_name_5, 1, tmp_list_element_3 );
    tmp_list_element_3 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PSP_DEVINFO_DATA );

    if (unlikely( tmp_list_element_3 == NULL ))
    {
        tmp_list_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PSP_DEVINFO_DATA );
    }

    if ( tmp_list_element_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PSP_DEVINFO_DATA" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_assattr_name_5, 2, tmp_list_element_3 );
    tmp_assattr_target_5 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiEnumDeviceInfo );

    if (unlikely( tmp_assattr_target_5 == NULL ))
    {
        tmp_assattr_target_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiEnumDeviceInfo );
    }

    if ( tmp_assattr_target_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiEnumDeviceInfo" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_argtypes, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        exception_lineno = 90;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_5 );
    tmp_assattr_name_6 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_6 == NULL ))
    {
        tmp_assattr_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 91;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_6 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiEnumDeviceInfo );

    if (unlikely( tmp_assattr_target_6 == NULL ))
    {
        tmp_assattr_target_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiEnumDeviceInfo );
    }

    if ( tmp_assattr_target_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiEnumDeviceInfo" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 91;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_restype, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        goto frame_exception_exit_1;
    }
    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_setupapi );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_setupapi );
    }

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "setupapi" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 93;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_49 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_SetupDiGetClassDevsW );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetClassDevs, tmp_assign_source_49 );
    tmp_assattr_name_7 = PyList_New( 4 );
    tmp_source_name_19 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_19 == NULL ))
    {
        tmp_source_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_19 == NULL )
    {
        Py_DECREF( tmp_assattr_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_POINTER );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_7 );

        exception_lineno = 94;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_GUID );

    if (unlikely( tmp_args_element_name_4 == NULL ))
    {
        tmp_args_element_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GUID );
    }

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_7 );
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GUID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 94;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_list_element_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_list_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_7 );

        exception_lineno = 94;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assattr_name_7, 0, tmp_list_element_4 );
    tmp_list_element_4 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PCTSTR );

    if (unlikely( tmp_list_element_4 == NULL ))
    {
        tmp_list_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PCTSTR );
    }

    if ( tmp_list_element_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PCTSTR" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_assattr_name_7, 1, tmp_list_element_4 );
    tmp_list_element_4 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HWND );

    if (unlikely( tmp_list_element_4 == NULL ))
    {
        tmp_list_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HWND );
    }

    if ( tmp_list_element_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HWND" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_assattr_name_7, 2, tmp_list_element_4 );
    tmp_list_element_4 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_4 == NULL ))
    {
        tmp_list_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_assattr_name_7, 3, tmp_list_element_4 );
    tmp_assattr_target_7 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetClassDevs );

    if (unlikely( tmp_assattr_target_7 == NULL ))
    {
        tmp_assattr_target_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiGetClassDevs );
    }

    if ( tmp_assattr_target_7 == NULL )
    {
        Py_DECREF( tmp_assattr_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiGetClassDevs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_argtypes, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_7 );

        exception_lineno = 94;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_7 );
    tmp_assattr_name_8 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HDEVINFO );

    if (unlikely( tmp_assattr_name_8 == NULL ))
    {
        tmp_assattr_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HDEVINFO );
    }

    if ( tmp_assattr_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HDEVINFO" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 95;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_8 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetClassDevs );

    if (unlikely( tmp_assattr_target_8 == NULL ))
    {
        tmp_assattr_target_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiGetClassDevs );
    }

    if ( tmp_assattr_target_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiGetClassDevs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 95;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_restype, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_9 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ValidHandle );

    if (unlikely( tmp_assattr_name_9 == NULL ))
    {
        tmp_assattr_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ValidHandle );
    }

    if ( tmp_assattr_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ValidHandle" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_9 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetClassDevs );

    if (unlikely( tmp_assattr_target_9 == NULL ))
    {
        tmp_assattr_target_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiGetClassDevs );
    }

    if ( tmp_assattr_target_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiGetClassDevs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_errcheck, tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        goto frame_exception_exit_1;
    }
    tmp_source_name_20 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_setupapi );

    if (unlikely( tmp_source_name_20 == NULL ))
    {
        tmp_source_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_setupapi );
    }

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "setupapi" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 98;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_50 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_SetupDiGetDeviceRegistryPropertyW );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceRegistryProperty, tmp_assign_source_50 );
    tmp_assattr_name_10 = PyList_New( 7 );
    tmp_list_element_5 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HDEVINFO );

    if (unlikely( tmp_list_element_5 == NULL ))
    {
        tmp_list_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HDEVINFO );
    }

    if ( tmp_list_element_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_10 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HDEVINFO" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_assattr_name_10, 0, tmp_list_element_5 );
    tmp_list_element_5 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PSP_DEVINFO_DATA );

    if (unlikely( tmp_list_element_5 == NULL ))
    {
        tmp_list_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PSP_DEVINFO_DATA );
    }

    if ( tmp_list_element_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_10 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PSP_DEVINFO_DATA" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_assattr_name_10, 1, tmp_list_element_5 );
    tmp_list_element_5 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_5 == NULL ))
    {
        tmp_list_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_10 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_assattr_name_10, 2, tmp_list_element_5 );
    tmp_list_element_5 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PDWORD );

    if (unlikely( tmp_list_element_5 == NULL ))
    {
        tmp_list_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PDWORD );
    }

    if ( tmp_list_element_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_10 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PDWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_assattr_name_10, 3, tmp_list_element_5 );
    tmp_list_element_5 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PBYTE );

    if (unlikely( tmp_list_element_5 == NULL ))
    {
        tmp_list_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PBYTE );
    }

    if ( tmp_list_element_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_10 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PBYTE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_assattr_name_10, 4, tmp_list_element_5 );
    tmp_list_element_5 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_5 == NULL ))
    {
        tmp_list_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_10 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_assattr_name_10, 5, tmp_list_element_5 );
    tmp_list_element_5 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PDWORD );

    if (unlikely( tmp_list_element_5 == NULL ))
    {
        tmp_list_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PDWORD );
    }

    if ( tmp_list_element_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_10 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PDWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_assattr_name_10, 6, tmp_list_element_5 );
    tmp_assattr_target_10 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceRegistryProperty );

    if (unlikely( tmp_assattr_target_10 == NULL ))
    {
        tmp_assattr_target_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceRegistryProperty );
    }

    if ( tmp_assattr_target_10 == NULL )
    {
        Py_DECREF( tmp_assattr_name_10 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiGetDeviceRegistryProperty" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_argtypes, tmp_assattr_name_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_10 );

        exception_lineno = 99;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_10 );
    tmp_assattr_name_11 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_11 == NULL ))
    {
        tmp_assattr_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 100;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_11 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceRegistryProperty );

    if (unlikely( tmp_assattr_target_11 == NULL ))
    {
        tmp_assattr_target_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceRegistryProperty );
    }

    if ( tmp_assattr_target_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiGetDeviceRegistryProperty" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 100;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_restype, tmp_assattr_name_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        goto frame_exception_exit_1;
    }
    tmp_source_name_21 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_setupapi );

    if (unlikely( tmp_source_name_21 == NULL ))
    {
        tmp_source_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_setupapi );
    }

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "setupapi" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 102;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_51 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_SetupDiGetDeviceInstanceIdW );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceInstanceId, tmp_assign_source_51 );
    tmp_assattr_name_12 = PyList_New( 5 );
    tmp_list_element_6 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HDEVINFO );

    if (unlikely( tmp_list_element_6 == NULL ))
    {
        tmp_list_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HDEVINFO );
    }

    if ( tmp_list_element_6 == NULL )
    {
        Py_DECREF( tmp_assattr_name_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HDEVINFO" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 103;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_6 );
    PyList_SET_ITEM( tmp_assattr_name_12, 0, tmp_list_element_6 );
    tmp_list_element_6 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PSP_DEVINFO_DATA );

    if (unlikely( tmp_list_element_6 == NULL ))
    {
        tmp_list_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PSP_DEVINFO_DATA );
    }

    if ( tmp_list_element_6 == NULL )
    {
        Py_DECREF( tmp_assattr_name_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PSP_DEVINFO_DATA" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 103;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_6 );
    PyList_SET_ITEM( tmp_assattr_name_12, 1, tmp_list_element_6 );
    tmp_list_element_6 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PTSTR );

    if (unlikely( tmp_list_element_6 == NULL ))
    {
        tmp_list_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PTSTR );
    }

    if ( tmp_list_element_6 == NULL )
    {
        Py_DECREF( tmp_assattr_name_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PTSTR" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 103;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_6 );
    PyList_SET_ITEM( tmp_assattr_name_12, 2, tmp_list_element_6 );
    tmp_list_element_6 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_6 == NULL ))
    {
        tmp_list_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_6 == NULL )
    {
        Py_DECREF( tmp_assattr_name_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 103;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_6 );
    PyList_SET_ITEM( tmp_assattr_name_12, 3, tmp_list_element_6 );
    tmp_list_element_6 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PDWORD );

    if (unlikely( tmp_list_element_6 == NULL ))
    {
        tmp_list_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PDWORD );
    }

    if ( tmp_list_element_6 == NULL )
    {
        Py_DECREF( tmp_assattr_name_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PDWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 103;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_6 );
    PyList_SET_ITEM( tmp_assattr_name_12, 4, tmp_list_element_6 );
    tmp_assattr_target_12 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceInstanceId );

    if (unlikely( tmp_assattr_target_12 == NULL ))
    {
        tmp_assattr_target_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceInstanceId );
    }

    if ( tmp_assattr_target_12 == NULL )
    {
        Py_DECREF( tmp_assattr_name_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiGetDeviceInstanceId" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 103;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_argtypes, tmp_assattr_name_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_12 );

        exception_lineno = 103;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_12 );
    tmp_assattr_name_13 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_13 == NULL ))
    {
        tmp_assattr_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 104;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_13 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceInstanceId );

    if (unlikely( tmp_assattr_target_13 == NULL ))
    {
        tmp_assattr_target_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiGetDeviceInstanceId );
    }

    if ( tmp_assattr_target_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiGetDeviceInstanceId" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 104;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain_restype, tmp_assattr_name_13 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        goto frame_exception_exit_1;
    }
    tmp_source_name_22 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_setupapi );

    if (unlikely( tmp_source_name_22 == NULL ))
    {
        tmp_source_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_setupapi );
    }

    if ( tmp_source_name_22 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "setupapi" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 106;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_52 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_SetupDiOpenDevRegKey );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiOpenDevRegKey, tmp_assign_source_52 );
    tmp_assattr_name_14 = PyList_New( 6 );
    tmp_list_element_7 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HDEVINFO );

    if (unlikely( tmp_list_element_7 == NULL ))
    {
        tmp_list_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HDEVINFO );
    }

    if ( tmp_list_element_7 == NULL )
    {
        Py_DECREF( tmp_assattr_name_14 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HDEVINFO" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 107;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_7 );
    PyList_SET_ITEM( tmp_assattr_name_14, 0, tmp_list_element_7 );
    tmp_list_element_7 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_PSP_DEVINFO_DATA );

    if (unlikely( tmp_list_element_7 == NULL ))
    {
        tmp_list_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PSP_DEVINFO_DATA );
    }

    if ( tmp_list_element_7 == NULL )
    {
        Py_DECREF( tmp_assattr_name_14 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PSP_DEVINFO_DATA" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 107;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_7 );
    PyList_SET_ITEM( tmp_assattr_name_14, 1, tmp_list_element_7 );
    tmp_list_element_7 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_7 == NULL ))
    {
        tmp_list_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_7 == NULL )
    {
        Py_DECREF( tmp_assattr_name_14 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 107;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_7 );
    PyList_SET_ITEM( tmp_assattr_name_14, 2, tmp_list_element_7 );
    tmp_list_element_7 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_7 == NULL ))
    {
        tmp_list_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_7 == NULL )
    {
        Py_DECREF( tmp_assattr_name_14 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 107;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_7 );
    PyList_SET_ITEM( tmp_assattr_name_14, 3, tmp_list_element_7 );
    tmp_list_element_7 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_7 == NULL ))
    {
        tmp_list_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_7 == NULL )
    {
        Py_DECREF( tmp_assattr_name_14 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 107;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_7 );
    PyList_SET_ITEM( tmp_assattr_name_14, 4, tmp_list_element_7 );
    tmp_list_element_7 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_REGSAM );

    if (unlikely( tmp_list_element_7 == NULL ))
    {
        tmp_list_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_REGSAM );
    }

    if ( tmp_list_element_7 == NULL )
    {
        Py_DECREF( tmp_assattr_name_14 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "REGSAM" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 107;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_7 );
    PyList_SET_ITEM( tmp_assattr_name_14, 5, tmp_list_element_7 );
    tmp_assattr_target_14 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiOpenDevRegKey );

    if (unlikely( tmp_assattr_target_14 == NULL ))
    {
        tmp_assattr_target_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiOpenDevRegKey );
    }

    if ( tmp_assattr_target_14 == NULL )
    {
        Py_DECREF( tmp_assattr_name_14 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiOpenDevRegKey" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 107;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_14, const_str_plain_argtypes, tmp_assattr_name_14 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_14 );

        exception_lineno = 107;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_14 );
    tmp_assattr_name_15 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HKEY );

    if (unlikely( tmp_assattr_name_15 == NULL ))
    {
        tmp_assattr_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HKEY );
    }

    if ( tmp_assattr_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HKEY" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 108;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_15 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SetupDiOpenDevRegKey );

    if (unlikely( tmp_assattr_target_15 == NULL ))
    {
        tmp_assattr_target_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupDiOpenDevRegKey );
    }

    if ( tmp_assattr_target_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupDiOpenDevRegKey" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 108;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_15, const_str_plain_restype, tmp_assattr_name_15 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        goto frame_exception_exit_1;
    }
    tmp_source_name_23 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_23 == NULL ))
    {
        tmp_source_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_23 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 110;
        goto frame_exception_exit_1;
    }

    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_windll );
    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 110;
    tmp_assign_source_53 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_LoadLibrary, &PyTuple_GET_ITEM( const_tuple_str_plain_Advapi32_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_2 );
    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_advapi32, tmp_assign_source_53 );
    tmp_source_name_24 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_advapi32 );

    if (unlikely( tmp_source_name_24 == NULL ))
    {
        tmp_source_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_advapi32 );
    }

    if ( tmp_source_name_24 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "advapi32" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 111;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_54 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_RegCloseKey );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_RegCloseKey, tmp_assign_source_54 );
    tmp_assattr_name_16 = PyList_New( 1 );
    tmp_list_element_8 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HKEY );

    if (unlikely( tmp_list_element_8 == NULL ))
    {
        tmp_list_element_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HKEY );
    }

    if ( tmp_list_element_8 == NULL )
    {
        Py_DECREF( tmp_assattr_name_16 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HKEY" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 112;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_8 );
    PyList_SET_ITEM( tmp_assattr_name_16, 0, tmp_list_element_8 );
    tmp_assattr_target_16 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_RegCloseKey );

    if (unlikely( tmp_assattr_target_16 == NULL ))
    {
        tmp_assattr_target_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RegCloseKey );
    }

    if ( tmp_assattr_target_16 == NULL )
    {
        Py_DECREF( tmp_assattr_name_16 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RegCloseKey" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 112;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_16, const_str_plain_argtypes, tmp_assattr_name_16 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_16 );

        exception_lineno = 112;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_16 );
    tmp_assattr_name_17 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_LONG );

    if (unlikely( tmp_assattr_name_17 == NULL ))
    {
        tmp_assattr_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LONG );
    }

    if ( tmp_assattr_name_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LONG" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 113;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_17 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_RegCloseKey );

    if (unlikely( tmp_assattr_target_17 == NULL ))
    {
        tmp_assattr_target_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RegCloseKey );
    }

    if ( tmp_assattr_target_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RegCloseKey" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 113;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_17, const_str_plain_restype, tmp_assattr_name_17 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        goto frame_exception_exit_1;
    }
    tmp_source_name_25 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_advapi32 );

    if (unlikely( tmp_source_name_25 == NULL ))
    {
        tmp_source_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_advapi32 );
    }

    if ( tmp_source_name_25 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "advapi32" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_55 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_RegQueryValueExW );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_RegQueryValueEx, tmp_assign_source_55 );
    tmp_assattr_name_18 = PyList_New( 6 );
    tmp_list_element_9 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_HKEY );

    if (unlikely( tmp_list_element_9 == NULL ))
    {
        tmp_list_element_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HKEY );
    }

    if ( tmp_list_element_9 == NULL )
    {
        Py_DECREF( tmp_assattr_name_18 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HKEY" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 116;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_9 );
    PyList_SET_ITEM( tmp_assattr_name_18, 0, tmp_list_element_9 );
    tmp_list_element_9 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_LPCTSTR );

    if (unlikely( tmp_list_element_9 == NULL ))
    {
        tmp_list_element_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPCTSTR );
    }

    if ( tmp_list_element_9 == NULL )
    {
        Py_DECREF( tmp_assattr_name_18 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPCTSTR" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 116;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_9 );
    PyList_SET_ITEM( tmp_assattr_name_18, 1, tmp_list_element_9 );
    tmp_list_element_9 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_LPDWORD );

    if (unlikely( tmp_list_element_9 == NULL ))
    {
        tmp_list_element_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPDWORD );
    }

    if ( tmp_list_element_9 == NULL )
    {
        Py_DECREF( tmp_assattr_name_18 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPDWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 116;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_9 );
    PyList_SET_ITEM( tmp_assattr_name_18, 2, tmp_list_element_9 );
    tmp_list_element_9 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_LPDWORD );

    if (unlikely( tmp_list_element_9 == NULL ))
    {
        tmp_list_element_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPDWORD );
    }

    if ( tmp_list_element_9 == NULL )
    {
        Py_DECREF( tmp_assattr_name_18 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPDWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 116;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_9 );
    PyList_SET_ITEM( tmp_assattr_name_18, 3, tmp_list_element_9 );
    tmp_list_element_9 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_LPBYTE );

    if (unlikely( tmp_list_element_9 == NULL ))
    {
        tmp_list_element_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPBYTE );
    }

    if ( tmp_list_element_9 == NULL )
    {
        Py_DECREF( tmp_assattr_name_18 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPBYTE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 116;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_9 );
    PyList_SET_ITEM( tmp_assattr_name_18, 4, tmp_list_element_9 );
    tmp_list_element_9 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_LPDWORD );

    if (unlikely( tmp_list_element_9 == NULL ))
    {
        tmp_list_element_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPDWORD );
    }

    if ( tmp_list_element_9 == NULL )
    {
        Py_DECREF( tmp_assattr_name_18 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPDWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 116;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_9 );
    PyList_SET_ITEM( tmp_assattr_name_18, 5, tmp_list_element_9 );
    tmp_assattr_target_18 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_RegQueryValueEx );

    if (unlikely( tmp_assattr_target_18 == NULL ))
    {
        tmp_assattr_target_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RegQueryValueEx );
    }

    if ( tmp_assattr_target_18 == NULL )
    {
        Py_DECREF( tmp_assattr_name_18 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RegQueryValueEx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 116;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_18, const_str_plain_argtypes, tmp_assattr_name_18 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_18 );

        exception_lineno = 116;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_18 );
    tmp_assattr_name_19 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_LONG );

    if (unlikely( tmp_assattr_name_19 == NULL ))
    {
        tmp_assattr_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LONG );
    }

    if ( tmp_assattr_name_19 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LONG" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 117;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_19 = GET_STRING_DICT_VALUE( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_RegQueryValueEx );

    if (unlikely( tmp_assattr_target_19 == NULL ))
    {
        tmp_assattr_target_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RegQueryValueEx );
    }

    if ( tmp_assattr_target_19 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RegQueryValueEx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 117;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_19, const_str_plain_restype, tmp_assattr_name_19 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
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
    tmp_assign_source_56 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DIGCF_PRESENT, tmp_assign_source_56 );
    tmp_assign_source_57 = const_int_pos_16;
    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DIGCF_DEVICEINTERFACE, tmp_assign_source_57 );
    tmp_assign_source_58 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_INVALID_HANDLE_VALUE, tmp_assign_source_58 );
    tmp_assign_source_59 = const_int_pos_122;
    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_ERROR_INSUFFICIENT_BUFFER, tmp_assign_source_59 );
    tmp_assign_source_60 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SPDRP_HARDWAREID, tmp_assign_source_60 );
    tmp_assign_source_61 = const_int_pos_12;
    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SPDRP_FRIENDLYNAME, tmp_assign_source_61 );
    tmp_assign_source_62 = const_int_pos_35;
    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SPDRP_LOCATION_PATHS, tmp_assign_source_62 );
    tmp_assign_source_63 = const_int_pos_11;
    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_SPDRP_MFG, tmp_assign_source_63 );
    tmp_assign_source_64 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DICS_FLAG_GLOBAL, tmp_assign_source_64 );
    tmp_assign_source_65 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_DIREG_DEV, tmp_assign_source_65 );
    tmp_assign_source_66 = const_int_pos_131097;
    UPDATE_STRING_DICT0( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_KEY_READ, tmp_assign_source_66 );
    tmp_assign_source_67 = MAKE_FUNCTION_serial$tools$list_ports_windows$$$function_2_iterate_comports(  );
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_iterate_comports, tmp_assign_source_67 );
    tmp_assign_source_68 = MAKE_FUNCTION_serial$tools$list_ports_windows$$$function_3_comports(  );
    UPDATE_STRING_DICT1( moduledict_serial$tools$list_ports_windows, (Nuitka_StringObject *)const_str_plain_comports, tmp_assign_source_68 );

    return MOD_RETURN_VALUE( module_serial$tools$list_ports_windows );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
