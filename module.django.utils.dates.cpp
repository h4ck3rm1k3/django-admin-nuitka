// Generated code for Python source for module 'django.utils.dates'
// created by Nuitka version 0.4.4pre3

// This code is in part copyright 2013 Kay Hayen.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "nuitka/prelude.hpp"

#include "__modules.hpp"
#include "__constants.hpp"
#include "__helpers.hpp"

// The _module_django__utils__dates is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__utils__dates;
PyDictObject *_moduledict_django__utils__dates;

// The module level variables.
static PyObjectGlobalVariable_django__utils__dates _mvar_django__utils__dates__( &_module_django__utils__dates, &_python_str_plain__ );
static PyObjectGlobalVariable_django__utils__dates _mvar_django__utils__dates_pgettext_lazy( &_module_django__utils__dates, &_python_str_plain_pgettext_lazy );

// The module function declarations.


// The module function definitions.


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.utils.dates",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

#define _MODULE_UNFREEZER 0

#if _MODULE_UNFREEZER
// For embedded modules, to be unpacked. Used by main program/package only
extern void registerMetaPathBasedUnfreezer( struct _inittab *_frozen_modules );

// Our own inittab for lookup of "frozen" modules, i.e. the ones included in this binary.
static struct _inittab _frozen_modules[] =
{

    { NULL, NULL }
};

// For loader attribute.
#if PYTHON_VERSION >= 330
extern PyObject *loader_frozen_modules;
#endif

#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( django__utils__dates )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__utils__dates );
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
    _initConstants();

    // Initialize the compiled types of Nuitka.
    PyType_Ready( &Nuitka_Generator_Type );
    PyType_Ready( &Nuitka_Function_Type );
    PyType_Ready( &Nuitka_Method_Type );
    PyType_Ready( &Nuitka_Frame_Type );

    patchInspectModule();

    patchBuiltinModule();
#endif

#if _MODULE_UNFREEZER
    registerMetaPathBasedUnfreezer( _frozen_modules );
#endif

    // puts( "in initdjango__utils__dates" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__utils__dates = Py_InitModule4(
        "django.utils.dates",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__utils__dates = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__utils__dates = (PyDictObject *)((PyModuleObject *)_module_django__utils__dates)->md_dict;

    assertObject( _module_django__utils__dates );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_c7d05b98c56e242e094a795944a34863, _module_django__utils__dates );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__utils__dates );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__utils__dates != _module___main__ )
        {
#endif
            value = PyModule_GetDict( value );
#ifdef _NUITKA_EXE
        }
#endif

#ifndef __NUITKA_NO_ASSERT__
        int res =
#endif
            PyDict_SetItem( module_dict, _python_str_plain___builtins__, value );

        assert( res == 0 );
    }

#if PYTHON_VERSION >= 330
#if _MODULE_UNFREEZER
    PyDict_SetItem( module_dict, _python_str_plain___loader__, loader_frozen_modules );
#else
    PyDict_SetItem( module_dict, _python_str_plain___loader__, Py_None );
#endif
#endif

    // Module code
    UPDATE_STRING_DICT0( _moduledict_django__utils__dates, (Nuitka_StringObject *)_python_str_plain___doc__, _python_str_digest_ebfb015de3730ce31e5868b7818f5c57 );
    UPDATE_STRING_DICT0( _moduledict_django__utils__dates, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_9b3246d25af26410626bda229c75895c );
    PyFrameObject *frame_module_django__utils__dates = MAKE_FRAME( _codeobj_b75565538ff657414e17fda7281566bb, _module_django__utils__dates );

    FrameGuard frame_guard( frame_module_django__utils__dates );
    try
    {
        assert( Py_REFCNT( frame_module_django__utils__dates ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 3 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__dates, (Nuitka_StringObject *)_python_str_plain__, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_695d25035a0d5e79b21b6e2fa3e00631, ((PyModuleObject *)_module_django__utils__dates)->md_dict, ((PyModuleObject *)_module_django__utils__dates)->md_dict, _python_list_str_plain_ugettext_lazy_str_plain_pgettext_lazy_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ugettext_lazy ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__dates, (Nuitka_StringObject *)_python_str_plain_pgettext_lazy, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_695d25035a0d5e79b21b6e2fa3e00631, ((PyModuleObject *)_module_django__utils__dates)->md_dict, ((PyModuleObject *)_module_django__utils__dates)->md_dict, _python_list_str_plain_ugettext_lazy_str_plain_pgettext_lazy_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_pgettext_lazy ) );
        frame_guard.setLineNumber( 5 );
        {
            PyObjectTempKeeper1 make_dict1;
            PyObjectTempKeeper1 make_dict11;
            PyObjectTempKeeper1 make_dict3;
            PyObjectTempKeeper1 make_dict5;
            PyObjectTempKeeper1 make_dict7;
            PyObjectTempKeeper1 make_dict9;
            UPDATE_STRING_DICT1( _moduledict_django__utils__dates, (Nuitka_StringObject *)_python_str_plain_WEEKDAYS, ( make_dict1.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates__.asObject0(), _python_str_plain_Monday ) ), make_dict3.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates__.asObject0(), _python_str_plain_Tuesday ) ), make_dict5.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates__.asObject0(), _python_str_plain_Wednesday ) ), make_dict7.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates__.asObject0(), _python_str_plain_Thursday ) ), make_dict9.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates__.asObject0(), _python_str_plain_Friday ) ), make_dict11.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates__.asObject0(), _python_str_plain_Saturday ) ), MAKE_DICT7( make_dict1.asObject0(), _python_int_0, make_dict3.asObject0(), _python_int_pos_1, make_dict5.asObject0(), _python_int_pos_2, make_dict7.asObject0(), _python_int_pos_3, make_dict9.asObject0(), _python_int_pos_4, make_dict11.asObject0(), _python_int_pos_5, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates__.asObject0(), _python_str_plain_Sunday ) ).asObject(), _python_int_pos_6 ) ) );
        }
        frame_guard.setLineNumber( 9 );
        {
            PyObjectTempKeeper1 make_dict15;
            PyObjectTempKeeper1 make_dict17;
            PyObjectTempKeeper1 make_dict19;
            PyObjectTempKeeper1 make_dict21;
            PyObjectTempKeeper1 make_dict23;
            PyObjectTempKeeper1 make_dict25;
            UPDATE_STRING_DICT1( _moduledict_django__utils__dates, (Nuitka_StringObject *)_python_str_plain_WEEKDAYS_ABBR, ( make_dict15.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates__.asObject0(), _python_str_plain_Mon ) ), make_dict17.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates__.asObject0(), _python_str_plain_Tue ) ), make_dict19.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates__.asObject0(), _python_str_plain_Wed ) ), make_dict21.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates__.asObject0(), _python_str_plain_Thu ) ), make_dict23.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates__.asObject0(), _python_str_plain_Fri ) ), make_dict25.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates__.asObject0(), _python_str_plain_Sat ) ), MAKE_DICT7( make_dict15.asObject0(), _python_int_0, make_dict17.asObject0(), _python_int_pos_1, make_dict19.asObject0(), _python_int_pos_2, make_dict21.asObject0(), _python_int_pos_3, make_dict23.asObject0(), _python_int_pos_4, make_dict25.asObject0(), _python_int_pos_5, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates__.asObject0(), _python_str_plain_Sun ) ).asObject(), _python_int_pos_6 ) ) );
        }
        UPDATE_STRING_DICT1( _moduledict_django__utils__dates, (Nuitka_StringObject *)_python_str_plain_WEEKDAYS_REV, PyDict_Copy( _python_dict_3a7afad6aec03601162fff275f8961af ) );
        frame_guard.setLineNumber( 17 );
        {
            PyObjectTempKeeper1 make_dict29;
            PyObjectTempKeeper1 make_dict31;
            PyObjectTempKeeper1 make_dict33;
            PyObjectTempKeeper1 make_dict35;
            PyObjectTempKeeper1 make_dict37;
            PyObjectTempKeeper1 make_dict39;
            PyObjectTempKeeper1 make_dict41;
            PyObjectTempKeeper1 make_dict43;
            PyObjectTempKeeper1 make_dict45;
            PyObjectTempKeeper1 make_dict47;
            PyObjectTempKeeper1 make_dict49;
            UPDATE_STRING_DICT1( _moduledict_django__utils__dates, (Nuitka_StringObject *)_python_str_plain_MONTHS, ( make_dict29.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates__.asObject0(), _python_str_plain_January ) ), make_dict31.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates__.asObject0(), _python_str_plain_February ) ), make_dict33.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates__.asObject0(), _python_str_plain_March ) ), make_dict35.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates__.asObject0(), _python_str_plain_April ) ), make_dict37.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates__.asObject0(), _python_str_plain_May ) ), make_dict39.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates__.asObject0(), _python_str_plain_June ) ), make_dict41.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates__.asObject0(), _python_str_plain_July ) ), make_dict43.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates__.asObject0(), _python_str_plain_August ) ), make_dict45.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates__.asObject0(), _python_str_plain_September ) ), make_dict47.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates__.asObject0(), _python_str_plain_October ) ), make_dict49.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates__.asObject0(), _python_str_plain_November ) ), MAKE_DICT12( make_dict29.asObject0(), _python_int_pos_1, make_dict31.asObject0(), _python_int_pos_2, make_dict33.asObject0(), _python_int_pos_3, make_dict35.asObject0(), _python_int_pos_4, make_dict37.asObject0(), _python_int_pos_5, make_dict39.asObject0(), _python_int_pos_6, make_dict41.asObject0(), _python_int_pos_7, make_dict43.asObject0(), _python_int_pos_8, make_dict45.asObject0(), _python_int_pos_9, make_dict47.asObject0(), _python_int_pos_10, make_dict49.asObject0(), _python_int_pos_11, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates__.asObject0(), _python_str_plain_December ) ).asObject(), _python_int_pos_12 ) ) );
        }
        frame_guard.setLineNumber( 22 );
        {
            PyObjectTempKeeper1 make_dict53;
            PyObjectTempKeeper1 make_dict55;
            PyObjectTempKeeper1 make_dict57;
            PyObjectTempKeeper1 make_dict59;
            PyObjectTempKeeper1 make_dict61;
            PyObjectTempKeeper1 make_dict63;
            PyObjectTempKeeper1 make_dict65;
            PyObjectTempKeeper1 make_dict67;
            PyObjectTempKeeper1 make_dict69;
            PyObjectTempKeeper1 make_dict71;
            PyObjectTempKeeper1 make_dict73;
            UPDATE_STRING_DICT1( _moduledict_django__utils__dates, (Nuitka_StringObject *)_python_str_plain_MONTHS_3, ( make_dict53.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates__.asObject0(), _python_str_plain_jan ) ), make_dict55.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates__.asObject0(), _python_str_plain_feb ) ), make_dict57.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates__.asObject0(), _python_str_plain_mar ) ), make_dict59.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates__.asObject0(), _python_str_plain_apr ) ), make_dict61.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates__.asObject0(), _python_str_plain_may ) ), make_dict63.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates__.asObject0(), _python_str_plain_jun ) ), make_dict65.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates__.asObject0(), _python_str_plain_jul ) ), make_dict67.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates__.asObject0(), _python_str_plain_aug ) ), make_dict69.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates__.asObject0(), _python_str_plain_sep ) ), make_dict71.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates__.asObject0(), _python_str_plain_oct ) ), make_dict73.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates__.asObject0(), _python_str_plain_nov ) ), MAKE_DICT12( make_dict53.asObject0(), _python_int_pos_1, make_dict55.asObject0(), _python_int_pos_2, make_dict57.asObject0(), _python_int_pos_3, make_dict59.asObject0(), _python_int_pos_4, make_dict61.asObject0(), _python_int_pos_5, make_dict63.asObject0(), _python_int_pos_6, make_dict65.asObject0(), _python_int_pos_7, make_dict67.asObject0(), _python_int_pos_8, make_dict69.asObject0(), _python_int_pos_9, make_dict71.asObject0(), _python_int_pos_10, make_dict73.asObject0(), _python_int_pos_11, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates__.asObject0(), _python_str_plain_dec ) ).asObject(), _python_int_pos_12 ) ) );
        }
        UPDATE_STRING_DICT1( _moduledict_django__utils__dates, (Nuitka_StringObject *)_python_str_plain_MONTHS_3_REV, PyDict_Copy( _python_dict_ab5de01405bb19ae641d22d195e0441b ) );
        frame_guard.setLineNumber( 30 );
        {
            PyObjectTempKeeper1 make_dict77;
            PyObjectTempKeeper1 make_dict79;
            PyObjectTempKeeper1 make_dict81;
            PyObjectTempKeeper1 make_dict83;
            PyObjectTempKeeper1 make_dict85;
            PyObjectTempKeeper1 make_dict87;
            PyObjectTempKeeper1 make_dict89;
            PyObjectTempKeeper1 make_dict91;
            PyObjectTempKeeper1 make_dict93;
            PyObjectTempKeeper1 make_dict95;
            PyObjectTempKeeper1 make_dict97;
            UPDATE_STRING_DICT1( _moduledict_django__utils__dates, (Nuitka_StringObject *)_python_str_plain_MONTHS_AP, ( make_dict77.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates_pgettext_lazy.asObject0(), _python_str_digest_de0486f927f883f463b85fd33c7b46e1, _python_str_digest_4d79628f08689333aa5e489a86eb81e4 ) ), make_dict79.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates_pgettext_lazy.asObject0(), _python_str_digest_de0486f927f883f463b85fd33c7b46e1, _python_str_digest_9d49ed9a02fc9fa60fe9f0c110f0b367 ) ), make_dict81.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates_pgettext_lazy.asObject0(), _python_str_digest_de0486f927f883f463b85fd33c7b46e1, _python_str_plain_March ) ), make_dict83.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates_pgettext_lazy.asObject0(), _python_str_digest_de0486f927f883f463b85fd33c7b46e1, _python_str_plain_April ) ), make_dict85.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates_pgettext_lazy.asObject0(), _python_str_digest_de0486f927f883f463b85fd33c7b46e1, _python_str_plain_May ) ), make_dict87.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates_pgettext_lazy.asObject0(), _python_str_digest_de0486f927f883f463b85fd33c7b46e1, _python_str_plain_June ) ), make_dict89.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates_pgettext_lazy.asObject0(), _python_str_digest_de0486f927f883f463b85fd33c7b46e1, _python_str_plain_July ) ), make_dict91.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates_pgettext_lazy.asObject0(), _python_str_digest_de0486f927f883f463b85fd33c7b46e1, _python_str_digest_288e09aaf74f84f46b75d8a0cb04413c ) ), make_dict93.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates_pgettext_lazy.asObject0(), _python_str_digest_de0486f927f883f463b85fd33c7b46e1, _python_str_digest_ed072890423dbc4d05add143075f3c1a ) ), make_dict95.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates_pgettext_lazy.asObject0(), _python_str_digest_de0486f927f883f463b85fd33c7b46e1, _python_str_digest_5bd9a24784ae9c8312d63c486884b495 ) ), make_dict97.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates_pgettext_lazy.asObject0(), _python_str_digest_de0486f927f883f463b85fd33c7b46e1, _python_str_digest_e621bc28f79cf42b9fdfc10ea4c04ae3 ) ), MAKE_DICT12( make_dict77.asObject0(), _python_int_pos_1, make_dict79.asObject0(), _python_int_pos_2, make_dict81.asObject0(), _python_int_pos_3, make_dict83.asObject0(), _python_int_pos_4, make_dict85.asObject0(), _python_int_pos_5, make_dict87.asObject0(), _python_int_pos_6, make_dict89.asObject0(), _python_int_pos_7, make_dict91.asObject0(), _python_int_pos_8, make_dict93.asObject0(), _python_int_pos_9, make_dict95.asObject0(), _python_int_pos_10, make_dict97.asObject0(), _python_int_pos_11, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates_pgettext_lazy.asObject0(), _python_str_digest_de0486f927f883f463b85fd33c7b46e1, _python_str_digest_1ce50e7c38481b24ed7d0225d53b7e39 ) ).asObject(), _python_int_pos_12 ) ) );
        }
        frame_guard.setLineNumber( 44 );
        {
            PyObjectTempKeeper1 make_dict101;
            PyObjectTempKeeper1 make_dict103;
            PyObjectTempKeeper1 make_dict105;
            PyObjectTempKeeper1 make_dict107;
            PyObjectTempKeeper1 make_dict109;
            PyObjectTempKeeper1 make_dict111;
            PyObjectTempKeeper1 make_dict113;
            PyObjectTempKeeper1 make_dict115;
            PyObjectTempKeeper1 make_dict117;
            PyObjectTempKeeper1 make_dict119;
            PyObjectTempKeeper1 make_dict121;
            UPDATE_STRING_DICT1( _moduledict_django__utils__dates, (Nuitka_StringObject *)_python_str_plain_MONTHS_ALT, ( make_dict101.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates_pgettext_lazy.asObject0(), _python_str_digest_afb83dfe3aa419ba293e499371d0c827, _python_str_plain_January ) ), make_dict103.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates_pgettext_lazy.asObject0(), _python_str_digest_afb83dfe3aa419ba293e499371d0c827, _python_str_plain_February ) ), make_dict105.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates_pgettext_lazy.asObject0(), _python_str_digest_afb83dfe3aa419ba293e499371d0c827, _python_str_plain_March ) ), make_dict107.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates_pgettext_lazy.asObject0(), _python_str_digest_afb83dfe3aa419ba293e499371d0c827, _python_str_plain_April ) ), make_dict109.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates_pgettext_lazy.asObject0(), _python_str_digest_afb83dfe3aa419ba293e499371d0c827, _python_str_plain_May ) ), make_dict111.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates_pgettext_lazy.asObject0(), _python_str_digest_afb83dfe3aa419ba293e499371d0c827, _python_str_plain_June ) ), make_dict113.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates_pgettext_lazy.asObject0(), _python_str_digest_afb83dfe3aa419ba293e499371d0c827, _python_str_plain_July ) ), make_dict115.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates_pgettext_lazy.asObject0(), _python_str_digest_afb83dfe3aa419ba293e499371d0c827, _python_str_plain_August ) ), make_dict117.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates_pgettext_lazy.asObject0(), _python_str_digest_afb83dfe3aa419ba293e499371d0c827, _python_str_plain_September ) ), make_dict119.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates_pgettext_lazy.asObject0(), _python_str_digest_afb83dfe3aa419ba293e499371d0c827, _python_str_plain_October ) ), make_dict121.assign( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates_pgettext_lazy.asObject0(), _python_str_digest_afb83dfe3aa419ba293e499371d0c827, _python_str_plain_November ) ), MAKE_DICT12( make_dict101.asObject0(), _python_int_pos_1, make_dict103.asObject0(), _python_int_pos_2, make_dict105.asObject0(), _python_int_pos_3, make_dict107.asObject0(), _python_int_pos_4, make_dict109.asObject0(), _python_int_pos_5, make_dict111.asObject0(), _python_int_pos_6, make_dict113.asObject0(), _python_int_pos_7, make_dict115.asObject0(), _python_int_pos_8, make_dict117.asObject0(), _python_int_pos_9, make_dict119.asObject0(), _python_int_pos_10, make_dict121.asObject0(), _python_int_pos_11, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__dates_pgettext_lazy.asObject0(), _python_str_digest_afb83dfe3aa419ba293e499371d0c827, _python_str_plain_December ) ).asObject(), _python_int_pos_12 ) ) );
        }
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

#if 0
    // TODO: Recognize the need for it
        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__utils__dates)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }

   return MOD_RETURN_VALUE( _module_django__utils__dates );
}
