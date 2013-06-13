// Generated code for Python source for module 'django.core.files.uploadhandler'
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

// The _module_django__core__files__uploadhandler is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__core__files__uploadhandler;
PyDictObject *_moduledict_django__core__files__uploadhandler;

// The module level variables.
static PyObjectGlobalVariable_django__core__files__uploadhandler _mvar_django__core__files__uploadhandler_BytesIO( &_module_django__core__files__uploadhandler, &_python_str_plain_BytesIO );
static PyObjectGlobalVariable_django__core__files__uploadhandler _mvar_django__core__files__uploadhandler_FileUploadHandler( &_module_django__core__files__uploadhandler, &_python_str_plain_FileUploadHandler );
static PyObjectGlobalVariable_django__core__files__uploadhandler _mvar_django__core__files__uploadhandler_InMemoryUploadedFile( &_module_django__core__files__uploadhandler, &_python_str_plain_InMemoryUploadedFile );
static PyObjectGlobalVariable_django__core__files__uploadhandler _mvar_django__core__files__uploadhandler_MemoryFileUploadHandler( &_module_django__core__files__uploadhandler, &_python_str_plain_MemoryFileUploadHandler );
static PyObjectGlobalVariable_django__core__files__uploadhandler _mvar_django__core__files__uploadhandler_StopFutureHandlers( &_module_django__core__files__uploadhandler, &_python_str_plain_StopFutureHandlers );
static PyObjectGlobalVariable_django__core__files__uploadhandler _mvar_django__core__files__uploadhandler_TemporaryFileUploadHandler( &_module_django__core__files__uploadhandler, &_python_str_plain_TemporaryFileUploadHandler );
static PyObjectGlobalVariable_django__core__files__uploadhandler _mvar_django__core__files__uploadhandler_TemporaryUploadedFile( &_module_django__core__files__uploadhandler, &_python_str_plain_TemporaryUploadedFile );
static PyObjectGlobalVariable_django__core__files__uploadhandler _mvar_django__core__files__uploadhandler_UploadFileException( &_module_django__core__files__uploadhandler, &_python_str_plain_UploadFileException );
static PyObjectGlobalVariable_django__core__files__uploadhandler _mvar_django__core__files__uploadhandler___metaclass__( &_module_django__core__files__uploadhandler, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__core__files__uploadhandler _mvar_django__core__files__uploadhandler_import_by_path( &_module_django__core__files__uploadhandler, &_python_str_plain_import_by_path );
static PyObjectGlobalVariable_django__core__files__uploadhandler _mvar_django__core__files__uploadhandler_python_2_unicode_compatible( &_module_django__core__files__uploadhandler, &_python_str_plain_python_2_unicode_compatible );
static PyObjectGlobalVariable_django__core__files__uploadhandler _mvar_django__core__files__uploadhandler_settings( &_module_django__core__files__uploadhandler, &_python_str_plain_settings );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_UploadFileException_of_module_django__core__files__uploadhandler(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_2_StopUpload_of_module_django__core__files__uploadhandler(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_3_SkipFile_of_module_django__core__files__uploadhandler(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_4_StopFutureHandlers_of_module_django__core__files__uploadhandler(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_2_StopUpload_of_module_django__core__files__uploadhandler(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler(  );


static PyObject *MAKE_FUNCTION_function_1_handle_raw_input_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler(  );


static PyObject *MAKE_FUNCTION_function_2___str___of_class_2_StopUpload_of_module_django__core__files__uploadhandler(  );


static PyObject *MAKE_FUNCTION_function_2_handle_raw_input_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler(  );


static PyObject *MAKE_FUNCTION_function_2_new_file_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler(  );


static PyObject *MAKE_FUNCTION_function_2_new_file_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler(  );


static PyObject *MAKE_FUNCTION_function_3_new_file_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler(  );


static PyObject *MAKE_FUNCTION_function_3_receive_data_chunk_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler(  );


static PyObject *MAKE_FUNCTION_function_3_receive_data_chunk_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler(  );


static PyObject *MAKE_FUNCTION_function_4_file_complete_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler(  );


static PyObject *MAKE_FUNCTION_function_4_file_complete_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler(  );


static PyObject *MAKE_FUNCTION_function_4_receive_data_chunk_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler(  );


static PyObject *MAKE_FUNCTION_function_5_file_complete_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler(  );


static PyObject *MAKE_FUNCTION_function_6_upload_complete_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler(  );


static PyObject *MAKE_FUNCTION_function_8_load_handler_of_module_django__core__files__uploadhandler(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_UploadFileException_of_module_django__core__files__uploadhandler(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_uploadhandler );
    _python_var___doc__.assign0( _python_unicode_digest_d662271fe82d512800513ea03f69a913 );
    return _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) );
}


NUITKA_LOCAL_MODULE PyObject *impl_class_2_StopUpload_of_module_django__core__files__uploadhandler(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var___str__( _python_str_plain___str__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_uploadhandler );
    _python_var___doc__.assign0( _python_unicode_digest_37fd4ffee8536e1f6e9d22fa16a0009f );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_2_StopUpload_of_module_django__core__files__uploadhandler(  ) );
    _python_var___str__.assign1( MAKE_FUNCTION_function_2___str___of_class_2_StopUpload_of_module_django__core__files__uploadhandler(  ) );
    return _python_var___str__.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) );
}


static PyObject *impl_function_1___init___of_class_2_StopUpload_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_connection_reset )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_connection_reset( _python_str_plain_connection_reset, _python_par_connection_reset );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_2_StopUpload_of_module_django__core__files__uploadhandler = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_2_StopUpload_of_module_django__core__files__uploadhandler ) )
    {
        if ( frame_function_1___init___of_class_2_StopUpload_of_module_django__core__files__uploadhandler )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_2_StopUpload_of_module_django__core__files__uploadhandler" );
#endif
            Py_DECREF( frame_function_1___init___of_class_2_StopUpload_of_module_django__core__files__uploadhandler );
        }

        frame_function_1___init___of_class_2_StopUpload_of_module_django__core__files__uploadhandler = MAKE_FRAME( _codeobj_ad98d97e765cd7261801b9d13cc2cb11, _module_django__core__files__uploadhandler );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_2_StopUpload_of_module_django__core__files__uploadhandler );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_2_StopUpload_of_module_django__core__files__uploadhandler ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 35 );
        {
                PyObject *tmp_identifier = _python_var_connection_reset.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_connection_reset );
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
        frame_guard.getFrame0()->f_locals = _python_var_connection_reset.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_2_StopUpload_of_module_django__core__files__uploadhandler )
        {
           Py_DECREF( frame_function_1___init___of_class_2_StopUpload_of_module_django__core__files__uploadhandler );
           frame_function_1___init___of_class_2_StopUpload_of_module_django__core__files__uploadhandler = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_2_StopUpload_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_connection_reset = NULL;
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
            if ( found == false && _python_str_plain_connection_reset == key )
            {
                if (unlikely( _python_par_connection_reset ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'connection_reset'" );
                    goto error_exit;
                }

                _python_par_connection_reset = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_connection_reset, key ) )
            {
                if (unlikely( _python_par_connection_reset ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'connection_reset'" );
                    goto error_exit;
                }

                _python_par_connection_reset = value;

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
    if (unlikely( args_given > 2 ))
    {
        if ( 2 == 1 )
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
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
    args_usable_count = args_given < 2 ? args_given : 2;

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
         if (unlikely( _python_par_connection_reset != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'connection_reset'" );
             goto error_exit;
         }

        _python_par_connection_reset = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_connection_reset == NULL )
    {
        _python_par_connection_reset = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_connection_reset );
    }


    return impl_function_1___init___of_class_2_StopUpload_of_module_django__core__files__uploadhandler( self, _python_par_self, _python_par_connection_reset );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_connection_reset );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_2_StopUpload_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1___init___of_class_2_StopUpload_of_module_django__core__files__uploadhandler( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_2_StopUpload_of_module_django__core__files__uploadhandler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___str___of_class_2_StopUpload_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_2___str___of_class_2_StopUpload_of_module_django__core__files__uploadhandler = NULL;

    if ( isFrameUnusable( frame_function_2___str___of_class_2_StopUpload_of_module_django__core__files__uploadhandler ) )
    {
        if ( frame_function_2___str___of_class_2_StopUpload_of_module_django__core__files__uploadhandler )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2___str___of_class_2_StopUpload_of_module_django__core__files__uploadhandler" );
#endif
            Py_DECREF( frame_function_2___str___of_class_2_StopUpload_of_module_django__core__files__uploadhandler );
        }

        frame_function_2___str___of_class_2_StopUpload_of_module_django__core__files__uploadhandler = MAKE_FRAME( _codeobj_c5d8050109cacfbc7bb2750ffa536b59, _module_django__core__files__uploadhandler );
    }

    FrameGuard frame_guard( frame_function_2___str___of_class_2_StopUpload_of_module_django__core__files__uploadhandler );
    try
    {
        assert( Py_REFCNT( frame_function_2___str___of_class_2_StopUpload_of_module_django__core__files__uploadhandler ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 38 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_connection_reset ) ).asObject() ) )
        {
            return INCREASE_REFCOUNT( _python_unicode_digest_9498a2f65ae54dced9766a6d63f74786 );
        }
        else
        {
            return INCREASE_REFCOUNT( _python_unicode_digest_75b4b9d0248f653e05e4cf03cb332649 );
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

        if ( frame_guard.getFrame0() == frame_function_2___str___of_class_2_StopUpload_of_module_django__core__files__uploadhandler )
        {
           Py_DECREF( frame_function_2___str___of_class_2_StopUpload_of_module_django__core__files__uploadhandler );
           frame_function_2___str___of_class_2_StopUpload_of_module_django__core__files__uploadhandler = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2___str___of_class_2_StopUpload_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__str__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__str__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__str__() got multiple values for keyword argument 'self'" );
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
                   "__str__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__str__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__str__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__str__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__str__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__str__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__str__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__str__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__str__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__str__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__str__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__str__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__str__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__str__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2___str___of_class_2_StopUpload_of_module_django__core__files__uploadhandler( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2___str___of_class_2_StopUpload_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2___str___of_class_2_StopUpload_of_module_django__core__files__uploadhandler( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___str___of_class_2_StopUpload_of_module_django__core__files__uploadhandler( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_3_SkipFile_of_module_django__core__files__uploadhandler(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_uploadhandler );
    _python_var___doc__.assign0( _python_unicode_digest_e144dcb0b43f5f6a2301214db7c29a59 );
    return _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) );
}


NUITKA_LOCAL_MODULE PyObject *impl_class_4_StopFutureHandlers_of_module_django__core__files__uploadhandler(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_uploadhandler );
    _python_var___doc__.assign0( _python_unicode_digest_21b4cf5e3698f209e70ad66d2d644a2e );
    return _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) );
}


NUITKA_LOCAL_MODULE PyObject *impl_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var_chunk_size( _python_str_plain_chunk_size );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_handle_raw_input( _python_str_plain_handle_raw_input );
    PyObjectLocalVariable _python_var_new_file( _python_str_plain_new_file );
    PyObjectLocalVariable _python_var_receive_data_chunk( _python_str_plain_receive_data_chunk );
    PyObjectLocalVariable _python_var_file_complete( _python_str_plain_file_complete );
    PyObjectLocalVariable _python_var_upload_complete( _python_str_plain_upload_complete );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_uploadhandler );
    _python_var___doc__.assign0( _python_unicode_digest_ba1319dadc3c9bb244bd9d5f04569e24 );
    _python_var_chunk_size.assign0( _python_int_pos_65536 );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler(  ) );
    _python_var_handle_raw_input.assign1( MAKE_FUNCTION_function_2_handle_raw_input_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler(  ) );
    _python_var_new_file.assign1( MAKE_FUNCTION_function_3_new_file_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler(  ) );
    _python_var_receive_data_chunk.assign1( MAKE_FUNCTION_function_4_receive_data_chunk_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler(  ) );
    _python_var_file_complete.assign1( MAKE_FUNCTION_function_5_file_complete_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler(  ) );
    _python_var_upload_complete.assign1( MAKE_FUNCTION_function_6_upload_complete_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler(  ) );
    return _python_var_upload_complete.updateLocalsDict( _python_var_file_complete.updateLocalsDict( _python_var_receive_data_chunk.updateLocalsDict( _python_var_new_file.updateLocalsDict( _python_var_handle_raw_input.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var_chunk_size.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_request )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_request( _python_str_plain_request, _python_par_request );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler ) )
    {
        if ( frame_function_1___init___of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler" );
#endif
            Py_DECREF( frame_function_1___init___of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler );
        }

        frame_function_1___init___of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler = MAKE_FRAME( _codeobj_dadee12f10cc88b8f8c910b84a00f9d7, _module_django__core__files__uploadhandler );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 63 );
        SET_ATTRIBUTE( Py_None, _python_var_self.asObject(), _python_str_plain_file_name );
        frame_guard.setLineNumber( 64 );
        SET_ATTRIBUTE( Py_None, _python_var_self.asObject(), _python_str_plain_content_type );
        frame_guard.setLineNumber( 65 );
        SET_ATTRIBUTE( Py_None, _python_var_self.asObject(), _python_str_plain_content_length );
        frame_guard.setLineNumber( 66 );
        SET_ATTRIBUTE( Py_None, _python_var_self.asObject(), _python_str_plain_charset );
        frame_guard.setLineNumber( 67 );
        {
                PyObject *tmp_identifier = _python_var_request.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_request );
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
        frame_guard.getFrame0()->f_locals = _python_var_request.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler )
        {
           Py_DECREF( frame_function_1___init___of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler );
           frame_function_1___init___of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_request = NULL;
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
            if ( found == false && _python_str_plain_request == key )
            {
                if (unlikely( _python_par_request ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'request'" );
                    goto error_exit;
                }

                _python_par_request = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_request, key ) )
            {
                if (unlikely( _python_par_request ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'request'" );
                    goto error_exit;
                }

                _python_par_request = value;

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
    if (unlikely( args_given > 2 ))
    {
        if ( 2 == 1 )
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
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
    args_usable_count = args_given < 2 ? args_given : 2;

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
         if (unlikely( _python_par_request != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'request'" );
             goto error_exit;
         }

        _python_par_request = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_request == NULL )
    {
        _python_par_request = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_request );
    }


    return impl_function_1___init___of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler( self, _python_par_self, _python_par_request );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_request );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1___init___of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_handle_raw_input_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_input_data, PyObject *_python_par_META, PyObject *_python_par_content_length, PyObject *_python_par_boundary, PyObject *_python_par_encoding )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_input_data( _python_str_plain_input_data, _python_par_input_data );
    PyObjectLocalParameterVariableNoDel _python_var_META( _python_str_plain_META, _python_par_META );
    PyObjectLocalParameterVariableNoDel _python_var_content_length( _python_str_plain_content_length, _python_par_content_length );
    PyObjectLocalParameterVariableNoDel _python_var_boundary( _python_str_plain_boundary, _python_par_boundary );
    PyObjectLocalParameterVariableNoDel _python_var_encoding( _python_str_plain_encoding, _python_par_encoding );

    // Actual function code.
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2_handle_raw_input_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_input_data = NULL;
    PyObject *_python_par_META = NULL;
    PyObject *_python_par_content_length = NULL;
    PyObject *_python_par_boundary = NULL;
    PyObject *_python_par_encoding = NULL;
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
                PyErr_Format( PyExc_TypeError, "handle_raw_input() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "handle_raw_input() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_input_data == key )
            {
                if (unlikely( _python_par_input_data ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_raw_input() got multiple values for keyword argument 'input_data'" );
                    goto error_exit;
                }

                _python_par_input_data = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_META == key )
            {
                if (unlikely( _python_par_META ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_raw_input() got multiple values for keyword argument 'META'" );
                    goto error_exit;
                }

                _python_par_META = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_content_length == key )
            {
                if (unlikely( _python_par_content_length ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_raw_input() got multiple values for keyword argument 'content_length'" );
                    goto error_exit;
                }

                _python_par_content_length = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_boundary == key )
            {
                if (unlikely( _python_par_boundary ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_raw_input() got multiple values for keyword argument 'boundary'" );
                    goto error_exit;
                }

                _python_par_boundary = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_encoding == key )
            {
                if (unlikely( _python_par_encoding ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_raw_input() got multiple values for keyword argument 'encoding'" );
                    goto error_exit;
                }

                _python_par_encoding = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_raw_input() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_input_data, key ) )
            {
                if (unlikely( _python_par_input_data ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_raw_input() got multiple values for keyword argument 'input_data'" );
                    goto error_exit;
                }

                _python_par_input_data = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_META, key ) )
            {
                if (unlikely( _python_par_META ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_raw_input() got multiple values for keyword argument 'META'" );
                    goto error_exit;
                }

                _python_par_META = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_content_length, key ) )
            {
                if (unlikely( _python_par_content_length ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_raw_input() got multiple values for keyword argument 'content_length'" );
                    goto error_exit;
                }

                _python_par_content_length = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_boundary, key ) )
            {
                if (unlikely( _python_par_boundary ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_raw_input() got multiple values for keyword argument 'boundary'" );
                    goto error_exit;
                }

                _python_par_boundary = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_encoding, key ) )
            {
                if (unlikely( _python_par_encoding ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_raw_input() got multiple values for keyword argument 'encoding'" );
                    goto error_exit;
                }

                _python_par_encoding = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "handle_raw_input() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 6 ))
    {
        if ( 6 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "handle_raw_input() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "handle_raw_input() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "handle_raw_input() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "handle_raw_input() takes exactly %d arguments (%zd given)", 6, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 6 == 5 )
            {
                PyErr_Format( PyExc_TypeError, "handle_raw_input() takes exactly %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "handle_raw_input() takes at most %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
#else
            if ( 6 == 5 )
            {
                PyErr_Format( PyExc_TypeError, "handle_raw_input() takes %d positional arguments but %zd were given", 6, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "handle_raw_input() takes at most %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 5 ))
    {
        if ( 6 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "handle_raw_input() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "handle_raw_input() takes exactly %d non-keyword arguments (%zd given)", 6, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 6 == 5 )
                {
                    PyErr_Format( PyExc_TypeError, "handle_raw_input() takes exactly %d arguments (%zd given)", 5, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "handle_raw_input() takes at least %d arguments (%zd given)", 5, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 6 ? args_given : 6;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "handle_raw_input() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_input_data != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "handle_raw_input() got multiple values for keyword argument 'input_data'" );
             goto error_exit;
         }

        _python_par_input_data = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_META != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "handle_raw_input() got multiple values for keyword argument 'META'" );
             goto error_exit;
         }

        _python_par_META = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_content_length != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "handle_raw_input() got multiple values for keyword argument 'content_length'" );
             goto error_exit;
         }

        _python_par_content_length = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_boundary != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "handle_raw_input() got multiple values for keyword argument 'boundary'" );
             goto error_exit;
         }

        _python_par_boundary = INCREASE_REFCOUNT( args[ 4 ] );
    }
    if (likely( 5 < args_usable_count ))
    {
         if (unlikely( _python_par_encoding != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "handle_raw_input() got multiple values for keyword argument 'encoding'" );
             goto error_exit;
         }

        _python_par_encoding = INCREASE_REFCOUNT( args[ 5 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_encoding == NULL )
    {
        _python_par_encoding = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_encoding );
    }


    return impl_function_2_handle_raw_input_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler( self, _python_par_self, _python_par_input_data, _python_par_META, _python_par_content_length, _python_par_boundary, _python_par_encoding );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_input_data );
    Py_XDECREF( _python_par_META );
    Py_XDECREF( _python_par_content_length );
    Py_XDECREF( _python_par_boundary );
    Py_XDECREF( _python_par_encoding );

    return NULL;
}

static PyObject *dparse_function_2_handle_raw_input_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 6)
    {
        return impl_function_2_handle_raw_input_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_handle_raw_input_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_new_file_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_field_name, PyObject *_python_par_file_name, PyObject *_python_par_content_type, PyObject *_python_par_content_length, PyObject *_python_par_charset )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_field_name( _python_str_plain_field_name, _python_par_field_name );
    PyObjectLocalParameterVariableNoDel _python_var_file_name( _python_str_plain_file_name, _python_par_file_name );
    PyObjectLocalParameterVariableNoDel _python_var_content_type( _python_str_plain_content_type, _python_par_content_type );
    PyObjectLocalParameterVariableNoDel _python_var_content_length( _python_str_plain_content_length, _python_par_content_length );
    PyObjectLocalParameterVariableNoDel _python_var_charset( _python_str_plain_charset, _python_par_charset );

    // Actual function code.
    static PyFrameObject *frame_function_3_new_file_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler = NULL;

    if ( isFrameUnusable( frame_function_3_new_file_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler ) )
    {
        if ( frame_function_3_new_file_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_new_file_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler" );
#endif
            Py_DECREF( frame_function_3_new_file_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler );
        }

        frame_function_3_new_file_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler = MAKE_FRAME( _codeobj_4da65470472f15e430175507fce6995b, _module_django__core__files__uploadhandler );
    }

    FrameGuard frame_guard( frame_function_3_new_file_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler );
    try
    {
        assert( Py_REFCNT( frame_function_3_new_file_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 94 );
        {
                PyObject *tmp_identifier = _python_var_field_name.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_field_name );
        }
        frame_guard.setLineNumber( 95 );
        {
                PyObject *tmp_identifier = _python_var_file_name.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_file_name );
        }
        frame_guard.setLineNumber( 96 );
        {
                PyObject *tmp_identifier = _python_var_content_type.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_content_type );
        }
        frame_guard.setLineNumber( 97 );
        {
                PyObject *tmp_identifier = _python_var_content_length.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_content_length );
        }
        frame_guard.setLineNumber( 98 );
        {
                PyObject *tmp_identifier = _python_var_charset.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_charset );
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
        frame_guard.getFrame0()->f_locals = _python_var_charset.updateLocalsDict( _python_var_content_length.updateLocalsDict( _python_var_content_type.updateLocalsDict( _python_var_file_name.updateLocalsDict( _python_var_field_name.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_new_file_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler )
        {
           Py_DECREF( frame_function_3_new_file_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler );
           frame_function_3_new_file_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_3_new_file_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_field_name = NULL;
    PyObject *_python_par_file_name = NULL;
    PyObject *_python_par_content_type = NULL;
    PyObject *_python_par_content_length = NULL;
    PyObject *_python_par_charset = NULL;
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
                PyErr_Format( PyExc_TypeError, "new_file() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "new_file() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_field_name == key )
            {
                if (unlikely( _python_par_field_name ))
                {
                    PyErr_Format( PyExc_TypeError, "new_file() got multiple values for keyword argument 'field_name'" );
                    goto error_exit;
                }

                _python_par_field_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_file_name == key )
            {
                if (unlikely( _python_par_file_name ))
                {
                    PyErr_Format( PyExc_TypeError, "new_file() got multiple values for keyword argument 'file_name'" );
                    goto error_exit;
                }

                _python_par_file_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_content_type == key )
            {
                if (unlikely( _python_par_content_type ))
                {
                    PyErr_Format( PyExc_TypeError, "new_file() got multiple values for keyword argument 'content_type'" );
                    goto error_exit;
                }

                _python_par_content_type = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_content_length == key )
            {
                if (unlikely( _python_par_content_length ))
                {
                    PyErr_Format( PyExc_TypeError, "new_file() got multiple values for keyword argument 'content_length'" );
                    goto error_exit;
                }

                _python_par_content_length = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_charset == key )
            {
                if (unlikely( _python_par_charset ))
                {
                    PyErr_Format( PyExc_TypeError, "new_file() got multiple values for keyword argument 'charset'" );
                    goto error_exit;
                }

                _python_par_charset = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "new_file() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_field_name, key ) )
            {
                if (unlikely( _python_par_field_name ))
                {
                    PyErr_Format( PyExc_TypeError, "new_file() got multiple values for keyword argument 'field_name'" );
                    goto error_exit;
                }

                _python_par_field_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_file_name, key ) )
            {
                if (unlikely( _python_par_file_name ))
                {
                    PyErr_Format( PyExc_TypeError, "new_file() got multiple values for keyword argument 'file_name'" );
                    goto error_exit;
                }

                _python_par_file_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_content_type, key ) )
            {
                if (unlikely( _python_par_content_type ))
                {
                    PyErr_Format( PyExc_TypeError, "new_file() got multiple values for keyword argument 'content_type'" );
                    goto error_exit;
                }

                _python_par_content_type = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_content_length, key ) )
            {
                if (unlikely( _python_par_content_length ))
                {
                    PyErr_Format( PyExc_TypeError, "new_file() got multiple values for keyword argument 'content_length'" );
                    goto error_exit;
                }

                _python_par_content_length = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_charset, key ) )
            {
                if (unlikely( _python_par_charset ))
                {
                    PyErr_Format( PyExc_TypeError, "new_file() got multiple values for keyword argument 'charset'" );
                    goto error_exit;
                }

                _python_par_charset = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "new_file() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 6 ))
    {
        if ( 6 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "new_file() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "new_file() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "new_file() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "new_file() takes exactly %d arguments (%zd given)", 6, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 6 == 5 )
            {
                PyErr_Format( PyExc_TypeError, "new_file() takes exactly %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "new_file() takes at most %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
#else
            if ( 6 == 5 )
            {
                PyErr_Format( PyExc_TypeError, "new_file() takes %d positional arguments but %zd were given", 6, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "new_file() takes at most %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 5 ))
    {
        if ( 6 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "new_file() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "new_file() takes exactly %d non-keyword arguments (%zd given)", 6, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 6 == 5 )
                {
                    PyErr_Format( PyExc_TypeError, "new_file() takes exactly %d arguments (%zd given)", 5, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "new_file() takes at least %d arguments (%zd given)", 5, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 6 ? args_given : 6;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "new_file() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_field_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "new_file() got multiple values for keyword argument 'field_name'" );
             goto error_exit;
         }

        _python_par_field_name = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_file_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "new_file() got multiple values for keyword argument 'file_name'" );
             goto error_exit;
         }

        _python_par_file_name = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_content_type != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "new_file() got multiple values for keyword argument 'content_type'" );
             goto error_exit;
         }

        _python_par_content_type = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_content_length != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "new_file() got multiple values for keyword argument 'content_length'" );
             goto error_exit;
         }

        _python_par_content_length = INCREASE_REFCOUNT( args[ 4 ] );
    }
    if (likely( 5 < args_usable_count ))
    {
         if (unlikely( _python_par_charset != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "new_file() got multiple values for keyword argument 'charset'" );
             goto error_exit;
         }

        _python_par_charset = INCREASE_REFCOUNT( args[ 5 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_charset == NULL )
    {
        _python_par_charset = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_charset );
    }


    return impl_function_3_new_file_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler( self, _python_par_self, _python_par_field_name, _python_par_file_name, _python_par_content_type, _python_par_content_length, _python_par_charset );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_field_name );
    Py_XDECREF( _python_par_file_name );
    Py_XDECREF( _python_par_content_type );
    Py_XDECREF( _python_par_content_length );
    Py_XDECREF( _python_par_charset );

    return NULL;
}

static PyObject *dparse_function_3_new_file_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 6)
    {
        return impl_function_3_new_file_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_new_file_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_receive_data_chunk_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_raw_data, PyObject *_python_par_start )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_raw_data( _python_str_plain_raw_data, _python_par_raw_data );
    PyObjectLocalParameterVariableNoDel _python_var_start( _python_str_plain_start, _python_par_start );

    // Actual function code.
    static PyFrameObject *frame_function_4_receive_data_chunk_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler = NULL;

    if ( isFrameUnusable( frame_function_4_receive_data_chunk_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler ) )
    {
        if ( frame_function_4_receive_data_chunk_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_receive_data_chunk_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler" );
#endif
            Py_DECREF( frame_function_4_receive_data_chunk_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler );
        }

        frame_function_4_receive_data_chunk_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler = MAKE_FRAME( _codeobj_4bb1d7dd935bb05e2ff79863308d8468, _module_django__core__files__uploadhandler );
    }

    FrameGuard frame_guard( frame_function_4_receive_data_chunk_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler );
    try
    {
        assert( Py_REFCNT( frame_function_4_receive_data_chunk_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler ) == 2 ); // Frame stack
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
        frame_guard.getFrame0()->f_locals = _python_var_start.updateLocalsDict( _python_var_raw_data.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_4_receive_data_chunk_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler )
        {
           Py_DECREF( frame_function_4_receive_data_chunk_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler );
           frame_function_4_receive_data_chunk_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_receive_data_chunk_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_raw_data = NULL;
    PyObject *_python_par_start = NULL;
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
                PyErr_Format( PyExc_TypeError, "receive_data_chunk() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "receive_data_chunk() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_raw_data == key )
            {
                if (unlikely( _python_par_raw_data ))
                {
                    PyErr_Format( PyExc_TypeError, "receive_data_chunk() got multiple values for keyword argument 'raw_data'" );
                    goto error_exit;
                }

                _python_par_raw_data = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_start == key )
            {
                if (unlikely( _python_par_start ))
                {
                    PyErr_Format( PyExc_TypeError, "receive_data_chunk() got multiple values for keyword argument 'start'" );
                    goto error_exit;
                }

                _python_par_start = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "receive_data_chunk() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_raw_data, key ) )
            {
                if (unlikely( _python_par_raw_data ))
                {
                    PyErr_Format( PyExc_TypeError, "receive_data_chunk() got multiple values for keyword argument 'raw_data'" );
                    goto error_exit;
                }

                _python_par_raw_data = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_start, key ) )
            {
                if (unlikely( _python_par_start ))
                {
                    PyErr_Format( PyExc_TypeError, "receive_data_chunk() got multiple values for keyword argument 'start'" );
                    goto error_exit;
                }

                _python_par_start = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "receive_data_chunk() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "receive_data_chunk() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "receive_data_chunk() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "receive_data_chunk() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "receive_data_chunk() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "receive_data_chunk() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "receive_data_chunk() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "receive_data_chunk() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "receive_data_chunk() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "receive_data_chunk() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "receive_data_chunk() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "receive_data_chunk() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "receive_data_chunk() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "receive_data_chunk() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_raw_data != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "receive_data_chunk() got multiple values for keyword argument 'raw_data'" );
             goto error_exit;
         }

        _python_par_raw_data = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_start != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "receive_data_chunk() got multiple values for keyword argument 'start'" );
             goto error_exit;
         }

        _python_par_start = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_4_receive_data_chunk_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler( self, _python_par_self, _python_par_raw_data, _python_par_start );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_raw_data );
    Py_XDECREF( _python_par_start );

    return NULL;
}

static PyObject *dparse_function_4_receive_data_chunk_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_4_receive_data_chunk_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_receive_data_chunk_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_file_complete_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_file_size )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_file_size( _python_str_plain_file_size, _python_par_file_size );

    // Actual function code.
    static PyFrameObject *frame_function_5_file_complete_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler = NULL;

    if ( isFrameUnusable( frame_function_5_file_complete_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler ) )
    {
        if ( frame_function_5_file_complete_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_file_complete_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler" );
#endif
            Py_DECREF( frame_function_5_file_complete_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler );
        }

        frame_function_5_file_complete_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler = MAKE_FRAME( _codeobj_6aa64ecf7f24b037b27efebda44b506d, _module_django__core__files__uploadhandler );
    }

    FrameGuard frame_guard( frame_function_5_file_complete_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler );
    try
    {
        assert( Py_REFCNT( frame_function_5_file_complete_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 114 );
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
        frame_guard.getFrame0()->f_locals = _python_var_file_size.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_5_file_complete_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler )
        {
           Py_DECREF( frame_function_5_file_complete_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler );
           frame_function_5_file_complete_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5_file_complete_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_file_size = NULL;
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
                PyErr_Format( PyExc_TypeError, "file_complete() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "file_complete() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_file_size == key )
            {
                if (unlikely( _python_par_file_size ))
                {
                    PyErr_Format( PyExc_TypeError, "file_complete() got multiple values for keyword argument 'file_size'" );
                    goto error_exit;
                }

                _python_par_file_size = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "file_complete() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_file_size, key ) )
            {
                if (unlikely( _python_par_file_size ))
                {
                    PyErr_Format( PyExc_TypeError, "file_complete() got multiple values for keyword argument 'file_size'" );
                    goto error_exit;
                }

                _python_par_file_size = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "file_complete() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "file_complete() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "file_complete() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "file_complete() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "file_complete() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "file_complete() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "file_complete() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "file_complete() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "file_complete() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "file_complete() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "file_complete() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "file_complete() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "file_complete() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "file_complete() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_file_size != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "file_complete() got multiple values for keyword argument 'file_size'" );
             goto error_exit;
         }

        _python_par_file_size = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_5_file_complete_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler( self, _python_par_self, _python_par_file_size );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_file_size );

    return NULL;
}

static PyObject *dparse_function_5_file_complete_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_5_file_complete_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_file_complete_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_upload_complete_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_6_upload_complete_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "upload_complete() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "upload_complete() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "upload_complete() got multiple values for keyword argument 'self'" );
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
                   "upload_complete() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "upload_complete() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "upload_complete() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "upload_complete() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "upload_complete() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "upload_complete() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "upload_complete() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "upload_complete() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "upload_complete() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "upload_complete() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "upload_complete() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "upload_complete() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "upload_complete() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "upload_complete() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_6_upload_complete_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_6_upload_complete_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_6_upload_complete_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_upload_complete_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_new_file( _python_str_plain_new_file );
    PyObjectLocalVariable _python_var_receive_data_chunk( _python_str_plain_receive_data_chunk );
    PyObjectLocalVariable _python_var_file_complete( _python_str_plain_file_complete );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_uploadhandler );
    _python_var___doc__.assign0( _python_unicode_digest_da9f527c70fbb243d01ecd9e9c5db215 );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler(  ) );
    _python_var_new_file.assign1( MAKE_FUNCTION_function_2_new_file_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler(  ) );
    _python_var_receive_data_chunk.assign1( MAKE_FUNCTION_function_3_receive_data_chunk_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler(  ) );
    _python_var_file_complete.assign1( MAKE_FUNCTION_function_4_file_complete_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler(  ) );
    return _python_var_file_complete.updateLocalsDict( _python_var_receive_data_chunk.updateLocalsDict( _python_var_new_file.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler ) )
    {
        if ( frame_function_1___init___of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler" );
#endif
            Py_DECREF( frame_function_1___init___of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler );
        }

        frame_function_1___init___of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler = MAKE_FRAME( _codeobj_8aa1e71406aff2a05a0f606081818072, _module_django__core__files__uploadhandler );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 128 );
        {
            PyObjectTempKeeper1 call_tmp3;
            PyObjectTempKeeper0 call_tmp4;
            PyObjectTempKeeper0 super1;
            DECREASE_REFCOUNT( ( call_tmp3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super1.assign( _mvar_django__core__files__uploadhandler_TemporaryFileUploadHandler.asObject0() ), BUILTIN_SUPER( super1.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain___init__ ) ), call_tmp4.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp3.asObject(), call_tmp4.asObject(), _python_var_kwargs.asObject1() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler )
        {
           Py_DECREF( frame_function_1___init___of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler );
           frame_function_1___init___of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_1___init___of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_1___init___of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_new_file_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_file_name, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_file_name( _python_str_plain_file_name, _python_par_file_name );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_2_new_file_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler = NULL;

    if ( isFrameUnusable( frame_function_2_new_file_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler ) )
    {
        if ( frame_function_2_new_file_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_new_file_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler" );
#endif
            Py_DECREF( frame_function_2_new_file_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler );
        }

        frame_function_2_new_file_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler = MAKE_FRAME( _codeobj_65b0abcbd7277d83e21562f8da99f1f5, _module_django__core__files__uploadhandler );
    }

    FrameGuard frame_guard( frame_function_2_new_file_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler );
    try
    {
        assert( Py_REFCNT( frame_function_2_new_file_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 134 );
        {
            PyObjectTempKeeper1 call_tmp3;
            PyObjectTempKeeper1 call_tmp4;
            PyObjectTempKeeper0 call_tmp5;
            PyObjectTempKeeper0 super1;
            DECREASE_REFCOUNT( ( call_tmp3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super1.assign( _mvar_django__core__files__uploadhandler_TemporaryFileUploadHandler.asObject0() ), BUILTIN_SUPER( super1.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain_new_file ) ), call_tmp4.assign( MAKE_TUPLE1( _python_var_file_name.asObject() ) ), call_tmp5.assign( _python_var_args.asObject() ), impl_function_8_complex_call_helper_pos_star_list_star_dict_of_module___internal__( call_tmp3.asObject(), call_tmp4.asObject(), call_tmp5.asObject(), _python_var_kwargs.asObject1() ) ) );
        }
        frame_guard.setLineNumber( 135 );
        {
            PyObjectTempKeeper0 call7;
            PyObjectTempKeeper1 call8;
            PyObjectTempKeeper1 call9;
            {
                PyObjectTemporary tmp_identifier( ( call7.assign( _mvar_django__core__files__uploadhandler_TemporaryUploadedFile.asObject0() ), call8.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_file_name ) ), call9.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_content_type ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), call8.asObject0(), call9.asObject0(), _python_int_0, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_charset ) ).asObject() ) ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_file );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_file_name.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_new_file_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler )
        {
           Py_DECREF( frame_function_2_new_file_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler );
           frame_function_2_new_file_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2_new_file_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_file_name = NULL;
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
                        PyErr_Format( PyExc_TypeError, "new_file() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "new_file() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "new_file() keywords must be strings" );
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

    // Check if argument file_name was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_file_name );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_file_name == NULL );

            _python_par_file_name = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_file_name );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "new_file() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "new_file() takes at least %d non-keyword arguments (%zd given)", 2, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "new_file() takes at least %d arguments (%zd given)", 2, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "new_file() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_file_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "new_file() got multiple values for keyword argument 'file_name'" );
             goto error_exit;
         }

        _python_par_file_name = INCREASE_REFCOUNT( args[ 1 ] );
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 2 )
    {
        _python_par_args = PyTuple_New( args_size - 2 );

        for( Py_ssize_t i = 0; i < args_size - 2; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[2+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_2_new_file_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler( self, _python_par_self, _python_par_file_name, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_file_name );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_2_new_file_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_2_new_file_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), MAKE_TUPLE( &args[ 2 ], size > 2 ? size-2 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_2_new_file_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_receive_data_chunk_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_raw_data, PyObject *_python_par_start )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_raw_data( _python_str_plain_raw_data, _python_par_raw_data );
    PyObjectLocalParameterVariableNoDel _python_var_start( _python_str_plain_start, _python_par_start );

    // Actual function code.
    static PyFrameObject *frame_function_3_receive_data_chunk_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler = NULL;

    if ( isFrameUnusable( frame_function_3_receive_data_chunk_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler ) )
    {
        if ( frame_function_3_receive_data_chunk_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_receive_data_chunk_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler" );
#endif
            Py_DECREF( frame_function_3_receive_data_chunk_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler );
        }

        frame_function_3_receive_data_chunk_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler = MAKE_FRAME( _codeobj_e86d2a4665662f2cf103eef8be909cfe, _module_django__core__files__uploadhandler );
    }

    FrameGuard frame_guard( frame_function_3_receive_data_chunk_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler );
    try
    {
        assert( Py_REFCNT( frame_function_3_receive_data_chunk_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 138 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_file ) ).asObject(), _python_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_raw_data.asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_start.updateLocalsDict( _python_var_raw_data.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_receive_data_chunk_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler )
        {
           Py_DECREF( frame_function_3_receive_data_chunk_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler );
           frame_function_3_receive_data_chunk_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_3_receive_data_chunk_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_raw_data = NULL;
    PyObject *_python_par_start = NULL;
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
                PyErr_Format( PyExc_TypeError, "receive_data_chunk() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "receive_data_chunk() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_raw_data == key )
            {
                if (unlikely( _python_par_raw_data ))
                {
                    PyErr_Format( PyExc_TypeError, "receive_data_chunk() got multiple values for keyword argument 'raw_data'" );
                    goto error_exit;
                }

                _python_par_raw_data = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_start == key )
            {
                if (unlikely( _python_par_start ))
                {
                    PyErr_Format( PyExc_TypeError, "receive_data_chunk() got multiple values for keyword argument 'start'" );
                    goto error_exit;
                }

                _python_par_start = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "receive_data_chunk() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_raw_data, key ) )
            {
                if (unlikely( _python_par_raw_data ))
                {
                    PyErr_Format( PyExc_TypeError, "receive_data_chunk() got multiple values for keyword argument 'raw_data'" );
                    goto error_exit;
                }

                _python_par_raw_data = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_start, key ) )
            {
                if (unlikely( _python_par_start ))
                {
                    PyErr_Format( PyExc_TypeError, "receive_data_chunk() got multiple values for keyword argument 'start'" );
                    goto error_exit;
                }

                _python_par_start = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "receive_data_chunk() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "receive_data_chunk() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "receive_data_chunk() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "receive_data_chunk() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "receive_data_chunk() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "receive_data_chunk() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "receive_data_chunk() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "receive_data_chunk() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "receive_data_chunk() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "receive_data_chunk() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "receive_data_chunk() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "receive_data_chunk() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "receive_data_chunk() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "receive_data_chunk() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_raw_data != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "receive_data_chunk() got multiple values for keyword argument 'raw_data'" );
             goto error_exit;
         }

        _python_par_raw_data = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_start != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "receive_data_chunk() got multiple values for keyword argument 'start'" );
             goto error_exit;
         }

        _python_par_start = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_3_receive_data_chunk_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler( self, _python_par_self, _python_par_raw_data, _python_par_start );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_raw_data );
    Py_XDECREF( _python_par_start );

    return NULL;
}

static PyObject *dparse_function_3_receive_data_chunk_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_3_receive_data_chunk_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_receive_data_chunk_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_file_complete_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_file_size )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_file_size( _python_str_plain_file_size, _python_par_file_size );

    // Actual function code.
    static PyFrameObject *frame_function_4_file_complete_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler = NULL;

    if ( isFrameUnusable( frame_function_4_file_complete_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler ) )
    {
        if ( frame_function_4_file_complete_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_file_complete_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler" );
#endif
            Py_DECREF( frame_function_4_file_complete_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler );
        }

        frame_function_4_file_complete_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler = MAKE_FRAME( _codeobj_fd7a9c44ccaec72721be3c57f8118141, _module_django__core__files__uploadhandler );
    }

    FrameGuard frame_guard( frame_function_4_file_complete_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler );
    try
    {
        assert( Py_REFCNT( frame_function_4_file_complete_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 141 );
        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_file ) ).asObject(), _python_str_plain_seek ) ).asObject(), _python_int_0 ) );
        frame_guard.setLineNumber( 142 );
        {
                PyObject *tmp_identifier = _python_var_file_size.asObject();
                SET_ATTRIBUTE( tmp_identifier, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_file ) ).asObject(), _python_str_plain_size );
        }
        frame_guard.setLineNumber( 143 );
        return LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_file );
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
        frame_guard.getFrame0()->f_locals = _python_var_file_size.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_4_file_complete_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler )
        {
           Py_DECREF( frame_function_4_file_complete_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler );
           frame_function_4_file_complete_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_file_complete_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_file_size = NULL;
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
                PyErr_Format( PyExc_TypeError, "file_complete() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "file_complete() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_file_size == key )
            {
                if (unlikely( _python_par_file_size ))
                {
                    PyErr_Format( PyExc_TypeError, "file_complete() got multiple values for keyword argument 'file_size'" );
                    goto error_exit;
                }

                _python_par_file_size = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "file_complete() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_file_size, key ) )
            {
                if (unlikely( _python_par_file_size ))
                {
                    PyErr_Format( PyExc_TypeError, "file_complete() got multiple values for keyword argument 'file_size'" );
                    goto error_exit;
                }

                _python_par_file_size = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "file_complete() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "file_complete() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "file_complete() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "file_complete() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "file_complete() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "file_complete() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "file_complete() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "file_complete() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "file_complete() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "file_complete() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "file_complete() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "file_complete() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "file_complete() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "file_complete() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_file_size != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "file_complete() got multiple values for keyword argument 'file_size'" );
             goto error_exit;
         }

        _python_par_file_size = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_4_file_complete_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler( self, _python_par_self, _python_par_file_size );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_file_size );

    return NULL;
}

static PyObject *dparse_function_4_file_complete_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_4_file_complete_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_file_complete_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var_handle_raw_input( _python_str_plain_handle_raw_input );
    PyObjectLocalVariable _python_var_new_file( _python_str_plain_new_file );
    PyObjectLocalVariable _python_var_receive_data_chunk( _python_str_plain_receive_data_chunk );
    PyObjectLocalVariable _python_var_file_complete( _python_str_plain_file_complete );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_uploadhandler );
    _python_var___doc__.assign0( _python_unicode_digest_b9fb7512fb36a996c5679891a41d430b );
    _python_var_handle_raw_input.assign1( MAKE_FUNCTION_function_1_handle_raw_input_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler(  ) );
    _python_var_new_file.assign1( MAKE_FUNCTION_function_2_new_file_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler(  ) );
    _python_var_receive_data_chunk.assign1( MAKE_FUNCTION_function_3_receive_data_chunk_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler(  ) );
    _python_var_file_complete.assign1( MAKE_FUNCTION_function_4_file_complete_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler(  ) );
    return _python_var_file_complete.updateLocalsDict( _python_var_receive_data_chunk.updateLocalsDict( _python_var_new_file.updateLocalsDict( _python_var_handle_raw_input.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) );
}


static PyObject *impl_function_1_handle_raw_input_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_input_data, PyObject *_python_par_META, PyObject *_python_par_content_length, PyObject *_python_par_boundary, PyObject *_python_par_encoding )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_input_data( _python_str_plain_input_data, _python_par_input_data );
    PyObjectLocalParameterVariableNoDel _python_var_META( _python_str_plain_META, _python_par_META );
    PyObjectLocalParameterVariableNoDel _python_var_content_length( _python_str_plain_content_length, _python_par_content_length );
    PyObjectLocalParameterVariableNoDel _python_var_boundary( _python_str_plain_boundary, _python_par_boundary );
    PyObjectLocalParameterVariableNoDel _python_var_encoding( _python_str_plain_encoding, _python_par_encoding );

    // Actual function code.
    static PyFrameObject *frame_function_1_handle_raw_input_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler = NULL;

    if ( isFrameUnusable( frame_function_1_handle_raw_input_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler ) )
    {
        if ( frame_function_1_handle_raw_input_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_handle_raw_input_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler" );
#endif
            Py_DECREF( frame_function_1_handle_raw_input_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler );
        }

        frame_function_1_handle_raw_input_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler = MAKE_FRAME( _codeobj_864c07841434712849948d9b53805edf, _module_django__core__files__uploadhandler );
    }

    FrameGuard frame_guard( frame_function_1_handle_raw_input_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler );
    try
    {
        assert( Py_REFCNT( frame_function_1_handle_raw_input_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 156 );
        {
            PyObjectTempKeeper0 cmp1;
            if ( ( cmp1.assign( _python_var_content_length.asObject() ), RICH_COMPARE_BOOL_GT( cmp1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__uploadhandler_settings.asObject0(), _python_str_plain_FILE_UPLOAD_MAX_MEMORY_SIZE ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 157 );
            SET_ATTRIBUTE( Py_False, _python_var_self.asObject(), _python_str_plain_activated );
        }
        else
        {
            frame_guard.setLineNumber( 159 );
            SET_ATTRIBUTE( Py_True, _python_var_self.asObject(), _python_str_plain_activated );
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
        frame_guard.getFrame0()->f_locals = _python_var_encoding.updateLocalsDict( _python_var_boundary.updateLocalsDict( _python_var_content_length.updateLocalsDict( _python_var_META.updateLocalsDict( _python_var_input_data.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_handle_raw_input_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler )
        {
           Py_DECREF( frame_function_1_handle_raw_input_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler );
           frame_function_1_handle_raw_input_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1_handle_raw_input_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_input_data = NULL;
    PyObject *_python_par_META = NULL;
    PyObject *_python_par_content_length = NULL;
    PyObject *_python_par_boundary = NULL;
    PyObject *_python_par_encoding = NULL;
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
                PyErr_Format( PyExc_TypeError, "handle_raw_input() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "handle_raw_input() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_input_data == key )
            {
                if (unlikely( _python_par_input_data ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_raw_input() got multiple values for keyword argument 'input_data'" );
                    goto error_exit;
                }

                _python_par_input_data = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_META == key )
            {
                if (unlikely( _python_par_META ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_raw_input() got multiple values for keyword argument 'META'" );
                    goto error_exit;
                }

                _python_par_META = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_content_length == key )
            {
                if (unlikely( _python_par_content_length ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_raw_input() got multiple values for keyword argument 'content_length'" );
                    goto error_exit;
                }

                _python_par_content_length = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_boundary == key )
            {
                if (unlikely( _python_par_boundary ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_raw_input() got multiple values for keyword argument 'boundary'" );
                    goto error_exit;
                }

                _python_par_boundary = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_encoding == key )
            {
                if (unlikely( _python_par_encoding ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_raw_input() got multiple values for keyword argument 'encoding'" );
                    goto error_exit;
                }

                _python_par_encoding = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_raw_input() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_input_data, key ) )
            {
                if (unlikely( _python_par_input_data ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_raw_input() got multiple values for keyword argument 'input_data'" );
                    goto error_exit;
                }

                _python_par_input_data = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_META, key ) )
            {
                if (unlikely( _python_par_META ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_raw_input() got multiple values for keyword argument 'META'" );
                    goto error_exit;
                }

                _python_par_META = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_content_length, key ) )
            {
                if (unlikely( _python_par_content_length ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_raw_input() got multiple values for keyword argument 'content_length'" );
                    goto error_exit;
                }

                _python_par_content_length = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_boundary, key ) )
            {
                if (unlikely( _python_par_boundary ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_raw_input() got multiple values for keyword argument 'boundary'" );
                    goto error_exit;
                }

                _python_par_boundary = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_encoding, key ) )
            {
                if (unlikely( _python_par_encoding ))
                {
                    PyErr_Format( PyExc_TypeError, "handle_raw_input() got multiple values for keyword argument 'encoding'" );
                    goto error_exit;
                }

                _python_par_encoding = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "handle_raw_input() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 6 ))
    {
        if ( 6 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "handle_raw_input() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "handle_raw_input() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "handle_raw_input() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "handle_raw_input() takes exactly %d arguments (%zd given)", 6, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 6 == 5 )
            {
                PyErr_Format( PyExc_TypeError, "handle_raw_input() takes exactly %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "handle_raw_input() takes at most %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
#else
            if ( 6 == 5 )
            {
                PyErr_Format( PyExc_TypeError, "handle_raw_input() takes %d positional arguments but %zd were given", 6, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "handle_raw_input() takes at most %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 5 ))
    {
        if ( 6 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "handle_raw_input() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "handle_raw_input() takes exactly %d non-keyword arguments (%zd given)", 6, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 6 == 5 )
                {
                    PyErr_Format( PyExc_TypeError, "handle_raw_input() takes exactly %d arguments (%zd given)", 5, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "handle_raw_input() takes at least %d arguments (%zd given)", 5, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 6 ? args_given : 6;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "handle_raw_input() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_input_data != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "handle_raw_input() got multiple values for keyword argument 'input_data'" );
             goto error_exit;
         }

        _python_par_input_data = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_META != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "handle_raw_input() got multiple values for keyword argument 'META'" );
             goto error_exit;
         }

        _python_par_META = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_content_length != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "handle_raw_input() got multiple values for keyword argument 'content_length'" );
             goto error_exit;
         }

        _python_par_content_length = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_boundary != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "handle_raw_input() got multiple values for keyword argument 'boundary'" );
             goto error_exit;
         }

        _python_par_boundary = INCREASE_REFCOUNT( args[ 4 ] );
    }
    if (likely( 5 < args_usable_count ))
    {
         if (unlikely( _python_par_encoding != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "handle_raw_input() got multiple values for keyword argument 'encoding'" );
             goto error_exit;
         }

        _python_par_encoding = INCREASE_REFCOUNT( args[ 5 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_encoding == NULL )
    {
        _python_par_encoding = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_encoding );
    }


    return impl_function_1_handle_raw_input_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler( self, _python_par_self, _python_par_input_data, _python_par_META, _python_par_content_length, _python_par_boundary, _python_par_encoding );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_input_data );
    Py_XDECREF( _python_par_META );
    Py_XDECREF( _python_par_content_length );
    Py_XDECREF( _python_par_boundary );
    Py_XDECREF( _python_par_encoding );

    return NULL;
}

static PyObject *dparse_function_1_handle_raw_input_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 6)
    {
        return impl_function_1_handle_raw_input_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_handle_raw_input_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_new_file_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_2_new_file_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler = NULL;

    if ( isFrameUnusable( frame_function_2_new_file_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler ) )
    {
        if ( frame_function_2_new_file_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_new_file_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler" );
#endif
            Py_DECREF( frame_function_2_new_file_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler );
        }

        frame_function_2_new_file_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler = MAKE_FRAME( _codeobj_11e02aab53cef6441aed968378c4adfb, _module_django__core__files__uploadhandler );
    }

    FrameGuard frame_guard( frame_function_2_new_file_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler );
    try
    {
        assert( Py_REFCNT( frame_function_2_new_file_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 162 );
        {
            PyObjectTempKeeper1 call_tmp3;
            PyObjectTempKeeper0 call_tmp4;
            PyObjectTempKeeper0 super1;
            DECREASE_REFCOUNT( ( call_tmp3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super1.assign( _mvar_django__core__files__uploadhandler_MemoryFileUploadHandler.asObject0() ), BUILTIN_SUPER( super1.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain_new_file ) ), call_tmp4.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp3.asObject(), call_tmp4.asObject(), _python_var_kwargs.asObject1() ) ) );
        }
        frame_guard.setLineNumber( 163 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_activated ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 164 );
            {
                    PyObjectTemporary tmp_identifier( CALL_FUNCTION_NO_ARGS( _mvar_django__core__files__uploadhandler_BytesIO.asObject0() ) );
                    SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_file );
            }
            frame_guard.setLineNumber( 165 );
            {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_NO_ARGS( _mvar_django__core__files__uploadhandler_StopFutureHandlers.asObject0() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_new_file_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler )
        {
           Py_DECREF( frame_function_2_new_file_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler );
           frame_function_2_new_file_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2_new_file_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                        PyErr_Format( PyExc_TypeError, "new_file() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "new_file() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "new_file() keywords must be strings" );
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
            PyErr_Format( PyExc_TypeError, "new_file() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "new_file() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "new_file() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "new_file() got multiple values for keyword argument 'self'" );
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


    return impl_function_2_new_file_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_2_new_file_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_2_new_file_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_2_new_file_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_receive_data_chunk_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_raw_data, PyObject *_python_par_start )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_raw_data( _python_str_plain_raw_data, _python_par_raw_data );
    PyObjectLocalParameterVariableNoDel _python_var_start( _python_str_plain_start, _python_par_start );

    // Actual function code.
    static PyFrameObject *frame_function_3_receive_data_chunk_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler = NULL;

    if ( isFrameUnusable( frame_function_3_receive_data_chunk_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler ) )
    {
        if ( frame_function_3_receive_data_chunk_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_receive_data_chunk_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler" );
#endif
            Py_DECREF( frame_function_3_receive_data_chunk_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler );
        }

        frame_function_3_receive_data_chunk_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler = MAKE_FRAME( _codeobj_2c6beae99cac18dc4f77c5ce0806923a, _module_django__core__files__uploadhandler );
    }

    FrameGuard frame_guard( frame_function_3_receive_data_chunk_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler );
    try
    {
        assert( Py_REFCNT( frame_function_3_receive_data_chunk_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 171 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_activated ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 172 );
            {
                PyObjectTempKeeper1 call1;
                DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_file ) ).asObject(), _python_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_raw_data.asObject() ) ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 174 );
            return _python_var_raw_data.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_start.updateLocalsDict( _python_var_raw_data.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_receive_data_chunk_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler )
        {
           Py_DECREF( frame_function_3_receive_data_chunk_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler );
           frame_function_3_receive_data_chunk_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_3_receive_data_chunk_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_raw_data = NULL;
    PyObject *_python_par_start = NULL;
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
                PyErr_Format( PyExc_TypeError, "receive_data_chunk() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "receive_data_chunk() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_raw_data == key )
            {
                if (unlikely( _python_par_raw_data ))
                {
                    PyErr_Format( PyExc_TypeError, "receive_data_chunk() got multiple values for keyword argument 'raw_data'" );
                    goto error_exit;
                }

                _python_par_raw_data = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_start == key )
            {
                if (unlikely( _python_par_start ))
                {
                    PyErr_Format( PyExc_TypeError, "receive_data_chunk() got multiple values for keyword argument 'start'" );
                    goto error_exit;
                }

                _python_par_start = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "receive_data_chunk() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_raw_data, key ) )
            {
                if (unlikely( _python_par_raw_data ))
                {
                    PyErr_Format( PyExc_TypeError, "receive_data_chunk() got multiple values for keyword argument 'raw_data'" );
                    goto error_exit;
                }

                _python_par_raw_data = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_start, key ) )
            {
                if (unlikely( _python_par_start ))
                {
                    PyErr_Format( PyExc_TypeError, "receive_data_chunk() got multiple values for keyword argument 'start'" );
                    goto error_exit;
                }

                _python_par_start = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "receive_data_chunk() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "receive_data_chunk() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "receive_data_chunk() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "receive_data_chunk() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "receive_data_chunk() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "receive_data_chunk() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "receive_data_chunk() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "receive_data_chunk() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "receive_data_chunk() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "receive_data_chunk() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "receive_data_chunk() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "receive_data_chunk() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "receive_data_chunk() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "receive_data_chunk() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_raw_data != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "receive_data_chunk() got multiple values for keyword argument 'raw_data'" );
             goto error_exit;
         }

        _python_par_raw_data = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_start != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "receive_data_chunk() got multiple values for keyword argument 'start'" );
             goto error_exit;
         }

        _python_par_start = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_3_receive_data_chunk_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler( self, _python_par_self, _python_par_raw_data, _python_par_start );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_raw_data );
    Py_XDECREF( _python_par_start );

    return NULL;
}

static PyObject *dparse_function_3_receive_data_chunk_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_3_receive_data_chunk_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_receive_data_chunk_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_file_complete_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_file_size )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_file_size( _python_str_plain_file_size, _python_par_file_size );

    // Actual function code.
    static PyFrameObject *frame_function_4_file_complete_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler = NULL;

    if ( isFrameUnusable( frame_function_4_file_complete_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler ) )
    {
        if ( frame_function_4_file_complete_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_file_complete_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler" );
#endif
            Py_DECREF( frame_function_4_file_complete_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler );
        }

        frame_function_4_file_complete_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler = MAKE_FRAME( _codeobj_0207ebc29d557bfa157bd4a221bdb84d, _module_django__core__files__uploadhandler );
    }

    FrameGuard frame_guard( frame_function_4_file_complete_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler );
    try
    {
        assert( Py_REFCNT( frame_function_4_file_complete_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 180 );
        if ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_activated ) ).asObject() ) )) )
        {
            return INCREASE_REFCOUNT( Py_None );
        }
        frame_guard.setLineNumber( 183 );
        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_file ) ).asObject(), _python_str_plain_seek ) ).asObject(), _python_int_0 ) );
        frame_guard.setLineNumber( 184 );
        {
            PyObjectTempKeeper0 call13;
            PyObjectTempKeeper1 make_dict1;
            PyObjectTempKeeper1 make_dict3;
            PyObjectTempKeeper1 make_dict5;
            PyObjectTempKeeper1 make_dict7;
            PyObjectTempKeeper0 make_dict9;
            return ( call13.assign( _mvar_django__core__files__uploadhandler_InMemoryUploadedFile.asObject0() ), CALL_FUNCTION( call13.asObject0(), _python_tuple_empty, PyObjectTemporary( ( make_dict1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_file ) ), make_dict3.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_field_name ) ), make_dict5.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_file_name ) ), make_dict7.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_content_type ) ), make_dict9.assign( _python_var_file_size.asObject() ), MAKE_DICT6( make_dict1.asObject0(), _python_str_plain_file, make_dict3.asObject0(), _python_str_plain_field_name, make_dict5.asObject0(), _python_str_plain_name, make_dict7.asObject0(), _python_str_plain_content_type, make_dict9.asObject0(), _python_str_plain_size, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_charset ) ).asObject(), _python_str_plain_charset ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_file_size.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_4_file_complete_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler )
        {
           Py_DECREF( frame_function_4_file_complete_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler );
           frame_function_4_file_complete_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_file_complete_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_file_size = NULL;
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
                PyErr_Format( PyExc_TypeError, "file_complete() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "file_complete() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_file_size == key )
            {
                if (unlikely( _python_par_file_size ))
                {
                    PyErr_Format( PyExc_TypeError, "file_complete() got multiple values for keyword argument 'file_size'" );
                    goto error_exit;
                }

                _python_par_file_size = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "file_complete() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_file_size, key ) )
            {
                if (unlikely( _python_par_file_size ))
                {
                    PyErr_Format( PyExc_TypeError, "file_complete() got multiple values for keyword argument 'file_size'" );
                    goto error_exit;
                }

                _python_par_file_size = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "file_complete() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "file_complete() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "file_complete() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "file_complete() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "file_complete() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "file_complete() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "file_complete() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "file_complete() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "file_complete() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "file_complete() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "file_complete() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "file_complete() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "file_complete() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "file_complete() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_file_size != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "file_complete() got multiple values for keyword argument 'file_size'" );
             goto error_exit;
         }

        _python_par_file_size = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_4_file_complete_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler( self, _python_par_self, _python_par_file_size );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_file_size );

    return NULL;
}

static PyObject *dparse_function_4_file_complete_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_4_file_complete_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_file_complete_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8_load_handler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject *_python_par_path, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_path( _python_str_plain_path, _python_par_path );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_8_load_handler_of_module_django__core__files__uploadhandler = NULL;

    if ( isFrameUnusable( frame_function_8_load_handler_of_module_django__core__files__uploadhandler ) )
    {
        if ( frame_function_8_load_handler_of_module_django__core__files__uploadhandler )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_8_load_handler_of_module_django__core__files__uploadhandler" );
#endif
            Py_DECREF( frame_function_8_load_handler_of_module_django__core__files__uploadhandler );
        }

        frame_function_8_load_handler_of_module_django__core__files__uploadhandler = MAKE_FRAME( _codeobj_e17465b252f321a7e2fa35e34e5483b4, _module_django__core__files__uploadhandler );
    }

    FrameGuard frame_guard( frame_function_8_load_handler_of_module_django__core__files__uploadhandler );
    try
    {
        assert( Py_REFCNT( frame_function_8_load_handler_of_module_django__core__files__uploadhandler ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 203 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper1 call_tmp3;
            PyObjectTempKeeper0 call_tmp4;
            return ( call_tmp3.assign( ( call1.assign( _mvar_django__core__files__uploadhandler_import_by_path.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_path.asObject() ) ) ), call_tmp4.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp3.asObject(), call_tmp4.asObject(), _python_var_kwargs.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_path.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_8_load_handler_of_module_django__core__files__uploadhandler )
        {
           Py_DECREF( frame_function_8_load_handler_of_module_django__core__files__uploadhandler );
           frame_function_8_load_handler_of_module_django__core__files__uploadhandler = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_8_load_handler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_path = NULL;
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
                        PyErr_Format( PyExc_TypeError, "load_handler() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "load_handler() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "load_handler() keywords must be strings" );
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

    // Check if argument path was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_path );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_path == NULL );

            _python_par_path = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_path );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "load_handler() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "load_handler() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "load_handler() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_path != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "load_handler() got multiple values for keyword argument 'path'" );
             goto error_exit;
         }

        _python_par_path = INCREASE_REFCOUNT( args[ 0 ] );
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


    return impl_function_8_load_handler_of_module_django__core__files__uploadhandler( self, _python_par_path, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_path );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_8_load_handler_of_module_django__core__files__uploadhandler( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_8_load_handler_of_module_django__core__files__uploadhandler( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_8_load_handler_of_module_django__core__files__uploadhandler( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1___init___of_class_2_StopUpload_of_module_django__core__files__uploadhandler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_2_StopUpload_of_module_django__core__files__uploadhandler,
        dparse_function_1___init___of_class_2_StopUpload_of_module_django__core__files__uploadhandler,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ad98d97e765cd7261801b9d13cc2cb11,
        INCREASE_REFCOUNT( _python_tuple_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__uploadhandler,
        _python_unicode_digest_b88b95ca8025c76baaf7850e201bc2d3
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler,
        dparse_function_1___init___of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_dadee12f10cc88b8f8c910b84a00f9d7,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__uploadhandler,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler,
        dparse_function_1___init___of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_8aa1e71406aff2a05a0f606081818072,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__uploadhandler,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_handle_raw_input_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_handle_raw_input_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler,
        dparse_function_1_handle_raw_input_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler,
        _python_str_plain_handle_raw_input,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_864c07841434712849948d9b53805edf,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__uploadhandler,
        _python_unicode_digest_0658f7e33ad58cdcf8a2528be075d34c
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___str___of_class_2_StopUpload_of_module_django__core__files__uploadhandler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___str___of_class_2_StopUpload_of_module_django__core__files__uploadhandler,
        dparse_function_2___str___of_class_2_StopUpload_of_module_django__core__files__uploadhandler,
        _python_str_plain___str__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_c5d8050109cacfbc7bb2750ffa536b59,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__uploadhandler,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_handle_raw_input_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_handle_raw_input_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler,
        dparse_function_2_handle_raw_input_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler,
        _python_str_plain_handle_raw_input,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_fcd0392bee1b38881214d7a914762eb5,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__uploadhandler,
        _python_unicode_digest_1cdd0e461a90a8482cba9ccc2a80ca4e
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_new_file_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_new_file_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler,
        dparse_function_2_new_file_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler,
        _python_str_plain_new_file,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_65b0abcbd7277d83e21562f8da99f1f5,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__uploadhandler,
        _python_unicode_digest_89bd66ff842bb6b64737eec9b8dcb244
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_new_file_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_new_file_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler,
        dparse_function_2_new_file_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler,
        _python_str_plain_new_file,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_11e02aab53cef6441aed968378c4adfb,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__uploadhandler,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_new_file_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_new_file_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler,
        dparse_function_3_new_file_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler,
        _python_str_plain_new_file,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_4da65470472f15e430175507fce6995b,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__uploadhandler,
        _python_unicode_digest_50a92d443c8ee6c7788d426a55c4c810
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_receive_data_chunk_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_receive_data_chunk_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler,
        dparse_function_3_receive_data_chunk_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler,
        _python_str_plain_receive_data_chunk,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e86d2a4665662f2cf103eef8be909cfe,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__uploadhandler,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_receive_data_chunk_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_receive_data_chunk_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler,
        dparse_function_3_receive_data_chunk_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler,
        _python_str_plain_receive_data_chunk,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_2c6beae99cac18dc4f77c5ce0806923a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__uploadhandler,
        _python_unicode_digest_7bad845a06571931a8f162009dfd734c
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_file_complete_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_file_complete_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler,
        dparse_function_4_file_complete_of_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler,
        _python_str_plain_file_complete,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_fd7a9c44ccaec72721be3c57f8118141,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__uploadhandler,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_file_complete_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_file_complete_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler,
        dparse_function_4_file_complete_of_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler,
        _python_str_plain_file_complete,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_0207ebc29d557bfa157bd4a221bdb84d,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__uploadhandler,
        _python_unicode_digest_84810069b6663f40e93c7852a3020434
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_receive_data_chunk_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_receive_data_chunk_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler,
        dparse_function_4_receive_data_chunk_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler,
        _python_str_plain_receive_data_chunk,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_4bb1d7dd935bb05e2ff79863308d8468,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__uploadhandler,
        _python_unicode_digest_f65c960f5bcecda0050045f009bf05c6
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_file_complete_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_file_complete_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler,
        dparse_function_5_file_complete_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler,
        _python_str_plain_file_complete,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_6aa64ecf7f24b037b27efebda44b506d,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__uploadhandler,
        _python_unicode_digest_c5c77257131eb2d0f738475028d21ef7
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_upload_complete_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_upload_complete_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler,
        dparse_function_6_upload_complete_of_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler,
        _python_str_plain_upload_complete,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_75b4cd1233ef0f97c110dfe43a91ebba,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__uploadhandler,
        _python_unicode_digest_11dca1d6a8573d4bbb5c3073b23562d4
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_load_handler_of_module_django__core__files__uploadhandler(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_load_handler_of_module_django__core__files__uploadhandler,
        dparse_function_8_load_handler_of_module_django__core__files__uploadhandler,
        _python_str_plain_load_handler,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e17465b252f321a7e2fa35e34e5483b4,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__uploadhandler,
        _python_unicode_digest_1a7a9c5126bb101481a5dcc836f9638d
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.core.files.uploadhandler",   /* m_name */
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

MOD_INIT_DECL( django__core__files__uploadhandler )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__core__files__uploadhandler );
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

    // puts( "in initdjango__core__files__uploadhandler" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__core__files__uploadhandler = Py_InitModule4(
        "django.core.files.uploadhandler",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__core__files__uploadhandler = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__core__files__uploadhandler = (PyDictObject *)((PyModuleObject *)_module_django__core__files__uploadhandler)->md_dict;

    assertObject( _module_django__core__files__uploadhandler );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_5990aaa6131f7182dcb5ddd3561af330, _module_django__core__files__uploadhandler );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__core__files__uploadhandler );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__core__files__uploadhandler != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__core__files__uploadhandler, (Nuitka_StringObject *)_python_str_plain___doc__, _python_unicode_digest_9cfc4ba7d3cd314049a9efaacdac3d83 );
    UPDATE_STRING_DICT0( _moduledict_django__core__files__uploadhandler, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_3968db58a23dd05b699680ba957af3a5 );
    PyFrameObject *frame_module_django__core__files__uploadhandler = MAKE_FRAME( _codeobj_3f279fbfe2a5a917e5e5fb3f00d1f607, _module_django__core__files__uploadhandler );

    FrameGuard frame_guard( frame_module_django__core__files__uploadhandler );
    try
    {
        assert( Py_REFCNT( frame_module_django__core__files__uploadhandler ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 5 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__uploadhandler, (Nuitka_StringObject *)_python_str_plain_unicode_literals, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain___future__, ((PyModuleObject *)_module_django__core__files__uploadhandler)->md_dict, ((PyModuleObject *)_module_django__core__files__uploadhandler)->md_dict, _python_list_str_plain_unicode_literals_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_unicode_literals ) );
        frame_guard.setLineNumber( 7 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__uploadhandler, (Nuitka_StringObject *)_python_str_plain_BytesIO, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_io, ((PyModuleObject *)_module_django__core__files__uploadhandler)->md_dict, ((PyModuleObject *)_module_django__core__files__uploadhandler)->md_dict, _python_list_str_plain_BytesIO_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_BytesIO ) );
        frame_guard.setLineNumber( 9 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__uploadhandler, (Nuitka_StringObject *)_python_str_plain_settings, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__core__files__uploadhandler)->md_dict, ((PyModuleObject *)_module_django__core__files__uploadhandler)->md_dict, _python_list_str_plain_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_settings ) );
        frame_guard.setLineNumber( 10 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__uploadhandler, (Nuitka_StringObject *)_python_str_plain_TemporaryUploadedFile, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_aeb1bef4e208b9cea3ae8c4ea718cce9, ((PyModuleObject *)_module_django__core__files__uploadhandler)->md_dict, ((PyModuleObject *)_module_django__core__files__uploadhandler)->md_dict, _python_list_d879226fae76e769ab265ba496a53f00_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_TemporaryUploadedFile ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__uploadhandler, (Nuitka_StringObject *)_python_str_plain_InMemoryUploadedFile, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_aeb1bef4e208b9cea3ae8c4ea718cce9, ((PyModuleObject *)_module_django__core__files__uploadhandler)->md_dict, ((PyModuleObject *)_module_django__core__files__uploadhandler)->md_dict, _python_list_d879226fae76e769ab265ba496a53f00_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_InMemoryUploadedFile ) );
        frame_guard.setLineNumber( 11 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__uploadhandler, (Nuitka_StringObject *)_python_str_plain_python_2_unicode_compatible, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__core__files__uploadhandler)->md_dict, ((PyModuleObject *)_module_django__core__files__uploadhandler)->md_dict, _python_list_str_plain_python_2_unicode_compatible_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_python_2_unicode_compatible ) );
        frame_guard.setLineNumber( 12 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__uploadhandler, (Nuitka_StringObject *)_python_str_plain_import_by_path, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_03bb9f131d782ff4dbd31e0966379285, ((PyModuleObject *)_module_django__core__files__uploadhandler)->md_dict, ((PyModuleObject *)_module_django__core__files__uploadhandler)->md_dict, _python_list_str_plain_import_by_path_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_import_by_path ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__uploadhandler, (Nuitka_StringObject *)_python_str_plain___all__, LIST_COPY( _python_list_079b279cb99a3b82c0fb3ffa6b66da04_list ) );
        {
            frame_guard.setLineNumber( 18 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( PyExc_Exception ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_1_UploadFileException_of_module_django__core__files__uploadhandler(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__files__uploadhandler___metaclass__.isInitialized( false ) ? _mvar_django__core__files__uploadhandler___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_UploadFileException, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__files__uploadhandler, (Nuitka_StringObject *)_python_str_plain_UploadFileException, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 24 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__core__files__uploadhandler_UploadFileException.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_2_StopUpload_of_module_django__core__files__uploadhandler(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__files__uploadhandler___metaclass__.isInitialized( false ) ? _mvar_django__core__files__uploadhandler___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper0 call7;
                _tmp_python_tmp_class = ( call5.assign( _python_tmp_metaclass.asObject() ), call7.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_str_plain_StopUpload, call7.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            {
                PyObjectTempKeeper0 call9;
                _python_tmp_class.assign1( ( call9.assign( _mvar_django__core__files__uploadhandler_python_2_unicode_compatible.asObject0() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_tmp_class.asObject() ) ) );
            }
            UPDATE_STRING_DICT0( _moduledict_django__core__files__uploadhandler, (Nuitka_StringObject *)_python_str_plain_StopUpload, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 43 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__core__files__uploadhandler_UploadFileException.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_3_SkipFile_of_module_django__core__files__uploadhandler(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__files__uploadhandler___metaclass__.isInitialized( false ) ? _mvar_django__core__files__uploadhandler___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call11;
                PyObjectTempKeeper0 call13;
                _tmp_python_tmp_class = ( call11.assign( _python_tmp_metaclass.asObject() ), call13.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), _python_str_plain_SkipFile, call13.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__files__uploadhandler, (Nuitka_StringObject *)_python_str_plain_SkipFile, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 49 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__core__files__uploadhandler_UploadFileException.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_4_StopFutureHandlers_of_module_django__core__files__uploadhandler(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__files__uploadhandler___metaclass__.isInitialized( false ) ? _mvar_django__core__files__uploadhandler___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call15;
                PyObjectTempKeeper0 call17;
                _tmp_python_tmp_class = ( call15.assign( _python_tmp_metaclass.asObject() ), call17.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call15.asObject0(), _python_str_plain_StopFutureHandlers, call17.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__files__uploadhandler, (Nuitka_StringObject *)_python_str_plain_StopFutureHandlers, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 56 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_5_FileUploadHandler_of_module_django__core__files__uploadhandler(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__files__uploadhandler___metaclass__.isInitialized( false ) ? _mvar_django__core__files__uploadhandler___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call19;
                PyObjectTempKeeper0 call21;
                _tmp_python_tmp_class = ( call19.assign( _python_tmp_metaclass.asObject() ), call21.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call19.asObject0(), _python_str_plain_FileUploadHandler, call21.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__files__uploadhandler, (Nuitka_StringObject *)_python_str_plain_FileUploadHandler, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 123 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__core__files__uploadhandler_FileUploadHandler.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_6_TemporaryFileUploadHandler_of_module_django__core__files__uploadhandler(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__files__uploadhandler___metaclass__.isInitialized( false ) ? _mvar_django__core__files__uploadhandler___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call23;
                PyObjectTempKeeper0 call25;
                _tmp_python_tmp_class = ( call23.assign( _python_tmp_metaclass.asObject() ), call25.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call23.asObject0(), _python_str_plain_TemporaryFileUploadHandler, call25.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__files__uploadhandler, (Nuitka_StringObject *)_python_str_plain_TemporaryFileUploadHandler, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 145 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__core__files__uploadhandler_FileUploadHandler.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_7_MemoryFileUploadHandler_of_module_django__core__files__uploadhandler(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__files__uploadhandler___metaclass__.isInitialized( false ) ? _mvar_django__core__files__uploadhandler___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call27;
                PyObjectTempKeeper0 call29;
                _tmp_python_tmp_class = ( call27.assign( _python_tmp_metaclass.asObject() ), call29.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call27.asObject0(), _python_str_plain_MemoryFileUploadHandler, call29.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__files__uploadhandler, (Nuitka_StringObject *)_python_str_plain_MemoryFileUploadHandler, _python_tmp_class.asObject() );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__core__files__uploadhandler)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__core__files__uploadhandler, (Nuitka_StringObject *)_python_str_plain_load_handler, MAKE_FUNCTION_function_8_load_handler_of_module_django__core__files__uploadhandler(  ) );

   return MOD_RETURN_VALUE( _module_django__core__files__uploadhandler );
}
