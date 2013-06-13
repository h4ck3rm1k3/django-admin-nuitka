// Generated code for Python source for module 'django.core.wsgi'
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

// The _module_django__core__wsgi is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__core__wsgi;
PyDictObject *_moduledict_django__core__wsgi;

// The module level variables.
static PyObjectGlobalVariable_django__core__wsgi _mvar_django__core__wsgi_WSGIHandler( &_module_django__core__wsgi, &_python_str_plain_WSGIHandler );

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_get_wsgi_application_of_module_django__core__wsgi(  );


// The module function definitions.
static PyObject *impl_function_1_get_wsgi_application_of_module_django__core__wsgi( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.


    // Actual function code.
    static PyFrameObject *frame_function_1_get_wsgi_application_of_module_django__core__wsgi = NULL;

    if ( isFrameUnusable( frame_function_1_get_wsgi_application_of_module_django__core__wsgi ) )
    {
        if ( frame_function_1_get_wsgi_application_of_module_django__core__wsgi )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_get_wsgi_application_of_module_django__core__wsgi" );
#endif
            Py_DECREF( frame_function_1_get_wsgi_application_of_module_django__core__wsgi );
        }

        frame_function_1_get_wsgi_application_of_module_django__core__wsgi = MAKE_FRAME( _codeobj_c810a516394c0bac5d085cf76f158baa, _module_django__core__wsgi );
    }

    FrameGuard frame_guard( frame_function_1_get_wsgi_application_of_module_django__core__wsgi );
    try
    {
        assert( Py_REFCNT( frame_function_1_get_wsgi_application_of_module_django__core__wsgi ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 13 );
        return CALL_FUNCTION_NO_ARGS( _mvar_django__core__wsgi_WSGIHandler.asObject0() );
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

        if ( frame_guard.getFrame0() == frame_function_1_get_wsgi_application_of_module_django__core__wsgi )
        {
           Py_DECREF( frame_function_1_get_wsgi_application_of_module_django__core__wsgi );
           frame_function_1_get_wsgi_application_of_module_django__core__wsgi = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1_get_wsgi_application_of_module_django__core__wsgi( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        PyErr_Format( PyExc_TypeError, "get_wsgi_application() takes no arguments (%zd given)", args_given + kw_size );
#else
        if ( kw_size == 0 )
        {
           PyErr_Format( PyExc_TypeError, "get_wsgi_application() takes 0 positional arguments but %zd was given", args_given );
        }
        else
        {
           PyObject *tmp_iter = PyObject_GetIter( kw );
           PyObject *tmp_arg_name = PyIter_Next( tmp_iter );
           Py_DECREF( tmp_iter );

           PyErr_Format( PyExc_TypeError, "get_wsgi_application() got an unexpected keyword argument '%s'", Nuitka_String_AsString( tmp_arg_name ) );

           Py_DECREF( tmp_arg_name );
        }
#endif
        goto error_exit;
    }


    return impl_function_1_get_wsgi_application_of_module_django__core__wsgi( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_1_get_wsgi_application_of_module_django__core__wsgi( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0)
    {
        return impl_function_1_get_wsgi_application_of_module_django__core__wsgi( self );
    }
    else
    {
        PyObject *result = fparse_function_1_get_wsgi_application_of_module_django__core__wsgi( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_get_wsgi_application_of_module_django__core__wsgi(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_get_wsgi_application_of_module_django__core__wsgi,
        dparse_function_1_get_wsgi_application_of_module_django__core__wsgi,
        _python_str_plain_get_wsgi_application,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_c810a516394c0bac5d085cf76f158baa,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__wsgi,
        _python_str_digest_fe0d72585976fe3c3b2a73d1a6219cd3
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.core.wsgi",   /* m_name */
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

MOD_INIT_DECL( django__core__wsgi )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__core__wsgi );
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

    // puts( "in initdjango__core__wsgi" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__core__wsgi = Py_InitModule4(
        "django.core.wsgi",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__core__wsgi = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__core__wsgi = (PyDictObject *)((PyModuleObject *)_module_django__core__wsgi)->md_dict;

    assertObject( _module_django__core__wsgi );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_c08dd42bef643b4e923cc7d534465b58, _module_django__core__wsgi );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__core__wsgi );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__core__wsgi != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__core__wsgi, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django__core__wsgi, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_479f1001fb455284bb766a5dd7737cc6 );
    PyFrameObject *frame_module_django__core__wsgi = MAKE_FRAME( _codeobj_f526ed1c3ff0ebede2c7219a9c003cf3, _module_django__core__wsgi );

    FrameGuard frame_guard( frame_module_django__core__wsgi );
    try
    {
        assert( Py_REFCNT( frame_module_django__core__wsgi ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 1 );
        UPDATE_STRING_DICT1( _moduledict_django__core__wsgi, (Nuitka_StringObject *)_python_str_plain_WSGIHandler, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_dd2ca06c03fa07d107a6c76ca4d8ba93, ((PyModuleObject *)_module_django__core__wsgi)->md_dict, ((PyModuleObject *)_module_django__core__wsgi)->md_dict, _python_list_str_plain_WSGIHandler_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_WSGIHandler ) );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__core__wsgi)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__core__wsgi, (Nuitka_StringObject *)_python_str_plain_get_wsgi_application, MAKE_FUNCTION_function_1_get_wsgi_application_of_module_django__core__wsgi(  ) );

   return MOD_RETURN_VALUE( _module_django__core__wsgi );
}
