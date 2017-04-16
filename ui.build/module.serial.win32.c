/* Generated code for Python source for module 'serial.win32'
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

/* The _module_serial$win32 is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_serial$win32;
PyDictObject *moduledict_serial$win32;

/* The module constants used, if any. */
extern PyObject *const_str_plain_INVALID_HANDLE_VALUE;
extern PyObject *const_str_plain_fAbortOnError;
extern PyObject *const_str_plain_fOutxDsrFlow;
extern PyObject *const_str_plain_RTS_CONTROL_ENABLE;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_GENERIC_WRITE;
static PyObject *const_str_plain_wReserved1;
extern PyObject *const_str_plain_ONE5STOPBITS;
extern PyObject *const_str_plain_SETXOFF;
static PyObject *const_str_plain_CreateFileW;
extern PyObject *const_str_plain_ClearCommError;
extern PyObject *const_dict_empty;
extern PyObject *const_tuple_int_neg_1_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_WriteTotalTimeoutMultiplier;
extern PyObject *const_str_plain_ReadFile;
extern PyObject *const_str_plain_EVENPARITY;
extern PyObject *const_str_plain_DTR_CONTROL_DISABLE;
extern PyObject *const_str_plain_fParity;
static PyObject *const_list_5fe71ecb740c0898f445980823e1ece2_list;
extern PyObject *const_str_plain_BOOL;
extern PyObject *const_str_digest_5cf36b708703fd37649115cac3d2ec3c;
static PyObject *const_tuple_str_plain_HANDLE_tuple;
extern PyObject *const_str_plain_COMMTIMEOUTS;
extern PyObject *const_str_plain_PURGE_TXABORT;
static PyObject *const_int_pos_2048;
extern PyObject *const_str_plain_CreateFile;
extern PyObject *const_str_plain_ClearCommBreak;
extern PyObject *const_int_neg_1;
static PyObject *const_tuple_str_plain_kernel32_tuple;
extern PyObject *const_int_pos_128;
extern PyObject *const_str_plain_fOutX;
static PyObject *const_str_plain_Pointer;
extern PyObject *const_int_pos_17;
extern PyObject *const_int_pos_6;
extern PyObject *const_str_plain__fields_;
extern PyObject *const_str_plain_PURGE_TXCLEAR;
static PyObject *const_str_plain_nLength;
static PyObject *const_int_pos_25;
static PyObject *const_int_pos_512;
static PyObject *const_str_plain_EV_RX80FULL;
static PyObject *const_str_plain__SECURITY_ATTRIBUTES;
extern PyObject *const_str_plain_SETXON;
extern PyObject *const_str_plain_ODDPARITY;
extern PyObject *const_int_pos_5;
extern PyObject *const_str_plain_fErrorChar;
extern PyObject *const_str_plain_CloseHandle;
extern PyObject *const_str_plain_WinDLL;
static PyObject *const_str_plain_EV_EVENT2;
static PyObject *const_str_plain_LPCSTR;
extern PyObject *const_int_pos_1024;
extern PyObject *const_str_plain_cbOutQue;
extern PyObject *const_str_plain_c_void_p;
extern PyObject *const_str_plain_fRtsControl;
static PyObject *const_str_plain_EV_RLSD;
extern PyObject *const_int_pos_16;
extern PyObject *const_str_plain_ReadIntervalTimeout;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_serial;
extern PyObject *const_str_plain_COMSTAT;
static PyObject *const_str_plain__OVERLAPPED;
extern PyObject *const_int_pos_32;
static PyObject *const_list_str_plain__0_list;
static PyObject *const_str_plain_LPCWSTR;
static PyObject *const_str_plain_EV_PERR;
extern PyObject *const_str_plain_Structure;
extern PyObject *const_str_plain_ONESTOPBIT;
extern PyObject *const_str_plain_RTS_CONTROL_TOGGLE;
static PyObject *const_str_plain_LPVOID;
extern PyObject *const_str_plain___package__;
extern PyObject *const_str_plain_POINTER;
extern PyObject *const_str_plain_FILE_FLAG_OVERLAPPED;
extern PyObject *const_str_plain_DWORD;
extern PyObject *const_int_pos_1073741824;
extern PyObject *const_str_plain_WORD;
extern PyObject *const_str_plain_BYTE;
extern PyObject *const_str_plain_ULONG_PTR;
extern PyObject *const_str_plain_EscapeCommFunction;
extern PyObject *const_str_plain_GetLastError;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_plain_ErrorChar;
static PyObject *const_str_plain_LPCOMMTIMEOUTS;
static PyObject *const_str_plain__stdcall_libraries;
extern PyObject *const_str_plain_XoffChar;
static PyObject *const_str_plain_fXoffSent;
extern PyObject *const_str_plain_LPDWORD;
extern PyObject *const_str_plain_PURGE_RXABORT;
extern PyObject *const_str_plain_BaudRate;
static PyObject *const_str_plain_HANDLE;
extern PyObject *const_str_plain_sizeof;
extern PyObject *const_str_plain_GENERIC_READ;
static PyObject *const_str_plain_LPDCB;
extern PyObject *const_str_plain_value;
static PyObject *const_str_plain__COMMTIMEOUTS;
static PyObject *const_str_plain_c_ulong;
static PyObject *const_int_pos_995;
extern PyObject *const_str_plain_NOPARITY;
static PyObject *const_str_plain_fCtsHold;
extern PyObject *const_str_plain_SetCommState;
static PyObject *const_int_pos_996;
extern PyObject *const_tuple_str_plain_BOOL_tuple;
static PyObject *const_str_plain_Internal;
extern PyObject *const_str_plain_DTR_CONTROL_ENABLE;
extern PyObject *const_int_pos_8;
static PyObject *const_str_plain_EV_CTS;
static PyObject *const_str_plain_fRlsdHold;
extern PyObject *const_str_plain_ResetEvent;
static PyObject *const_str_plain_EV_EVENT1;
extern PyObject *const_str_plain_argtypes;
static PyObject *const_str_plain_fXoffHold;
extern PyObject *const_str_plain_GetCommTimeouts;
extern PyObject *const_str_plain_SETRTS;
static PyObject *const_str_plain_PVOID;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_9e11bd86fbf828de9ceefd642bf89a24;
extern PyObject *const_str_plain_StopBits;
static PyObject *const_str_plain_LPCVOID;
extern PyObject *const_tuple_str_plain_BYTE_tuple;
extern PyObject *const_str_plain_ERROR_INVALID_USER_BUFFER;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_CLRRTS;
static PyObject *const_str_plain_N11_OVERLAPPED4DOLLAR_48E;
extern PyObject *const_str_plain_GetOverlappedResult;
extern PyObject *const_str_plain_restype;
static PyObject *const_str_plain_INFINITE;
static PyObject *const_str_plain_DCBlength;
static PyObject *const_str_plain_EV_TXEMPTY;
extern PyObject *const_str_plain_Parity;
static PyObject *const_tuple_str_plain_LPCSTR_tuple;
extern PyObject *const_str_plain_MS_RING_ON;
extern PyObject *const_str_plain_SetCommTimeouts;
extern PyObject *const_str_plain_RTS_CONTROL_DISABLE;
extern PyObject *const_str_plain_MS_CTS_ON;
static PyObject *const_int_pos_4294967295;
extern PyObject *const_str_plain_kernel32;
extern PyObject *const_str_plain_CancelIoEx;
static PyObject *const_str_plain_EV_RING;
static PyObject *const_str_plain_fDummy2;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_OPEN_EXISTING;
extern PyObject *const_str_digest_4434d3fa3d749d79efdf09f3d091b7fa;
extern PyObject *const_str_plain_ERROR_NOT_ENOUGH_MEMORY;
static PyObject *const_str_plain_fTxim;
extern PyObject *const_int_pos_4096;
static PyObject *const_str_plain_lpSecurityDescriptor;
extern PyObject *const_str_plain_RTS_CONTROL_HANDSHAKE;
static PyObject *const_str_plain__DCB;
extern PyObject *const_str_plain_GetCommModemStatus;
extern PyObject *const_str_plain_ctypes;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_fBinary;
extern PyObject *const_str_plain_WriteTotalTimeoutConstant;
extern PyObject *const_str_plain_DCB;
extern PyObject *const_str_plain_MARKPARITY;
extern PyObject *const_str_plain_PurgeComm;
extern PyObject *const_str_plain_fOutxCtsFlow;
extern PyObject *const_str_plain_OVERLAPPED;
static PyObject *const_str_plain_fReserved;
extern PyObject *const_str_plain_c_char;
static PyObject *const_str_plain_EV_RXCHAR;
static PyObject *const_str_plain_EV_RXFLAG;
extern PyObject *const_int_pos_64;
extern PyObject *const_str_plain_SETDTR;
static PyObject *const_int_pos_1784;
extern PyObject *const_int_pos_4;
extern PyObject *const_str_plain_MAXDWORD;
static PyObject *const_str_plain_wReserved;
extern PyObject *const_str_plain_CreateEvent;
extern PyObject *const_str_plain_type;
static PyObject *const_str_plain_WaitForSingleObject;
static PyObject *const_str_plain_is_64bit;
static PyObject *const_str_plain_fDsrSensitivity;
extern PyObject *const_str_plain_ERROR_SUCCESS;
static PyObject *const_int_pos_997;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_ReadTotalTimeoutConstant;
extern PyObject *const_str_plain_SetCommMask;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_plain_Union;
extern PyObject *const_str_plain_SPACEPARITY;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_fNull;
extern PyObject *const_str_plain_TWOSTOPBITS;
extern PyObject *const_str_plain_hEvent;
static PyObject *const_tuple_1a2eca5d3798147c4e19d3cc73472a25_tuple;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_ERROR_IO_INCOMPLETE;
extern PyObject *const_str_plain_MS_RLSD_ON;
static PyObject *const_str_plain_fDsrHold;
static PyObject *const_str_plain_XoffLim;
extern PyObject *const_int_pos_256;
static PyObject *const_str_plain_c_int64;
static PyObject *const_str_plain__anonymous_;
static PyObject *const_str_plain_fTXContinueOnXoff;
static PyObject *const_str_plain_LPCOMSTAT;
extern PyObject *const_str_plain_XonChar;
extern PyObject *const_str_plain_CLRDTR;
static PyObject *const_str_plain_EV_DSR;
static PyObject *const_str_digest_facd505ab20ea12a55caf64ecce08ac0;
static PyObject *const_tuple_str_plain_LPCWSTR_tuple;
static PyObject *const_str_plain__COMSTAT;
static PyObject *const_str_plain_ReadTotalTimeoutMultiplier;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_FILE_ATTRIBUTE_NORMAL;
static PyObject *const_str_plain_EV_BREAK;
static PyObject *const_int_pos_2147483648;
extern PyObject *const_str_plain_ByteSize;
static PyObject *const_str_plain_CreateFileA;
extern PyObject *const_str_plain_DTR_CONTROL_HANDSHAKE;
static PyObject *const_str_plain_bInheritHandle;
static PyObject *const_str_plain_fEof;
static PyObject *const_str_plain_EvtChar;
extern PyObject *const_str_plain_ERROR_IO_PENDING;
extern PyObject *const_str_plain_fInX;
static PyObject *const_str_plain_LPOVERLAPPED;
extern PyObject *const_str_plain_MS_DSR_ON;
extern PyObject *const_str_plain_EV_ERR;
extern PyObject *const_str_plain_SetCommBreak;
static PyObject *const_str_plain_LPSECURITY_ATTRIBUTES;
static PyObject *const_str_plain_CreateEventA;
static PyObject *const_str_plain__0;
extern PyObject *const_int_pos_2;
static PyObject *const_str_plain_CreateEventW;
extern PyObject *const_tuple_str_plain_DWORD_tuple;
static PyObject *const_str_plain_Offset;
extern PyObject *const_str_plain_ERROR_OPERATION_ABORTED;
extern PyObject *const_str_plain_fDtrControl;
extern PyObject *const_str_plain_SetupComm;
extern PyObject *const_str_plain_WriteFile;
static PyObject *const_str_plain_XonLim;
static PyObject *const_str_plain_OffsetHigh;
extern PyObject *const_str_plain_win32;
extern PyObject *const_str_plain_cbInQue;
static PyObject *const_str_plain_N11_OVERLAPPED4DOLLAR_484DOLLAR_49E;
extern PyObject *const_str_plain_PURGE_RXCLEAR;
extern PyObject *const_tuple_str_plain_WORD_tuple;
static PyObject *const_str_plain_InternalHigh;
static PyObject *const_str_plain_EofChar;
extern PyObject *const_str_plain___annotations__;
extern PyObject *const_str_plain_GetCommState;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_wReserved1 = UNSTREAM_STRING( &constant_bin[ 69561 ], 10, 1 );
    const_str_plain_CreateFileW = UNSTREAM_STRING( &constant_bin[ 69571 ], 11, 1 );
    const_str_plain_WriteTotalTimeoutMultiplier = UNSTREAM_STRING( &constant_bin[ 69582 ], 27, 1 );
    const_list_5fe71ecb740c0898f445980823e1ece2_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 69609 ], 1120 );
    const_tuple_str_plain_HANDLE_tuple = PyTuple_New( 1 );
    const_str_plain_HANDLE = UNSTREAM_STRING( &constant_bin[ 70729 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HANDLE_tuple, 0, const_str_plain_HANDLE ); Py_INCREF( const_str_plain_HANDLE );
    const_int_pos_2048 = PyLong_FromUnsignedLong( 2048ul );
    const_tuple_str_plain_kernel32_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_kernel32_tuple, 0, const_str_plain_kernel32 ); Py_INCREF( const_str_plain_kernel32 );
    const_str_plain_Pointer = UNSTREAM_STRING( &constant_bin[ 67138 ], 7, 1 );
    const_str_plain_nLength = UNSTREAM_STRING( &constant_bin[ 70735 ], 7, 1 );
    const_int_pos_25 = PyLong_FromUnsignedLong( 25ul );
    const_int_pos_512 = PyLong_FromUnsignedLong( 512ul );
    const_str_plain_EV_RX80FULL = UNSTREAM_STRING( &constant_bin[ 70565 ], 11, 1 );
    const_str_plain__SECURITY_ATTRIBUTES = UNSTREAM_STRING( &constant_bin[ 69901 ], 20, 1 );
    const_str_plain_EV_EVENT2 = UNSTREAM_STRING( &constant_bin[ 70162 ], 9, 1 );
    const_str_plain_LPCSTR = UNSTREAM_STRING( &constant_bin[ 70742 ], 6, 1 );
    const_str_plain_EV_RLSD = UNSTREAM_STRING( &constant_bin[ 70133 ], 7, 1 );
    const_str_plain__OVERLAPPED = UNSTREAM_STRING( &constant_bin[ 69764 ], 11, 1 );
    const_list_str_plain__0_list = PyList_New( 1 );
    const_str_plain__0 = UNSTREAM_STRING( &constant_bin[ 70748 ], 2, 1 );
    PyList_SET_ITEM( const_list_str_plain__0_list, 0, const_str_plain__0 ); Py_INCREF( const_str_plain__0 );
    const_str_plain_LPCWSTR = UNSTREAM_STRING( &constant_bin[ 70750 ], 7, 1 );
    const_str_plain_EV_PERR = UNSTREAM_STRING( &constant_bin[ 69931 ], 7, 1 );
    const_str_plain_LPVOID = UNSTREAM_STRING( &constant_bin[ 70535 ], 6, 1 );
    const_str_plain_ErrorChar = UNSTREAM_STRING( &constant_bin[ 70757 ], 9, 1 );
    const_str_plain_LPCOMMTIMEOUTS = UNSTREAM_STRING( &constant_bin[ 70591 ], 14, 1 );
    const_str_plain__stdcall_libraries = UNSTREAM_STRING( &constant_bin[ 70766 ], 18, 1 );
    const_str_plain_fXoffSent = UNSTREAM_STRING( &constant_bin[ 70784 ], 9, 1 );
    const_str_plain_LPDCB = UNSTREAM_STRING( &constant_bin[ 70476 ], 5, 1 );
    const_str_plain__COMMTIMEOUTS = UNSTREAM_STRING( &constant_bin[ 69886 ], 13, 1 );
    const_str_plain_c_ulong = UNSTREAM_STRING( &constant_bin[ 70793 ], 7, 1 );
    const_int_pos_995 = PyLong_FromUnsignedLong( 995ul );
    const_str_plain_fCtsHold = UNSTREAM_STRING( &constant_bin[ 70800 ], 8, 1 );
    const_int_pos_996 = PyLong_FromUnsignedLong( 996ul );
    const_str_plain_Internal = UNSTREAM_STRING( &constant_bin[ 19165 ], 8, 1 );
    const_str_plain_EV_CTS = UNSTREAM_STRING( &constant_bin[ 69993 ], 6, 1 );
    const_str_plain_fRlsdHold = UNSTREAM_STRING( &constant_bin[ 70808 ], 9, 1 );
    const_str_plain_EV_EVENT1 = UNSTREAM_STRING( &constant_bin[ 70510 ], 9, 1 );
    const_str_plain_fXoffHold = UNSTREAM_STRING( &constant_bin[ 70817 ], 9, 1 );
    const_str_plain_PVOID = UNSTREAM_STRING( &constant_bin[ 70238 ], 5, 1 );
    const_str_digest_9e11bd86fbf828de9ceefd642bf89a24 = UNSTREAM_STRING( &constant_bin[ 70826 ], 48, 0 );
    const_str_plain_LPCVOID = UNSTREAM_STRING( &constant_bin[ 70210 ], 7, 1 );
    const_str_plain_N11_OVERLAPPED4DOLLAR_48E = UNSTREAM_STRING( &constant_bin[ 69761 ], 25, 1 );
    const_str_plain_INFINITE = UNSTREAM_STRING( &constant_bin[ 70874 ], 8, 1 );
    const_str_plain_DCBlength = UNSTREAM_STRING( &constant_bin[ 70882 ], 9, 1 );
    const_str_plain_EV_TXEMPTY = UNSTREAM_STRING( &constant_bin[ 70026 ], 10, 1 );
    const_tuple_str_plain_LPCSTR_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_LPCSTR_tuple, 0, const_str_plain_LPCSTR ); Py_INCREF( const_str_plain_LPCSTR );
    const_int_pos_4294967295 = PyLong_FromUnsignedLong( 4294967295ul );
    const_str_plain_EV_RING = UNSTREAM_STRING( &constant_bin[ 69788 ], 7, 1 );
    const_str_plain_fDummy2 = UNSTREAM_STRING( &constant_bin[ 70891 ], 7, 1 );
    const_str_plain_fTxim = UNSTREAM_STRING( &constant_bin[ 70898 ], 5, 1 );
    const_str_plain_lpSecurityDescriptor = UNSTREAM_STRING( &constant_bin[ 70903 ], 20, 1 );
    const_str_plain__DCB = UNSTREAM_STRING( &constant_bin[ 69867 ], 4, 1 );
    const_str_plain_fReserved = UNSTREAM_STRING( &constant_bin[ 70923 ], 9, 1 );
    const_str_plain_EV_RXCHAR = UNSTREAM_STRING( &constant_bin[ 70298 ], 9, 1 );
    const_str_plain_EV_RXFLAG = UNSTREAM_STRING( &constant_bin[ 69940 ], 9, 1 );
    const_int_pos_1784 = PyLong_FromUnsignedLong( 1784ul );
    const_str_plain_wReserved = UNSTREAM_STRING( &constant_bin[ 69561 ], 9, 1 );
    const_str_plain_WaitForSingleObject = UNSTREAM_STRING( &constant_bin[ 70932 ], 19, 1 );
    const_str_plain_is_64bit = UNSTREAM_STRING( &constant_bin[ 70951 ], 8, 1 );
    const_str_plain_fDsrSensitivity = UNSTREAM_STRING( &constant_bin[ 70959 ], 15, 1 );
    const_int_pos_997 = PyLong_FromUnsignedLong( 997ul );
    const_str_plain_Union = UNSTREAM_STRING( &constant_bin[ 70974 ], 5, 1 );
    const_tuple_1a2eca5d3798147c4e19d3cc73472a25_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_1a2eca5d3798147c4e19d3cc73472a25_tuple, 0, const_str_plain_c_ulong ); Py_INCREF( const_str_plain_c_ulong );
    PyTuple_SET_ITEM( const_tuple_1a2eca5d3798147c4e19d3cc73472a25_tuple, 1, const_str_plain_c_void_p ); Py_INCREF( const_str_plain_c_void_p );
    const_str_plain_c_int64 = UNSTREAM_STRING( &constant_bin[ 70979 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_1a2eca5d3798147c4e19d3cc73472a25_tuple, 2, const_str_plain_c_int64 ); Py_INCREF( const_str_plain_c_int64 );
    PyTuple_SET_ITEM( const_tuple_1a2eca5d3798147c4e19d3cc73472a25_tuple, 3, const_str_plain_c_char ); Py_INCREF( const_str_plain_c_char );
    PyTuple_SET_ITEM( const_tuple_1a2eca5d3798147c4e19d3cc73472a25_tuple, 4, const_str_plain_WinDLL ); Py_INCREF( const_str_plain_WinDLL );
    PyTuple_SET_ITEM( const_tuple_1a2eca5d3798147c4e19d3cc73472a25_tuple, 5, const_str_plain_sizeof ); Py_INCREF( const_str_plain_sizeof );
    PyTuple_SET_ITEM( const_tuple_1a2eca5d3798147c4e19d3cc73472a25_tuple, 6, const_str_plain_Structure ); Py_INCREF( const_str_plain_Structure );
    PyTuple_SET_ITEM( const_tuple_1a2eca5d3798147c4e19d3cc73472a25_tuple, 7, const_str_plain_Union ); Py_INCREF( const_str_plain_Union );
    PyTuple_SET_ITEM( const_tuple_1a2eca5d3798147c4e19d3cc73472a25_tuple, 8, const_str_plain_POINTER ); Py_INCREF( const_str_plain_POINTER );
    const_str_plain_fDsrHold = UNSTREAM_STRING( &constant_bin[ 70986 ], 8, 1 );
    const_str_plain_XoffLim = UNSTREAM_STRING( &constant_bin[ 70994 ], 7, 1 );
    const_str_plain__anonymous_ = UNSTREAM_STRING( &constant_bin[ 71001 ], 11, 1 );
    const_str_plain_fTXContinueOnXoff = UNSTREAM_STRING( &constant_bin[ 71012 ], 17, 1 );
    const_str_plain_LPCOMSTAT = UNSTREAM_STRING( &constant_bin[ 70309 ], 9, 1 );
    const_str_plain_EV_DSR = UNSTREAM_STRING( &constant_bin[ 69923 ], 6, 1 );
    const_str_digest_facd505ab20ea12a55caf64ecce08ac0 = UNSTREAM_STRING( &constant_bin[ 71029 ], 44, 0 );
    const_tuple_str_plain_LPCWSTR_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_LPCWSTR_tuple, 0, const_str_plain_LPCWSTR ); Py_INCREF( const_str_plain_LPCWSTR );
    const_str_plain__COMSTAT = UNSTREAM_STRING( &constant_bin[ 69684 ], 8, 1 );
    const_str_plain_ReadTotalTimeoutMultiplier = UNSTREAM_STRING( &constant_bin[ 71073 ], 26, 1 );
    const_str_plain_EV_BREAK = UNSTREAM_STRING( &constant_bin[ 70188 ], 8, 1 );
    const_int_pos_2147483648 = PyLong_FromUnsignedLong( 2147483648ul );
    const_str_plain_CreateFileA = UNSTREAM_STRING( &constant_bin[ 71099 ], 11, 1 );
    const_str_plain_bInheritHandle = UNSTREAM_STRING( &constant_bin[ 71110 ], 14, 1 );
    const_str_plain_fEof = UNSTREAM_STRING( &constant_bin[ 71124 ], 4, 1 );
    const_str_plain_EvtChar = UNSTREAM_STRING( &constant_bin[ 71128 ], 7, 1 );
    const_str_plain_LPOVERLAPPED = UNSTREAM_STRING( &constant_bin[ 70012 ], 12, 1 );
    const_str_plain_LPSECURITY_ATTRIBUTES = UNSTREAM_STRING( &constant_bin[ 70054 ], 21, 1 );
    const_str_plain_CreateEventA = UNSTREAM_STRING( &constant_bin[ 71135 ], 12, 1 );
    const_str_plain_CreateEventW = UNSTREAM_STRING( &constant_bin[ 70483 ], 12, 1 );
    const_str_plain_Offset = UNSTREAM_STRING( &constant_bin[ 71147 ], 6, 1 );
    const_str_plain_XonLim = UNSTREAM_STRING( &constant_bin[ 71153 ], 6, 1 );
    const_str_plain_OffsetHigh = UNSTREAM_STRING( &constant_bin[ 71159 ], 10, 1 );
    const_str_plain_N11_OVERLAPPED4DOLLAR_484DOLLAR_49E = UNSTREAM_STRING( &constant_bin[ 70640 ], 35, 1 );
    const_str_plain_InternalHigh = UNSTREAM_STRING( &constant_bin[ 71169 ], 12, 1 );
    const_str_plain_EofChar = UNSTREAM_STRING( &constant_bin[ 71181 ], 7, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_serial$win32( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_a309bf1da5f1e7987d9f7c716e74c935;
static PyCodeObject *codeobj_4d49d2c5adb96ffa1a9df802e90e32c2;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_9e11bd86fbf828de9ceefd642bf89a24;
    codeobj_a309bf1da5f1e7987d9f7c716e74c935 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_64bit, 27, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4d49d2c5adb96ffa1a9df802e90e32c2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_win32, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_serial$win32$$$class_1__SECURITY_ATTRIBUTES( PyObject **python_pars, PyObject ** closure_serial$win32_class_creation_1__bases, PyObject ** closure_serial$win32_class_creation_1__class_decl_dict, PyObject ** closure_serial$win32_class_creation_1__metaclass, PyObject ** closure_serial$win32_class_creation_1__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_serial$win32$$$class_2__OVERLAPPED( PyObject **python_pars, PyObject ** closure_serial$win32_class_creation_2__bases, PyObject ** closure_serial$win32_class_creation_2__class_decl_dict, PyObject ** closure_serial$win32_class_creation_2__metaclass, PyObject ** closure_serial$win32_class_creation_2__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_serial$win32$$$class_3__COMSTAT( PyObject **python_pars, PyObject ** closure_serial$win32_class_creation_3__bases, PyObject ** closure_serial$win32_class_creation_3__class_decl_dict, PyObject ** closure_serial$win32_class_creation_3__metaclass, PyObject ** closure_serial$win32_class_creation_3__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_serial$win32$$$class_4__DCB( PyObject **python_pars, PyObject ** closure_serial$win32_class_creation_4__bases, PyObject ** closure_serial$win32_class_creation_4__class_decl_dict, PyObject ** closure_serial$win32_class_creation_4__metaclass, PyObject ** closure_serial$win32_class_creation_4__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_serial$win32$$$class_5__COMMTIMEOUTS( PyObject **python_pars, PyObject ** closure_serial$win32_class_creation_5__bases, PyObject ** closure_serial$win32_class_creation_5__class_decl_dict, PyObject ** closure_serial$win32_class_creation_5__metaclass, PyObject ** closure_serial$win32_class_creation_5__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_serial$win32$$$class_6_N11_OVERLAPPED4DOLLAR_48E( PyObject **python_pars, PyObject ** closure_serial$win32_class_creation_6__bases, PyObject ** closure_serial$win32_class_creation_6__class_decl_dict, PyObject ** closure_serial$win32_class_creation_6__metaclass, PyObject ** closure_serial$win32_class_creation_6__prepared );


NUITKA_LOCAL_MODULE PyObject *impl_serial$win32$$$class_7_N11_OVERLAPPED4DOLLAR_484DOLLAR_49E( PyObject **python_pars, PyObject ** closure_serial$win32_class_creation_7__bases, PyObject ** closure_serial$win32_class_creation_7__class_decl_dict, PyObject ** closure_serial$win32_class_creation_7__metaclass, PyObject ** closure_serial$win32_class_creation_7__prepared );


static PyObject *MAKE_FUNCTION_serial$win32$$$function_1_is_64bit(  );


// The module function definitions.
static PyObject *impl_serial$win32$$$function_1_is_64bit( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a309bf1da5f1e7987d9f7c716e74c935, module_serial$win32 );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_sizeof );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sizeof );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sizeof" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_ulong );

    if (unlikely( tmp_args_element_name_1 == NULL ))
    {
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_ulong );
    }

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "c_ulong" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 29;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_sizeof );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sizeof );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sizeof" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_void_p );

    if (unlikely( tmp_args_element_name_2 == NULL ))
    {
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_void_p );
    }

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "c_void_p" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 29;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_compexpr_right_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 29;
        goto frame_exception_exit_1;
    }
    tmp_return_value = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
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
    NUITKA_CANNOT_GET_HERE( serial$win32$$$function_1_is_64bit );
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


NUITKA_LOCAL_MODULE PyObject *impl_serial$win32$$$class_1__SECURITY_ATTRIBUTES( PyObject **python_pars, PyObject ** closure_serial$win32_class_creation_1__bases, PyObject ** closure_serial$win32_class_creation_1__class_decl_dict, PyObject ** closure_serial$win32_class_creation_1__metaclass, PyObject ** closure_serial$win32_class_creation_1__prepared )
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = *closure_serial$win32_class_creation_1__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_4434d3fa3d749d79efdf09f3d091b7fa;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain__SECURITY_ATTRIBUTES;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    // Tried code:
    tmp_called_name_1 = *closure_serial$win32_class_creation_1__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain__SECURITY_ATTRIBUTES;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = *closure_serial$win32_class_creation_1__bases;

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
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = *closure_serial$win32_class_creation_1__class_decl_dict;

    tmp_assign_source_3 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_3;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$win32$$$class_1__SECURITY_ATTRIBUTES );
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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$win32$$$class_1__SECURITY_ATTRIBUTES );
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


NUITKA_LOCAL_MODULE PyObject *impl_serial$win32$$$class_2__OVERLAPPED( PyObject **python_pars, PyObject ** closure_serial$win32_class_creation_2__bases, PyObject ** closure_serial$win32_class_creation_2__class_decl_dict, PyObject ** closure_serial$win32_class_creation_2__metaclass, PyObject ** closure_serial$win32_class_creation_2__prepared )
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = *closure_serial$win32_class_creation_2__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_4434d3fa3d749d79efdf09f3d091b7fa;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain__OVERLAPPED;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    // Tried code:
    tmp_called_name_1 = *closure_serial$win32_class_creation_2__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain__OVERLAPPED;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = *closure_serial$win32_class_creation_2__bases;

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
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = *closure_serial$win32_class_creation_2__class_decl_dict;

    tmp_assign_source_3 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_3;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$win32$$$class_2__OVERLAPPED );
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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$win32$$$class_2__OVERLAPPED );
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


NUITKA_LOCAL_MODULE PyObject *impl_serial$win32$$$class_3__COMSTAT( PyObject **python_pars, PyObject ** closure_serial$win32_class_creation_3__bases, PyObject ** closure_serial$win32_class_creation_3__class_decl_dict, PyObject ** closure_serial$win32_class_creation_3__metaclass, PyObject ** closure_serial$win32_class_creation_3__prepared )
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = *closure_serial$win32_class_creation_3__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_4434d3fa3d749d79efdf09f3d091b7fa;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain__COMSTAT;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    // Tried code:
    tmp_called_name_1 = *closure_serial$win32_class_creation_3__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain__COMSTAT;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = *closure_serial$win32_class_creation_3__bases;

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
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = *closure_serial$win32_class_creation_3__class_decl_dict;

    tmp_assign_source_3 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_3;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$win32$$$class_3__COMSTAT );
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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$win32$$$class_3__COMSTAT );
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


NUITKA_LOCAL_MODULE PyObject *impl_serial$win32$$$class_4__DCB( PyObject **python_pars, PyObject ** closure_serial$win32_class_creation_4__bases, PyObject ** closure_serial$win32_class_creation_4__class_decl_dict, PyObject ** closure_serial$win32_class_creation_4__metaclass, PyObject ** closure_serial$win32_class_creation_4__prepared )
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = *closure_serial$win32_class_creation_4__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_4434d3fa3d749d79efdf09f3d091b7fa;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain__DCB;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    // Tried code:
    tmp_called_name_1 = *closure_serial$win32_class_creation_4__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain__DCB;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = *closure_serial$win32_class_creation_4__bases;

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
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = *closure_serial$win32_class_creation_4__class_decl_dict;

    tmp_assign_source_3 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_3;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$win32$$$class_4__DCB );
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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$win32$$$class_4__DCB );
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


NUITKA_LOCAL_MODULE PyObject *impl_serial$win32$$$class_5__COMMTIMEOUTS( PyObject **python_pars, PyObject ** closure_serial$win32_class_creation_5__bases, PyObject ** closure_serial$win32_class_creation_5__class_decl_dict, PyObject ** closure_serial$win32_class_creation_5__metaclass, PyObject ** closure_serial$win32_class_creation_5__prepared )
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = *closure_serial$win32_class_creation_5__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_4434d3fa3d749d79efdf09f3d091b7fa;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain__COMMTIMEOUTS;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    // Tried code:
    tmp_called_name_1 = *closure_serial$win32_class_creation_5__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain__COMMTIMEOUTS;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = *closure_serial$win32_class_creation_5__bases;

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
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = *closure_serial$win32_class_creation_5__class_decl_dict;

    tmp_assign_source_3 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_3;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$win32$$$class_5__COMMTIMEOUTS );
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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$win32$$$class_5__COMMTIMEOUTS );
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


NUITKA_LOCAL_MODULE PyObject *impl_serial$win32$$$class_6_N11_OVERLAPPED4DOLLAR_48E( PyObject **python_pars, PyObject ** closure_serial$win32_class_creation_6__bases, PyObject ** closure_serial$win32_class_creation_6__class_decl_dict, PyObject ** closure_serial$win32_class_creation_6__metaclass, PyObject ** closure_serial$win32_class_creation_6__prepared )
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = *closure_serial$win32_class_creation_6__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_4434d3fa3d749d79efdf09f3d091b7fa;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain_N11_OVERLAPPED4DOLLAR_48E;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    // Tried code:
    tmp_called_name_1 = *closure_serial$win32_class_creation_6__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_N11_OVERLAPPED4DOLLAR_48E;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = *closure_serial$win32_class_creation_6__bases;

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
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = *closure_serial$win32_class_creation_6__class_decl_dict;

    tmp_assign_source_3 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_3;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$win32$$$class_6_N11_OVERLAPPED4DOLLAR_48E );
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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$win32$$$class_6_N11_OVERLAPPED4DOLLAR_48E );
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


NUITKA_LOCAL_MODULE PyObject *impl_serial$win32$$$class_7_N11_OVERLAPPED4DOLLAR_484DOLLAR_49E( PyObject **python_pars, PyObject ** closure_serial$win32_class_creation_7__bases, PyObject ** closure_serial$win32_class_creation_7__class_decl_dict, PyObject ** closure_serial$win32_class_creation_7__metaclass, PyObject ** closure_serial$win32_class_creation_7__prepared )
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = *closure_serial$win32_class_creation_7__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_4434d3fa3d749d79efdf09f3d091b7fa;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_plain_N11_OVERLAPPED4DOLLAR_484DOLLAR_49E;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___qualname__ = tmp_assign_source_2;

    // Tried code:
    tmp_called_name_1 = *closure_serial$win32_class_creation_7__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_N11_OVERLAPPED4DOLLAR_484DOLLAR_49E;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = *closure_serial$win32_class_creation_7__bases;

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
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = *closure_serial$win32_class_creation_7__class_decl_dict;

    tmp_assign_source_3 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_3;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$win32$$$class_7_N11_OVERLAPPED4DOLLAR_484DOLLAR_49E );
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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( serial$win32$$$class_7_N11_OVERLAPPED4DOLLAR_484DOLLAR_49E );
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



static PyObject *MAKE_FUNCTION_serial$win32$$$function_1_is_64bit(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_serial$win32$$$function_1_is_64bit,
        const_str_plain_is_64bit,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a309bf1da5f1e7987d9f7c716e74c935,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_serial$win32,
        const_str_digest_facd505ab20ea12a55caf64ecce08ac0,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_serial$win32 =
{
    PyModuleDef_HEAD_INIT,
    "serial.win32",   /* m_name */
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

MOD_INIT_DECL( serial$win32 )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_serial$win32 );
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
    puts("serial.win32: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("serial.win32: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initserial$win32" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_serial$win32 = Py_InitModule4(
        "serial.win32",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_serial$win32 = PyModule_Create( &mdef_serial$win32 );
#endif

    moduledict_serial$win32 = (PyDictObject *)((PyModuleObject *)module_serial$win32)->md_dict;

    CHECK_OBJECT( module_serial$win32 );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_4434d3fa3d749d79efdf09f3d091b7fa, module_serial$win32 );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_serial$win32 );

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
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_serial$win32_class_creation_1__bases = NULL;
    PyObject *tmp_serial$win32_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_serial$win32_class_creation_1__metaclass = NULL;
    PyObject *tmp_serial$win32_class_creation_1__prepared = NULL;
    PyObject *tmp_try_except_1__unhandled_indicator = NULL;
    PyObject *tmp_serial$win32_class_creation_2__bases = NULL;
    PyObject *tmp_serial$win32_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_serial$win32_class_creation_2__metaclass = NULL;
    PyObject *tmp_serial$win32_class_creation_2__prepared = NULL;
    PyObject *tmp_serial$win32_class_creation_3__bases = NULL;
    PyObject *tmp_serial$win32_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_serial$win32_class_creation_3__metaclass = NULL;
    PyObject *tmp_serial$win32_class_creation_3__prepared = NULL;
    PyObject *tmp_serial$win32_class_creation_4__bases = NULL;
    PyObject *tmp_serial$win32_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_serial$win32_class_creation_4__metaclass = NULL;
    PyObject *tmp_serial$win32_class_creation_4__prepared = NULL;
    PyObject *tmp_serial$win32_class_creation_5__bases = NULL;
    PyObject *tmp_serial$win32_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_serial$win32_class_creation_5__metaclass = NULL;
    PyObject *tmp_serial$win32_class_creation_5__prepared = NULL;
    PyObject *tmp_serial$win32_class_creation_6__bases = NULL;
    PyObject *tmp_serial$win32_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_serial$win32_class_creation_6__metaclass = NULL;
    PyObject *tmp_serial$win32_class_creation_6__prepared = NULL;
    PyObject *tmp_serial$win32_class_creation_7__bases = NULL;
    PyObject *tmp_serial$win32_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_serial$win32_class_creation_7__metaclass = NULL;
    PyObject *tmp_serial$win32_class_creation_7__prepared = NULL;
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
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_args_name_4;
    PyObject *tmp_args_name_5;
    PyObject *tmp_args_name_6;
    PyObject *tmp_args_name_7;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
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
    PyObject *tmp_assattr_name_20;
    PyObject *tmp_assattr_name_21;
    PyObject *tmp_assattr_name_22;
    PyObject *tmp_assattr_name_23;
    PyObject *tmp_assattr_name_24;
    PyObject *tmp_assattr_name_25;
    PyObject *tmp_assattr_name_26;
    PyObject *tmp_assattr_name_27;
    PyObject *tmp_assattr_name_28;
    PyObject *tmp_assattr_name_29;
    PyObject *tmp_assattr_name_30;
    PyObject *tmp_assattr_name_31;
    PyObject *tmp_assattr_name_32;
    PyObject *tmp_assattr_name_33;
    PyObject *tmp_assattr_name_34;
    PyObject *tmp_assattr_name_35;
    PyObject *tmp_assattr_name_36;
    PyObject *tmp_assattr_name_37;
    PyObject *tmp_assattr_name_38;
    PyObject *tmp_assattr_name_39;
    PyObject *tmp_assattr_name_40;
    PyObject *tmp_assattr_name_41;
    PyObject *tmp_assattr_name_42;
    PyObject *tmp_assattr_name_43;
    PyObject *tmp_assattr_name_44;
    PyObject *tmp_assattr_name_45;
    PyObject *tmp_assattr_name_46;
    PyObject *tmp_assattr_name_47;
    PyObject *tmp_assattr_name_48;
    PyObject *tmp_assattr_name_49;
    PyObject *tmp_assattr_name_50;
    PyObject *tmp_assattr_name_51;
    PyObject *tmp_assattr_name_52;
    PyObject *tmp_assattr_name_53;
    PyObject *tmp_assattr_name_54;
    PyObject *tmp_assattr_name_55;
    PyObject *tmp_assattr_name_56;
    PyObject *tmp_assattr_name_57;
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
    PyObject *tmp_assattr_target_20;
    PyObject *tmp_assattr_target_21;
    PyObject *tmp_assattr_target_22;
    PyObject *tmp_assattr_target_23;
    PyObject *tmp_assattr_target_24;
    PyObject *tmp_assattr_target_25;
    PyObject *tmp_assattr_target_26;
    PyObject *tmp_assattr_target_27;
    PyObject *tmp_assattr_target_28;
    PyObject *tmp_assattr_target_29;
    PyObject *tmp_assattr_target_30;
    PyObject *tmp_assattr_target_31;
    PyObject *tmp_assattr_target_32;
    PyObject *tmp_assattr_target_33;
    PyObject *tmp_assattr_target_34;
    PyObject *tmp_assattr_target_35;
    PyObject *tmp_assattr_target_36;
    PyObject *tmp_assattr_target_37;
    PyObject *tmp_assattr_target_38;
    PyObject *tmp_assattr_target_39;
    PyObject *tmp_assattr_target_40;
    PyObject *tmp_assattr_target_41;
    PyObject *tmp_assattr_target_42;
    PyObject *tmp_assattr_target_43;
    PyObject *tmp_assattr_target_44;
    PyObject *tmp_assattr_target_45;
    PyObject *tmp_assattr_target_46;
    PyObject *tmp_assattr_target_47;
    PyObject *tmp_assattr_target_48;
    PyObject *tmp_assattr_target_49;
    PyObject *tmp_assattr_target_50;
    PyObject *tmp_assattr_target_51;
    PyObject *tmp_assattr_target_52;
    PyObject *tmp_assattr_target_53;
    PyObject *tmp_assattr_target_54;
    PyObject *tmp_assattr_target_55;
    PyObject *tmp_assattr_target_56;
    PyObject *tmp_assattr_target_57;
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
    PyObject *tmp_assign_source_69;
    PyObject *tmp_assign_source_70;
    PyObject *tmp_assign_source_71;
    PyObject *tmp_assign_source_72;
    PyObject *tmp_assign_source_73;
    PyObject *tmp_assign_source_74;
    PyObject *tmp_assign_source_75;
    PyObject *tmp_assign_source_76;
    PyObject *tmp_assign_source_77;
    PyObject *tmp_assign_source_78;
    PyObject *tmp_assign_source_79;
    PyObject *tmp_assign_source_80;
    PyObject *tmp_assign_source_81;
    PyObject *tmp_assign_source_82;
    PyObject *tmp_assign_source_83;
    PyObject *tmp_assign_source_84;
    PyObject *tmp_assign_source_85;
    PyObject *tmp_assign_source_86;
    PyObject *tmp_assign_source_87;
    PyObject *tmp_assign_source_88;
    PyObject *tmp_assign_source_89;
    PyObject *tmp_assign_source_90;
    PyObject *tmp_assign_source_91;
    PyObject *tmp_assign_source_92;
    PyObject *tmp_assign_source_93;
    PyObject *tmp_assign_source_94;
    PyObject *tmp_assign_source_95;
    PyObject *tmp_assign_source_96;
    PyObject *tmp_assign_source_97;
    PyObject *tmp_assign_source_98;
    PyObject *tmp_assign_source_99;
    PyObject *tmp_assign_source_100;
    PyObject *tmp_assign_source_101;
    PyObject *tmp_assign_source_102;
    PyObject *tmp_assign_source_103;
    PyObject *tmp_assign_source_104;
    PyObject *tmp_assign_source_105;
    PyObject *tmp_assign_source_106;
    PyObject *tmp_assign_source_107;
    PyObject *tmp_assign_source_108;
    PyObject *tmp_assign_source_109;
    PyObject *tmp_assign_source_110;
    PyObject *tmp_assign_source_111;
    PyObject *tmp_assign_source_112;
    PyObject *tmp_assign_source_113;
    PyObject *tmp_assign_source_114;
    PyObject *tmp_assign_source_115;
    PyObject *tmp_assign_source_116;
    PyObject *tmp_assign_source_117;
    PyObject *tmp_assign_source_118;
    PyObject *tmp_assign_source_119;
    PyObject *tmp_assign_source_120;
    PyObject *tmp_assign_source_121;
    PyObject *tmp_assign_source_122;
    PyObject *tmp_assign_source_123;
    PyObject *tmp_assign_source_124;
    PyObject *tmp_assign_source_125;
    PyObject *tmp_assign_source_126;
    PyObject *tmp_assign_source_127;
    PyObject *tmp_assign_source_128;
    PyObject *tmp_assign_source_129;
    PyObject *tmp_assign_source_130;
    PyObject *tmp_assign_source_131;
    PyObject *tmp_assign_source_132;
    PyObject *tmp_assign_source_133;
    PyObject *tmp_assign_source_134;
    PyObject *tmp_assign_source_135;
    PyObject *tmp_assign_source_136;
    PyObject *tmp_assign_source_137;
    PyObject *tmp_assign_source_138;
    PyObject *tmp_assign_source_139;
    PyObject *tmp_assign_source_140;
    PyObject *tmp_assign_source_141;
    PyObject *tmp_assign_source_142;
    PyObject *tmp_assign_source_143;
    PyObject *tmp_assign_source_144;
    PyObject *tmp_assign_source_145;
    PyObject *tmp_assign_source_146;
    PyObject *tmp_assign_source_147;
    PyObject *tmp_assign_source_148;
    PyObject *tmp_assign_source_149;
    PyObject *tmp_assign_source_150;
    PyObject *tmp_assign_source_151;
    PyObject *tmp_assign_source_152;
    PyObject *tmp_assign_source_153;
    PyObject *tmp_assign_source_154;
    PyObject *tmp_assign_source_155;
    PyObject *tmp_assign_source_156;
    PyObject *tmp_assign_source_157;
    PyObject *tmp_assign_source_158;
    PyObject *tmp_assign_source_159;
    PyObject *tmp_assign_source_160;
    PyObject *tmp_assign_source_161;
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_bases_name_3;
    PyObject *tmp_bases_name_4;
    PyObject *tmp_bases_name_5;
    PyObject *tmp_bases_name_6;
    PyObject *tmp_bases_name_7;
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
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    int tmp_cmp_In_5;
    int tmp_cmp_In_6;
    int tmp_cmp_In_7;
    int tmp_cmp_In_8;
    int tmp_cmp_In_9;
    int tmp_cmp_In_10;
    int tmp_cmp_In_11;
    int tmp_cmp_In_12;
    int tmp_cmp_In_13;
    int tmp_cmp_In_14;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_left_9;
    PyObject *tmp_compare_left_10;
    PyObject *tmp_compare_left_11;
    PyObject *tmp_compare_left_12;
    PyObject *tmp_compare_left_13;
    PyObject *tmp_compare_left_14;
    PyObject *tmp_compare_left_15;
    PyObject *tmp_compare_left_16;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
    PyObject *tmp_compare_right_10;
    PyObject *tmp_compare_right_11;
    PyObject *tmp_compare_right_12;
    PyObject *tmp_compare_right_13;
    PyObject *tmp_compare_right_14;
    PyObject *tmp_compare_right_15;
    PyObject *tmp_compare_right_16;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    int tmp_cond_truth_8;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_cond_value_8;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dict_name_4;
    PyObject *tmp_dict_name_5;
    PyObject *tmp_dict_name_6;
    PyObject *tmp_dict_name_7;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_attr_2;
    PyObject *tmp_hasattr_attr_3;
    PyObject *tmp_hasattr_attr_4;
    PyObject *tmp_hasattr_attr_5;
    PyObject *tmp_hasattr_attr_6;
    PyObject *tmp_hasattr_attr_7;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_source_2;
    PyObject *tmp_hasattr_source_3;
    PyObject *tmp_hasattr_source_4;
    PyObject *tmp_hasattr_source_5;
    PyObject *tmp_hasattr_source_6;
    PyObject *tmp_hasattr_source_7;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_globals_6;
    PyObject *tmp_import_globals_7;
    PyObject *tmp_import_globals_8;
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
    PyObject *tmp_import_name_from_11;
    PyObject *tmp_import_name_from_12;
    PyObject *tmp_import_name_from_13;
    PyObject *tmp_import_name_from_14;
    PyObject *tmp_import_name_from_15;
    PyObject *tmp_import_name_from_16;
    bool tmp_is_1;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_key_name_4;
    PyObject *tmp_key_name_5;
    PyObject *tmp_key_name_6;
    PyObject *tmp_key_name_7;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_kw_name_5;
    PyObject *tmp_kw_name_6;
    PyObject *tmp_kw_name_7;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_list_element_3;
    PyObject *tmp_list_element_4;
    PyObject *tmp_list_element_5;
    PyObject *tmp_list_element_6;
    PyObject *tmp_list_element_7;
    PyObject *tmp_list_element_8;
    PyObject *tmp_list_element_9;
    PyObject *tmp_list_element_10;
    PyObject *tmp_list_element_11;
    PyObject *tmp_list_element_12;
    PyObject *tmp_list_element_13;
    PyObject *tmp_list_element_14;
    PyObject *tmp_list_element_15;
    PyObject *tmp_list_element_16;
    PyObject *tmp_list_element_17;
    PyObject *tmp_list_element_18;
    PyObject *tmp_list_element_19;
    PyObject *tmp_list_element_20;
    PyObject *tmp_list_element_21;
    PyObject *tmp_list_element_22;
    PyObject *tmp_list_element_23;
    PyObject *tmp_list_element_24;
    PyObject *tmp_list_element_25;
    PyObject *tmp_list_element_26;
    PyObject *tmp_list_element_27;
    PyObject *tmp_list_element_28;
    PyObject *tmp_list_element_29;
    PyObject *tmp_list_element_30;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_metaclass_name_2;
    PyObject *tmp_metaclass_name_3;
    PyObject *tmp_metaclass_name_4;
    PyObject *tmp_metaclass_name_5;
    PyObject *tmp_metaclass_name_6;
    PyObject *tmp_metaclass_name_7;
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
    PyObject *tmp_source_name_26;
    PyObject *tmp_source_name_27;
    PyObject *tmp_source_name_28;
    PyObject *tmp_source_name_29;
    PyObject *tmp_source_name_30;
    PyObject *tmp_source_name_31;
    PyObject *tmp_source_name_32;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscribed_name_7;
    PyObject *tmp_subscribed_name_8;
    PyObject *tmp_subscribed_name_9;
    PyObject *tmp_subscribed_name_10;
    PyObject *tmp_subscribed_name_11;
    PyObject *tmp_subscribed_name_12;
    PyObject *tmp_subscribed_name_13;
    PyObject *tmp_subscribed_name_14;
    PyObject *tmp_subscribed_name_15;
    PyObject *tmp_subscribed_name_16;
    PyObject *tmp_subscribed_name_17;
    PyObject *tmp_subscribed_name_18;
    PyObject *tmp_subscribed_name_19;
    PyObject *tmp_subscribed_name_20;
    PyObject *tmp_subscribed_name_21;
    PyObject *tmp_subscribed_name_22;
    PyObject *tmp_subscribed_name_23;
    PyObject *tmp_subscribed_name_24;
    PyObject *tmp_subscribed_name_25;
    PyObject *tmp_subscribed_name_26;
    PyObject *tmp_subscribed_name_27;
    PyObject *tmp_subscribed_name_28;
    PyObject *tmp_subscribed_name_29;
    PyObject *tmp_subscribed_name_30;
    PyObject *tmp_subscribed_name_31;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_subscript_name_7;
    PyObject *tmp_subscript_name_8;
    PyObject *tmp_subscript_name_9;
    PyObject *tmp_subscript_name_10;
    PyObject *tmp_subscript_name_11;
    PyObject *tmp_subscript_name_12;
    PyObject *tmp_subscript_name_13;
    PyObject *tmp_subscript_name_14;
    PyObject *tmp_subscript_name_15;
    PyObject *tmp_subscript_name_16;
    PyObject *tmp_subscript_name_17;
    PyObject *tmp_subscript_name_18;
    PyObject *tmp_subscript_name_19;
    PyObject *tmp_subscript_name_20;
    PyObject *tmp_subscript_name_21;
    PyObject *tmp_subscript_name_22;
    PyObject *tmp_subscript_name_23;
    PyObject *tmp_subscript_name_24;
    PyObject *tmp_subscript_name_25;
    PyObject *tmp_subscript_name_26;
    PyObject *tmp_subscript_name_27;
    PyObject *tmp_subscript_name_28;
    PyObject *tmp_subscript_name_29;
    PyObject *tmp_subscript_name_30;
    PyObject *tmp_subscript_name_31;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_tuple_element_8;
    PyObject *tmp_tuple_element_9;
    PyObject *tmp_tuple_element_10;
    PyObject *tmp_tuple_element_11;
    PyObject *tmp_tuple_element_12;
    PyObject *tmp_tuple_element_13;
    PyObject *tmp_tuple_element_14;
    PyObject *tmp_tuple_element_15;
    PyObject *tmp_tuple_element_16;
    PyObject *tmp_tuple_element_17;
    PyObject *tmp_tuple_element_18;
    PyObject *tmp_tuple_element_19;
    PyObject *tmp_tuple_element_20;
    PyObject *tmp_tuple_element_21;
    PyObject *tmp_tuple_element_22;
    PyObject *tmp_tuple_element_23;
    PyObject *tmp_tuple_element_24;
    PyObject *tmp_tuple_element_25;
    PyObject *tmp_tuple_element_26;
    PyObject *tmp_tuple_element_27;
    PyObject *tmp_tuple_element_28;
    PyObject *tmp_tuple_element_29;
    PyObject *tmp_tuple_element_30;
    PyObject *tmp_tuple_element_31;
    PyObject *tmp_tuple_element_32;
    PyObject *tmp_tuple_element_33;
    PyObject *tmp_tuple_element_34;
    PyObject *tmp_tuple_element_35;
    PyObject *tmp_tuple_element_36;
    PyObject *tmp_tuple_element_37;
    PyObject *tmp_tuple_element_38;
    PyObject *tmp_tuple_element_39;
    PyObject *tmp_tuple_element_40;
    PyObject *tmp_tuple_element_41;
    PyObject *tmp_tuple_element_42;
    PyObject *tmp_tuple_element_43;
    PyObject *tmp_tuple_element_44;
    PyObject *tmp_tuple_element_45;
    PyObject *tmp_tuple_element_46;
    PyObject *tmp_tuple_element_47;
    PyObject *tmp_tuple_element_48;
    PyObject *tmp_tuple_element_49;
    PyObject *tmp_tuple_element_50;
    PyObject *tmp_tuple_element_51;
    PyObject *tmp_tuple_element_52;
    PyObject *tmp_tuple_element_53;
    PyObject *tmp_tuple_element_54;
    PyObject *tmp_tuple_element_55;
    PyObject *tmp_tuple_element_56;
    PyObject *tmp_tuple_element_57;
    PyObject *tmp_tuple_element_58;
    PyObject *tmp_tuple_element_59;
    PyObject *tmp_tuple_element_60;
    PyObject *tmp_tuple_element_61;
    PyObject *tmp_tuple_element_62;
    PyObject *tmp_tuple_element_63;
    PyObject *tmp_tuple_element_64;
    PyObject *tmp_tuple_element_65;
    PyObject *tmp_tuple_element_66;
    PyObject *tmp_tuple_element_67;
    PyObject *tmp_tuple_element_68;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    PyObject *tmp_type_arg_3;
    PyObject *tmp_type_arg_4;
    PyObject *tmp_type_arg_5;
    PyObject *tmp_type_arg_6;
    PyObject *tmp_type_arg_7;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_9e11bd86fbf828de9ceefd642bf89a24;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_plain_serial;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_4 );
    tmp_assign_source_5 = PyDict_New();
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_5 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_4d49d2c5adb96ffa1a9df802e90e32c2, module_serial$win32 );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_serial$win32)->md_dict;
    frame_module->f_lineno = 12;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_ctypes, tmp_import_globals_1, Py_None, const_tuple_1a2eca5d3798147c4e19d3cc73472a25_tuple, const_int_0 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_6;

    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_c_ulong );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_ulong, tmp_assign_source_7 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_c_void_p );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_void_p, tmp_assign_source_8 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_c_int64 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_int64, tmp_assign_source_9 );
    tmp_import_name_from_4 = tmp_import_from_1__module;

    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_c_char );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_char, tmp_assign_source_10 );
    tmp_import_name_from_5 = tmp_import_from_1__module;

    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_WinDLL );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_WinDLL, tmp_assign_source_11 );
    tmp_import_name_from_6 = tmp_import_from_1__module;

    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_sizeof );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_sizeof, tmp_assign_source_12 );
    tmp_import_name_from_7 = tmp_import_from_1__module;

    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_Structure );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_Structure, tmp_assign_source_13 );
    tmp_import_name_from_8 = tmp_import_from_1__module;

    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_Union );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_Union, tmp_assign_source_14 );
    tmp_import_name_from_9 = tmp_import_from_1__module;

    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_POINTER );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_POINTER, tmp_assign_source_15 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    tmp_import_globals_2 = ((PyModuleObject *)module_serial$win32)->md_dict;
    frame_module->f_lineno = 14;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_digest_5cf36b708703fd37649115cac3d2ec3c, tmp_import_globals_2, Py_None, const_tuple_str_plain_HANDLE_tuple, const_int_0 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_HANDLE );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE, tmp_assign_source_16 );
    tmp_import_globals_3 = ((PyModuleObject *)module_serial$win32)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_11 = IMPORT_MODULE( const_str_digest_5cf36b708703fd37649115cac3d2ec3c, tmp_import_globals_3, Py_None, const_tuple_str_plain_BOOL_tuple, const_int_0 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_BOOL );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL, tmp_assign_source_17 );
    tmp_import_globals_4 = ((PyModuleObject *)module_serial$win32)->md_dict;
    frame_module->f_lineno = 16;
    tmp_import_name_from_12 = IMPORT_MODULE( const_str_digest_5cf36b708703fd37649115cac3d2ec3c, tmp_import_globals_4, Py_None, const_tuple_str_plain_LPCWSTR_tuple, const_int_0 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_LPCWSTR );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCWSTR, tmp_assign_source_18 );
    tmp_import_globals_5 = ((PyModuleObject *)module_serial$win32)->md_dict;
    frame_module->f_lineno = 17;
    tmp_import_name_from_13 = IMPORT_MODULE( const_str_digest_5cf36b708703fd37649115cac3d2ec3c, tmp_import_globals_5, Py_None, const_tuple_str_plain_DWORD_tuple, const_int_0 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_DWORD );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD, tmp_assign_source_19 );
    tmp_import_globals_6 = ((PyModuleObject *)module_serial$win32)->md_dict;
    frame_module->f_lineno = 18;
    tmp_import_name_from_14 = IMPORT_MODULE( const_str_digest_5cf36b708703fd37649115cac3d2ec3c, tmp_import_globals_6, Py_None, const_tuple_str_plain_WORD_tuple, const_int_0 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_WORD );
    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_WORD, tmp_assign_source_20 );
    tmp_import_globals_7 = ((PyModuleObject *)module_serial$win32)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_15 = IMPORT_MODULE( const_str_digest_5cf36b708703fd37649115cac3d2ec3c, tmp_import_globals_7, Py_None, const_tuple_str_plain_BYTE_tuple, const_int_0 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_BYTE );
    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BYTE, tmp_assign_source_21 );
    tmp_assign_source_22 = PyDict_New();
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries, tmp_assign_source_22 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_WinDLL );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WinDLL );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WinDLL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 21;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 21;
    tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_plain_kernel32_tuple, 0 ) );

    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_ass_subscribed_1 == NULL ))
    {
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 21;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = const_str_plain_kernel32;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 23;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 23;
    tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_int_neg_1_tuple, 0 ) );

    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_23 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_value );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_INVALID_HANDLE_VALUE, tmp_assign_source_23 );
    tmp_assign_source_24 = MAKE_FUNCTION_serial$win32$$$function_1_is_64bit(  );
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_is_64bit, tmp_assign_source_24 );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_is_64bit );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_is_64bit );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "is_64bit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 34;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 34;
    tmp_cond_value_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 34;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assign_source_25 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_int64 );

    if (unlikely( tmp_assign_source_25 == NULL ))
    {
        tmp_assign_source_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_int64 );
    }

    if ( tmp_assign_source_25 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "c_int64" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 35;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ULONG_PTR, tmp_assign_source_25 );
    goto branch_end_1;
    branch_no_1:;
    tmp_assign_source_26 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_ulong );

    if (unlikely( tmp_assign_source_26 == NULL ))
    {
        tmp_assign_source_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_ulong );
    }

    if ( tmp_assign_source_26 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "c_ulong" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ULONG_PTR, tmp_assign_source_26 );
    branch_end_1:;
    // Tried code:
    tmp_assign_source_27 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_Structure );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Structure );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_27 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Structure" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_27, 0, tmp_tuple_element_1 );
    assert( tmp_serial$win32_class_creation_1__bases == NULL );
    tmp_serial$win32_class_creation_1__bases = tmp_assign_source_27;

    tmp_assign_source_28 = PyDict_New();
    assert( tmp_serial$win32_class_creation_1__class_decl_dict == NULL );
    tmp_serial$win32_class_creation_1__class_decl_dict = tmp_assign_source_28;

    tmp_compare_left_1 = const_str_plain_metaclass;
    tmp_compare_right_1 = tmp_serial$win32_class_creation_1__class_decl_dict;

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
    tmp_dict_name_1 = tmp_serial$win32_class_creation_1__class_decl_dict;

    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_metaclass_name_1 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        goto try_except_handler_2;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_2 = tmp_serial$win32_class_creation_1__bases;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_subscribed_name_1 = tmp_serial$win32_class_creation_1__bases;

    tmp_subscript_name_1 = const_int_0;
    tmp_type_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        goto try_except_handler_2;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        goto try_except_handler_2;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_1 != NULL );
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_serial$win32_class_creation_1__bases;

    tmp_assign_source_29 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 40;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_serial$win32_class_creation_1__metaclass == NULL );
    tmp_serial$win32_class_creation_1__metaclass = tmp_assign_source_29;

    tmp_compare_left_2 = const_str_plain_metaclass;
    tmp_compare_right_2 = tmp_serial$win32_class_creation_1__class_decl_dict;

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
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
    tmp_dictdel_dict = tmp_serial$win32_class_creation_1__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        goto try_except_handler_2;
    }
    branch_no_2:;
    tmp_hasattr_source_1 = tmp_serial$win32_class_creation_1__metaclass;

    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        goto try_except_handler_2;
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
    tmp_source_name_2 = tmp_serial$win32_class_creation_1__metaclass;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        goto try_except_handler_2;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain__SECURITY_ATTRIBUTES;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_serial$win32_class_creation_1__bases;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = tmp_serial$win32_class_creation_1__class_decl_dict;

    frame_module->f_lineno = 40;
    tmp_assign_source_30 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        goto try_except_handler_2;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_30 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_serial$win32_class_creation_1__prepared == NULL );
    tmp_serial$win32_class_creation_1__prepared = tmp_assign_source_30;

    tmp_assign_source_31 = impl_serial$win32$$$class_1__SECURITY_ATTRIBUTES( NULL, &tmp_serial$win32_class_creation_1__bases, &tmp_serial$win32_class_creation_1__class_decl_dict, &tmp_serial$win32_class_creation_1__metaclass, &tmp_serial$win32_class_creation_1__prepared );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__SECURITY_ATTRIBUTES, tmp_assign_source_31 );
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

    Py_XDECREF( tmp_serial$win32_class_creation_1__bases );
    tmp_serial$win32_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_1__class_decl_dict );
    tmp_serial$win32_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_1__metaclass );
    tmp_serial$win32_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_1__prepared );
    tmp_serial$win32_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_serial$win32_class_creation_1__bases );
    tmp_serial$win32_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_1__class_decl_dict );
    tmp_serial$win32_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_1__metaclass );
    tmp_serial$win32_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_1__prepared );
    tmp_serial$win32_class_creation_1__prepared = NULL;

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_POINTER );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_POINTER );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "POINTER" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 42;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__SECURITY_ATTRIBUTES );

    if (unlikely( tmp_args_element_name_1 == NULL ))
    {
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__SECURITY_ATTRIBUTES );
    }

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_SECURITY_ATTRIBUTES" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 42;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 42;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPSECURITY_ATTRIBUTES, tmp_assign_source_32 );
    tmp_assign_source_33 = Py_True;
    assert( tmp_try_except_1__unhandled_indicator == NULL );
    Py_INCREF( tmp_assign_source_33 );
    tmp_try_except_1__unhandled_indicator = tmp_assign_source_33;

    // Tried code:
    // Tried code:
    tmp_subscribed_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscribed_name_2 == NULL ))
    {
        tmp_subscribed_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;
        goto try_except_handler_4;
    }

    tmp_subscript_name_2 = const_str_plain_kernel32;
    tmp_source_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        goto try_except_handler_4;
    }
    tmp_assign_source_34 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_CreateEventW );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateEventW, tmp_assign_source_34 );
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

    tmp_assign_source_35 = Py_False;
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator;
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_35;
        Py_INCREF( tmp_try_except_1__unhandled_indicator );
        Py_XDECREF( old );
    }

    // Preserve existing published exception.
    exception_preserved_type_1 = PyThreadState_GET()->exc_type;
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = PyThreadState_GET()->exc_value;
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)PyThreadState_GET()->exc_traceback;
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_module, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != -1 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_module, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyExc_AttributeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        goto try_except_handler_5;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_import_globals_8 = ((PyModuleObject *)module_serial$win32)->md_dict;
    frame_module->f_lineno = 49;
    tmp_import_name_from_16 = IMPORT_MODULE( const_str_digest_5cf36b708703fd37649115cac3d2ec3c, tmp_import_globals_8, Py_None, const_tuple_str_plain_LPCSTR_tuple, const_int_0 );
    if ( tmp_import_name_from_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        goto try_except_handler_5;
    }
    tmp_assign_source_36 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_LPCSTR );
    Py_DECREF( tmp_import_name_from_16 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCSTR, tmp_assign_source_36 );
    tmp_subscribed_name_3 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscribed_name_3 == NULL ))
    {
        tmp_subscribed_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscribed_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;
        goto try_except_handler_5;
    }

    tmp_subscript_name_3 = const_str_plain_kernel32;
    tmp_source_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto try_except_handler_5;
    }
    tmp_assign_source_37 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_CreateEventA );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateEventA, tmp_assign_source_37 );
    tmp_assattr_name_1 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assattr_name_1 == NULL ))
    {
        tmp_assattr_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        goto try_except_handler_5;
    }

    tmp_assattr_target_1 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateEventA );

    if (unlikely( tmp_assattr_target_1 == NULL ))
    {
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CreateEventA );
    }

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CreateEventA" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        goto try_except_handler_5;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_restype, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto try_except_handler_5;
    }
    tmp_assattr_name_2 = PyList_New( 4 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPSECURITY_ATTRIBUTES );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPSECURITY_ATTRIBUTES );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPSECURITY_ATTRIBUTES" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        goto try_except_handler_5;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_2, 0, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        goto try_except_handler_5;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_2, 1, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        goto try_except_handler_5;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_2, 2, tmp_list_element_1 );
    tmp_list_element_1 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCSTR );

    if (unlikely( tmp_list_element_1 == NULL ))
    {
        tmp_list_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPCSTR );
    }

    if ( tmp_list_element_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPCSTR" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        goto try_except_handler_5;
    }

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assattr_name_2, 3, tmp_list_element_1 );
    tmp_assattr_target_2 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateEventA );

    if (unlikely( tmp_assattr_target_2 == NULL ))
    {
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CreateEventA );
    }

    if ( tmp_assattr_target_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CreateEventA" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        goto try_except_handler_5;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_argtypes, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 52;
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_assign_source_38 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateEventA );

    if (unlikely( tmp_assign_source_38 == NULL ))
    {
        tmp_assign_source_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CreateEventA );
    }

    if ( tmp_assign_source_38 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CreateEventA" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        goto try_except_handler_5;
    }

    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateEvent, tmp_assign_source_38 );
    tmp_subscribed_name_4 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscribed_name_4 == NULL ))
    {
        tmp_subscribed_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscribed_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;
        goto try_except_handler_5;
    }

    tmp_subscript_name_4 = const_str_plain_kernel32;
    tmp_source_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto try_except_handler_5;
    }
    tmp_assign_source_39 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_CreateFileA );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateFileA, tmp_assign_source_39 );
    tmp_assattr_name_3 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assattr_name_3 == NULL ))
    {
        tmp_assattr_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_assattr_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;
        goto try_except_handler_5;
    }

    tmp_assattr_target_3 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateFileA );

    if (unlikely( tmp_assattr_target_3 == NULL ))
    {
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CreateFileA );
    }

    if ( tmp_assattr_target_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CreateFileA" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;
        goto try_except_handler_5;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_restype, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        goto try_except_handler_5;
    }
    tmp_assattr_name_4 = PyList_New( 7 );
    tmp_list_element_2 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCSTR );

    if (unlikely( tmp_list_element_2 == NULL ))
    {
        tmp_list_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPCSTR );
    }

    if ( tmp_list_element_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPCSTR" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        goto try_except_handler_5;
    }

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_assattr_name_4, 0, tmp_list_element_2 );
    tmp_list_element_2 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_2 == NULL ))
    {
        tmp_list_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        goto try_except_handler_5;
    }

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_assattr_name_4, 1, tmp_list_element_2 );
    tmp_list_element_2 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_2 == NULL ))
    {
        tmp_list_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        goto try_except_handler_5;
    }

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_assattr_name_4, 2, tmp_list_element_2 );
    tmp_list_element_2 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPSECURITY_ATTRIBUTES );

    if (unlikely( tmp_list_element_2 == NULL ))
    {
        tmp_list_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPSECURITY_ATTRIBUTES );
    }

    if ( tmp_list_element_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPSECURITY_ATTRIBUTES" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        goto try_except_handler_5;
    }

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_assattr_name_4, 3, tmp_list_element_2 );
    tmp_list_element_2 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_2 == NULL ))
    {
        tmp_list_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        goto try_except_handler_5;
    }

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_assattr_name_4, 4, tmp_list_element_2 );
    tmp_list_element_2 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_2 == NULL ))
    {
        tmp_list_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        goto try_except_handler_5;
    }

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_assattr_name_4, 5, tmp_list_element_2 );
    tmp_list_element_2 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_2 == NULL ))
    {
        tmp_list_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_2 == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        goto try_except_handler_5;
    }

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_assattr_name_4, 6, tmp_list_element_2 );
    tmp_assattr_target_4 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateFileA );

    if (unlikely( tmp_assattr_target_4 == NULL ))
    {
        tmp_assattr_target_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CreateFileA );
    }

    if ( tmp_assattr_target_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CreateFileA" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        goto try_except_handler_5;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_argtypes, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 57;
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_assattr_name_4 );
    tmp_assign_source_40 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateFileA );

    if (unlikely( tmp_assign_source_40 == NULL ))
    {
        tmp_assign_source_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CreateFileA );
    }

    if ( tmp_assign_source_40 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CreateFileA" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        goto try_except_handler_5;
    }

    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateFile, tmp_assign_source_40 );
    goto branch_end_3;
    branch_no_3:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_5;
    branch_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_3;
    // End of try:
    try_end_4:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( serial$win32 );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_3:;
    tmp_compare_left_4 = tmp_try_except_1__unhandled_indicator;

    tmp_compare_right_4 = Py_True;
    tmp_is_1 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    if ( tmp_is_1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assattr_name_5 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assattr_name_5 == NULL ))
    {
        tmp_assattr_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_assattr_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        goto try_except_handler_3;
    }

    tmp_assattr_target_5 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateEventW );

    if (unlikely( tmp_assattr_target_5 == NULL ))
    {
        tmp_assattr_target_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CreateEventW );
    }

    if ( tmp_assattr_target_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CreateEventW" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        goto try_except_handler_3;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_restype, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto try_except_handler_3;
    }
    tmp_assattr_name_6 = PyList_New( 4 );
    tmp_list_element_3 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPSECURITY_ATTRIBUTES );

    if (unlikely( tmp_list_element_3 == NULL ))
    {
        tmp_list_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPSECURITY_ATTRIBUTES );
    }

    if ( tmp_list_element_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPSECURITY_ATTRIBUTES" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        goto try_except_handler_3;
    }

    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_assattr_name_6, 0, tmp_list_element_3 );
    tmp_list_element_3 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_list_element_3 == NULL ))
    {
        tmp_list_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_list_element_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        goto try_except_handler_3;
    }

    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_assattr_name_6, 1, tmp_list_element_3 );
    tmp_list_element_3 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_list_element_3 == NULL ))
    {
        tmp_list_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_list_element_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        goto try_except_handler_3;
    }

    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_assattr_name_6, 2, tmp_list_element_3 );
    tmp_list_element_3 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCWSTR );

    if (unlikely( tmp_list_element_3 == NULL ))
    {
        tmp_list_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPCWSTR );
    }

    if ( tmp_list_element_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPCWSTR" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        goto try_except_handler_3;
    }

    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_assattr_name_6, 3, tmp_list_element_3 );
    tmp_assattr_target_6 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateEventW );

    if (unlikely( tmp_assattr_target_6 == NULL ))
    {
        tmp_assattr_target_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CreateEventW );
    }

    if ( tmp_assattr_target_6 == NULL )
    {
        Py_DECREF( tmp_assattr_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CreateEventW" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        goto try_except_handler_3;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_argtypes, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_6 );

        exception_lineno = 61;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_assattr_name_6 );
    tmp_assign_source_41 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateEventW );

    if (unlikely( tmp_assign_source_41 == NULL ))
    {
        tmp_assign_source_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CreateEventW );
    }

    if ( tmp_assign_source_41 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CreateEventW" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        goto try_except_handler_3;
    }

    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateEvent, tmp_assign_source_41 );
    tmp_subscribed_name_5 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscribed_name_5 == NULL ))
    {
        tmp_subscribed_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscribed_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        goto try_except_handler_3;
    }

    tmp_subscript_name_5 = const_str_plain_kernel32;
    tmp_source_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        goto try_except_handler_3;
    }
    tmp_assign_source_42 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_CreateFileW );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateFileW, tmp_assign_source_42 );
    tmp_assattr_name_7 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assattr_name_7 == NULL ))
    {
        tmp_assattr_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_assattr_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        goto try_except_handler_3;
    }

    tmp_assattr_target_7 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateFileW );

    if (unlikely( tmp_assattr_target_7 == NULL ))
    {
        tmp_assattr_target_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CreateFileW );
    }

    if ( tmp_assattr_target_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CreateFileW" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        goto try_except_handler_3;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_restype, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        goto try_except_handler_3;
    }
    tmp_assattr_name_8 = PyList_New( 7 );
    tmp_list_element_4 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCWSTR );

    if (unlikely( tmp_list_element_4 == NULL ))
    {
        tmp_list_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPCWSTR );
    }

    if ( tmp_list_element_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPCWSTR" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        goto try_except_handler_3;
    }

    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_assattr_name_8, 0, tmp_list_element_4 );
    tmp_list_element_4 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_4 == NULL ))
    {
        tmp_list_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        goto try_except_handler_3;
    }

    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_assattr_name_8, 1, tmp_list_element_4 );
    tmp_list_element_4 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_4 == NULL ))
    {
        tmp_list_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        goto try_except_handler_3;
    }

    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_assattr_name_8, 2, tmp_list_element_4 );
    tmp_list_element_4 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPSECURITY_ATTRIBUTES );

    if (unlikely( tmp_list_element_4 == NULL ))
    {
        tmp_list_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPSECURITY_ATTRIBUTES );
    }

    if ( tmp_list_element_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPSECURITY_ATTRIBUTES" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        goto try_except_handler_3;
    }

    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_assattr_name_8, 3, tmp_list_element_4 );
    tmp_list_element_4 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_4 == NULL ))
    {
        tmp_list_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        goto try_except_handler_3;
    }

    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_assattr_name_8, 4, tmp_list_element_4 );
    tmp_list_element_4 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_4 == NULL ))
    {
        tmp_list_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        goto try_except_handler_3;
    }

    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_assattr_name_8, 5, tmp_list_element_4 );
    tmp_list_element_4 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_4 == NULL ))
    {
        tmp_list_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_4 == NULL )
    {
        Py_DECREF( tmp_assattr_name_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        goto try_except_handler_3;
    }

    Py_INCREF( tmp_list_element_4 );
    PyList_SET_ITEM( tmp_assattr_name_8, 6, tmp_list_element_4 );
    tmp_assattr_target_8 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateFileW );

    if (unlikely( tmp_assattr_target_8 == NULL ))
    {
        tmp_assattr_target_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CreateFileW );
    }

    if ( tmp_assattr_target_8 == NULL )
    {
        Py_DECREF( tmp_assattr_name_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CreateFileW" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        goto try_except_handler_3;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_argtypes, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_8 );

        exception_lineno = 66;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_assattr_name_8 );
    tmp_assign_source_43 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateFileW );

    if (unlikely( tmp_assign_source_43 == NULL ))
    {
        tmp_assign_source_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CreateFileW );
    }

    if ( tmp_assign_source_43 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CreateFileW" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        goto try_except_handler_3;
    }

    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CreateFile, tmp_assign_source_43 );
    branch_no_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    // Tried code:
    tmp_assign_source_44 = PyTuple_New( 1 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_Structure );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Structure );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_44 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Structure" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        goto try_except_handler_6;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_44, 0, tmp_tuple_element_3 );
    assert( tmp_serial$win32_class_creation_2__bases == NULL );
    tmp_serial$win32_class_creation_2__bases = tmp_assign_source_44;

    tmp_assign_source_45 = PyDict_New();
    assert( tmp_serial$win32_class_creation_2__class_decl_dict == NULL );
    tmp_serial$win32_class_creation_2__class_decl_dict = tmp_assign_source_45;

    tmp_compare_left_5 = const_str_plain_metaclass;
    tmp_compare_right_5 = tmp_serial$win32_class_creation_2__class_decl_dict;

    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
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
    tmp_dict_name_2 = tmp_serial$win32_class_creation_2__class_decl_dict;

    tmp_key_name_2 = const_str_plain_metaclass;
    tmp_metaclass_name_2 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto try_except_handler_6;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_cond_value_3 = tmp_serial$win32_class_creation_2__bases;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto try_except_handler_6;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto condexpr_true_5;
    }
    else
    {
        goto condexpr_false_5;
    }
    condexpr_true_5:;
    tmp_subscribed_name_6 = tmp_serial$win32_class_creation_2__bases;

    tmp_subscript_name_6 = const_int_0;
    tmp_type_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    if ( tmp_type_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto try_except_handler_6;
    }
    tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
    Py_DECREF( tmp_type_arg_2 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto try_except_handler_6;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_metaclass_name_2 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_2 != NULL );
    Py_INCREF( tmp_metaclass_name_2 );
    condexpr_end_5:;
    condexpr_end_4:;
    tmp_bases_name_2 = tmp_serial$win32_class_creation_2__bases;

    tmp_assign_source_46 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_2 );

        exception_lineno = 70;
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_metaclass_name_2 );
    assert( tmp_serial$win32_class_creation_2__metaclass == NULL );
    tmp_serial$win32_class_creation_2__metaclass = tmp_assign_source_46;

    tmp_compare_left_6 = const_str_plain_metaclass;
    tmp_compare_right_6 = tmp_serial$win32_class_creation_2__class_decl_dict;

    tmp_cmp_In_4 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
    assert( !(tmp_cmp_In_4 == -1) );
    if ( tmp_cmp_In_4 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_dictdel_dict = tmp_serial$win32_class_creation_2__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto try_except_handler_6;
    }
    branch_no_5:;
    tmp_hasattr_source_2 = tmp_serial$win32_class_creation_2__metaclass;

    tmp_hasattr_attr_2 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_2, tmp_hasattr_attr_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto try_except_handler_6;
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
    tmp_source_name_7 = tmp_serial$win32_class_creation_2__metaclass;

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain___prepare__ );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto try_except_handler_6;
    }
    tmp_args_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_4 = const_str_plain__OVERLAPPED;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = tmp_serial$win32_class_creation_2__bases;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
    tmp_kw_name_2 = tmp_serial$win32_class_creation_2__class_decl_dict;

    frame_module->f_lineno = 70;
    tmp_assign_source_47 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto try_except_handler_6;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_47 = PyDict_New();
    condexpr_end_6:;
    assert( tmp_serial$win32_class_creation_2__prepared == NULL );
    tmp_serial$win32_class_creation_2__prepared = tmp_assign_source_47;

    tmp_assign_source_48 = impl_serial$win32$$$class_2__OVERLAPPED( NULL, &tmp_serial$win32_class_creation_2__bases, &tmp_serial$win32_class_creation_2__class_decl_dict, &tmp_serial$win32_class_creation_2__metaclass, &tmp_serial$win32_class_creation_2__prepared );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__OVERLAPPED, tmp_assign_source_48 );
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_serial$win32_class_creation_2__bases );
    tmp_serial$win32_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_2__class_decl_dict );
    tmp_serial$win32_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_2__metaclass );
    tmp_serial$win32_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_2__prepared );
    tmp_serial$win32_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF( tmp_serial$win32_class_creation_2__bases );
    tmp_serial$win32_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_2__class_decl_dict );
    tmp_serial$win32_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_2__metaclass );
    tmp_serial$win32_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_2__prepared );
    tmp_serial$win32_class_creation_2__prepared = NULL;

    tmp_assign_source_49 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__OVERLAPPED );

    if (unlikely( tmp_assign_source_49 == NULL ))
    {
        tmp_assign_source_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__OVERLAPPED );
    }

    if ( tmp_assign_source_49 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_OVERLAPPED" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 73;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_OVERLAPPED, tmp_assign_source_49 );
    // Tried code:
    tmp_assign_source_50 = PyTuple_New( 1 );
    tmp_tuple_element_5 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_Structure );

    if (unlikely( tmp_tuple_element_5 == NULL ))
    {
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Structure );
    }

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_50 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Structure" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;
        goto try_except_handler_7;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_assign_source_50, 0, tmp_tuple_element_5 );
    assert( tmp_serial$win32_class_creation_3__bases == NULL );
    tmp_serial$win32_class_creation_3__bases = tmp_assign_source_50;

    tmp_assign_source_51 = PyDict_New();
    assert( tmp_serial$win32_class_creation_3__class_decl_dict == NULL );
    tmp_serial$win32_class_creation_3__class_decl_dict = tmp_assign_source_51;

    tmp_compare_left_7 = const_str_plain_metaclass;
    tmp_compare_right_7 = tmp_serial$win32_class_creation_3__class_decl_dict;

    tmp_cmp_In_5 = PySequence_Contains( tmp_compare_right_7, tmp_compare_left_7 );
    assert( !(tmp_cmp_In_5 == -1) );
    if ( tmp_cmp_In_5 == 1 )
    {
        goto condexpr_true_7;
    }
    else
    {
        goto condexpr_false_7;
    }
    condexpr_true_7:;
    tmp_dict_name_3 = tmp_serial$win32_class_creation_3__class_decl_dict;

    tmp_key_name_3 = const_str_plain_metaclass;
    tmp_metaclass_name_3 = DICT_GET_ITEM( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        goto try_except_handler_7;
    }
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_cond_value_4 = tmp_serial$win32_class_creation_3__bases;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        goto try_except_handler_7;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto condexpr_true_8;
    }
    else
    {
        goto condexpr_false_8;
    }
    condexpr_true_8:;
    tmp_subscribed_name_7 = tmp_serial$win32_class_creation_3__bases;

    tmp_subscript_name_7 = const_int_0;
    tmp_type_arg_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
    if ( tmp_type_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        goto try_except_handler_7;
    }
    tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_3 );
    Py_DECREF( tmp_type_arg_3 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        goto try_except_handler_7;
    }
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_metaclass_name_3 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_3 != NULL );
    Py_INCREF( tmp_metaclass_name_3 );
    condexpr_end_8:;
    condexpr_end_7:;
    tmp_bases_name_3 = tmp_serial$win32_class_creation_3__bases;

    tmp_assign_source_52 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_3 );

        exception_lineno = 76;
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_metaclass_name_3 );
    assert( tmp_serial$win32_class_creation_3__metaclass == NULL );
    tmp_serial$win32_class_creation_3__metaclass = tmp_assign_source_52;

    tmp_compare_left_8 = const_str_plain_metaclass;
    tmp_compare_right_8 = tmp_serial$win32_class_creation_3__class_decl_dict;

    tmp_cmp_In_6 = PySequence_Contains( tmp_compare_right_8, tmp_compare_left_8 );
    assert( !(tmp_cmp_In_6 == -1) );
    if ( tmp_cmp_In_6 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_dictdel_dict = tmp_serial$win32_class_creation_3__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        goto try_except_handler_7;
    }
    branch_no_6:;
    tmp_hasattr_source_3 = tmp_serial$win32_class_creation_3__metaclass;

    tmp_hasattr_attr_3 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_3, tmp_hasattr_attr_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        goto try_except_handler_7;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_9;
    }
    else
    {
        goto condexpr_false_9;
    }
    condexpr_true_9:;
    tmp_source_name_8 = tmp_serial$win32_class_creation_3__metaclass;

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain___prepare__ );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        goto try_except_handler_7;
    }
    tmp_args_name_3 = PyTuple_New( 2 );
    tmp_tuple_element_6 = const_str_plain__COMSTAT;
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = tmp_serial$win32_class_creation_3__bases;

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_6 );
    tmp_kw_name_3 = tmp_serial$win32_class_creation_3__class_decl_dict;

    frame_module->f_lineno = 76;
    tmp_assign_source_53 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_name_3 );
    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        goto try_except_handler_7;
    }
    goto condexpr_end_9;
    condexpr_false_9:;
    tmp_assign_source_53 = PyDict_New();
    condexpr_end_9:;
    assert( tmp_serial$win32_class_creation_3__prepared == NULL );
    tmp_serial$win32_class_creation_3__prepared = tmp_assign_source_53;

    tmp_assign_source_54 = impl_serial$win32$$$class_3__COMSTAT( NULL, &tmp_serial$win32_class_creation_3__bases, &tmp_serial$win32_class_creation_3__class_decl_dict, &tmp_serial$win32_class_creation_3__metaclass, &tmp_serial$win32_class_creation_3__prepared );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__COMSTAT, tmp_assign_source_54 );
    goto try_end_7;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_serial$win32_class_creation_3__bases );
    tmp_serial$win32_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_3__class_decl_dict );
    tmp_serial$win32_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_3__metaclass );
    tmp_serial$win32_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_3__prepared );
    tmp_serial$win32_class_creation_3__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    Py_XDECREF( tmp_serial$win32_class_creation_3__bases );
    tmp_serial$win32_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_3__class_decl_dict );
    tmp_serial$win32_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_3__metaclass );
    tmp_serial$win32_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_3__prepared );
    tmp_serial$win32_class_creation_3__prepared = NULL;

    tmp_assign_source_55 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__COMSTAT );

    if (unlikely( tmp_assign_source_55 == NULL ))
    {
        tmp_assign_source_55 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__COMSTAT );
    }

    if ( tmp_assign_source_55 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_COMSTAT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_COMSTAT, tmp_assign_source_55 );
    // Tried code:
    tmp_assign_source_56 = PyTuple_New( 1 );
    tmp_tuple_element_7 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_Structure );

    if (unlikely( tmp_tuple_element_7 == NULL ))
    {
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Structure );
    }

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_56 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Structure" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        goto try_except_handler_8;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_assign_source_56, 0, tmp_tuple_element_7 );
    assert( tmp_serial$win32_class_creation_4__bases == NULL );
    tmp_serial$win32_class_creation_4__bases = tmp_assign_source_56;

    tmp_assign_source_57 = PyDict_New();
    assert( tmp_serial$win32_class_creation_4__class_decl_dict == NULL );
    tmp_serial$win32_class_creation_4__class_decl_dict = tmp_assign_source_57;

    tmp_compare_left_9 = const_str_plain_metaclass;
    tmp_compare_right_9 = tmp_serial$win32_class_creation_4__class_decl_dict;

    tmp_cmp_In_7 = PySequence_Contains( tmp_compare_right_9, tmp_compare_left_9 );
    assert( !(tmp_cmp_In_7 == -1) );
    if ( tmp_cmp_In_7 == 1 )
    {
        goto condexpr_true_10;
    }
    else
    {
        goto condexpr_false_10;
    }
    condexpr_true_10:;
    tmp_dict_name_4 = tmp_serial$win32_class_creation_4__class_decl_dict;

    tmp_key_name_4 = const_str_plain_metaclass;
    tmp_metaclass_name_4 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
    if ( tmp_metaclass_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto try_except_handler_8;
    }
    goto condexpr_end_10;
    condexpr_false_10:;
    tmp_cond_value_5 = tmp_serial$win32_class_creation_4__bases;

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto try_except_handler_8;
    }
    if ( tmp_cond_truth_5 == 1 )
    {
        goto condexpr_true_11;
    }
    else
    {
        goto condexpr_false_11;
    }
    condexpr_true_11:;
    tmp_subscribed_name_8 = tmp_serial$win32_class_creation_4__bases;

    tmp_subscript_name_8 = const_int_0;
    tmp_type_arg_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
    if ( tmp_type_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto try_except_handler_8;
    }
    tmp_metaclass_name_4 = BUILTIN_TYPE1( tmp_type_arg_4 );
    Py_DECREF( tmp_type_arg_4 );
    if ( tmp_metaclass_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto try_except_handler_8;
    }
    goto condexpr_end_11;
    condexpr_false_11:;
    tmp_metaclass_name_4 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_4 != NULL );
    Py_INCREF( tmp_metaclass_name_4 );
    condexpr_end_11:;
    condexpr_end_10:;
    tmp_bases_name_4 = tmp_serial$win32_class_creation_4__bases;

    tmp_assign_source_58 = SELECT_METACLASS( tmp_metaclass_name_4, tmp_bases_name_4 );
    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_4 );

        exception_lineno = 82;
        goto try_except_handler_8;
    }
    Py_DECREF( tmp_metaclass_name_4 );
    assert( tmp_serial$win32_class_creation_4__metaclass == NULL );
    tmp_serial$win32_class_creation_4__metaclass = tmp_assign_source_58;

    tmp_compare_left_10 = const_str_plain_metaclass;
    tmp_compare_right_10 = tmp_serial$win32_class_creation_4__class_decl_dict;

    tmp_cmp_In_8 = PySequence_Contains( tmp_compare_right_10, tmp_compare_left_10 );
    assert( !(tmp_cmp_In_8 == -1) );
    if ( tmp_cmp_In_8 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_dictdel_dict = tmp_serial$win32_class_creation_4__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto try_except_handler_8;
    }
    branch_no_7:;
    tmp_hasattr_source_4 = tmp_serial$win32_class_creation_4__metaclass;

    tmp_hasattr_attr_4 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_4, tmp_hasattr_attr_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto try_except_handler_8;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_12;
    }
    else
    {
        goto condexpr_false_12;
    }
    condexpr_true_12:;
    tmp_source_name_9 = tmp_serial$win32_class_creation_4__metaclass;

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain___prepare__ );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto try_except_handler_8;
    }
    tmp_args_name_4 = PyTuple_New( 2 );
    tmp_tuple_element_8 = const_str_plain__DCB;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = tmp_serial$win32_class_creation_4__bases;

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_8 );
    tmp_kw_name_4 = tmp_serial$win32_class_creation_4__class_decl_dict;

    frame_module->f_lineno = 82;
    tmp_assign_source_59 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto try_except_handler_8;
    }
    goto condexpr_end_12;
    condexpr_false_12:;
    tmp_assign_source_59 = PyDict_New();
    condexpr_end_12:;
    assert( tmp_serial$win32_class_creation_4__prepared == NULL );
    tmp_serial$win32_class_creation_4__prepared = tmp_assign_source_59;

    tmp_assign_source_60 = impl_serial$win32$$$class_4__DCB( NULL, &tmp_serial$win32_class_creation_4__bases, &tmp_serial$win32_class_creation_4__class_decl_dict, &tmp_serial$win32_class_creation_4__metaclass, &tmp_serial$win32_class_creation_4__prepared );
    if ( tmp_assign_source_60 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto try_except_handler_8;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__DCB, tmp_assign_source_60 );
    goto try_end_8;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_serial$win32_class_creation_4__bases );
    tmp_serial$win32_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_4__class_decl_dict );
    tmp_serial$win32_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_4__metaclass );
    tmp_serial$win32_class_creation_4__metaclass = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_4__prepared );
    tmp_serial$win32_class_creation_4__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    Py_XDECREF( tmp_serial$win32_class_creation_4__bases );
    tmp_serial$win32_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_4__class_decl_dict );
    tmp_serial$win32_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_4__metaclass );
    tmp_serial$win32_class_creation_4__metaclass = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_4__prepared );
    tmp_serial$win32_class_creation_4__prepared = NULL;

    tmp_assign_source_61 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__DCB );

    if (unlikely( tmp_assign_source_61 == NULL ))
    {
        tmp_assign_source_61 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__DCB );
    }

    if ( tmp_assign_source_61 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_DCB" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DCB, tmp_assign_source_61 );
    // Tried code:
    tmp_assign_source_62 = PyTuple_New( 1 );
    tmp_tuple_element_9 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_Structure );

    if (unlikely( tmp_tuple_element_9 == NULL ))
    {
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Structure );
    }

    if ( tmp_tuple_element_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_62 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Structure" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        goto try_except_handler_9;
    }

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_assign_source_62, 0, tmp_tuple_element_9 );
    assert( tmp_serial$win32_class_creation_5__bases == NULL );
    tmp_serial$win32_class_creation_5__bases = tmp_assign_source_62;

    tmp_assign_source_63 = PyDict_New();
    assert( tmp_serial$win32_class_creation_5__class_decl_dict == NULL );
    tmp_serial$win32_class_creation_5__class_decl_dict = tmp_assign_source_63;

    tmp_compare_left_11 = const_str_plain_metaclass;
    tmp_compare_right_11 = tmp_serial$win32_class_creation_5__class_decl_dict;

    tmp_cmp_In_9 = PySequence_Contains( tmp_compare_right_11, tmp_compare_left_11 );
    assert( !(tmp_cmp_In_9 == -1) );
    if ( tmp_cmp_In_9 == 1 )
    {
        goto condexpr_true_13;
    }
    else
    {
        goto condexpr_false_13;
    }
    condexpr_true_13:;
    tmp_dict_name_5 = tmp_serial$win32_class_creation_5__class_decl_dict;

    tmp_key_name_5 = const_str_plain_metaclass;
    tmp_metaclass_name_5 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
    if ( tmp_metaclass_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        goto try_except_handler_9;
    }
    goto condexpr_end_13;
    condexpr_false_13:;
    tmp_cond_value_6 = tmp_serial$win32_class_creation_5__bases;

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        goto try_except_handler_9;
    }
    if ( tmp_cond_truth_6 == 1 )
    {
        goto condexpr_true_14;
    }
    else
    {
        goto condexpr_false_14;
    }
    condexpr_true_14:;
    tmp_subscribed_name_9 = tmp_serial$win32_class_creation_5__bases;

    tmp_subscript_name_9 = const_int_0;
    tmp_type_arg_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
    if ( tmp_type_arg_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        goto try_except_handler_9;
    }
    tmp_metaclass_name_5 = BUILTIN_TYPE1( tmp_type_arg_5 );
    Py_DECREF( tmp_type_arg_5 );
    if ( tmp_metaclass_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        goto try_except_handler_9;
    }
    goto condexpr_end_14;
    condexpr_false_14:;
    tmp_metaclass_name_5 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_5 != NULL );
    Py_INCREF( tmp_metaclass_name_5 );
    condexpr_end_14:;
    condexpr_end_13:;
    tmp_bases_name_5 = tmp_serial$win32_class_creation_5__bases;

    tmp_assign_source_64 = SELECT_METACLASS( tmp_metaclass_name_5, tmp_bases_name_5 );
    if ( tmp_assign_source_64 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_5 );

        exception_lineno = 88;
        goto try_except_handler_9;
    }
    Py_DECREF( tmp_metaclass_name_5 );
    assert( tmp_serial$win32_class_creation_5__metaclass == NULL );
    tmp_serial$win32_class_creation_5__metaclass = tmp_assign_source_64;

    tmp_compare_left_12 = const_str_plain_metaclass;
    tmp_compare_right_12 = tmp_serial$win32_class_creation_5__class_decl_dict;

    tmp_cmp_In_10 = PySequence_Contains( tmp_compare_right_12, tmp_compare_left_12 );
    assert( !(tmp_cmp_In_10 == -1) );
    if ( tmp_cmp_In_10 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_dictdel_dict = tmp_serial$win32_class_creation_5__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        goto try_except_handler_9;
    }
    branch_no_8:;
    tmp_hasattr_source_5 = tmp_serial$win32_class_creation_5__metaclass;

    tmp_hasattr_attr_5 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_5, tmp_hasattr_attr_5 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        goto try_except_handler_9;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_15;
    }
    else
    {
        goto condexpr_false_15;
    }
    condexpr_true_15:;
    tmp_source_name_10 = tmp_serial$win32_class_creation_5__metaclass;

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain___prepare__ );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        goto try_except_handler_9;
    }
    tmp_args_name_5 = PyTuple_New( 2 );
    tmp_tuple_element_10 = const_str_plain__COMMTIMEOUTS;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_10 );
    tmp_tuple_element_10 = tmp_serial$win32_class_creation_5__bases;

    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_10 );
    tmp_kw_name_5 = tmp_serial$win32_class_creation_5__class_decl_dict;

    frame_module->f_lineno = 88;
    tmp_assign_source_65 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_name_5 );
    if ( tmp_assign_source_65 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        goto try_except_handler_9;
    }
    goto condexpr_end_15;
    condexpr_false_15:;
    tmp_assign_source_65 = PyDict_New();
    condexpr_end_15:;
    assert( tmp_serial$win32_class_creation_5__prepared == NULL );
    tmp_serial$win32_class_creation_5__prepared = tmp_assign_source_65;

    tmp_assign_source_66 = impl_serial$win32$$$class_5__COMMTIMEOUTS( NULL, &tmp_serial$win32_class_creation_5__bases, &tmp_serial$win32_class_creation_5__class_decl_dict, &tmp_serial$win32_class_creation_5__metaclass, &tmp_serial$win32_class_creation_5__prepared );
    if ( tmp_assign_source_66 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        goto try_except_handler_9;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__COMMTIMEOUTS, tmp_assign_source_66 );
    goto try_end_9;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_serial$win32_class_creation_5__bases );
    tmp_serial$win32_class_creation_5__bases = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_5__class_decl_dict );
    tmp_serial$win32_class_creation_5__class_decl_dict = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_5__metaclass );
    tmp_serial$win32_class_creation_5__metaclass = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_5__prepared );
    tmp_serial$win32_class_creation_5__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF( tmp_serial$win32_class_creation_5__bases );
    tmp_serial$win32_class_creation_5__bases = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_5__class_decl_dict );
    tmp_serial$win32_class_creation_5__class_decl_dict = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_5__metaclass );
    tmp_serial$win32_class_creation_5__metaclass = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_5__prepared );
    tmp_serial$win32_class_creation_5__prepared = NULL;

    tmp_assign_source_67 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__COMMTIMEOUTS );

    if (unlikely( tmp_assign_source_67 == NULL ))
    {
        tmp_assign_source_67 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__COMMTIMEOUTS );
    }

    if ( tmp_assign_source_67 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_COMMTIMEOUTS" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 91;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_COMMTIMEOUTS, tmp_assign_source_67 );
    tmp_subscribed_name_10 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscribed_name_10 == NULL ))
    {
        tmp_subscribed_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscribed_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 93;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_10 = const_str_plain_kernel32;
    tmp_source_name_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
    if ( tmp_source_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_68 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_GetLastError );
    Py_DECREF( tmp_source_name_11 );
    if ( tmp_assign_source_68 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetLastError, tmp_assign_source_68 );
    tmp_assattr_name_9 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_assattr_name_9 == NULL ))
    {
        tmp_assattr_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_assattr_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_9 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetLastError );

    if (unlikely( tmp_assattr_target_9 == NULL ))
    {
        tmp_assattr_target_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GetLastError );
    }

    if ( tmp_assattr_target_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GetLastError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_restype, tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_10 = PyList_New( 0 );
    tmp_assattr_target_10 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetLastError );

    if (unlikely( tmp_assattr_target_10 == NULL ))
    {
        tmp_assattr_target_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GetLastError );
    }

    if ( tmp_assattr_target_10 == NULL )
    {
        Py_DECREF( tmp_assattr_name_10 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GetLastError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 95;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_argtypes, tmp_assattr_name_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_10 );

        exception_lineno = 95;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_10 );
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_POINTER );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_POINTER );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "POINTER" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__OVERLAPPED );

    if (unlikely( tmp_args_element_name_2 == NULL ))
    {
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__OVERLAPPED );
    }

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_OVERLAPPED" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 97;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_69 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    if ( tmp_assign_source_69 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPOVERLAPPED, tmp_assign_source_69 );
    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_POINTER );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_POINTER );
    }

    if ( tmp_called_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "POINTER" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 98;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_args_element_name_3 == NULL ))
    {
        tmp_args_element_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 98;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 98;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_70 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    if ( tmp_assign_source_70 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPDWORD, tmp_assign_source_70 );
    tmp_subscribed_name_11 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscribed_name_11 == NULL ))
    {
        tmp_subscribed_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscribed_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 100;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_11 = const_str_plain_kernel32;
    tmp_source_name_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_71 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_GetOverlappedResult );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_assign_source_71 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetOverlappedResult, tmp_assign_source_71 );
    tmp_assattr_name_11 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

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

        exception_lineno = 101;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_11 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetOverlappedResult );

    if (unlikely( tmp_assattr_target_11 == NULL ))
    {
        tmp_assattr_target_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GetOverlappedResult );
    }

    if ( tmp_assattr_target_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GetOverlappedResult" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 101;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_restype, tmp_assattr_name_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_12 = PyList_New( 4 );
    tmp_list_element_5 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_5 == NULL ))
    {
        tmp_list_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 102;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_assattr_name_12, 0, tmp_list_element_5 );
    tmp_list_element_5 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPOVERLAPPED );

    if (unlikely( tmp_list_element_5 == NULL ))
    {
        tmp_list_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPOVERLAPPED );
    }

    if ( tmp_list_element_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPOVERLAPPED" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 102;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_assattr_name_12, 1, tmp_list_element_5 );
    tmp_list_element_5 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPDWORD );

    if (unlikely( tmp_list_element_5 == NULL ))
    {
        tmp_list_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPDWORD );
    }

    if ( tmp_list_element_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPDWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 102;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_assattr_name_12, 2, tmp_list_element_5 );
    tmp_list_element_5 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_list_element_5 == NULL ))
    {
        tmp_list_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_list_element_5 == NULL )
    {
        Py_DECREF( tmp_assattr_name_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 102;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_5 );
    PyList_SET_ITEM( tmp_assattr_name_12, 3, tmp_list_element_5 );
    tmp_assattr_target_12 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetOverlappedResult );

    if (unlikely( tmp_assattr_target_12 == NULL ))
    {
        tmp_assattr_target_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GetOverlappedResult );
    }

    if ( tmp_assattr_target_12 == NULL )
    {
        Py_DECREF( tmp_assattr_name_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GetOverlappedResult" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 102;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_argtypes, tmp_assattr_name_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_12 );

        exception_lineno = 102;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_12 );
    tmp_subscribed_name_12 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscribed_name_12 == NULL ))
    {
        tmp_subscribed_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscribed_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 104;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_12 = const_str_plain_kernel32;
    tmp_source_name_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_12 );
    if ( tmp_source_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_72 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_ResetEvent );
    Py_DECREF( tmp_source_name_13 );
    if ( tmp_assign_source_72 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ResetEvent, tmp_assign_source_72 );
    tmp_assattr_name_13 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

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

        exception_lineno = 105;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_13 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ResetEvent );

    if (unlikely( tmp_assattr_target_13 == NULL ))
    {
        tmp_assattr_target_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ResetEvent );
    }

    if ( tmp_assattr_target_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ResetEvent" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 105;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain_restype, tmp_assattr_name_13 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_14 = PyList_New( 1 );
    tmp_list_element_6 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_6 == NULL ))
    {
        tmp_list_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_6 == NULL )
    {
        Py_DECREF( tmp_assattr_name_14 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 106;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_6 );
    PyList_SET_ITEM( tmp_assattr_name_14, 0, tmp_list_element_6 );
    tmp_assattr_target_14 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ResetEvent );

    if (unlikely( tmp_assattr_target_14 == NULL ))
    {
        tmp_assattr_target_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ResetEvent );
    }

    if ( tmp_assattr_target_14 == NULL )
    {
        Py_DECREF( tmp_assattr_name_14 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ResetEvent" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 106;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_14, const_str_plain_argtypes, tmp_assattr_name_14 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_14 );

        exception_lineno = 106;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_14 );
    tmp_assign_source_73 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_void_p );

    if (unlikely( tmp_assign_source_73 == NULL ))
    {
        tmp_assign_source_73 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_void_p );
    }

    if ( tmp_assign_source_73 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "c_void_p" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 108;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCVOID, tmp_assign_source_73 );
    tmp_subscribed_name_13 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscribed_name_13 == NULL ))
    {
        tmp_subscribed_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscribed_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 110;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_13 = const_str_plain_kernel32;
    tmp_source_name_14 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_13, tmp_subscript_name_13 );
    if ( tmp_source_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_74 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_WriteFile );
    Py_DECREF( tmp_source_name_14 );
    if ( tmp_assign_source_74 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_WriteFile, tmp_assign_source_74 );
    tmp_assattr_name_15 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_15 == NULL ))
    {
        tmp_assattr_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 111;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_15 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_WriteFile );

    if (unlikely( tmp_assattr_target_15 == NULL ))
    {
        tmp_assattr_target_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WriteFile );
    }

    if ( tmp_assattr_target_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WriteFile" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 111;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_15, const_str_plain_restype, tmp_assattr_name_15 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_16 = PyList_New( 5 );
    tmp_list_element_7 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_7 == NULL ))
    {
        tmp_list_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_7 == NULL )
    {
        Py_DECREF( tmp_assattr_name_16 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 112;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_7 );
    PyList_SET_ITEM( tmp_assattr_name_16, 0, tmp_list_element_7 );
    tmp_list_element_7 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCVOID );

    if (unlikely( tmp_list_element_7 == NULL ))
    {
        tmp_list_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPCVOID );
    }

    if ( tmp_list_element_7 == NULL )
    {
        Py_DECREF( tmp_assattr_name_16 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPCVOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 112;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_7 );
    PyList_SET_ITEM( tmp_assattr_name_16, 1, tmp_list_element_7 );
    tmp_list_element_7 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_7 == NULL ))
    {
        tmp_list_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_7 == NULL )
    {
        Py_DECREF( tmp_assattr_name_16 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 112;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_7 );
    PyList_SET_ITEM( tmp_assattr_name_16, 2, tmp_list_element_7 );
    tmp_list_element_7 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPDWORD );

    if (unlikely( tmp_list_element_7 == NULL ))
    {
        tmp_list_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPDWORD );
    }

    if ( tmp_list_element_7 == NULL )
    {
        Py_DECREF( tmp_assattr_name_16 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPDWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 112;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_7 );
    PyList_SET_ITEM( tmp_assattr_name_16, 3, tmp_list_element_7 );
    tmp_list_element_7 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPOVERLAPPED );

    if (unlikely( tmp_list_element_7 == NULL ))
    {
        tmp_list_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPOVERLAPPED );
    }

    if ( tmp_list_element_7 == NULL )
    {
        Py_DECREF( tmp_assattr_name_16 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPOVERLAPPED" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 112;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_7 );
    PyList_SET_ITEM( tmp_assattr_name_16, 4, tmp_list_element_7 );
    tmp_assattr_target_16 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_WriteFile );

    if (unlikely( tmp_assattr_target_16 == NULL ))
    {
        tmp_assattr_target_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WriteFile );
    }

    if ( tmp_assattr_target_16 == NULL )
    {
        Py_DECREF( tmp_assattr_name_16 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WriteFile" );
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
    tmp_assign_source_75 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_void_p );

    if (unlikely( tmp_assign_source_75 == NULL ))
    {
        tmp_assign_source_75 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_void_p );
    }

    if ( tmp_assign_source_75 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "c_void_p" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 114;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPVOID, tmp_assign_source_75 );
    tmp_subscribed_name_14 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscribed_name_14 == NULL ))
    {
        tmp_subscribed_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscribed_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 116;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_14 = const_str_plain_kernel32;
    tmp_source_name_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_14, tmp_subscript_name_14 );
    if ( tmp_source_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_76 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_ReadFile );
    Py_DECREF( tmp_source_name_15 );
    if ( tmp_assign_source_76 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ReadFile, tmp_assign_source_76 );
    tmp_assattr_name_17 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_17 == NULL ))
    {
        tmp_assattr_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 117;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_17 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ReadFile );

    if (unlikely( tmp_assattr_target_17 == NULL ))
    {
        tmp_assattr_target_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ReadFile );
    }

    if ( tmp_assattr_target_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ReadFile" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 117;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_17, const_str_plain_restype, tmp_assattr_name_17 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_18 = PyList_New( 5 );
    tmp_list_element_8 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_8 == NULL ))
    {
        tmp_list_element_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_8 == NULL )
    {
        Py_DECREF( tmp_assattr_name_18 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 118;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_8 );
    PyList_SET_ITEM( tmp_assattr_name_18, 0, tmp_list_element_8 );
    tmp_list_element_8 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPVOID );

    if (unlikely( tmp_list_element_8 == NULL ))
    {
        tmp_list_element_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPVOID );
    }

    if ( tmp_list_element_8 == NULL )
    {
        Py_DECREF( tmp_assattr_name_18 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPVOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 118;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_8 );
    PyList_SET_ITEM( tmp_assattr_name_18, 1, tmp_list_element_8 );
    tmp_list_element_8 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_8 == NULL ))
    {
        tmp_list_element_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_8 == NULL )
    {
        Py_DECREF( tmp_assattr_name_18 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 118;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_8 );
    PyList_SET_ITEM( tmp_assattr_name_18, 2, tmp_list_element_8 );
    tmp_list_element_8 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPDWORD );

    if (unlikely( tmp_list_element_8 == NULL ))
    {
        tmp_list_element_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPDWORD );
    }

    if ( tmp_list_element_8 == NULL )
    {
        Py_DECREF( tmp_assattr_name_18 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPDWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 118;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_8 );
    PyList_SET_ITEM( tmp_assattr_name_18, 3, tmp_list_element_8 );
    tmp_list_element_8 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPOVERLAPPED );

    if (unlikely( tmp_list_element_8 == NULL ))
    {
        tmp_list_element_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPOVERLAPPED );
    }

    if ( tmp_list_element_8 == NULL )
    {
        Py_DECREF( tmp_assattr_name_18 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPOVERLAPPED" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 118;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_8 );
    PyList_SET_ITEM( tmp_assattr_name_18, 4, tmp_list_element_8 );
    tmp_assattr_target_18 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ReadFile );

    if (unlikely( tmp_assattr_target_18 == NULL ))
    {
        tmp_assattr_target_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ReadFile );
    }

    if ( tmp_assattr_target_18 == NULL )
    {
        Py_DECREF( tmp_assattr_name_18 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ReadFile" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 118;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_18, const_str_plain_argtypes, tmp_assattr_name_18 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_18 );

        exception_lineno = 118;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_18 );
    tmp_subscribed_name_15 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscribed_name_15 == NULL ))
    {
        tmp_subscribed_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscribed_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 120;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_15 = const_str_plain_kernel32;
    tmp_source_name_16 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_15, tmp_subscript_name_15 );
    if ( tmp_source_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_77 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_CloseHandle );
    Py_DECREF( tmp_source_name_16 );
    if ( tmp_assign_source_77 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CloseHandle, tmp_assign_source_77 );
    tmp_assattr_name_19 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_19 == NULL ))
    {
        tmp_assattr_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_19 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_19 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CloseHandle );

    if (unlikely( tmp_assattr_target_19 == NULL ))
    {
        tmp_assattr_target_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CloseHandle );
    }

    if ( tmp_assattr_target_19 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CloseHandle" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_19, const_str_plain_restype, tmp_assattr_name_19 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_20 = PyList_New( 1 );
    tmp_list_element_9 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_9 == NULL ))
    {
        tmp_list_element_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_9 == NULL )
    {
        Py_DECREF( tmp_assattr_name_20 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 122;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_9 );
    PyList_SET_ITEM( tmp_assattr_name_20, 0, tmp_list_element_9 );
    tmp_assattr_target_20 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CloseHandle );

    if (unlikely( tmp_assattr_target_20 == NULL ))
    {
        tmp_assattr_target_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CloseHandle );
    }

    if ( tmp_assattr_target_20 == NULL )
    {
        Py_DECREF( tmp_assattr_name_20 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CloseHandle" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 122;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_20, const_str_plain_argtypes, tmp_assattr_name_20 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_20 );

        exception_lineno = 122;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_20 );
    tmp_subscribed_name_16 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscribed_name_16 == NULL ))
    {
        tmp_subscribed_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscribed_name_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 124;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_16 = const_str_plain_kernel32;
    tmp_source_name_17 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_16, tmp_subscript_name_16 );
    if ( tmp_source_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_78 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_ClearCommBreak );
    Py_DECREF( tmp_source_name_17 );
    if ( tmp_assign_source_78 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ClearCommBreak, tmp_assign_source_78 );
    tmp_assattr_name_21 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_21 == NULL ))
    {
        tmp_assattr_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_21 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_21 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ClearCommBreak );

    if (unlikely( tmp_assattr_target_21 == NULL ))
    {
        tmp_assattr_target_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ClearCommBreak );
    }

    if ( tmp_assattr_target_21 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ClearCommBreak" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_21, const_str_plain_restype, tmp_assattr_name_21 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_22 = PyList_New( 1 );
    tmp_list_element_10 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_10 == NULL ))
    {
        tmp_list_element_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_10 == NULL )
    {
        Py_DECREF( tmp_assattr_name_22 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 126;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_10 );
    PyList_SET_ITEM( tmp_assattr_name_22, 0, tmp_list_element_10 );
    tmp_assattr_target_22 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ClearCommBreak );

    if (unlikely( tmp_assattr_target_22 == NULL ))
    {
        tmp_assattr_target_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ClearCommBreak );
    }

    if ( tmp_assattr_target_22 == NULL )
    {
        Py_DECREF( tmp_assattr_name_22 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ClearCommBreak" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 126;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_22, const_str_plain_argtypes, tmp_assattr_name_22 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_22 );

        exception_lineno = 126;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_22 );
    tmp_called_name_12 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_POINTER );

    if (unlikely( tmp_called_name_12 == NULL ))
    {
        tmp_called_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_POINTER );
    }

    if ( tmp_called_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "POINTER" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 128;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__COMSTAT );

    if (unlikely( tmp_args_element_name_4 == NULL ))
    {
        tmp_args_element_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__COMSTAT );
    }

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_COMSTAT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 128;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 128;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_79 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    if ( tmp_assign_source_79 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCOMSTAT, tmp_assign_source_79 );
    tmp_subscribed_name_17 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscribed_name_17 == NULL ))
    {
        tmp_subscribed_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscribed_name_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 130;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_17 = const_str_plain_kernel32;
    tmp_source_name_18 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_17, tmp_subscript_name_17 );
    if ( tmp_source_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_80 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_ClearCommError );
    Py_DECREF( tmp_source_name_18 );
    if ( tmp_assign_source_80 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ClearCommError, tmp_assign_source_80 );
    tmp_assattr_name_23 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_23 == NULL ))
    {
        tmp_assattr_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_23 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 131;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_23 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ClearCommError );

    if (unlikely( tmp_assattr_target_23 == NULL ))
    {
        tmp_assattr_target_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ClearCommError );
    }

    if ( tmp_assattr_target_23 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ClearCommError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 131;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_23, const_str_plain_restype, tmp_assattr_name_23 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_24 = PyList_New( 3 );
    tmp_list_element_11 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_11 == NULL ))
    {
        tmp_list_element_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_11 == NULL )
    {
        Py_DECREF( tmp_assattr_name_24 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 132;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_11 );
    PyList_SET_ITEM( tmp_assattr_name_24, 0, tmp_list_element_11 );
    tmp_list_element_11 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPDWORD );

    if (unlikely( tmp_list_element_11 == NULL ))
    {
        tmp_list_element_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPDWORD );
    }

    if ( tmp_list_element_11 == NULL )
    {
        Py_DECREF( tmp_assattr_name_24 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPDWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 132;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_11 );
    PyList_SET_ITEM( tmp_assattr_name_24, 1, tmp_list_element_11 );
    tmp_list_element_11 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCOMSTAT );

    if (unlikely( tmp_list_element_11 == NULL ))
    {
        tmp_list_element_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPCOMSTAT );
    }

    if ( tmp_list_element_11 == NULL )
    {
        Py_DECREF( tmp_assattr_name_24 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPCOMSTAT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 132;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_11 );
    PyList_SET_ITEM( tmp_assattr_name_24, 2, tmp_list_element_11 );
    tmp_assattr_target_24 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ClearCommError );

    if (unlikely( tmp_assattr_target_24 == NULL ))
    {
        tmp_assattr_target_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ClearCommError );
    }

    if ( tmp_assattr_target_24 == NULL )
    {
        Py_DECREF( tmp_assattr_name_24 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ClearCommError" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 132;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_24, const_str_plain_argtypes, tmp_assattr_name_24 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_24 );

        exception_lineno = 132;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_24 );
    tmp_subscribed_name_18 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscribed_name_18 == NULL ))
    {
        tmp_subscribed_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscribed_name_18 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 134;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_18 = const_str_plain_kernel32;
    tmp_source_name_19 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_18, tmp_subscript_name_18 );
    if ( tmp_source_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_81 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_SetupComm );
    Py_DECREF( tmp_source_name_19 );
    if ( tmp_assign_source_81 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetupComm, tmp_assign_source_81 );
    tmp_assattr_name_25 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_25 == NULL ))
    {
        tmp_assattr_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_25 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 135;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_25 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetupComm );

    if (unlikely( tmp_assattr_target_25 == NULL ))
    {
        tmp_assattr_target_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupComm );
    }

    if ( tmp_assattr_target_25 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupComm" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 135;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_25, const_str_plain_restype, tmp_assattr_name_25 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_26 = PyList_New( 3 );
    tmp_list_element_12 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_12 == NULL ))
    {
        tmp_list_element_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_12 == NULL )
    {
        Py_DECREF( tmp_assattr_name_26 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 136;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_12 );
    PyList_SET_ITEM( tmp_assattr_name_26, 0, tmp_list_element_12 );
    tmp_list_element_12 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_12 == NULL ))
    {
        tmp_list_element_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_12 == NULL )
    {
        Py_DECREF( tmp_assattr_name_26 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 136;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_12 );
    PyList_SET_ITEM( tmp_assattr_name_26, 1, tmp_list_element_12 );
    tmp_list_element_12 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_12 == NULL ))
    {
        tmp_list_element_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_12 == NULL )
    {
        Py_DECREF( tmp_assattr_name_26 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 136;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_12 );
    PyList_SET_ITEM( tmp_assattr_name_26, 2, tmp_list_element_12 );
    tmp_assattr_target_26 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetupComm );

    if (unlikely( tmp_assattr_target_26 == NULL ))
    {
        tmp_assattr_target_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetupComm );
    }

    if ( tmp_assattr_target_26 == NULL )
    {
        Py_DECREF( tmp_assattr_name_26 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetupComm" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 136;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_26, const_str_plain_argtypes, tmp_assattr_name_26 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_26 );

        exception_lineno = 136;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_26 );
    tmp_subscribed_name_19 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscribed_name_19 == NULL ))
    {
        tmp_subscribed_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscribed_name_19 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 138;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_19 = const_str_plain_kernel32;
    tmp_source_name_20 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_19, tmp_subscript_name_19 );
    if ( tmp_source_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 138;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_82 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_EscapeCommFunction );
    Py_DECREF( tmp_source_name_20 );
    if ( tmp_assign_source_82 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 138;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EscapeCommFunction, tmp_assign_source_82 );
    tmp_assattr_name_27 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_27 == NULL ))
    {
        tmp_assattr_name_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_27 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 139;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_27 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EscapeCommFunction );

    if (unlikely( tmp_assattr_target_27 == NULL ))
    {
        tmp_assattr_target_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EscapeCommFunction );
    }

    if ( tmp_assattr_target_27 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EscapeCommFunction" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 139;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_27, const_str_plain_restype, tmp_assattr_name_27 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_28 = PyList_New( 2 );
    tmp_list_element_13 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_13 == NULL ))
    {
        tmp_list_element_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_13 == NULL )
    {
        Py_DECREF( tmp_assattr_name_28 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 140;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_13 );
    PyList_SET_ITEM( tmp_assattr_name_28, 0, tmp_list_element_13 );
    tmp_list_element_13 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_13 == NULL ))
    {
        tmp_list_element_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_13 == NULL )
    {
        Py_DECREF( tmp_assattr_name_28 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 140;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_13 );
    PyList_SET_ITEM( tmp_assattr_name_28, 1, tmp_list_element_13 );
    tmp_assattr_target_28 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EscapeCommFunction );

    if (unlikely( tmp_assattr_target_28 == NULL ))
    {
        tmp_assattr_target_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EscapeCommFunction );
    }

    if ( tmp_assattr_target_28 == NULL )
    {
        Py_DECREF( tmp_assattr_name_28 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EscapeCommFunction" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 140;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_28, const_str_plain_argtypes, tmp_assattr_name_28 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_28 );

        exception_lineno = 140;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_28 );
    tmp_subscribed_name_20 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscribed_name_20 == NULL ))
    {
        tmp_subscribed_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscribed_name_20 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 142;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_20 = const_str_plain_kernel32;
    tmp_source_name_21 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_20, tmp_subscript_name_20 );
    if ( tmp_source_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_83 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_GetCommModemStatus );
    Py_DECREF( tmp_source_name_21 );
    if ( tmp_assign_source_83 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetCommModemStatus, tmp_assign_source_83 );
    tmp_assattr_name_29 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_29 == NULL ))
    {
        tmp_assattr_name_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_29 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 143;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_29 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetCommModemStatus );

    if (unlikely( tmp_assattr_target_29 == NULL ))
    {
        tmp_assattr_target_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GetCommModemStatus );
    }

    if ( tmp_assattr_target_29 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GetCommModemStatus" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 143;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_29, const_str_plain_restype, tmp_assattr_name_29 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_30 = PyList_New( 2 );
    tmp_list_element_14 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_14 == NULL ))
    {
        tmp_list_element_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_14 == NULL )
    {
        Py_DECREF( tmp_assattr_name_30 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 144;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_14 );
    PyList_SET_ITEM( tmp_assattr_name_30, 0, tmp_list_element_14 );
    tmp_list_element_14 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPDWORD );

    if (unlikely( tmp_list_element_14 == NULL ))
    {
        tmp_list_element_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPDWORD );
    }

    if ( tmp_list_element_14 == NULL )
    {
        Py_DECREF( tmp_assattr_name_30 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPDWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 144;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_14 );
    PyList_SET_ITEM( tmp_assattr_name_30, 1, tmp_list_element_14 );
    tmp_assattr_target_30 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetCommModemStatus );

    if (unlikely( tmp_assattr_target_30 == NULL ))
    {
        tmp_assattr_target_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GetCommModemStatus );
    }

    if ( tmp_assattr_target_30 == NULL )
    {
        Py_DECREF( tmp_assattr_name_30 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GetCommModemStatus" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 144;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_30, const_str_plain_argtypes, tmp_assattr_name_30 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_30 );

        exception_lineno = 144;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_30 );
    tmp_called_name_13 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_POINTER );

    if (unlikely( tmp_called_name_13 == NULL ))
    {
        tmp_called_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_POINTER );
    }

    if ( tmp_called_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "POINTER" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 146;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__DCB );

    if (unlikely( tmp_args_element_name_5 == NULL ))
    {
        tmp_args_element_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__DCB );
    }

    if ( tmp_args_element_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_DCB" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 146;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 146;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_84 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
    }

    if ( tmp_assign_source_84 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPDCB, tmp_assign_source_84 );
    tmp_subscribed_name_21 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscribed_name_21 == NULL ))
    {
        tmp_subscribed_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscribed_name_21 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 148;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_21 = const_str_plain_kernel32;
    tmp_source_name_22 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_21, tmp_subscript_name_21 );
    if ( tmp_source_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_85 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_GetCommState );
    Py_DECREF( tmp_source_name_22 );
    if ( tmp_assign_source_85 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetCommState, tmp_assign_source_85 );
    tmp_assattr_name_31 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_31 == NULL ))
    {
        tmp_assattr_name_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_31 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 149;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_31 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetCommState );

    if (unlikely( tmp_assattr_target_31 == NULL ))
    {
        tmp_assattr_target_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GetCommState );
    }

    if ( tmp_assattr_target_31 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GetCommState" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 149;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_31, const_str_plain_restype, tmp_assattr_name_31 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_32 = PyList_New( 2 );
    tmp_list_element_15 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_15 == NULL ))
    {
        tmp_list_element_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_15 == NULL )
    {
        Py_DECREF( tmp_assattr_name_32 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 150;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_15 );
    PyList_SET_ITEM( tmp_assattr_name_32, 0, tmp_list_element_15 );
    tmp_list_element_15 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPDCB );

    if (unlikely( tmp_list_element_15 == NULL ))
    {
        tmp_list_element_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPDCB );
    }

    if ( tmp_list_element_15 == NULL )
    {
        Py_DECREF( tmp_assattr_name_32 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPDCB" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 150;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_15 );
    PyList_SET_ITEM( tmp_assattr_name_32, 1, tmp_list_element_15 );
    tmp_assattr_target_32 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetCommState );

    if (unlikely( tmp_assattr_target_32 == NULL ))
    {
        tmp_assattr_target_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GetCommState );
    }

    if ( tmp_assattr_target_32 == NULL )
    {
        Py_DECREF( tmp_assattr_name_32 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GetCommState" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 150;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_32, const_str_plain_argtypes, tmp_assattr_name_32 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_32 );

        exception_lineno = 150;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_32 );
    tmp_called_name_14 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_POINTER );

    if (unlikely( tmp_called_name_14 == NULL ))
    {
        tmp_called_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_POINTER );
    }

    if ( tmp_called_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "POINTER" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 152;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__COMMTIMEOUTS );

    if (unlikely( tmp_args_element_name_6 == NULL ))
    {
        tmp_args_element_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__COMMTIMEOUTS );
    }

    if ( tmp_args_element_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_COMMTIMEOUTS" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 152;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 152;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assign_source_86 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
    }

    if ( tmp_assign_source_86 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCOMMTIMEOUTS, tmp_assign_source_86 );
    tmp_subscribed_name_22 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscribed_name_22 == NULL ))
    {
        tmp_subscribed_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscribed_name_22 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 154;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_22 = const_str_plain_kernel32;
    tmp_source_name_23 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_22, tmp_subscript_name_22 );
    if ( tmp_source_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_87 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_GetCommTimeouts );
    Py_DECREF( tmp_source_name_23 );
    if ( tmp_assign_source_87 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetCommTimeouts, tmp_assign_source_87 );
    tmp_assattr_name_33 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_33 == NULL ))
    {
        tmp_assattr_name_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_33 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 155;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_33 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetCommTimeouts );

    if (unlikely( tmp_assattr_target_33 == NULL ))
    {
        tmp_assattr_target_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GetCommTimeouts );
    }

    if ( tmp_assattr_target_33 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GetCommTimeouts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 155;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_33, const_str_plain_restype, tmp_assattr_name_33 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_34 = PyList_New( 2 );
    tmp_list_element_16 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_16 == NULL ))
    {
        tmp_list_element_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_16 == NULL )
    {
        Py_DECREF( tmp_assattr_name_34 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 156;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_16 );
    PyList_SET_ITEM( tmp_assattr_name_34, 0, tmp_list_element_16 );
    tmp_list_element_16 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCOMMTIMEOUTS );

    if (unlikely( tmp_list_element_16 == NULL ))
    {
        tmp_list_element_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPCOMMTIMEOUTS );
    }

    if ( tmp_list_element_16 == NULL )
    {
        Py_DECREF( tmp_assattr_name_34 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPCOMMTIMEOUTS" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 156;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_16 );
    PyList_SET_ITEM( tmp_assattr_name_34, 1, tmp_list_element_16 );
    tmp_assattr_target_34 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GetCommTimeouts );

    if (unlikely( tmp_assattr_target_34 == NULL ))
    {
        tmp_assattr_target_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_GetCommTimeouts );
    }

    if ( tmp_assattr_target_34 == NULL )
    {
        Py_DECREF( tmp_assattr_name_34 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "GetCommTimeouts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 156;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_34, const_str_plain_argtypes, tmp_assattr_name_34 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_34 );

        exception_lineno = 156;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_34 );
    tmp_subscribed_name_23 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscribed_name_23 == NULL ))
    {
        tmp_subscribed_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscribed_name_23 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 158;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_23 = const_str_plain_kernel32;
    tmp_source_name_24 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_23, tmp_subscript_name_23 );
    if ( tmp_source_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_88 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_PurgeComm );
    Py_DECREF( tmp_source_name_24 );
    if ( tmp_assign_source_88 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_PurgeComm, tmp_assign_source_88 );
    tmp_assattr_name_35 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_35 == NULL ))
    {
        tmp_assattr_name_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_35 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 159;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_35 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_PurgeComm );

    if (unlikely( tmp_assattr_target_35 == NULL ))
    {
        tmp_assattr_target_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PurgeComm );
    }

    if ( tmp_assattr_target_35 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PurgeComm" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 159;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_35, const_str_plain_restype, tmp_assattr_name_35 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 159;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_36 = PyList_New( 2 );
    tmp_list_element_17 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_17 == NULL ))
    {
        tmp_list_element_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_17 == NULL )
    {
        Py_DECREF( tmp_assattr_name_36 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 160;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_17 );
    PyList_SET_ITEM( tmp_assattr_name_36, 0, tmp_list_element_17 );
    tmp_list_element_17 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_17 == NULL ))
    {
        tmp_list_element_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_17 == NULL )
    {
        Py_DECREF( tmp_assattr_name_36 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 160;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_17 );
    PyList_SET_ITEM( tmp_assattr_name_36, 1, tmp_list_element_17 );
    tmp_assattr_target_36 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_PurgeComm );

    if (unlikely( tmp_assattr_target_36 == NULL ))
    {
        tmp_assattr_target_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PurgeComm );
    }

    if ( tmp_assattr_target_36 == NULL )
    {
        Py_DECREF( tmp_assattr_name_36 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PurgeComm" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 160;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_36, const_str_plain_argtypes, tmp_assattr_name_36 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_36 );

        exception_lineno = 160;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_36 );
    tmp_subscribed_name_24 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscribed_name_24 == NULL ))
    {
        tmp_subscribed_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscribed_name_24 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 162;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_24 = const_str_plain_kernel32;
    tmp_source_name_25 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_24, tmp_subscript_name_24 );
    if ( tmp_source_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_89 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_SetCommBreak );
    Py_DECREF( tmp_source_name_25 );
    if ( tmp_assign_source_89 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetCommBreak, tmp_assign_source_89 );
    tmp_assattr_name_37 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_37 == NULL ))
    {
        tmp_assattr_name_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_37 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 163;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_37 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetCommBreak );

    if (unlikely( tmp_assattr_target_37 == NULL ))
    {
        tmp_assattr_target_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetCommBreak );
    }

    if ( tmp_assattr_target_37 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetCommBreak" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 163;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_37, const_str_plain_restype, tmp_assattr_name_37 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_38 = PyList_New( 1 );
    tmp_list_element_18 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_18 == NULL ))
    {
        tmp_list_element_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_18 == NULL )
    {
        Py_DECREF( tmp_assattr_name_38 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 164;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_18 );
    PyList_SET_ITEM( tmp_assattr_name_38, 0, tmp_list_element_18 );
    tmp_assattr_target_38 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetCommBreak );

    if (unlikely( tmp_assattr_target_38 == NULL ))
    {
        tmp_assattr_target_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetCommBreak );
    }

    if ( tmp_assattr_target_38 == NULL )
    {
        Py_DECREF( tmp_assattr_name_38 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetCommBreak" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 164;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_38, const_str_plain_argtypes, tmp_assattr_name_38 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_38 );

        exception_lineno = 164;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_38 );
    tmp_subscribed_name_25 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscribed_name_25 == NULL ))
    {
        tmp_subscribed_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscribed_name_25 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 166;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_25 = const_str_plain_kernel32;
    tmp_source_name_26 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_25, tmp_subscript_name_25 );
    if ( tmp_source_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_90 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_SetCommMask );
    Py_DECREF( tmp_source_name_26 );
    if ( tmp_assign_source_90 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetCommMask, tmp_assign_source_90 );
    tmp_assattr_name_39 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_39 == NULL ))
    {
        tmp_assattr_name_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_39 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 167;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_39 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetCommMask );

    if (unlikely( tmp_assattr_target_39 == NULL ))
    {
        tmp_assattr_target_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetCommMask );
    }

    if ( tmp_assattr_target_39 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetCommMask" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 167;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_39, const_str_plain_restype, tmp_assattr_name_39 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_40 = PyList_New( 2 );
    tmp_list_element_19 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_19 == NULL ))
    {
        tmp_list_element_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_19 == NULL )
    {
        Py_DECREF( tmp_assattr_name_40 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 168;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_19 );
    PyList_SET_ITEM( tmp_assattr_name_40, 0, tmp_list_element_19 );
    tmp_list_element_19 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_19 == NULL ))
    {
        tmp_list_element_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_19 == NULL )
    {
        Py_DECREF( tmp_assattr_name_40 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 168;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_19 );
    PyList_SET_ITEM( tmp_assattr_name_40, 1, tmp_list_element_19 );
    tmp_assattr_target_40 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetCommMask );

    if (unlikely( tmp_assattr_target_40 == NULL ))
    {
        tmp_assattr_target_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetCommMask );
    }

    if ( tmp_assattr_target_40 == NULL )
    {
        Py_DECREF( tmp_assattr_name_40 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetCommMask" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 168;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_40, const_str_plain_argtypes, tmp_assattr_name_40 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_40 );

        exception_lineno = 168;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_40 );
    tmp_subscribed_name_26 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscribed_name_26 == NULL ))
    {
        tmp_subscribed_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscribed_name_26 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 170;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_26 = const_str_plain_kernel32;
    tmp_source_name_27 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_26, tmp_subscript_name_26 );
    if ( tmp_source_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_91 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_SetCommState );
    Py_DECREF( tmp_source_name_27 );
    if ( tmp_assign_source_91 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetCommState, tmp_assign_source_91 );
    tmp_assattr_name_41 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_41 == NULL ))
    {
        tmp_assattr_name_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_41 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 171;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_41 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetCommState );

    if (unlikely( tmp_assattr_target_41 == NULL ))
    {
        tmp_assattr_target_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetCommState );
    }

    if ( tmp_assattr_target_41 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetCommState" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 171;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_41, const_str_plain_restype, tmp_assattr_name_41 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_42 = PyList_New( 2 );
    tmp_list_element_20 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_20 == NULL ))
    {
        tmp_list_element_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_20 == NULL )
    {
        Py_DECREF( tmp_assattr_name_42 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 172;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_20 );
    PyList_SET_ITEM( tmp_assattr_name_42, 0, tmp_list_element_20 );
    tmp_list_element_20 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPDCB );

    if (unlikely( tmp_list_element_20 == NULL ))
    {
        tmp_list_element_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPDCB );
    }

    if ( tmp_list_element_20 == NULL )
    {
        Py_DECREF( tmp_assattr_name_42 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPDCB" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 172;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_20 );
    PyList_SET_ITEM( tmp_assattr_name_42, 1, tmp_list_element_20 );
    tmp_assattr_target_42 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetCommState );

    if (unlikely( tmp_assattr_target_42 == NULL ))
    {
        tmp_assattr_target_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetCommState );
    }

    if ( tmp_assattr_target_42 == NULL )
    {
        Py_DECREF( tmp_assattr_name_42 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetCommState" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 172;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_42, const_str_plain_argtypes, tmp_assattr_name_42 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_42 );

        exception_lineno = 172;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_42 );
    tmp_subscribed_name_27 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscribed_name_27 == NULL ))
    {
        tmp_subscribed_name_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscribed_name_27 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 174;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_27 = const_str_plain_kernel32;
    tmp_source_name_28 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_27, tmp_subscript_name_27 );
    if ( tmp_source_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_92 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_SetCommTimeouts );
    Py_DECREF( tmp_source_name_28 );
    if ( tmp_assign_source_92 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetCommTimeouts, tmp_assign_source_92 );
    tmp_assattr_name_43 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_43 == NULL ))
    {
        tmp_assattr_name_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_43 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 175;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_43 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetCommTimeouts );

    if (unlikely( tmp_assattr_target_43 == NULL ))
    {
        tmp_assattr_target_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetCommTimeouts );
    }

    if ( tmp_assattr_target_43 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetCommTimeouts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 175;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_43, const_str_plain_restype, tmp_assattr_name_43 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_44 = PyList_New( 2 );
    tmp_list_element_21 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_21 == NULL ))
    {
        tmp_list_element_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_21 == NULL )
    {
        Py_DECREF( tmp_assattr_name_44 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 176;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_21 );
    PyList_SET_ITEM( tmp_assattr_name_44, 0, tmp_list_element_21 );
    tmp_list_element_21 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPCOMMTIMEOUTS );

    if (unlikely( tmp_list_element_21 == NULL ))
    {
        tmp_list_element_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPCOMMTIMEOUTS );
    }

    if ( tmp_list_element_21 == NULL )
    {
        Py_DECREF( tmp_assattr_name_44 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPCOMMTIMEOUTS" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 176;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_21 );
    PyList_SET_ITEM( tmp_assattr_name_44, 1, tmp_list_element_21 );
    tmp_assattr_target_44 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SetCommTimeouts );

    if (unlikely( tmp_assattr_target_44 == NULL ))
    {
        tmp_assattr_target_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SetCommTimeouts );
    }

    if ( tmp_assattr_target_44 == NULL )
    {
        Py_DECREF( tmp_assattr_name_44 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SetCommTimeouts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 176;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_44, const_str_plain_argtypes, tmp_assattr_name_44 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_44 );

        exception_lineno = 176;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_44 );
    tmp_subscribed_name_28 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscribed_name_28 == NULL ))
    {
        tmp_subscribed_name_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscribed_name_28 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 178;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_28 = const_str_plain_kernel32;
    tmp_source_name_29 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_28, tmp_subscript_name_28 );
    if ( tmp_source_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_93 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_WaitForSingleObject );
    Py_DECREF( tmp_source_name_29 );
    if ( tmp_assign_source_93 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_WaitForSingleObject, tmp_assign_source_93 );
    tmp_assattr_name_45 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_assattr_name_45 == NULL ))
    {
        tmp_assattr_name_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_assattr_name_45 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_45 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_WaitForSingleObject );

    if (unlikely( tmp_assattr_target_45 == NULL ))
    {
        tmp_assattr_target_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WaitForSingleObject );
    }

    if ( tmp_assattr_target_45 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WaitForSingleObject" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_45, const_str_plain_restype, tmp_assattr_name_45 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_46 = PyList_New( 2 );
    tmp_list_element_22 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_22 == NULL ))
    {
        tmp_list_element_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_22 == NULL )
    {
        Py_DECREF( tmp_assattr_name_46 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_22 );
    PyList_SET_ITEM( tmp_assattr_name_46, 0, tmp_list_element_22 );
    tmp_list_element_22 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_list_element_22 == NULL ))
    {
        tmp_list_element_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_list_element_22 == NULL )
    {
        Py_DECREF( tmp_assattr_name_46 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_22 );
    PyList_SET_ITEM( tmp_assattr_name_46, 1, tmp_list_element_22 );
    tmp_assattr_target_46 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_WaitForSingleObject );

    if (unlikely( tmp_assattr_target_46 == NULL ))
    {
        tmp_assattr_target_46 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WaitForSingleObject );
    }

    if ( tmp_assattr_target_46 == NULL )
    {
        Py_DECREF( tmp_assattr_name_46 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WaitForSingleObject" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_46, const_str_plain_argtypes, tmp_assattr_name_46 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_46 );

        exception_lineno = 180;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_46 );
    tmp_subscribed_name_29 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );

    if (unlikely( tmp_subscribed_name_29 == NULL ))
    {
        tmp_subscribed_name_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdcall_libraries );
    }

    if ( tmp_subscribed_name_29 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_stdcall_libraries" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 182;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_29 = const_str_plain_kernel32;
    tmp_source_name_30 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_29, tmp_subscript_name_29 );
    if ( tmp_source_name_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_94 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_CancelIoEx );
    Py_DECREF( tmp_source_name_30 );
    if ( tmp_assign_source_94 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CancelIoEx, tmp_assign_source_94 );
    tmp_assattr_name_47 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_assattr_name_47 == NULL ))
    {
        tmp_assattr_name_47 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_assattr_name_47 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 183;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_47 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CancelIoEx );

    if (unlikely( tmp_assattr_target_47 == NULL ))
    {
        tmp_assattr_target_47 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CancelIoEx );
    }

    if ( tmp_assattr_target_47 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CancelIoEx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 183;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_47, const_str_plain_restype, tmp_assattr_name_47 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_48 = PyList_New( 2 );
    tmp_list_element_23 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_list_element_23 == NULL ))
    {
        tmp_list_element_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_list_element_23 == NULL )
    {
        Py_DECREF( tmp_assattr_name_48 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_23 );
    PyList_SET_ITEM( tmp_assattr_name_48, 0, tmp_list_element_23 );
    tmp_list_element_23 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPOVERLAPPED );

    if (unlikely( tmp_list_element_23 == NULL ))
    {
        tmp_list_element_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPOVERLAPPED );
    }

    if ( tmp_list_element_23 == NULL )
    {
        Py_DECREF( tmp_assattr_name_48 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPOVERLAPPED" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_list_element_23 );
    PyList_SET_ITEM( tmp_assattr_name_48, 1, tmp_list_element_23 );
    tmp_assattr_target_48 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CancelIoEx );

    if (unlikely( tmp_assattr_target_48 == NULL ))
    {
        tmp_assattr_target_48 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CancelIoEx );
    }

    if ( tmp_assattr_target_48 == NULL )
    {
        Py_DECREF( tmp_assattr_name_48 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CancelIoEx" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_48, const_str_plain_argtypes, tmp_assattr_name_48 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_48 );

        exception_lineno = 184;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_48 );
    tmp_assign_source_95 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ONESTOPBIT, tmp_assign_source_95 );
    tmp_assign_source_96 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_TWOSTOPBITS, tmp_assign_source_96 );
    tmp_assign_source_97 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ONE5STOPBITS, tmp_assign_source_97 );
    tmp_assign_source_98 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_NOPARITY, tmp_assign_source_98 );
    tmp_assign_source_99 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ODDPARITY, tmp_assign_source_99 );
    tmp_assign_source_100 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EVENPARITY, tmp_assign_source_100 );
    tmp_assign_source_101 = const_int_pos_3;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_MARKPARITY, tmp_assign_source_101 );
    tmp_assign_source_102 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SPACEPARITY, tmp_assign_source_102 );
    tmp_assign_source_103 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_RTS_CONTROL_HANDSHAKE, tmp_assign_source_103 );
    tmp_assign_source_104 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_RTS_CONTROL_DISABLE, tmp_assign_source_104 );
    tmp_assign_source_105 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_RTS_CONTROL_ENABLE, tmp_assign_source_105 );
    tmp_assign_source_106 = const_int_pos_3;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_RTS_CONTROL_TOGGLE, tmp_assign_source_106 );
    tmp_assign_source_107 = const_int_pos_3;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SETRTS, tmp_assign_source_107 );
    tmp_assign_source_108 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CLRRTS, tmp_assign_source_108 );
    tmp_assign_source_109 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DTR_CONTROL_HANDSHAKE, tmp_assign_source_109 );
    tmp_assign_source_110 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DTR_CONTROL_DISABLE, tmp_assign_source_110 );
    tmp_assign_source_111 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DTR_CONTROL_ENABLE, tmp_assign_source_111 );
    tmp_assign_source_112 = const_int_pos_5;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SETDTR, tmp_assign_source_112 );
    tmp_assign_source_113 = const_int_pos_6;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_CLRDTR, tmp_assign_source_113 );
    tmp_assign_source_114 = const_int_pos_32;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_MS_DSR_ON, tmp_assign_source_114 );
    tmp_assign_source_115 = const_int_pos_256;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_RING, tmp_assign_source_115 );
    tmp_assign_source_116 = const_int_pos_512;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_PERR, tmp_assign_source_116 );
    tmp_assign_source_117 = const_int_pos_128;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_ERR, tmp_assign_source_117 );
    tmp_assign_source_118 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SETXOFF, tmp_assign_source_118 );
    tmp_assign_source_119 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_RXCHAR, tmp_assign_source_119 );
    tmp_assign_source_120 = const_int_pos_1073741824;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GENERIC_WRITE, tmp_assign_source_120 );
    tmp_assign_source_121 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_PURGE_TXCLEAR, tmp_assign_source_121 );
    tmp_assign_source_122 = const_int_pos_1073741824;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_FILE_FLAG_OVERLAPPED, tmp_assign_source_122 );
    tmp_assign_source_123 = const_int_pos_16;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_DSR, tmp_assign_source_123 );
    tmp_assign_source_124 = const_int_pos_4294967295;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_MAXDWORD, tmp_assign_source_124 );
    tmp_assign_source_125 = const_int_pos_32;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_RLSD, tmp_assign_source_125 );
    tmp_assign_source_126 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ERROR_SUCCESS, tmp_assign_source_126 );
    tmp_assign_source_127 = const_int_pos_8;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ERROR_NOT_ENOUGH_MEMORY, tmp_assign_source_127 );
    tmp_assign_source_128 = const_int_pos_995;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ERROR_OPERATION_ABORTED, tmp_assign_source_128 );
    tmp_assign_source_129 = const_int_pos_996;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ERROR_IO_INCOMPLETE, tmp_assign_source_129 );
    tmp_assign_source_130 = const_int_pos_997;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ERROR_IO_PENDING, tmp_assign_source_130 );
    tmp_assign_source_131 = const_int_pos_1784;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ERROR_INVALID_USER_BUFFER, tmp_assign_source_131 );
    tmp_assign_source_132 = const_int_pos_16;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_MS_CTS_ON, tmp_assign_source_132 );
    tmp_assign_source_133 = const_int_pos_2048;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_EVENT1, tmp_assign_source_133 );
    tmp_assign_source_134 = const_int_pos_1024;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_RX80FULL, tmp_assign_source_134 );
    tmp_assign_source_135 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_PURGE_RXABORT, tmp_assign_source_135 );
    tmp_assign_source_136 = const_int_pos_128;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_FILE_ATTRIBUTE_NORMAL, tmp_assign_source_136 );
    tmp_assign_source_137 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_PURGE_TXABORT, tmp_assign_source_137 );
    tmp_assign_source_138 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_SETXON, tmp_assign_source_138 );
    tmp_assign_source_139 = const_int_pos_3;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_OPEN_EXISTING, tmp_assign_source_139 );
    tmp_assign_source_140 = const_int_pos_64;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_MS_RING_ON, tmp_assign_source_140 );
    tmp_assign_source_141 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_TXEMPTY, tmp_assign_source_141 );
    tmp_assign_source_142 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_RXFLAG, tmp_assign_source_142 );
    tmp_assign_source_143 = const_int_pos_128;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_MS_RLSD_ON, tmp_assign_source_143 );
    tmp_assign_source_144 = const_int_pos_2147483648;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_GENERIC_READ, tmp_assign_source_144 );
    tmp_assign_source_145 = const_int_pos_4096;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_EVENT2, tmp_assign_source_145 );
    tmp_assign_source_146 = const_int_pos_8;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_CTS, tmp_assign_source_146 );
    tmp_assign_source_147 = const_int_pos_64;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_EV_BREAK, tmp_assign_source_147 );
    tmp_assign_source_148 = const_int_pos_8;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_PURGE_RXCLEAR, tmp_assign_source_148 );
    tmp_assign_source_149 = const_int_pos_4294967295;
    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_INFINITE, tmp_assign_source_149 );
    // Tried code:
    tmp_assign_source_150 = PyTuple_New( 1 );
    tmp_tuple_element_11 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_Union );

    if (unlikely( tmp_tuple_element_11 == NULL ))
    {
        tmp_tuple_element_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Union );
    }

    if ( tmp_tuple_element_11 == NULL )
    {
        Py_DECREF( tmp_assign_source_150 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Union" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 249;
        goto try_except_handler_10;
    }

    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_assign_source_150, 0, tmp_tuple_element_11 );
    assert( tmp_serial$win32_class_creation_6__bases == NULL );
    tmp_serial$win32_class_creation_6__bases = tmp_assign_source_150;

    tmp_assign_source_151 = PyDict_New();
    assert( tmp_serial$win32_class_creation_6__class_decl_dict == NULL );
    tmp_serial$win32_class_creation_6__class_decl_dict = tmp_assign_source_151;

    tmp_compare_left_13 = const_str_plain_metaclass;
    tmp_compare_right_13 = tmp_serial$win32_class_creation_6__class_decl_dict;

    tmp_cmp_In_11 = PySequence_Contains( tmp_compare_right_13, tmp_compare_left_13 );
    assert( !(tmp_cmp_In_11 == -1) );
    if ( tmp_cmp_In_11 == 1 )
    {
        goto condexpr_true_16;
    }
    else
    {
        goto condexpr_false_16;
    }
    condexpr_true_16:;
    tmp_dict_name_6 = tmp_serial$win32_class_creation_6__class_decl_dict;

    tmp_key_name_6 = const_str_plain_metaclass;
    tmp_metaclass_name_6 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
    if ( tmp_metaclass_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        goto try_except_handler_10;
    }
    goto condexpr_end_16;
    condexpr_false_16:;
    tmp_cond_value_7 = tmp_serial$win32_class_creation_6__bases;

    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        goto try_except_handler_10;
    }
    if ( tmp_cond_truth_7 == 1 )
    {
        goto condexpr_true_17;
    }
    else
    {
        goto condexpr_false_17;
    }
    condexpr_true_17:;
    tmp_subscribed_name_30 = tmp_serial$win32_class_creation_6__bases;

    tmp_subscript_name_30 = const_int_0;
    tmp_type_arg_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_30, tmp_subscript_name_30 );
    if ( tmp_type_arg_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        goto try_except_handler_10;
    }
    tmp_metaclass_name_6 = BUILTIN_TYPE1( tmp_type_arg_6 );
    Py_DECREF( tmp_type_arg_6 );
    if ( tmp_metaclass_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        goto try_except_handler_10;
    }
    goto condexpr_end_17;
    condexpr_false_17:;
    tmp_metaclass_name_6 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_6 != NULL );
    Py_INCREF( tmp_metaclass_name_6 );
    condexpr_end_17:;
    condexpr_end_16:;
    tmp_bases_name_6 = tmp_serial$win32_class_creation_6__bases;

    tmp_assign_source_152 = SELECT_METACLASS( tmp_metaclass_name_6, tmp_bases_name_6 );
    if ( tmp_assign_source_152 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_6 );

        exception_lineno = 249;
        goto try_except_handler_10;
    }
    Py_DECREF( tmp_metaclass_name_6 );
    assert( tmp_serial$win32_class_creation_6__metaclass == NULL );
    tmp_serial$win32_class_creation_6__metaclass = tmp_assign_source_152;

    tmp_compare_left_14 = const_str_plain_metaclass;
    tmp_compare_right_14 = tmp_serial$win32_class_creation_6__class_decl_dict;

    tmp_cmp_In_12 = PySequence_Contains( tmp_compare_right_14, tmp_compare_left_14 );
    assert( !(tmp_cmp_In_12 == -1) );
    if ( tmp_cmp_In_12 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_dictdel_dict = tmp_serial$win32_class_creation_6__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        goto try_except_handler_10;
    }
    branch_no_9:;
    tmp_hasattr_source_6 = tmp_serial$win32_class_creation_6__metaclass;

    tmp_hasattr_attr_6 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_6, tmp_hasattr_attr_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        goto try_except_handler_10;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_18;
    }
    else
    {
        goto condexpr_false_18;
    }
    condexpr_true_18:;
    tmp_source_name_31 = tmp_serial$win32_class_creation_6__metaclass;

    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain___prepare__ );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        goto try_except_handler_10;
    }
    tmp_args_name_6 = PyTuple_New( 2 );
    tmp_tuple_element_12 = const_str_plain_N11_OVERLAPPED4DOLLAR_48E;
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_12 );
    tmp_tuple_element_12 = tmp_serial$win32_class_creation_6__bases;

    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_12 );
    tmp_kw_name_6 = tmp_serial$win32_class_creation_6__class_decl_dict;

    frame_module->f_lineno = 249;
    tmp_assign_source_153 = CALL_FUNCTION( tmp_called_name_15, tmp_args_name_6, tmp_kw_name_6 );
    Py_DECREF( tmp_called_name_15 );
    Py_DECREF( tmp_args_name_6 );
    if ( tmp_assign_source_153 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        goto try_except_handler_10;
    }
    goto condexpr_end_18;
    condexpr_false_18:;
    tmp_assign_source_153 = PyDict_New();
    condexpr_end_18:;
    assert( tmp_serial$win32_class_creation_6__prepared == NULL );
    tmp_serial$win32_class_creation_6__prepared = tmp_assign_source_153;

    tmp_assign_source_154 = impl_serial$win32$$$class_6_N11_OVERLAPPED4DOLLAR_48E( NULL, &tmp_serial$win32_class_creation_6__bases, &tmp_serial$win32_class_creation_6__class_decl_dict, &tmp_serial$win32_class_creation_6__metaclass, &tmp_serial$win32_class_creation_6__prepared );
    if ( tmp_assign_source_154 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        goto try_except_handler_10;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_N11_OVERLAPPED4DOLLAR_48E, tmp_assign_source_154 );
    goto try_end_10;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_serial$win32_class_creation_6__bases );
    tmp_serial$win32_class_creation_6__bases = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_6__class_decl_dict );
    tmp_serial$win32_class_creation_6__class_decl_dict = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_6__metaclass );
    tmp_serial$win32_class_creation_6__metaclass = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_6__prepared );
    tmp_serial$win32_class_creation_6__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    Py_XDECREF( tmp_serial$win32_class_creation_6__bases );
    tmp_serial$win32_class_creation_6__bases = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_6__class_decl_dict );
    tmp_serial$win32_class_creation_6__class_decl_dict = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_6__metaclass );
    tmp_serial$win32_class_creation_6__metaclass = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_6__prepared );
    tmp_serial$win32_class_creation_6__prepared = NULL;

    // Tried code:
    tmp_assign_source_155 = PyTuple_New( 1 );
    tmp_tuple_element_13 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_Structure );

    if (unlikely( tmp_tuple_element_13 == NULL ))
    {
        tmp_tuple_element_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Structure );
    }

    if ( tmp_tuple_element_13 == NULL )
    {
        Py_DECREF( tmp_assign_source_155 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Structure" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 253;
        goto try_except_handler_11;
    }

    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_assign_source_155, 0, tmp_tuple_element_13 );
    assert( tmp_serial$win32_class_creation_7__bases == NULL );
    tmp_serial$win32_class_creation_7__bases = tmp_assign_source_155;

    tmp_assign_source_156 = PyDict_New();
    assert( tmp_serial$win32_class_creation_7__class_decl_dict == NULL );
    tmp_serial$win32_class_creation_7__class_decl_dict = tmp_assign_source_156;

    tmp_compare_left_15 = const_str_plain_metaclass;
    tmp_compare_right_15 = tmp_serial$win32_class_creation_7__class_decl_dict;

    tmp_cmp_In_13 = PySequence_Contains( tmp_compare_right_15, tmp_compare_left_15 );
    assert( !(tmp_cmp_In_13 == -1) );
    if ( tmp_cmp_In_13 == 1 )
    {
        goto condexpr_true_19;
    }
    else
    {
        goto condexpr_false_19;
    }
    condexpr_true_19:;
    tmp_dict_name_7 = tmp_serial$win32_class_creation_7__class_decl_dict;

    tmp_key_name_7 = const_str_plain_metaclass;
    tmp_metaclass_name_7 = DICT_GET_ITEM( tmp_dict_name_7, tmp_key_name_7 );
    if ( tmp_metaclass_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
        goto try_except_handler_11;
    }
    goto condexpr_end_19;
    condexpr_false_19:;
    tmp_cond_value_8 = tmp_serial$win32_class_creation_7__bases;

    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
        goto try_except_handler_11;
    }
    if ( tmp_cond_truth_8 == 1 )
    {
        goto condexpr_true_20;
    }
    else
    {
        goto condexpr_false_20;
    }
    condexpr_true_20:;
    tmp_subscribed_name_31 = tmp_serial$win32_class_creation_7__bases;

    tmp_subscript_name_31 = const_int_0;
    tmp_type_arg_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_31, tmp_subscript_name_31 );
    if ( tmp_type_arg_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
        goto try_except_handler_11;
    }
    tmp_metaclass_name_7 = BUILTIN_TYPE1( tmp_type_arg_7 );
    Py_DECREF( tmp_type_arg_7 );
    if ( tmp_metaclass_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
        goto try_except_handler_11;
    }
    goto condexpr_end_20;
    condexpr_false_20:;
    tmp_metaclass_name_7 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_7 != NULL );
    Py_INCREF( tmp_metaclass_name_7 );
    condexpr_end_20:;
    condexpr_end_19:;
    tmp_bases_name_7 = tmp_serial$win32_class_creation_7__bases;

    tmp_assign_source_157 = SELECT_METACLASS( tmp_metaclass_name_7, tmp_bases_name_7 );
    if ( tmp_assign_source_157 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_7 );

        exception_lineno = 253;
        goto try_except_handler_11;
    }
    Py_DECREF( tmp_metaclass_name_7 );
    assert( tmp_serial$win32_class_creation_7__metaclass == NULL );
    tmp_serial$win32_class_creation_7__metaclass = tmp_assign_source_157;

    tmp_compare_left_16 = const_str_plain_metaclass;
    tmp_compare_right_16 = tmp_serial$win32_class_creation_7__class_decl_dict;

    tmp_cmp_In_14 = PySequence_Contains( tmp_compare_right_16, tmp_compare_left_16 );
    assert( !(tmp_cmp_In_14 == -1) );
    if ( tmp_cmp_In_14 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_dictdel_dict = tmp_serial$win32_class_creation_7__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
        goto try_except_handler_11;
    }
    branch_no_10:;
    tmp_hasattr_source_7 = tmp_serial$win32_class_creation_7__metaclass;

    tmp_hasattr_attr_7 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_7, tmp_hasattr_attr_7 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
        goto try_except_handler_11;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_21;
    }
    else
    {
        goto condexpr_false_21;
    }
    condexpr_true_21:;
    tmp_source_name_32 = tmp_serial$win32_class_creation_7__metaclass;

    tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain___prepare__ );
    if ( tmp_called_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
        goto try_except_handler_11;
    }
    tmp_args_name_7 = PyTuple_New( 2 );
    tmp_tuple_element_14 = const_str_plain_N11_OVERLAPPED4DOLLAR_484DOLLAR_49E;
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_14 );
    tmp_tuple_element_14 = tmp_serial$win32_class_creation_7__bases;

    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_14 );
    tmp_kw_name_7 = tmp_serial$win32_class_creation_7__class_decl_dict;

    frame_module->f_lineno = 253;
    tmp_assign_source_158 = CALL_FUNCTION( tmp_called_name_16, tmp_args_name_7, tmp_kw_name_7 );
    Py_DECREF( tmp_called_name_16 );
    Py_DECREF( tmp_args_name_7 );
    if ( tmp_assign_source_158 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
        goto try_except_handler_11;
    }
    goto condexpr_end_21;
    condexpr_false_21:;
    tmp_assign_source_158 = PyDict_New();
    condexpr_end_21:;
    assert( tmp_serial$win32_class_creation_7__prepared == NULL );
    tmp_serial$win32_class_creation_7__prepared = tmp_assign_source_158;

    tmp_assign_source_159 = impl_serial$win32$$$class_7_N11_OVERLAPPED4DOLLAR_484DOLLAR_49E( NULL, &tmp_serial$win32_class_creation_7__bases, &tmp_serial$win32_class_creation_7__class_decl_dict, &tmp_serial$win32_class_creation_7__metaclass, &tmp_serial$win32_class_creation_7__prepared );
    if ( tmp_assign_source_159 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
        goto try_except_handler_11;
    }
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_N11_OVERLAPPED4DOLLAR_484DOLLAR_49E, tmp_assign_source_159 );
    goto try_end_11;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_serial$win32_class_creation_7__bases );
    tmp_serial$win32_class_creation_7__bases = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_7__class_decl_dict );
    tmp_serial$win32_class_creation_7__class_decl_dict = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_7__metaclass );
    tmp_serial$win32_class_creation_7__metaclass = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_7__prepared );
    tmp_serial$win32_class_creation_7__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    Py_XDECREF( tmp_serial$win32_class_creation_7__bases );
    tmp_serial$win32_class_creation_7__bases = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_7__class_decl_dict );
    tmp_serial$win32_class_creation_7__class_decl_dict = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_7__metaclass );
    tmp_serial$win32_class_creation_7__metaclass = NULL;

    Py_XDECREF( tmp_serial$win32_class_creation_7__prepared );
    tmp_serial$win32_class_creation_7__prepared = NULL;

    tmp_assattr_name_49 = PyList_New( 2 );
    tmp_list_element_24 = PyTuple_New( 2 );
    tmp_tuple_element_15 = const_str_plain_Offset;
    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_list_element_24, 0, tmp_tuple_element_15 );
    tmp_tuple_element_15 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_15 == NULL ))
    {
        tmp_tuple_element_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_15 == NULL )
    {
        Py_DECREF( tmp_assattr_name_49 );
        Py_DECREF( tmp_list_element_24 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 258;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_list_element_24, 1, tmp_tuple_element_15 );
    PyList_SET_ITEM( tmp_assattr_name_49, 0, tmp_list_element_24 );
    tmp_list_element_24 = PyTuple_New( 2 );
    tmp_tuple_element_16 = const_str_plain_OffsetHigh;
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_list_element_24, 0, tmp_tuple_element_16 );
    tmp_tuple_element_16 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_16 == NULL ))
    {
        tmp_tuple_element_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_16 == NULL )
    {
        Py_DECREF( tmp_assattr_name_49 );
        Py_DECREF( tmp_list_element_24 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 259;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_list_element_24, 1, tmp_tuple_element_16 );
    PyList_SET_ITEM( tmp_assattr_name_49, 1, tmp_list_element_24 );
    tmp_assattr_target_49 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_N11_OVERLAPPED4DOLLAR_484DOLLAR_49E );

    if (unlikely( tmp_assattr_target_49 == NULL ))
    {
        tmp_assattr_target_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_N11_OVERLAPPED4DOLLAR_484DOLLAR_49E );
    }

    if ( tmp_assattr_target_49 == NULL )
    {
        Py_DECREF( tmp_assattr_name_49 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "N11_OVERLAPPED4DOLLAR_484DOLLAR_49E" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 257;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_49, const_str_plain__fields_, tmp_assattr_name_49 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_49 );

        exception_lineno = 257;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_49 );
    tmp_assign_source_160 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_void_p );

    if (unlikely( tmp_assign_source_160 == NULL ))
    {
        tmp_assign_source_160 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_void_p );
    }

    if ( tmp_assign_source_160 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "c_void_p" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 262;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_PVOID, tmp_assign_source_160 );
    tmp_assattr_name_50 = LIST_COPY( const_list_str_plain__0_list );
    tmp_assattr_target_50 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_N11_OVERLAPPED4DOLLAR_48E );

    if (unlikely( tmp_assattr_target_50 == NULL ))
    {
        tmp_assattr_target_50 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_N11_OVERLAPPED4DOLLAR_48E );
    }

    if ( tmp_assattr_target_50 == NULL )
    {
        Py_DECREF( tmp_assattr_name_50 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "N11_OVERLAPPED4DOLLAR_48E" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 264;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_50, const_str_plain__anonymous_, tmp_assattr_name_50 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_50 );

        exception_lineno = 264;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_50 );
    tmp_assattr_name_51 = PyList_New( 2 );
    tmp_list_element_25 = PyTuple_New( 2 );
    tmp_tuple_element_17 = const_str_plain__0;
    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_list_element_25, 0, tmp_tuple_element_17 );
    tmp_tuple_element_17 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_N11_OVERLAPPED4DOLLAR_484DOLLAR_49E );

    if (unlikely( tmp_tuple_element_17 == NULL ))
    {
        tmp_tuple_element_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_N11_OVERLAPPED4DOLLAR_484DOLLAR_49E );
    }

    if ( tmp_tuple_element_17 == NULL )
    {
        Py_DECREF( tmp_assattr_name_51 );
        Py_DECREF( tmp_list_element_25 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "N11_OVERLAPPED4DOLLAR_484DOLLAR_49E" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 266;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_list_element_25, 1, tmp_tuple_element_17 );
    PyList_SET_ITEM( tmp_assattr_name_51, 0, tmp_list_element_25 );
    tmp_list_element_25 = PyTuple_New( 2 );
    tmp_tuple_element_18 = const_str_plain_Pointer;
    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_list_element_25, 0, tmp_tuple_element_18 );
    tmp_tuple_element_18 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_PVOID );

    if (unlikely( tmp_tuple_element_18 == NULL ))
    {
        tmp_tuple_element_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PVOID );
    }

    if ( tmp_tuple_element_18 == NULL )
    {
        Py_DECREF( tmp_assattr_name_51 );
        Py_DECREF( tmp_list_element_25 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PVOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 267;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_list_element_25, 1, tmp_tuple_element_18 );
    PyList_SET_ITEM( tmp_assattr_name_51, 1, tmp_list_element_25 );
    tmp_assattr_target_51 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_N11_OVERLAPPED4DOLLAR_48E );

    if (unlikely( tmp_assattr_target_51 == NULL ))
    {
        tmp_assattr_target_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_N11_OVERLAPPED4DOLLAR_48E );
    }

    if ( tmp_assattr_target_51 == NULL )
    {
        Py_DECREF( tmp_assattr_name_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "N11_OVERLAPPED4DOLLAR_48E" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 265;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_51, const_str_plain__fields_, tmp_assattr_name_51 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_51 );

        exception_lineno = 265;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_51 );
    tmp_assattr_name_52 = LIST_COPY( const_list_str_plain__0_list );
    tmp_assattr_target_52 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__OVERLAPPED );

    if (unlikely( tmp_assattr_target_52 == NULL ))
    {
        tmp_assattr_target_52 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__OVERLAPPED );
    }

    if ( tmp_assattr_target_52 == NULL )
    {
        Py_DECREF( tmp_assattr_name_52 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_OVERLAPPED" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 269;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_52, const_str_plain__anonymous_, tmp_assattr_name_52 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_52 );

        exception_lineno = 269;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_52 );
    tmp_assattr_name_53 = PyList_New( 4 );
    tmp_list_element_26 = PyTuple_New( 2 );
    tmp_tuple_element_19 = const_str_plain_Internal;
    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_list_element_26, 0, tmp_tuple_element_19 );
    tmp_tuple_element_19 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ULONG_PTR );

    if (unlikely( tmp_tuple_element_19 == NULL ))
    {
        tmp_tuple_element_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ULONG_PTR );
    }

    if ( tmp_tuple_element_19 == NULL )
    {
        Py_DECREF( tmp_assattr_name_53 );
        Py_DECREF( tmp_list_element_26 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ULONG_PTR" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 271;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_list_element_26, 1, tmp_tuple_element_19 );
    PyList_SET_ITEM( tmp_assattr_name_53, 0, tmp_list_element_26 );
    tmp_list_element_26 = PyTuple_New( 2 );
    tmp_tuple_element_20 = const_str_plain_InternalHigh;
    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_list_element_26, 0, tmp_tuple_element_20 );
    tmp_tuple_element_20 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_ULONG_PTR );

    if (unlikely( tmp_tuple_element_20 == NULL ))
    {
        tmp_tuple_element_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ULONG_PTR );
    }

    if ( tmp_tuple_element_20 == NULL )
    {
        Py_DECREF( tmp_assattr_name_53 );
        Py_DECREF( tmp_list_element_26 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ULONG_PTR" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 272;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_list_element_26, 1, tmp_tuple_element_20 );
    PyList_SET_ITEM( tmp_assattr_name_53, 1, tmp_list_element_26 );
    tmp_list_element_26 = PyTuple_New( 2 );
    tmp_tuple_element_21 = const_str_plain__0;
    Py_INCREF( tmp_tuple_element_21 );
    PyTuple_SET_ITEM( tmp_list_element_26, 0, tmp_tuple_element_21 );
    tmp_tuple_element_21 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_N11_OVERLAPPED4DOLLAR_48E );

    if (unlikely( tmp_tuple_element_21 == NULL ))
    {
        tmp_tuple_element_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_N11_OVERLAPPED4DOLLAR_48E );
    }

    if ( tmp_tuple_element_21 == NULL )
    {
        Py_DECREF( tmp_assattr_name_53 );
        Py_DECREF( tmp_list_element_26 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "N11_OVERLAPPED4DOLLAR_48E" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 273;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_21 );
    PyTuple_SET_ITEM( tmp_list_element_26, 1, tmp_tuple_element_21 );
    PyList_SET_ITEM( tmp_assattr_name_53, 2, tmp_list_element_26 );
    tmp_list_element_26 = PyTuple_New( 2 );
    tmp_tuple_element_22 = const_str_plain_hEvent;
    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_list_element_26, 0, tmp_tuple_element_22 );
    tmp_tuple_element_22 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_tuple_element_22 == NULL ))
    {
        tmp_tuple_element_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_tuple_element_22 == NULL )
    {
        Py_DECREF( tmp_assattr_name_53 );
        Py_DECREF( tmp_list_element_26 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 274;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_list_element_26, 1, tmp_tuple_element_22 );
    PyList_SET_ITEM( tmp_assattr_name_53, 3, tmp_list_element_26 );
    tmp_assattr_target_53 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__OVERLAPPED );

    if (unlikely( tmp_assattr_target_53 == NULL ))
    {
        tmp_assattr_target_53 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__OVERLAPPED );
    }

    if ( tmp_assattr_target_53 == NULL )
    {
        Py_DECREF( tmp_assattr_name_53 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_OVERLAPPED" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 270;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_53, const_str_plain__fields_, tmp_assattr_name_53 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_53 );

        exception_lineno = 270;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_53 );
    tmp_assattr_name_54 = PyList_New( 3 );
    tmp_list_element_27 = PyTuple_New( 2 );
    tmp_tuple_element_23 = const_str_plain_nLength;
    Py_INCREF( tmp_tuple_element_23 );
    PyTuple_SET_ITEM( tmp_list_element_27, 0, tmp_tuple_element_23 );
    tmp_tuple_element_23 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_23 == NULL ))
    {
        tmp_tuple_element_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_23 == NULL )
    {
        Py_DECREF( tmp_assattr_name_54 );
        Py_DECREF( tmp_list_element_27 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 277;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_23 );
    PyTuple_SET_ITEM( tmp_list_element_27, 1, tmp_tuple_element_23 );
    PyList_SET_ITEM( tmp_assattr_name_54, 0, tmp_list_element_27 );
    tmp_list_element_27 = PyTuple_New( 2 );
    tmp_tuple_element_24 = const_str_plain_lpSecurityDescriptor;
    Py_INCREF( tmp_tuple_element_24 );
    PyTuple_SET_ITEM( tmp_list_element_27, 0, tmp_tuple_element_24 );
    tmp_tuple_element_24 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_LPVOID );

    if (unlikely( tmp_tuple_element_24 == NULL ))
    {
        tmp_tuple_element_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPVOID );
    }

    if ( tmp_tuple_element_24 == NULL )
    {
        Py_DECREF( tmp_assattr_name_54 );
        Py_DECREF( tmp_list_element_27 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPVOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 278;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_24 );
    PyTuple_SET_ITEM( tmp_list_element_27, 1, tmp_tuple_element_24 );
    PyList_SET_ITEM( tmp_assattr_name_54, 1, tmp_list_element_27 );
    tmp_list_element_27 = PyTuple_New( 2 );
    tmp_tuple_element_25 = const_str_plain_bInheritHandle;
    Py_INCREF( tmp_tuple_element_25 );
    PyTuple_SET_ITEM( tmp_list_element_27, 0, tmp_tuple_element_25 );
    tmp_tuple_element_25 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_tuple_element_25 == NULL ))
    {
        tmp_tuple_element_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_tuple_element_25 == NULL )
    {
        Py_DECREF( tmp_assattr_name_54 );
        Py_DECREF( tmp_list_element_27 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 279;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_25 );
    PyTuple_SET_ITEM( tmp_list_element_27, 1, tmp_tuple_element_25 );
    PyList_SET_ITEM( tmp_assattr_name_54, 2, tmp_list_element_27 );
    tmp_assattr_target_54 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__SECURITY_ATTRIBUTES );

    if (unlikely( tmp_assattr_target_54 == NULL ))
    {
        tmp_assattr_target_54 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__SECURITY_ATTRIBUTES );
    }

    if ( tmp_assattr_target_54 == NULL )
    {
        Py_DECREF( tmp_assattr_name_54 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_SECURITY_ATTRIBUTES" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 276;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_54, const_str_plain__fields_, tmp_assattr_name_54 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_54 );

        exception_lineno = 276;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_54 );
    tmp_assattr_name_55 = PyList_New( 10 );
    tmp_list_element_28 = PyTuple_New( 3 );
    tmp_tuple_element_26 = const_str_plain_fCtsHold;
    Py_INCREF( tmp_tuple_element_26 );
    PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_26 );
    tmp_tuple_element_26 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_26 == NULL ))
    {
        tmp_tuple_element_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_26 == NULL )
    {
        Py_DECREF( tmp_assattr_name_55 );
        Py_DECREF( tmp_list_element_28 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 282;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_26 );
    PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_26 );
    tmp_tuple_element_26 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_26 );
    PyTuple_SET_ITEM( tmp_list_element_28, 2, tmp_tuple_element_26 );
    PyList_SET_ITEM( tmp_assattr_name_55, 0, tmp_list_element_28 );
    tmp_list_element_28 = PyTuple_New( 3 );
    tmp_tuple_element_27 = const_str_plain_fDsrHold;
    Py_INCREF( tmp_tuple_element_27 );
    PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_27 );
    tmp_tuple_element_27 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_27 == NULL ))
    {
        tmp_tuple_element_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_27 == NULL )
    {
        Py_DECREF( tmp_assattr_name_55 );
        Py_DECREF( tmp_list_element_28 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 283;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_27 );
    PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_27 );
    tmp_tuple_element_27 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_27 );
    PyTuple_SET_ITEM( tmp_list_element_28, 2, tmp_tuple_element_27 );
    PyList_SET_ITEM( tmp_assattr_name_55, 1, tmp_list_element_28 );
    tmp_list_element_28 = PyTuple_New( 3 );
    tmp_tuple_element_28 = const_str_plain_fRlsdHold;
    Py_INCREF( tmp_tuple_element_28 );
    PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_28 );
    tmp_tuple_element_28 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_28 == NULL ))
    {
        tmp_tuple_element_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_28 == NULL )
    {
        Py_DECREF( tmp_assattr_name_55 );
        Py_DECREF( tmp_list_element_28 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 284;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_28 );
    PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_28 );
    tmp_tuple_element_28 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_28 );
    PyTuple_SET_ITEM( tmp_list_element_28, 2, tmp_tuple_element_28 );
    PyList_SET_ITEM( tmp_assattr_name_55, 2, tmp_list_element_28 );
    tmp_list_element_28 = PyTuple_New( 3 );
    tmp_tuple_element_29 = const_str_plain_fXoffHold;
    Py_INCREF( tmp_tuple_element_29 );
    PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_29 );
    tmp_tuple_element_29 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_29 == NULL ))
    {
        tmp_tuple_element_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_29 == NULL )
    {
        Py_DECREF( tmp_assattr_name_55 );
        Py_DECREF( tmp_list_element_28 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 285;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_29 );
    PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_29 );
    tmp_tuple_element_29 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_29 );
    PyTuple_SET_ITEM( tmp_list_element_28, 2, tmp_tuple_element_29 );
    PyList_SET_ITEM( tmp_assattr_name_55, 3, tmp_list_element_28 );
    tmp_list_element_28 = PyTuple_New( 3 );
    tmp_tuple_element_30 = const_str_plain_fXoffSent;
    Py_INCREF( tmp_tuple_element_30 );
    PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_30 );
    tmp_tuple_element_30 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_30 == NULL ))
    {
        tmp_tuple_element_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_30 == NULL )
    {
        Py_DECREF( tmp_assattr_name_55 );
        Py_DECREF( tmp_list_element_28 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 286;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_30 );
    PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_30 );
    tmp_tuple_element_30 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_30 );
    PyTuple_SET_ITEM( tmp_list_element_28, 2, tmp_tuple_element_30 );
    PyList_SET_ITEM( tmp_assattr_name_55, 4, tmp_list_element_28 );
    tmp_list_element_28 = PyTuple_New( 3 );
    tmp_tuple_element_31 = const_str_plain_fEof;
    Py_INCREF( tmp_tuple_element_31 );
    PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_31 );
    tmp_tuple_element_31 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_31 == NULL ))
    {
        tmp_tuple_element_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_31 == NULL )
    {
        Py_DECREF( tmp_assattr_name_55 );
        Py_DECREF( tmp_list_element_28 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 287;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_31 );
    PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_31 );
    tmp_tuple_element_31 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_31 );
    PyTuple_SET_ITEM( tmp_list_element_28, 2, tmp_tuple_element_31 );
    PyList_SET_ITEM( tmp_assattr_name_55, 5, tmp_list_element_28 );
    tmp_list_element_28 = PyTuple_New( 3 );
    tmp_tuple_element_32 = const_str_plain_fTxim;
    Py_INCREF( tmp_tuple_element_32 );
    PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_32 );
    tmp_tuple_element_32 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_32 == NULL ))
    {
        tmp_tuple_element_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_32 == NULL )
    {
        Py_DECREF( tmp_assattr_name_55 );
        Py_DECREF( tmp_list_element_28 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 288;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_32 );
    PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_32 );
    tmp_tuple_element_32 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_32 );
    PyTuple_SET_ITEM( tmp_list_element_28, 2, tmp_tuple_element_32 );
    PyList_SET_ITEM( tmp_assattr_name_55, 6, tmp_list_element_28 );
    tmp_list_element_28 = PyTuple_New( 3 );
    tmp_tuple_element_33 = const_str_plain_fReserved;
    Py_INCREF( tmp_tuple_element_33 );
    PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_33 );
    tmp_tuple_element_33 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_33 == NULL ))
    {
        tmp_tuple_element_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_33 == NULL )
    {
        Py_DECREF( tmp_assattr_name_55 );
        Py_DECREF( tmp_list_element_28 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 289;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_33 );
    PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_33 );
    tmp_tuple_element_33 = const_int_pos_25;
    Py_INCREF( tmp_tuple_element_33 );
    PyTuple_SET_ITEM( tmp_list_element_28, 2, tmp_tuple_element_33 );
    PyList_SET_ITEM( tmp_assattr_name_55, 7, tmp_list_element_28 );
    tmp_list_element_28 = PyTuple_New( 2 );
    tmp_tuple_element_34 = const_str_plain_cbInQue;
    Py_INCREF( tmp_tuple_element_34 );
    PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_34 );
    tmp_tuple_element_34 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_34 == NULL ))
    {
        tmp_tuple_element_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_34 == NULL )
    {
        Py_DECREF( tmp_assattr_name_55 );
        Py_DECREF( tmp_list_element_28 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 290;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_34 );
    PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_34 );
    PyList_SET_ITEM( tmp_assattr_name_55, 8, tmp_list_element_28 );
    tmp_list_element_28 = PyTuple_New( 2 );
    tmp_tuple_element_35 = const_str_plain_cbOutQue;
    Py_INCREF( tmp_tuple_element_35 );
    PyTuple_SET_ITEM( tmp_list_element_28, 0, tmp_tuple_element_35 );
    tmp_tuple_element_35 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_35 == NULL ))
    {
        tmp_tuple_element_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_35 == NULL )
    {
        Py_DECREF( tmp_assattr_name_55 );
        Py_DECREF( tmp_list_element_28 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 291;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_35 );
    PyTuple_SET_ITEM( tmp_list_element_28, 1, tmp_tuple_element_35 );
    PyList_SET_ITEM( tmp_assattr_name_55, 9, tmp_list_element_28 );
    tmp_assattr_target_55 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__COMSTAT );

    if (unlikely( tmp_assattr_target_55 == NULL ))
    {
        tmp_assattr_target_55 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__COMSTAT );
    }

    if ( tmp_assattr_target_55 == NULL )
    {
        Py_DECREF( tmp_assattr_name_55 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_COMSTAT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 281;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_55, const_str_plain__fields_, tmp_assattr_name_55 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_55 );

        exception_lineno = 281;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_55 );
    tmp_assattr_name_56 = PyList_New( 28 );
    tmp_list_element_29 = PyTuple_New( 2 );
    tmp_tuple_element_36 = const_str_plain_DCBlength;
    Py_INCREF( tmp_tuple_element_36 );
    PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_36 );
    tmp_tuple_element_36 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_36 == NULL ))
    {
        tmp_tuple_element_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_36 == NULL )
    {
        Py_DECREF( tmp_assattr_name_56 );
        Py_DECREF( tmp_list_element_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 294;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_36 );
    PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_36 );
    PyList_SET_ITEM( tmp_assattr_name_56, 0, tmp_list_element_29 );
    tmp_list_element_29 = PyTuple_New( 2 );
    tmp_tuple_element_37 = const_str_plain_BaudRate;
    Py_INCREF( tmp_tuple_element_37 );
    PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_37 );
    tmp_tuple_element_37 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_37 == NULL ))
    {
        tmp_tuple_element_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_37 == NULL )
    {
        Py_DECREF( tmp_assattr_name_56 );
        Py_DECREF( tmp_list_element_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 295;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_37 );
    PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_37 );
    PyList_SET_ITEM( tmp_assattr_name_56, 1, tmp_list_element_29 );
    tmp_list_element_29 = PyTuple_New( 3 );
    tmp_tuple_element_38 = const_str_plain_fBinary;
    Py_INCREF( tmp_tuple_element_38 );
    PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_38 );
    tmp_tuple_element_38 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_38 == NULL ))
    {
        tmp_tuple_element_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_38 == NULL )
    {
        Py_DECREF( tmp_assattr_name_56 );
        Py_DECREF( tmp_list_element_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 296;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_38 );
    PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_38 );
    tmp_tuple_element_38 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_38 );
    PyTuple_SET_ITEM( tmp_list_element_29, 2, tmp_tuple_element_38 );
    PyList_SET_ITEM( tmp_assattr_name_56, 2, tmp_list_element_29 );
    tmp_list_element_29 = PyTuple_New( 3 );
    tmp_tuple_element_39 = const_str_plain_fParity;
    Py_INCREF( tmp_tuple_element_39 );
    PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_39 );
    tmp_tuple_element_39 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_39 == NULL ))
    {
        tmp_tuple_element_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_39 == NULL )
    {
        Py_DECREF( tmp_assattr_name_56 );
        Py_DECREF( tmp_list_element_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 297;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_39 );
    PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_39 );
    tmp_tuple_element_39 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_39 );
    PyTuple_SET_ITEM( tmp_list_element_29, 2, tmp_tuple_element_39 );
    PyList_SET_ITEM( tmp_assattr_name_56, 3, tmp_list_element_29 );
    tmp_list_element_29 = PyTuple_New( 3 );
    tmp_tuple_element_40 = const_str_plain_fOutxCtsFlow;
    Py_INCREF( tmp_tuple_element_40 );
    PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_40 );
    tmp_tuple_element_40 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_40 == NULL ))
    {
        tmp_tuple_element_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_40 == NULL )
    {
        Py_DECREF( tmp_assattr_name_56 );
        Py_DECREF( tmp_list_element_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 298;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_40 );
    PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_40 );
    tmp_tuple_element_40 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_40 );
    PyTuple_SET_ITEM( tmp_list_element_29, 2, tmp_tuple_element_40 );
    PyList_SET_ITEM( tmp_assattr_name_56, 4, tmp_list_element_29 );
    tmp_list_element_29 = PyTuple_New( 3 );
    tmp_tuple_element_41 = const_str_plain_fOutxDsrFlow;
    Py_INCREF( tmp_tuple_element_41 );
    PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_41 );
    tmp_tuple_element_41 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_41 == NULL ))
    {
        tmp_tuple_element_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_41 == NULL )
    {
        Py_DECREF( tmp_assattr_name_56 );
        Py_DECREF( tmp_list_element_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 299;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_41 );
    PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_41 );
    tmp_tuple_element_41 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_41 );
    PyTuple_SET_ITEM( tmp_list_element_29, 2, tmp_tuple_element_41 );
    PyList_SET_ITEM( tmp_assattr_name_56, 5, tmp_list_element_29 );
    tmp_list_element_29 = PyTuple_New( 3 );
    tmp_tuple_element_42 = const_str_plain_fDtrControl;
    Py_INCREF( tmp_tuple_element_42 );
    PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_42 );
    tmp_tuple_element_42 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_42 == NULL ))
    {
        tmp_tuple_element_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_42 == NULL )
    {
        Py_DECREF( tmp_assattr_name_56 );
        Py_DECREF( tmp_list_element_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 300;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_42 );
    PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_42 );
    tmp_tuple_element_42 = const_int_pos_2;
    Py_INCREF( tmp_tuple_element_42 );
    PyTuple_SET_ITEM( tmp_list_element_29, 2, tmp_tuple_element_42 );
    PyList_SET_ITEM( tmp_assattr_name_56, 6, tmp_list_element_29 );
    tmp_list_element_29 = PyTuple_New( 3 );
    tmp_tuple_element_43 = const_str_plain_fDsrSensitivity;
    Py_INCREF( tmp_tuple_element_43 );
    PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_43 );
    tmp_tuple_element_43 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_43 == NULL ))
    {
        tmp_tuple_element_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_43 == NULL )
    {
        Py_DECREF( tmp_assattr_name_56 );
        Py_DECREF( tmp_list_element_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 301;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_43 );
    PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_43 );
    tmp_tuple_element_43 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_43 );
    PyTuple_SET_ITEM( tmp_list_element_29, 2, tmp_tuple_element_43 );
    PyList_SET_ITEM( tmp_assattr_name_56, 7, tmp_list_element_29 );
    tmp_list_element_29 = PyTuple_New( 3 );
    tmp_tuple_element_44 = const_str_plain_fTXContinueOnXoff;
    Py_INCREF( tmp_tuple_element_44 );
    PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_44 );
    tmp_tuple_element_44 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_44 == NULL ))
    {
        tmp_tuple_element_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_44 == NULL )
    {
        Py_DECREF( tmp_assattr_name_56 );
        Py_DECREF( tmp_list_element_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 302;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_44 );
    PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_44 );
    tmp_tuple_element_44 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_44 );
    PyTuple_SET_ITEM( tmp_list_element_29, 2, tmp_tuple_element_44 );
    PyList_SET_ITEM( tmp_assattr_name_56, 8, tmp_list_element_29 );
    tmp_list_element_29 = PyTuple_New( 3 );
    tmp_tuple_element_45 = const_str_plain_fOutX;
    Py_INCREF( tmp_tuple_element_45 );
    PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_45 );
    tmp_tuple_element_45 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_45 == NULL ))
    {
        tmp_tuple_element_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_45 == NULL )
    {
        Py_DECREF( tmp_assattr_name_56 );
        Py_DECREF( tmp_list_element_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 303;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_45 );
    PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_45 );
    tmp_tuple_element_45 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_45 );
    PyTuple_SET_ITEM( tmp_list_element_29, 2, tmp_tuple_element_45 );
    PyList_SET_ITEM( tmp_assattr_name_56, 9, tmp_list_element_29 );
    tmp_list_element_29 = PyTuple_New( 3 );
    tmp_tuple_element_46 = const_str_plain_fInX;
    Py_INCREF( tmp_tuple_element_46 );
    PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_46 );
    tmp_tuple_element_46 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_46 == NULL ))
    {
        tmp_tuple_element_46 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_46 == NULL )
    {
        Py_DECREF( tmp_assattr_name_56 );
        Py_DECREF( tmp_list_element_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 304;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_46 );
    PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_46 );
    tmp_tuple_element_46 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_46 );
    PyTuple_SET_ITEM( tmp_list_element_29, 2, tmp_tuple_element_46 );
    PyList_SET_ITEM( tmp_assattr_name_56, 10, tmp_list_element_29 );
    tmp_list_element_29 = PyTuple_New( 3 );
    tmp_tuple_element_47 = const_str_plain_fErrorChar;
    Py_INCREF( tmp_tuple_element_47 );
    PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_47 );
    tmp_tuple_element_47 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_47 == NULL ))
    {
        tmp_tuple_element_47 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_47 == NULL )
    {
        Py_DECREF( tmp_assattr_name_56 );
        Py_DECREF( tmp_list_element_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 305;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_47 );
    PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_47 );
    tmp_tuple_element_47 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_47 );
    PyTuple_SET_ITEM( tmp_list_element_29, 2, tmp_tuple_element_47 );
    PyList_SET_ITEM( tmp_assattr_name_56, 11, tmp_list_element_29 );
    tmp_list_element_29 = PyTuple_New( 3 );
    tmp_tuple_element_48 = const_str_plain_fNull;
    Py_INCREF( tmp_tuple_element_48 );
    PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_48 );
    tmp_tuple_element_48 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_48 == NULL ))
    {
        tmp_tuple_element_48 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_48 == NULL )
    {
        Py_DECREF( tmp_assattr_name_56 );
        Py_DECREF( tmp_list_element_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 306;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_48 );
    PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_48 );
    tmp_tuple_element_48 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_48 );
    PyTuple_SET_ITEM( tmp_list_element_29, 2, tmp_tuple_element_48 );
    PyList_SET_ITEM( tmp_assattr_name_56, 12, tmp_list_element_29 );
    tmp_list_element_29 = PyTuple_New( 3 );
    tmp_tuple_element_49 = const_str_plain_fRtsControl;
    Py_INCREF( tmp_tuple_element_49 );
    PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_49 );
    tmp_tuple_element_49 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_49 == NULL ))
    {
        tmp_tuple_element_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_49 == NULL )
    {
        Py_DECREF( tmp_assattr_name_56 );
        Py_DECREF( tmp_list_element_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 307;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_49 );
    PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_49 );
    tmp_tuple_element_49 = const_int_pos_2;
    Py_INCREF( tmp_tuple_element_49 );
    PyTuple_SET_ITEM( tmp_list_element_29, 2, tmp_tuple_element_49 );
    PyList_SET_ITEM( tmp_assattr_name_56, 13, tmp_list_element_29 );
    tmp_list_element_29 = PyTuple_New( 3 );
    tmp_tuple_element_50 = const_str_plain_fAbortOnError;
    Py_INCREF( tmp_tuple_element_50 );
    PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_50 );
    tmp_tuple_element_50 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_50 == NULL ))
    {
        tmp_tuple_element_50 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_50 == NULL )
    {
        Py_DECREF( tmp_assattr_name_56 );
        Py_DECREF( tmp_list_element_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 308;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_50 );
    PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_50 );
    tmp_tuple_element_50 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_50 );
    PyTuple_SET_ITEM( tmp_list_element_29, 2, tmp_tuple_element_50 );
    PyList_SET_ITEM( tmp_assattr_name_56, 14, tmp_list_element_29 );
    tmp_list_element_29 = PyTuple_New( 3 );
    tmp_tuple_element_51 = const_str_plain_fDummy2;
    Py_INCREF( tmp_tuple_element_51 );
    PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_51 );
    tmp_tuple_element_51 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_51 == NULL ))
    {
        tmp_tuple_element_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_51 == NULL )
    {
        Py_DECREF( tmp_assattr_name_56 );
        Py_DECREF( tmp_list_element_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 309;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_51 );
    PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_51 );
    tmp_tuple_element_51 = const_int_pos_17;
    Py_INCREF( tmp_tuple_element_51 );
    PyTuple_SET_ITEM( tmp_list_element_29, 2, tmp_tuple_element_51 );
    PyList_SET_ITEM( tmp_assattr_name_56, 15, tmp_list_element_29 );
    tmp_list_element_29 = PyTuple_New( 2 );
    tmp_tuple_element_52 = const_str_plain_wReserved;
    Py_INCREF( tmp_tuple_element_52 );
    PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_52 );
    tmp_tuple_element_52 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_WORD );

    if (unlikely( tmp_tuple_element_52 == NULL ))
    {
        tmp_tuple_element_52 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WORD );
    }

    if ( tmp_tuple_element_52 == NULL )
    {
        Py_DECREF( tmp_assattr_name_56 );
        Py_DECREF( tmp_list_element_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 310;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_52 );
    PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_52 );
    PyList_SET_ITEM( tmp_assattr_name_56, 16, tmp_list_element_29 );
    tmp_list_element_29 = PyTuple_New( 2 );
    tmp_tuple_element_53 = const_str_plain_XonLim;
    Py_INCREF( tmp_tuple_element_53 );
    PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_53 );
    tmp_tuple_element_53 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_WORD );

    if (unlikely( tmp_tuple_element_53 == NULL ))
    {
        tmp_tuple_element_53 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WORD );
    }

    if ( tmp_tuple_element_53 == NULL )
    {
        Py_DECREF( tmp_assattr_name_56 );
        Py_DECREF( tmp_list_element_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 311;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_53 );
    PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_53 );
    PyList_SET_ITEM( tmp_assattr_name_56, 17, tmp_list_element_29 );
    tmp_list_element_29 = PyTuple_New( 2 );
    tmp_tuple_element_54 = const_str_plain_XoffLim;
    Py_INCREF( tmp_tuple_element_54 );
    PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_54 );
    tmp_tuple_element_54 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_WORD );

    if (unlikely( tmp_tuple_element_54 == NULL ))
    {
        tmp_tuple_element_54 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WORD );
    }

    if ( tmp_tuple_element_54 == NULL )
    {
        Py_DECREF( tmp_assattr_name_56 );
        Py_DECREF( tmp_list_element_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 312;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_54 );
    PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_54 );
    PyList_SET_ITEM( tmp_assattr_name_56, 18, tmp_list_element_29 );
    tmp_list_element_29 = PyTuple_New( 2 );
    tmp_tuple_element_55 = const_str_plain_ByteSize;
    Py_INCREF( tmp_tuple_element_55 );
    PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_55 );
    tmp_tuple_element_55 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BYTE );

    if (unlikely( tmp_tuple_element_55 == NULL ))
    {
        tmp_tuple_element_55 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BYTE );
    }

    if ( tmp_tuple_element_55 == NULL )
    {
        Py_DECREF( tmp_assattr_name_56 );
        Py_DECREF( tmp_list_element_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BYTE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 313;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_55 );
    PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_55 );
    PyList_SET_ITEM( tmp_assattr_name_56, 19, tmp_list_element_29 );
    tmp_list_element_29 = PyTuple_New( 2 );
    tmp_tuple_element_56 = const_str_plain_Parity;
    Py_INCREF( tmp_tuple_element_56 );
    PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_56 );
    tmp_tuple_element_56 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BYTE );

    if (unlikely( tmp_tuple_element_56 == NULL ))
    {
        tmp_tuple_element_56 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BYTE );
    }

    if ( tmp_tuple_element_56 == NULL )
    {
        Py_DECREF( tmp_assattr_name_56 );
        Py_DECREF( tmp_list_element_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BYTE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 314;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_56 );
    PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_56 );
    PyList_SET_ITEM( tmp_assattr_name_56, 20, tmp_list_element_29 );
    tmp_list_element_29 = PyTuple_New( 2 );
    tmp_tuple_element_57 = const_str_plain_StopBits;
    Py_INCREF( tmp_tuple_element_57 );
    PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_57 );
    tmp_tuple_element_57 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_BYTE );

    if (unlikely( tmp_tuple_element_57 == NULL ))
    {
        tmp_tuple_element_57 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BYTE );
    }

    if ( tmp_tuple_element_57 == NULL )
    {
        Py_DECREF( tmp_assattr_name_56 );
        Py_DECREF( tmp_list_element_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BYTE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 315;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_57 );
    PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_57 );
    PyList_SET_ITEM( tmp_assattr_name_56, 21, tmp_list_element_29 );
    tmp_list_element_29 = PyTuple_New( 2 );
    tmp_tuple_element_58 = const_str_plain_XonChar;
    Py_INCREF( tmp_tuple_element_58 );
    PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_58 );
    tmp_tuple_element_58 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_char );

    if (unlikely( tmp_tuple_element_58 == NULL ))
    {
        tmp_tuple_element_58 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_char );
    }

    if ( tmp_tuple_element_58 == NULL )
    {
        Py_DECREF( tmp_assattr_name_56 );
        Py_DECREF( tmp_list_element_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "c_char" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 316;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_58 );
    PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_58 );
    PyList_SET_ITEM( tmp_assattr_name_56, 22, tmp_list_element_29 );
    tmp_list_element_29 = PyTuple_New( 2 );
    tmp_tuple_element_59 = const_str_plain_XoffChar;
    Py_INCREF( tmp_tuple_element_59 );
    PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_59 );
    tmp_tuple_element_59 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_char );

    if (unlikely( tmp_tuple_element_59 == NULL ))
    {
        tmp_tuple_element_59 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_char );
    }

    if ( tmp_tuple_element_59 == NULL )
    {
        Py_DECREF( tmp_assattr_name_56 );
        Py_DECREF( tmp_list_element_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "c_char" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 317;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_59 );
    PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_59 );
    PyList_SET_ITEM( tmp_assattr_name_56, 23, tmp_list_element_29 );
    tmp_list_element_29 = PyTuple_New( 2 );
    tmp_tuple_element_60 = const_str_plain_ErrorChar;
    Py_INCREF( tmp_tuple_element_60 );
    PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_60 );
    tmp_tuple_element_60 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_char );

    if (unlikely( tmp_tuple_element_60 == NULL ))
    {
        tmp_tuple_element_60 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_char );
    }

    if ( tmp_tuple_element_60 == NULL )
    {
        Py_DECREF( tmp_assattr_name_56 );
        Py_DECREF( tmp_list_element_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "c_char" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 318;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_60 );
    PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_60 );
    PyList_SET_ITEM( tmp_assattr_name_56, 24, tmp_list_element_29 );
    tmp_list_element_29 = PyTuple_New( 2 );
    tmp_tuple_element_61 = const_str_plain_EofChar;
    Py_INCREF( tmp_tuple_element_61 );
    PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_61 );
    tmp_tuple_element_61 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_char );

    if (unlikely( tmp_tuple_element_61 == NULL ))
    {
        tmp_tuple_element_61 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_char );
    }

    if ( tmp_tuple_element_61 == NULL )
    {
        Py_DECREF( tmp_assattr_name_56 );
        Py_DECREF( tmp_list_element_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "c_char" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 319;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_61 );
    PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_61 );
    PyList_SET_ITEM( tmp_assattr_name_56, 25, tmp_list_element_29 );
    tmp_list_element_29 = PyTuple_New( 2 );
    tmp_tuple_element_62 = const_str_plain_EvtChar;
    Py_INCREF( tmp_tuple_element_62 );
    PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_62 );
    tmp_tuple_element_62 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_c_char );

    if (unlikely( tmp_tuple_element_62 == NULL ))
    {
        tmp_tuple_element_62 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_c_char );
    }

    if ( tmp_tuple_element_62 == NULL )
    {
        Py_DECREF( tmp_assattr_name_56 );
        Py_DECREF( tmp_list_element_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "c_char" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 320;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_62 );
    PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_62 );
    PyList_SET_ITEM( tmp_assattr_name_56, 26, tmp_list_element_29 );
    tmp_list_element_29 = PyTuple_New( 2 );
    tmp_tuple_element_63 = const_str_plain_wReserved1;
    Py_INCREF( tmp_tuple_element_63 );
    PyTuple_SET_ITEM( tmp_list_element_29, 0, tmp_tuple_element_63 );
    tmp_tuple_element_63 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_WORD );

    if (unlikely( tmp_tuple_element_63 == NULL ))
    {
        tmp_tuple_element_63 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WORD );
    }

    if ( tmp_tuple_element_63 == NULL )
    {
        Py_DECREF( tmp_assattr_name_56 );
        Py_DECREF( tmp_list_element_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 321;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_63 );
    PyTuple_SET_ITEM( tmp_list_element_29, 1, tmp_tuple_element_63 );
    PyList_SET_ITEM( tmp_assattr_name_56, 27, tmp_list_element_29 );
    tmp_assattr_target_56 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__DCB );

    if (unlikely( tmp_assattr_target_56 == NULL ))
    {
        tmp_assattr_target_56 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__DCB );
    }

    if ( tmp_assattr_target_56 == NULL )
    {
        Py_DECREF( tmp_assattr_name_56 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_DCB" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 293;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_56, const_str_plain__fields_, tmp_assattr_name_56 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_56 );

        exception_lineno = 293;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_56 );
    tmp_assattr_name_57 = PyList_New( 5 );
    tmp_list_element_30 = PyTuple_New( 2 );
    tmp_tuple_element_64 = const_str_plain_ReadIntervalTimeout;
    Py_INCREF( tmp_tuple_element_64 );
    PyTuple_SET_ITEM( tmp_list_element_30, 0, tmp_tuple_element_64 );
    tmp_tuple_element_64 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_64 == NULL ))
    {
        tmp_tuple_element_64 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_64 == NULL )
    {
        Py_DECREF( tmp_assattr_name_57 );
        Py_DECREF( tmp_list_element_30 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 324;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_64 );
    PyTuple_SET_ITEM( tmp_list_element_30, 1, tmp_tuple_element_64 );
    PyList_SET_ITEM( tmp_assattr_name_57, 0, tmp_list_element_30 );
    tmp_list_element_30 = PyTuple_New( 2 );
    tmp_tuple_element_65 = const_str_plain_ReadTotalTimeoutMultiplier;
    Py_INCREF( tmp_tuple_element_65 );
    PyTuple_SET_ITEM( tmp_list_element_30, 0, tmp_tuple_element_65 );
    tmp_tuple_element_65 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_65 == NULL ))
    {
        tmp_tuple_element_65 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_65 == NULL )
    {
        Py_DECREF( tmp_assattr_name_57 );
        Py_DECREF( tmp_list_element_30 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 325;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_65 );
    PyTuple_SET_ITEM( tmp_list_element_30, 1, tmp_tuple_element_65 );
    PyList_SET_ITEM( tmp_assattr_name_57, 1, tmp_list_element_30 );
    tmp_list_element_30 = PyTuple_New( 2 );
    tmp_tuple_element_66 = const_str_plain_ReadTotalTimeoutConstant;
    Py_INCREF( tmp_tuple_element_66 );
    PyTuple_SET_ITEM( tmp_list_element_30, 0, tmp_tuple_element_66 );
    tmp_tuple_element_66 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_66 == NULL ))
    {
        tmp_tuple_element_66 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_66 == NULL )
    {
        Py_DECREF( tmp_assattr_name_57 );
        Py_DECREF( tmp_list_element_30 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 326;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_66 );
    PyTuple_SET_ITEM( tmp_list_element_30, 1, tmp_tuple_element_66 );
    PyList_SET_ITEM( tmp_assattr_name_57, 2, tmp_list_element_30 );
    tmp_list_element_30 = PyTuple_New( 2 );
    tmp_tuple_element_67 = const_str_plain_WriteTotalTimeoutMultiplier;
    Py_INCREF( tmp_tuple_element_67 );
    PyTuple_SET_ITEM( tmp_list_element_30, 0, tmp_tuple_element_67 );
    tmp_tuple_element_67 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_67 == NULL ))
    {
        tmp_tuple_element_67 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_67 == NULL )
    {
        Py_DECREF( tmp_assattr_name_57 );
        Py_DECREF( tmp_list_element_30 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 327;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_67 );
    PyTuple_SET_ITEM( tmp_list_element_30, 1, tmp_tuple_element_67 );
    PyList_SET_ITEM( tmp_assattr_name_57, 3, tmp_list_element_30 );
    tmp_list_element_30 = PyTuple_New( 2 );
    tmp_tuple_element_68 = const_str_plain_WriteTotalTimeoutConstant;
    Py_INCREF( tmp_tuple_element_68 );
    PyTuple_SET_ITEM( tmp_list_element_30, 0, tmp_tuple_element_68 );
    tmp_tuple_element_68 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_tuple_element_68 == NULL ))
    {
        tmp_tuple_element_68 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_tuple_element_68 == NULL )
    {
        Py_DECREF( tmp_assattr_name_57 );
        Py_DECREF( tmp_list_element_30 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 328;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_68 );
    PyTuple_SET_ITEM( tmp_list_element_30, 1, tmp_tuple_element_68 );
    PyList_SET_ITEM( tmp_assattr_name_57, 4, tmp_list_element_30 );
    tmp_assattr_target_57 = GET_STRING_DICT_VALUE( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain__COMMTIMEOUTS );

    if (unlikely( tmp_assattr_target_57 == NULL ))
    {
        tmp_assattr_target_57 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__COMMTIMEOUTS );
    }

    if ( tmp_assattr_target_57 == NULL )
    {
        Py_DECREF( tmp_assattr_name_57 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_COMMTIMEOUTS" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 323;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_57, const_str_plain__fields_, tmp_assattr_name_57 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_57 );

        exception_lineno = 323;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_57 );

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif
    popFrameStack();

    assertFrameObject( frame_module );
    Py_DECREF( frame_module );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 1
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
    tmp_assign_source_161 = LIST_COPY( const_list_5fe71ecb740c0898f445980823e1ece2_list );
    UPDATE_STRING_DICT1( moduledict_serial$win32, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_161 );

    return MOD_RETURN_VALUE( module_serial$win32 );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
