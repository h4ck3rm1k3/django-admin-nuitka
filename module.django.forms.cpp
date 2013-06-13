// Generated code for Python source for module 'django.forms'
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

// The _module_django__forms is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__forms;
PyDictObject *_moduledict_django__forms;

// The module level variables.


// The module function declarations.


// The module function definitions.


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.forms",   /* m_name */
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

MOD_INIT_DECL( django__forms )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__forms );
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

    // puts( "in initdjango__forms" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__forms = Py_InitModule4(
        "django.forms",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__forms = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__forms = (PyDictObject *)((PyModuleObject *)_module_django__forms)->md_dict;

    assertObject( _module_django__forms );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_bf2ee1a8e6deb983f34759cc28d048ee, _module_django__forms );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__forms );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__forms != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__forms, (Nuitka_StringObject *)_python_str_plain___doc__, _python_str_digest_fbdfaa9a4b3b3ef1ca0cdb01aa04ed4a );
    UPDATE_STRING_DICT0( _moduledict_django__forms, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_3dcaa568b8290e2235572d873ef78ff4 );
    UPDATE_STRING_DICT1( _moduledict_django__forms, (Nuitka_StringObject *)_python_str_plain___path__, LIST_COPY( _python_list_str_digest_a0ee5c2ee5b3439efa950300bbf05d00_list ) );
    PyFrameObject *frame_module_django__forms = MAKE_FRAME( _codeobj_c00628b6ed5ea6ae88cff1b8a58204b7, _module_django__forms );

    FrameGuard frame_guard( frame_module_django__forms );
    try
    {
        assert( Py_REFCNT( frame_module_django__forms ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 5 );
        UPDATE_STRING_DICT1( _moduledict_django__forms, (Nuitka_StringObject *)_python_str_plain_absolute_import, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain___future__, ((PyModuleObject *)_module_django__forms)->md_dict, ((PyModuleObject *)_module_django__forms)->md_dict, _python_list_str_plain_absolute_import_list, _python_int_0 ) ).asObject(), _python_str_plain_absolute_import ) );
        frame_guard.setLineNumber( 7 );
        UPDATE_STRING_DICT1( _moduledict_django__forms, (Nuitka_StringObject *)_python_str_plain_ValidationError, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d9333e07c409926fdd89a4c3c526d0b5, ((PyModuleObject *)_module_django__forms)->md_dict, ((PyModuleObject *)_module_django__forms)->md_dict, _python_list_str_plain_ValidationError_list, _python_int_0 ) ).asObject(), _python_str_plain_ValidationError ) );
        frame_guard.setLineNumber( 8 );
        IMPORT_MODULE_STAR( _module_django__forms, true, PyObjectTemporary( IMPORT_MODULE( _python_str_digest_8c057bb609340e126205cffce924dfec, ((PyModuleObject *)_module_django__forms)->md_dict, ((PyModuleObject *)_module_django__forms)->md_dict, _python_tuple_str_chr_42_tuple, _python_int_0 ) ).asObject() );
        frame_guard.setLineNumber( 9 );
        IMPORT_MODULE_STAR( _module_django__forms, true, PyObjectTemporary( IMPORT_MODULE( _python_str_digest_9c340bf00385a8a1f453a507b575bdca, ((PyModuleObject *)_module_django__forms)->md_dict, ((PyModuleObject *)_module_django__forms)->md_dict, _python_tuple_str_chr_42_tuple, _python_int_0 ) ).asObject() );
        frame_guard.setLineNumber( 10 );
        IMPORT_MODULE_STAR( _module_django__forms, true, PyObjectTemporary( IMPORT_MODULE( _python_str_digest_47e28c49f6b3257d092228301adff2a2, ((PyModuleObject *)_module_django__forms)->md_dict, ((PyModuleObject *)_module_django__forms)->md_dict, _python_tuple_str_chr_42_tuple, _python_int_0 ) ).asObject() );
        frame_guard.setLineNumber( 11 );
        IMPORT_MODULE_STAR( _module_django__forms, true, PyObjectTemporary( IMPORT_MODULE( _python_str_digest_ebcfe8698ad1f8c100f227e6473faf3f, ((PyModuleObject *)_module_django__forms)->md_dict, ((PyModuleObject *)_module_django__forms)->md_dict, _python_tuple_str_chr_42_tuple, _python_int_0 ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__forms)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }

   return MOD_RETURN_VALUE( _module_django__forms );
}
