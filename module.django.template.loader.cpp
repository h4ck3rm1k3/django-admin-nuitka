// Generated code for Python source for module 'django.template.loader'
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

// The _module_django__template__loader is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__template__loader;
PyDictObject *_moduledict_django__template__loader;

// The module level variables.
static PyObjectGlobalVariable_django__template__loader _mvar_django__template__loader_Context( &_module_django__template__loader, &_python_str_plain_Context );
static PyObjectGlobalVariable_django__template__loader _mvar_django__template__loader_ImproperlyConfigured( &_module_django__template__loader, &_python_str_plain_ImproperlyConfigured );
static PyObjectGlobalVariable_django__template__loader _mvar_django__template__loader_LoaderOrigin( &_module_django__template__loader, &_python_str_plain_LoaderOrigin );
static PyObjectGlobalVariable_django__template__loader _mvar_django__template__loader_Origin( &_module_django__template__loader, &_python_str_plain_Origin );
static PyObjectGlobalVariable_django__template__loader _mvar_django__template__loader_Template( &_module_django__template__loader, &_python_str_plain_Template );
static PyObjectGlobalVariable_django__template__loader _mvar_django__template__loader_TemplateDoesNotExist( &_module_django__template__loader, &_python_str_plain_TemplateDoesNotExist );
static PyObjectGlobalVariable_django__template__loader _mvar_django__template__loader___metaclass__( &_module_django__template__loader, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__template__loader _mvar_django__template__loader_add_to_builtins( &_module_django__template__loader, &_python_str_plain_add_to_builtins );
static PyObjectGlobalVariable_django__template__loader _mvar_django__template__loader_find_template( &_module_django__template__loader, &_python_str_plain_find_template );
static PyObjectGlobalVariable_django__template__loader _mvar_django__template__loader_find_template_loader( &_module_django__template__loader, &_python_str_plain_find_template_loader );
static PyObjectGlobalVariable_django__template__loader _mvar_django__template__loader_get_template( &_module_django__template__loader, &_python_str_plain_get_template );
static PyObjectGlobalVariable_django__template__loader _mvar_django__template__loader_get_template_from_string( &_module_django__template__loader, &_python_str_plain_get_template_from_string );
static PyObjectGlobalVariable_django__template__loader _mvar_django__template__loader_import_by_path( &_module_django__template__loader, &_python_str_plain_import_by_path );
static PyObjectGlobalVariable_django__template__loader _mvar_django__template__loader_make_origin( &_module_django__template__loader, &_python_str_plain_make_origin );
static PyObjectGlobalVariable_django__template__loader _mvar_django__template__loader_select_template( &_module_django__template__loader, &_python_str_plain_select_template );
static PyObjectGlobalVariable_django__template__loader _mvar_django__template__loader_settings( &_module_django__template__loader, &_python_str_plain_settings );
static PyObjectGlobalVariable_django__template__loader _mvar_django__template__loader_six( &_module_django__template__loader, &_python_str_plain_six );
static PyObjectGlobalVariable_django__template__loader _mvar_django__template__loader_template_source_loaders( &_module_django__template__loader, &_python_str_plain_template_source_loaders );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_BaseLoader_of_module_django__template__loader(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_2_LoaderOrigin_of_module_django__template__loader(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_BaseLoader_of_module_django__template__loader(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_2_LoaderOrigin_of_module_django__template__loader(  );


static PyObject *MAKE_FUNCTION_function_2___call___of_class_1_BaseLoader_of_module_django__template__loader(  );


static PyObject *MAKE_FUNCTION_function_2_reload_of_class_2_LoaderOrigin_of_module_django__template__loader(  );


static PyObject *MAKE_FUNCTION_function_3_load_template_of_class_1_BaseLoader_of_module_django__template__loader(  );


static PyObject *MAKE_FUNCTION_function_3_make_origin_of_module_django__template__loader(  );


static PyObject *MAKE_FUNCTION_function_4_find_template_loader_of_module_django__template__loader(  );


static PyObject *MAKE_FUNCTION_function_4_load_template_source_of_class_1_BaseLoader_of_module_django__template__loader(  );


static PyObject *MAKE_FUNCTION_function_5_find_template_of_module_django__template__loader(  );


static PyObject *MAKE_FUNCTION_function_5_reset_of_class_1_BaseLoader_of_module_django__template__loader(  );


static PyObject *MAKE_FUNCTION_function_6_get_template_of_module_django__template__loader(  );


static PyObject *MAKE_FUNCTION_function_7_get_template_from_string_of_module_django__template__loader(  );


static PyObject *MAKE_FUNCTION_function_8_render_to_string_of_module_django__template__loader(  );


static PyObject *MAKE_FUNCTION_function_9_select_template_of_module_django__template__loader(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_BaseLoader_of_module_django__template__loader(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var_is_usable( _python_str_plain_is_usable );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var___call__( _python_str_plain___call__ );
    PyObjectLocalVariable _python_var_load_template( _python_str_plain_load_template );
    PyObjectLocalVariable _python_var_load_template_source( _python_str_plain_load_template_source );
    PyObjectLocalVariable _python_var_reset( _python_str_plain_reset );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_loader );
    _python_var_is_usable.assign0( Py_False );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_1_BaseLoader_of_module_django__template__loader(  ) );
    _python_var___call__.assign1( MAKE_FUNCTION_function_2___call___of_class_1_BaseLoader_of_module_django__template__loader(  ) );
    _python_var_load_template.assign1( MAKE_FUNCTION_function_3_load_template_of_class_1_BaseLoader_of_module_django__template__loader(  ) );
    _python_var_load_template_source.assign1( MAKE_FUNCTION_function_4_load_template_source_of_class_1_BaseLoader_of_module_django__template__loader(  ) );
    _python_var_reset.assign1( MAKE_FUNCTION_function_5_reset_of_class_1_BaseLoader_of_module_django__template__loader(  ) );
    return _python_var_reset.updateLocalsDict( _python_var_load_template_source.updateLocalsDict( _python_var_load_template.updateLocalsDict( _python_var___call__.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var_is_usable.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_1_BaseLoader_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_1_BaseLoader_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
    PyObject *_python_par_kwargs = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:

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
                        PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "__init__() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 1 )
    {
        _python_par_args = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_1___init___of_class_1_BaseLoader_of_module_django__template__loader( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_1_BaseLoader_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_1___init___of_class_1_BaseLoader_of_module_django__template__loader( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_1_BaseLoader_of_module_django__template__loader( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___call___of_class_1_BaseLoader_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_template_name, PyObject *_python_par_template_dirs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_template_name( _python_str_plain_template_name, _python_par_template_name );
    PyObjectLocalParameterVariableNoDel _python_var_template_dirs( _python_str_plain_template_dirs, _python_par_template_dirs );

    // Actual function code.
    static PyFrameObject *frame_function_2___call___of_class_1_BaseLoader_of_module_django__template__loader = NULL;

    if ( isFrameUnusable( frame_function_2___call___of_class_1_BaseLoader_of_module_django__template__loader ) )
    {
        if ( frame_function_2___call___of_class_1_BaseLoader_of_module_django__template__loader )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2___call___of_class_1_BaseLoader_of_module_django__template__loader" );
#endif
            Py_DECREF( frame_function_2___call___of_class_1_BaseLoader_of_module_django__template__loader );
        }

        frame_function_2___call___of_class_1_BaseLoader_of_module_django__template__loader = MAKE_FRAME( _codeobj_aad7d25208a25e4258a17b1175036c64, _module_django__template__loader );
    }

    FrameGuard frame_guard( frame_function_2___call___of_class_1_BaseLoader_of_module_django__template__loader );
    try
    {
        assert( Py_REFCNT( frame_function_2___call___of_class_1_BaseLoader_of_module_django__template__loader ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 43 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper0 call2;
            return ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_load_template ) ), call2.assign( _python_var_template_name.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _python_var_template_dirs.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_template_dirs.updateLocalsDict( _python_var_template_name.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_2___call___of_class_1_BaseLoader_of_module_django__template__loader )
        {
           Py_DECREF( frame_function_2___call___of_class_1_BaseLoader_of_module_django__template__loader );
           frame_function_2___call___of_class_1_BaseLoader_of_module_django__template__loader = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2___call___of_class_1_BaseLoader_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_template_name = NULL;
    PyObject *_python_par_template_dirs = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "__call__() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_self == key )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "__call__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_template_name == key )
            {
                if (unlikely( _python_par_template_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__call__() got multiple values for keyword argument 'template_name'" );
                    goto error_exit;
                }

                _python_par_template_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_template_dirs == key )
            {
                if (unlikely( _python_par_template_dirs ))
                {
                    PyErr_Format( PyExc_TypeError, "__call__() got multiple values for keyword argument 'template_dirs'" );
                    goto error_exit;
                }

                _python_par_template_dirs = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "__call__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_template_name, key ) )
            {
                if (unlikely( _python_par_template_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__call__() got multiple values for keyword argument 'template_name'" );
                    goto error_exit;
                }

                _python_par_template_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_template_dirs, key ) )
            {
                if (unlikely( _python_par_template_dirs ))
                {
                    PyErr_Format( PyExc_TypeError, "__call__() got multiple values for keyword argument 'template_dirs'" );
                    goto error_exit;
                }

                _python_par_template_dirs = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__call__() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 3 ))
    {
        if ( 3 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__call__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__call__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__call__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__call__() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__call__() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__call__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__call__() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__call__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 3 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "__call__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__call__() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "__call__() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__call__() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 3 ? args_given : 3;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__call__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_template_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__call__() got multiple values for keyword argument 'template_name'" );
             goto error_exit;
         }

        _python_par_template_name = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_template_dirs != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__call__() got multiple values for keyword argument 'template_dirs'" );
             goto error_exit;
         }

        _python_par_template_dirs = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_template_dirs == NULL )
    {
        _python_par_template_dirs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_template_dirs );
    }


    return impl_function_2___call___of_class_1_BaseLoader_of_module_django__template__loader( self, _python_par_self, _python_par_template_name, _python_par_template_dirs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_template_name );
    Py_XDECREF( _python_par_template_dirs );

    return NULL;
}

static PyObject *dparse_function_2___call___of_class_1_BaseLoader_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_2___call___of_class_1_BaseLoader_of_module_django__template__loader( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___call___of_class_1_BaseLoader_of_module_django__template__loader( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_load_template_of_class_1_BaseLoader_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_template_name, PyObject *_python_par_template_dirs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_template_name( _python_str_plain_template_name, _python_par_template_name );
    PyObjectLocalParameterVariableNoDel _python_var_template_dirs( _python_str_plain_template_dirs, _python_par_template_dirs );
    PyObjectLocalVariable _python_var_source( _python_str_plain_source );
    PyObjectLocalVariable _python_var_display_name( _python_str_plain_display_name );
    PyObjectLocalVariable _python_var_origin( _python_str_plain_origin );
    PyObjectLocalVariable _python_var_template( _python_str_plain_template );

    // Actual function code.
    static PyFrameObject *frame_function_3_load_template_of_class_1_BaseLoader_of_module_django__template__loader = NULL;

    if ( isFrameUnusable( frame_function_3_load_template_of_class_1_BaseLoader_of_module_django__template__loader ) )
    {
        if ( frame_function_3_load_template_of_class_1_BaseLoader_of_module_django__template__loader )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_load_template_of_class_1_BaseLoader_of_module_django__template__loader" );
#endif
            Py_DECREF( frame_function_3_load_template_of_class_1_BaseLoader_of_module_django__template__loader );
        }

        frame_function_3_load_template_of_class_1_BaseLoader_of_module_django__template__loader = MAKE_FRAME( _codeobj_29f4c5fdef7825f5bd8842f819424516, _module_django__template__loader );
    }

    FrameGuard frame_guard( frame_function_3_load_template_of_class_1_BaseLoader_of_module_django__template__loader );
    try
    {
        assert( Py_REFCNT( frame_function_3_load_template_of_class_1_BaseLoader_of_module_django__template__loader ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 46 );
            PyObject *_tmp_python_tmp_source_iter;
            {
                PyObjectTempKeeper1 call1;
                PyObjectTempKeeper0 call2;
                _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_load_template_source ) ), call2.assign( _python_var_template_name.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _python_var_template_dirs.asObject() ) ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
            _python_var_source.assign0( _python_tmp_element_1.asObject() );
            _python_var_display_name.assign0( _python_tmp_element_2.asObject() );
        }
        frame_guard.setLineNumber( 47 );
        {
            PyObjectTempKeeper0 call4;
            PyObjectTempKeeper0 call5;
            PyObjectTempKeeper1 call6;
            PyObjectTempKeeper0 call7;
            _python_var_origin.assign1( ( call4.assign( _mvar_django__template__loader_make_origin.asObject0() ), call5.assign( _python_var_display_name.asObject() ), call6.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_load_template_source ) ), call7.assign( _python_var_template_name.asObject() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), call5.asObject0(), call6.asObject0(), call7.asObject0(), _python_var_template_dirs.asObject() ) ) );
        }
        frame_guard.setLineNumber( 48 );
        try
        {
            frame_guard.setLineNumber( 49 );
            {
                PyObjectTempKeeper0 call11;
                PyObjectTempKeeper0 call12;
                PyObjectTempKeeper0 call13;
                _python_var_template.assign1( ( call11.assign( _mvar_django__template__loader_get_template_from_string.asObject0() ), call12.assign( _python_var_source.asObject() ), call13.assign( _python_var_origin.asObject() ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), call12.asObject0(), call13.asObject0(), _python_var_template_name.asObject() ) ) );
            }
            frame_guard.setLineNumber( 50 );
            return MAKE_TUPLE2( _python_var_template.asObject(), Py_None );
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

            frame_guard.preserveExistingException();

#if PYTHON_VERSION >= 300
            ExceptionRestorerFrameGuard restorer( &frame_guard );
#endif
            _exception.toExceptionHandler();

            if ( _exception.matches( _mvar_django__template__loader_TemplateDoesNotExist.asObject0() ) )
            {
                frame_guard.detachFrame();
                frame_guard.setLineNumber( 56 );
                {
                    PyObjectTempKeeper0 make_tuple9;
                    return ( make_tuple9.assign( _python_var_source.asObject() ), MAKE_TUPLE2( make_tuple9.asObject0(), _python_var_display_name.asObject() ) );
                }
            }
            else
            {
                PyTracebackObject *tb = _exception.getTraceback();
                frame_guard.setLineNumber( tb->tb_lineno );
                _exception.setTraceback( tb->tb_next );
                tb->tb_next = NULL;

                throw;
            }
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
        frame_guard.getFrame0()->f_locals = _python_var_template_dirs.updateLocalsDict( _python_var_template_name.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_template.updateLocalsDict( _python_var_origin.updateLocalsDict( _python_var_display_name.updateLocalsDict( _python_var_source.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_load_template_of_class_1_BaseLoader_of_module_django__template__loader )
        {
           Py_DECREF( frame_function_3_load_template_of_class_1_BaseLoader_of_module_django__template__loader );
           frame_function_3_load_template_of_class_1_BaseLoader_of_module_django__template__loader = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_3_load_template_of_class_1_BaseLoader_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_template_name = NULL;
    PyObject *_python_par_template_dirs = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "load_template() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_self == key )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "load_template() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_template_name == key )
            {
                if (unlikely( _python_par_template_name ))
                {
                    PyErr_Format( PyExc_TypeError, "load_template() got multiple values for keyword argument 'template_name'" );
                    goto error_exit;
                }

                _python_par_template_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_template_dirs == key )
            {
                if (unlikely( _python_par_template_dirs ))
                {
                    PyErr_Format( PyExc_TypeError, "load_template() got multiple values for keyword argument 'template_dirs'" );
                    goto error_exit;
                }

                _python_par_template_dirs = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "load_template() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_template_name, key ) )
            {
                if (unlikely( _python_par_template_name ))
                {
                    PyErr_Format( PyExc_TypeError, "load_template() got multiple values for keyword argument 'template_name'" );
                    goto error_exit;
                }

                _python_par_template_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_template_dirs, key ) )
            {
                if (unlikely( _python_par_template_dirs ))
                {
                    PyErr_Format( PyExc_TypeError, "load_template() got multiple values for keyword argument 'template_dirs'" );
                    goto error_exit;
                }

                _python_par_template_dirs = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "load_template() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 3 ))
    {
        if ( 3 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "load_template() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "load_template() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "load_template() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "load_template() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "load_template() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "load_template() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "load_template() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "load_template() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 3 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "load_template() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "load_template() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "load_template() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "load_template() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 3 ? args_given : 3;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "load_template() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_template_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "load_template() got multiple values for keyword argument 'template_name'" );
             goto error_exit;
         }

        _python_par_template_name = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_template_dirs != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "load_template() got multiple values for keyword argument 'template_dirs'" );
             goto error_exit;
         }

        _python_par_template_dirs = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_template_dirs == NULL )
    {
        _python_par_template_dirs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_template_dirs );
    }


    return impl_function_3_load_template_of_class_1_BaseLoader_of_module_django__template__loader( self, _python_par_self, _python_par_template_name, _python_par_template_dirs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_template_name );
    Py_XDECREF( _python_par_template_dirs );

    return NULL;
}

static PyObject *dparse_function_3_load_template_of_class_1_BaseLoader_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_3_load_template_of_class_1_BaseLoader_of_module_django__template__loader( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_load_template_of_class_1_BaseLoader_of_module_django__template__loader( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_load_template_source_of_class_1_BaseLoader_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_template_name, PyObject *_python_par_template_dirs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_template_name( _python_str_plain_template_name, _python_par_template_name );
    PyObjectLocalParameterVariableNoDel _python_var_template_dirs( _python_str_plain_template_dirs, _python_par_template_dirs );

    // Actual function code.
    static PyFrameObject *frame_function_4_load_template_source_of_class_1_BaseLoader_of_module_django__template__loader = NULL;

    if ( isFrameUnusable( frame_function_4_load_template_source_of_class_1_BaseLoader_of_module_django__template__loader ) )
    {
        if ( frame_function_4_load_template_source_of_class_1_BaseLoader_of_module_django__template__loader )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_load_template_source_of_class_1_BaseLoader_of_module_django__template__loader" );
#endif
            Py_DECREF( frame_function_4_load_template_source_of_class_1_BaseLoader_of_module_django__template__loader );
        }

        frame_function_4_load_template_source_of_class_1_BaseLoader_of_module_django__template__loader = MAKE_FRAME( _codeobj_be4e5928498b8b03c21ecd36089e0f17, _module_django__template__loader );
    }

    FrameGuard frame_guard( frame_function_4_load_template_source_of_class_1_BaseLoader_of_module_django__template__loader );
    try
    {
        assert( Py_REFCNT( frame_function_4_load_template_source_of_class_1_BaseLoader_of_module_django__template__loader ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 64 );
        RAISE_EXCEPTION_WITH_TYPE( PyExc_NotImplementedError, PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_template_dirs.updateLocalsDict( _python_var_template_name.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_4_load_template_source_of_class_1_BaseLoader_of_module_django__template__loader )
        {
           Py_DECREF( frame_function_4_load_template_source_of_class_1_BaseLoader_of_module_django__template__loader );
           frame_function_4_load_template_source_of_class_1_BaseLoader_of_module_django__template__loader = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_load_template_source_of_class_1_BaseLoader_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_template_name = NULL;
    PyObject *_python_par_template_dirs = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "load_template_source() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_self == key )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "load_template_source() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_template_name == key )
            {
                if (unlikely( _python_par_template_name ))
                {
                    PyErr_Format( PyExc_TypeError, "load_template_source() got multiple values for keyword argument 'template_name'" );
                    goto error_exit;
                }

                _python_par_template_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_template_dirs == key )
            {
                if (unlikely( _python_par_template_dirs ))
                {
                    PyErr_Format( PyExc_TypeError, "load_template_source() got multiple values for keyword argument 'template_dirs'" );
                    goto error_exit;
                }

                _python_par_template_dirs = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "load_template_source() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_template_name, key ) )
            {
                if (unlikely( _python_par_template_name ))
                {
                    PyErr_Format( PyExc_TypeError, "load_template_source() got multiple values for keyword argument 'template_name'" );
                    goto error_exit;
                }

                _python_par_template_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_template_dirs, key ) )
            {
                if (unlikely( _python_par_template_dirs ))
                {
                    PyErr_Format( PyExc_TypeError, "load_template_source() got multiple values for keyword argument 'template_dirs'" );
                    goto error_exit;
                }

                _python_par_template_dirs = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "load_template_source() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 3 ))
    {
        if ( 3 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "load_template_source() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "load_template_source() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "load_template_source() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "load_template_source() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "load_template_source() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "load_template_source() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "load_template_source() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "load_template_source() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 3 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "load_template_source() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "load_template_source() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "load_template_source() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "load_template_source() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 3 ? args_given : 3;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "load_template_source() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_template_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "load_template_source() got multiple values for keyword argument 'template_name'" );
             goto error_exit;
         }

        _python_par_template_name = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_template_dirs != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "load_template_source() got multiple values for keyword argument 'template_dirs'" );
             goto error_exit;
         }

        _python_par_template_dirs = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_template_dirs == NULL )
    {
        _python_par_template_dirs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_template_dirs );
    }


    return impl_function_4_load_template_source_of_class_1_BaseLoader_of_module_django__template__loader( self, _python_par_self, _python_par_template_name, _python_par_template_dirs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_template_name );
    Py_XDECREF( _python_par_template_dirs );

    return NULL;
}

static PyObject *dparse_function_4_load_template_source_of_class_1_BaseLoader_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_4_load_template_source_of_class_1_BaseLoader_of_module_django__template__loader( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_load_template_source_of_class_1_BaseLoader_of_module_django__template__loader( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_reset_of_class_1_BaseLoader_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_5_reset_of_class_1_BaseLoader_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "reset() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_self == key )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "reset() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "reset() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "reset() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
        if ( 1 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "reset() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "reset() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "reset() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "reset() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "reset() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "reset() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "reset() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "reset() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "reset() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "reset() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "reset() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "reset() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "reset() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_5_reset_of_class_1_BaseLoader_of_module_django__template__loader( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_5_reset_of_class_1_BaseLoader_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_5_reset_of_class_1_BaseLoader_of_module_django__template__loader( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_reset_of_class_1_BaseLoader_of_module_django__template__loader( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_2_LoaderOrigin_of_module_django__template__loader(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_reload( _python_str_plain_reload );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_loader );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_2_LoaderOrigin_of_module_django__template__loader(  ) );
    _python_var_reload.assign1( MAKE_FUNCTION_function_2_reload_of_class_2_LoaderOrigin_of_module_django__template__loader(  ) );
    return _python_var_reload.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) );
}


static PyObject *impl_function_1___init___of_class_2_LoaderOrigin_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_display_name, PyObject *_python_par_loader, PyObject *_python_par_name, PyObject *_python_par_dirs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_display_name( _python_str_plain_display_name, _python_par_display_name );
    PyObjectLocalParameterVariableNoDel _python_var_loader( _python_str_plain_loader, _python_par_loader );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );
    PyObjectLocalParameterVariableNoDel _python_var_dirs( _python_str_plain_dirs, _python_par_dirs );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_2_LoaderOrigin_of_module_django__template__loader = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_2_LoaderOrigin_of_module_django__template__loader ) )
    {
        if ( frame_function_1___init___of_class_2_LoaderOrigin_of_module_django__template__loader )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_2_LoaderOrigin_of_module_django__template__loader" );
#endif
            Py_DECREF( frame_function_1___init___of_class_2_LoaderOrigin_of_module_django__template__loader );
        }

        frame_function_1___init___of_class_2_LoaderOrigin_of_module_django__template__loader = MAKE_FRAME( _codeobj_a6b348926217c3f44ff58c07d550a704, _module_django__template__loader );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_2_LoaderOrigin_of_module_django__template__loader );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_2_LoaderOrigin_of_module_django__template__loader ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 76 );
        {
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper0 super1;
            DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super1.assign( _mvar_django__template__loader_LoaderOrigin.asObject0() ), BUILTIN_SUPER( super1.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain___init__ ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_display_name.asObject() ) ) );
        }
        {
            frame_guard.setLineNumber( 77 );
            PyObject *_tmp_python_tmp_source_iter;
            {
                PyObjectTempKeeper0 make_tuple5;
                PyObjectTempKeeper0 make_tuple6;
                _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( make_tuple5.assign( _python_var_loader.asObject() ), make_tuple6.assign( _python_var_name.asObject() ), MAKE_TUPLE3( make_tuple5.asObject0(), make_tuple6.asObject0(), _python_var_dirs.asObject() ) ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
            PyObjectTemporary _python_tmp_element_3( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 2 ) );
            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 3 );
            {
                    PyObject *tmp_identifier = _python_tmp_element_1.asObject();
                    SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_loader );
            }
            {
                    PyObject *tmp_identifier = _python_tmp_element_2.asObject();
                    SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_loadname );
            }
            {
                    PyObject *tmp_identifier = _python_tmp_element_3.asObject();
                    SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_dirs );
            }
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
        frame_guard.getFrame0()->f_locals = _python_var_dirs.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var_loader.updateLocalsDict( _python_var_display_name.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_2_LoaderOrigin_of_module_django__template__loader )
        {
           Py_DECREF( frame_function_1___init___of_class_2_LoaderOrigin_of_module_django__template__loader );
           frame_function_1___init___of_class_2_LoaderOrigin_of_module_django__template__loader = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_2_LoaderOrigin_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_display_name = NULL;
    PyObject *_python_par_loader = NULL;
    PyObject *_python_par_name = NULL;
    PyObject *_python_par_dirs = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_self == key )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_display_name == key )
            {
                if (unlikely( _python_par_display_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'display_name'" );
                    goto error_exit;
                }

                _python_par_display_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_loader == key )
            {
                if (unlikely( _python_par_loader ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'loader'" );
                    goto error_exit;
                }

                _python_par_loader = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_name == key )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_dirs == key )
            {
                if (unlikely( _python_par_dirs ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'dirs'" );
                    goto error_exit;
                }

                _python_par_dirs = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_display_name, key ) )
            {
                if (unlikely( _python_par_display_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'display_name'" );
                    goto error_exit;
                }

                _python_par_display_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_loader, key ) )
            {
                if (unlikely( _python_par_loader ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'loader'" );
                    goto error_exit;
                }

                _python_par_loader = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_dirs, key ) )
            {
                if (unlikely( _python_par_dirs ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'dirs'" );
                    goto error_exit;
                }

                _python_par_dirs = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__init__() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 5 ))
    {
        if ( 5 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__init__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 5, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 5 == 5 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
#else
            if ( 5 == 5 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes %d positional arguments but %zd were given", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 5 ))
    {
        if ( 5 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d non-keyword arguments (%zd given)", 5, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 5 == 5 )
                {
                    PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 5, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__init__() takes at least %d arguments (%zd given)", 5, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 5 ? args_given : 5;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_display_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'display_name'" );
             goto error_exit;
         }

        _python_par_display_name = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_loader != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'loader'" );
             goto error_exit;
         }

        _python_par_loader = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_dirs != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'dirs'" );
             goto error_exit;
         }

        _python_par_dirs = INCREASE_REFCOUNT( args[ 4 ] );
    }


    return impl_function_1___init___of_class_2_LoaderOrigin_of_module_django__template__loader( self, _python_par_self, _python_par_display_name, _python_par_loader, _python_par_name, _python_par_dirs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_display_name );
    Py_XDECREF( _python_par_loader );
    Py_XDECREF( _python_par_name );
    Py_XDECREF( _python_par_dirs );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_2_LoaderOrigin_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5)
    {
        return impl_function_1___init___of_class_2_LoaderOrigin_of_module_django__template__loader( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_2_LoaderOrigin_of_module_django__template__loader( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_reload_of_class_2_LoaderOrigin_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_2_reload_of_class_2_LoaderOrigin_of_module_django__template__loader = NULL;

    if ( isFrameUnusable( frame_function_2_reload_of_class_2_LoaderOrigin_of_module_django__template__loader ) )
    {
        if ( frame_function_2_reload_of_class_2_LoaderOrigin_of_module_django__template__loader )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_reload_of_class_2_LoaderOrigin_of_module_django__template__loader" );
#endif
            Py_DECREF( frame_function_2_reload_of_class_2_LoaderOrigin_of_module_django__template__loader );
        }

        frame_function_2_reload_of_class_2_LoaderOrigin_of_module_django__template__loader = MAKE_FRAME( _codeobj_f838062907fd918479359f9795c46f41, _module_django__template__loader );
    }

    FrameGuard frame_guard( frame_function_2_reload_of_class_2_LoaderOrigin_of_module_django__template__loader );
    try
    {
        assert( Py_REFCNT( frame_function_2_reload_of_class_2_LoaderOrigin_of_module_django__template__loader ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 80 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper1 call2;
            return LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_loader ) ), call2.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_loadname ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_dirs ) ).asObject() ) ) ).asObject(), _python_int_0, 0 );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_2_reload_of_class_2_LoaderOrigin_of_module_django__template__loader )
        {
           Py_DECREF( frame_function_2_reload_of_class_2_LoaderOrigin_of_module_django__template__loader );
           frame_function_2_reload_of_class_2_LoaderOrigin_of_module_django__template__loader = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_reload_of_class_2_LoaderOrigin_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "reload() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_self == key )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "reload() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "reload() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "reload() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
        if ( 1 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "reload() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "reload() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "reload() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "reload() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "reload() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "reload() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "reload() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "reload() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "reload() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "reload() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "reload() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "reload() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "reload() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2_reload_of_class_2_LoaderOrigin_of_module_django__template__loader( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2_reload_of_class_2_LoaderOrigin_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2_reload_of_class_2_LoaderOrigin_of_module_django__template__loader( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_reload_of_class_2_LoaderOrigin_of_module_django__template__loader( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_make_origin_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject *_python_par_display_name, PyObject *_python_par_loader, PyObject *_python_par_name, PyObject *_python_par_dirs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_display_name( _python_str_plain_display_name, _python_par_display_name );
    PyObjectLocalParameterVariableNoDel _python_var_loader( _python_str_plain_loader, _python_par_loader );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );
    PyObjectLocalParameterVariableNoDel _python_var_dirs( _python_str_plain_dirs, _python_par_dirs );

    // Actual function code.
    static PyFrameObject *frame_function_3_make_origin_of_module_django__template__loader = NULL;

    if ( isFrameUnusable( frame_function_3_make_origin_of_module_django__template__loader ) )
    {
        if ( frame_function_3_make_origin_of_module_django__template__loader )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_make_origin_of_module_django__template__loader" );
#endif
            Py_DECREF( frame_function_3_make_origin_of_module_django__template__loader );
        }

        frame_function_3_make_origin_of_module_django__template__loader = MAKE_FRAME( _codeobj_6cc8c1449dac1947d8f5deaeaf3c6da7, _module_django__template__loader );
    }

    FrameGuard frame_guard( frame_function_3_make_origin_of_module_django__template__loader );
    try
    {
        assert( Py_REFCNT( frame_function_3_make_origin_of_module_django__template__loader ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 83 );
        if ( ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__loader_settings.asObject0(), _python_str_plain_TEMPLATE_DEBUG ) ).asObject() ) && CHECK_IF_TRUE( _python_var_display_name.asObject() ) ) )
        {
            frame_guard.setLineNumber( 84 );
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call2;
                PyObjectTempKeeper0 call3;
                PyObjectTempKeeper0 call4;
                return ( call1.assign( _mvar_django__template__loader_LoaderOrigin.asObject0() ), call2.assign( _python_var_display_name.asObject() ), call3.assign( _python_var_loader.asObject() ), call4.assign( _python_var_name.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), call3.asObject0(), call4.asObject0(), _python_var_dirs.asObject() ) );
            }
        }
        else
        {
            return INCREASE_REFCOUNT( Py_None );
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
        frame_guard.getFrame0()->f_locals = _python_var_dirs.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var_loader.updateLocalsDict( _python_var_display_name.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_make_origin_of_module_django__template__loader )
        {
           Py_DECREF( frame_function_3_make_origin_of_module_django__template__loader );
           frame_function_3_make_origin_of_module_django__template__loader = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_make_origin_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_display_name = NULL;
    PyObject *_python_par_loader = NULL;
    PyObject *_python_par_name = NULL;
    PyObject *_python_par_dirs = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "make_origin() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_display_name == key )
            {
                if (unlikely( _python_par_display_name ))
                {
                    PyErr_Format( PyExc_TypeError, "make_origin() got multiple values for keyword argument 'display_name'" );
                    goto error_exit;
                }

                _python_par_display_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_loader == key )
            {
                if (unlikely( _python_par_loader ))
                {
                    PyErr_Format( PyExc_TypeError, "make_origin() got multiple values for keyword argument 'loader'" );
                    goto error_exit;
                }

                _python_par_loader = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_name == key )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "make_origin() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_dirs == key )
            {
                if (unlikely( _python_par_dirs ))
                {
                    PyErr_Format( PyExc_TypeError, "make_origin() got multiple values for keyword argument 'dirs'" );
                    goto error_exit;
                }

                _python_par_dirs = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_display_name, key ) )
            {
                if (unlikely( _python_par_display_name ))
                {
                    PyErr_Format( PyExc_TypeError, "make_origin() got multiple values for keyword argument 'display_name'" );
                    goto error_exit;
                }

                _python_par_display_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_loader, key ) )
            {
                if (unlikely( _python_par_loader ))
                {
                    PyErr_Format( PyExc_TypeError, "make_origin() got multiple values for keyword argument 'loader'" );
                    goto error_exit;
                }

                _python_par_loader = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "make_origin() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_dirs, key ) )
            {
                if (unlikely( _python_par_dirs ))
                {
                    PyErr_Format( PyExc_TypeError, "make_origin() got multiple values for keyword argument 'dirs'" );
                    goto error_exit;
                }

                _python_par_dirs = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "make_origin() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 4 ))
    {
        if ( 4 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "make_origin() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "make_origin() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "make_origin() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "make_origin() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "make_origin() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "make_origin() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "make_origin() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "make_origin() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 4 ))
    {
        if ( 4 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "make_origin() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "make_origin() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 4 )
                {
                    PyErr_Format( PyExc_TypeError, "make_origin() takes exactly %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "make_origin() takes at least %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 4 ? args_given : 4;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_display_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "make_origin() got multiple values for keyword argument 'display_name'" );
             goto error_exit;
         }

        _python_par_display_name = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_loader != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "make_origin() got multiple values for keyword argument 'loader'" );
             goto error_exit;
         }

        _python_par_loader = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "make_origin() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_dirs != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "make_origin() got multiple values for keyword argument 'dirs'" );
             goto error_exit;
         }

        _python_par_dirs = INCREASE_REFCOUNT( args[ 3 ] );
    }


    return impl_function_3_make_origin_of_module_django__template__loader( self, _python_par_display_name, _python_par_loader, _python_par_name, _python_par_dirs );

error_exit:;

    Py_XDECREF( _python_par_display_name );
    Py_XDECREF( _python_par_loader );
    Py_XDECREF( _python_par_name );
    Py_XDECREF( _python_par_dirs );

    return NULL;
}

static PyObject *dparse_function_3_make_origin_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_3_make_origin_of_module_django__template__loader( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_make_origin_of_module_django__template__loader( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_find_template_loader_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject *_python_par_loader )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_loader( _python_str_plain_loader, _python_par_loader );
    PyObjectLocalVariable _python_var_args( _python_str_plain_args );
    PyObjectLocalVariable _python_var_TemplateLoader( _python_str_plain_TemplateLoader );
    PyObjectLocalVariable _python_var_func( _python_str_plain_func );
    PyObjectLocalVariable _python_var_warnings( _python_str_plain_warnings );

    // Actual function code.
    static PyFrameObject *frame_function_4_find_template_loader_of_module_django__template__loader = NULL;

    if ( isFrameUnusable( frame_function_4_find_template_loader_of_module_django__template__loader ) )
    {
        if ( frame_function_4_find_template_loader_of_module_django__template__loader )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_find_template_loader_of_module_django__template__loader" );
#endif
            Py_DECREF( frame_function_4_find_template_loader_of_module_django__template__loader );
        }

        frame_function_4_find_template_loader_of_module_django__template__loader = MAKE_FRAME( _codeobj_2ce5e48cda2414a476680ef64d2e5f4d, _module_django__template__loader );
    }

    FrameGuard frame_guard( frame_function_4_find_template_loader_of_module_django__template__loader );
    try
    {
        assert( Py_REFCNT( frame_function_4_find_template_loader_of_module_django__template__loader ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 89 );
        if ( BUILTIN_ISINSTANCE_BOOL( _python_var_loader.asObject(), PyObjectTemporary( MAKE_TUPLE2( LOOKUP_BUILTIN( _python_str_plain_tuple ), LOOKUP_BUILTIN( _python_str_plain_list ) ) ).asObject() ) )
        {
            {
                frame_guard.setLineNumber( 90 );
                PyObject *_tmp_python_tmp_source_iter;
                {
                    PyObjectTempKeeper1 make_tuple1;
                    _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( make_tuple1.assign( LOOKUP_SUBSCRIPT_CONST( _python_var_loader.asObject(), _python_int_0, 0 ) ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( LOOKUP_INDEX_SLICE( _python_var_loader.asObject(), 1, PY_SSIZE_T_MAX ) ).asObject() ) ) ).asObject() );
                }
                PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                _python_var_loader.assign0( _python_tmp_element_1.asObject() );
                _python_var_args.assign0( _python_tmp_element_2.asObject() );
            }
        }
        else
        {
            _python_var_args.assign1( PyList_New( 0 ) );
        }
        frame_guard.setLineNumber( 93 );
        {
            PyObjectTempKeeper0 isinstance11;
            if ( ( isinstance11.assign( _python_var_loader.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance11.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__loader_six.asObject0(), _python_str_plain_string_types ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 94 );
            {
                PyObjectTempKeeper0 call3;
                _python_var_TemplateLoader.assign1( ( call3.assign( _mvar_django__template__loader_import_by_path.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_loader.asObject() ) ) );
            }
            frame_guard.setLineNumber( 96 );
            if ( HAS_ATTRIBUTE( _python_var_TemplateLoader.asObject(), _python_str_plain_load_template_source ) )
            {
                frame_guard.setLineNumber( 97 );
                {
                    PyObjectTempKeeper0 call_tmp5;
                    _python_var_func.assign1( ( call_tmp5.assign( _python_var_TemplateLoader.asObject() ), impl_function_7_complex_call_helper_star_list_of_module___internal__( call_tmp5.asObject(), _python_var_args.asObject1() ) ) );
                }
            }
            else
            {
                frame_guard.setLineNumber( 100 );
                if ( CHECK_IF_TRUE( _python_var_args.asObject() ) )
                {
                    frame_guard.setLineNumber( 101 );
                    {
                        PyObjectTempKeeper0 call7;
                        {
                            PyObjectTemporary tmp_exception_type( ( call7.assign( _mvar_django__template__loader_ImproperlyConfigured.asObject0() ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_a186f371489de29b30ecee614ac2a966, _python_var_loader.asObject() ) ).asObject() ) ) );
                            RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                    }
                    }
                }
                frame_guard.setLineNumber( 102 );
                _python_var_func.assign0( _python_var_TemplateLoader.asObject() );
            }
            frame_guard.setLineNumber( 104 );
            if ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_func.asObject(), _python_str_plain_is_usable ) ).asObject() ) )) )
            {
                frame_guard.setLineNumber( 105 );
                _python_var_warnings.assign1( IMPORT_MODULE( _python_str_plain_warnings, ((PyModuleObject *)_module_django__template__loader)->md_dict, PyObjectTemporary( _python_var_loader.updateLocalsDict( _python_var_warnings.updateLocalsDict( _python_var_func.updateLocalsDict( _python_var_TemplateLoader.updateLocalsDict( _python_var_args.updateLocalsDict( PyDict_New() ) ) ) ) ) ).asObject(), Py_None, _python_int_neg_1 ) );
                frame_guard.setLineNumber( 106 );
                {
                    PyObjectTempKeeper1 call9;
                    DECREASE_REFCOUNT( ( call9.assign( LOOKUP_ATTRIBUTE( _python_var_warnings.asObject(), _python_str_plain_warn ) ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_c3f54da24d4020317804a1eaa6f883ae, _python_var_loader.asObject() ) ).asObject() ) ) );
                }
                return INCREASE_REFCOUNT( Py_None );
            }
            else
            {
                frame_guard.setLineNumber( 109 );
                return _python_var_func.asObject1();
            }
        }
        else
        {
            frame_guard.setLineNumber( 111 );
            {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__loader_ImproperlyConfigured.asObject0(), _python_str_digest_70bc40d65ea4bc1144917353b79fe33e ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
        }
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
        frame_guard.getFrame0()->f_locals = _python_var_loader.updateLocalsDict( _python_var_warnings.updateLocalsDict( _python_var_func.updateLocalsDict( _python_var_TemplateLoader.updateLocalsDict( _python_var_args.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_4_find_template_loader_of_module_django__template__loader )
        {
           Py_DECREF( frame_function_4_find_template_loader_of_module_django__template__loader );
           frame_function_4_find_template_loader_of_module_django__template__loader = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_find_template_loader_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_loader = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "find_template_loader() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_loader == key )
            {
                if (unlikely( _python_par_loader ))
                {
                    PyErr_Format( PyExc_TypeError, "find_template_loader() got multiple values for keyword argument 'loader'" );
                    goto error_exit;
                }

                _python_par_loader = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_loader, key ) )
            {
                if (unlikely( _python_par_loader ))
                {
                    PyErr_Format( PyExc_TypeError, "find_template_loader() got multiple values for keyword argument 'loader'" );
                    goto error_exit;
                }

                _python_par_loader = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "find_template_loader() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
        if ( 1 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "find_template_loader() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "find_template_loader() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "find_template_loader() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "find_template_loader() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "find_template_loader() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "find_template_loader() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "find_template_loader() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "find_template_loader() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "find_template_loader() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "find_template_loader() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "find_template_loader() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "find_template_loader() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_loader != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "find_template_loader() got multiple values for keyword argument 'loader'" );
             goto error_exit;
         }

        _python_par_loader = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_4_find_template_loader_of_module_django__template__loader( self, _python_par_loader );

error_exit:;

    Py_XDECREF( _python_par_loader );

    return NULL;
}

static PyObject *dparse_function_4_find_template_loader_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_4_find_template_loader_of_module_django__template__loader( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_find_template_loader_of_module_django__template__loader( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_find_template_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject *_python_par_name, PyObject *_python_par_dirs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );
    PyObjectLocalParameterVariableNoDel _python_var_dirs( _python_str_plain_dirs, _python_par_dirs );
    PyObjectLocalVariable _python_var_loaders( _python_str_plain_loaders );
    PyObjectLocalVariable _python_var_loader_name( _python_str_plain_loader_name );
    PyObjectLocalVariable _python_var_loader( _python_str_plain_loader );
    PyObjectLocalVariable _python_var_source( _python_str_plain_source );
    PyObjectLocalVariable _python_var_display_name( _python_str_plain_display_name );

    // Actual function code.
    static PyFrameObject *frame_function_5_find_template_of_module_django__template__loader = NULL;

    if ( isFrameUnusable( frame_function_5_find_template_of_module_django__template__loader ) )
    {
        if ( frame_function_5_find_template_of_module_django__template__loader )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_find_template_of_module_django__template__loader" );
#endif
            Py_DECREF( frame_function_5_find_template_of_module_django__template__loader );
        }

        frame_function_5_find_template_of_module_django__template__loader = MAKE_FRAME( _codeobj_777a0c99b39e755117f4556775f84fca, _module_django__template__loader );
    }

    FrameGuard frame_guard( frame_function_5_find_template_of_module_django__template__loader );
    try
    {
        assert( Py_REFCNT( frame_function_5_find_template_of_module_django__template__loader ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 118 );
        if ( ( _mvar_django__template__loader_template_source_loaders.asObject0() == Py_None ) )
        {
            _python_var_loaders.assign1( PyList_New( 0 ) );
            {
                frame_guard.setLineNumber( 120 );
                PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__template__loader_settings.asObject0(), _python_str_plain_TEMPLATE_LOADERS ) ).asObject() ) );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 120 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        _python_var_loader_name.assign0( _python_tmp_iter_value.asObject() );
                    }
                    frame_guard.setLineNumber( 121 );
                    {
                        PyObjectTempKeeper0 call1;
                        _python_var_loader.assign1( ( call1.assign( _mvar_django__template__loader_find_template_loader.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_loader_name.asObject() ) ) );
                    }
                    frame_guard.setLineNumber( 122 );
                    if ( ( _python_var_loader.asObject() != Py_None ) )
                    {
                        frame_guard.setLineNumber( 123 );
                        {
                            PyObjectTempKeeper1 call3;
                            DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_loaders.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_loader.asObject() ) ) );
                        }
                    }

                   CONSIDER_THREADING();
                }
            }
            frame_guard.setLineNumber( 124 );
            UPDATE_STRING_DICT1( _moduledict_django__template__loader, (Nuitka_StringObject *)_python_str_plain_template_source_loaders, TO_TUPLE( _python_var_loaders.asObject() ) );
        }
        {
            frame_guard.setLineNumber( 125 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _mvar_django__template__loader_template_source_loaders.asObject0() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 125 );
                    PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_2 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                    _python_var_loader.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 126 );
                try
                {
                    {
                        frame_guard.setLineNumber( 127 );
                        PyObject *_tmp_python_tmp_source_iter;
                        {
                            PyObjectTempKeeper0 call5;
                            PyObjectTempKeeper0 call6;
                            _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( call5.assign( _python_var_loader.asObject() ), call6.assign( _python_var_name.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), call6.asObject0(), _python_var_dirs.asObject() ) ) ).asObject() );
                        }
                        PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_source.assign0( _python_tmp_element_1.asObject() );
                        _python_var_display_name.assign0( _python_tmp_element_2.asObject() );
                    }
                    frame_guard.setLineNumber( 128 );
                    {
                        PyObjectTempKeeper0 call10;
                        PyObjectTempKeeper0 call11;
                        PyObjectTempKeeper0 call8;
                        PyObjectTempKeeper0 call9;
                        PyObjectTempKeeper0 make_tuple13;
                        return ( make_tuple13.assign( _python_var_source.asObject() ), MAKE_TUPLE2( make_tuple13.asObject0(), PyObjectTemporary( ( call8.assign( _mvar_django__template__loader_make_origin.asObject0() ), call9.assign( _python_var_display_name.asObject() ), call10.assign( _python_var_loader.asObject() ), call11.assign( _python_var_name.asObject() ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), call9.asObject0(), call10.asObject0(), call11.asObject0(), _python_var_dirs.asObject() ) ) ).asObject() ) );
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

                    frame_guard.preserveExistingException();

#if PYTHON_VERSION >= 300
                    ExceptionRestorerFrameGuard restorer( &frame_guard );
#endif
                    _exception.toExceptionHandler();

                    if ( _exception.matches( _mvar_django__template__loader_TemplateDoesNotExist.asObject0() ) )
                    {

                    }
                    else
                    {
                        PyTracebackObject *tb = _exception.getTraceback();
                        frame_guard.setLineNumber( tb->tb_lineno );
                        _exception.setTraceback( tb->tb_next );
                        tb->tb_next = NULL;

                        throw;
                    }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 131 );
        {
            PyObjectTempKeeper0 call15;
            {
                PyObjectTemporary tmp_exception_type( ( call15.assign( _mvar_django__template__loader_TemplateDoesNotExist.asObject0() ), CALL_FUNCTION_WITH_ARGS( call15.asObject0(), _python_var_name.asObject() ) ) );
                RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
        }
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
        frame_guard.getFrame0()->f_locals = _python_var_dirs.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var_display_name.updateLocalsDict( _python_var_source.updateLocalsDict( _python_var_loader.updateLocalsDict( _python_var_loader_name.updateLocalsDict( _python_var_loaders.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_5_find_template_of_module_django__template__loader )
        {
           Py_DECREF( frame_function_5_find_template_of_module_django__template__loader );
           frame_function_5_find_template_of_module_django__template__loader = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5_find_template_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_name = NULL;
    PyObject *_python_par_dirs = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "find_template() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_name == key )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "find_template() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_dirs == key )
            {
                if (unlikely( _python_par_dirs ))
                {
                    PyErr_Format( PyExc_TypeError, "find_template() got multiple values for keyword argument 'dirs'" );
                    goto error_exit;
                }

                _python_par_dirs = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "find_template() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_dirs, key ) )
            {
                if (unlikely( _python_par_dirs ))
                {
                    PyErr_Format( PyExc_TypeError, "find_template() got multiple values for keyword argument 'dirs'" );
                    goto error_exit;
                }

                _python_par_dirs = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "find_template() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 2 ))
    {
        if ( 2 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "find_template() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "find_template() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "find_template() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "find_template() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "find_template() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "find_template() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "find_template() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "find_template() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "find_template() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "find_template() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "find_template() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "find_template() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "find_template() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_dirs != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "find_template() got multiple values for keyword argument 'dirs'" );
             goto error_exit;
         }

        _python_par_dirs = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_dirs == NULL )
    {
        _python_par_dirs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_dirs );
    }


    return impl_function_5_find_template_of_module_django__template__loader( self, _python_par_name, _python_par_dirs );

error_exit:;

    Py_XDECREF( _python_par_name );
    Py_XDECREF( _python_par_dirs );

    return NULL;
}

static PyObject *dparse_function_5_find_template_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_5_find_template_of_module_django__template__loader( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_find_template_of_module_django__template__loader( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_get_template_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject *_python_par_template_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_template_name( _python_str_plain_template_name, _python_par_template_name );
    PyObjectLocalVariable _python_var_template( _python_str_plain_template );
    PyObjectLocalVariable _python_var_origin( _python_str_plain_origin );

    // Actual function code.
    static PyFrameObject *frame_function_6_get_template_of_module_django__template__loader = NULL;

    if ( isFrameUnusable( frame_function_6_get_template_of_module_django__template__loader ) )
    {
        if ( frame_function_6_get_template_of_module_django__template__loader )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6_get_template_of_module_django__template__loader" );
#endif
            Py_DECREF( frame_function_6_get_template_of_module_django__template__loader );
        }

        frame_function_6_get_template_of_module_django__template__loader = MAKE_FRAME( _codeobj_764880a2763b41c8880365ac9eef3b72, _module_django__template__loader );
    }

    FrameGuard frame_guard( frame_function_6_get_template_of_module_django__template__loader );
    try
    {
        assert( Py_REFCNT( frame_function_6_get_template_of_module_django__template__loader ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 138 );
            PyObject *_tmp_python_tmp_source_iter;
            {
                PyObjectTempKeeper0 call1;
                _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( call1.assign( _mvar_django__template__loader_find_template.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_template_name.asObject() ) ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
            _python_var_template.assign0( _python_tmp_element_1.asObject() );
            _python_var_origin.assign0( _python_tmp_element_2.asObject() );
        }
        frame_guard.setLineNumber( 139 );
        if ( (!( HAS_ATTRIBUTE( _python_var_template.asObject(), _python_str_plain_render ) )) )
        {
            frame_guard.setLineNumber( 141 );
            {
                PyObjectTempKeeper0 call3;
                PyObjectTempKeeper0 call4;
                PyObjectTempKeeper0 call5;
                _python_var_template.assign1( ( call3.assign( _mvar_django__template__loader_get_template_from_string.asObject0() ), call4.assign( _python_var_template.asObject() ), call5.assign( _python_var_origin.asObject() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), call4.asObject0(), call5.asObject0(), _python_var_template_name.asObject() ) ) );
            }
        }
        frame_guard.setLineNumber( 142 );
        return _python_var_template.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_template_name.updateLocalsDict( _python_var_origin.updateLocalsDict( _python_var_template.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_6_get_template_of_module_django__template__loader )
        {
           Py_DECREF( frame_function_6_get_template_of_module_django__template__loader );
           frame_function_6_get_template_of_module_django__template__loader = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_6_get_template_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_template_name = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "get_template() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_template_name == key )
            {
                if (unlikely( _python_par_template_name ))
                {
                    PyErr_Format( PyExc_TypeError, "get_template() got multiple values for keyword argument 'template_name'" );
                    goto error_exit;
                }

                _python_par_template_name = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_template_name, key ) )
            {
                if (unlikely( _python_par_template_name ))
                {
                    PyErr_Format( PyExc_TypeError, "get_template() got multiple values for keyword argument 'template_name'" );
                    goto error_exit;
                }

                _python_par_template_name = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_template() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
        if ( 1 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_template() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_template() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_template() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_template() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_template() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_template() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_template() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_template() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "get_template() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_template() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_template() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_template() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_template_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_template() got multiple values for keyword argument 'template_name'" );
             goto error_exit;
         }

        _python_par_template_name = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_6_get_template_of_module_django__template__loader( self, _python_par_template_name );

error_exit:;

    Py_XDECREF( _python_par_template_name );

    return NULL;
}

static PyObject *dparse_function_6_get_template_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_6_get_template_of_module_django__template__loader( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_get_template_of_module_django__template__loader( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7_get_template_from_string_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject *_python_par_source, PyObject *_python_par_origin, PyObject *_python_par_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_source( _python_str_plain_source, _python_par_source );
    PyObjectLocalParameterVariableNoDel _python_var_origin( _python_str_plain_origin, _python_par_origin );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );

    // Actual function code.
    static PyFrameObject *frame_function_7_get_template_from_string_of_module_django__template__loader = NULL;

    if ( isFrameUnusable( frame_function_7_get_template_from_string_of_module_django__template__loader ) )
    {
        if ( frame_function_7_get_template_from_string_of_module_django__template__loader )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_7_get_template_from_string_of_module_django__template__loader" );
#endif
            Py_DECREF( frame_function_7_get_template_from_string_of_module_django__template__loader );
        }

        frame_function_7_get_template_from_string_of_module_django__template__loader = MAKE_FRAME( _codeobj_f89adcffb2a5f62faf8f466f3c39e9f4, _module_django__template__loader );
    }

    FrameGuard frame_guard( frame_function_7_get_template_from_string_of_module_django__template__loader );
    try
    {
        assert( Py_REFCNT( frame_function_7_get_template_from_string_of_module_django__template__loader ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 149 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper0 call2;
            PyObjectTempKeeper0 call3;
            return ( call1.assign( _mvar_django__template__loader_Template.asObject0() ), call2.assign( _python_var_source.asObject() ), call3.assign( _python_var_origin.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), call3.asObject0(), _python_var_name.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_name.updateLocalsDict( _python_var_origin.updateLocalsDict( _python_var_source.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_7_get_template_from_string_of_module_django__template__loader )
        {
           Py_DECREF( frame_function_7_get_template_from_string_of_module_django__template__loader );
           frame_function_7_get_template_from_string_of_module_django__template__loader = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_7_get_template_from_string_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_source = NULL;
    PyObject *_python_par_origin = NULL;
    PyObject *_python_par_name = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "get_template_from_string() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_source == key )
            {
                if (unlikely( _python_par_source ))
                {
                    PyErr_Format( PyExc_TypeError, "get_template_from_string() got multiple values for keyword argument 'source'" );
                    goto error_exit;
                }

                _python_par_source = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_origin == key )
            {
                if (unlikely( _python_par_origin ))
                {
                    PyErr_Format( PyExc_TypeError, "get_template_from_string() got multiple values for keyword argument 'origin'" );
                    goto error_exit;
                }

                _python_par_origin = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_name == key )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "get_template_from_string() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_source, key ) )
            {
                if (unlikely( _python_par_source ))
                {
                    PyErr_Format( PyExc_TypeError, "get_template_from_string() got multiple values for keyword argument 'source'" );
                    goto error_exit;
                }

                _python_par_source = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_origin, key ) )
            {
                if (unlikely( _python_par_origin ))
                {
                    PyErr_Format( PyExc_TypeError, "get_template_from_string() got multiple values for keyword argument 'origin'" );
                    goto error_exit;
                }

                _python_par_origin = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "get_template_from_string() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_template_from_string() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 3 ))
    {
        if ( 3 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_template_from_string() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_template_from_string() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_template_from_string() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_template_from_string() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_template_from_string() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_template_from_string() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_template_from_string() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_template_from_string() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 3 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "get_template_from_string() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_template_from_string() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_template_from_string() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_template_from_string() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 3 ? args_given : 3;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_source != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_template_from_string() got multiple values for keyword argument 'source'" );
             goto error_exit;
         }

        _python_par_source = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_origin != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_template_from_string() got multiple values for keyword argument 'origin'" );
             goto error_exit;
         }

        _python_par_origin = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_template_from_string() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_origin == NULL )
    {
        _python_par_origin = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_origin );
    }
    if ( _python_par_name == NULL )
    {
        _python_par_name = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_name );
    }


    return impl_function_7_get_template_from_string_of_module_django__template__loader( self, _python_par_source, _python_par_origin, _python_par_name );

error_exit:;

    Py_XDECREF( _python_par_source );
    Py_XDECREF( _python_par_origin );
    Py_XDECREF( _python_par_name );

    return NULL;
}

static PyObject *dparse_function_7_get_template_from_string_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_7_get_template_from_string_of_module_django__template__loader( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7_get_template_from_string_of_module_django__template__loader( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8_render_to_string_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject *_python_par_template_name, PyObject *_python_par_dictionary, PyObject *_python_par_context_instance )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_template_name( _python_str_plain_template_name, _python_par_template_name );
    PyObjectLocalParameterVariableNoDel _python_var_dictionary( _python_str_plain_dictionary, _python_par_dictionary );
    PyObjectLocalParameterVariableNoDel _python_var_context_instance( _python_str_plain_context_instance, _python_par_context_instance );
    PyObjectLocalVariable _python_var_t( _python_str_plain_t );

    // Actual function code.
    static PyFrameObject *frame_function_8_render_to_string_of_module_django__template__loader = NULL;

    if ( isFrameUnusable( frame_function_8_render_to_string_of_module_django__template__loader ) )
    {
        if ( frame_function_8_render_to_string_of_module_django__template__loader )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_8_render_to_string_of_module_django__template__loader" );
#endif
            Py_DECREF( frame_function_8_render_to_string_of_module_django__template__loader );
        }

        frame_function_8_render_to_string_of_module_django__template__loader = MAKE_FRAME( _codeobj_8ee16814b1d3137ffb1638ff905f541e, _module_django__template__loader );
    }

    FrameGuard frame_guard( frame_function_8_render_to_string_of_module_django__template__loader );
    try
    {
        assert( Py_REFCNT( frame_function_8_render_to_string_of_module_django__template__loader ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 158 );
        {
            PyObjectTempKeeper0 keeper_0;
            _python_var_dictionary.assign1( ( CHECK_IF_TRUE( keeper_0.assign( _python_var_dictionary.asObject() ) ) ? INCREASE_REFCOUNT( keeper_0.asObject0() ) : PyDict_New() ) );
        }
        frame_guard.setLineNumber( 159 );
        if ( BUILTIN_ISINSTANCE_BOOL( _python_var_template_name.asObject(), PyObjectTemporary( MAKE_TUPLE2( LOOKUP_BUILTIN( _python_str_plain_list ), LOOKUP_BUILTIN( _python_str_plain_tuple ) ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 160 );
            {
                PyObjectTempKeeper0 call1;
                _python_var_t.assign1( ( call1.assign( _mvar_django__template__loader_select_template.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_template_name.asObject() ) ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 162 );
            {
                PyObjectTempKeeper0 call3;
                _python_var_t.assign1( ( call3.assign( _mvar_django__template__loader_get_template.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_template_name.asObject() ) ) );
            }
        }
        frame_guard.setLineNumber( 163 );
        if ( (!( CHECK_IF_TRUE( _python_var_context_instance.asObject() ) )) )
        {
            frame_guard.setLineNumber( 164 );
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper1 call7;
                return ( call7.assign( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_render ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), PyObjectTemporary( ( call5.assign( _mvar_django__template__loader_Context.asObject0() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_dictionary.asObject() ) ) ).asObject() ) );
            }
        }
        frame_guard.setLineNumber( 167 );
        {
            PyObjectTempKeeper1 call9;
            DECREASE_REFCOUNT( ( call9.assign( LOOKUP_ATTRIBUTE( _python_var_context_instance.asObject(), _python_str_plain_update ) ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_var_dictionary.asObject() ) ) );
        }
        frame_guard.setLineNumber( 168 );
        PythonExceptionKeeper _caught_1;

        PyObjectTempKeeper1 _return_value_1;

        try
        {
            frame_guard.setLineNumber( 169 );
            {
                PyObjectTempKeeper1 call11;
                throw ReturnValueException( ( call11.assign( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_render ) ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), _python_var_context_instance.asObject() ) ) );
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

            _caught_1.save( _exception );

#if PYTHON_VERSION >= 300
            frame_guard.preserveExistingException();

            _exception.toExceptionHandler();
#endif
        }
        catch ( ReturnValueException &e )
        {
            _return_value_1.assign( e.getValue() );
        }

        // Final code:
        frame_guard.setLineNumber( 171 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_context_instance.asObject(), _python_str_plain_pop ) ).asObject() ) );
        _caught_1.rethrow();
        assert( _return_value_1.isKeeping() ); // Must be true as this is last.
        return _return_value_1.asObject();
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
        frame_guard.getFrame0()->f_locals = _python_var_context_instance.updateLocalsDict( _python_var_dictionary.updateLocalsDict( _python_var_template_name.updateLocalsDict( _python_var_t.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_8_render_to_string_of_module_django__template__loader )
        {
           Py_DECREF( frame_function_8_render_to_string_of_module_django__template__loader );
           frame_function_8_render_to_string_of_module_django__template__loader = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_8_render_to_string_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_template_name = NULL;
    PyObject *_python_par_dictionary = NULL;
    PyObject *_python_par_context_instance = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "render_to_string() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_template_name == key )
            {
                if (unlikely( _python_par_template_name ))
                {
                    PyErr_Format( PyExc_TypeError, "render_to_string() got multiple values for keyword argument 'template_name'" );
                    goto error_exit;
                }

                _python_par_template_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_dictionary == key )
            {
                if (unlikely( _python_par_dictionary ))
                {
                    PyErr_Format( PyExc_TypeError, "render_to_string() got multiple values for keyword argument 'dictionary'" );
                    goto error_exit;
                }

                _python_par_dictionary = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_context_instance == key )
            {
                if (unlikely( _python_par_context_instance ))
                {
                    PyErr_Format( PyExc_TypeError, "render_to_string() got multiple values for keyword argument 'context_instance'" );
                    goto error_exit;
                }

                _python_par_context_instance = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_template_name, key ) )
            {
                if (unlikely( _python_par_template_name ))
                {
                    PyErr_Format( PyExc_TypeError, "render_to_string() got multiple values for keyword argument 'template_name'" );
                    goto error_exit;
                }

                _python_par_template_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_dictionary, key ) )
            {
                if (unlikely( _python_par_dictionary ))
                {
                    PyErr_Format( PyExc_TypeError, "render_to_string() got multiple values for keyword argument 'dictionary'" );
                    goto error_exit;
                }

                _python_par_dictionary = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_context_instance, key ) )
            {
                if (unlikely( _python_par_context_instance ))
                {
                    PyErr_Format( PyExc_TypeError, "render_to_string() got multiple values for keyword argument 'context_instance'" );
                    goto error_exit;
                }

                _python_par_context_instance = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "render_to_string() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 3 ))
    {
        if ( 3 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "render_to_string() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "render_to_string() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "render_to_string() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "render_to_string() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "render_to_string() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "render_to_string() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "render_to_string() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "render_to_string() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 3 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "render_to_string() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "render_to_string() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "render_to_string() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "render_to_string() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 3 ? args_given : 3;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_template_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "render_to_string() got multiple values for keyword argument 'template_name'" );
             goto error_exit;
         }

        _python_par_template_name = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_dictionary != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "render_to_string() got multiple values for keyword argument 'dictionary'" );
             goto error_exit;
         }

        _python_par_dictionary = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_context_instance != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "render_to_string() got multiple values for keyword argument 'context_instance'" );
             goto error_exit;
         }

        _python_par_context_instance = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_dictionary == NULL )
    {
        _python_par_dictionary = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_dictionary );
    }
    if ( _python_par_context_instance == NULL )
    {
        _python_par_context_instance = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_context_instance );
    }


    return impl_function_8_render_to_string_of_module_django__template__loader( self, _python_par_template_name, _python_par_dictionary, _python_par_context_instance );

error_exit:;

    Py_XDECREF( _python_par_template_name );
    Py_XDECREF( _python_par_dictionary );
    Py_XDECREF( _python_par_context_instance );

    return NULL;
}

static PyObject *dparse_function_8_render_to_string_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_8_render_to_string_of_module_django__template__loader( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_render_to_string_of_module_django__template__loader( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9_select_template_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject *_python_par_template_name_list )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_template_name_list( _python_str_plain_template_name_list, _python_par_template_name_list );
    PyObjectLocalVariable _python_var_not_found( _python_str_plain_not_found );
    PyObjectLocalVariable _python_var_template_name( _python_str_plain_template_name );
    PyObjectLocalVariable _python_var_e( _python_str_plain_e );

    // Actual function code.
    static PyFrameObject *frame_function_9_select_template_of_module_django__template__loader = NULL;

    if ( isFrameUnusable( frame_function_9_select_template_of_module_django__template__loader ) )
    {
        if ( frame_function_9_select_template_of_module_django__template__loader )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_9_select_template_of_module_django__template__loader" );
#endif
            Py_DECREF( frame_function_9_select_template_of_module_django__template__loader );
        }

        frame_function_9_select_template_of_module_django__template__loader = MAKE_FRAME( _codeobj_28046694c12b8e023c9970a433bc8a05, _module_django__template__loader );
    }

    FrameGuard frame_guard( frame_function_9_select_template_of_module_django__template__loader );
    try
    {
        assert( Py_REFCNT( frame_function_9_select_template_of_module_django__template__loader ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 175 );
        if ( (!( CHECK_IF_TRUE( _python_var_template_name_list.asObject() ) )) )
        {
            frame_guard.setLineNumber( 176 );
            {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__loader_TemplateDoesNotExist.asObject0(), _python_str_digest_a00a4b981f34048081da6043fb01741c ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
        }
        _python_var_not_found.assign1( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 178 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_template_name_list.asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 178 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_template_name.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 179 );
                try
                {
                    frame_guard.setLineNumber( 180 );
                    {
                        PyObjectTempKeeper0 call5;
                        return ( call5.assign( _mvar_django__template__loader_get_template.asObject0() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_template_name.asObject() ) );
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

                    frame_guard.preserveExistingException();

#if PYTHON_VERSION >= 300
                    ExceptionRestorerFrameGuard restorer( &frame_guard );
#endif
                    _exception.toExceptionHandler();

                    if ( _exception.matches( _mvar_django__template__loader_TemplateDoesNotExist.asObject0() ) )
                    {
                        frame_guard.detachFrame();
                        _python_var_e.assign0( _exception.getValue() );
                        frame_guard.setLineNumber( 182 );
                        {
                            PyObjectTempKeeper1 cmp3;
                            if ( ( cmp3.assign( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_args ) ).asObject(), _python_int_0, 0 ) ), SEQUENCE_CONTAINS_NOT_BOOL( cmp3.asObject0(), _python_var_not_found.asObject() ) ) )
                        {
                            frame_guard.setLineNumber( 183 );
                            {
                                PyObjectTempKeeper1 call1;
                                DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_not_found.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_args ) ).asObject(), _python_int_0, 0 ) ).asObject() ) ) );
                            }
                        }
                        }
                        frame_guard.setLineNumber( 184 );
                        CONSIDER_THREADING(); continue;
                    }
                    else
                    {
                        PyTracebackObject *tb = _exception.getTraceback();
                        frame_guard.setLineNumber( tb->tb_lineno );
                        _exception.setTraceback( tb->tb_next );
                        tb->tb_next = NULL;

                        throw;
                    }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 186 );
        {
            PyObjectTempKeeper1 call7;
            PyObjectTempKeeper0 call9;
            {
                PyObjectTemporary tmp_exception_type( ( call9.assign( _mvar_django__template__loader_TemplateDoesNotExist.asObject0() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), PyObjectTemporary( ( call7.assign( LOOKUP_ATTRIBUTE( _python_str_digest_fc763cb31e9938f37737394681228f83, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _python_var_not_found.asObject() ) ) ).asObject() ) ) );
                RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
        }
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
        frame_guard.getFrame0()->f_locals = _python_var_template_name_list.updateLocalsDict( _python_var_e.updateLocalsDict( _python_var_template_name.updateLocalsDict( _python_var_not_found.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_9_select_template_of_module_django__template__loader )
        {
           Py_DECREF( frame_function_9_select_template_of_module_django__template__loader );
           frame_function_9_select_template_of_module_django__template__loader = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_9_select_template_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_template_name_list = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "select_template() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_template_name_list == key )
            {
                if (unlikely( _python_par_template_name_list ))
                {
                    PyErr_Format( PyExc_TypeError, "select_template() got multiple values for keyword argument 'template_name_list'" );
                    goto error_exit;
                }

                _python_par_template_name_list = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_template_name_list, key ) )
            {
                if (unlikely( _python_par_template_name_list ))
                {
                    PyErr_Format( PyExc_TypeError, "select_template() got multiple values for keyword argument 'template_name_list'" );
                    goto error_exit;
                }

                _python_par_template_name_list = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "select_template() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
        if ( 1 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "select_template() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "select_template() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "select_template() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "select_template() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "select_template() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "select_template() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "select_template() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "select_template() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "select_template() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "select_template() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "select_template() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "select_template() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_template_name_list != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "select_template() got multiple values for keyword argument 'template_name_list'" );
             goto error_exit;
         }

        _python_par_template_name_list = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_9_select_template_of_module_django__template__loader( self, _python_par_template_name_list );

error_exit:;

    Py_XDECREF( _python_par_template_name_list );

    return NULL;
}

static PyObject *dparse_function_9_select_template_of_module_django__template__loader( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_9_select_template_of_module_django__template__loader( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9_select_template_of_module_django__template__loader( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_BaseLoader_of_module_django__template__loader(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_1_BaseLoader_of_module_django__template__loader,
        dparse_function_1___init___of_class_1_BaseLoader_of_module_django__template__loader,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_7a05e735414b8a34ee3d02c7e74752df,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__loader,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_2_LoaderOrigin_of_module_django__template__loader(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_2_LoaderOrigin_of_module_django__template__loader,
        dparse_function_1___init___of_class_2_LoaderOrigin_of_module_django__template__loader,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_a6b348926217c3f44ff58c07d550a704,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__loader,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___call___of_class_1_BaseLoader_of_module_django__template__loader(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___call___of_class_1_BaseLoader_of_module_django__template__loader,
        dparse_function_2___call___of_class_1_BaseLoader_of_module_django__template__loader,
        _python_str_plain___call__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_aad7d25208a25e4258a17b1175036c64,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__loader,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_reload_of_class_2_LoaderOrigin_of_module_django__template__loader(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_reload_of_class_2_LoaderOrigin_of_module_django__template__loader,
        dparse_function_2_reload_of_class_2_LoaderOrigin_of_module_django__template__loader,
        _python_str_plain_reload,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_f838062907fd918479359f9795c46f41,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__loader,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_load_template_of_class_1_BaseLoader_of_module_django__template__loader(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_load_template_of_class_1_BaseLoader_of_module_django__template__loader,
        dparse_function_3_load_template_of_class_1_BaseLoader_of_module_django__template__loader,
        _python_str_plain_load_template,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_29f4c5fdef7825f5bd8842f819424516,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__loader,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_make_origin_of_module_django__template__loader(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_make_origin_of_module_django__template__loader,
        dparse_function_3_make_origin_of_module_django__template__loader,
        _python_str_plain_make_origin,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_6cc8c1449dac1947d8f5deaeaf3c6da7,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__loader,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_find_template_loader_of_module_django__template__loader(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_find_template_loader_of_module_django__template__loader,
        dparse_function_4_find_template_loader_of_module_django__template__loader,
        _python_str_plain_find_template_loader,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_2ce5e48cda2414a476680ef64d2e5f4d,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__loader,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_load_template_source_of_class_1_BaseLoader_of_module_django__template__loader(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_load_template_source_of_class_1_BaseLoader_of_module_django__template__loader,
        dparse_function_4_load_template_source_of_class_1_BaseLoader_of_module_django__template__loader,
        _python_str_plain_load_template_source,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_be4e5928498b8b03c21ecd36089e0f17,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__loader,
        _python_str_digest_38e7e9d13aded6044454554c60b88a57
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_find_template_of_module_django__template__loader(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_find_template_of_module_django__template__loader,
        dparse_function_5_find_template_of_module_django__template__loader,
        _python_str_plain_find_template,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_777a0c99b39e755117f4556775f84fca,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__loader,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_reset_of_class_1_BaseLoader_of_module_django__template__loader(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_reset_of_class_1_BaseLoader_of_module_django__template__loader,
        dparse_function_5_reset_of_class_1_BaseLoader_of_module_django__template__loader,
        _python_str_plain_reset,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_6db69a93c2de543a36d0378580de08be,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__loader,
        _python_str_digest_1753cd5de65d4003ad8260d80c195c10
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_get_template_of_module_django__template__loader(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_get_template_of_module_django__template__loader,
        dparse_function_6_get_template_of_module_django__template__loader,
        _python_str_plain_get_template,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_764880a2763b41c8880365ac9eef3b72,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__loader,
        _python_str_digest_c3521022276fe72fa17dad1d5d0b3d4b
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_get_template_from_string_of_module_django__template__loader(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_get_template_from_string_of_module_django__template__loader,
        dparse_function_7_get_template_from_string_of_module_django__template__loader,
        _python_str_plain_get_template_from_string,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_f89adcffb2a5f62faf8f466f3c39e9f4,
        INCREASE_REFCOUNT( _python_tuple_none_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__loader,
        _python_str_digest_c6e62c19c010f5c3ca45cb9682fe019f
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_render_to_string_of_module_django__template__loader(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_render_to_string_of_module_django__template__loader,
        dparse_function_8_render_to_string_of_module_django__template__loader,
        _python_str_plain_render_to_string,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_8ee16814b1d3137ffb1638ff905f541e,
        INCREASE_REFCOUNT( _python_tuple_none_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__loader,
        _python_str_digest_b348d701f208c1a886dcebf140a24967
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_select_template_of_module_django__template__loader(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_select_template_of_module_django__template__loader,
        dparse_function_9_select_template_of_module_django__template__loader,
        _python_str_plain_select_template,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_28046694c12b8e023c9970a433bc8a05,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__template__loader,
        _python_str_digest_1161b0bbdf3b204b3dc63d166aa0f9b9
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.template.loader",   /* m_name */
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

MOD_INIT_DECL( django__template__loader )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__template__loader );
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

    // puts( "in initdjango__template__loader" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__template__loader = Py_InitModule4(
        "django.template.loader",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__template__loader = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__template__loader = (PyDictObject *)((PyModuleObject *)_module_django__template__loader)->md_dict;

    assertObject( _module_django__template__loader );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_bfd85b841356e595bb02a3878b7bc4a8, _module_django__template__loader );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__template__loader );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__template__loader != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__template__loader, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django__template__loader, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_1166359390cc419605c5c9977627d7f1 );
    PyFrameObject *frame_module_django__template__loader = MAKE_FRAME( _codeobj_ed80703fdaef85ebf749c78930688e05, _module_django__template__loader );

    FrameGuard frame_guard( frame_module_django__template__loader );
    try
    {
        assert( Py_REFCNT( frame_module_django__template__loader ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 28 );
        UPDATE_STRING_DICT1( _moduledict_django__template__loader, (Nuitka_StringObject *)_python_str_plain_ImproperlyConfigured, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d9333e07c409926fdd89a4c3c526d0b5, ((PyModuleObject *)_module_django__template__loader)->md_dict, ((PyModuleObject *)_module_django__template__loader)->md_dict, _python_list_str_plain_ImproperlyConfigured_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ImproperlyConfigured ) );
        frame_guard.setLineNumber( 29 );
        UPDATE_STRING_DICT1( _moduledict_django__template__loader, (Nuitka_StringObject *)_python_str_plain_Origin, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template__loader)->md_dict, ((PyModuleObject *)_module_django__template__loader)->md_dict, _python_list_eb82b62fbe4395eed784116b9363d20e_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_Origin ) );
        UPDATE_STRING_DICT1( _moduledict_django__template__loader, (Nuitka_StringObject *)_python_str_plain_Template, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template__loader)->md_dict, ((PyModuleObject *)_module_django__template__loader)->md_dict, _python_list_eb82b62fbe4395eed784116b9363d20e_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_Template ) );
        UPDATE_STRING_DICT1( _moduledict_django__template__loader, (Nuitka_StringObject *)_python_str_plain_Context, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template__loader)->md_dict, ((PyModuleObject *)_module_django__template__loader)->md_dict, _python_list_eb82b62fbe4395eed784116b9363d20e_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_Context ) );
        UPDATE_STRING_DICT1( _moduledict_django__template__loader, (Nuitka_StringObject *)_python_str_plain_TemplateDoesNotExist, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template__loader)->md_dict, ((PyModuleObject *)_module_django__template__loader)->md_dict, _python_list_eb82b62fbe4395eed784116b9363d20e_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_TemplateDoesNotExist ) );
        UPDATE_STRING_DICT1( _moduledict_django__template__loader, (Nuitka_StringObject *)_python_str_plain_add_to_builtins, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c72c0a4e58601775d8884d77d5268783, ((PyModuleObject *)_module_django__template__loader)->md_dict, ((PyModuleObject *)_module_django__template__loader)->md_dict, _python_list_eb82b62fbe4395eed784116b9363d20e_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_add_to_builtins ) );
        frame_guard.setLineNumber( 30 );
        UPDATE_STRING_DICT1( _moduledict_django__template__loader, (Nuitka_StringObject *)_python_str_plain_settings, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__template__loader)->md_dict, ((PyModuleObject *)_module_django__template__loader)->md_dict, _python_list_str_plain_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_settings ) );
        frame_guard.setLineNumber( 31 );
        UPDATE_STRING_DICT1( _moduledict_django__template__loader, (Nuitka_StringObject *)_python_str_plain_import_by_path, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_03bb9f131d782ff4dbd31e0966379285, ((PyModuleObject *)_module_django__template__loader)->md_dict, ((PyModuleObject *)_module_django__template__loader)->md_dict, _python_list_str_plain_import_by_path_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_import_by_path ) );
        frame_guard.setLineNumber( 32 );
        UPDATE_STRING_DICT1( _moduledict_django__template__loader, (Nuitka_StringObject *)_python_str_plain_six, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__template__loader)->md_dict, ((PyModuleObject *)_module_django__template__loader)->md_dict, _python_list_str_plain_six_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_six ) );
        UPDATE_STRING_DICT0( _moduledict_django__template__loader, (Nuitka_StringObject *)_python_str_plain_template_source_loaders, Py_None );
        {
            frame_guard.setLineNumber( 36 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_1_BaseLoader_of_module_django__template__loader(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__template__loader___metaclass__.isInitialized( false ) ? _mvar_django__template__loader___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_BaseLoader, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__template__loader, (Nuitka_StringObject *)_python_str_plain_BaseLoader, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 74 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__template__loader_Origin.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_2_LoaderOrigin_of_module_django__template__loader(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__template__loader___metaclass__.isInitialized( false ) ? _mvar_django__template__loader___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper0 call7;
                _tmp_python_tmp_class = ( call5.assign( _python_tmp_metaclass.asObject() ), call7.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_str_plain_LoaderOrigin, call7.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__template__loader, (Nuitka_StringObject *)_python_str_plain_LoaderOrigin, _python_tmp_class.asObject() );
        }
        UPDATE_STRING_DICT1( _moduledict_django__template__loader, (Nuitka_StringObject *)_python_str_plain_make_origin, MAKE_FUNCTION_function_3_make_origin_of_module_django__template__loader(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__template__loader, (Nuitka_StringObject *)_python_str_plain_find_template_loader, MAKE_FUNCTION_function_4_find_template_loader_of_module_django__template__loader(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__template__loader, (Nuitka_StringObject *)_python_str_plain_find_template, MAKE_FUNCTION_function_5_find_template_of_module_django__template__loader(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__template__loader, (Nuitka_StringObject *)_python_str_plain_get_template, MAKE_FUNCTION_function_6_get_template_of_module_django__template__loader(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__template__loader, (Nuitka_StringObject *)_python_str_plain_get_template_from_string, MAKE_FUNCTION_function_7_get_template_from_string_of_module_django__template__loader(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__template__loader, (Nuitka_StringObject *)_python_str_plain_render_to_string, MAKE_FUNCTION_function_8_render_to_string_of_module_django__template__loader(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__template__loader, (Nuitka_StringObject *)_python_str_plain_select_template, MAKE_FUNCTION_function_9_select_template_of_module_django__template__loader(  ) );
        frame_guard.setLineNumber( 188 );
        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( _mvar_django__template__loader_add_to_builtins.asObject0(), _python_str_digest_22abfe57b9fa0d6c2bc09817fcb3ff9b ) );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__template__loader)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }

   return MOD_RETURN_VALUE( _module_django__template__loader );
}
