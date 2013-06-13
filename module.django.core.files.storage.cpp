// Generated code for Python source for module 'django.core.files.storage'
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

// The _module_django__core__files__storage is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__core__files__storage;
PyDictObject *_moduledict_django__core__files__storage;

// The module level variables.
static PyObjectGlobalVariable_django__core__files__storage _mvar_django__core__files__storage_DefaultStorage( &_module_django__core__files__storage, &_python_str_plain_DefaultStorage );
static PyObjectGlobalVariable_django__core__files__storage _mvar_django__core__files__storage_File( &_module_django__core__files__storage, &_python_str_plain_File );
static PyObjectGlobalVariable_django__core__files__storage _mvar_django__core__files__storage_LazyObject( &_module_django__core__files__storage, &_python_str_plain_LazyObject );
static PyObjectGlobalVariable_django__core__files__storage _mvar_django__core__files__storage_Storage( &_module_django__core__files__storage, &_python_str_plain_Storage );
static PyObjectGlobalVariable_django__core__files__storage _mvar_django__core__files__storage_SuspiciousFileOperation( &_module_django__core__files__storage, &_python_str_plain_SuspiciousFileOperation );
static PyObjectGlobalVariable_django__core__files__storage _mvar_django__core__files__storage___metaclass__( &_module_django__core__files__storage, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__core__files__storage _mvar_django__core__files__storage_abspathu( &_module_django__core__files__storage, &_python_str_plain_abspathu );
static PyObjectGlobalVariable_django__core__files__storage _mvar_django__core__files__storage_datetime( &_module_django__core__files__storage, &_python_str_plain_datetime );
static PyObjectGlobalVariable_django__core__files__storage _mvar_django__core__files__storage_errno( &_module_django__core__files__storage, &_python_str_plain_errno );
static PyObjectGlobalVariable_django__core__files__storage _mvar_django__core__files__storage_file_move_safe( &_module_django__core__files__storage, &_python_str_plain_file_move_safe );
static PyObjectGlobalVariable_django__core__files__storage _mvar_django__core__files__storage_filepath_to_uri( &_module_django__core__files__storage, &_python_str_plain_filepath_to_uri );
static PyObjectGlobalVariable_django__core__files__storage _mvar_django__core__files__storage_force_text( &_module_django__core__files__storage, &_python_str_plain_force_text );
static PyObjectGlobalVariable_django__core__files__storage _mvar_django__core__files__storage_get_storage_class( &_module_django__core__files__storage, &_python_str_plain_get_storage_class );
static PyObjectGlobalVariable_django__core__files__storage _mvar_django__core__files__storage_get_valid_filename( &_module_django__core__files__storage, &_python_str_plain_get_valid_filename );
static PyObjectGlobalVariable_django__core__files__storage _mvar_django__core__files__storage_import_by_path( &_module_django__core__files__storage, &_python_str_plain_import_by_path );
static PyObjectGlobalVariable_django__core__files__storage _mvar_django__core__files__storage_itertools( &_module_django__core__files__storage, &_python_str_plain_itertools );
static PyObjectGlobalVariable_django__core__files__storage _mvar_django__core__files__storage_locks( &_module_django__core__files__storage, &_python_str_plain_locks );
static PyObjectGlobalVariable_django__core__files__storage _mvar_django__core__files__storage_os( &_module_django__core__files__storage, &_python_str_plain_os );
static PyObjectGlobalVariable_django__core__files__storage _mvar_django__core__files__storage_safe_join( &_module_django__core__files__storage, &_python_str_plain_safe_join );
static PyObjectGlobalVariable_django__core__files__storage _mvar_django__core__files__storage_settings( &_module_django__core__files__storage, &_python_str_plain_settings );
static PyObjectGlobalVariable_django__core__files__storage _mvar_django__core__files__storage_urljoin( &_module_django__core__files__storage, &_python_str_plain_urljoin );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_Storage_of_module_django__core__files__storage(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_2_FileSystemStorage_of_module_django__core__files__storage(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_4_DefaultStorage_of_module_django__core__files__storage(  );


static PyObject *MAKE_FUNCTION_function_10_accessed_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage(  );


static PyObject *MAKE_FUNCTION_function_10_url_of_class_1_Storage_of_module_django__core__files__storage(  );


static PyObject *MAKE_FUNCTION_function_11_accessed_time_of_class_1_Storage_of_module_django__core__files__storage(  );


static PyObject *MAKE_FUNCTION_function_11_created_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage(  );


static PyObject *MAKE_FUNCTION_function_12_created_time_of_class_1_Storage_of_module_django__core__files__storage(  );


static PyObject *MAKE_FUNCTION_function_12_modified_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage(  );


static PyObject *MAKE_FUNCTION_function_13_modified_time_of_class_1_Storage_of_module_django__core__files__storage(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_2_FileSystemStorage_of_module_django__core__files__storage(  );


static PyObject *MAKE_FUNCTION_function_1__setup_of_class_4_DefaultStorage_of_module_django__core__files__storage(  );


static PyObject *MAKE_FUNCTION_function_1_open_of_class_1_Storage_of_module_django__core__files__storage(  );


static PyObject *MAKE_FUNCTION_function_2__open_of_class_2_FileSystemStorage_of_module_django__core__files__storage(  );


static PyObject *MAKE_FUNCTION_function_2_save_of_class_1_Storage_of_module_django__core__files__storage(  );


static PyObject *MAKE_FUNCTION_function_3__save_of_class_2_FileSystemStorage_of_module_django__core__files__storage(  );


static PyObject *MAKE_FUNCTION_function_3_get_storage_class_of_module_django__core__files__storage(  );


static PyObject *MAKE_FUNCTION_function_3_get_valid_name_of_class_1_Storage_of_module_django__core__files__storage(  );


static PyObject *MAKE_FUNCTION_function_4_delete_of_class_2_FileSystemStorage_of_module_django__core__files__storage(  );


static PyObject *MAKE_FUNCTION_function_4_get_available_name_of_class_1_Storage_of_module_django__core__files__storage(  );


static PyObject *MAKE_FUNCTION_function_5_exists_of_class_2_FileSystemStorage_of_module_django__core__files__storage(  );


static PyObject *MAKE_FUNCTION_function_5_path_of_class_1_Storage_of_module_django__core__files__storage(  );


static PyObject *MAKE_FUNCTION_function_6_delete_of_class_1_Storage_of_module_django__core__files__storage(  );


static PyObject *MAKE_FUNCTION_function_6_listdir_of_class_2_FileSystemStorage_of_module_django__core__files__storage(  );


static PyObject *MAKE_FUNCTION_function_7_exists_of_class_1_Storage_of_module_django__core__files__storage(  );


static PyObject *MAKE_FUNCTION_function_7_path_of_class_2_FileSystemStorage_of_module_django__core__files__storage(  );


static PyObject *MAKE_FUNCTION_function_8_listdir_of_class_1_Storage_of_module_django__core__files__storage(  );


static PyObject *MAKE_FUNCTION_function_8_size_of_class_2_FileSystemStorage_of_module_django__core__files__storage(  );


static PyObject *MAKE_FUNCTION_function_9_size_of_class_1_Storage_of_module_django__core__files__storage(  );


static PyObject *MAKE_FUNCTION_function_9_url_of_class_2_FileSystemStorage_of_module_django__core__files__storage(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_Storage_of_module_django__core__files__storage(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var_open( _python_str_plain_open );
    PyObjectLocalVariable _python_var_save( _python_str_plain_save );
    PyObjectLocalVariable _python_var_get_valid_name( _python_str_plain_get_valid_name );
    PyObjectLocalVariable _python_var_get_available_name( _python_str_plain_get_available_name );
    PyObjectLocalVariable _python_var_path( _python_str_plain_path );
    PyObjectLocalVariable _python_var_delete( _python_str_plain_delete );
    PyObjectLocalVariable _python_var_exists( _python_str_plain_exists );
    PyObjectLocalVariable _python_var_listdir( _python_str_plain_listdir );
    PyObjectLocalVariable _python_var_size( _python_str_plain_size );
    PyObjectLocalVariable _python_var_url( _python_str_plain_url );
    PyObjectLocalVariable _python_var_accessed_time( _python_str_plain_accessed_time );
    PyObjectLocalVariable _python_var_created_time( _python_str_plain_created_time );
    PyObjectLocalVariable _python_var_modified_time( _python_str_plain_modified_time );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_storage );
    _python_var___doc__.assign0( _python_str_digest_a61ad7427025cac34641132c2a8ca895 );
    _python_var_open.assign1( MAKE_FUNCTION_function_1_open_of_class_1_Storage_of_module_django__core__files__storage(  ) );
    _python_var_save.assign1( MAKE_FUNCTION_function_2_save_of_class_1_Storage_of_module_django__core__files__storage(  ) );
    _python_var_get_valid_name.assign1( MAKE_FUNCTION_function_3_get_valid_name_of_class_1_Storage_of_module_django__core__files__storage(  ) );
    _python_var_get_available_name.assign1( MAKE_FUNCTION_function_4_get_available_name_of_class_1_Storage_of_module_django__core__files__storage(  ) );
    _python_var_path.assign1( MAKE_FUNCTION_function_5_path_of_class_1_Storage_of_module_django__core__files__storage(  ) );
    _python_var_delete.assign1( MAKE_FUNCTION_function_6_delete_of_class_1_Storage_of_module_django__core__files__storage(  ) );
    _python_var_exists.assign1( MAKE_FUNCTION_function_7_exists_of_class_1_Storage_of_module_django__core__files__storage(  ) );
    _python_var_listdir.assign1( MAKE_FUNCTION_function_8_listdir_of_class_1_Storage_of_module_django__core__files__storage(  ) );
    _python_var_size.assign1( MAKE_FUNCTION_function_9_size_of_class_1_Storage_of_module_django__core__files__storage(  ) );
    _python_var_url.assign1( MAKE_FUNCTION_function_10_url_of_class_1_Storage_of_module_django__core__files__storage(  ) );
    _python_var_accessed_time.assign1( MAKE_FUNCTION_function_11_accessed_time_of_class_1_Storage_of_module_django__core__files__storage(  ) );
    _python_var_created_time.assign1( MAKE_FUNCTION_function_12_created_time_of_class_1_Storage_of_module_django__core__files__storage(  ) );
    _python_var_modified_time.assign1( MAKE_FUNCTION_function_13_modified_time_of_class_1_Storage_of_module_django__core__files__storage(  ) );
    return _python_var_modified_time.updateLocalsDict( _python_var_created_time.updateLocalsDict( _python_var_accessed_time.updateLocalsDict( _python_var_url.updateLocalsDict( _python_var_size.updateLocalsDict( _python_var_listdir.updateLocalsDict( _python_var_exists.updateLocalsDict( _python_var_delete.updateLocalsDict( _python_var_path.updateLocalsDict( _python_var_get_available_name.updateLocalsDict( _python_var_get_valid_name.updateLocalsDict( _python_var_save.updateLocalsDict( _python_var_open.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) );
}


static PyObject *impl_function_1_open_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name, PyObject *_python_par_mode )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );
    PyObjectLocalParameterVariableNoDel _python_var_mode( _python_str_plain_mode, _python_par_mode );

    // Actual function code.
    static PyFrameObject *frame_function_1_open_of_class_1_Storage_of_module_django__core__files__storage = NULL;

    if ( isFrameUnusable( frame_function_1_open_of_class_1_Storage_of_module_django__core__files__storage ) )
    {
        if ( frame_function_1_open_of_class_1_Storage_of_module_django__core__files__storage )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_open_of_class_1_Storage_of_module_django__core__files__storage" );
#endif
            Py_DECREF( frame_function_1_open_of_class_1_Storage_of_module_django__core__files__storage );
        }

        frame_function_1_open_of_class_1_Storage_of_module_django__core__files__storage = MAKE_FRAME( _codeobj_7c88ef11ac0f4177d62032ab37bf15d7, _module_django__core__files__storage );
    }

    FrameGuard frame_guard( frame_function_1_open_of_class_1_Storage_of_module_django__core__files__storage );
    try
    {
        assert( Py_REFCNT( frame_function_1_open_of_class_1_Storage_of_module_django__core__files__storage ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 36 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper0 call2;
            return ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__open ) ), call2.assign( _python_var_name.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _python_var_mode.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_mode.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_open_of_class_1_Storage_of_module_django__core__files__storage )
        {
           Py_DECREF( frame_function_1_open_of_class_1_Storage_of_module_django__core__files__storage );
           frame_function_1_open_of_class_1_Storage_of_module_django__core__files__storage = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1_open_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_name = NULL;
    PyObject *_python_par_mode = NULL;
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
                PyErr_Format( PyExc_TypeError, "open() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "open() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_name == key )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "open() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_mode == key )
            {
                if (unlikely( _python_par_mode ))
                {
                    PyErr_Format( PyExc_TypeError, "open() got multiple values for keyword argument 'mode'" );
                    goto error_exit;
                }

                _python_par_mode = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "open() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "open() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_mode, key ) )
            {
                if (unlikely( _python_par_mode ))
                {
                    PyErr_Format( PyExc_TypeError, "open() got multiple values for keyword argument 'mode'" );
                    goto error_exit;
                }

                _python_par_mode = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "open() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "open() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "open() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "open() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "open() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "open() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "open() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "open() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "open() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "open() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "open() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "open() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "open() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "open() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "open() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_mode != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "open() got multiple values for keyword argument 'mode'" );
             goto error_exit;
         }

        _python_par_mode = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_mode == NULL )
    {
        _python_par_mode = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_mode );
    }


    return impl_function_1_open_of_class_1_Storage_of_module_django__core__files__storage( self, _python_par_self, _python_par_name, _python_par_mode );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );
    Py_XDECREF( _python_par_mode );

    return NULL;
}

static PyObject *dparse_function_1_open_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_1_open_of_class_1_Storage_of_module_django__core__files__storage( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_open_of_class_1_Storage_of_module_django__core__files__storage( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_save_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name, PyObject *_python_par_content )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );
    PyObjectLocalParameterVariableNoDel _python_var_content( _python_str_plain_content, _python_par_content );

    // Actual function code.
    static PyFrameObject *frame_function_2_save_of_class_1_Storage_of_module_django__core__files__storage = NULL;

    if ( isFrameUnusable( frame_function_2_save_of_class_1_Storage_of_module_django__core__files__storage ) )
    {
        if ( frame_function_2_save_of_class_1_Storage_of_module_django__core__files__storage )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_save_of_class_1_Storage_of_module_django__core__files__storage" );
#endif
            Py_DECREF( frame_function_2_save_of_class_1_Storage_of_module_django__core__files__storage );
        }

        frame_function_2_save_of_class_1_Storage_of_module_django__core__files__storage = MAKE_FRAME( _codeobj_18d49dddcbb9f76ee525ec028af1f806, _module_django__core__files__storage );
    }

    FrameGuard frame_guard( frame_function_2_save_of_class_1_Storage_of_module_django__core__files__storage );
    try
    {
        assert( Py_REFCNT( frame_function_2_save_of_class_1_Storage_of_module_django__core__files__storage ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 45 );
        if ( ( _python_var_name.asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 46 );
            _python_var_name.assign1( LOOKUP_ATTRIBUTE( _python_var_content.asObject(), _python_str_plain_name ) );
        }
        frame_guard.setLineNumber( 48 );
        if ( (!( HAS_ATTRIBUTE( _python_var_content.asObject(), _python_str_plain_chunks ) )) )
        {
            frame_guard.setLineNumber( 49 );
            {
                PyObjectTempKeeper0 call1;
                _python_var_content.assign1( ( call1.assign( _mvar_django__core__files__storage_File.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_content.asObject() ) ) );
            }
        }
        frame_guard.setLineNumber( 51 );
        {
            PyObjectTempKeeper1 call3;
            _python_var_name.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_available_name ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_name.asObject() ) ) );
        }
        frame_guard.setLineNumber( 52 );
        {
            PyObjectTempKeeper1 call5;
            PyObjectTempKeeper0 call6;
            _python_var_name.assign1( ( call5.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__save ) ), call6.assign( _python_var_name.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), call6.asObject0(), _python_var_content.asObject() ) ) );
        }
        frame_guard.setLineNumber( 55 );
        {
            PyObjectTempKeeper0 call8;
            return ( call8.assign( _mvar_django__core__files__storage_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_name.asObject(), _python_str_plain_replace ) ).asObject(), _python_str_chr_92, _python_str_chr_47 ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_content.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_save_of_class_1_Storage_of_module_django__core__files__storage )
        {
           Py_DECREF( frame_function_2_save_of_class_1_Storage_of_module_django__core__files__storage );
           frame_function_2_save_of_class_1_Storage_of_module_django__core__files__storage = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_save_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_name = NULL;
    PyObject *_python_par_content = NULL;
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
                PyErr_Format( PyExc_TypeError, "save() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "save() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_name == key )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "save() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_content == key )
            {
                if (unlikely( _python_par_content ))
                {
                    PyErr_Format( PyExc_TypeError, "save() got multiple values for keyword argument 'content'" );
                    goto error_exit;
                }

                _python_par_content = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "save() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "save() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_content, key ) )
            {
                if (unlikely( _python_par_content ))
                {
                    PyErr_Format( PyExc_TypeError, "save() got multiple values for keyword argument 'content'" );
                    goto error_exit;
                }

                _python_par_content = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "save() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "save() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "save() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "save() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "save() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "save() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "save() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "save() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "save() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 3 ))
    {
        if ( 3 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "save() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "save() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "save() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "save() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "save() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "save() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_content != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "save() got multiple values for keyword argument 'content'" );
             goto error_exit;
         }

        _python_par_content = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_2_save_of_class_1_Storage_of_module_django__core__files__storage( self, _python_par_self, _python_par_name, _python_par_content );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );
    Py_XDECREF( _python_par_content );

    return NULL;
}

static PyObject *dparse_function_2_save_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_2_save_of_class_1_Storage_of_module_django__core__files__storage( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_save_of_class_1_Storage_of_module_django__core__files__storage( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_get_valid_name_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );

    // Actual function code.
    static PyFrameObject *frame_function_3_get_valid_name_of_class_1_Storage_of_module_django__core__files__storage = NULL;

    if ( isFrameUnusable( frame_function_3_get_valid_name_of_class_1_Storage_of_module_django__core__files__storage ) )
    {
        if ( frame_function_3_get_valid_name_of_class_1_Storage_of_module_django__core__files__storage )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_get_valid_name_of_class_1_Storage_of_module_django__core__files__storage" );
#endif
            Py_DECREF( frame_function_3_get_valid_name_of_class_1_Storage_of_module_django__core__files__storage );
        }

        frame_function_3_get_valid_name_of_class_1_Storage_of_module_django__core__files__storage = MAKE_FRAME( _codeobj_e186e3b819b4ca72ead1050838011d87, _module_django__core__files__storage );
    }

    FrameGuard frame_guard( frame_function_3_get_valid_name_of_class_1_Storage_of_module_django__core__files__storage );
    try
    {
        assert( Py_REFCNT( frame_function_3_get_valid_name_of_class_1_Storage_of_module_django__core__files__storage ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 64 );
        {
            PyObjectTempKeeper0 call1;
            return ( call1.assign( _mvar_django__core__files__storage_get_valid_filename.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_name.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_name.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_3_get_valid_name_of_class_1_Storage_of_module_django__core__files__storage )
        {
           Py_DECREF( frame_function_3_get_valid_name_of_class_1_Storage_of_module_django__core__files__storage );
           frame_function_3_get_valid_name_of_class_1_Storage_of_module_django__core__files__storage = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_get_valid_name_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_valid_name() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get_valid_name() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_name == key )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "get_valid_name() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "get_valid_name() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "get_valid_name() got multiple values for keyword argument 'name'" );
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
                   "get_valid_name() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_valid_name() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_valid_name() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_valid_name() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_valid_name() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "get_valid_name() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_valid_name() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "get_valid_name() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_valid_name() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "get_valid_name() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_valid_name() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "get_valid_name() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_valid_name() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_valid_name() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_valid_name() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_3_get_valid_name_of_class_1_Storage_of_module_django__core__files__storage( self, _python_par_self, _python_par_name );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );

    return NULL;
}

static PyObject *dparse_function_3_get_valid_name_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_3_get_valid_name_of_class_1_Storage_of_module_django__core__files__storage( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_get_valid_name_of_class_1_Storage_of_module_django__core__files__storage( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_get_available_name_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );
    PyObjectLocalVariable _python_var_dir_name( _python_str_plain_dir_name );
    PyObjectLocalVariable _python_var_file_name( _python_str_plain_file_name );
    PyObjectLocalVariable _python_var_file_root( _python_str_plain_file_root );
    PyObjectLocalVariable _python_var_file_ext( _python_str_plain_file_ext );
    PyObjectLocalVariable _python_var_count( _python_str_plain_count );

    // Actual function code.
    static PyFrameObject *frame_function_4_get_available_name_of_class_1_Storage_of_module_django__core__files__storage = NULL;

    if ( isFrameUnusable( frame_function_4_get_available_name_of_class_1_Storage_of_module_django__core__files__storage ) )
    {
        if ( frame_function_4_get_available_name_of_class_1_Storage_of_module_django__core__files__storage )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_get_available_name_of_class_1_Storage_of_module_django__core__files__storage" );
#endif
            Py_DECREF( frame_function_4_get_available_name_of_class_1_Storage_of_module_django__core__files__storage );
        }

        frame_function_4_get_available_name_of_class_1_Storage_of_module_django__core__files__storage = MAKE_FRAME( _codeobj_19dc73392248670de58471e4b3564db6, _module_django__core__files__storage );
    }

    FrameGuard frame_guard( frame_function_4_get_available_name_of_class_1_Storage_of_module_django__core__files__storage );
    try
    {
        assert( Py_REFCNT( frame_function_4_get_available_name_of_class_1_Storage_of_module_django__core__files__storage ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 71 );
            PyObject *_tmp_python_tmp_source_iter;
            {
                PyObjectTempKeeper1 call1;
                _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_split ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_name.asObject() ) ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
            _python_var_dir_name.assign0( _python_tmp_element_1.asObject() );
            _python_var_file_name.assign0( _python_tmp_element_2.asObject() );
        }
        {
            frame_guard.setLineNumber( 72 );
            PyObject *_tmp_python_tmp_source_iter;
            {
                PyObjectTempKeeper1 call3;
                _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_splitext ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_file_name.asObject() ) ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
            _python_var_file_root.assign0( _python_tmp_element_1.asObject() );
            _python_var_file_ext.assign0( _python_tmp_element_2.asObject() );
        }
        frame_guard.setLineNumber( 76 );
        _python_var_count.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_itertools.asObject0(), _python_str_plain_count ) ).asObject(), _python_int_pos_1 ) );
        frame_guard.setLineNumber( 77 );
        while( true )
        {
            frame_guard.setLineNumber( 77 );
            {
                PyObjectTempKeeper1 call5;
                if ( (!( CHECK_IF_TRUE( PyObjectTemporary( ( call5.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_exists ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_name.asObject() ) ) ).asObject() ) )) )
            {
                frame_guard.setLineNumber( 77 );
                break;
            }
            }
            frame_guard.setLineNumber( 79 );
            {
                PyObjectTempKeeper1 call10;
                PyObjectTempKeeper0 call11;
                PyObjectTempKeeper0 make_tuple7;
                PyObjectTempKeeper1 make_tuple8;
                _python_var_name.assign1( ( call10.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_join ) ), call11.assign( _python_var_dir_name.asObject() ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), call11.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_b9fecfa300f88581cfe76c9e69dc2623, PyObjectTemporary( ( make_tuple7.assign( _python_var_file_root.asObject() ), make_tuple8.assign( BUILTIN_NEXT1( _python_var_count.asObject() ) ), MAKE_TUPLE3( make_tuple7.asObject0(), make_tuple8.asObject0(), _python_var_file_ext.asObject() ) ) ).asObject() ) ).asObject() ) ) );
            }

           CONSIDER_THREADING();
        }
        frame_guard.setLineNumber( 81 );
        return _python_var_name.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_name.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_count.updateLocalsDict( _python_var_file_ext.updateLocalsDict( _python_var_file_root.updateLocalsDict( _python_var_file_name.updateLocalsDict( _python_var_dir_name.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_4_get_available_name_of_class_1_Storage_of_module_django__core__files__storage )
        {
           Py_DECREF( frame_function_4_get_available_name_of_class_1_Storage_of_module_django__core__files__storage );
           frame_function_4_get_available_name_of_class_1_Storage_of_module_django__core__files__storage = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_get_available_name_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_available_name() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get_available_name() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_name == key )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "get_available_name() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "get_available_name() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "get_available_name() got multiple values for keyword argument 'name'" );
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
                   "get_available_name() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_available_name() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_available_name() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_available_name() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_available_name() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "get_available_name() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_available_name() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "get_available_name() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_available_name() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "get_available_name() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_available_name() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "get_available_name() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_available_name() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_available_name() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_available_name() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_4_get_available_name_of_class_1_Storage_of_module_django__core__files__storage( self, _python_par_self, _python_par_name );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );

    return NULL;
}

static PyObject *dparse_function_4_get_available_name_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_4_get_available_name_of_class_1_Storage_of_module_django__core__files__storage( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_get_available_name_of_class_1_Storage_of_module_django__core__files__storage( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_path_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );

    // Actual function code.
    static PyFrameObject *frame_function_5_path_of_class_1_Storage_of_module_django__core__files__storage = NULL;

    if ( isFrameUnusable( frame_function_5_path_of_class_1_Storage_of_module_django__core__files__storage ) )
    {
        if ( frame_function_5_path_of_class_1_Storage_of_module_django__core__files__storage )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_path_of_class_1_Storage_of_module_django__core__files__storage" );
#endif
            Py_DECREF( frame_function_5_path_of_class_1_Storage_of_module_django__core__files__storage );
        }

        frame_function_5_path_of_class_1_Storage_of_module_django__core__files__storage = MAKE_FRAME( _codeobj_f0d849cd3d889fe7c7230f699a70e8b9, _module_django__core__files__storage );
    }

    FrameGuard frame_guard( frame_function_5_path_of_class_1_Storage_of_module_django__core__files__storage );
    try
    {
        assert( Py_REFCNT( frame_function_5_path_of_class_1_Storage_of_module_django__core__files__storage ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 89 );
        {
                PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_NotImplementedError, PyObjectTemporary( MAKE_TUPLE1( _python_str_digest_bbf91d6d682139d86d3b28671db1872c ) ).asObject() ) );
                RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_name.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_5_path_of_class_1_Storage_of_module_django__core__files__storage )
        {
           Py_DECREF( frame_function_5_path_of_class_1_Storage_of_module_django__core__files__storage );
           frame_function_5_path_of_class_1_Storage_of_module_django__core__files__storage = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5_path_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "path() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "path() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_name == key )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "path() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "path() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "path() got multiple values for keyword argument 'name'" );
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
                   "path() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "path() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "path() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "path() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "path() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "path() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "path() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "path() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "path() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "path() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "path() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "path() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "path() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "path() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "path() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_5_path_of_class_1_Storage_of_module_django__core__files__storage( self, _python_par_self, _python_par_name );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );

    return NULL;
}

static PyObject *dparse_function_5_path_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_5_path_of_class_1_Storage_of_module_django__core__files__storage( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_path_of_class_1_Storage_of_module_django__core__files__storage( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_delete_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );

    // Actual function code.
    static PyFrameObject *frame_function_6_delete_of_class_1_Storage_of_module_django__core__files__storage = NULL;

    if ( isFrameUnusable( frame_function_6_delete_of_class_1_Storage_of_module_django__core__files__storage ) )
    {
        if ( frame_function_6_delete_of_class_1_Storage_of_module_django__core__files__storage )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6_delete_of_class_1_Storage_of_module_django__core__files__storage" );
#endif
            Py_DECREF( frame_function_6_delete_of_class_1_Storage_of_module_django__core__files__storage );
        }

        frame_function_6_delete_of_class_1_Storage_of_module_django__core__files__storage = MAKE_FRAME( _codeobj_d2b0464e5ebce85c6fbd6f136f0de589, _module_django__core__files__storage );
    }

    FrameGuard frame_guard( frame_function_6_delete_of_class_1_Storage_of_module_django__core__files__storage );
    try
    {
        assert( Py_REFCNT( frame_function_6_delete_of_class_1_Storage_of_module_django__core__files__storage ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 98 );
        {
                PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_NotImplementedError, _python_tuple_empty ) );
                RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_name.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_6_delete_of_class_1_Storage_of_module_django__core__files__storage )
        {
           Py_DECREF( frame_function_6_delete_of_class_1_Storage_of_module_django__core__files__storage );
           frame_function_6_delete_of_class_1_Storage_of_module_django__core__files__storage = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_6_delete_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "delete() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "delete() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_name == key )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "delete() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "delete() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "delete() got multiple values for keyword argument 'name'" );
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
                   "delete() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "delete() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "delete() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "delete() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "delete() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "delete() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "delete() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "delete() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "delete() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "delete() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "delete() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "delete() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "delete() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "delete() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "delete() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_6_delete_of_class_1_Storage_of_module_django__core__files__storage( self, _python_par_self, _python_par_name );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );

    return NULL;
}

static PyObject *dparse_function_6_delete_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_6_delete_of_class_1_Storage_of_module_django__core__files__storage( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_delete_of_class_1_Storage_of_module_django__core__files__storage( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7_exists_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );

    // Actual function code.
    static PyFrameObject *frame_function_7_exists_of_class_1_Storage_of_module_django__core__files__storage = NULL;

    if ( isFrameUnusable( frame_function_7_exists_of_class_1_Storage_of_module_django__core__files__storage ) )
    {
        if ( frame_function_7_exists_of_class_1_Storage_of_module_django__core__files__storage )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_7_exists_of_class_1_Storage_of_module_django__core__files__storage" );
#endif
            Py_DECREF( frame_function_7_exists_of_class_1_Storage_of_module_django__core__files__storage );
        }

        frame_function_7_exists_of_class_1_Storage_of_module_django__core__files__storage = MAKE_FRAME( _codeobj_6f6e2e7c0b5004dc47b22e2f3353370d, _module_django__core__files__storage );
    }

    FrameGuard frame_guard( frame_function_7_exists_of_class_1_Storage_of_module_django__core__files__storage );
    try
    {
        assert( Py_REFCNT( frame_function_7_exists_of_class_1_Storage_of_module_django__core__files__storage ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 105 );
        {
                PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_NotImplementedError, _python_tuple_empty ) );
                RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_name.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_7_exists_of_class_1_Storage_of_module_django__core__files__storage )
        {
           Py_DECREF( frame_function_7_exists_of_class_1_Storage_of_module_django__core__files__storage );
           frame_function_7_exists_of_class_1_Storage_of_module_django__core__files__storage = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_7_exists_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "exists() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "exists() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_name == key )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "exists() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "exists() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "exists() got multiple values for keyword argument 'name'" );
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
                   "exists() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "exists() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "exists() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "exists() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "exists() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "exists() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "exists() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "exists() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "exists() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "exists() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "exists() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "exists() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "exists() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "exists() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "exists() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_7_exists_of_class_1_Storage_of_module_django__core__files__storage( self, _python_par_self, _python_par_name );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );

    return NULL;
}

static PyObject *dparse_function_7_exists_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_7_exists_of_class_1_Storage_of_module_django__core__files__storage( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7_exists_of_class_1_Storage_of_module_django__core__files__storage( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8_listdir_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_path )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_path( _python_str_plain_path, _python_par_path );

    // Actual function code.
    static PyFrameObject *frame_function_8_listdir_of_class_1_Storage_of_module_django__core__files__storage = NULL;

    if ( isFrameUnusable( frame_function_8_listdir_of_class_1_Storage_of_module_django__core__files__storage ) )
    {
        if ( frame_function_8_listdir_of_class_1_Storage_of_module_django__core__files__storage )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_8_listdir_of_class_1_Storage_of_module_django__core__files__storage" );
#endif
            Py_DECREF( frame_function_8_listdir_of_class_1_Storage_of_module_django__core__files__storage );
        }

        frame_function_8_listdir_of_class_1_Storage_of_module_django__core__files__storage = MAKE_FRAME( _codeobj_32bca49c81af6acd784e21a85516beaa, _module_django__core__files__storage );
    }

    FrameGuard frame_guard( frame_function_8_listdir_of_class_1_Storage_of_module_django__core__files__storage );
    try
    {
        assert( Py_REFCNT( frame_function_8_listdir_of_class_1_Storage_of_module_django__core__files__storage ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 112 );
        {
                PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_NotImplementedError, _python_tuple_empty ) );
                RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_path.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_8_listdir_of_class_1_Storage_of_module_django__core__files__storage )
        {
           Py_DECREF( frame_function_8_listdir_of_class_1_Storage_of_module_django__core__files__storage );
           frame_function_8_listdir_of_class_1_Storage_of_module_django__core__files__storage = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_8_listdir_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_path = NULL;
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
                PyErr_Format( PyExc_TypeError, "listdir() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "listdir() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_path == key )
            {
                if (unlikely( _python_par_path ))
                {
                    PyErr_Format( PyExc_TypeError, "listdir() got multiple values for keyword argument 'path'" );
                    goto error_exit;
                }

                _python_par_path = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "listdir() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_path, key ) )
            {
                if (unlikely( _python_par_path ))
                {
                    PyErr_Format( PyExc_TypeError, "listdir() got multiple values for keyword argument 'path'" );
                    goto error_exit;
                }

                _python_par_path = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "listdir() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "listdir() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "listdir() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "listdir() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "listdir() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "listdir() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "listdir() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "listdir() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "listdir() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "listdir() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "listdir() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "listdir() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "listdir() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "listdir() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_path != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "listdir() got multiple values for keyword argument 'path'" );
             goto error_exit;
         }

        _python_par_path = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_8_listdir_of_class_1_Storage_of_module_django__core__files__storage( self, _python_par_self, _python_par_path );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_path );

    return NULL;
}

static PyObject *dparse_function_8_listdir_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_8_listdir_of_class_1_Storage_of_module_django__core__files__storage( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_listdir_of_class_1_Storage_of_module_django__core__files__storage( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9_size_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );

    // Actual function code.
    static PyFrameObject *frame_function_9_size_of_class_1_Storage_of_module_django__core__files__storage = NULL;

    if ( isFrameUnusable( frame_function_9_size_of_class_1_Storage_of_module_django__core__files__storage ) )
    {
        if ( frame_function_9_size_of_class_1_Storage_of_module_django__core__files__storage )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_9_size_of_class_1_Storage_of_module_django__core__files__storage" );
#endif
            Py_DECREF( frame_function_9_size_of_class_1_Storage_of_module_django__core__files__storage );
        }

        frame_function_9_size_of_class_1_Storage_of_module_django__core__files__storage = MAKE_FRAME( _codeobj_2967d35cf9170be1218ee771bd051bab, _module_django__core__files__storage );
    }

    FrameGuard frame_guard( frame_function_9_size_of_class_1_Storage_of_module_django__core__files__storage );
    try
    {
        assert( Py_REFCNT( frame_function_9_size_of_class_1_Storage_of_module_django__core__files__storage ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 118 );
        {
                PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_NotImplementedError, _python_tuple_empty ) );
                RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_name.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_9_size_of_class_1_Storage_of_module_django__core__files__storage )
        {
           Py_DECREF( frame_function_9_size_of_class_1_Storage_of_module_django__core__files__storage );
           frame_function_9_size_of_class_1_Storage_of_module_django__core__files__storage = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_9_size_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "size() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "size() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_name == key )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "size() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "size() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "size() got multiple values for keyword argument 'name'" );
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
                   "size() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "size() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "size() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "size() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "size() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "size() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "size() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "size() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "size() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "size() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "size() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "size() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "size() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "size() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "size() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_9_size_of_class_1_Storage_of_module_django__core__files__storage( self, _python_par_self, _python_par_name );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );

    return NULL;
}

static PyObject *dparse_function_9_size_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_9_size_of_class_1_Storage_of_module_django__core__files__storage( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9_size_of_class_1_Storage_of_module_django__core__files__storage( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_10_url_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );

    // Actual function code.
    static PyFrameObject *frame_function_10_url_of_class_1_Storage_of_module_django__core__files__storage = NULL;

    if ( isFrameUnusable( frame_function_10_url_of_class_1_Storage_of_module_django__core__files__storage ) )
    {
        if ( frame_function_10_url_of_class_1_Storage_of_module_django__core__files__storage )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_10_url_of_class_1_Storage_of_module_django__core__files__storage" );
#endif
            Py_DECREF( frame_function_10_url_of_class_1_Storage_of_module_django__core__files__storage );
        }

        frame_function_10_url_of_class_1_Storage_of_module_django__core__files__storage = MAKE_FRAME( _codeobj_a29fbf5915f14ac3657f53c30364eef8, _module_django__core__files__storage );
    }

    FrameGuard frame_guard( frame_function_10_url_of_class_1_Storage_of_module_django__core__files__storage );
    try
    {
        assert( Py_REFCNT( frame_function_10_url_of_class_1_Storage_of_module_django__core__files__storage ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 125 );
        {
                PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_NotImplementedError, _python_tuple_empty ) );
                RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_name.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_10_url_of_class_1_Storage_of_module_django__core__files__storage )
        {
           Py_DECREF( frame_function_10_url_of_class_1_Storage_of_module_django__core__files__storage );
           frame_function_10_url_of_class_1_Storage_of_module_django__core__files__storage = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_10_url_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "url() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "url() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_name == key )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "url() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "url() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "url() got multiple values for keyword argument 'name'" );
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
                   "url() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "url() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "url() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "url() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "url() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "url() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "url() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "url() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "url() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "url() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "url() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "url() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "url() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "url() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "url() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_10_url_of_class_1_Storage_of_module_django__core__files__storage( self, _python_par_self, _python_par_name );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );

    return NULL;
}

static PyObject *dparse_function_10_url_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_10_url_of_class_1_Storage_of_module_django__core__files__storage( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_10_url_of_class_1_Storage_of_module_django__core__files__storage( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_11_accessed_time_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );

    // Actual function code.
    static PyFrameObject *frame_function_11_accessed_time_of_class_1_Storage_of_module_django__core__files__storage = NULL;

    if ( isFrameUnusable( frame_function_11_accessed_time_of_class_1_Storage_of_module_django__core__files__storage ) )
    {
        if ( frame_function_11_accessed_time_of_class_1_Storage_of_module_django__core__files__storage )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_11_accessed_time_of_class_1_Storage_of_module_django__core__files__storage" );
#endif
            Py_DECREF( frame_function_11_accessed_time_of_class_1_Storage_of_module_django__core__files__storage );
        }

        frame_function_11_accessed_time_of_class_1_Storage_of_module_django__core__files__storage = MAKE_FRAME( _codeobj_042e9410886882ccb202df635e639492, _module_django__core__files__storage );
    }

    FrameGuard frame_guard( frame_function_11_accessed_time_of_class_1_Storage_of_module_django__core__files__storage );
    try
    {
        assert( Py_REFCNT( frame_function_11_accessed_time_of_class_1_Storage_of_module_django__core__files__storage ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 132 );
        {
                PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_NotImplementedError, _python_tuple_empty ) );
                RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_name.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_11_accessed_time_of_class_1_Storage_of_module_django__core__files__storage )
        {
           Py_DECREF( frame_function_11_accessed_time_of_class_1_Storage_of_module_django__core__files__storage );
           frame_function_11_accessed_time_of_class_1_Storage_of_module_django__core__files__storage = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_11_accessed_time_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "accessed_time() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "accessed_time() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_name == key )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "accessed_time() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "accessed_time() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "accessed_time() got multiple values for keyword argument 'name'" );
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
                   "accessed_time() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "accessed_time() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "accessed_time() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "accessed_time() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "accessed_time() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "accessed_time() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "accessed_time() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "accessed_time() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "accessed_time() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "accessed_time() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "accessed_time() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "accessed_time() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "accessed_time() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "accessed_time() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "accessed_time() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_11_accessed_time_of_class_1_Storage_of_module_django__core__files__storage( self, _python_par_self, _python_par_name );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );

    return NULL;
}

static PyObject *dparse_function_11_accessed_time_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_11_accessed_time_of_class_1_Storage_of_module_django__core__files__storage( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_11_accessed_time_of_class_1_Storage_of_module_django__core__files__storage( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_12_created_time_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );

    // Actual function code.
    static PyFrameObject *frame_function_12_created_time_of_class_1_Storage_of_module_django__core__files__storage = NULL;

    if ( isFrameUnusable( frame_function_12_created_time_of_class_1_Storage_of_module_django__core__files__storage ) )
    {
        if ( frame_function_12_created_time_of_class_1_Storage_of_module_django__core__files__storage )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_12_created_time_of_class_1_Storage_of_module_django__core__files__storage" );
#endif
            Py_DECREF( frame_function_12_created_time_of_class_1_Storage_of_module_django__core__files__storage );
        }

        frame_function_12_created_time_of_class_1_Storage_of_module_django__core__files__storage = MAKE_FRAME( _codeobj_5de8a804503bea212346d3ab5d3dcca1, _module_django__core__files__storage );
    }

    FrameGuard frame_guard( frame_function_12_created_time_of_class_1_Storage_of_module_django__core__files__storage );
    try
    {
        assert( Py_REFCNT( frame_function_12_created_time_of_class_1_Storage_of_module_django__core__files__storage ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 139 );
        {
                PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_NotImplementedError, _python_tuple_empty ) );
                RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_name.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_12_created_time_of_class_1_Storage_of_module_django__core__files__storage )
        {
           Py_DECREF( frame_function_12_created_time_of_class_1_Storage_of_module_django__core__files__storage );
           frame_function_12_created_time_of_class_1_Storage_of_module_django__core__files__storage = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_12_created_time_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "created_time() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "created_time() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_name == key )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "created_time() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "created_time() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "created_time() got multiple values for keyword argument 'name'" );
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
                   "created_time() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "created_time() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "created_time() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "created_time() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "created_time() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "created_time() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "created_time() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "created_time() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "created_time() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "created_time() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "created_time() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "created_time() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "created_time() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "created_time() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "created_time() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_12_created_time_of_class_1_Storage_of_module_django__core__files__storage( self, _python_par_self, _python_par_name );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );

    return NULL;
}

static PyObject *dparse_function_12_created_time_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_12_created_time_of_class_1_Storage_of_module_django__core__files__storage( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_12_created_time_of_class_1_Storage_of_module_django__core__files__storage( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_13_modified_time_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );

    // Actual function code.
    static PyFrameObject *frame_function_13_modified_time_of_class_1_Storage_of_module_django__core__files__storage = NULL;

    if ( isFrameUnusable( frame_function_13_modified_time_of_class_1_Storage_of_module_django__core__files__storage ) )
    {
        if ( frame_function_13_modified_time_of_class_1_Storage_of_module_django__core__files__storage )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_13_modified_time_of_class_1_Storage_of_module_django__core__files__storage" );
#endif
            Py_DECREF( frame_function_13_modified_time_of_class_1_Storage_of_module_django__core__files__storage );
        }

        frame_function_13_modified_time_of_class_1_Storage_of_module_django__core__files__storage = MAKE_FRAME( _codeobj_a7db0898b79ccba63785a16798ca9222, _module_django__core__files__storage );
    }

    FrameGuard frame_guard( frame_function_13_modified_time_of_class_1_Storage_of_module_django__core__files__storage );
    try
    {
        assert( Py_REFCNT( frame_function_13_modified_time_of_class_1_Storage_of_module_django__core__files__storage ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 146 );
        {
                PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_NotImplementedError, _python_tuple_empty ) );
                RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_name.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_13_modified_time_of_class_1_Storage_of_module_django__core__files__storage )
        {
           Py_DECREF( frame_function_13_modified_time_of_class_1_Storage_of_module_django__core__files__storage );
           frame_function_13_modified_time_of_class_1_Storage_of_module_django__core__files__storage = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_13_modified_time_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "modified_time() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "modified_time() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_name == key )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "modified_time() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "modified_time() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "modified_time() got multiple values for keyword argument 'name'" );
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
                   "modified_time() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "modified_time() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "modified_time() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "modified_time() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "modified_time() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "modified_time() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "modified_time() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "modified_time() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "modified_time() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "modified_time() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "modified_time() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "modified_time() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "modified_time() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "modified_time() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "modified_time() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_13_modified_time_of_class_1_Storage_of_module_django__core__files__storage( self, _python_par_self, _python_par_name );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );

    return NULL;
}

static PyObject *dparse_function_13_modified_time_of_class_1_Storage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_13_modified_time_of_class_1_Storage_of_module_django__core__files__storage( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_13_modified_time_of_class_1_Storage_of_module_django__core__files__storage( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_2_FileSystemStorage_of_module_django__core__files__storage(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var__open( _python_str_plain__open );
    PyObjectLocalVariable _python_var__save( _python_str_plain__save );
    PyObjectLocalVariable _python_var_delete( _python_str_plain_delete );
    PyObjectLocalVariable _python_var_exists( _python_str_plain_exists );
    PyObjectLocalVariable _python_var_listdir( _python_str_plain_listdir );
    PyObjectLocalVariable _python_var_path( _python_str_plain_path );
    PyObjectLocalVariable _python_var_size( _python_str_plain_size );
    PyObjectLocalVariable _python_var_url( _python_str_plain_url );
    PyObjectLocalVariable _python_var_accessed_time( _python_str_plain_accessed_time );
    PyObjectLocalVariable _python_var_created_time( _python_str_plain_created_time );
    PyObjectLocalVariable _python_var_modified_time( _python_str_plain_modified_time );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_storage );
    _python_var___doc__.assign0( _python_str_digest_6021b10b82a6312bcfa12be3c585972a );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_2_FileSystemStorage_of_module_django__core__files__storage(  ) );
    _python_var__open.assign1( MAKE_FUNCTION_function_2__open_of_class_2_FileSystemStorage_of_module_django__core__files__storage(  ) );
    _python_var__save.assign1( MAKE_FUNCTION_function_3__save_of_class_2_FileSystemStorage_of_module_django__core__files__storage(  ) );
    _python_var_delete.assign1( MAKE_FUNCTION_function_4_delete_of_class_2_FileSystemStorage_of_module_django__core__files__storage(  ) );
    _python_var_exists.assign1( MAKE_FUNCTION_function_5_exists_of_class_2_FileSystemStorage_of_module_django__core__files__storage(  ) );
    _python_var_listdir.assign1( MAKE_FUNCTION_function_6_listdir_of_class_2_FileSystemStorage_of_module_django__core__files__storage(  ) );
    _python_var_path.assign1( MAKE_FUNCTION_function_7_path_of_class_2_FileSystemStorage_of_module_django__core__files__storage(  ) );
    _python_var_size.assign1( MAKE_FUNCTION_function_8_size_of_class_2_FileSystemStorage_of_module_django__core__files__storage(  ) );
    _python_var_url.assign1( MAKE_FUNCTION_function_9_url_of_class_2_FileSystemStorage_of_module_django__core__files__storage(  ) );
    _python_var_accessed_time.assign1( MAKE_FUNCTION_function_10_accessed_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage(  ) );
    _python_var_created_time.assign1( MAKE_FUNCTION_function_11_created_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage(  ) );
    _python_var_modified_time.assign1( MAKE_FUNCTION_function_12_modified_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage(  ) );
    return _python_var_modified_time.updateLocalsDict( _python_var_created_time.updateLocalsDict( _python_var_accessed_time.updateLocalsDict( _python_var_url.updateLocalsDict( _python_var_size.updateLocalsDict( _python_var_path.updateLocalsDict( _python_var_listdir.updateLocalsDict( _python_var_exists.updateLocalsDict( _python_var_delete.updateLocalsDict( _python_var__save.updateLocalsDict( _python_var__open.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_2_FileSystemStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_location, PyObject *_python_par_base_url )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_location( _python_str_plain_location, _python_par_location );
    PyObjectLocalParameterVariableNoDel _python_var_base_url( _python_str_plain_base_url, _python_par_base_url );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_2_FileSystemStorage_of_module_django__core__files__storage = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_2_FileSystemStorage_of_module_django__core__files__storage ) )
    {
        if ( frame_function_1___init___of_class_2_FileSystemStorage_of_module_django__core__files__storage )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_2_FileSystemStorage_of_module_django__core__files__storage" );
#endif
            Py_DECREF( frame_function_1___init___of_class_2_FileSystemStorage_of_module_django__core__files__storage );
        }

        frame_function_1___init___of_class_2_FileSystemStorage_of_module_django__core__files__storage = MAKE_FRAME( _codeobj_58048c64ea64dc592e830687f353a000, _module_django__core__files__storage );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_2_FileSystemStorage_of_module_django__core__files__storage );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_2_FileSystemStorage_of_module_django__core__files__storage ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 154 );
        if ( ( _python_var_location.asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 155 );
            _python_var_location.assign1( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_settings.asObject0(), _python_str_plain_MEDIA_ROOT ) );
        }
        frame_guard.setLineNumber( 156 );
        {
                PyObject *tmp_identifier = _python_var_location.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_base_location );
        }
        frame_guard.setLineNumber( 157 );
        {
            PyObjectTempKeeper0 call1;
            {
                PyObjectTemporary tmp_identifier( ( call1.assign( _mvar_django__core__files__storage_abspathu.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_base_location ) ).asObject() ) ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_location );
        }
        }
        frame_guard.setLineNumber( 158 );
        if ( ( _python_var_base_url.asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 159 );
            _python_var_base_url.assign1( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_settings.asObject0(), _python_str_plain_MEDIA_URL ) );
        }
        frame_guard.setLineNumber( 160 );
        {
                PyObject *tmp_identifier = _python_var_base_url.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_base_url );
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
        frame_guard.getFrame0()->f_locals = _python_var_base_url.updateLocalsDict( _python_var_location.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_2_FileSystemStorage_of_module_django__core__files__storage )
        {
           Py_DECREF( frame_function_1___init___of_class_2_FileSystemStorage_of_module_django__core__files__storage );
           frame_function_1___init___of_class_2_FileSystemStorage_of_module_django__core__files__storage = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_2_FileSystemStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_location = NULL;
    PyObject *_python_par_base_url = NULL;
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
            if ( found == false && _python_str_plain_location == key )
            {
                if (unlikely( _python_par_location ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'location'" );
                    goto error_exit;
                }

                _python_par_location = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_base_url == key )
            {
                if (unlikely( _python_par_base_url ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'base_url'" );
                    goto error_exit;
                }

                _python_par_base_url = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_location, key ) )
            {
                if (unlikely( _python_par_location ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'location'" );
                    goto error_exit;
                }

                _python_par_location = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_base_url, key ) )
            {
                if (unlikely( _python_par_base_url ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'base_url'" );
                    goto error_exit;
                }

                _python_par_base_url = value;

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
    if (unlikely( args_given > 3 ))
    {
        if ( 3 == 1 )
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__init__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_location != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'location'" );
             goto error_exit;
         }

        _python_par_location = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_base_url != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'base_url'" );
             goto error_exit;
         }

        _python_par_base_url = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_location == NULL )
    {
        _python_par_location = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_location );
    }
    if ( _python_par_base_url == NULL )
    {
        _python_par_base_url = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_base_url );
    }


    return impl_function_1___init___of_class_2_FileSystemStorage_of_module_django__core__files__storage( self, _python_par_self, _python_par_location, _python_par_base_url );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_location );
    Py_XDECREF( _python_par_base_url );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_2_FileSystemStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_1___init___of_class_2_FileSystemStorage_of_module_django__core__files__storage( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_2_FileSystemStorage_of_module_django__core__files__storage( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2__open_of_class_2_FileSystemStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name, PyObject *_python_par_mode )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );
    PyObjectLocalParameterVariableNoDel _python_var_mode( _python_str_plain_mode, _python_par_mode );

    // Actual function code.
    static PyFrameObject *frame_function_2__open_of_class_2_FileSystemStorage_of_module_django__core__files__storage = NULL;

    if ( isFrameUnusable( frame_function_2__open_of_class_2_FileSystemStorage_of_module_django__core__files__storage ) )
    {
        if ( frame_function_2__open_of_class_2_FileSystemStorage_of_module_django__core__files__storage )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2__open_of_class_2_FileSystemStorage_of_module_django__core__files__storage" );
#endif
            Py_DECREF( frame_function_2__open_of_class_2_FileSystemStorage_of_module_django__core__files__storage );
        }

        frame_function_2__open_of_class_2_FileSystemStorage_of_module_django__core__files__storage = MAKE_FRAME( _codeobj_adc2f1b2dc6d5244a9f5667cc1452a58, _module_django__core__files__storage );
    }

    FrameGuard frame_guard( frame_function_2__open_of_class_2_FileSystemStorage_of_module_django__core__files__storage );
    try
    {
        assert( Py_REFCNT( frame_function_2__open_of_class_2_FileSystemStorage_of_module_django__core__files__storage ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 163 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper0 call6;
            PyObjectTempKeeper1 open3;
            return ( call6.assign( _mvar_django__core__files__storage_File.asObject0() ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), PyObjectTemporary( ( open3.assign( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_path ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_name.asObject() ) ) ), OPEN_FILE( open3.asObject0(), _python_var_mode.asObject(), NULL ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_mode.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_2__open_of_class_2_FileSystemStorage_of_module_django__core__files__storage )
        {
           Py_DECREF( frame_function_2__open_of_class_2_FileSystemStorage_of_module_django__core__files__storage );
           frame_function_2__open_of_class_2_FileSystemStorage_of_module_django__core__files__storage = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2__open_of_class_2_FileSystemStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_name = NULL;
    PyObject *_python_par_mode = NULL;
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
                PyErr_Format( PyExc_TypeError, "_open() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_open() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_name == key )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "_open() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_mode == key )
            {
                if (unlikely( _python_par_mode ))
                {
                    PyErr_Format( PyExc_TypeError, "_open() got multiple values for keyword argument 'mode'" );
                    goto error_exit;
                }

                _python_par_mode = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "_open() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "_open() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_mode, key ) )
            {
                if (unlikely( _python_par_mode ))
                {
                    PyErr_Format( PyExc_TypeError, "_open() got multiple values for keyword argument 'mode'" );
                    goto error_exit;
                }

                _python_par_mode = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_open() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_open() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_open() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_open() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_open() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_open() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_open() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_open() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_open() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_open() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_open() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "_open() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_open() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_open() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_open() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_mode != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_open() got multiple values for keyword argument 'mode'" );
             goto error_exit;
         }

        _python_par_mode = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_mode == NULL )
    {
        _python_par_mode = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_mode );
    }


    return impl_function_2__open_of_class_2_FileSystemStorage_of_module_django__core__files__storage( self, _python_par_self, _python_par_name, _python_par_mode );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );
    Py_XDECREF( _python_par_mode );

    return NULL;
}

static PyObject *dparse_function_2__open_of_class_2_FileSystemStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_2__open_of_class_2_FileSystemStorage_of_module_django__core__files__storage( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2__open_of_class_2_FileSystemStorage_of_module_django__core__files__storage( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3__save_of_class_2_FileSystemStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name, PyObject *_python_par_content )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );
    PyObjectLocalParameterVariableNoDel _python_var_content( _python_str_plain_content, _python_par_content );
    PyObjectLocalVariable _python_var_full_path( _python_str_plain_full_path );
    PyObjectLocalVariable _python_var_directory( _python_str_plain_directory );
    PyObjectLocalVariable _python_var_e( _python_str_plain_e );
    PyObjectLocalVariable _python_var_flags( _python_str_plain_flags );
    PyObjectLocalVariable _python_var_fd( _python_str_plain_fd );
    PyObjectLocalVariable _python_var__file( _python_str_plain__file );
    PyObjectLocalVariable _python_var_chunk( _python_str_plain_chunk );
    PyObjectLocalVariable _python_var_mode( _python_str_plain_mode );

    // Actual function code.
    static PyFrameObject *frame_function_3__save_of_class_2_FileSystemStorage_of_module_django__core__files__storage = NULL;

    if ( isFrameUnusable( frame_function_3__save_of_class_2_FileSystemStorage_of_module_django__core__files__storage ) )
    {
        if ( frame_function_3__save_of_class_2_FileSystemStorage_of_module_django__core__files__storage )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3__save_of_class_2_FileSystemStorage_of_module_django__core__files__storage" );
#endif
            Py_DECREF( frame_function_3__save_of_class_2_FileSystemStorage_of_module_django__core__files__storage );
        }

        frame_function_3__save_of_class_2_FileSystemStorage_of_module_django__core__files__storage = MAKE_FRAME( _codeobj_2f67e56f9e22ee5a2c4efa2d712b9923, _module_django__core__files__storage );
    }

    FrameGuard frame_guard( frame_function_3__save_of_class_2_FileSystemStorage_of_module_django__core__files__storage );
    try
    {
        assert( Py_REFCNT( frame_function_3__save_of_class_2_FileSystemStorage_of_module_django__core__files__storage ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 166 );
        {
            PyObjectTempKeeper1 call1;
            _python_var_full_path.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_path ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_name.asObject() ) ) );
        }
        frame_guard.setLineNumber( 172 );
        {
            PyObjectTempKeeper1 call3;
            _python_var_directory.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_dirname ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_full_path.asObject() ) ) );
        }
        frame_guard.setLineNumber( 173 );
        {
            PyObjectTempKeeper1 call9;
            if ( (!( CHECK_IF_TRUE( PyObjectTemporary( ( call9.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_exists ) ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_var_directory.asObject() ) ) ).asObject() ) )) )
        {
            frame_guard.setLineNumber( 174 );
            try
            {
                frame_guard.setLineNumber( 175 );
                {
                    PyObjectTempKeeper1 call7;
                    DECREASE_REFCOUNT( ( call7.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_os.asObject0(), _python_str_plain_makedirs ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _python_var_directory.asObject() ) ) );
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

                if ( _exception.matches( PyExc_OSError ) )
                {
                    frame_guard.detachFrame();
                    _python_var_e.assign0( _exception.getValue() );
                    frame_guard.setLineNumber( 177 );
                    {
                        PyObjectTempKeeper1 cmp5;
                        if ( ( cmp5.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_errno ) ), RICH_COMPARE_BOOL_NE( cmp5.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_errno.asObject0(), _python_str_plain_EEXIST ) ).asObject() ) ) )
                    {
                        {
                            PyTracebackObject *tb = _exception.getTraceback();
                            frame_guard.setLineNumber( tb->tb_lineno );
                            _exception.setTraceback( tb->tb_next );
                            tb->tb_next = NULL;

                            throw;
                        }
                    }
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
        }
        frame_guard.setLineNumber( 179 );
        {
            PyObjectTempKeeper1 call11;
            if ( (!( CHECK_IF_TRUE( PyObjectTemporary( ( call11.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_isdir ) ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), _python_var_directory.asObject() ) ) ).asObject() ) )) )
        {
            frame_guard.setLineNumber( 180 );
            {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_IOError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_e99673ba2f8491190aca4a18580e1a14, _python_var_directory.asObject() ) ).asObject() ) ).asObject() ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
        }
        }
        frame_guard.setLineNumber( 188 );
        while( true )
        {
            {
                PyObject *_python_tmp_unhandled_indicator = Py_True;
                frame_guard.setLineNumber( 189 );
                try
                {
                    frame_guard.setLineNumber( 191 );
                    if ( HAS_ATTRIBUTE( _python_var_content.asObject(), _python_str_plain_temporary_file_path ) )
                    {
                        frame_guard.setLineNumber( 192 );
                        {
                            PyObjectTempKeeper0 call19;
                            PyObjectTempKeeper1 call20;
                            DECREASE_REFCOUNT( ( call19.assign( _mvar_django__core__files__storage_file_move_safe.asObject0() ), call20.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_content.asObject(), _python_str_plain_temporary_file_path ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call19.asObject0(), call20.asObject0(), _python_var_full_path.asObject() ) ) );
                        }
                        frame_guard.setLineNumber( 193 );
                        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_content.asObject(), _python_str_plain_close ) ).asObject() ) );
                    }
                    else
                    {
                        frame_guard.setLineNumber( 199 );
                        {
                            PyObjectTempKeeper1 op22;
                            PyObjectTempKeeper1 op24;
                            PyObjectTempKeeper1 op26;
                            _python_var_flags.assign1( ( op26.assign( ( op24.assign( ( op22.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_os.asObject0(), _python_str_plain_O_WRONLY ) ), BINARY_OPERATION( PyNumber_Or, op22.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_os.asObject0(), _python_str_plain_O_CREAT ) ).asObject() ) ) ), BINARY_OPERATION( PyNumber_Or, op24.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_os.asObject0(), _python_str_plain_O_EXCL ) ).asObject() ) ) ), BINARY_OPERATION( PyNumber_Or, op26.asObject0(), PyObjectTemporary( BUILTIN_GETATTR( _mvar_django__core__files__storage_os.asObject0(), _python_str_plain_O_BINARY, _python_int_0 ) ).asObject() ) ) );
                        }
                        frame_guard.setLineNumber( 202 );
                        {
                            PyObjectTempKeeper1 call28;
                            PyObjectTempKeeper0 call29;
                            _python_var_fd.assign1( ( call28.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_os.asObject0(), _python_str_plain_open ) ), call29.assign( _python_var_full_path.asObject() ), CALL_FUNCTION_WITH_ARGS( call28.asObject0(), call29.asObject0(), _python_var_flags.asObject(), _python_int_pos_438 ) ) );
                        }
                        _python_var__file.assign0( Py_None );
                        frame_guard.setLineNumber( 204 );
                        PythonExceptionKeeper _caught_1;


                        try
                        {
                            frame_guard.setLineNumber( 205 );
                            {
                                PyObjectTempKeeper1 call36;
                                PyObjectTempKeeper0 call37;
                                DECREASE_REFCOUNT( ( call36.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_locks.asObject0(), _python_str_plain_lock ) ), call37.assign( _python_var_fd.asObject() ), CALL_FUNCTION_WITH_ARGS( call36.asObject0(), call37.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_locks.asObject0(), _python_str_plain_LOCK_EX ) ).asObject() ) ) );
                            }
                            {
                                frame_guard.setLineNumber( 206 );
                                PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_content.asObject(), _python_str_plain_chunks ) ).asObject() ) ).asObject() ) );
                                while( true )
                                {
                                    {
                                        frame_guard.setLineNumber( 206 );
                                        PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                        if ( _tmp_unpack_2 == NULL )
                                        {
                                            break;
                                        }
                                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                                        _python_var_chunk.assign0( _python_tmp_iter_value.asObject() );
                                    }
                                    frame_guard.setLineNumber( 207 );
                                    if ( ( _python_var__file.asObject() == Py_None ) )
                                    {
                                        frame_guard.setLineNumber( 208 );
                                        _python_var_mode.assign0( ( BUILTIN_ISINSTANCE_BOOL( _python_var_chunk.asObject(), LOOKUP_BUILTIN( _python_str_plain_bytes ) ) ? _python_str_plain_wb : _python_str_plain_wt ) );
                                        frame_guard.setLineNumber( 209 );
                                        {
                                            PyObjectTempKeeper1 call39;
                                            PyObjectTempKeeper0 call40;
                                            _python_var__file.assign1( ( call39.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_os.asObject0(), _python_str_plain_fdopen ) ), call40.assign( _python_var_fd.asObject() ), CALL_FUNCTION_WITH_ARGS( call39.asObject0(), call40.asObject0(), _python_var_mode.asObject() ) ) );
                                        }
                                    }
                                    frame_guard.setLineNumber( 210 );
                                    {
                                        PyObjectTempKeeper1 call42;
                                        DECREASE_REFCOUNT( ( call42.assign( LOOKUP_ATTRIBUTE( _python_var__file.asObject(), _python_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS( call42.asObject0(), _python_var_chunk.asObject() ) ) );
                                    }

                                   CONSIDER_THREADING();
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

                            _caught_1.save( _exception );

#if PYTHON_VERSION >= 300
                            frame_guard.preserveExistingException();

                            _exception.toExceptionHandler();
#endif
                        }

                        // Final code:
                        frame_guard.setLineNumber( 212 );
                        {
                            PyObjectTempKeeper1 call32;
                            DECREASE_REFCOUNT( ( call32.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_locks.asObject0(), _python_str_plain_unlock ) ), CALL_FUNCTION_WITH_ARGS( call32.asObject0(), _python_var_fd.asObject() ) ) );
                        }
                        frame_guard.setLineNumber( 213 );
                        if ( ( _python_var__file.asObject() != Py_None ) )
                        {
                            frame_guard.setLineNumber( 214 );
                            DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var__file.asObject(), _python_str_plain_close ) ).asObject() ) );
                        }
                        else
                        {
                            frame_guard.setLineNumber( 216 );
                            {
                                PyObjectTempKeeper1 call34;
                                DECREASE_REFCOUNT( ( call34.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_os.asObject0(), _python_str_plain_close ) ), CALL_FUNCTION_WITH_ARGS( call34.asObject0(), _python_var_fd.asObject() ) ) );
                            }
                        }
                        _caught_1.rethrow();
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

                    if ( _exception.matches( PyExc_OSError ) )
                    {
                        frame_guard.detachFrame();
                        _python_tmp_unhandled_indicator = Py_False;
                        _python_var_e.assign0( _exception.getValue() );
                        frame_guard.setLineNumber( 218 );
                        {
                            PyObjectTempKeeper1 cmp17;
                            if ( ( cmp17.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_errno ) ), RICH_COMPARE_BOOL_EQ( cmp17.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_errno.asObject0(), _python_str_plain_EEXIST ) ).asObject() ) ) )
                        {
                            frame_guard.setLineNumber( 220 );
                            {
                                PyObjectTempKeeper1 call13;
                                _python_var_name.assign1( ( call13.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_available_name ) ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), _python_var_name.asObject() ) ) );
                            }
                            frame_guard.setLineNumber( 221 );
                            {
                                PyObjectTempKeeper1 call15;
                                _python_var_full_path.assign1( ( call15.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_path ) ), CALL_FUNCTION_WITH_ARGS( call15.asObject0(), _python_var_name.asObject() ) ) );
                            }
                        }
                        else
                        {
                            {
                                PyTracebackObject *tb = _exception.getTraceback();
                                frame_guard.setLineNumber( tb->tb_lineno );
                                _exception.setTraceback( tb->tb_next );
                                tb->tb_next = NULL;

                                throw;
                            }
                        }
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
                if ( ( _python_tmp_unhandled_indicator == Py_True ) )
                {
                    frame_guard.setLineNumber( 226 );
                    break;
                }
            }

           CONSIDER_THREADING();
        }
        frame_guard.setLineNumber( 228 );
        if ( ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_settings.asObject0(), _python_str_plain_FILE_UPLOAD_PERMISSIONS ) ).asObject() != Py_None ) )
        {
            frame_guard.setLineNumber( 229 );
            {
                PyObjectTempKeeper1 call44;
                PyObjectTempKeeper0 call45;
                DECREASE_REFCOUNT( ( call44.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_os.asObject0(), _python_str_plain_chmod ) ), call45.assign( _python_var_full_path.asObject() ), CALL_FUNCTION_WITH_ARGS( call44.asObject0(), call45.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_settings.asObject0(), _python_str_plain_FILE_UPLOAD_PERMISSIONS ) ).asObject() ) ) );
            }
        }
        frame_guard.setLineNumber( 231 );
        return _python_var_name.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_content.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_mode.updateLocalsDict( _python_var_chunk.updateLocalsDict( _python_var__file.updateLocalsDict( _python_var_fd.updateLocalsDict( _python_var_flags.updateLocalsDict( _python_var_e.updateLocalsDict( _python_var_directory.updateLocalsDict( _python_var_full_path.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3__save_of_class_2_FileSystemStorage_of_module_django__core__files__storage )
        {
           Py_DECREF( frame_function_3__save_of_class_2_FileSystemStorage_of_module_django__core__files__storage );
           frame_function_3__save_of_class_2_FileSystemStorage_of_module_django__core__files__storage = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3__save_of_class_2_FileSystemStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_name = NULL;
    PyObject *_python_par_content = NULL;
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
                PyErr_Format( PyExc_TypeError, "_save() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_save() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_name == key )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "_save() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_content == key )
            {
                if (unlikely( _python_par_content ))
                {
                    PyErr_Format( PyExc_TypeError, "_save() got multiple values for keyword argument 'content'" );
                    goto error_exit;
                }

                _python_par_content = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "_save() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "_save() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_content, key ) )
            {
                if (unlikely( _python_par_content ))
                {
                    PyErr_Format( PyExc_TypeError, "_save() got multiple values for keyword argument 'content'" );
                    goto error_exit;
                }

                _python_par_content = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_save() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_save() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_save() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_save() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_save() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "_save() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_save() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "_save() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_save() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 3 ))
    {
        if ( 3 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "_save() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_save() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "_save() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_save() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_save() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_save() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_content != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_save() got multiple values for keyword argument 'content'" );
             goto error_exit;
         }

        _python_par_content = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_3__save_of_class_2_FileSystemStorage_of_module_django__core__files__storage( self, _python_par_self, _python_par_name, _python_par_content );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );
    Py_XDECREF( _python_par_content );

    return NULL;
}

static PyObject *dparse_function_3__save_of_class_2_FileSystemStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_3__save_of_class_2_FileSystemStorage_of_module_django__core__files__storage( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3__save_of_class_2_FileSystemStorage_of_module_django__core__files__storage( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_delete_of_class_2_FileSystemStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );
    PyObjectLocalVariable _python_var_e( _python_str_plain_e );

    // Actual function code.
    static PyFrameObject *frame_function_4_delete_of_class_2_FileSystemStorage_of_module_django__core__files__storage = NULL;

    if ( isFrameUnusable( frame_function_4_delete_of_class_2_FileSystemStorage_of_module_django__core__files__storage ) )
    {
        if ( frame_function_4_delete_of_class_2_FileSystemStorage_of_module_django__core__files__storage )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_delete_of_class_2_FileSystemStorage_of_module_django__core__files__storage" );
#endif
            Py_DECREF( frame_function_4_delete_of_class_2_FileSystemStorage_of_module_django__core__files__storage );
        }

        frame_function_4_delete_of_class_2_FileSystemStorage_of_module_django__core__files__storage = MAKE_FRAME( _codeobj_d31532230f35beb3f0c12f1ab72f08f7, _module_django__core__files__storage );
    }

    FrameGuard frame_guard( frame_function_4_delete_of_class_2_FileSystemStorage_of_module_django__core__files__storage );
    try
    {
        assert( Py_REFCNT( frame_function_4_delete_of_class_2_FileSystemStorage_of_module_django__core__files__storage ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 234 );
        {
            PyObjectTempKeeper1 call1;
            _python_var_name.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_path ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_name.asObject() ) ) );
        }
        frame_guard.setLineNumber( 239 );
        {
            PyObjectTempKeeper1 call7;
            if ( CHECK_IF_TRUE( PyObjectTemporary( ( call7.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_exists ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _python_var_name.asObject() ) ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 240 );
            try
            {
                frame_guard.setLineNumber( 241 );
                {
                    PyObjectTempKeeper1 call5;
                    DECREASE_REFCOUNT( ( call5.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_os.asObject0(), _python_str_plain_remove ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_name.asObject() ) ) );
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

                if ( _exception.matches( PyExc_OSError ) )
                {
                    frame_guard.detachFrame();
                    _python_var_e.assign0( _exception.getValue() );
                    frame_guard.setLineNumber( 243 );
                    {
                        PyObjectTempKeeper1 cmp3;
                        if ( ( cmp3.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_errno ) ), RICH_COMPARE_BOOL_NE( cmp3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_errno.asObject0(), _python_str_plain_ENOENT ) ).asObject() ) ) )
                    {
                        {
                            PyTracebackObject *tb = _exception.getTraceback();
                            frame_guard.setLineNumber( tb->tb_lineno );
                            _exception.setTraceback( tb->tb_next );
                            tb->tb_next = NULL;

                            throw;
                        }
                    }
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
        frame_guard.getFrame0()->f_locals = _python_var_name.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_e.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_4_delete_of_class_2_FileSystemStorage_of_module_django__core__files__storage )
        {
           Py_DECREF( frame_function_4_delete_of_class_2_FileSystemStorage_of_module_django__core__files__storage );
           frame_function_4_delete_of_class_2_FileSystemStorage_of_module_django__core__files__storage = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_4_delete_of_class_2_FileSystemStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "delete() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "delete() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_name == key )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "delete() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "delete() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "delete() got multiple values for keyword argument 'name'" );
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
                   "delete() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "delete() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "delete() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "delete() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "delete() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "delete() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "delete() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "delete() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "delete() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "delete() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "delete() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "delete() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "delete() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "delete() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "delete() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_4_delete_of_class_2_FileSystemStorage_of_module_django__core__files__storage( self, _python_par_self, _python_par_name );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );

    return NULL;
}

static PyObject *dparse_function_4_delete_of_class_2_FileSystemStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_4_delete_of_class_2_FileSystemStorage_of_module_django__core__files__storage( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_delete_of_class_2_FileSystemStorage_of_module_django__core__files__storage( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_exists_of_class_2_FileSystemStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );

    // Actual function code.
    static PyFrameObject *frame_function_5_exists_of_class_2_FileSystemStorage_of_module_django__core__files__storage = NULL;

    if ( isFrameUnusable( frame_function_5_exists_of_class_2_FileSystemStorage_of_module_django__core__files__storage ) )
    {
        if ( frame_function_5_exists_of_class_2_FileSystemStorage_of_module_django__core__files__storage )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_exists_of_class_2_FileSystemStorage_of_module_django__core__files__storage" );
#endif
            Py_DECREF( frame_function_5_exists_of_class_2_FileSystemStorage_of_module_django__core__files__storage );
        }

        frame_function_5_exists_of_class_2_FileSystemStorage_of_module_django__core__files__storage = MAKE_FRAME( _codeobj_a153213becb900dd1d70876756fe1108, _module_django__core__files__storage );
    }

    FrameGuard frame_guard( frame_function_5_exists_of_class_2_FileSystemStorage_of_module_django__core__files__storage );
    try
    {
        assert( Py_REFCNT( frame_function_5_exists_of_class_2_FileSystemStorage_of_module_django__core__files__storage ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 247 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper1 call3;
            return ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_exists ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_path ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_name.asObject() ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_name.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_5_exists_of_class_2_FileSystemStorage_of_module_django__core__files__storage )
        {
           Py_DECREF( frame_function_5_exists_of_class_2_FileSystemStorage_of_module_django__core__files__storage );
           frame_function_5_exists_of_class_2_FileSystemStorage_of_module_django__core__files__storage = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5_exists_of_class_2_FileSystemStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "exists() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "exists() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_name == key )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "exists() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "exists() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "exists() got multiple values for keyword argument 'name'" );
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
                   "exists() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "exists() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "exists() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "exists() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "exists() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "exists() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "exists() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "exists() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "exists() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "exists() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "exists() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "exists() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "exists() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "exists() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "exists() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_5_exists_of_class_2_FileSystemStorage_of_module_django__core__files__storage( self, _python_par_self, _python_par_name );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );

    return NULL;
}

static PyObject *dparse_function_5_exists_of_class_2_FileSystemStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_5_exists_of_class_2_FileSystemStorage_of_module_django__core__files__storage( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_exists_of_class_2_FileSystemStorage_of_module_django__core__files__storage( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_listdir_of_class_2_FileSystemStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_path )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_path( _python_str_plain_path, _python_par_path );
    PyObjectLocalVariable _python_var_directories( _python_str_plain_directories );
    PyObjectLocalVariable _python_var_files( _python_str_plain_files );
    PyObjectLocalVariable _python_var_entry( _python_str_plain_entry );

    // Actual function code.
    static PyFrameObject *frame_function_6_listdir_of_class_2_FileSystemStorage_of_module_django__core__files__storage = NULL;

    if ( isFrameUnusable( frame_function_6_listdir_of_class_2_FileSystemStorage_of_module_django__core__files__storage ) )
    {
        if ( frame_function_6_listdir_of_class_2_FileSystemStorage_of_module_django__core__files__storage )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6_listdir_of_class_2_FileSystemStorage_of_module_django__core__files__storage" );
#endif
            Py_DECREF( frame_function_6_listdir_of_class_2_FileSystemStorage_of_module_django__core__files__storage );
        }

        frame_function_6_listdir_of_class_2_FileSystemStorage_of_module_django__core__files__storage = MAKE_FRAME( _codeobj_0d593bbf9eed381cc8b951185b2eb716, _module_django__core__files__storage );
    }

    FrameGuard frame_guard( frame_function_6_listdir_of_class_2_FileSystemStorage_of_module_django__core__files__storage );
    try
    {
        assert( Py_REFCNT( frame_function_6_listdir_of_class_2_FileSystemStorage_of_module_django__core__files__storage ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 250 );
        {
            PyObjectTempKeeper1 call1;
            _python_var_path.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_path ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_path.asObject() ) ) );
        }
        {
            frame_guard.setLineNumber( 251 );
            PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( MAKE_TUPLE2( PyObjectTemporary( PyList_New( 0 ) ).asObject(), PyObjectTemporary( PyList_New( 0 ) ).asObject() ) ).asObject() ) );
            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
            _python_var_directories.assign0( _python_tmp_element_1.asObject() );
            _python_var_files.assign0( _python_tmp_element_2.asObject() );
        }
        {
            frame_guard.setLineNumber( 252 );
            PyObject *_tmp_python_tmp_for_iterator;
            {
                PyObjectTempKeeper1 call3;
                _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_os.asObject0(), _python_str_plain_listdir ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_path.asObject() ) ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 252 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_entry.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 253 );
                {
                    PyObjectTempKeeper0 call10;
                    PyObjectTempKeeper1 call12;
                    PyObjectTempKeeper1 call9;
                    if ( CHECK_IF_TRUE( PyObjectTemporary( ( call12.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_isdir ) ), CALL_FUNCTION_WITH_ARGS( call12.asObject0(), PyObjectTemporary( ( call9.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_join ) ), call10.assign( _python_var_path.asObject() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), call10.asObject0(), _python_var_entry.asObject() ) ) ).asObject() ) ) ).asObject() ) )
                {
                    frame_guard.setLineNumber( 254 );
                    {
                        PyObjectTempKeeper1 call5;
                        DECREASE_REFCOUNT( ( call5.assign( LOOKUP_ATTRIBUTE( _python_var_directories.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_entry.asObject() ) ) );
                    }
                }
                else
                {
                    frame_guard.setLineNumber( 256 );
                    {
                        PyObjectTempKeeper1 call7;
                        DECREASE_REFCOUNT( ( call7.assign( LOOKUP_ATTRIBUTE( _python_var_files.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _python_var_entry.asObject() ) ) );
                    }
                }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 257 );
        {
            PyObjectTempKeeper0 make_tuple14;
            return ( make_tuple14.assign( _python_var_directories.asObject() ), MAKE_TUPLE2( make_tuple14.asObject0(), _python_var_files.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_path.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_entry.updateLocalsDict( _python_var_files.updateLocalsDict( _python_var_directories.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_6_listdir_of_class_2_FileSystemStorage_of_module_django__core__files__storage )
        {
           Py_DECREF( frame_function_6_listdir_of_class_2_FileSystemStorage_of_module_django__core__files__storage );
           frame_function_6_listdir_of_class_2_FileSystemStorage_of_module_django__core__files__storage = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_6_listdir_of_class_2_FileSystemStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_path = NULL;
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
                PyErr_Format( PyExc_TypeError, "listdir() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "listdir() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_path == key )
            {
                if (unlikely( _python_par_path ))
                {
                    PyErr_Format( PyExc_TypeError, "listdir() got multiple values for keyword argument 'path'" );
                    goto error_exit;
                }

                _python_par_path = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "listdir() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_path, key ) )
            {
                if (unlikely( _python_par_path ))
                {
                    PyErr_Format( PyExc_TypeError, "listdir() got multiple values for keyword argument 'path'" );
                    goto error_exit;
                }

                _python_par_path = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "listdir() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "listdir() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "listdir() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "listdir() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "listdir() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "listdir() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "listdir() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "listdir() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "listdir() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "listdir() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "listdir() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "listdir() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "listdir() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "listdir() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_path != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "listdir() got multiple values for keyword argument 'path'" );
             goto error_exit;
         }

        _python_par_path = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_6_listdir_of_class_2_FileSystemStorage_of_module_django__core__files__storage( self, _python_par_self, _python_par_path );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_path );

    return NULL;
}

static PyObject *dparse_function_6_listdir_of_class_2_FileSystemStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_6_listdir_of_class_2_FileSystemStorage_of_module_django__core__files__storage( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_listdir_of_class_2_FileSystemStorage_of_module_django__core__files__storage( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7_path_of_class_2_FileSystemStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );
    PyObjectLocalVariable _python_var_path( _python_str_plain_path );

    // Actual function code.
    static PyFrameObject *frame_function_7_path_of_class_2_FileSystemStorage_of_module_django__core__files__storage = NULL;

    if ( isFrameUnusable( frame_function_7_path_of_class_2_FileSystemStorage_of_module_django__core__files__storage ) )
    {
        if ( frame_function_7_path_of_class_2_FileSystemStorage_of_module_django__core__files__storage )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_7_path_of_class_2_FileSystemStorage_of_module_django__core__files__storage" );
#endif
            Py_DECREF( frame_function_7_path_of_class_2_FileSystemStorage_of_module_django__core__files__storage );
        }

        frame_function_7_path_of_class_2_FileSystemStorage_of_module_django__core__files__storage = MAKE_FRAME( _codeobj_690c5e4b350361ea190d9be9d415103a, _module_django__core__files__storage );
    }

    FrameGuard frame_guard( frame_function_7_path_of_class_2_FileSystemStorage_of_module_django__core__files__storage );
    try
    {
        assert( Py_REFCNT( frame_function_7_path_of_class_2_FileSystemStorage_of_module_django__core__files__storage ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 260 );
        try
        {
            frame_guard.setLineNumber( 261 );
            {
                PyObjectTempKeeper0 call3;
                PyObjectTempKeeper1 call4;
                _python_var_path.assign1( ( call3.assign( _mvar_django__core__files__storage_safe_join.asObject0() ), call4.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_location ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), call4.asObject0(), _python_var_name.asObject() ) ) );
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

            if ( _exception.matches( PyExc_ValueError ) )
            {
                frame_guard.detachFrame();
                frame_guard.setLineNumber( 263 );
                {
                    PyObjectTempKeeper0 call1;
                    {
                        PyObjectTemporary tmp_exception_type( ( call1.assign( _mvar_django__core__files__storage_SuspiciousFileOperation.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_0390378a4c4fdb70272d6d7f867a2c2d, _python_var_name.asObject() ) ).asObject() ) ) );
                        RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                }
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
        frame_guard.setLineNumber( 264 );
        {
            PyObjectTempKeeper1 call6;
            return ( call6.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_normpath ) ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), _python_var_path.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_name.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_path.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_7_path_of_class_2_FileSystemStorage_of_module_django__core__files__storage )
        {
           Py_DECREF( frame_function_7_path_of_class_2_FileSystemStorage_of_module_django__core__files__storage );
           frame_function_7_path_of_class_2_FileSystemStorage_of_module_django__core__files__storage = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_7_path_of_class_2_FileSystemStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "path() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "path() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_name == key )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "path() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "path() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "path() got multiple values for keyword argument 'name'" );
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
                   "path() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "path() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "path() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "path() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "path() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "path() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "path() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "path() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "path() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "path() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "path() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "path() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "path() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "path() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "path() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_7_path_of_class_2_FileSystemStorage_of_module_django__core__files__storage( self, _python_par_self, _python_par_name );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );

    return NULL;
}

static PyObject *dparse_function_7_path_of_class_2_FileSystemStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_7_path_of_class_2_FileSystemStorage_of_module_django__core__files__storage( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7_path_of_class_2_FileSystemStorage_of_module_django__core__files__storage( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8_size_of_class_2_FileSystemStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );

    // Actual function code.
    static PyFrameObject *frame_function_8_size_of_class_2_FileSystemStorage_of_module_django__core__files__storage = NULL;

    if ( isFrameUnusable( frame_function_8_size_of_class_2_FileSystemStorage_of_module_django__core__files__storage ) )
    {
        if ( frame_function_8_size_of_class_2_FileSystemStorage_of_module_django__core__files__storage )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_8_size_of_class_2_FileSystemStorage_of_module_django__core__files__storage" );
#endif
            Py_DECREF( frame_function_8_size_of_class_2_FileSystemStorage_of_module_django__core__files__storage );
        }

        frame_function_8_size_of_class_2_FileSystemStorage_of_module_django__core__files__storage = MAKE_FRAME( _codeobj_002f4c5cfb209c28d10d350f326d9f75, _module_django__core__files__storage );
    }

    FrameGuard frame_guard( frame_function_8_size_of_class_2_FileSystemStorage_of_module_django__core__files__storage );
    try
    {
        assert( Py_REFCNT( frame_function_8_size_of_class_2_FileSystemStorage_of_module_django__core__files__storage ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 267 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper1 call3;
            return ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_getsize ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_path ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_name.asObject() ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_name.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_8_size_of_class_2_FileSystemStorage_of_module_django__core__files__storage )
        {
           Py_DECREF( frame_function_8_size_of_class_2_FileSystemStorage_of_module_django__core__files__storage );
           frame_function_8_size_of_class_2_FileSystemStorage_of_module_django__core__files__storage = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_8_size_of_class_2_FileSystemStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "size() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "size() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_name == key )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "size() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "size() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "size() got multiple values for keyword argument 'name'" );
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
                   "size() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "size() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "size() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "size() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "size() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "size() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "size() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "size() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "size() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "size() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "size() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "size() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "size() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "size() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "size() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_8_size_of_class_2_FileSystemStorage_of_module_django__core__files__storage( self, _python_par_self, _python_par_name );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );

    return NULL;
}

static PyObject *dparse_function_8_size_of_class_2_FileSystemStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_8_size_of_class_2_FileSystemStorage_of_module_django__core__files__storage( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_size_of_class_2_FileSystemStorage_of_module_django__core__files__storage( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9_url_of_class_2_FileSystemStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );

    // Actual function code.
    static PyFrameObject *frame_function_9_url_of_class_2_FileSystemStorage_of_module_django__core__files__storage = NULL;

    if ( isFrameUnusable( frame_function_9_url_of_class_2_FileSystemStorage_of_module_django__core__files__storage ) )
    {
        if ( frame_function_9_url_of_class_2_FileSystemStorage_of_module_django__core__files__storage )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_9_url_of_class_2_FileSystemStorage_of_module_django__core__files__storage" );
#endif
            Py_DECREF( frame_function_9_url_of_class_2_FileSystemStorage_of_module_django__core__files__storage );
        }

        frame_function_9_url_of_class_2_FileSystemStorage_of_module_django__core__files__storage = MAKE_FRAME( _codeobj_89d5f9099d5946355d76683f336a4fb0, _module_django__core__files__storage );
    }

    FrameGuard frame_guard( frame_function_9_url_of_class_2_FileSystemStorage_of_module_django__core__files__storage );
    try
    {
        assert( Py_REFCNT( frame_function_9_url_of_class_2_FileSystemStorage_of_module_django__core__files__storage ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 270 );
        if ( ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_base_url ) ).asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 271 );
            {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_ValueError, PyObjectTemporary( MAKE_TUPLE1( _python_str_digest_517dc1d47ce2fb63f753cf75fca0bef4 ) ).asObject() ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
        }
        frame_guard.setLineNumber( 272 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper0 call3;
            PyObjectTempKeeper1 call4;
            return ( call3.assign( _mvar_django__core__files__storage_urljoin.asObject0() ), call4.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_base_url ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), call4.asObject0(), PyObjectTemporary( ( call1.assign( _mvar_django__core__files__storage_filepath_to_uri.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_name.asObject() ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_name.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_9_url_of_class_2_FileSystemStorage_of_module_django__core__files__storage )
        {
           Py_DECREF( frame_function_9_url_of_class_2_FileSystemStorage_of_module_django__core__files__storage );
           frame_function_9_url_of_class_2_FileSystemStorage_of_module_django__core__files__storage = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_9_url_of_class_2_FileSystemStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "url() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "url() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_name == key )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "url() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "url() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "url() got multiple values for keyword argument 'name'" );
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
                   "url() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "url() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "url() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "url() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "url() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "url() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "url() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "url() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "url() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "url() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "url() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "url() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "url() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "url() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "url() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_9_url_of_class_2_FileSystemStorage_of_module_django__core__files__storage( self, _python_par_self, _python_par_name );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );

    return NULL;
}

static PyObject *dparse_function_9_url_of_class_2_FileSystemStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_9_url_of_class_2_FileSystemStorage_of_module_django__core__files__storage( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9_url_of_class_2_FileSystemStorage_of_module_django__core__files__storage( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_10_accessed_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );

    // Actual function code.
    static PyFrameObject *frame_function_10_accessed_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage = NULL;

    if ( isFrameUnusable( frame_function_10_accessed_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage ) )
    {
        if ( frame_function_10_accessed_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_10_accessed_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage" );
#endif
            Py_DECREF( frame_function_10_accessed_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage );
        }

        frame_function_10_accessed_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage = MAKE_FRAME( _codeobj_3a95415df8a565904b2c168e4d73bfc8, _module_django__core__files__storage );
    }

    FrameGuard frame_guard( frame_function_10_accessed_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage );
    try
    {
        assert( Py_REFCNT( frame_function_10_accessed_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 275 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper1 call5;
            return ( call5.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_datetime.asObject0(), _python_str_plain_fromtimestamp ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), PyObjectTemporary( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_getatime ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_path ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_name.asObject() ) ) ).asObject() ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_name.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_10_accessed_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage )
        {
           Py_DECREF( frame_function_10_accessed_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage );
           frame_function_10_accessed_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_10_accessed_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "accessed_time() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "accessed_time() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_name == key )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "accessed_time() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "accessed_time() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "accessed_time() got multiple values for keyword argument 'name'" );
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
                   "accessed_time() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "accessed_time() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "accessed_time() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "accessed_time() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "accessed_time() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "accessed_time() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "accessed_time() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "accessed_time() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "accessed_time() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "accessed_time() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "accessed_time() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "accessed_time() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "accessed_time() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "accessed_time() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "accessed_time() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_10_accessed_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage( self, _python_par_self, _python_par_name );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );

    return NULL;
}

static PyObject *dparse_function_10_accessed_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_10_accessed_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_10_accessed_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_11_created_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );

    // Actual function code.
    static PyFrameObject *frame_function_11_created_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage = NULL;

    if ( isFrameUnusable( frame_function_11_created_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage ) )
    {
        if ( frame_function_11_created_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_11_created_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage" );
#endif
            Py_DECREF( frame_function_11_created_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage );
        }

        frame_function_11_created_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage = MAKE_FRAME( _codeobj_1ef5ac763b4a2ab5b7f32bfca14ef8dd, _module_django__core__files__storage );
    }

    FrameGuard frame_guard( frame_function_11_created_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage );
    try
    {
        assert( Py_REFCNT( frame_function_11_created_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 278 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper1 call5;
            return ( call5.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_datetime.asObject0(), _python_str_plain_fromtimestamp ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), PyObjectTemporary( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_getctime ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_path ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_name.asObject() ) ) ).asObject() ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_name.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_11_created_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage )
        {
           Py_DECREF( frame_function_11_created_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage );
           frame_function_11_created_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_11_created_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "created_time() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "created_time() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_name == key )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "created_time() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "created_time() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "created_time() got multiple values for keyword argument 'name'" );
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
                   "created_time() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "created_time() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "created_time() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "created_time() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "created_time() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "created_time() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "created_time() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "created_time() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "created_time() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "created_time() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "created_time() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "created_time() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "created_time() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "created_time() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "created_time() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_11_created_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage( self, _python_par_self, _python_par_name );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );

    return NULL;
}

static PyObject *dparse_function_11_created_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_11_created_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_11_created_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_12_modified_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );

    // Actual function code.
    static PyFrameObject *frame_function_12_modified_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage = NULL;

    if ( isFrameUnusable( frame_function_12_modified_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage ) )
    {
        if ( frame_function_12_modified_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_12_modified_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage" );
#endif
            Py_DECREF( frame_function_12_modified_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage );
        }

        frame_function_12_modified_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage = MAKE_FRAME( _codeobj_fd5c0617ae3191d0e27b84b151d334b8, _module_django__core__files__storage );
    }

    FrameGuard frame_guard( frame_function_12_modified_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage );
    try
    {
        assert( Py_REFCNT( frame_function_12_modified_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 281 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper1 call5;
            return ( call5.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_datetime.asObject0(), _python_str_plain_fromtimestamp ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), PyObjectTemporary( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_getmtime ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_path ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_name.asObject() ) ) ).asObject() ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_name.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_12_modified_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage )
        {
           Py_DECREF( frame_function_12_modified_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage );
           frame_function_12_modified_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_12_modified_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "modified_time() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "modified_time() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_name == key )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "modified_time() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "modified_time() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "modified_time() got multiple values for keyword argument 'name'" );
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
                   "modified_time() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "modified_time() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "modified_time() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "modified_time() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "modified_time() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "modified_time() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "modified_time() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "modified_time() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "modified_time() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "modified_time() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "modified_time() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "modified_time() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "modified_time() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "modified_time() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "modified_time() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_12_modified_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage( self, _python_par_self, _python_par_name );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );

    return NULL;
}

static PyObject *dparse_function_12_modified_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_12_modified_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_12_modified_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_get_storage_class_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject *_python_par_import_path )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_import_path( _python_str_plain_import_path, _python_par_import_path );

    // Actual function code.
    static PyFrameObject *frame_function_3_get_storage_class_of_module_django__core__files__storage = NULL;

    if ( isFrameUnusable( frame_function_3_get_storage_class_of_module_django__core__files__storage ) )
    {
        if ( frame_function_3_get_storage_class_of_module_django__core__files__storage )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_get_storage_class_of_module_django__core__files__storage" );
#endif
            Py_DECREF( frame_function_3_get_storage_class_of_module_django__core__files__storage );
        }

        frame_function_3_get_storage_class_of_module_django__core__files__storage = MAKE_FRAME( _codeobj_5dd35cf0595c13c82f4c1506c2bc9de1, _module_django__core__files__storage );
    }

    FrameGuard frame_guard( frame_function_3_get_storage_class_of_module_django__core__files__storage );
    try
    {
        assert( Py_REFCNT( frame_function_3_get_storage_class_of_module_django__core__files__storage ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 284 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper0 keeper_0;
            return ( call1.assign( _mvar_django__core__files__storage_import_by_path.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( ( CHECK_IF_TRUE( keeper_0.assign( _python_var_import_path.asObject() ) ) ? INCREASE_REFCOUNT( keeper_0.asObject0() ) : LOOKUP_ATTRIBUTE( _mvar_django__core__files__storage_settings.asObject0(), _python_str_plain_DEFAULT_FILE_STORAGE ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_import_path.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_3_get_storage_class_of_module_django__core__files__storage )
        {
           Py_DECREF( frame_function_3_get_storage_class_of_module_django__core__files__storage );
           frame_function_3_get_storage_class_of_module_django__core__files__storage = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_get_storage_class_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_import_path = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_storage_class() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_import_path == key )
            {
                if (unlikely( _python_par_import_path ))
                {
                    PyErr_Format( PyExc_TypeError, "get_storage_class() got multiple values for keyword argument 'import_path'" );
                    goto error_exit;
                }

                _python_par_import_path = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_import_path, key ) )
            {
                if (unlikely( _python_par_import_path ))
                {
                    PyErr_Format( PyExc_TypeError, "get_storage_class() got multiple values for keyword argument 'import_path'" );
                    goto error_exit;
                }

                _python_par_import_path = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_storage_class() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_storage_class() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_storage_class() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_storage_class() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_storage_class() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_storage_class() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_storage_class() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_storage_class() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_storage_class() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 0 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "get_storage_class() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_storage_class() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "get_storage_class() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_storage_class() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_import_path != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_storage_class() got multiple values for keyword argument 'import_path'" );
             goto error_exit;
         }

        _python_par_import_path = INCREASE_REFCOUNT( args[ 0 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_import_path == NULL )
    {
        _python_par_import_path = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_import_path );
    }


    return impl_function_3_get_storage_class_of_module_django__core__files__storage( self, _python_par_import_path );

error_exit:;

    Py_XDECREF( _python_par_import_path );

    return NULL;
}

static PyObject *dparse_function_3_get_storage_class_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3_get_storage_class_of_module_django__core__files__storage( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_get_storage_class_of_module_django__core__files__storage( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_4_DefaultStorage_of_module_django__core__files__storage(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var__setup( _python_str_plain__setup );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_storage );
    _python_var__setup.assign1( MAKE_FUNCTION_function_1__setup_of_class_4_DefaultStorage_of_module_django__core__files__storage(  ) );
    return _python_var__setup.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) );
}


static PyObject *impl_function_1__setup_of_class_4_DefaultStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_1__setup_of_class_4_DefaultStorage_of_module_django__core__files__storage = NULL;

    if ( isFrameUnusable( frame_function_1__setup_of_class_4_DefaultStorage_of_module_django__core__files__storage ) )
    {
        if ( frame_function_1__setup_of_class_4_DefaultStorage_of_module_django__core__files__storage )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1__setup_of_class_4_DefaultStorage_of_module_django__core__files__storage" );
#endif
            Py_DECREF( frame_function_1__setup_of_class_4_DefaultStorage_of_module_django__core__files__storage );
        }

        frame_function_1__setup_of_class_4_DefaultStorage_of_module_django__core__files__storage = MAKE_FRAME( _codeobj_98cc0375c1ac5893e09529b0ae01e4cb, _module_django__core__files__storage );
    }

    FrameGuard frame_guard( frame_function_1__setup_of_class_4_DefaultStorage_of_module_django__core__files__storage );
    try
    {
        assert( Py_REFCNT( frame_function_1__setup_of_class_4_DefaultStorage_of_module_django__core__files__storage ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 288 );
        {
                PyObjectTemporary tmp_identifier( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( _mvar_django__core__files__storage_get_storage_class.asObject0() ) ).asObject() ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain__wrapped );
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

        if ( frame_guard.getFrame0() == frame_function_1__setup_of_class_4_DefaultStorage_of_module_django__core__files__storage )
        {
           Py_DECREF( frame_function_1__setup_of_class_4_DefaultStorage_of_module_django__core__files__storage );
           frame_function_1__setup_of_class_4_DefaultStorage_of_module_django__core__files__storage = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1__setup_of_class_4_DefaultStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "_setup() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_setup() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "_setup() got multiple values for keyword argument 'self'" );
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
                   "_setup() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_setup() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_setup() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_setup() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_setup() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_setup() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_setup() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_setup() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_setup() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_setup() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_setup() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_setup() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_setup() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_setup() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_1__setup_of_class_4_DefaultStorage_of_module_django__core__files__storage( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_1__setup_of_class_4_DefaultStorage_of_module_django__core__files__storage( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_1__setup_of_class_4_DefaultStorage_of_module_django__core__files__storage( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1__setup_of_class_4_DefaultStorage_of_module_django__core__files__storage( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_10_accessed_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_10_accessed_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage,
        dparse_function_10_accessed_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage,
        _python_str_plain_accessed_time,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_3a95415df8a565904b2c168e4d73bfc8,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__storage,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_10_url_of_class_1_Storage_of_module_django__core__files__storage(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_10_url_of_class_1_Storage_of_module_django__core__files__storage,
        dparse_function_10_url_of_class_1_Storage_of_module_django__core__files__storage,
        _python_str_plain_url,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_a29fbf5915f14ac3657f53c30364eef8,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__storage,
        _python_str_digest_6566fac80adb175a0ace8d1e85f8a16f
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_11_accessed_time_of_class_1_Storage_of_module_django__core__files__storage(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_11_accessed_time_of_class_1_Storage_of_module_django__core__files__storage,
        dparse_function_11_accessed_time_of_class_1_Storage_of_module_django__core__files__storage,
        _python_str_plain_accessed_time,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_042e9410886882ccb202df635e639492,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__storage,
        _python_str_digest_167e2b3fd128bbd036c73707e26113d0
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_11_created_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_11_created_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage,
        dparse_function_11_created_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage,
        _python_str_plain_created_time,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_1ef5ac763b4a2ab5b7f32bfca14ef8dd,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__storage,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_12_created_time_of_class_1_Storage_of_module_django__core__files__storage(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_12_created_time_of_class_1_Storage_of_module_django__core__files__storage,
        dparse_function_12_created_time_of_class_1_Storage_of_module_django__core__files__storage,
        _python_str_plain_created_time,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_5de8a804503bea212346d3ab5d3dcca1,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__storage,
        _python_str_digest_3fffa0522ea6570e4907aeeea145e03b
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_12_modified_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_12_modified_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage,
        dparse_function_12_modified_time_of_class_2_FileSystemStorage_of_module_django__core__files__storage,
        _python_str_plain_modified_time,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_fd5c0617ae3191d0e27b84b151d334b8,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__storage,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_13_modified_time_of_class_1_Storage_of_module_django__core__files__storage(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_13_modified_time_of_class_1_Storage_of_module_django__core__files__storage,
        dparse_function_13_modified_time_of_class_1_Storage_of_module_django__core__files__storage,
        _python_str_plain_modified_time,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_a7db0898b79ccba63785a16798ca9222,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__storage,
        _python_str_digest_63627a6bd004b88dbc3bb5067aea191c
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_2_FileSystemStorage_of_module_django__core__files__storage(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_2_FileSystemStorage_of_module_django__core__files__storage,
        dparse_function_1___init___of_class_2_FileSystemStorage_of_module_django__core__files__storage,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_58048c64ea64dc592e830687f353a000,
        INCREASE_REFCOUNT( _python_tuple_none_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__storage,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1__setup_of_class_4_DefaultStorage_of_module_django__core__files__storage(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1__setup_of_class_4_DefaultStorage_of_module_django__core__files__storage,
        dparse_function_1__setup_of_class_4_DefaultStorage_of_module_django__core__files__storage,
        _python_str_plain__setup,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_98cc0375c1ac5893e09529b0ae01e4cb,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__storage,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_open_of_class_1_Storage_of_module_django__core__files__storage(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_open_of_class_1_Storage_of_module_django__core__files__storage,
        dparse_function_1_open_of_class_1_Storage_of_module_django__core__files__storage,
        _python_str_plain_open,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_7c88ef11ac0f4177d62032ab37bf15d7,
        INCREASE_REFCOUNT( _python_tuple_str_plain_rb_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__storage,
        _python_str_digest_e6e3c0998ce06b2bff0f82426f32e478
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2__open_of_class_2_FileSystemStorage_of_module_django__core__files__storage(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2__open_of_class_2_FileSystemStorage_of_module_django__core__files__storage,
        dparse_function_2__open_of_class_2_FileSystemStorage_of_module_django__core__files__storage,
        _python_str_plain__open,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_adc2f1b2dc6d5244a9f5667cc1452a58,
        INCREASE_REFCOUNT( _python_tuple_str_plain_rb_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__storage,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_save_of_class_1_Storage_of_module_django__core__files__storage(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_save_of_class_1_Storage_of_module_django__core__files__storage,
        dparse_function_2_save_of_class_1_Storage_of_module_django__core__files__storage,
        _python_str_plain_save,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_18d49dddcbb9f76ee525ec028af1f806,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__storage,
        _python_str_digest_345dc19d45890fa1311ef70a0d247083
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3__save_of_class_2_FileSystemStorage_of_module_django__core__files__storage(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3__save_of_class_2_FileSystemStorage_of_module_django__core__files__storage,
        dparse_function_3__save_of_class_2_FileSystemStorage_of_module_django__core__files__storage,
        _python_str_plain__save,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_2f67e56f9e22ee5a2c4efa2d712b9923,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__storage,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_get_storage_class_of_module_django__core__files__storage(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_get_storage_class_of_module_django__core__files__storage,
        dparse_function_3_get_storage_class_of_module_django__core__files__storage,
        _python_str_plain_get_storage_class,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_5dd35cf0595c13c82f4c1506c2bc9de1,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__storage,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_get_valid_name_of_class_1_Storage_of_module_django__core__files__storage(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_get_valid_name_of_class_1_Storage_of_module_django__core__files__storage,
        dparse_function_3_get_valid_name_of_class_1_Storage_of_module_django__core__files__storage,
        _python_str_plain_get_valid_name,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e186e3b819b4ca72ead1050838011d87,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__storage,
        _python_str_digest_35618629158f5c4b86d1b69956729652
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_delete_of_class_2_FileSystemStorage_of_module_django__core__files__storage(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_delete_of_class_2_FileSystemStorage_of_module_django__core__files__storage,
        dparse_function_4_delete_of_class_2_FileSystemStorage_of_module_django__core__files__storage,
        _python_str_plain_delete,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d31532230f35beb3f0c12f1ab72f08f7,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__storage,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_get_available_name_of_class_1_Storage_of_module_django__core__files__storage(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_get_available_name_of_class_1_Storage_of_module_django__core__files__storage,
        dparse_function_4_get_available_name_of_class_1_Storage_of_module_django__core__files__storage,
        _python_str_plain_get_available_name,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_19dc73392248670de58471e4b3564db6,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__storage,
        _python_str_digest_0a0ac8001e822b6442ee8db2a656091d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_exists_of_class_2_FileSystemStorage_of_module_django__core__files__storage(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_exists_of_class_2_FileSystemStorage_of_module_django__core__files__storage,
        dparse_function_5_exists_of_class_2_FileSystemStorage_of_module_django__core__files__storage,
        _python_str_plain_exists,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_a153213becb900dd1d70876756fe1108,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__storage,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_path_of_class_1_Storage_of_module_django__core__files__storage(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_path_of_class_1_Storage_of_module_django__core__files__storage,
        dparse_function_5_path_of_class_1_Storage_of_module_django__core__files__storage,
        _python_str_plain_path,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_f0d849cd3d889fe7c7230f699a70e8b9,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__storage,
        _python_str_digest_88aaa4371aa28f395f02c35cc4a36a51
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_delete_of_class_1_Storage_of_module_django__core__files__storage(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_delete_of_class_1_Storage_of_module_django__core__files__storage,
        dparse_function_6_delete_of_class_1_Storage_of_module_django__core__files__storage,
        _python_str_plain_delete,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d2b0464e5ebce85c6fbd6f136f0de589,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__storage,
        _python_str_digest_77c338c04022acc34445d23a619c6bf7
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_listdir_of_class_2_FileSystemStorage_of_module_django__core__files__storage(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_listdir_of_class_2_FileSystemStorage_of_module_django__core__files__storage,
        dparse_function_6_listdir_of_class_2_FileSystemStorage_of_module_django__core__files__storage,
        _python_str_plain_listdir,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_0d593bbf9eed381cc8b951185b2eb716,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__storage,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_exists_of_class_1_Storage_of_module_django__core__files__storage(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_exists_of_class_1_Storage_of_module_django__core__files__storage,
        dparse_function_7_exists_of_class_1_Storage_of_module_django__core__files__storage,
        _python_str_plain_exists,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_6f6e2e7c0b5004dc47b22e2f3353370d,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__storage,
        _python_str_digest_43b3bd648171b1b7f7d68d800537805f
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_path_of_class_2_FileSystemStorage_of_module_django__core__files__storage(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_path_of_class_2_FileSystemStorage_of_module_django__core__files__storage,
        dparse_function_7_path_of_class_2_FileSystemStorage_of_module_django__core__files__storage,
        _python_str_plain_path,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_690c5e4b350361ea190d9be9d415103a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__storage,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_listdir_of_class_1_Storage_of_module_django__core__files__storage(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_listdir_of_class_1_Storage_of_module_django__core__files__storage,
        dparse_function_8_listdir_of_class_1_Storage_of_module_django__core__files__storage,
        _python_str_plain_listdir,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_32bca49c81af6acd784e21a85516beaa,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__storage,
        _python_str_digest_c2f254a97e70b5c5fc70b15c01d0280c
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_size_of_class_2_FileSystemStorage_of_module_django__core__files__storage(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_size_of_class_2_FileSystemStorage_of_module_django__core__files__storage,
        dparse_function_8_size_of_class_2_FileSystemStorage_of_module_django__core__files__storage,
        _python_str_plain_size,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_002f4c5cfb209c28d10d350f326d9f75,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__storage,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_size_of_class_1_Storage_of_module_django__core__files__storage(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_size_of_class_1_Storage_of_module_django__core__files__storage,
        dparse_function_9_size_of_class_1_Storage_of_module_django__core__files__storage,
        _python_str_plain_size,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_2967d35cf9170be1218ee771bd051bab,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__storage,
        _python_str_digest_693009842281fe6b21fd8b05659d3e99
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_url_of_class_2_FileSystemStorage_of_module_django__core__files__storage(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_url_of_class_2_FileSystemStorage_of_module_django__core__files__storage,
        dparse_function_9_url_of_class_2_FileSystemStorage_of_module_django__core__files__storage,
        _python_str_plain_url,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_89d5f9099d5946355d76683f336a4fb0,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__storage,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.core.files.storage",   /* m_name */
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

MOD_INIT_DECL( django__core__files__storage )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__core__files__storage );
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

    // puts( "in initdjango__core__files__storage" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__core__files__storage = Py_InitModule4(
        "django.core.files.storage",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__core__files__storage = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__core__files__storage = (PyDictObject *)((PyModuleObject *)_module_django__core__files__storage)->md_dict;

    assertObject( _module_django__core__files__storage );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_117c3cb6f3da5516f668cdb12c1ec8b0, _module_django__core__files__storage );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__core__files__storage );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__core__files__storage != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__core__files__storage, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django__core__files__storage, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_2a82c5ae1624c3620cbdb9f4f43f3be7 );
    PyFrameObject *frame_module_django__core__files__storage = MAKE_FRAME( _codeobj_f21328396244a04ea1bd8f6800265e73, _module_django__core__files__storage );

    FrameGuard frame_guard( frame_module_django__core__files__storage );
    try
    {
        assert( Py_REFCNT( frame_module_django__core__files__storage ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 1 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__storage, (Nuitka_StringObject *)_python_str_plain_os, IMPORT_MODULE( _python_str_plain_os, ((PyModuleObject *)_module_django__core__files__storage)->md_dict, ((PyModuleObject *)_module_django__core__files__storage)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 2 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__storage, (Nuitka_StringObject *)_python_str_plain_errno, IMPORT_MODULE( _python_str_plain_errno, ((PyModuleObject *)_module_django__core__files__storage)->md_dict, ((PyModuleObject *)_module_django__core__files__storage)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 3 );
        try
        {
            frame_guard.setLineNumber( 4 );
            UPDATE_STRING_DICT1( _moduledict_django__core__files__storage, (Nuitka_StringObject *)_python_str_plain_urljoin, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_16d628fa9b79bd53ede39389589a2bbf, ((PyModuleObject *)_module_django__core__files__storage)->md_dict, ((PyModuleObject *)_module_django__core__files__storage)->md_dict, _python_list_str_plain_urljoin_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_urljoin ) );
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

            if ( _exception.matches( PyExc_ImportError ) )
            {
                frame_guard.detachFrame();
                frame_guard.setLineNumber( 6 );
                UPDATE_STRING_DICT1( _moduledict_django__core__files__storage, (Nuitka_StringObject *)_python_str_plain_urljoin, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_urlparse, ((PyModuleObject *)_module_django__core__files__storage)->md_dict, ((PyModuleObject *)_module_django__core__files__storage)->md_dict, _python_list_str_plain_urljoin_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_urljoin ) );
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
        frame_guard.setLineNumber( 7 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__storage, (Nuitka_StringObject *)_python_str_plain_itertools, IMPORT_MODULE( _python_str_plain_itertools, ((PyModuleObject *)_module_django__core__files__storage)->md_dict, ((PyModuleObject *)_module_django__core__files__storage)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 8 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__storage, (Nuitka_StringObject *)_python_str_plain_datetime, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_datetime, ((PyModuleObject *)_module_django__core__files__storage)->md_dict, ((PyModuleObject *)_module_django__core__files__storage)->md_dict, _python_list_str_plain_datetime_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_datetime ) );
        frame_guard.setLineNumber( 10 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__storage, (Nuitka_StringObject *)_python_str_plain_settings, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__core__files__storage)->md_dict, ((PyModuleObject *)_module_django__core__files__storage)->md_dict, _python_list_str_plain_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_settings ) );
        frame_guard.setLineNumber( 11 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__storage, (Nuitka_StringObject *)_python_str_plain_SuspiciousFileOperation, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d9333e07c409926fdd89a4c3c526d0b5, ((PyModuleObject *)_module_django__core__files__storage)->md_dict, ((PyModuleObject *)_module_django__core__files__storage)->md_dict, _python_list_str_plain_SuspiciousFileOperation_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_SuspiciousFileOperation ) );
        frame_guard.setLineNumber( 12 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__storage, (Nuitka_StringObject *)_python_str_plain_locks, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_1c708a450f106db73723c5b9289df76d, ((PyModuleObject *)_module_django__core__files__storage)->md_dict, ((PyModuleObject *)_module_django__core__files__storage)->md_dict, _python_list_str_plain_locks_str_plain_File_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_locks ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__storage, (Nuitka_StringObject *)_python_str_plain_File, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_1c708a450f106db73723c5b9289df76d, ((PyModuleObject *)_module_django__core__files__storage)->md_dict, ((PyModuleObject *)_module_django__core__files__storage)->md_dict, _python_list_str_plain_locks_str_plain_File_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_File ) );
        frame_guard.setLineNumber( 13 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__storage, (Nuitka_StringObject *)_python_str_plain_file_move_safe, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_386d457b783565083e69ea56b897319d, ((PyModuleObject *)_module_django__core__files__storage)->md_dict, ((PyModuleObject *)_module_django__core__files__storage)->md_dict, _python_list_str_plain_file_move_safe_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_file_move_safe ) );
        frame_guard.setLineNumber( 14 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__storage, (Nuitka_StringObject *)_python_str_plain_force_text, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__core__files__storage)->md_dict, ((PyModuleObject *)_module_django__core__files__storage)->md_dict, _python_list_str_plain_force_text_str_plain_filepath_to_uri_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_force_text ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__storage, (Nuitka_StringObject *)_python_str_plain_filepath_to_uri, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__core__files__storage)->md_dict, ((PyModuleObject *)_module_django__core__files__storage)->md_dict, _python_list_str_plain_force_text_str_plain_filepath_to_uri_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_filepath_to_uri ) );
        frame_guard.setLineNumber( 15 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__storage, (Nuitka_StringObject *)_python_str_plain_LazyObject, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_17c58b9ed63e22a2fe75ba31286ba1f7, ((PyModuleObject *)_module_django__core__files__storage)->md_dict, ((PyModuleObject *)_module_django__core__files__storage)->md_dict, _python_list_str_plain_LazyObject_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_LazyObject ) );
        frame_guard.setLineNumber( 16 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__storage, (Nuitka_StringObject *)_python_str_plain_import_by_path, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_03bb9f131d782ff4dbd31e0966379285, ((PyModuleObject *)_module_django__core__files__storage)->md_dict, ((PyModuleObject *)_module_django__core__files__storage)->md_dict, _python_list_str_plain_import_by_path_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_import_by_path ) );
        frame_guard.setLineNumber( 17 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__storage, (Nuitka_StringObject *)_python_str_plain_get_valid_filename, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_1863593e728059f3c0ba0d01334514dd, ((PyModuleObject *)_module_django__core__files__storage)->md_dict, ((PyModuleObject *)_module_django__core__files__storage)->md_dict, _python_list_str_plain_get_valid_filename_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_get_valid_filename ) );
        frame_guard.setLineNumber( 18 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__storage, (Nuitka_StringObject *)_python_str_plain_safe_join, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_88846ba615a71fb6c28246da44176ee3, ((PyModuleObject *)_module_django__core__files__storage)->md_dict, ((PyModuleObject *)_module_django__core__files__storage)->md_dict, _python_list_str_plain_safe_join_str_plain_abspathu_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_safe_join ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__storage, (Nuitka_StringObject *)_python_str_plain_abspathu, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_88846ba615a71fb6c28246da44176ee3, ((PyModuleObject *)_module_django__core__files__storage)->md_dict, ((PyModuleObject *)_module_django__core__files__storage)->md_dict, _python_list_str_plain_safe_join_str_plain_abspathu_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_abspathu ) );
        UPDATE_STRING_DICT0( _moduledict_django__core__files__storage, (Nuitka_StringObject *)_python_str_plain___all__, _python_tuple_6da9627c4a688f4a84bb495d0ee682fa_tuple );
        {
            frame_guard.setLineNumber( 23 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_1_Storage_of_module_django__core__files__storage(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__files__storage___metaclass__.isInitialized( false ) ? _mvar_django__core__files__storage___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_Storage, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__files__storage, (Nuitka_StringObject *)_python_str_plain_Storage, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 148 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__core__files__storage_Storage.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_2_FileSystemStorage_of_module_django__core__files__storage(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__files__storage___metaclass__.isInitialized( false ) ? _mvar_django__core__files__storage___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper0 call7;
                _tmp_python_tmp_class = ( call5.assign( _python_tmp_metaclass.asObject() ), call7.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_str_plain_FileSystemStorage, call7.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__files__storage, (Nuitka_StringObject *)_python_str_plain_FileSystemStorage, _python_tmp_class.asObject() );
        }
        UPDATE_STRING_DICT1( _moduledict_django__core__files__storage, (Nuitka_StringObject *)_python_str_plain_get_storage_class, MAKE_FUNCTION_function_3_get_storage_class_of_module_django__core__files__storage(  ) );
        {
            frame_guard.setLineNumber( 286 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__core__files__storage_LazyObject.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_4_DefaultStorage_of_module_django__core__files__storage(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__files__storage___metaclass__.isInitialized( false ) ? _mvar_django__core__files__storage___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call11;
                PyObjectTempKeeper0 call9;
                _tmp_python_tmp_class = ( call9.assign( _python_tmp_metaclass.asObject() ), call11.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_str_plain_DefaultStorage, call11.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__files__storage, (Nuitka_StringObject *)_python_str_plain_DefaultStorage, _python_tmp_class.asObject() );
        }
        frame_guard.setLineNumber( 290 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__storage, (Nuitka_StringObject *)_python_str_plain_default_storage, CALL_FUNCTION_NO_ARGS( _mvar_django__core__files__storage_DefaultStorage.asObject0() ) );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__core__files__storage)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }

   return MOD_RETURN_VALUE( _module_django__core__files__storage );
}
