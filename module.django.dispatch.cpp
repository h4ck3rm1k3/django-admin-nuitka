// Generated code for Python source for module 'django.dispatch'
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

// The _module_django__dispatch is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__dispatch;
PyDictObject *_moduledict_django__dispatch;

// The module level variables.


// The module function declarations.


// The module function definitions.


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.dispatch",   /* m_name */
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

MOD_INIT_DECL( django__dispatch )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__dispatch );
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

    // puts( "in initdjango__dispatch" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__dispatch = Py_InitModule4(
        "django.dispatch",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__dispatch = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__dispatch = (PyDictObject *)((PyModuleObject *)_module_django__dispatch)->md_dict;

    assertObject( _module_django__dispatch );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_d12fe2bb7fdf007ad027eded8177af80, _module_django__dispatch );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__dispatch );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__dispatch != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__dispatch, (Nuitka_StringObject *)_python_str_plain___doc__, _python_str_digest_5ef0b2df4f8b46be986e9964b5f534b3 );
    UPDATE_STRING_DICT0( _moduledict_django__dispatch, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_60ccc2d5a2171c886035a7e0be0228bc );
    UPDATE_STRING_DICT1( _moduledict_django__dispatch, (Nuitka_StringObject *)_python_str_plain___path__, LIST_COPY( _python_list_str_digest_a47335ce1824102bf2ee9bc445bd6e68_list ) );
    PyFrameObject *frame_module_django__dispatch = MAKE_FRAME( _codeobj_5aa7b09a72fcac6990dc4ee5a98e42c9, _module_django__dispatch );

    FrameGuard frame_guard( frame_module_django__dispatch );
    try
    {
        assert( Py_REFCNT( frame_module_django__dispatch ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 9 );
        UPDATE_STRING_DICT1( _moduledict_django__dispatch, (Nuitka_StringObject *)_python_str_plain_Signal, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_eb7c6e6bd41f9a006ac9ff1749f44ec3, ((PyModuleObject *)_module_django__dispatch)->md_dict, ((PyModuleObject *)_module_django__dispatch)->md_dict, _python_list_str_plain_Signal_str_plain_receiver_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_Signal ) );
        UPDATE_STRING_DICT1( _moduledict_django__dispatch, (Nuitka_StringObject *)_python_str_plain_receiver, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_eb7c6e6bd41f9a006ac9ff1749f44ec3, ((PyModuleObject *)_module_django__dispatch)->md_dict, ((PyModuleObject *)_module_django__dispatch)->md_dict, _python_list_str_plain_Signal_str_plain_receiver_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_receiver ) );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__dispatch)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }

   return MOD_RETURN_VALUE( _module_django__dispatch );
}
