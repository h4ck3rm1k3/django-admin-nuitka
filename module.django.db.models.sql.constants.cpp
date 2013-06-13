// Generated code for Python source for module 'django.db.models.sql.constants'
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

// The _module_django__db__models__sql__constants is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__db__models__sql__constants;
PyDictObject *_moduledict_django__db__models__sql__constants;

// The module level variables.
static PyObjectGlobalVariable_django__db__models__sql__constants _mvar_django__db__models__sql__constants_namedtuple( &_module_django__db__models__sql__constants, &_python_str_plain_namedtuple );
static PyObjectGlobalVariable_django__db__models__sql__constants _mvar_django__db__models__sql__constants_re( &_module_django__db__models__sql__constants, &_python_str_plain_re );

// The module function declarations.


// The module function definitions.


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.db.models.sql.constants",   /* m_name */
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

MOD_INIT_DECL( django__db__models__sql__constants )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__db__models__sql__constants );
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

    // puts( "in initdjango__db__models__sql__constants" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__db__models__sql__constants = Py_InitModule4(
        "django.db.models.sql.constants",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__db__models__sql__constants = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__db__models__sql__constants = (PyDictObject *)((PyModuleObject *)_module_django__db__models__sql__constants)->md_dict;

    assertObject( _module_django__db__models__sql__constants );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_df5858f86b0d7fe8934636ee8adeadfa, _module_django__db__models__sql__constants );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__db__models__sql__constants );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__db__models__sql__constants != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__db__models__sql__constants, (Nuitka_StringObject *)_python_str_plain___doc__, _python_str_digest_0546420e128e9f846af31295be16d5c2 );
    UPDATE_STRING_DICT0( _moduledict_django__db__models__sql__constants, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_47beb9d5714e13b5671fdc9797aa0068 );
    PyFrameObject *frame_module_django__db__models__sql__constants = MAKE_FRAME( _codeobj_78eeaabbcae2290f5de596e51f5d12f8, _module_django__db__models__sql__constants );

    FrameGuard frame_guard( frame_module_django__db__models__sql__constants );
    try
    {
        assert( Py_REFCNT( frame_module_django__db__models__sql__constants ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 5 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__sql__constants, (Nuitka_StringObject *)_python_str_plain_namedtuple, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_collections, ((PyModuleObject *)_module_django__db__models__sql__constants)->md_dict, ((PyModuleObject *)_module_django__db__models__sql__constants)->md_dict, _python_list_str_plain_namedtuple_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_namedtuple ) );
        frame_guard.setLineNumber( 6 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__sql__constants, (Nuitka_StringObject *)_python_str_plain_re, IMPORT_MODULE( _python_str_plain_re, ((PyModuleObject *)_module_django__db__models__sql__constants)->md_dict, ((PyModuleObject *)_module_django__db__models__sql__constants)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 11 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__sql__constants, (Nuitka_StringObject *)_python_str_plain_QUERY_TERMS, CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_set ), PyObjectTemporary( LIST_COPY( _python_list_38ef2345f922d69ce17d537e361337fd_list ) ).asObject() ) );
        UPDATE_STRING_DICT0( _moduledict_django__db__models__sql__constants, (Nuitka_StringObject *)_python_str_plain_GET_ITERATOR_CHUNK_SIZE, _python_int_pos_100 );
        frame_guard.setLineNumber( 26 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__sql__constants, (Nuitka_StringObject *)_python_str_plain_JoinInfo, CALL_FUNCTION_WITH_ARGS( _mvar_django__db__models__sql__constants_namedtuple.asObject0(), _python_str_plain_JoinInfo, _python_str_digest_96d1a6f88cf7a491d2293f8c9795946a ) );
        frame_guard.setLineNumber( 31 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__sql__constants, (Nuitka_StringObject *)_python_str_plain_SelectInfo, CALL_FUNCTION_WITH_ARGS( _mvar_django__db__models__sql__constants_namedtuple.asObject0(), _python_str_plain_SelectInfo, _python_str_digest_d3820f93c96eb4079c296033eccdf0fe ) );
        UPDATE_STRING_DICT0( _moduledict_django__db__models__sql__constants, (Nuitka_StringObject *)_python_str_plain_MULTI, _python_str_plain_multi );
        UPDATE_STRING_DICT0( _moduledict_django__db__models__sql__constants, (Nuitka_StringObject *)_python_str_plain_SINGLE, _python_str_plain_single );
        frame_guard.setLineNumber( 37 );
        UPDATE_STRING_DICT1( _moduledict_django__db__models__sql__constants, (Nuitka_StringObject *)_python_str_plain_ORDER_PATTERN, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__db__models__sql__constants_re.asObject0(), _python_str_plain_compile ) ).asObject(), _python_str_digest_2fa9e81198b603e3d04c78d5318ff5ab ) );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__db__models__sql__constants)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__db__models__sql__constants, (Nuitka_StringObject *)_python_str_plain_ORDER_DIR, PyDict_Copy( _python_dict_46b09d67347e47f3db50e22fcbc5bed8 ) );

   return MOD_RETURN_VALUE( _module_django__db__models__sql__constants );
}
