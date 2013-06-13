// Generated code for Python source for module 'django'
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

// The _module_django is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django;
PyDictObject *_moduledict_django;

// The module level variables.


// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_get_version_of_module_django(  );


// The module function definitions.
static PyObject *impl_function_1_get_version_of_module_django( Nuitka_FunctionObject *self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );
    PyObjectLocalVariable _python_var_get_version( _python_str_plain_get_version );

    // Actual function code.
    static PyFrameObject *frame_function_1_get_version_of_module_django = NULL;

    if ( isFrameUnusable( frame_function_1_get_version_of_module_django ) )
    {
        if ( frame_function_1_get_version_of_module_django )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_get_version_of_module_django" );
#endif
            Py_DECREF( frame_function_1_get_version_of_module_django );
        }

        frame_function_1_get_version_of_module_django = MAKE_FRAME( _codeobj_c0cfdeab9bd6db8e25ff01037e76b129, _module_django );
    }

    FrameGuard frame_guard( frame_function_1_get_version_of_module_django );
    try
    {
        assert( Py_REFCNT( frame_function_1_get_version_of_module_django ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 6 );
        _python_var_get_version.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_7b0986266463f6f3532b6c3b9bcb1f27, ((PyModuleObject *)_module_django)->md_dict, PyObjectTemporary( _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_get_version.updateLocalsDict( PyDict_New() ) ) ) ).asObject(), _python_list_str_plain_get_version_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_get_version ) );
        frame_guard.setLineNumber( 7 );
        {
            PyObjectTempKeeper0 call_tmp1;
            PyObjectTempKeeper0 call_tmp2;
            return ( call_tmp1.assign( _python_var_get_version.asObject() ), call_tmp2.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), _python_var_kwargs.asObject1() ) );
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

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_get_version.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_get_version_of_module_django )
        {
           Py_DECREF( frame_function_1_get_version_of_module_django );
           frame_function_1_get_version_of_module_django = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1_get_version_of_module_django( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_args = NULL;
    PyObject *_python_par_kwargs = NULL;

    if ( kw == NULL )
    {
        _python_par_kwargs = PyDict_New();
    }
    else
    {
        if ( ((PyDictObject *)kw)->ma_used > 0 )
        {
#if PYTHON_VERSION < 330
            _python_par_kwargs = _PyDict_NewPresized( ((PyDictObject *)kw)->ma_used  );

            for ( int i = 0; i <= ((PyDictObject *)kw)->ma_mask; i++ )
            {
                PyDictEntry *entry = &((PyDictObject *)kw)->ma_table[ i ];

                if ( entry->me_value != NULL )
                {

#if PYTHON_VERSION < 300
                    if (unlikely( !PyString_Check( entry->me_key ) && !PyUnicode_Check( entry->me_key ) ))
#else
                    if (unlikely( !PyUnicode_Check( entry->me_key ) ))
#endif
                    {
                        PyErr_Format( PyExc_TypeError, "get_version() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_kwargs, entry->me_key, entry->me_value );

                    if (unlikely( res == -1 ))
                    {
                        goto error_exit;
                    }
                }
            }
#else
        if ( _PyDict_HasSplitTable( ((PyDictObject *)kw) ) )
        {
            PyDictObject *mp = (PyDictObject *)kw;

            PyObject **newvalues = PyMem_NEW( PyObject *, mp->ma_keys->dk_size );
            assert (newvalues != NULL);

            PyDictObject *split_copy = PyObject_GC_New( PyDictObject, &PyDict_Type );
            assert( split_copy != NULL );

            split_copy->ma_values = newvalues;
            split_copy->ma_keys = mp->ma_keys;
            split_copy->ma_used = mp->ma_used;

            mp->ma_keys->dk_refcnt += 1;

            Nuitka_GC_Track( split_copy );

            int size = mp->ma_keys->dk_size;
            for ( int i = 0; i < size; i++ )
            {
                PyDictKeyEntry *entry = &split_copy->ma_keys->dk_entries[ i ];

                if (unlikely( !PyUnicode_Check( entry->me_key ) ))
                {
                    PyErr_Format( PyExc_TypeError, "get_version() keywords must be strings" );
                    goto error_exit;
                }

                split_copy->ma_values[ i ] = INCREASE_REFCOUNT_X( mp->ma_values[ i ] );
            }

            _python_par_kwargs = (PyObject *)split_copy;
        }
        else
        {
            _python_par_kwargs = PyDict_New();

            PyDictObject *mp = (PyDictObject *)kw;

            int size = mp->ma_keys->dk_size;
            for ( int i = 0; i < size; i++ )
            {
                PyDictKeyEntry *entry = &mp->ma_keys->dk_entries[i];

                // TODO: One of these cases has been dealt with above.
                PyObject *value;
                if ( mp->ma_values )
                {
                    value = mp->ma_values[ i ];
                }
                else
                {
                    value = entry->me_value;
                }

                if ( value != NULL )
                {
                    if (unlikely( !PyUnicode_Check( entry->me_key ) ))
                    {
                        PyErr_Format( PyExc_TypeError, "get_version() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_kwargs, entry->me_key, value );

                    if (unlikely( res == -1 ))
                    {
                        goto error_exit;
                    }
                }
            }
        }
#endif
        }
        else
        {
            _python_par_kwargs = PyDict_New();
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 0 ))
    {
        if ( 0 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "get_version() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_version() takes at least %d non-keyword arguments (%zd given)", 0, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "get_version() takes at least %d arguments (%zd given)", 0, args_given + kw_found );
            }
        }

        goto error_exit;
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 0 )
    {
        _python_par_args = PyTuple_New( args_size - 0 );

        for( Py_ssize_t i = 0; i < args_size - 0; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[0+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_1_get_version_of_module_django( self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_1_get_version_of_module_django( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1_get_version_of_module_django( self, MAKE_TUPLE( &args[ 0 ], size > 0 ? size-0 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_1_get_version_of_module_django( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_get_version_of_module_django(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_get_version_of_module_django,
        dparse_function_1_get_version_of_module_django,
        _python_str_plain_get_version,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_c0cfdeab9bd6db8e25ff01037e76b129,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django",   /* m_name */
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

MOD_INIT_DECL( django )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django );
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

    // puts( "in initdjango" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django = Py_InitModule4(
        "django",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django = PyModule_Create( &_moduledef );
#endif

    _moduledict_django = (PyDictObject *)((PyModuleObject *)_module_django)->md_dict;

    assertObject( _module_django );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_plain_django, _module_django );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_3f14d3300964f0192912c22a2a81f32b );
    UPDATE_STRING_DICT1( _moduledict_django, (Nuitka_StringObject *)_python_str_plain___path__, LIST_COPY( _python_list_str_digest_48020e076b0de840accf3eca0a5a071a_list ) );
    UPDATE_STRING_DICT0( _moduledict_django, (Nuitka_StringObject *)_python_str_plain_VERSION, _python_tuple_int_pos_1_int_pos_6_int_0_str_plain_alpha_int_pos_1_tuple );
    UPDATE_STRING_DICT1( _moduledict_django, (Nuitka_StringObject *)_python_str_plain_get_version, MAKE_FUNCTION_function_1_get_version_of_module_django(  ) );

   return MOD_RETURN_VALUE( _module_django );
}
