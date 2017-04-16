/* Generated code for Python source for module 'usb.backend'
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

/* The _module_usb$backend is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_usb$backend;
PyDictObject *moduledict_usb$backend;

/* The module constants used, if any. */
static PyObject *const_str_digest_699b9beb38aac1202bdc21fe2956ea56;
extern PyObject *const_str_plain_metaclass;
static PyObject *const_str_digest_29ec33d1eb421285473c323adfdf4467;
static PyObject *const_str_digest_59081a502748ea898dfe8aa1c2734cb9;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_open_device;
static PyObject *const_str_digest_532f6baacff967f864bf4e4ed600ce2c;
static PyObject *const_list_19149b97b067a8d192ed58046f4ada60_list;
static PyObject *const_tuple_str_plain_self_str_plain_dev_str_plain_config_tuple;
extern PyObject *const_dict_empty;
static PyObject *const_str_digest_1670909b0126afc2c0f85e4d5bdd927d;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_140d48040c56dc88ecdb465bd508ac5e;
extern PyObject *const_str_plain_openusb;
static PyObject *const_str_digest_89a8650f844702d7c9eb4f9c23549bfe;
static PyObject *const_str_digest_c95d770713e8cf7271d2aea01688f1ce;
static PyObject *const_str_digest_182202ffdd6b5beb73152db19fc38e1d;
extern PyObject *const_str_plain_reset_device;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain_set_configuration;
extern PyObject *const_str_plain_altsetting;
static PyObject *const_str_digest_38faa23fd2cf49bf5ffb69cbf2c7c497;
static PyObject *const_tuple_str_plain_func_tuple;
static PyObject *const_list_str_digest_4259261bac478415da0971917a2ac365_list;
static PyObject *const_str_digest_9150da279f7f8de208e04ffe54df5c8a;
extern PyObject *const_str_plain_func;
extern PyObject *const_str_plain_iso_read;
static PyObject *const_str_digest_519e981d7f219482ecd2971ba56d8c16;
static PyObject *const_str_digest_f3c8799b018b5bcd824d938b3376a624;
extern PyObject *const_str_plain_clear_halt;
extern PyObject *const_str_plain_dev;
static PyObject *const_str_digest_4f79654f6245d5ae6c6660dcaca43a41;
static PyObject *const_str_digest_8c41572330ce8fcfada37bcf9d882b2a;
static PyObject *const_str_digest_870174f9b1713761e1038118a76f72f6;
static PyObject *const_str_digest_a98fec0b0561ad70783d03480849ab81;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_timeout;
static PyObject *const_str_plain_libusb01;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_get_endpoint_descriptor;
extern PyObject *const_str_plain___package__;
static PyObject *const_str_digest_4259261bac478415da0971917a2ac365;
static PyObject *const_tuple_18533bf7883f633c648b4304ee4641d1_tuple;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_digest_5dcbb0ba4004ac8b442827a30c2ae165;
static PyObject *const_tuple_2f69b1f39c084e96c980ecb282e0f312_tuple;
extern PyObject *const_str_plain_get_device_descriptor;
extern PyObject *const_str_digest_cecab58f61a043640186a696eaaa5f29;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_digest_df7178bd44cd40eb0a7672d3ae23f374;
extern PyObject *const_str_plain_iso_write;
extern PyObject *const_tuple_efffade7ae9b5cd00539b355eeeb6f95_tuple;
extern PyObject *const_str_plain_attach_kernel_driver;
extern PyObject *const_str_plain_IBackend;
extern PyObject *const_str_digest_1aee2a014f8416c1b3c39706f3f900c9;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_dde594e6be7c4850462a3fe99fa574ad;
static PyObject *const_str_digest_d93b1cb28c71eb7286cd243216f7709a;
extern PyObject *const_str_plain_intf;
extern PyObject *const_str_plain_wValue;
extern PyObject *const_str_plain___loader__;
extern PyObject *const_str_plain_close_device;
extern PyObject *const_str_plain_dev_handle;
static PyObject *const_str_plain__not_implemented;
static PyObject *const_str_digest_3cf5451955a118a63fcbf88839c9eaeb;
static PyObject *const_str_digest_818f35d0439844c428227d94900101bd;
static PyObject *const_str_digest_04159589ff4c5f187d273da3cce036ba;
static PyObject *const_str_digest_11f513d4d1b3879bc8b582b9102ee4f7;
extern PyObject *const_str_plain_wIndex;
static PyObject *const_tuple_8b49b5c76331178cff2a6cc8f4ac641e_tuple;
static PyObject *const_str_digest_007147c8b52bf9a6b736b136f346f783;
static PyObject *const_str_digest_761c3a54945f8a19d366b59a8615109a;
extern PyObject *const_str_plain_config;
extern PyObject *const_tuple_str_plain_self_str_plain_dev_handle_str_plain_config_value_tuple;
static PyObject *const_str_digest_c521141721896d31f6c75deed948f372;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_detach_kernel_driver;
static PyObject *const_str_digest_d68ce3eb0a31b9e67e47be7dc1a48066;
extern PyObject *const_str_plain_set_interface_altsetting;
static PyObject *const_str_digest_9da18fd6bf6603f0c9ee1762d888591e;
extern PyObject *const_str_plain_intr_read;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_release_interface;
static PyObject *const_str_digest_9644c77b99711d7ccb267aa37e8939cc;
static PyObject *const_str_plain_libusb10;
extern PyObject *const_tuple_str_plain_self_str_plain_dev_handle_str_plain_ep_tuple;
extern PyObject *const_str_plain_bulk_write;
extern PyObject *const_str_plain___author__;
static PyObject *const_str_digest_b95d38ca718480f5b7e832a8c8df63e1;
static PyObject *const_str_digest_afac2f76eb0d35fd76a873cac0885298;
extern PyObject *const_tuple_str_plain_self_str_plain_dev_tuple;
static PyObject *const_str_digest_fe0d1fed80a3c1db26247226d55ba112;
static PyObject *const_str_digest_8fa87d060b6814d9cc20f851143afc6b;
static PyObject *const_str_digest_44bf25e0508feb541594fd9876391c49;
extern PyObject *const_str_plain_buff;
static PyObject *const_str_digest_d447043197d1887a209215993c5b1956;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_bRequest;
extern PyObject *const_str_plain_bulk_read;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
extern PyObject *const_tuple_67f58bedd9529e5170fd06245e7b62c5_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_tuple_782e846dc4a7d7dc61330c0b260b32d3_tuple;
static PyObject *const_str_digest_c02e589fafe14d2f98326d64f02394fc;
static PyObject *const_tuple_b30e50bcd1b352abd25e43b4ee33be72_tuple;
extern PyObject *const_str_digest_5bbee6da59ae775b4d41a4d151116643;
extern PyObject *const_str_plain_backend;
extern PyObject *const_str_plain_ctrl_transfer;
extern PyObject *const_str_plain_bmRequestType;
extern PyObject *const_str_plain_ep;
extern PyObject *const_str_plain_get_configuration;
extern PyObject *const_str_plain_get_interface_descriptor;
extern PyObject *const_str_plain_get_configuration_descriptor;
static PyObject *const_str_digest_930a4813424fd41e3f094bbbe17beee6;
static PyObject *const_str_digest_b1076b8c7dc25b9c3486d04578b8e051;
extern PyObject *const_str_plain_is_kernel_driver_active;
extern PyObject *const_str_plain_AutoFinalizedObject;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_str_digest_388c32be186e09878552e2d35d935af1;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_bc0619380fa921594dccca7fc2a2f0f1;
static PyObject *const_str_digest_57e04d2ec53e96832e2e20cc88113b85;
static PyObject *const_str_digest_ad71cca57af5ad7fba50477b3aaf8c80;
extern PyObject *const_str_plain_enumerate_devices;
extern PyObject *const_str_plain_intr_write;
static PyObject *const_str_digest_008b6742a4dd5e03ebdaeb66e444f8cf;
extern PyObject *const_str_plain_config_value;
extern PyObject *const_str_plain_alt;
static PyObject *const_str_digest_622a035a8c38c5567df2fbc20e62d4f9;
static PyObject *const_str_digest_04f585843cb3dc95e139fa37256489ff;
extern PyObject *const_tuple_str_plain_self_str_plain_dev_handle_tuple;
extern PyObject *const_str_plain_claim_interface;
static PyObject *const_str_digest_e57cb99e4a8ee4855e31e8351ea684b8;
static PyObject *const_str_digest_ac69f2ebc6e59de9bcf7d51d6f20c698;
extern PyObject *const_str_plain__objfinalizer;
extern PyObject *const_tuple_str_plain_self_str_plain_dev_handle_str_plain_intf_tuple;
static PyObject *const_str_digest_3d929e7f0cff1c311da041bb4acb2719;
extern PyObject *const_str_plain___annotations__;
extern PyObject *const_str_digest_41507b2ec8c448a4d6dcb155a5052359;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_699b9beb38aac1202bdc21fe2956ea56 = UNSTREAM_STRING( &constant_bin[ 74998 ], 29, 0 );
    const_str_digest_29ec33d1eb421285473c323adfdf4467 = UNSTREAM_STRING( &constant_bin[ 75027 ], 56, 0 );
    const_str_digest_59081a502748ea898dfe8aa1c2734cb9 = UNSTREAM_STRING( &constant_bin[ 75083 ], 18, 0 );
    const_str_digest_532f6baacff967f864bf4e4ed600ce2c = UNSTREAM_STRING( &constant_bin[ 75101 ], 587, 0 );
    const_list_19149b97b067a8d192ed58046f4ada60_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_19149b97b067a8d192ed58046f4ada60_list, 0, const_str_plain_IBackend ); Py_INCREF( const_str_plain_IBackend );
    const_str_plain_libusb01 = UNSTREAM_STRING( &constant_bin[ 75688 ], 8, 1 );
    PyList_SET_ITEM( const_list_19149b97b067a8d192ed58046f4ada60_list, 1, const_str_plain_libusb01 ); Py_INCREF( const_str_plain_libusb01 );
    const_str_plain_libusb10 = UNSTREAM_STRING( &constant_bin[ 75696 ], 8, 1 );
    PyList_SET_ITEM( const_list_19149b97b067a8d192ed58046f4ada60_list, 2, const_str_plain_libusb10 ); Py_INCREF( const_str_plain_libusb10 );
    PyList_SET_ITEM( const_list_19149b97b067a8d192ed58046f4ada60_list, 3, const_str_plain_openusb ); Py_INCREF( const_str_plain_openusb );
    const_tuple_str_plain_self_str_plain_dev_str_plain_config_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_dev_str_plain_config_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_dev_str_plain_config_tuple, 1, const_str_plain_dev ); Py_INCREF( const_str_plain_dev );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_dev_str_plain_config_tuple, 2, const_str_plain_config ); Py_INCREF( const_str_plain_config );
    const_str_digest_1670909b0126afc2c0f85e4d5bdd927d = UNSTREAM_STRING( &constant_bin[ 75704 ], 33, 0 );
    const_str_digest_140d48040c56dc88ecdb465bd508ac5e = UNSTREAM_STRING( &constant_bin[ 75737 ], 585, 0 );
    const_str_digest_89a8650f844702d7c9eb4f9c23549bfe = UNSTREAM_STRING( &constant_bin[ 76322 ], 21, 0 );
    const_str_digest_c95d770713e8cf7271d2aea01688f1ce = UNSTREAM_STRING( &constant_bin[ 76343 ], 539, 0 );
    const_str_digest_182202ffdd6b5beb73152db19fc38e1d = UNSTREAM_STRING( &constant_bin[ 76882 ], 18, 0 );
    const_str_digest_38faa23fd2cf49bf5ffb69cbf2c7c497 = UNSTREAM_STRING( &constant_bin[ 76900 ], 24, 0 );
    const_tuple_str_plain_func_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_func_tuple, 0, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    const_list_str_digest_4259261bac478415da0971917a2ac365_list = PyList_New( 1 );
    const_str_digest_4259261bac478415da0971917a2ac365 = UNSTREAM_STRING( &constant_bin[ 75027 ], 44, 0 );
    PyList_SET_ITEM( const_list_str_digest_4259261bac478415da0971917a2ac365_list, 0, const_str_digest_4259261bac478415da0971917a2ac365 ); Py_INCREF( const_str_digest_4259261bac478415da0971917a2ac365 );
    const_str_digest_9150da279f7f8de208e04ffe54df5c8a = UNSTREAM_STRING( &constant_bin[ 76924 ], 549, 0 );
    const_str_digest_519e981d7f219482ecd2971ba56d8c16 = UNSTREAM_STRING( &constant_bin[ 77473 ], 26, 0 );
    const_str_digest_f3c8799b018b5bcd824d938b3376a624 = UNSTREAM_STRING( &constant_bin[ 77499 ], 547, 0 );
    const_str_digest_4f79654f6245d5ae6c6660dcaca43a41 = UNSTREAM_STRING( &constant_bin[ 78046 ], 21, 0 );
    const_str_digest_8c41572330ce8fcfada37bcf9d882b2a = UNSTREAM_STRING( &constant_bin[ 78067 ], 30, 0 );
    const_str_digest_870174f9b1713761e1038118a76f72f6 = UNSTREAM_STRING( &constant_bin[ 78097 ], 32, 0 );
    const_str_digest_a98fec0b0561ad70783d03480849ab81 = UNSTREAM_STRING( &constant_bin[ 78129 ], 107, 0 );
    const_tuple_18533bf7883f633c648b4304ee4641d1_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_18533bf7883f633c648b4304ee4641d1_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_18533bf7883f633c648b4304ee4641d1_tuple, 1, const_str_plain_dev_handle ); Py_INCREF( const_str_plain_dev_handle );
    PyTuple_SET_ITEM( const_tuple_18533bf7883f633c648b4304ee4641d1_tuple, 2, const_str_plain_bmRequestType ); Py_INCREF( const_str_plain_bmRequestType );
    PyTuple_SET_ITEM( const_tuple_18533bf7883f633c648b4304ee4641d1_tuple, 3, const_str_plain_bRequest ); Py_INCREF( const_str_plain_bRequest );
    PyTuple_SET_ITEM( const_tuple_18533bf7883f633c648b4304ee4641d1_tuple, 4, const_str_plain_wValue ); Py_INCREF( const_str_plain_wValue );
    PyTuple_SET_ITEM( const_tuple_18533bf7883f633c648b4304ee4641d1_tuple, 5, const_str_plain_wIndex ); Py_INCREF( const_str_plain_wIndex );
    PyTuple_SET_ITEM( const_tuple_18533bf7883f633c648b4304ee4641d1_tuple, 6, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_18533bf7883f633c648b4304ee4641d1_tuple, 7, const_str_plain_timeout ); Py_INCREF( const_str_plain_timeout );
    const_str_digest_5dcbb0ba4004ac8b442827a30c2ae165 = UNSTREAM_STRING( &constant_bin[ 78236 ], 19, 0 );
    const_tuple_2f69b1f39c084e96c980ecb282e0f312_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_2f69b1f39c084e96c980ecb282e0f312_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_2f69b1f39c084e96c980ecb282e0f312_tuple, 1, const_str_plain_dev_handle ); Py_INCREF( const_str_plain_dev_handle );
    PyTuple_SET_ITEM( const_tuple_2f69b1f39c084e96c980ecb282e0f312_tuple, 2, const_str_plain_ep ); Py_INCREF( const_str_plain_ep );
    PyTuple_SET_ITEM( const_tuple_2f69b1f39c084e96c980ecb282e0f312_tuple, 3, const_str_plain_intf ); Py_INCREF( const_str_plain_intf );
    PyTuple_SET_ITEM( const_tuple_2f69b1f39c084e96c980ecb282e0f312_tuple, 4, const_str_plain_size ); Py_INCREF( const_str_plain_size );
    PyTuple_SET_ITEM( const_tuple_2f69b1f39c084e96c980ecb282e0f312_tuple, 5, const_str_plain_timeout ); Py_INCREF( const_str_plain_timeout );
    const_str_digest_df7178bd44cd40eb0a7672d3ae23f374 = UNSTREAM_STRING( &constant_bin[ 78255 ], 510, 0 );
    const_str_digest_dde594e6be7c4850462a3fe99fa574ad = UNSTREAM_STRING( &constant_bin[ 78765 ], 18, 0 );
    const_str_digest_d93b1cb28c71eb7286cd243216f7709a = UNSTREAM_STRING( &constant_bin[ 78783 ], 131, 0 );
    const_str_plain__not_implemented = UNSTREAM_STRING( &constant_bin[ 78914 ], 16, 1 );
    const_str_digest_3cf5451955a118a63fcbf88839c9eaeb = UNSTREAM_STRING( &constant_bin[ 78930 ], 384, 0 );
    const_str_digest_818f35d0439844c428227d94900101bd = UNSTREAM_STRING( &constant_bin[ 79314 ], 720, 0 );
    const_str_digest_04159589ff4c5f187d273da3cce036ba = UNSTREAM_STRING( &constant_bin[ 80034 ], 19, 0 );
    const_str_digest_11f513d4d1b3879bc8b582b9102ee4f7 = UNSTREAM_STRING( &constant_bin[ 80053 ], 541, 0 );
    const_tuple_8b49b5c76331178cff2a6cc8f4ac641e_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_8b49b5c76331178cff2a6cc8f4ac641e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_8b49b5c76331178cff2a6cc8f4ac641e_tuple, 1, const_str_plain_dev ); Py_INCREF( const_str_plain_dev );
    PyTuple_SET_ITEM( const_tuple_8b49b5c76331178cff2a6cc8f4ac641e_tuple, 2, const_str_plain_intf ); Py_INCREF( const_str_plain_intf );
    PyTuple_SET_ITEM( const_tuple_8b49b5c76331178cff2a6cc8f4ac641e_tuple, 3, const_str_plain_alt ); Py_INCREF( const_str_plain_alt );
    PyTuple_SET_ITEM( const_tuple_8b49b5c76331178cff2a6cc8f4ac641e_tuple, 4, const_str_plain_config ); Py_INCREF( const_str_plain_config );
    const_str_digest_007147c8b52bf9a6b736b136f346f783 = UNSTREAM_STRING( &constant_bin[ 80594 ], 286, 0 );
    const_str_digest_761c3a54945f8a19d366b59a8615109a = UNSTREAM_STRING( &constant_bin[ 80880 ], 363, 0 );
    const_str_digest_c521141721896d31f6c75deed948f372 = UNSTREAM_STRING( &constant_bin[ 81243 ], 33, 0 );
    const_str_digest_d68ce3eb0a31b9e67e47be7dc1a48066 = UNSTREAM_STRING( &constant_bin[ 81276 ], 362, 0 );
    const_str_digest_9da18fd6bf6603f0c9ee1762d888591e = UNSTREAM_STRING( &constant_bin[ 81638 ], 144, 0 );
    const_str_digest_9644c77b99711d7ccb267aa37e8939cc = UNSTREAM_STRING( &constant_bin[ 81782 ], 19, 0 );
    const_str_digest_b95d38ca718480f5b7e832a8c8df63e1 = UNSTREAM_STRING( &constant_bin[ 81801 ], 190, 0 );
    const_str_digest_afac2f76eb0d35fd76a873cac0885298 = UNSTREAM_STRING( &constant_bin[ 81991 ], 29, 0 );
    const_str_digest_fe0d1fed80a3c1db26247226d55ba112 = UNSTREAM_STRING( &constant_bin[ 82020 ], 17, 0 );
    const_str_digest_8fa87d060b6814d9cc20f851143afc6b = UNSTREAM_STRING( &constant_bin[ 82037 ], 22, 0 );
    const_str_digest_44bf25e0508feb541594fd9876391c49 = UNSTREAM_STRING( &constant_bin[ 82059 ], 151, 0 );
    const_str_digest_d447043197d1887a209215993c5b1956 = UNSTREAM_STRING( &constant_bin[ 82210 ], 48, 0 );
    const_str_digest_c02e589fafe14d2f98326d64f02394fc = UNSTREAM_STRING( &constant_bin[ 82258 ], 581, 0 );
    const_tuple_b30e50bcd1b352abd25e43b4ee33be72_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_b30e50bcd1b352abd25e43b4ee33be72_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_b30e50bcd1b352abd25e43b4ee33be72_tuple, 1, const_str_plain_dev ); Py_INCREF( const_str_plain_dev );
    PyTuple_SET_ITEM( const_tuple_b30e50bcd1b352abd25e43b4ee33be72_tuple, 2, const_str_plain_ep ); Py_INCREF( const_str_plain_ep );
    PyTuple_SET_ITEM( const_tuple_b30e50bcd1b352abd25e43b4ee33be72_tuple, 3, const_str_plain_intf ); Py_INCREF( const_str_plain_intf );
    PyTuple_SET_ITEM( const_tuple_b30e50bcd1b352abd25e43b4ee33be72_tuple, 4, const_str_plain_alt ); Py_INCREF( const_str_plain_alt );
    PyTuple_SET_ITEM( const_tuple_b30e50bcd1b352abd25e43b4ee33be72_tuple, 5, const_str_plain_config ); Py_INCREF( const_str_plain_config );
    const_str_digest_930a4813424fd41e3f094bbbe17beee6 = UNSTREAM_STRING( &constant_bin[ 82839 ], 455, 0 );
    const_str_digest_b1076b8c7dc25b9c3486d04578b8e051 = UNSTREAM_STRING( &constant_bin[ 83294 ], 861, 0 );
    const_str_digest_388c32be186e09878552e2d35d935af1 = UNSTREAM_STRING( &constant_bin[ 84155 ], 1341, 0 );
    const_str_digest_bc0619380fa921594dccca7fc2a2f0f1 = UNSTREAM_STRING( &constant_bin[ 85496 ], 348, 0 );
    const_str_digest_57e04d2ec53e96832e2e20cc88113b85 = UNSTREAM_STRING( &constant_bin[ 85844 ], 32, 0 );
    const_str_digest_ad71cca57af5ad7fba50477b3aaf8c80 = UNSTREAM_STRING( &constant_bin[ 85876 ], 26, 0 );
    const_str_digest_008b6742a4dd5e03ebdaeb66e444f8cf = UNSTREAM_STRING( &constant_bin[ 85902 ], 581, 0 );
    const_str_digest_622a035a8c38c5567df2fbc20e62d4f9 = UNSTREAM_STRING( &constant_bin[ 86483 ], 37, 0 );
    const_str_digest_04f585843cb3dc95e139fa37256489ff = UNSTREAM_STRING( &constant_bin[ 86520 ], 26, 0 );
    const_str_digest_e57cb99e4a8ee4855e31e8351ea684b8 = UNSTREAM_STRING( &constant_bin[ 86546 ], 26, 0 );
    const_str_digest_ac69f2ebc6e59de9bcf7d51d6f20c698 = UNSTREAM_STRING( &constant_bin[ 86572 ], 334, 0 );
    const_str_digest_3d929e7f0cff1c311da041bb4acb2719 = UNSTREAM_STRING( &constant_bin[ 86906 ], 20, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_usb$backend( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_0825dc9dfebf1bfa4ec7f86058b923e3;
static PyCodeObject *codeobj_c3cc6ee28c919c14d0963f61c81713b0;
static PyCodeObject *codeobj_5b95e828b76d31c2a0ab6a8798151f7b;
static PyCodeObject *codeobj_44f83e4e1bad788b4612723f656d7103;
static PyCodeObject *codeobj_cb563f552fb3f97bb27690cda95db579;
static PyCodeObject *codeobj_be08d0ce056ad822b5a90042e63c76a3;
static PyCodeObject *codeobj_e5422eaec25fb895721f7aca47598d9e;
static PyCodeObject *codeobj_b04f5e510f93d8880a68d33638c268b6;
static PyCodeObject *codeobj_69ce0f18f9f6b92f201316a473c64d29;
static PyCodeObject *codeobj_080ca63b38fe8e52bf746547a9078e9a;
static PyCodeObject *codeobj_09fbe087c72d1fac8529b0185a102934;
static PyCodeObject *codeobj_b220bd0a298654104fc4ed5d353e2d23;
static PyCodeObject *codeobj_74ea6d317735dec7f8efcbd3e2bc5906;
static PyCodeObject *codeobj_2d02c72d84efcb7d4d229ec88bbba68b;
static PyCodeObject *codeobj_1039833f9ffacf4483e9ef7426eeb33a;
static PyCodeObject *codeobj_f95ec36fc2a10746d657dfa7c24565df;
static PyCodeObject *codeobj_d8ad8c6445ccb743213d35cac07c0820;
static PyCodeObject *codeobj_b8d5cb2ea08b919e71c66264ef95913e;
static PyCodeObject *codeobj_320a4fdbe30fc07dd508f5cd98063680;
static PyCodeObject *codeobj_21188c7d830f41aec489c8e49a51e2d3;
static PyCodeObject *codeobj_7e262607d953c5ef7e617dc38cd25b54;
static PyCodeObject *codeobj_8b8e13ba92b8d114a8a0ea384b9c7ba8;
static PyCodeObject *codeobj_45b915fdd4b1042b4f4044cc710ea681;
static PyCodeObject *codeobj_264172f611d7958fc41bf52c7142a2ba;
static PyCodeObject *codeobj_79a81201cd3feae212dabe857eb4a677;
static PyCodeObject *codeobj_6dd5911c3dbffee88e3b5f7819f2fb3c;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_29ec33d1eb421285473c323adfdf4467;
    codeobj_0825dc9dfebf1bfa4ec7f86058b923e3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__not_implemented, 80, const_tuple_str_plain_func_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c3cc6ee28c919c14d0963f61c81713b0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_attach_kernel_driver, 375, const_tuple_str_plain_self_str_plain_dev_handle_str_plain_intf_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5b95e828b76d31c2a0ab6a8798151f7b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_backend, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_44f83e4e1bad788b4612723f656d7103 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_bulk_read, 249, const_tuple_67f58bedd9529e5170fd06245e7b62c5_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cb563f552fb3f97bb27690cda95db579 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_bulk_write, 234, const_tuple_782e846dc4a7d7dc61330c0b260b32d3_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_be08d0ce056ad822b5a90042e63c76a3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_claim_interface, 213, const_tuple_str_plain_self_str_plain_dev_handle_str_plain_intf_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e5422eaec25fb895721f7aca47598d9e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_clear_halt, 351, const_tuple_str_plain_self_str_plain_dev_handle_str_plain_ep_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b04f5e510f93d8880a68d33638c268b6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_close_device, 174, const_tuple_str_plain_self_str_plain_dev_handle_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_69ce0f18f9f6b92f201316a473c64d29 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ctrl_transfer, 324, const_tuple_18533bf7883f633c648b4304ee4641d1_tuple, 8, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_080ca63b38fe8e52bf746547a9078e9a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_detach_kernel_driver, 367, const_tuple_str_plain_self_str_plain_dev_handle_str_plain_intf_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_09fbe087c72d1fac8529b0185a102934 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_enumerate_devices, 97, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b220bd0a298654104fc4ed5d353e2d23 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_configuration, 192, const_tuple_str_plain_self_str_plain_dev_handle_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_74ea6d317735dec7f8efcbd3e2bc5906 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_configuration_descriptor, 119, const_tuple_str_plain_self_str_plain_dev_str_plain_config_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2d02c72d84efcb7d4d229ec88bbba68b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_device_descriptor, 107, const_tuple_str_plain_self_str_plain_dev_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1039833f9ffacf4483e9ef7426eeb33a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_endpoint_descriptor, 149, const_tuple_b30e50bcd1b352abd25e43b4ee33be72_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f95ec36fc2a10746d657dfa7c24565df = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_interface_descriptor, 133, const_tuple_8b49b5c76331178cff2a6cc8f4ac641e_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d8ad8c6445ccb743213d35cac07c0820 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_intr_read, 279, const_tuple_2f69b1f39c084e96c980ecb282e0f312_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b8d5cb2ea08b919e71c66264ef95913e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_intr_write, 264, const_tuple_782e846dc4a7d7dc61330c0b260b32d3_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_320a4fdbe30fc07dd508f5cd98063680 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_is_kernel_driver_active, 359, const_tuple_str_plain_self_str_plain_dev_handle_str_plain_intf_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_21188c7d830f41aec489c8e49a51e2d3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_iso_read, 309, const_tuple_2f69b1f39c084e96c980ecb282e0f312_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7e262607d953c5ef7e617dc38cd25b54 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_iso_write, 294, const_tuple_782e846dc4a7d7dc61330c0b260b32d3_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8b8e13ba92b8d114a8a0ea384b9c7ba8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_open_device, 162, const_tuple_str_plain_self_str_plain_dev_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_45b915fdd4b1042b4f4044cc710ea681 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_release_interface, 226, const_tuple_str_plain_self_str_plain_dev_handle_str_plain_intf_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_264172f611d7958fc41bf52c7142a2ba = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reset_device, 355, const_tuple_str_plain_self_str_plain_dev_handle_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_79a81201cd3feae212dabe857eb4a677 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_configuration, 182, const_tuple_str_plain_self_str_plain_dev_handle_str_plain_config_value_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6dd5911c3dbffee88e3b5f7819f2fb3c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_interface_altsetting, 203, const_tuple_efffade7ae9b5cd00539b355eeeb6f95_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_usb$backend$$$class_1_IBackend( PyObject **python_pars, PyObject ** closure_usb$backend_class_creation_1__bases, PyObject ** closure_usb$backend_class_creation_1__class_decl_dict, PyObject ** closure_usb$backend_class_creation_1__metaclass, PyObject ** closure_usb$backend_class_creation_1__prepared );


static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_10_set_interface_altsetting(  );


static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_11_claim_interface(  );


static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_12_release_interface(  );


static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_13_bulk_write(  );


static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_14_bulk_read(  );


static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_15_intr_write(  );


static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_16_intr_read(  );


static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_17_iso_write(  );


static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_18_iso_read(  );


static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_19_ctrl_transfer(  );


static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_1_enumerate_devices(  );


static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_20_clear_halt(  );


static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_21_reset_device(  );


static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_22_is_kernel_driver_active(  );


static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_23_detach_kernel_driver(  );


static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_24_attach_kernel_driver(  );


static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_2_get_device_descriptor(  );


static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_3_get_configuration_descriptor(  );


static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_4_get_interface_descriptor(  );


static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_5_get_endpoint_descriptor(  );


static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_6_open_device(  );


static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_7_close_device(  );


static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_8_set_configuration(  );


static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_9_get_configuration(  );


static PyObject *MAKE_FUNCTION_usb$backend$$$function_1__not_implemented(  );


// The module function definitions.
static PyObject *impl_usb$backend$$$function_1__not_implemented( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[ 0 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_0825dc9dfebf1bfa4ec7f86058b923e3, module_usb$backend );
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
    tmp_source_name_1 = par_func;

    tmp_make_exception_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___name__ );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 81;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_NotImplementedError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 81;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;

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

            tmp_frame_locals = PyDict_New();
            if ( par_func )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_func,
                    par_func
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
    NUITKA_CANNOT_GET_HERE( usb$backend$$$function_1__not_implemented );
    return NULL;
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

    Py_XDECREF( par_func );
    par_func = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( usb$backend$$$function_1__not_implemented );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


NUITKA_LOCAL_MODULE PyObject *impl_usb$backend$$$class_1_IBackend( PyObject **python_pars, PyObject ** closure_usb$backend_class_creation_1__bases, PyObject ** closure_usb$backend_class_creation_1__class_decl_dict, PyObject ** closure_usb$backend_class_creation_1__metaclass, PyObject ** closure_usb$backend_class_creation_1__prepared )
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
    PyObject *var___doc__ = NULL;
    PyObject *var___qualname__ = NULL;
    PyObject *var_enumerate_devices = NULL;
    PyObject *var_get_device_descriptor = NULL;
    PyObject *var_get_configuration_descriptor = NULL;
    PyObject *var_get_interface_descriptor = NULL;
    PyObject *var_get_endpoint_descriptor = NULL;
    PyObject *var_open_device = NULL;
    PyObject *var_close_device = NULL;
    PyObject *var_set_configuration = NULL;
    PyObject *var_get_configuration = NULL;
    PyObject *var_set_interface_altsetting = NULL;
    PyObject *var_claim_interface = NULL;
    PyObject *var_release_interface = NULL;
    PyObject *var_bulk_write = NULL;
    PyObject *var_bulk_read = NULL;
    PyObject *var_intr_write = NULL;
    PyObject *var_intr_read = NULL;
    PyObject *var_iso_write = NULL;
    PyObject *var_iso_read = NULL;
    PyObject *var_ctrl_transfer = NULL;
    PyObject *var_clear_halt = NULL;
    PyObject *var_reset_device = NULL;
    PyObject *var_is_kernel_driver_active = NULL;
    PyObject *var_detach_kernel_driver = NULL;
    PyObject *var_attach_kernel_driver = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_set_locals;
    PyObject *tmp_tuple_element_1;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_set_locals = *closure_usb$backend_class_creation_1__prepared;

    Py_DECREF(locals_dict);
    locals_dict = tmp_set_locals;
    Py_INCREF(locals_dict);
    tmp_assign_source_1 = const_str_digest_41507b2ec8c448a4d6dcb155a5052359;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_c95d770713e8cf7271d2aea01688f1ce;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_plain_IBackend;
    assert( var___qualname__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___qualname__ = tmp_assign_source_3;

    tmp_assign_source_4 = MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_1_enumerate_devices(  );
    assert( var_enumerate_devices == NULL );
    var_enumerate_devices = tmp_assign_source_4;

    tmp_assign_source_5 = MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_2_get_device_descriptor(  );
    assert( var_get_device_descriptor == NULL );
    var_get_device_descriptor = tmp_assign_source_5;

    tmp_assign_source_6 = MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_3_get_configuration_descriptor(  );
    assert( var_get_configuration_descriptor == NULL );
    var_get_configuration_descriptor = tmp_assign_source_6;

    tmp_assign_source_7 = MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_4_get_interface_descriptor(  );
    assert( var_get_interface_descriptor == NULL );
    var_get_interface_descriptor = tmp_assign_source_7;

    tmp_assign_source_8 = MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_5_get_endpoint_descriptor(  );
    assert( var_get_endpoint_descriptor == NULL );
    var_get_endpoint_descriptor = tmp_assign_source_8;

    tmp_assign_source_9 = MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_6_open_device(  );
    assert( var_open_device == NULL );
    var_open_device = tmp_assign_source_9;

    tmp_assign_source_10 = MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_7_close_device(  );
    assert( var_close_device == NULL );
    var_close_device = tmp_assign_source_10;

    tmp_assign_source_11 = MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_8_set_configuration(  );
    assert( var_set_configuration == NULL );
    var_set_configuration = tmp_assign_source_11;

    tmp_assign_source_12 = MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_9_get_configuration(  );
    assert( var_get_configuration == NULL );
    var_get_configuration = tmp_assign_source_12;

    tmp_assign_source_13 = MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_10_set_interface_altsetting(  );
    assert( var_set_interface_altsetting == NULL );
    var_set_interface_altsetting = tmp_assign_source_13;

    tmp_assign_source_14 = MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_11_claim_interface(  );
    assert( var_claim_interface == NULL );
    var_claim_interface = tmp_assign_source_14;

    tmp_assign_source_15 = MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_12_release_interface(  );
    assert( var_release_interface == NULL );
    var_release_interface = tmp_assign_source_15;

    tmp_assign_source_16 = MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_13_bulk_write(  );
    assert( var_bulk_write == NULL );
    var_bulk_write = tmp_assign_source_16;

    tmp_assign_source_17 = MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_14_bulk_read(  );
    assert( var_bulk_read == NULL );
    var_bulk_read = tmp_assign_source_17;

    tmp_assign_source_18 = MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_15_intr_write(  );
    assert( var_intr_write == NULL );
    var_intr_write = tmp_assign_source_18;

    tmp_assign_source_19 = MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_16_intr_read(  );
    assert( var_intr_read == NULL );
    var_intr_read = tmp_assign_source_19;

    tmp_assign_source_20 = MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_17_iso_write(  );
    assert( var_iso_write == NULL );
    var_iso_write = tmp_assign_source_20;

    tmp_assign_source_21 = MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_18_iso_read(  );
    assert( var_iso_read == NULL );
    var_iso_read = tmp_assign_source_21;

    tmp_assign_source_22 = MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_19_ctrl_transfer(  );
    assert( var_ctrl_transfer == NULL );
    var_ctrl_transfer = tmp_assign_source_22;

    tmp_assign_source_23 = MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_20_clear_halt(  );
    assert( var_clear_halt == NULL );
    var_clear_halt = tmp_assign_source_23;

    tmp_assign_source_24 = MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_21_reset_device(  );
    assert( var_reset_device == NULL );
    var_reset_device = tmp_assign_source_24;

    tmp_assign_source_25 = MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_22_is_kernel_driver_active(  );
    assert( var_is_kernel_driver_active == NULL );
    var_is_kernel_driver_active = tmp_assign_source_25;

    tmp_assign_source_26 = MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_23_detach_kernel_driver(  );
    assert( var_detach_kernel_driver == NULL );
    var_detach_kernel_driver = tmp_assign_source_26;

    tmp_assign_source_27 = MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_24_attach_kernel_driver(  );
    assert( var_attach_kernel_driver == NULL );
    var_attach_kernel_driver = tmp_assign_source_27;

    // Tried code:
    tmp_called_name_1 = *closure_usb$backend_class_creation_1__metaclass;

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_str_plain_IBackend;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = *closure_usb$backend_class_creation_1__bases;

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
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain___doc__, var___doc__ );

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
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_enumerate_devices, var_enumerate_devices );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_get_device_descriptor, var_get_device_descriptor );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_get_configuration_descriptor, var_get_configuration_descriptor );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_get_interface_descriptor, var_get_interface_descriptor );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_get_endpoint_descriptor, var_get_endpoint_descriptor );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_open_device, var_open_device );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_close_device, var_close_device );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_set_configuration, var_set_configuration );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_get_configuration, var_get_configuration );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_set_interface_altsetting, var_set_interface_altsetting );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_claim_interface, var_claim_interface );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_release_interface, var_release_interface );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_bulk_write, var_bulk_write );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_bulk_read, var_bulk_read );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_intr_write, var_intr_write );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_intr_read, var_intr_read );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_iso_write, var_iso_write );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_iso_read, var_iso_read );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_ctrl_transfer, var_ctrl_transfer );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_clear_halt, var_clear_halt );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_reset_device, var_reset_device );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_is_kernel_driver_active, var_is_kernel_driver_active );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_detach_kernel_driver, var_detach_kernel_driver );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    tmp_result = MAPPING_SYNC_FROM_VARIABLE( tmp_tuple_element_1, const_str_plain_attach_kernel_driver, var_attach_kernel_driver );

    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );


        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = *closure_usb$backend_class_creation_1__class_decl_dict;

    tmp_assign_source_28 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto try_except_handler_1;
    }
    assert( var___class__ == NULL );
    var___class__ = tmp_assign_source_28;

    tmp_return_value = var___class__;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___class__ );
    Py_DECREF( var___class__ );
    var___class__ = NULL;

    Py_XDECREF( var___module__ );
    var___module__ = NULL;

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var_enumerate_devices );
    var_enumerate_devices = NULL;

    Py_XDECREF( var_get_device_descriptor );
    var_get_device_descriptor = NULL;

    Py_XDECREF( var_get_configuration_descriptor );
    var_get_configuration_descriptor = NULL;

    Py_XDECREF( var_get_interface_descriptor );
    var_get_interface_descriptor = NULL;

    Py_XDECREF( var_get_endpoint_descriptor );
    var_get_endpoint_descriptor = NULL;

    Py_XDECREF( var_open_device );
    var_open_device = NULL;

    Py_XDECREF( var_close_device );
    var_close_device = NULL;

    Py_XDECREF( var_set_configuration );
    var_set_configuration = NULL;

    Py_XDECREF( var_get_configuration );
    var_get_configuration = NULL;

    Py_XDECREF( var_set_interface_altsetting );
    var_set_interface_altsetting = NULL;

    Py_XDECREF( var_claim_interface );
    var_claim_interface = NULL;

    Py_XDECREF( var_release_interface );
    var_release_interface = NULL;

    Py_XDECREF( var_bulk_write );
    var_bulk_write = NULL;

    Py_XDECREF( var_bulk_read );
    var_bulk_read = NULL;

    Py_XDECREF( var_intr_write );
    var_intr_write = NULL;

    Py_XDECREF( var_intr_read );
    var_intr_read = NULL;

    Py_XDECREF( var_iso_write );
    var_iso_write = NULL;

    Py_XDECREF( var_iso_read );
    var_iso_read = NULL;

    Py_XDECREF( var_ctrl_transfer );
    var_ctrl_transfer = NULL;

    Py_XDECREF( var_clear_halt );
    var_clear_halt = NULL;

    Py_XDECREF( var_reset_device );
    var_reset_device = NULL;

    Py_XDECREF( var_is_kernel_driver_active );
    var_is_kernel_driver_active = NULL;

    Py_XDECREF( var_detach_kernel_driver );
    var_detach_kernel_driver = NULL;

    Py_XDECREF( var_attach_kernel_driver );
    var_attach_kernel_driver = NULL;

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

    Py_XDECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var___qualname__ );
    var___qualname__ = NULL;

    Py_XDECREF( var_enumerate_devices );
    var_enumerate_devices = NULL;

    Py_XDECREF( var_get_device_descriptor );
    var_get_device_descriptor = NULL;

    Py_XDECREF( var_get_configuration_descriptor );
    var_get_configuration_descriptor = NULL;

    Py_XDECREF( var_get_interface_descriptor );
    var_get_interface_descriptor = NULL;

    Py_XDECREF( var_get_endpoint_descriptor );
    var_get_endpoint_descriptor = NULL;

    Py_XDECREF( var_open_device );
    var_open_device = NULL;

    Py_XDECREF( var_close_device );
    var_close_device = NULL;

    Py_XDECREF( var_set_configuration );
    var_set_configuration = NULL;

    Py_XDECREF( var_get_configuration );
    var_get_configuration = NULL;

    Py_XDECREF( var_set_interface_altsetting );
    var_set_interface_altsetting = NULL;

    Py_XDECREF( var_claim_interface );
    var_claim_interface = NULL;

    Py_XDECREF( var_release_interface );
    var_release_interface = NULL;

    Py_XDECREF( var_bulk_write );
    var_bulk_write = NULL;

    Py_XDECREF( var_bulk_read );
    var_bulk_read = NULL;

    Py_XDECREF( var_intr_write );
    var_intr_write = NULL;

    Py_XDECREF( var_intr_read );
    var_intr_read = NULL;

    Py_XDECREF( var_iso_write );
    var_iso_write = NULL;

    Py_XDECREF( var_iso_read );
    var_iso_read = NULL;

    Py_XDECREF( var_ctrl_transfer );
    var_ctrl_transfer = NULL;

    Py_XDECREF( var_clear_halt );
    var_clear_halt = NULL;

    Py_XDECREF( var_reset_device );
    var_reset_device = NULL;

    Py_XDECREF( var_is_kernel_driver_active );
    var_is_kernel_driver_active = NULL;

    Py_XDECREF( var_detach_kernel_driver );
    var_detach_kernel_driver = NULL;

    Py_XDECREF( var_attach_kernel_driver );
    var_attach_kernel_driver = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend );
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


static PyObject *impl_usb$backend$$$class_1_IBackend$$$function_1_enumerate_devices( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_09fbe087c72d1fac8529b0185a102934, module_usb$backend );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_usb$backend, (Nuitka_StringObject *)const_str_plain__not_implemented );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__not_implemented );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_not_implemented" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 105;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_enumerate_devices );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 105;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_1_enumerate_devices );
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
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_1_enumerate_devices );
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


static PyObject *impl_usb$backend$$$class_1_IBackend$$$function_2_get_device_descriptor( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dev = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_2d02c72d84efcb7d4d229ec88bbba68b, module_usb$backend );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_usb$backend, (Nuitka_StringObject *)const_str_plain__not_implemented );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__not_implemented );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_not_implemented" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 117;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get_device_descriptor );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 117;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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

            if ( par_dev )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dev,
                    par_dev
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
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_2_get_device_descriptor );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dev );
    par_dev = NULL;

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

    CHECK_OBJECT( (PyObject *)par_dev );
    Py_DECREF( par_dev );
    par_dev = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_2_get_device_descriptor );
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


static PyObject *impl_usb$backend$$$class_1_IBackend$$$function_3_get_configuration_descriptor( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dev = python_pars[ 1 ];
    PyObject *par_config = python_pars[ 2 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_74ea6d317735dec7f8efcbd3e2bc5906, module_usb$backend );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_usb$backend, (Nuitka_StringObject *)const_str_plain__not_implemented );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__not_implemented );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_not_implemented" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 131;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get_configuration_descriptor );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 131;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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

            if ( par_dev )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dev,
                    par_dev
                );

                assert( res == 0 );
            }

            if ( par_config )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_config,
                    par_config
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
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_3_get_configuration_descriptor );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dev );
    par_dev = NULL;

    Py_XDECREF( par_config );
    par_config = NULL;

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

    CHECK_OBJECT( (PyObject *)par_dev );
    Py_DECREF( par_dev );
    par_dev = NULL;

    CHECK_OBJECT( (PyObject *)par_config );
    Py_DECREF( par_config );
    par_config = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_3_get_configuration_descriptor );
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


static PyObject *impl_usb$backend$$$class_1_IBackend$$$function_4_get_interface_descriptor( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dev = python_pars[ 1 ];
    PyObject *par_intf = python_pars[ 2 ];
    PyObject *par_alt = python_pars[ 3 ];
    PyObject *par_config = python_pars[ 4 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f95ec36fc2a10746d657dfa7c24565df, module_usb$backend );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_usb$backend, (Nuitka_StringObject *)const_str_plain__not_implemented );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__not_implemented );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_not_implemented" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 147;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get_interface_descriptor );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 147;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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

            if ( par_dev )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dev,
                    par_dev
                );

                assert( res == 0 );
            }

            if ( par_intf )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_intf,
                    par_intf
                );

                assert( res == 0 );
            }

            if ( par_alt )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_alt,
                    par_alt
                );

                assert( res == 0 );
            }

            if ( par_config )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_config,
                    par_config
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
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_4_get_interface_descriptor );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dev );
    par_dev = NULL;

    Py_XDECREF( par_intf );
    par_intf = NULL;

    Py_XDECREF( par_alt );
    par_alt = NULL;

    Py_XDECREF( par_config );
    par_config = NULL;

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

    CHECK_OBJECT( (PyObject *)par_dev );
    Py_DECREF( par_dev );
    par_dev = NULL;

    CHECK_OBJECT( (PyObject *)par_intf );
    Py_DECREF( par_intf );
    par_intf = NULL;

    CHECK_OBJECT( (PyObject *)par_alt );
    Py_DECREF( par_alt );
    par_alt = NULL;

    CHECK_OBJECT( (PyObject *)par_config );
    Py_DECREF( par_config );
    par_config = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_4_get_interface_descriptor );
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


static PyObject *impl_usb$backend$$$class_1_IBackend$$$function_5_get_endpoint_descriptor( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dev = python_pars[ 1 ];
    PyObject *par_ep = python_pars[ 2 ];
    PyObject *par_intf = python_pars[ 3 ];
    PyObject *par_alt = python_pars[ 4 ];
    PyObject *par_config = python_pars[ 5 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1039833f9ffacf4483e9ef7426eeb33a, module_usb$backend );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_usb$backend, (Nuitka_StringObject *)const_str_plain__not_implemented );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__not_implemented );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_not_implemented" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 160;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get_endpoint_descriptor );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 160;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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

            if ( par_dev )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dev,
                    par_dev
                );

                assert( res == 0 );
            }

            if ( par_ep )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ep,
                    par_ep
                );

                assert( res == 0 );
            }

            if ( par_intf )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_intf,
                    par_intf
                );

                assert( res == 0 );
            }

            if ( par_alt )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_alt,
                    par_alt
                );

                assert( res == 0 );
            }

            if ( par_config )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_config,
                    par_config
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
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_5_get_endpoint_descriptor );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dev );
    par_dev = NULL;

    Py_XDECREF( par_ep );
    par_ep = NULL;

    Py_XDECREF( par_intf );
    par_intf = NULL;

    Py_XDECREF( par_alt );
    par_alt = NULL;

    Py_XDECREF( par_config );
    par_config = NULL;

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

    CHECK_OBJECT( (PyObject *)par_dev );
    Py_DECREF( par_dev );
    par_dev = NULL;

    CHECK_OBJECT( (PyObject *)par_ep );
    Py_DECREF( par_ep );
    par_ep = NULL;

    CHECK_OBJECT( (PyObject *)par_intf );
    Py_DECREF( par_intf );
    par_intf = NULL;

    CHECK_OBJECT( (PyObject *)par_alt );
    Py_DECREF( par_alt );
    par_alt = NULL;

    CHECK_OBJECT( (PyObject *)par_config );
    Py_DECREF( par_config );
    par_config = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_5_get_endpoint_descriptor );
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


static PyObject *impl_usb$backend$$$class_1_IBackend$$$function_6_open_device( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dev = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_8b8e13ba92b8d114a8a0ea384b9c7ba8, module_usb$backend );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_usb$backend, (Nuitka_StringObject *)const_str_plain__not_implemented );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__not_implemented );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_not_implemented" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 172;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_open_device );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 172;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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

            if ( par_dev )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dev,
                    par_dev
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
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_6_open_device );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dev );
    par_dev = NULL;

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

    CHECK_OBJECT( (PyObject *)par_dev );
    Py_DECREF( par_dev );
    par_dev = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_6_open_device );
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


static PyObject *impl_usb$backend$$$class_1_IBackend$$$function_7_close_device( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dev_handle = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b04f5e510f93d8880a68d33638c268b6, module_usb$backend );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_usb$backend, (Nuitka_StringObject *)const_str_plain__not_implemented );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__not_implemented );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_not_implemented" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_close_device );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 180;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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

            if ( par_dev_handle )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dev_handle,
                    par_dev_handle
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
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_7_close_device );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dev_handle );
    par_dev_handle = NULL;

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

    CHECK_OBJECT( (PyObject *)par_dev_handle );
    Py_DECREF( par_dev_handle );
    par_dev_handle = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_7_close_device );
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


static PyObject *impl_usb$backend$$$class_1_IBackend$$$function_8_set_configuration( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dev_handle = python_pars[ 1 ];
    PyObject *par_config_value = python_pars[ 2 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_79a81201cd3feae212dabe857eb4a677, module_usb$backend );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_usb$backend, (Nuitka_StringObject *)const_str_plain__not_implemented );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__not_implemented );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_not_implemented" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 190;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_set_configuration );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 190;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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

            if ( par_dev_handle )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dev_handle,
                    par_dev_handle
                );

                assert( res == 0 );
            }

            if ( par_config_value )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_config_value,
                    par_config_value
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
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_8_set_configuration );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dev_handle );
    par_dev_handle = NULL;

    Py_XDECREF( par_config_value );
    par_config_value = NULL;

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

    CHECK_OBJECT( (PyObject *)par_dev_handle );
    Py_DECREF( par_dev_handle );
    par_dev_handle = NULL;

    CHECK_OBJECT( (PyObject *)par_config_value );
    Py_DECREF( par_config_value );
    par_config_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_8_set_configuration );
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


static PyObject *impl_usb$backend$$$class_1_IBackend$$$function_9_get_configuration( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dev_handle = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b220bd0a298654104fc4ed5d353e2d23, module_usb$backend );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_usb$backend, (Nuitka_StringObject *)const_str_plain__not_implemented );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__not_implemented );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_not_implemented" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 201;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get_configuration );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 201;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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

            if ( par_dev_handle )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dev_handle,
                    par_dev_handle
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
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_9_get_configuration );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dev_handle );
    par_dev_handle = NULL;

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

    CHECK_OBJECT( (PyObject *)par_dev_handle );
    Py_DECREF( par_dev_handle );
    par_dev_handle = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_9_get_configuration );
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


static PyObject *impl_usb$backend$$$class_1_IBackend$$$function_10_set_interface_altsetting( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dev_handle = python_pars[ 1 ];
    PyObject *par_intf = python_pars[ 2 ];
    PyObject *par_altsetting = python_pars[ 3 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_6dd5911c3dbffee88e3b5f7819f2fb3c, module_usb$backend );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_usb$backend, (Nuitka_StringObject *)const_str_plain__not_implemented );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__not_implemented );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_not_implemented" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 211;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_set_interface_altsetting );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 211;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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

            if ( par_dev_handle )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dev_handle,
                    par_dev_handle
                );

                assert( res == 0 );
            }

            if ( par_intf )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_intf,
                    par_intf
                );

                assert( res == 0 );
            }

            if ( par_altsetting )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_altsetting,
                    par_altsetting
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
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_10_set_interface_altsetting );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dev_handle );
    par_dev_handle = NULL;

    Py_XDECREF( par_intf );
    par_intf = NULL;

    Py_XDECREF( par_altsetting );
    par_altsetting = NULL;

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

    CHECK_OBJECT( (PyObject *)par_dev_handle );
    Py_DECREF( par_dev_handle );
    par_dev_handle = NULL;

    CHECK_OBJECT( (PyObject *)par_intf );
    Py_DECREF( par_intf );
    par_intf = NULL;

    CHECK_OBJECT( (PyObject *)par_altsetting );
    Py_DECREF( par_altsetting );
    par_altsetting = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_10_set_interface_altsetting );
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


static PyObject *impl_usb$backend$$$class_1_IBackend$$$function_11_claim_interface( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dev_handle = python_pars[ 1 ];
    PyObject *par_intf = python_pars[ 2 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_be08d0ce056ad822b5a90042e63c76a3, module_usb$backend );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_usb$backend, (Nuitka_StringObject *)const_str_plain__not_implemented );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__not_implemented );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_not_implemented" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 224;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_claim_interface );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 224;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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

            if ( par_dev_handle )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dev_handle,
                    par_dev_handle
                );

                assert( res == 0 );
            }

            if ( par_intf )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_intf,
                    par_intf
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
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_11_claim_interface );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dev_handle );
    par_dev_handle = NULL;

    Py_XDECREF( par_intf );
    par_intf = NULL;

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

    CHECK_OBJECT( (PyObject *)par_dev_handle );
    Py_DECREF( par_dev_handle );
    par_dev_handle = NULL;

    CHECK_OBJECT( (PyObject *)par_intf );
    Py_DECREF( par_intf );
    par_intf = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_11_claim_interface );
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


static PyObject *impl_usb$backend$$$class_1_IBackend$$$function_12_release_interface( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dev_handle = python_pars[ 1 ];
    PyObject *par_intf = python_pars[ 2 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_45b915fdd4b1042b4f4044cc710ea681, module_usb$backend );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_usb$backend, (Nuitka_StringObject *)const_str_plain__not_implemented );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__not_implemented );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_not_implemented" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 232;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_release_interface );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 232;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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

            if ( par_dev_handle )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dev_handle,
                    par_dev_handle
                );

                assert( res == 0 );
            }

            if ( par_intf )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_intf,
                    par_intf
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
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_12_release_interface );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dev_handle );
    par_dev_handle = NULL;

    Py_XDECREF( par_intf );
    par_intf = NULL;

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

    CHECK_OBJECT( (PyObject *)par_dev_handle );
    Py_DECREF( par_dev_handle );
    par_dev_handle = NULL;

    CHECK_OBJECT( (PyObject *)par_intf );
    Py_DECREF( par_intf );
    par_intf = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_12_release_interface );
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


static PyObject *impl_usb$backend$$$class_1_IBackend$$$function_13_bulk_write( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dev_handle = python_pars[ 1 ];
    PyObject *par_ep = python_pars[ 2 ];
    PyObject *par_intf = python_pars[ 3 ];
    PyObject *par_data = python_pars[ 4 ];
    PyObject *par_timeout = python_pars[ 5 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_cb563f552fb3f97bb27690cda95db579, module_usb$backend );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_usb$backend, (Nuitka_StringObject *)const_str_plain__not_implemented );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__not_implemented );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_not_implemented" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 247;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_bulk_write );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 247;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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

            if ( par_dev_handle )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dev_handle,
                    par_dev_handle
                );

                assert( res == 0 );
            }

            if ( par_ep )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ep,
                    par_ep
                );

                assert( res == 0 );
            }

            if ( par_intf )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_intf,
                    par_intf
                );

                assert( res == 0 );
            }

            if ( par_data )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_data,
                    par_data
                );

                assert( res == 0 );
            }

            if ( par_timeout )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_timeout,
                    par_timeout
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
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_13_bulk_write );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dev_handle );
    par_dev_handle = NULL;

    Py_XDECREF( par_ep );
    par_ep = NULL;

    Py_XDECREF( par_intf );
    par_intf = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    Py_XDECREF( par_timeout );
    par_timeout = NULL;

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

    CHECK_OBJECT( (PyObject *)par_dev_handle );
    Py_DECREF( par_dev_handle );
    par_dev_handle = NULL;

    CHECK_OBJECT( (PyObject *)par_ep );
    Py_DECREF( par_ep );
    par_ep = NULL;

    CHECK_OBJECT( (PyObject *)par_intf );
    Py_DECREF( par_intf );
    par_intf = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_13_bulk_write );
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


static PyObject *impl_usb$backend$$$class_1_IBackend$$$function_14_bulk_read( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dev_handle = python_pars[ 1 ];
    PyObject *par_ep = python_pars[ 2 ];
    PyObject *par_intf = python_pars[ 3 ];
    PyObject *par_buff = python_pars[ 4 ];
    PyObject *par_timeout = python_pars[ 5 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_44f83e4e1bad788b4612723f656d7103, module_usb$backend );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_usb$backend, (Nuitka_StringObject *)const_str_plain__not_implemented );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__not_implemented );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_not_implemented" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 262;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_bulk_read );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 262;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 262;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 262;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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

            if ( par_dev_handle )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dev_handle,
                    par_dev_handle
                );

                assert( res == 0 );
            }

            if ( par_ep )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ep,
                    par_ep
                );

                assert( res == 0 );
            }

            if ( par_intf )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_intf,
                    par_intf
                );

                assert( res == 0 );
            }

            if ( par_buff )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_buff,
                    par_buff
                );

                assert( res == 0 );
            }

            if ( par_timeout )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_timeout,
                    par_timeout
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
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_14_bulk_read );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dev_handle );
    par_dev_handle = NULL;

    Py_XDECREF( par_ep );
    par_ep = NULL;

    Py_XDECREF( par_intf );
    par_intf = NULL;

    Py_XDECREF( par_buff );
    par_buff = NULL;

    Py_XDECREF( par_timeout );
    par_timeout = NULL;

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

    CHECK_OBJECT( (PyObject *)par_dev_handle );
    Py_DECREF( par_dev_handle );
    par_dev_handle = NULL;

    CHECK_OBJECT( (PyObject *)par_ep );
    Py_DECREF( par_ep );
    par_ep = NULL;

    CHECK_OBJECT( (PyObject *)par_intf );
    Py_DECREF( par_intf );
    par_intf = NULL;

    CHECK_OBJECT( (PyObject *)par_buff );
    Py_DECREF( par_buff );
    par_buff = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_14_bulk_read );
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


static PyObject *impl_usb$backend$$$class_1_IBackend$$$function_15_intr_write( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dev_handle = python_pars[ 1 ];
    PyObject *par_ep = python_pars[ 2 ];
    PyObject *par_intf = python_pars[ 3 ];
    PyObject *par_data = python_pars[ 4 ];
    PyObject *par_timeout = python_pars[ 5 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b8d5cb2ea08b919e71c66264ef95913e, module_usb$backend );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_usb$backend, (Nuitka_StringObject *)const_str_plain__not_implemented );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__not_implemented );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_not_implemented" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 277;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_intr_write );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 277;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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

            if ( par_dev_handle )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dev_handle,
                    par_dev_handle
                );

                assert( res == 0 );
            }

            if ( par_ep )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ep,
                    par_ep
                );

                assert( res == 0 );
            }

            if ( par_intf )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_intf,
                    par_intf
                );

                assert( res == 0 );
            }

            if ( par_data )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_data,
                    par_data
                );

                assert( res == 0 );
            }

            if ( par_timeout )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_timeout,
                    par_timeout
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
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_15_intr_write );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dev_handle );
    par_dev_handle = NULL;

    Py_XDECREF( par_ep );
    par_ep = NULL;

    Py_XDECREF( par_intf );
    par_intf = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    Py_XDECREF( par_timeout );
    par_timeout = NULL;

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

    CHECK_OBJECT( (PyObject *)par_dev_handle );
    Py_DECREF( par_dev_handle );
    par_dev_handle = NULL;

    CHECK_OBJECT( (PyObject *)par_ep );
    Py_DECREF( par_ep );
    par_ep = NULL;

    CHECK_OBJECT( (PyObject *)par_intf );
    Py_DECREF( par_intf );
    par_intf = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_15_intr_write );
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


static PyObject *impl_usb$backend$$$class_1_IBackend$$$function_16_intr_read( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dev_handle = python_pars[ 1 ];
    PyObject *par_ep = python_pars[ 2 ];
    PyObject *par_intf = python_pars[ 3 ];
    PyObject *par_size = python_pars[ 4 ];
    PyObject *par_timeout = python_pars[ 5 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d8ad8c6445ccb743213d35cac07c0820, module_usb$backend );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_usb$backend, (Nuitka_StringObject *)const_str_plain__not_implemented );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__not_implemented );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_not_implemented" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 292;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_intr_read );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 292;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 292;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 292;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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

            if ( par_dev_handle )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dev_handle,
                    par_dev_handle
                );

                assert( res == 0 );
            }

            if ( par_ep )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ep,
                    par_ep
                );

                assert( res == 0 );
            }

            if ( par_intf )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_intf,
                    par_intf
                );

                assert( res == 0 );
            }

            if ( par_size )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_size,
                    par_size
                );

                assert( res == 0 );
            }

            if ( par_timeout )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_timeout,
                    par_timeout
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
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_16_intr_read );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dev_handle );
    par_dev_handle = NULL;

    Py_XDECREF( par_ep );
    par_ep = NULL;

    Py_XDECREF( par_intf );
    par_intf = NULL;

    Py_XDECREF( par_size );
    par_size = NULL;

    Py_XDECREF( par_timeout );
    par_timeout = NULL;

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

    CHECK_OBJECT( (PyObject *)par_dev_handle );
    Py_DECREF( par_dev_handle );
    par_dev_handle = NULL;

    CHECK_OBJECT( (PyObject *)par_ep );
    Py_DECREF( par_ep );
    par_ep = NULL;

    CHECK_OBJECT( (PyObject *)par_intf );
    Py_DECREF( par_intf );
    par_intf = NULL;

    CHECK_OBJECT( (PyObject *)par_size );
    Py_DECREF( par_size );
    par_size = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_16_intr_read );
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


static PyObject *impl_usb$backend$$$class_1_IBackend$$$function_17_iso_write( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dev_handle = python_pars[ 1 ];
    PyObject *par_ep = python_pars[ 2 ];
    PyObject *par_intf = python_pars[ 3 ];
    PyObject *par_data = python_pars[ 4 ];
    PyObject *par_timeout = python_pars[ 5 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7e262607d953c5ef7e617dc38cd25b54, module_usb$backend );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_usb$backend, (Nuitka_StringObject *)const_str_plain__not_implemented );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__not_implemented );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_not_implemented" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 307;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_iso_write );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 307;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 307;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 307;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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

            if ( par_dev_handle )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dev_handle,
                    par_dev_handle
                );

                assert( res == 0 );
            }

            if ( par_ep )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ep,
                    par_ep
                );

                assert( res == 0 );
            }

            if ( par_intf )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_intf,
                    par_intf
                );

                assert( res == 0 );
            }

            if ( par_data )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_data,
                    par_data
                );

                assert( res == 0 );
            }

            if ( par_timeout )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_timeout,
                    par_timeout
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
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_17_iso_write );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dev_handle );
    par_dev_handle = NULL;

    Py_XDECREF( par_ep );
    par_ep = NULL;

    Py_XDECREF( par_intf );
    par_intf = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    Py_XDECREF( par_timeout );
    par_timeout = NULL;

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

    CHECK_OBJECT( (PyObject *)par_dev_handle );
    Py_DECREF( par_dev_handle );
    par_dev_handle = NULL;

    CHECK_OBJECT( (PyObject *)par_ep );
    Py_DECREF( par_ep );
    par_ep = NULL;

    CHECK_OBJECT( (PyObject *)par_intf );
    Py_DECREF( par_intf );
    par_intf = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_17_iso_write );
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


static PyObject *impl_usb$backend$$$class_1_IBackend$$$function_18_iso_read( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dev_handle = python_pars[ 1 ];
    PyObject *par_ep = python_pars[ 2 ];
    PyObject *par_intf = python_pars[ 3 ];
    PyObject *par_size = python_pars[ 4 ];
    PyObject *par_timeout = python_pars[ 5 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_21188c7d830f41aec489c8e49a51e2d3, module_usb$backend );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_usb$backend, (Nuitka_StringObject *)const_str_plain__not_implemented );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__not_implemented );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_not_implemented" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 322;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_iso_read );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 322;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 322;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 322;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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

            if ( par_dev_handle )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dev_handle,
                    par_dev_handle
                );

                assert( res == 0 );
            }

            if ( par_ep )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ep,
                    par_ep
                );

                assert( res == 0 );
            }

            if ( par_intf )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_intf,
                    par_intf
                );

                assert( res == 0 );
            }

            if ( par_size )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_size,
                    par_size
                );

                assert( res == 0 );
            }

            if ( par_timeout )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_timeout,
                    par_timeout
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
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_18_iso_read );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dev_handle );
    par_dev_handle = NULL;

    Py_XDECREF( par_ep );
    par_ep = NULL;

    Py_XDECREF( par_intf );
    par_intf = NULL;

    Py_XDECREF( par_size );
    par_size = NULL;

    Py_XDECREF( par_timeout );
    par_timeout = NULL;

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

    CHECK_OBJECT( (PyObject *)par_dev_handle );
    Py_DECREF( par_dev_handle );
    par_dev_handle = NULL;

    CHECK_OBJECT( (PyObject *)par_ep );
    Py_DECREF( par_ep );
    par_ep = NULL;

    CHECK_OBJECT( (PyObject *)par_intf );
    Py_DECREF( par_intf );
    par_intf = NULL;

    CHECK_OBJECT( (PyObject *)par_size );
    Py_DECREF( par_size );
    par_size = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_18_iso_read );
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


static PyObject *impl_usb$backend$$$class_1_IBackend$$$function_19_ctrl_transfer( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dev_handle = python_pars[ 1 ];
    PyObject *par_bmRequestType = python_pars[ 2 ];
    PyObject *par_bRequest = python_pars[ 3 ];
    PyObject *par_wValue = python_pars[ 4 ];
    PyObject *par_wIndex = python_pars[ 5 ];
    PyObject *par_data = python_pars[ 6 ];
    PyObject *par_timeout = python_pars[ 7 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_69ce0f18f9f6b92f201316a473c64d29, module_usb$backend );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_usb$backend, (Nuitka_StringObject *)const_str_plain__not_implemented );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__not_implemented );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_not_implemented" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 349;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ctrl_transfer );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 349;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 349;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 349;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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

            if ( par_dev_handle )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dev_handle,
                    par_dev_handle
                );

                assert( res == 0 );
            }

            if ( par_bmRequestType )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_bmRequestType,
                    par_bmRequestType
                );

                assert( res == 0 );
            }

            if ( par_bRequest )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_bRequest,
                    par_bRequest
                );

                assert( res == 0 );
            }

            if ( par_wValue )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_wValue,
                    par_wValue
                );

                assert( res == 0 );
            }

            if ( par_wIndex )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_wIndex,
                    par_wIndex
                );

                assert( res == 0 );
            }

            if ( par_data )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_data,
                    par_data
                );

                assert( res == 0 );
            }

            if ( par_timeout )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_timeout,
                    par_timeout
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
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_19_ctrl_transfer );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dev_handle );
    par_dev_handle = NULL;

    Py_XDECREF( par_bmRequestType );
    par_bmRequestType = NULL;

    Py_XDECREF( par_bRequest );
    par_bRequest = NULL;

    Py_XDECREF( par_wValue );
    par_wValue = NULL;

    Py_XDECREF( par_wIndex );
    par_wIndex = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    Py_XDECREF( par_timeout );
    par_timeout = NULL;

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

    CHECK_OBJECT( (PyObject *)par_dev_handle );
    Py_DECREF( par_dev_handle );
    par_dev_handle = NULL;

    CHECK_OBJECT( (PyObject *)par_bmRequestType );
    Py_DECREF( par_bmRequestType );
    par_bmRequestType = NULL;

    CHECK_OBJECT( (PyObject *)par_bRequest );
    Py_DECREF( par_bRequest );
    par_bRequest = NULL;

    CHECK_OBJECT( (PyObject *)par_wValue );
    Py_DECREF( par_wValue );
    par_wValue = NULL;

    CHECK_OBJECT( (PyObject *)par_wIndex );
    Py_DECREF( par_wIndex );
    par_wIndex = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_19_ctrl_transfer );
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


static PyObject *impl_usb$backend$$$class_1_IBackend$$$function_20_clear_halt( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dev_handle = python_pars[ 1 ];
    PyObject *par_ep = python_pars[ 2 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e5422eaec25fb895721f7aca47598d9e, module_usb$backend );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_usb$backend, (Nuitka_StringObject *)const_str_plain__not_implemented );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__not_implemented );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_not_implemented" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 353;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_clear_halt );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 353;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 353;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 353;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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

            if ( par_dev_handle )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dev_handle,
                    par_dev_handle
                );

                assert( res == 0 );
            }

            if ( par_ep )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ep,
                    par_ep
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
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_20_clear_halt );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dev_handle );
    par_dev_handle = NULL;

    Py_XDECREF( par_ep );
    par_ep = NULL;

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

    CHECK_OBJECT( (PyObject *)par_dev_handle );
    Py_DECREF( par_dev_handle );
    par_dev_handle = NULL;

    CHECK_OBJECT( (PyObject *)par_ep );
    Py_DECREF( par_ep );
    par_ep = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_20_clear_halt );
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


static PyObject *impl_usb$backend$$$class_1_IBackend$$$function_21_reset_device( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dev_handle = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_264172f611d7958fc41bf52c7142a2ba, module_usb$backend );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_usb$backend, (Nuitka_StringObject *)const_str_plain__not_implemented );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__not_implemented );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_not_implemented" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 357;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_reset_device );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 357;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 357;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 357;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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

            if ( par_dev_handle )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dev_handle,
                    par_dev_handle
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
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_21_reset_device );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dev_handle );
    par_dev_handle = NULL;

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

    CHECK_OBJECT( (PyObject *)par_dev_handle );
    Py_DECREF( par_dev_handle );
    par_dev_handle = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_21_reset_device );
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


static PyObject *impl_usb$backend$$$class_1_IBackend$$$function_22_is_kernel_driver_active( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dev_handle = python_pars[ 1 ];
    PyObject *par_intf = python_pars[ 2 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_320a4fdbe30fc07dd508f5cd98063680, module_usb$backend );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_usb$backend, (Nuitka_StringObject *)const_str_plain__not_implemented );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__not_implemented );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_not_implemented" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 365;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_kernel_driver_active );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 365;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 365;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 365;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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

            if ( par_dev_handle )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dev_handle,
                    par_dev_handle
                );

                assert( res == 0 );
            }

            if ( par_intf )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_intf,
                    par_intf
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
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_22_is_kernel_driver_active );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dev_handle );
    par_dev_handle = NULL;

    Py_XDECREF( par_intf );
    par_intf = NULL;

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

    CHECK_OBJECT( (PyObject *)par_dev_handle );
    Py_DECREF( par_dev_handle );
    par_dev_handle = NULL;

    CHECK_OBJECT( (PyObject *)par_intf );
    Py_DECREF( par_intf );
    par_intf = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_22_is_kernel_driver_active );
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


static PyObject *impl_usb$backend$$$class_1_IBackend$$$function_23_detach_kernel_driver( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dev_handle = python_pars[ 1 ];
    PyObject *par_intf = python_pars[ 2 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_080ca63b38fe8e52bf746547a9078e9a, module_usb$backend );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_usb$backend, (Nuitka_StringObject *)const_str_plain__not_implemented );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__not_implemented );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_not_implemented" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 373;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_detach_kernel_driver );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 373;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 373;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 373;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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

            if ( par_dev_handle )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dev_handle,
                    par_dev_handle
                );

                assert( res == 0 );
            }

            if ( par_intf )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_intf,
                    par_intf
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
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_23_detach_kernel_driver );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dev_handle );
    par_dev_handle = NULL;

    Py_XDECREF( par_intf );
    par_intf = NULL;

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

    CHECK_OBJECT( (PyObject *)par_dev_handle );
    Py_DECREF( par_dev_handle );
    par_dev_handle = NULL;

    CHECK_OBJECT( (PyObject *)par_intf );
    Py_DECREF( par_intf );
    par_intf = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_23_detach_kernel_driver );
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


static PyObject *impl_usb$backend$$$class_1_IBackend$$$function_24_attach_kernel_driver( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dev_handle = python_pars[ 1 ];
    PyObject *par_intf = python_pars[ 2 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c3cc6ee28c919c14d0963f61c81713b0, module_usb$backend );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_usb$backend, (Nuitka_StringObject *)const_str_plain__not_implemented );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__not_implemented );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_not_implemented" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 378;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_attach_kernel_driver );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 378;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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

            if ( par_dev_handle )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dev_handle,
                    par_dev_handle
                );

                assert( res == 0 );
            }

            if ( par_intf )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_intf,
                    par_intf
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
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_24_attach_kernel_driver );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_dev_handle );
    par_dev_handle = NULL;

    Py_XDECREF( par_intf );
    par_intf = NULL;

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

    CHECK_OBJECT( (PyObject *)par_dev_handle );
    Py_DECREF( par_dev_handle );
    par_dev_handle = NULL;

    CHECK_OBJECT( (PyObject *)par_intf );
    Py_DECREF( par_intf );
    par_intf = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( usb$backend$$$class_1_IBackend$$$function_24_attach_kernel_driver );
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



static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_10_set_interface_altsetting(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_usb$backend$$$class_1_IBackend$$$function_10_set_interface_altsetting,
        const_str_plain_set_interface_altsetting,
#if PYTHON_VERSION >= 330
        const_str_digest_1670909b0126afc2c0f85e4d5bdd927d,
#endif
        codeobj_6dd5911c3dbffee88e3b5f7819f2fb3c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_usb$backend,
        const_str_digest_bc0619380fa921594dccca7fc2a2f0f1,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_11_claim_interface(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_usb$backend$$$class_1_IBackend$$$function_11_claim_interface,
        const_str_plain_claim_interface,
#if PYTHON_VERSION >= 330
        const_str_digest_38faa23fd2cf49bf5ffb69cbf2c7c497,
#endif
        codeobj_be08d0ce056ad822b5a90042e63c76a3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_usb$backend,
        const_str_digest_930a4813424fd41e3f094bbbe17beee6,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_12_release_interface(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_usb$backend$$$class_1_IBackend$$$function_12_release_interface,
        const_str_plain_release_interface,
#if PYTHON_VERSION >= 330
        const_str_digest_ad71cca57af5ad7fba50477b3aaf8c80,
#endif
        codeobj_45b915fdd4b1042b4f4044cc710ea681,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_usb$backend,
        const_str_digest_d93b1cb28c71eb7286cd243216f7709a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_13_bulk_write(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_usb$backend$$$class_1_IBackend$$$function_13_bulk_write,
        const_str_plain_bulk_write,
#if PYTHON_VERSION >= 330
        const_str_digest_04159589ff4c5f187d273da3cce036ba,
#endif
        codeobj_cb563f552fb3f97bb27690cda95db579,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_usb$backend,
        const_str_digest_11f513d4d1b3879bc8b582b9102ee4f7,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_14_bulk_read(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_usb$backend$$$class_1_IBackend$$$function_14_bulk_read,
        const_str_plain_bulk_read,
#if PYTHON_VERSION >= 330
        const_str_digest_dde594e6be7c4850462a3fe99fa574ad,
#endif
        codeobj_44f83e4e1bad788b4612723f656d7103,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_usb$backend,
        const_str_digest_c02e589fafe14d2f98326d64f02394fc,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_15_intr_write(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_usb$backend$$$class_1_IBackend$$$function_15_intr_write,
        const_str_plain_intr_write,
#if PYTHON_VERSION >= 330
        const_str_digest_9644c77b99711d7ccb267aa37e8939cc,
#endif
        codeobj_b8d5cb2ea08b919e71c66264ef95913e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_usb$backend,
        const_str_digest_f3c8799b018b5bcd824d938b3376a624,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_16_intr_read(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_usb$backend$$$class_1_IBackend$$$function_16_intr_read,
        const_str_plain_intr_read,
#if PYTHON_VERSION >= 330
        const_str_digest_59081a502748ea898dfe8aa1c2734cb9,
#endif
        codeobj_d8ad8c6445ccb743213d35cac07c0820,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_usb$backend,
        const_str_digest_532f6baacff967f864bf4e4ed600ce2c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_17_iso_write(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_usb$backend$$$class_1_IBackend$$$function_17_iso_write,
        const_str_plain_iso_write,
#if PYTHON_VERSION >= 330
        const_str_digest_182202ffdd6b5beb73152db19fc38e1d,
#endif
        codeobj_7e262607d953c5ef7e617dc38cd25b54,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_usb$backend,
        const_str_digest_9150da279f7f8de208e04ffe54df5c8a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_18_iso_read(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_usb$backend$$$class_1_IBackend$$$function_18_iso_read,
        const_str_plain_iso_read,
#if PYTHON_VERSION >= 330
        const_str_digest_fe0d1fed80a3c1db26247226d55ba112,
#endif
        codeobj_21188c7d830f41aec489c8e49a51e2d3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_usb$backend,
        const_str_digest_140d48040c56dc88ecdb465bd508ac5e,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_19_ctrl_transfer(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_usb$backend$$$class_1_IBackend$$$function_19_ctrl_transfer,
        const_str_plain_ctrl_transfer,
#if PYTHON_VERSION >= 330
        const_str_digest_8fa87d060b6814d9cc20f851143afc6b,
#endif
        codeobj_69ce0f18f9f6b92f201316a473c64d29,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_usb$backend,
        const_str_digest_b1076b8c7dc25b9c3486d04578b8e051,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_1_enumerate_devices(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_usb$backend$$$class_1_IBackend$$$function_1_enumerate_devices,
        const_str_plain_enumerate_devices,
#if PYTHON_VERSION >= 330
        const_str_digest_e57cb99e4a8ee4855e31e8351ea684b8,
#endif
        codeobj_09fbe087c72d1fac8529b0185a102934,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_usb$backend,
        const_str_digest_007147c8b52bf9a6b736b136f346f783,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_20_clear_halt(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_usb$backend$$$class_1_IBackend$$$function_20_clear_halt,
        const_str_plain_clear_halt,
#if PYTHON_VERSION >= 330
        const_str_digest_5dcbb0ba4004ac8b442827a30c2ae165,
#endif
        codeobj_e5422eaec25fb895721f7aca47598d9e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_usb$backend,
        const_str_digest_d447043197d1887a209215993c5b1956,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_21_reset_device(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_usb$backend$$$class_1_IBackend$$$function_21_reset_device,
        const_str_plain_reset_device,
#if PYTHON_VERSION >= 330
        const_str_digest_4f79654f6245d5ae6c6660dcaca43a41,
#endif
        codeobj_264172f611d7958fc41bf52c7142a2ba,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_usb$backend,
        const_str_digest_5bbee6da59ae775b4d41a4d151116643,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_22_is_kernel_driver_active(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_usb$backend$$$class_1_IBackend$$$function_22_is_kernel_driver_active,
        const_str_plain_is_kernel_driver_active,
#if PYTHON_VERSION >= 330
        const_str_digest_870174f9b1713761e1038118a76f72f6,
#endif
        codeobj_320a4fdbe30fc07dd508f5cd98063680,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_usb$backend,
        const_str_digest_b95d38ca718480f5b7e832a8c8df63e1,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_23_detach_kernel_driver(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_usb$backend$$$class_1_IBackend$$$function_23_detach_kernel_driver,
        const_str_plain_detach_kernel_driver,
#if PYTHON_VERSION >= 330
        const_str_digest_afac2f76eb0d35fd76a873cac0885298,
#endif
        codeobj_080ca63b38fe8e52bf746547a9078e9a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_usb$backend,
        const_str_digest_9da18fd6bf6603f0c9ee1762d888591e,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_24_attach_kernel_driver(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_usb$backend$$$class_1_IBackend$$$function_24_attach_kernel_driver,
        const_str_plain_attach_kernel_driver,
#if PYTHON_VERSION >= 330
        const_str_digest_699b9beb38aac1202bdc21fe2956ea56,
#endif
        codeobj_c3cc6ee28c919c14d0963f61c81713b0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_usb$backend,
        const_str_digest_a98fec0b0561ad70783d03480849ab81,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_2_get_device_descriptor(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_usb$backend$$$class_1_IBackend$$$function_2_get_device_descriptor,
        const_str_plain_get_device_descriptor,
#if PYTHON_VERSION >= 330
        const_str_digest_8c41572330ce8fcfada37bcf9d882b2a,
#endif
        codeobj_2d02c72d84efcb7d4d229ec88bbba68b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_usb$backend,
        const_str_digest_761c3a54945f8a19d366b59a8615109a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_3_get_configuration_descriptor(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_usb$backend$$$class_1_IBackend$$$function_3_get_configuration_descriptor,
        const_str_plain_get_configuration_descriptor,
#if PYTHON_VERSION >= 330
        const_str_digest_622a035a8c38c5567df2fbc20e62d4f9,
#endif
        codeobj_74ea6d317735dec7f8efcbd3e2bc5906,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_usb$backend,
        const_str_digest_008b6742a4dd5e03ebdaeb66e444f8cf,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_4_get_interface_descriptor(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_usb$backend$$$class_1_IBackend$$$function_4_get_interface_descriptor,
        const_str_plain_get_interface_descriptor,
#if PYTHON_VERSION >= 330
        const_str_digest_c521141721896d31f6c75deed948f372,
#endif
        codeobj_f95ec36fc2a10746d657dfa7c24565df,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_usb$backend,
        const_str_digest_818f35d0439844c428227d94900101bd,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_5_get_endpoint_descriptor(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_usb$backend$$$class_1_IBackend$$$function_5_get_endpoint_descriptor,
        const_str_plain_get_endpoint_descriptor,
#if PYTHON_VERSION >= 330
        const_str_digest_57e04d2ec53e96832e2e20cc88113b85,
#endif
        codeobj_1039833f9ffacf4483e9ef7426eeb33a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_usb$backend,
        const_str_digest_df7178bd44cd40eb0a7672d3ae23f374,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_6_open_device(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_usb$backend$$$class_1_IBackend$$$function_6_open_device,
        const_str_plain_open_device,
#if PYTHON_VERSION >= 330
        const_str_digest_3d929e7f0cff1c311da041bb4acb2719,
#endif
        codeobj_8b8e13ba92b8d114a8a0ea384b9c7ba8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_usb$backend,
        const_str_digest_3cf5451955a118a63fcbf88839c9eaeb,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_7_close_device(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_usb$backend$$$class_1_IBackend$$$function_7_close_device,
        const_str_plain_close_device,
#if PYTHON_VERSION >= 330
        const_str_digest_89a8650f844702d7c9eb4f9c23549bfe,
#endif
        codeobj_b04f5e510f93d8880a68d33638c268b6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_usb$backend,
        const_str_digest_44bf25e0508feb541594fd9876391c49,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_8_set_configuration(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_usb$backend$$$class_1_IBackend$$$function_8_set_configuration,
        const_str_plain_set_configuration,
#if PYTHON_VERSION >= 330
        const_str_digest_04f585843cb3dc95e139fa37256489ff,
#endif
        codeobj_79a81201cd3feae212dabe857eb4a677,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_usb$backend,
        const_str_digest_ac69f2ebc6e59de9bcf7d51d6f20c698,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_usb$backend$$$class_1_IBackend$$$function_9_get_configuration(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_usb$backend$$$class_1_IBackend$$$function_9_get_configuration,
        const_str_plain_get_configuration,
#if PYTHON_VERSION >= 330
        const_str_digest_519e981d7f219482ecd2971ba56d8c16,
#endif
        codeobj_b220bd0a298654104fc4ed5d353e2d23,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_usb$backend,
        const_str_digest_d68ce3eb0a31b9e67e47be7dc1a48066,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_usb$backend$$$function_1__not_implemented(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_usb$backend$$$function_1__not_implemented,
        const_str_plain__not_implemented,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0825dc9dfebf1bfa4ec7f86058b923e3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_usb$backend,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_usb$backend =
{
    PyModuleDef_HEAD_INIT,
    "usb.backend",   /* m_name */
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

MOD_INIT_DECL( usb$backend )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_usb$backend );
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
    puts("usb.backend: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("usb.backend: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initusb$backend" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_usb$backend = Py_InitModule4(
        "usb.backend",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_usb$backend = PyModule_Create( &mdef_usb$backend );
#endif

    moduledict_usb$backend = (PyDictObject *)((PyModuleObject *)module_usb$backend)->md_dict;

    CHECK_OBJECT( module_usb$backend );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_41507b2ec8c448a4d6dcb155a5052359, module_usb$backend );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_usb$backend );

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
    PyObject *tmp_usb$backend_class_creation_1__bases = NULL;
    PyObject *tmp_usb$backend_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_usb$backend_class_creation_1__metaclass = NULL;
    PyObject *tmp_usb$backend_class_creation_1__prepared = NULL;
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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_called_name_1;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_key_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_metaclass_name_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_type_arg_1;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_388c32be186e09878552e2d35d935af1;
    UPDATE_STRING_DICT0( moduledict_usb$backend, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_29ec33d1eb421285473c323adfdf4467;
    UPDATE_STRING_DICT0( moduledict_usb$backend, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_4259261bac478415da0971917a2ac365_list );
    UPDATE_STRING_DICT1( moduledict_usb$backend, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_usb$backend, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    tmp_assign_source_5 = const_str_digest_41507b2ec8c448a4d6dcb155a5052359;
    UPDATE_STRING_DICT0( moduledict_usb$backend, (Nuitka_StringObject *)const_str_plain___package__, tmp_assign_source_5 );
    tmp_assign_source_6 = PyDict_New();
    UPDATE_STRING_DICT1( moduledict_usb$backend, (Nuitka_StringObject *)const_str_plain___annotations__, tmp_assign_source_6 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_5b95e828b76d31c2a0ab6a8798151f7b, module_usb$backend );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_usb$backend)->md_dict;
    frame_module->f_lineno = 74;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_cecab58f61a043640186a696eaaa5f29, tmp_import_globals_1, Py_None, Py_None, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain__objfinalizer );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_usb$backend, (Nuitka_StringObject *)const_str_plain__objfinalizer, tmp_assign_source_7 );
    tmp_assign_source_8 = const_str_digest_1aee2a014f8416c1b3c39706f3f900c9;
    UPDATE_STRING_DICT0( moduledict_usb$backend, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_8 );
    tmp_assign_source_9 = LIST_COPY( const_list_19149b97b067a8d192ed58046f4ada60_list );
    UPDATE_STRING_DICT1( moduledict_usb$backend, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_9 );
    tmp_assign_source_10 = MAKE_FUNCTION_usb$backend$$$function_1__not_implemented(  );
    UPDATE_STRING_DICT1( moduledict_usb$backend, (Nuitka_StringObject *)const_str_plain__not_implemented, tmp_assign_source_10 );
    // Tried code:
    tmp_assign_source_11 = PyTuple_New( 1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_usb$backend, (Nuitka_StringObject *)const_str_plain__objfinalizer );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__objfinalizer );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_11 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_objfinalizer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        goto try_except_handler_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_AutoFinalizedObject );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_11 );

        exception_lineno = 83;
        goto try_except_handler_1;
    }
    PyTuple_SET_ITEM( tmp_assign_source_11, 0, tmp_tuple_element_1 );
    assert( tmp_usb$backend_class_creation_1__bases == NULL );
    tmp_usb$backend_class_creation_1__bases = tmp_assign_source_11;

    tmp_assign_source_12 = PyDict_New();
    assert( tmp_usb$backend_class_creation_1__class_decl_dict == NULL );
    tmp_usb$backend_class_creation_1__class_decl_dict = tmp_assign_source_12;

    tmp_compare_left_1 = const_str_plain_metaclass;
    tmp_compare_right_1 = tmp_usb$backend_class_creation_1__class_decl_dict;

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
    tmp_dict_name_1 = tmp_usb$backend_class_creation_1__class_decl_dict;

    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_metaclass_name_1 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_cond_value_1 = tmp_usb$backend_class_creation_1__bases;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        goto try_except_handler_1;
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
    tmp_subscribed_name_1 = tmp_usb$backend_class_creation_1__bases;

    tmp_subscript_name_1 = const_int_0;
    tmp_type_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        goto try_except_handler_1;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        goto try_except_handler_1;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_metaclass_name_1 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_1 != NULL );
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_2:;
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_usb$backend_class_creation_1__bases;

    tmp_assign_source_13 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_metaclass_name_1 );

        exception_lineno = 83;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_metaclass_name_1 );
    assert( tmp_usb$backend_class_creation_1__metaclass == NULL );
    tmp_usb$backend_class_creation_1__metaclass = tmp_assign_source_13;

    tmp_compare_left_2 = const_str_plain_metaclass;
    tmp_compare_right_2 = tmp_usb$backend_class_creation_1__class_decl_dict;

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
    tmp_dictdel_dict = tmp_usb$backend_class_creation_1__class_decl_dict;

    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        goto try_except_handler_1;
    }
    branch_no_1:;
    tmp_hasattr_source_1 = tmp_usb$backend_class_creation_1__metaclass;

    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        goto try_except_handler_1;
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
    tmp_source_name_2 = tmp_usb$backend_class_creation_1__metaclass;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        goto try_except_handler_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_str_plain_IBackend;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_usb$backend_class_creation_1__bases;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = tmp_usb$backend_class_creation_1__class_decl_dict;

    frame_module->f_lineno = 83;
    tmp_assign_source_14 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        goto try_except_handler_1;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_assign_source_14 = PyDict_New();
    condexpr_end_3:;
    assert( tmp_usb$backend_class_creation_1__prepared == NULL );
    tmp_usb$backend_class_creation_1__prepared = tmp_assign_source_14;

    tmp_assign_source_15 = impl_usb$backend$$$class_1_IBackend( NULL, &tmp_usb$backend_class_creation_1__bases, &tmp_usb$backend_class_creation_1__class_decl_dict, &tmp_usb$backend_class_creation_1__metaclass, &tmp_usb$backend_class_creation_1__prepared );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_usb$backend, (Nuitka_StringObject *)const_str_plain_IBackend, tmp_assign_source_15 );
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

    Py_XDECREF( tmp_usb$backend_class_creation_1__bases );
    tmp_usb$backend_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_usb$backend_class_creation_1__class_decl_dict );
    tmp_usb$backend_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_usb$backend_class_creation_1__metaclass );
    tmp_usb$backend_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_usb$backend_class_creation_1__prepared );
    tmp_usb$backend_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

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
    Py_XDECREF( tmp_usb$backend_class_creation_1__bases );
    tmp_usb$backend_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_usb$backend_class_creation_1__class_decl_dict );
    tmp_usb$backend_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_usb$backend_class_creation_1__metaclass );
    tmp_usb$backend_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_usb$backend_class_creation_1__prepared );
    tmp_usb$backend_class_creation_1__prepared = NULL;


    return MOD_RETURN_VALUE( module_usb$backend );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
