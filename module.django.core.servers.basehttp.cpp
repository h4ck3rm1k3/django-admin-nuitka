// Generated code for Python source for module 'django.core.servers.basehttp'
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

// The _module_django__core__servers__basehttp is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__core__servers__basehttp;
PyDictObject *_moduledict_django__core__servers__basehttp;

// The module level variables.
static PyObjectGlobalVariable_django__core__servers__basehttp _mvar_django__core__servers__basehttp_BytesIO( &_module_django__core__servers__basehttp, &_python_str_plain_BytesIO );
static PyObjectGlobalVariable_django__core__servers__basehttp _mvar_django__core__servers__basehttp_MAX_SOCKET_CHUNK_SIZE( &_module_django__core__servers__basehttp, &_python_str_plain_MAX_SOCKET_CHUNK_SIZE );
static PyObjectGlobalVariable_django__core__servers__basehttp _mvar_django__core__servers__basehttp_ServerHandler( &_module_django__core__servers__basehttp, &_python_str_plain_ServerHandler );
static PyObjectGlobalVariable_django__core__servers__basehttp _mvar_django__core__servers__basehttp_WSGIRequestHandler( &_module_django__core__servers__basehttp, &_python_str_plain_WSGIRequestHandler );
static PyObjectGlobalVariable_django__core__servers__basehttp _mvar_django__core__servers__basehttp_WSGIServer( &_module_django__core__servers__basehttp, &_python_str_plain_WSGIServer );
static PyObjectGlobalVariable_django__core__servers__basehttp _mvar_django__core__servers__basehttp_WSGIServerException( &_module_django__core__servers__basehttp, &_python_str_plain_WSGIServerException );
static PyObjectGlobalVariable_django__core__servers__basehttp _mvar_django__core__servers__basehttp___metaclass__( &_module_django__core__servers__basehttp, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__core__servers__basehttp _mvar_django__core__servers__basehttp_color_style( &_module_django__core__servers__basehttp, &_python_str_plain_color_style );
static PyObjectGlobalVariable_django__core__servers__basehttp _mvar_django__core__servers__basehttp_get_wsgi_application( &_module_django__core__servers__basehttp, &_python_str_plain_get_wsgi_application );
static PyObjectGlobalVariable_django__core__servers__basehttp _mvar_django__core__servers__basehttp_import_by_path( &_module_django__core__servers__basehttp, &_python_str_plain_import_by_path );
static PyObjectGlobalVariable_django__core__servers__basehttp _mvar_django__core__servers__basehttp_simple_server( &_module_django__core__servers__basehttp, &_python_str_plain_simple_server );
static PyObjectGlobalVariable_django__core__servers__basehttp _mvar_django__core__servers__basehttp_six( &_module_django__core__servers__basehttp, &_python_str_plain_six );
static PyObjectGlobalVariable_django__core__servers__basehttp _mvar_django__core__servers__basehttp_socket( &_module_django__core__servers__basehttp, &_python_str_plain_socket );
static PyObjectGlobalVariable_django__core__servers__basehttp _mvar_django__core__servers__basehttp_socketserver( &_module_django__core__servers__basehttp, &_python_str_plain_socketserver );
static PyObjectGlobalVariable_django__core__servers__basehttp _mvar_django__core__servers__basehttp_sys( &_module_django__core__servers__basehttp, &_python_str_plain_sys );
static PyObjectGlobalVariable_django__core__servers__basehttp _mvar_django__core__servers__basehttp_traceback( &_module_django__core__servers__basehttp, &_python_str_plain_traceback );
static PyObjectGlobalVariable_django__core__servers__basehttp _mvar_django__core__servers__basehttp_urljoin( &_module_django__core__servers__basehttp, &_python_str_plain_urljoin );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_2_WSGIServerException_of_module_django__core__servers__basehttp(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_3_ServerHandler_of_module_django__core__servers__basehttp(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_4_WSGIServer_of_module_django__core__servers__basehttp(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_4_WSGIServer_of_module_django__core__servers__basehttp(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp(  );


static PyObject *MAKE_FUNCTION_function_1_get_internal_wsgi_application_of_module_django__core__servers__basehttp(  );


static PyObject *MAKE_FUNCTION_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp(  );


static PyObject *MAKE_FUNCTION_function_2_address_string_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp(  );


static PyObject *MAKE_FUNCTION_function_2_error_output_of_class_3_ServerHandler_of_module_django__core__servers__basehttp(  );


static PyObject *MAKE_FUNCTION_function_2_server_bind_of_class_4_WSGIServer_of_module_django__core__servers__basehttp(  );


static PyObject *MAKE_FUNCTION_function_3_finish_response_of_class_3_ServerHandler_of_module_django__core__servers__basehttp(  );


static PyObject *MAKE_FUNCTION_function_3_log_message_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp(  );


static PyObject *MAKE_FUNCTION_function_6_run_of_module_django__core__servers__basehttp(  );


static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp( PyObjectSharedLocalVariable &python_closure_data );


// This structure is for attachment as self of lambda_1_lambda_of_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp.
// It is allocated at the time the function object is created.
struct _context_lambda_1_lambda_of_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp_t
{
    // The function can access a read-only closure of the creator.
    PyObjectClosureVariable python_closure_data;
};

static void _context_lambda_1_lambda_of_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp_destructor( void *context_voidptr )
{
    _context_lambda_1_lambda_of_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp_t *_python_context = (_context_lambda_1_lambda_of_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp_t *)context_voidptr;



    delete _python_context;
}


// The module function definitions.
static PyObject *impl_function_1_get_internal_wsgi_application_of_module_django__core__servers__basehttp( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var_settings( _python_str_plain_settings );
    PyObjectLocalVariable _python_var_app_path( _python_str_plain_app_path );

    // Actual function code.
    static PyFrameObject *frame_function_1_get_internal_wsgi_application_of_module_django__core__servers__basehttp = NULL;

    if ( isFrameUnusable( frame_function_1_get_internal_wsgi_application_of_module_django__core__servers__basehttp ) )
    {
        if ( frame_function_1_get_internal_wsgi_application_of_module_django__core__servers__basehttp )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_get_internal_wsgi_application_of_module_django__core__servers__basehttp" );
#endif
            Py_DECREF( frame_function_1_get_internal_wsgi_application_of_module_django__core__servers__basehttp );
        }

        frame_function_1_get_internal_wsgi_application_of_module_django__core__servers__basehttp = MAKE_FRAME( _codeobj_4bf32be4ba3b18126842f6e50c9b5cf1, _module_django__core__servers__basehttp );
    }

    FrameGuard frame_guard( frame_function_1_get_internal_wsgi_application_of_module_django__core__servers__basehttp );
    try
    {
        assert( Py_REFCNT( frame_function_1_get_internal_wsgi_application_of_module_django__core__servers__basehttp ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 53 );
        _python_var_settings.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__core__servers__basehttp)->md_dict, PyObjectTemporary( _python_var_app_path.updateLocalsDict( _python_var_settings.updateLocalsDict( PyDict_New() ) ) ).asObject(), _python_list_str_plain_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_settings ) );
        frame_guard.setLineNumber( 54 );
        _python_var_app_path.assign1( BUILTIN_GETATTR( _python_var_settings.asObject(), _python_unicode_plain_WSGI_APPLICATION, NULL ) );
        frame_guard.setLineNumber( 55 );
        if ( ( _python_var_app_path.asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 56 );
            return CALL_FUNCTION_NO_ARGS( _mvar_django__core__servers__basehttp_get_wsgi_application.asObject0() );
        }
        frame_guard.setLineNumber( 58 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper1 call2;
            return ( call1.assign( _mvar_django__core__servers__basehttp_import_by_path.asObject0() ), call2.assign( MAKE_TUPLE1( _python_var_app_path.asObject() ) ), CALL_FUNCTION( call1.asObject0(), call2.asObject0(), PyObjectTemporary( MAKE_DICT1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_0c4a3fd9fbeaa9f08b8d1440cf22e0c4, _python_var_app_path.asObject() ) ).asObject(), _python_str_plain_error_prefix ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_app_path.updateLocalsDict( _python_var_settings.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_1_get_internal_wsgi_application_of_module_django__core__servers__basehttp )
        {
           Py_DECREF( frame_function_1_get_internal_wsgi_application_of_module_django__core__servers__basehttp );
           frame_function_1_get_internal_wsgi_application_of_module_django__core__servers__basehttp = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1_get_internal_wsgi_application_of_module_django__core__servers__basehttp( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        PyErr_Format( PyExc_TypeError, "get_internal_wsgi_application() takes no arguments (%zd given)", args_given + kw_size );
#else
        if ( kw_size == 0 )
        {
           PyErr_Format( PyExc_TypeError, "get_internal_wsgi_application() takes 0 positional arguments but %zd was given", args_given );
        }
        else
        {
           PyObject *tmp_iter = PyObject_GetIter( kw );
           PyObject *tmp_arg_name = PyIter_Next( tmp_iter );
           Py_DECREF( tmp_iter );

           PyErr_Format( PyExc_TypeError, "get_internal_wsgi_application() got an unexpected keyword argument '%s'", Nuitka_String_AsString( tmp_arg_name ) );

           Py_DECREF( tmp_arg_name );
        }
#endif
        goto error_exit;
    }


    return impl_function_1_get_internal_wsgi_application_of_module_django__core__servers__basehttp( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_1_get_internal_wsgi_application_of_module_django__core__servers__basehttp( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0)
    {
        return impl_function_1_get_internal_wsgi_application_of_module_django__core__servers__basehttp( self );
    }
    else
    {
        PyObject *result = fparse_function_1_get_internal_wsgi_application_of_module_django__core__servers__basehttp( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_2_WSGIServerException_of_module_django__core__servers__basehttp(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_basehttp );
    return _python_var___module__.updateLocalsDict( PyDict_New() );
}


NUITKA_LOCAL_MODULE PyObject *impl_class_3_ServerHandler_of_module_django__core__servers__basehttp(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var_error_status( _python_str_plain_error_status );
    PyObjectLocalVariable _python_var_write( _python_str_plain_write );
    PyObjectLocalVariable _python_var_error_output( _python_str_plain_error_output );
    PyObjectLocalVariable _python_var_finish_response( _python_str_plain_finish_response );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_basehttp );
    _python_var_error_status.assign0( _python_str_digest_b966a9d8a977f7e75d428e63378919d6 );
    _python_var_write.assign1( MAKE_FUNCTION_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp(  ) );
    _python_var_error_output.assign1( MAKE_FUNCTION_function_2_error_output_of_class_3_ServerHandler_of_module_django__core__servers__basehttp(  ) );
    _python_var_finish_response.assign1( MAKE_FUNCTION_function_3_finish_response_of_class_3_ServerHandler_of_module_django__core__servers__basehttp(  ) );
    return _python_var_finish_response.updateLocalsDict( _python_var_error_output.updateLocalsDict( _python_var_write.updateLocalsDict( _python_var_error_status.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) );
}


static PyObject *impl_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_data )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectSharedLocalVariable _python_var_data( _python_str_plain_data, _python_par_data );
    PyObjectLocalVariable _python_var_chunk( _python_str_plain_chunk );

    // Actual function code.
    static PyFrameObject *frame_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp = NULL;

    if ( isFrameUnusable( frame_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp ) )
    {
        if ( frame_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp" );
#endif
            Py_DECREF( frame_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp );
        }

        frame_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp = MAKE_FRAME( _codeobj_228abc2bb0ed882650307f9764a60562, _module_django__core__servers__basehttp );
    }

    FrameGuard frame_guard( frame_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp );
    try
    {
        assert( Py_REFCNT( frame_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 74 );
        if ( (!( BUILTIN_ISINSTANCE_BOOL( _python_var_data.asObject(), LOOKUP_BUILTIN( _python_str_plain_bytes ) ) )) )
        {
            frame_guard.setLineNumber( 74 );
            {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_AssertionError, PyObjectTemporary( MAKE_TUPLE1( _python_unicode_digest_51de67e610da9cb97f4d0779054b232e ) ).asObject() ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
        }
        frame_guard.setLineNumber( 76 );
        if ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_status ) ).asObject() ) )) )
        {
            frame_guard.setLineNumber( 77 );
            {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_AssertionError, PyObjectTemporary( MAKE_TUPLE1( _python_unicode_digest_6011c68f3ac33b5aae1261315eff88dd ) ).asObject() ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
        }
        else
        {
            frame_guard.setLineNumber( 79 );
            if ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_headers_sent ) ).asObject() ) )) )
            {
                frame_guard.setLineNumber( 81 );
                {
                        PyObjectTemporary tmp_identifier( BUILTIN_LEN( _python_var_data.asObject() ) );
                        SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_bytes_sent );
                }
                frame_guard.setLineNumber( 82 );
                DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_send_headers ) ).asObject() ) );
            }
            else
            {
                {
                    frame_guard.setLineNumber( 84 );
                    PyObjectTemporary _python_tmp_inplace_start( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_bytes_sent ) );
                    PyObject *_tmp_python_tmp_inplace_end;
                    {
                        PyObjectTempKeeper0 op1;
                        _tmp_python_tmp_inplace_end = ( op1.assign( _python_tmp_inplace_start.asObject() ), BINARY_OPERATION( PyNumber_InPlaceAdd, op1.asObject0(), PyObjectTemporary( BUILTIN_LEN( _python_var_data.asObject() ) ).asObject() ) );
                    }
                    PyObjectTemporary _python_tmp_inplace_end( _tmp_python_tmp_inplace_end );
                    if ( ( _python_tmp_inplace_start.asObject() != _python_tmp_inplace_end.asObject() ) )
                    {
                        frame_guard.setLineNumber( 84 );
                        {
                                PyObject *tmp_identifier = _python_tmp_inplace_end.asObject();
                                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_bytes_sent );
                        }
                    }
                }
            }
        }
        frame_guard.setLineNumber( 87 );
        {
            PyObjectTempKeeper0 call3;
            _python_var_data.assign1( ( call3.assign( _mvar_django__core__servers__basehttp_BytesIO.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_data.asObject() ) ) );
        }
        {
            frame_guard.setLineNumber( 88 );
            PyObjectTemporary _python_tmp_for_iterator( BUILTIN_ITER2( PyObjectTemporary( MAKE_FUNCTION_lambda_1_lambda_of_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp( _python_var_data ) ).asObject(), _python_str_empty ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 88 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_chunk.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 89 );
                {
                    PyObjectTempKeeper1 call5;
                    DECREASE_REFCOUNT( ( call5.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__write ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_chunk.asObject() ) ) );
                }
                frame_guard.setLineNumber( 90 );
                DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__flush ) ).asObject() ) );

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

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_data.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_chunk.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp )
        {
           Py_DECREF( frame_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp );
           frame_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_data = NULL;
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
                PyErr_Format( PyExc_TypeError, "write() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "write() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_data == key )
            {
                if (unlikely( _python_par_data ))
                {
                    PyErr_Format( PyExc_TypeError, "write() got multiple values for keyword argument 'data'" );
                    goto error_exit;
                }

                _python_par_data = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "write() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_data, key ) )
            {
                if (unlikely( _python_par_data ))
                {
                    PyErr_Format( PyExc_TypeError, "write() got multiple values for keyword argument 'data'" );
                    goto error_exit;
                }

                _python_par_data = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "write() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "write() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "write() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "write() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "write() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "write() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "write() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "write() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "write() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "write() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "write() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "write() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "write() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "write() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_data != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "write() got multiple values for keyword argument 'data'" );
             goto error_exit;
         }

        _python_par_data = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp( self, _python_par_self, _python_par_data );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_data );

    return NULL;
}

static PyObject *dparse_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_lambda_1_lambda_of_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp( Nuitka_FunctionObject *self )
{
    // The context of the function.
    struct _context_lambda_1_lambda_of_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp_t *_python_context = (struct _context_lambda_1_lambda_of_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp_t *)self->m_context;

    // Local variable declarations.


    // Actual function code.
    static PyFrameObject *frame_lambda_1_lambda_of_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp = NULL;

    if ( isFrameUnusable( frame_lambda_1_lambda_of_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp ) )
    {
        if ( frame_lambda_1_lambda_of_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp )
        {
#if _DEBUG_REFRAME
            puts( "reframe for lambda_1_lambda_of_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp" );
#endif
            Py_DECREF( frame_lambda_1_lambda_of_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp );
        }

        frame_lambda_1_lambda_of_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp = MAKE_FRAME( _codeobj_baeb0083123184ee0ce8698fa0903d1f, _module_django__core__servers__basehttp );
    }

    FrameGuard frame_guard( frame_lambda_1_lambda_of_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp );
    try
    {
        assert( Py_REFCNT( frame_lambda_1_lambda_of_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 88 );
        {
            PyObjectTempKeeper1 call1;
            return ( call1.assign( LOOKUP_ATTRIBUTE( _python_context->python_closure_data.asObject(), _python_str_plain_read ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _mvar_django__core__servers__basehttp_MAX_SOCKET_CHUNK_SIZE.asObject0() ) );
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
        frame_guard.getFrame0()->f_locals = _python_context->python_closure_data.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_lambda_1_lambda_of_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp )
        {
           Py_DECREF( frame_lambda_1_lambda_of_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp );
           frame_lambda_1_lambda_of_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_lambda_1_lambda_of_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        PyErr_Format( PyExc_TypeError, "<lambda>() takes no arguments (%zd given)", args_given + kw_size );
#else
        if ( kw_size == 0 )
        {
           PyErr_Format( PyExc_TypeError, "<lambda>() takes 0 positional arguments but %zd was given", args_given );
        }
        else
        {
           PyObject *tmp_iter = PyObject_GetIter( kw );
           PyObject *tmp_arg_name = PyIter_Next( tmp_iter );
           Py_DECREF( tmp_iter );

           PyErr_Format( PyExc_TypeError, "<lambda>() got an unexpected keyword argument '%s'", Nuitka_String_AsString( tmp_arg_name ) );

           Py_DECREF( tmp_arg_name );
        }
#endif
        goto error_exit;
    }


    return impl_lambda_1_lambda_of_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_lambda_1_lambda_of_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0)
    {
        return impl_lambda_1_lambda_of_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp( self );
    }
    else
    {
        PyObject *result = fparse_lambda_1_lambda_of_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_error_output_of_class_3_ServerHandler_of_module_django__core__servers__basehttp( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_environ, PyObject *_python_par_start_response )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_environ( _python_str_plain_environ, _python_par_environ );
    PyObjectLocalParameterVariableNoDel _python_var_start_response( _python_str_plain_start_response, _python_par_start_response );

    // Actual function code.
    static PyFrameObject *frame_function_2_error_output_of_class_3_ServerHandler_of_module_django__core__servers__basehttp = NULL;

    if ( isFrameUnusable( frame_function_2_error_output_of_class_3_ServerHandler_of_module_django__core__servers__basehttp ) )
    {
        if ( frame_function_2_error_output_of_class_3_ServerHandler_of_module_django__core__servers__basehttp )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_error_output_of_class_3_ServerHandler_of_module_django__core__servers__basehttp" );
#endif
            Py_DECREF( frame_function_2_error_output_of_class_3_ServerHandler_of_module_django__core__servers__basehttp );
        }

        frame_function_2_error_output_of_class_3_ServerHandler_of_module_django__core__servers__basehttp = MAKE_FRAME( _codeobj_c9fc8a1f368e84921e3f4e1c31174994, _module_django__core__servers__basehttp );
    }

    FrameGuard frame_guard( frame_function_2_error_output_of_class_3_ServerHandler_of_module_django__core__servers__basehttp );
    try
    {
        assert( Py_REFCNT( frame_function_2_error_output_of_class_3_ServerHandler_of_module_django__core__servers__basehttp ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 93 );
        {
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper0 call4;
            PyObjectTempKeeper0 super1;
            DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super1.assign( _mvar_django__core__servers__basehttp_ServerHandler.asObject0() ), BUILTIN_SUPER( super1.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain_error_output ) ), call4.assign( _python_var_environ.asObject() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), call4.asObject0(), _python_var_start_response.asObject() ) ) );
        }
        frame_guard.setLineNumber( 94 );
        {
            PyObjectTempKeeper1 call8;
            PyObjectTempKeeper1 call_tmp6;
            return MAKE_LIST1( ( call8.assign( LOOKUP_ATTRIBUTE( _python_unicode_chr_10, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), PyObjectTemporary( ( call_tmp6.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__servers__basehttp_traceback.asObject0(), _python_str_plain_format_exception ) ), impl_function_7_complex_call_helper_star_list_of_module___internal__( call_tmp6.asObject(), CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__servers__basehttp_sys.asObject0(), _python_str_plain_exc_info ) ).asObject() ) ) ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_start_response.updateLocalsDict( _python_var_environ.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_error_output_of_class_3_ServerHandler_of_module_django__core__servers__basehttp )
        {
           Py_DECREF( frame_function_2_error_output_of_class_3_ServerHandler_of_module_django__core__servers__basehttp );
           frame_function_2_error_output_of_class_3_ServerHandler_of_module_django__core__servers__basehttp = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_error_output_of_class_3_ServerHandler_of_module_django__core__servers__basehttp( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_environ = NULL;
    PyObject *_python_par_start_response = NULL;
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
                PyErr_Format( PyExc_TypeError, "error_output() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "error_output() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_environ == key )
            {
                if (unlikely( _python_par_environ ))
                {
                    PyErr_Format( PyExc_TypeError, "error_output() got multiple values for keyword argument 'environ'" );
                    goto error_exit;
                }

                _python_par_environ = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_start_response == key )
            {
                if (unlikely( _python_par_start_response ))
                {
                    PyErr_Format( PyExc_TypeError, "error_output() got multiple values for keyword argument 'start_response'" );
                    goto error_exit;
                }

                _python_par_start_response = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "error_output() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_environ, key ) )
            {
                if (unlikely( _python_par_environ ))
                {
                    PyErr_Format( PyExc_TypeError, "error_output() got multiple values for keyword argument 'environ'" );
                    goto error_exit;
                }

                _python_par_environ = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_start_response, key ) )
            {
                if (unlikely( _python_par_start_response ))
                {
                    PyErr_Format( PyExc_TypeError, "error_output() got multiple values for keyword argument 'start_response'" );
                    goto error_exit;
                }

                _python_par_start_response = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "error_output() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "error_output() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "error_output() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "error_output() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "error_output() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "error_output() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "error_output() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "error_output() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "error_output() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "error_output() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "error_output() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "error_output() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "error_output() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "error_output() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_environ != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "error_output() got multiple values for keyword argument 'environ'" );
             goto error_exit;
         }

        _python_par_environ = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_start_response != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "error_output() got multiple values for keyword argument 'start_response'" );
             goto error_exit;
         }

        _python_par_start_response = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_2_error_output_of_class_3_ServerHandler_of_module_django__core__servers__basehttp( self, _python_par_self, _python_par_environ, _python_par_start_response );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_environ );
    Py_XDECREF( _python_par_start_response );

    return NULL;
}

static PyObject *dparse_function_2_error_output_of_class_3_ServerHandler_of_module_django__core__servers__basehttp( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_2_error_output_of_class_3_ServerHandler_of_module_django__core__servers__basehttp( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_error_output_of_class_3_ServerHandler_of_module_django__core__servers__basehttp( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_finish_response_of_class_3_ServerHandler_of_module_django__core__servers__basehttp( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_data( _python_str_plain_data );

    // Actual function code.
    static PyFrameObject *frame_function_3_finish_response_of_class_3_ServerHandler_of_module_django__core__servers__basehttp = NULL;

    if ( isFrameUnusable( frame_function_3_finish_response_of_class_3_ServerHandler_of_module_django__core__servers__basehttp ) )
    {
        if ( frame_function_3_finish_response_of_class_3_ServerHandler_of_module_django__core__servers__basehttp )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_finish_response_of_class_3_ServerHandler_of_module_django__core__servers__basehttp" );
#endif
            Py_DECREF( frame_function_3_finish_response_of_class_3_ServerHandler_of_module_django__core__servers__basehttp );
        }

        frame_function_3_finish_response_of_class_3_ServerHandler_of_module_django__core__servers__basehttp = MAKE_FRAME( _codeobj_5985953b6749fc326352e8360de8b4ec, _module_django__core__servers__basehttp );
    }

    FrameGuard frame_guard( frame_function_3_finish_response_of_class_3_ServerHandler_of_module_django__core__servers__basehttp );
    try
    {
        assert( Py_REFCNT( frame_function_3_finish_response_of_class_3_ServerHandler_of_module_django__core__servers__basehttp ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 99 );
        PythonExceptionKeeper _caught_1;


        try
        {
            frame_guard.setLineNumber( 100 );
            if ( ( (!( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_result_is_file ) ).asObject() ) ).asObject() ) )) || (!( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_sendfile ) ).asObject() ) ).asObject() ) )) ) )
            {
                {
                    frame_guard.setLineNumber( 101 );
                    PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_result ) ).asObject() ) );
                    while( true )
                    {
                        {
                            frame_guard.setLineNumber( 101 );
                            PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                            if ( _tmp_unpack_2 == NULL )
                            {
                                break;
                            }
                            PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                            _python_var_data.assign0( _python_tmp_iter_value.asObject() );
                        }
                        frame_guard.setLineNumber( 102 );
                        {
                            PyObjectTempKeeper1 call1;
                            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_data.asObject() ) ) );
                        }

                       CONSIDER_THREADING();
                    }
                }
                frame_guard.setLineNumber( 103 );
                DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_finish_content ) ).asObject() ) );
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
        frame_guard.setLineNumber( 105 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_close ) ).asObject() ) );
        _caught_1.rethrow();
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_data.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_3_finish_response_of_class_3_ServerHandler_of_module_django__core__servers__basehttp )
        {
           Py_DECREF( frame_function_3_finish_response_of_class_3_ServerHandler_of_module_django__core__servers__basehttp );
           frame_function_3_finish_response_of_class_3_ServerHandler_of_module_django__core__servers__basehttp = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_3_finish_response_of_class_3_ServerHandler_of_module_django__core__servers__basehttp( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "finish_response() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "finish_response() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "finish_response() got multiple values for keyword argument 'self'" );
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
                   "finish_response() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "finish_response() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "finish_response() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "finish_response() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "finish_response() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "finish_response() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "finish_response() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "finish_response() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "finish_response() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "finish_response() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "finish_response() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "finish_response() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "finish_response() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "finish_response() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_3_finish_response_of_class_3_ServerHandler_of_module_django__core__servers__basehttp( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3_finish_response_of_class_3_ServerHandler_of_module_django__core__servers__basehttp( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3_finish_response_of_class_3_ServerHandler_of_module_django__core__servers__basehttp( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_finish_response_of_class_3_ServerHandler_of_module_django__core__servers__basehttp( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_4_WSGIServer_of_module_django__core__servers__basehttp(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var_request_queue_size( _python_str_plain_request_queue_size );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_server_bind( _python_str_plain_server_bind );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_basehttp );
    _python_var___doc__.assign0( _python_unicode_digest_8154b61b235632b8b06f9fdf77852b21 );
    _python_var_request_queue_size.assign0( _python_int_pos_10 );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_4_WSGIServer_of_module_django__core__servers__basehttp(  ) );
    _python_var_server_bind.assign1( MAKE_FUNCTION_function_2_server_bind_of_class_4_WSGIServer_of_module_django__core__servers__basehttp(  ) );
    return _python_var_server_bind.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var_request_queue_size.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_4_WSGIServer_of_module_django__core__servers__basehttp( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_4_WSGIServer_of_module_django__core__servers__basehttp = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_4_WSGIServer_of_module_django__core__servers__basehttp ) )
    {
        if ( frame_function_1___init___of_class_4_WSGIServer_of_module_django__core__servers__basehttp )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_4_WSGIServer_of_module_django__core__servers__basehttp" );
#endif
            Py_DECREF( frame_function_1___init___of_class_4_WSGIServer_of_module_django__core__servers__basehttp );
        }

        frame_function_1___init___of_class_4_WSGIServer_of_module_django__core__servers__basehttp = MAKE_FRAME( _codeobj_08477c21d5bc2509150fec913e89ed55, _module_django__core__servers__basehttp );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_4_WSGIServer_of_module_django__core__servers__basehttp );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_4_WSGIServer_of_module_django__core__servers__basehttp ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 114 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_kwargs.asObject(), _python_str_plain_pop ) ).asObject(), _python_unicode_plain_ipv6, Py_False ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 115 );
            {
                    PyObjectTemporary tmp_identifier( LOOKUP_ATTRIBUTE( _mvar_django__core__servers__basehttp_socket.asObject0(), _python_str_plain_AF_INET6 ) );
                    SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_address_family );
            }
        }
        frame_guard.setLineNumber( 116 );
        {
            PyObjectTempKeeper1 call_tmp3;
            PyObjectTempKeeper0 call_tmp4;
            PyObjectTempKeeper0 super1;
            DECREASE_REFCOUNT( ( call_tmp3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super1.assign( _mvar_django__core__servers__basehttp_WSGIServer.asObject0() ), BUILTIN_SUPER( super1.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain___init__ ) ), call_tmp4.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp3.asObject(), call_tmp4.asObject(), _python_var_kwargs.asObject1() ) ) );
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

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_4_WSGIServer_of_module_django__core__servers__basehttp )
        {
           Py_DECREF( frame_function_1___init___of_class_4_WSGIServer_of_module_django__core__servers__basehttp );
           frame_function_1___init___of_class_4_WSGIServer_of_module_django__core__servers__basehttp = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_4_WSGIServer_of_module_django__core__servers__basehttp( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_1___init___of_class_4_WSGIServer_of_module_django__core__servers__basehttp( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_4_WSGIServer_of_module_django__core__servers__basehttp( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_1___init___of_class_4_WSGIServer_of_module_django__core__servers__basehttp( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_4_WSGIServer_of_module_django__core__servers__basehttp( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_server_bind_of_class_4_WSGIServer_of_module_django__core__servers__basehttp( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_e( _python_str_plain_e );

    // Actual function code.
    static PyFrameObject *frame_function_2_server_bind_of_class_4_WSGIServer_of_module_django__core__servers__basehttp = NULL;

    if ( isFrameUnusable( frame_function_2_server_bind_of_class_4_WSGIServer_of_module_django__core__servers__basehttp ) )
    {
        if ( frame_function_2_server_bind_of_class_4_WSGIServer_of_module_django__core__servers__basehttp )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_server_bind_of_class_4_WSGIServer_of_module_django__core__servers__basehttp" );
#endif
            Py_DECREF( frame_function_2_server_bind_of_class_4_WSGIServer_of_module_django__core__servers__basehttp );
        }

        frame_function_2_server_bind_of_class_4_WSGIServer_of_module_django__core__servers__basehttp = MAKE_FRAME( _codeobj_8b0b01a99b3e3bb6b6e6e14caa3f8597, _module_django__core__servers__basehttp );
    }

    FrameGuard frame_guard( frame_function_2_server_bind_of_class_4_WSGIServer_of_module_django__core__servers__basehttp );
    try
    {
        assert( Py_REFCNT( frame_function_2_server_bind_of_class_4_WSGIServer_of_module_django__core__servers__basehttp ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 120 );
        try
        {
            frame_guard.setLineNumber( 121 );
            {
                PyObjectTempKeeper0 super7;
                DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super7.assign( _mvar_django__core__servers__basehttp_WSGIServer.asObject0() ), BUILTIN_SUPER( super7.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain_server_bind ) ).asObject() ) );
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

            if ( _exception.matches( PyExc_Exception ) )
            {
                frame_guard.detachFrame();
                _python_var_e.assign0( _exception.getValue() );
                frame_guard.setLineNumber( 123 );
                {
                    PyObjectTempKeeper0 call1;
                    PyObjectTempKeeper1 call3;
                    PyObjectTempKeeper0 call4;
                    PyObjectTempKeeper1 call5;
                    DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__servers__basehttp_six.asObject0(), _python_str_plain_reraise ) ), call4.assign( _mvar_django__core__servers__basehttp_WSGIServerException.asObject0() ), call5.assign( ( call1.assign( _mvar_django__core__servers__basehttp_WSGIServerException.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_e.asObject() ) ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), call4.asObject0(), call5.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__servers__basehttp_sys.asObject0(), _python_str_plain_exc_info ) ).asObject() ) ).asObject(), _python_int_pos_2, 2 ) ).asObject() ) ) );
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
        frame_guard.setLineNumber( 124 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_setup_environ ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_e.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_2_server_bind_of_class_4_WSGIServer_of_module_django__core__servers__basehttp )
        {
           Py_DECREF( frame_function_2_server_bind_of_class_4_WSGIServer_of_module_django__core__servers__basehttp );
           frame_function_2_server_bind_of_class_4_WSGIServer_of_module_django__core__servers__basehttp = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2_server_bind_of_class_4_WSGIServer_of_module_django__core__servers__basehttp( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "server_bind() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "server_bind() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "server_bind() got multiple values for keyword argument 'self'" );
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
                   "server_bind() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "server_bind() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "server_bind() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "server_bind() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "server_bind() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "server_bind() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "server_bind() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "server_bind() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "server_bind() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "server_bind() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "server_bind() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "server_bind() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "server_bind() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "server_bind() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2_server_bind_of_class_4_WSGIServer_of_module_django__core__servers__basehttp( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2_server_bind_of_class_4_WSGIServer_of_module_django__core__servers__basehttp( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2_server_bind_of_class_4_WSGIServer_of_module_django__core__servers__basehttp( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_server_bind_of_class_4_WSGIServer_of_module_django__core__servers__basehttp( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_address_string( _python_str_plain_address_string );
    PyObjectLocalVariable _python_var_log_message( _python_str_plain_log_message );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_basehttp );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp(  ) );
    _python_var_address_string.assign1( MAKE_FUNCTION_function_2_address_string_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp(  ) );
    _python_var_log_message.assign1( MAKE_FUNCTION_function_3_log_message_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp(  ) );
    return _python_var_log_message.updateLocalsDict( _python_var_address_string.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) );
}


static PyObject *impl_function_1___init___of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );
    PyObjectLocalVariable _python_var_settings( _python_str_plain_settings );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp ) )
    {
        if ( frame_function_1___init___of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp" );
#endif
            Py_DECREF( frame_function_1___init___of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp );
        }

        frame_function_1___init___of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp = MAKE_FRAME( _codeobj_64f9fff5fb9a3b1b4ac546312f1472a2, _module_django__core__servers__basehttp );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 130 );
        _python_var_settings.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__core__servers__basehttp)->md_dict, PyObjectTemporary( _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_settings.updateLocalsDict( PyDict_New() ) ) ) ) ).asObject(), _python_list_str_plain_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_settings ) );
        frame_guard.setLineNumber( 131 );
        {
            PyObjectTempKeeper0 call1;
            {
                PyObjectTemporary tmp_identifier( ( call1.assign( _mvar_django__core__servers__basehttp_urljoin.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_settings.asObject(), _python_str_plain_STATIC_URL ) ).asObject(), _python_unicode_digest_b56013ff87e0b8a9fb902ef4a07a6990 ) ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_admin_static_prefix );
        }
        }
        frame_guard.setLineNumber( 134 );
        SET_ATTRIBUTE( _python_unicode_empty, _python_var_self.asObject(), _python_str_plain_path );
        frame_guard.setLineNumber( 135 );
        {
                PyObjectTemporary tmp_identifier( CALL_FUNCTION_NO_ARGS( _mvar_django__core__servers__basehttp_color_style.asObject0() ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_style );
        }
        frame_guard.setLineNumber( 136 );
        {
            PyObjectTempKeeper1 call_tmp6;
            PyObjectTempKeeper0 call_tmp7;
            PyObjectTempKeeper0 super4;
            DECREASE_REFCOUNT( ( call_tmp6.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super4.assign( _mvar_django__core__servers__basehttp_WSGIRequestHandler.asObject0() ), BUILTIN_SUPER( super4.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain___init__ ) ), call_tmp7.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp6.asObject(), call_tmp7.asObject(), _python_var_kwargs.asObject1() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_settings.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp )
        {
           Py_DECREF( frame_function_1___init___of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp );
           frame_function_1___init___of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_1___init___of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_1___init___of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_address_string_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_2_address_string_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp = NULL;

    if ( isFrameUnusable( frame_function_2_address_string_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp ) )
    {
        if ( frame_function_2_address_string_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_address_string_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp" );
#endif
            Py_DECREF( frame_function_2_address_string_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp );
        }

        frame_function_2_address_string_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp = MAKE_FRAME( _codeobj_571f632e63262f3fba6d7d7eac03a821, _module_django__core__servers__basehttp );
    }

    FrameGuard frame_guard( frame_function_2_address_string_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp );
    try
    {
        assert( Py_REFCNT( frame_function_2_address_string_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 140 );
        return LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_client_address ) ).asObject(), _python_int_0, 0 );
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

        if ( frame_guard.getFrame0() == frame_function_2_address_string_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp )
        {
           Py_DECREF( frame_function_2_address_string_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp );
           frame_function_2_address_string_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_address_string_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "address_string() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "address_string() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "address_string() got multiple values for keyword argument 'self'" );
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
                   "address_string() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "address_string() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "address_string() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "address_string() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "address_string() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "address_string() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "address_string() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "address_string() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "address_string() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "address_string() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "address_string() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "address_string() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "address_string() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "address_string() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2_address_string_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2_address_string_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2_address_string_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_address_string_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_log_message_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_format, PyObject *_python_par_args )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_format( _python_str_plain_format, _python_par_format );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalVariable _python_var_msg( _python_str_plain_msg );

    // Actual function code.
    static PyFrameObject *frame_function_3_log_message_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp = NULL;

    if ( isFrameUnusable( frame_function_3_log_message_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp ) )
    {
        if ( frame_function_3_log_message_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_log_message_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp" );
#endif
            Py_DECREF( frame_function_3_log_message_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp );
        }

        frame_function_3_log_message_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp = MAKE_FRAME( _codeobj_06836e91a4829377b98751d7d953ee92, _module_django__core__servers__basehttp );
    }

    FrameGuard frame_guard( frame_function_3_log_message_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp );
    try
    {
        assert( Py_REFCNT( frame_function_3_log_message_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 144 );
        {
            PyObjectTempKeeper1 call1;
            if ( ( CHECK_IF_TRUE( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_path ) ).asObject(), _python_str_plain_startswith ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_admin_static_prefix ) ).asObject() ) ) ).asObject() ) || RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_path ) ).asObject(), _python_unicode_digest_35a63c8a85b1279a0f991ce8828fb9d9 ) ) )
        {
            return INCREASE_REFCOUNT( Py_None );
        }
        }
        frame_guard.setLineNumber( 148 );
        {
            PyObjectTempKeeper1 make_tuple5;
            PyObjectTempKeeper0 op3;
            _python_var_msg.assign1( BINARY_OPERATION_REMAINDER( _python_unicode_digest_190bf1232fcdd9a4998e53cfed858392, PyObjectTemporary( ( make_tuple5.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_log_date_time_string ) ).asObject() ) ), MAKE_TUPLE2( make_tuple5.asObject0(), PyObjectTemporary( ( op3.assign( _python_var_format.asObject() ), BINARY_OPERATION_REMAINDER( op3.asObject0(), _python_var_args.asObject() ) ) ).asObject() ) ) ).asObject() ) );
        }
        frame_guard.setLineNumber( 151 );
        if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_args.asObject(), _python_int_pos_1, 1 ) ).asObject(), _python_int_0, 0 ) ).asObject(), _python_unicode_plain_2 ) )
        {
            frame_guard.setLineNumber( 153 );
            {
                PyObjectTempKeeper1 call7;
                _python_var_msg.assign1( ( call7.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_style ) ).asObject(), _python_str_plain_HTTP_SUCCESS ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _python_var_msg.asObject() ) ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 154 );
            if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_args.asObject(), _python_int_pos_1, 1 ) ).asObject(), _python_int_0, 0 ) ).asObject(), _python_unicode_plain_1 ) )
            {
                frame_guard.setLineNumber( 155 );
                {
                    PyObjectTempKeeper1 call9;
                    _python_var_msg.assign1( ( call9.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_style ) ).asObject(), _python_str_plain_HTTP_INFO ) ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_var_msg.asObject() ) ) );
                }
            }
            else
            {
                frame_guard.setLineNumber( 156 );
                if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_args.asObject(), _python_int_pos_1, 1 ) ).asObject(), _python_unicode_plain_304 ) )
                {
                    frame_guard.setLineNumber( 157 );
                    {
                        PyObjectTempKeeper1 call11;
                        _python_var_msg.assign1( ( call11.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_style ) ).asObject(), _python_str_plain_HTTP_NOT_MODIFIED ) ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), _python_var_msg.asObject() ) ) );
                    }
                }
                else
                {
                    frame_guard.setLineNumber( 158 );
                    if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_args.asObject(), _python_int_pos_1, 1 ) ).asObject(), _python_int_0, 0 ) ).asObject(), _python_unicode_plain_3 ) )
                    {
                        frame_guard.setLineNumber( 159 );
                        {
                            PyObjectTempKeeper1 call13;
                            _python_var_msg.assign1( ( call13.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_style ) ).asObject(), _python_str_plain_HTTP_REDIRECT ) ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), _python_var_msg.asObject() ) ) );
                        }
                    }
                    else
                    {
                        frame_guard.setLineNumber( 160 );
                        if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_args.asObject(), _python_int_pos_1, 1 ) ).asObject(), _python_unicode_plain_404 ) )
                        {
                            frame_guard.setLineNumber( 161 );
                            {
                                PyObjectTempKeeper1 call15;
                                _python_var_msg.assign1( ( call15.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_style ) ).asObject(), _python_str_plain_HTTP_NOT_FOUND ) ), CALL_FUNCTION_WITH_ARGS( call15.asObject0(), _python_var_msg.asObject() ) ) );
                            }
                        }
                        else
                        {
                            frame_guard.setLineNumber( 162 );
                            if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_args.asObject(), _python_int_pos_1, 1 ) ).asObject(), _python_int_0, 0 ) ).asObject(), _python_unicode_plain_4 ) )
                            {
                                frame_guard.setLineNumber( 163 );
                                {
                                    PyObjectTempKeeper1 call17;
                                    _python_var_msg.assign1( ( call17.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_style ) ).asObject(), _python_str_plain_HTTP_BAD_REQUEST ) ), CALL_FUNCTION_WITH_ARGS( call17.asObject0(), _python_var_msg.asObject() ) ) );
                                }
                            }
                            else
                            {
                                frame_guard.setLineNumber( 166 );
                                {
                                    PyObjectTempKeeper1 call19;
                                    _python_var_msg.assign1( ( call19.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_style ) ).asObject(), _python_str_plain_HTTP_SERVER_ERROR ) ), CALL_FUNCTION_WITH_ARGS( call19.asObject0(), _python_var_msg.asObject() ) ) );
                                }
                            }
                        }
                    }
                }
            }
        }
        frame_guard.setLineNumber( 168 );
        {
            PyObjectTempKeeper1 call21;
            DECREASE_REFCOUNT( ( call21.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__servers__basehttp_sys.asObject0(), _python_str_plain_stderr ) ).asObject(), _python_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS( call21.asObject0(), _python_var_msg.asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_args.updateLocalsDict( _python_var_format.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_msg.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_log_message_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp )
        {
           Py_DECREF( frame_function_3_log_message_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp );
           frame_function_3_log_message_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_3_log_message_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_format = NULL;
    PyObject *_python_par_args = NULL;
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
                PyErr_Format( PyExc_TypeError, "log_message() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "log_message() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_format == key )
            {
                if (unlikely( _python_par_format ))
                {
                    PyErr_Format( PyExc_TypeError, "log_message() got multiple values for keyword argument 'format'" );
                    goto error_exit;
                }

                _python_par_format = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "log_message() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_format, key ) )
            {
                if (unlikely( _python_par_format ))
                {
                    PyErr_Format( PyExc_TypeError, "log_message() got multiple values for keyword argument 'format'" );
                    goto error_exit;
                }

                _python_par_format = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "log_message() got an unexpected keyword argument '%s'",
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

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "log_message() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "log_message() takes at least %d non-keyword arguments (%zd given)", 2, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "log_message() takes at least %d arguments (%zd given)", 2, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "log_message() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_format != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "log_message() got multiple values for keyword argument 'format'" );
             goto error_exit;
         }

        _python_par_format = INCREASE_REFCOUNT( args[ 1 ] );
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


    return impl_function_3_log_message_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp( self, _python_par_self, _python_par_format, _python_par_args );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_format );
    Py_XDECREF( _python_par_args );

    return NULL;
}

static PyObject *dparse_function_3_log_message_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_3_log_message_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), MAKE_TUPLE( &args[ 2 ], size > 2 ? size-2 : 0 ) );
    }
    else
    {
        PyObject *result = fparse_function_3_log_message_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_run_of_module_django__core__servers__basehttp( Nuitka_FunctionObject *self, PyObject *_python_par_addr, PyObject *_python_par_port, PyObject *_python_par_wsgi_handler, PyObject *_python_par_ipv6, PyObject *_python_par_threading )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_addr( _python_str_plain_addr, _python_par_addr );
    PyObjectLocalParameterVariableNoDel _python_var_port( _python_str_plain_port, _python_par_port );
    PyObjectLocalParameterVariableNoDel _python_var_wsgi_handler( _python_str_plain_wsgi_handler, _python_par_wsgi_handler );
    PyObjectLocalParameterVariableNoDel _python_var_ipv6( _python_str_plain_ipv6, _python_par_ipv6 );
    PyObjectLocalParameterVariableNoDel _python_var_threading( _python_str_plain_threading, _python_par_threading );
    PyObjectLocalVariable _python_var_server_address( _python_str_plain_server_address );
    PyObjectLocalVariable _python_var_httpd_cls( _python_str_plain_httpd_cls );
    PyObjectLocalVariable _python_var_httpd( _python_str_plain_httpd );

    // Actual function code.
    static PyFrameObject *frame_function_6_run_of_module_django__core__servers__basehttp = NULL;

    if ( isFrameUnusable( frame_function_6_run_of_module_django__core__servers__basehttp ) )
    {
        if ( frame_function_6_run_of_module_django__core__servers__basehttp )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6_run_of_module_django__core__servers__basehttp" );
#endif
            Py_DECREF( frame_function_6_run_of_module_django__core__servers__basehttp );
        }

        frame_function_6_run_of_module_django__core__servers__basehttp = MAKE_FRAME( _codeobj_7fd6c94a7c66c3f5dfd13ec18720ba2f, _module_django__core__servers__basehttp );
    }

    FrameGuard frame_guard( frame_function_6_run_of_module_django__core__servers__basehttp );
    try
    {
        assert( Py_REFCNT( frame_function_6_run_of_module_django__core__servers__basehttp ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 172 );
        {
            PyObjectTempKeeper0 make_tuple1;
            _python_var_server_address.assign1( ( make_tuple1.assign( _python_var_addr.asObject() ), MAKE_TUPLE2( make_tuple1.asObject0(), _python_var_port.asObject() ) ) );
        }
        frame_guard.setLineNumber( 173 );
        if ( CHECK_IF_TRUE( _python_var_threading.asObject() ) )
        {
            frame_guard.setLineNumber( 174 );
            {
                PyObjectTempKeeper1 make_tuple3;
                _python_var_httpd_cls.assign1( BUILTIN_TYPE3( _python_str_digest_0bed9571c4e1bb1a804ee0b60fd8af70, _python_str_plain_WSGIServer, PyObjectTemporary( ( make_tuple3.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__servers__basehttp_socketserver.asObject0(), _python_str_plain_ThreadingMixIn ) ), MAKE_TUPLE2( make_tuple3.asObject0(), _mvar_django__core__servers__basehttp_WSGIServer.asObject0() ) ) ).asObject(), PyObjectTemporary( PyDict_New() ).asObject() ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 176 );
            _python_var_httpd_cls.assign0( _mvar_django__core__servers__basehttp_WSGIServer.asObject0() );
        }
        frame_guard.setLineNumber( 177 );
        {
            PyObjectTempKeeper0 call7;
            PyObjectTempKeeper1 call8;
            PyObjectTempKeeper0 make_tuple5;
            _python_var_httpd.assign1( ( call7.assign( _python_var_httpd_cls.asObject() ), call8.assign( ( make_tuple5.assign( _python_var_server_address.asObject() ), MAKE_TUPLE2( make_tuple5.asObject0(), _mvar_django__core__servers__basehttp_WSGIRequestHandler.asObject0() ) ) ), CALL_FUNCTION( call7.asObject0(), call8.asObject0(), PyObjectTemporary( MAKE_DICT1( _python_var_ipv6.asObject(), _python_str_plain_ipv6 ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 178 );
        {
            PyObjectTempKeeper1 call10;
            DECREASE_REFCOUNT( ( call10.assign( LOOKUP_ATTRIBUTE( _python_var_httpd.asObject(), _python_str_plain_set_app ) ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), _python_var_wsgi_handler.asObject() ) ) );
        }
        frame_guard.setLineNumber( 179 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_httpd.asObject(), _python_str_plain_serve_forever ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_threading.updateLocalsDict( _python_var_ipv6.updateLocalsDict( _python_var_wsgi_handler.updateLocalsDict( _python_var_port.updateLocalsDict( _python_var_addr.updateLocalsDict( _python_var_httpd.updateLocalsDict( _python_var_httpd_cls.updateLocalsDict( _python_var_server_address.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_6_run_of_module_django__core__servers__basehttp )
        {
           Py_DECREF( frame_function_6_run_of_module_django__core__servers__basehttp );
           frame_function_6_run_of_module_django__core__servers__basehttp = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_6_run_of_module_django__core__servers__basehttp( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_addr = NULL;
    PyObject *_python_par_port = NULL;
    PyObject *_python_par_wsgi_handler = NULL;
    PyObject *_python_par_ipv6 = NULL;
    PyObject *_python_par_threading = NULL;
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
                PyErr_Format( PyExc_TypeError, "run() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_addr == key )
            {
                if (unlikely( _python_par_addr ))
                {
                    PyErr_Format( PyExc_TypeError, "run() got multiple values for keyword argument 'addr'" );
                    goto error_exit;
                }

                _python_par_addr = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_port == key )
            {
                if (unlikely( _python_par_port ))
                {
                    PyErr_Format( PyExc_TypeError, "run() got multiple values for keyword argument 'port'" );
                    goto error_exit;
                }

                _python_par_port = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_wsgi_handler == key )
            {
                if (unlikely( _python_par_wsgi_handler ))
                {
                    PyErr_Format( PyExc_TypeError, "run() got multiple values for keyword argument 'wsgi_handler'" );
                    goto error_exit;
                }

                _python_par_wsgi_handler = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_ipv6 == key )
            {
                if (unlikely( _python_par_ipv6 ))
                {
                    PyErr_Format( PyExc_TypeError, "run() got multiple values for keyword argument 'ipv6'" );
                    goto error_exit;
                }

                _python_par_ipv6 = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_threading == key )
            {
                if (unlikely( _python_par_threading ))
                {
                    PyErr_Format( PyExc_TypeError, "run() got multiple values for keyword argument 'threading'" );
                    goto error_exit;
                }

                _python_par_threading = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_addr, key ) )
            {
                if (unlikely( _python_par_addr ))
                {
                    PyErr_Format( PyExc_TypeError, "run() got multiple values for keyword argument 'addr'" );
                    goto error_exit;
                }

                _python_par_addr = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_port, key ) )
            {
                if (unlikely( _python_par_port ))
                {
                    PyErr_Format( PyExc_TypeError, "run() got multiple values for keyword argument 'port'" );
                    goto error_exit;
                }

                _python_par_port = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_wsgi_handler, key ) )
            {
                if (unlikely( _python_par_wsgi_handler ))
                {
                    PyErr_Format( PyExc_TypeError, "run() got multiple values for keyword argument 'wsgi_handler'" );
                    goto error_exit;
                }

                _python_par_wsgi_handler = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_ipv6, key ) )
            {
                if (unlikely( _python_par_ipv6 ))
                {
                    PyErr_Format( PyExc_TypeError, "run() got multiple values for keyword argument 'ipv6'" );
                    goto error_exit;
                }

                _python_par_ipv6 = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_threading, key ) )
            {
                if (unlikely( _python_par_threading ))
                {
                    PyErr_Format( PyExc_TypeError, "run() got multiple values for keyword argument 'threading'" );
                    goto error_exit;
                }

                _python_par_threading = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "run() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "run() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "run() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "run() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "run() takes exactly %d arguments (%zd given)", 5, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 5 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "run() takes exactly %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "run() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
#else
            if ( 5 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "run() takes %d positional arguments but %zd were given", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "run() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 3 ))
    {
        if ( 5 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "run() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "run() takes exactly %d non-keyword arguments (%zd given)", 5, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 5 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "run() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "run() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 5 ? args_given : 5;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_addr != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "run() got multiple values for keyword argument 'addr'" );
             goto error_exit;
         }

        _python_par_addr = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_port != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "run() got multiple values for keyword argument 'port'" );
             goto error_exit;
         }

        _python_par_port = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_wsgi_handler != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "run() got multiple values for keyword argument 'wsgi_handler'" );
             goto error_exit;
         }

        _python_par_wsgi_handler = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_ipv6 != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "run() got multiple values for keyword argument 'ipv6'" );
             goto error_exit;
         }

        _python_par_ipv6 = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_threading != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "run() got multiple values for keyword argument 'threading'" );
             goto error_exit;
         }

        _python_par_threading = INCREASE_REFCOUNT( args[ 4 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_ipv6 == NULL )
    {
        _python_par_ipv6 = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_ipv6 );
    }
    if ( _python_par_threading == NULL )
    {
        _python_par_threading = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_threading );
    }


    return impl_function_6_run_of_module_django__core__servers__basehttp( self, _python_par_addr, _python_par_port, _python_par_wsgi_handler, _python_par_ipv6, _python_par_threading );

error_exit:;

    Py_XDECREF( _python_par_addr );
    Py_XDECREF( _python_par_port );
    Py_XDECREF( _python_par_wsgi_handler );
    Py_XDECREF( _python_par_ipv6 );
    Py_XDECREF( _python_par_threading );

    return NULL;
}

static PyObject *dparse_function_6_run_of_module_django__core__servers__basehttp( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5)
    {
        return impl_function_6_run_of_module_django__core__servers__basehttp( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_run_of_module_django__core__servers__basehttp( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1___init___of_class_4_WSGIServer_of_module_django__core__servers__basehttp(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_4_WSGIServer_of_module_django__core__servers__basehttp,
        dparse_function_1___init___of_class_4_WSGIServer_of_module_django__core__servers__basehttp,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_08477c21d5bc2509150fec913e89ed55,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__servers__basehttp,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp,
        dparse_function_1___init___of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_64f9fff5fb9a3b1b4ac546312f1472a2,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__servers__basehttp,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_get_internal_wsgi_application_of_module_django__core__servers__basehttp(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_get_internal_wsgi_application_of_module_django__core__servers__basehttp,
        dparse_function_1_get_internal_wsgi_application_of_module_django__core__servers__basehttp,
        _python_str_plain_get_internal_wsgi_application,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_4bf32be4ba3b18126842f6e50c9b5cf1,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__servers__basehttp,
        _python_unicode_digest_741d8efde042b2921ef9ea028a7195ff
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp,
        dparse_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp,
        _python_str_plain_write,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_228abc2bb0ed882650307f9764a60562,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__servers__basehttp,
        _python_unicode_digest_fccd8df6340f74cc1a21b2f1773059f1
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_address_string_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_address_string_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp,
        dparse_function_2_address_string_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp,
        _python_str_plain_address_string,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_571f632e63262f3fba6d7d7eac03a821,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__servers__basehttp,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_error_output_of_class_3_ServerHandler_of_module_django__core__servers__basehttp(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_error_output_of_class_3_ServerHandler_of_module_django__core__servers__basehttp,
        dparse_function_2_error_output_of_class_3_ServerHandler_of_module_django__core__servers__basehttp,
        _python_str_plain_error_output,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_c9fc8a1f368e84921e3f4e1c31174994,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__servers__basehttp,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_server_bind_of_class_4_WSGIServer_of_module_django__core__servers__basehttp(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_server_bind_of_class_4_WSGIServer_of_module_django__core__servers__basehttp,
        dparse_function_2_server_bind_of_class_4_WSGIServer_of_module_django__core__servers__basehttp,
        _python_str_plain_server_bind,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_8b0b01a99b3e3bb6b6e6e14caa3f8597,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__servers__basehttp,
        _python_unicode_digest_4475348718687e0343c2b86100e25734
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_finish_response_of_class_3_ServerHandler_of_module_django__core__servers__basehttp(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_finish_response_of_class_3_ServerHandler_of_module_django__core__servers__basehttp,
        dparse_function_3_finish_response_of_class_3_ServerHandler_of_module_django__core__servers__basehttp,
        _python_str_plain_finish_response,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_5985953b6749fc326352e8360de8b4ec,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__servers__basehttp,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_log_message_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_log_message_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp,
        dparse_function_3_log_message_of_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp,
        _python_str_plain_log_message,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_06836e91a4829377b98751d7d953ee92,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__servers__basehttp,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_run_of_module_django__core__servers__basehttp(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_run_of_module_django__core__servers__basehttp,
        dparse_function_6_run_of_module_django__core__servers__basehttp,
        _python_str_plain_run,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_7fd6c94a7c66c3f5dfd13ec18720ba2f,
        INCREASE_REFCOUNT( _python_tuple_false_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__servers__basehttp,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp( PyObjectSharedLocalVariable &python_closure_data )
{
    struct _context_lambda_1_lambda_of_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp_t *_python_context = new _context_lambda_1_lambda_of_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp_t;

    // Copy the parameter default values and closure values over.
    _python_context->python_closure_data.shareWith( python_closure_data );

    PyObject *result = Nuitka_Function_New(
        fparse_lambda_1_lambda_of_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp,
        dparse_lambda_1_lambda_of_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp,
        _python_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_baeb0083123184ee0ce8698fa0903d1f,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__servers__basehttp,
        Py_None,
        _python_context,
        _context_lambda_1_lambda_of_function_1_write_of_class_3_ServerHandler_of_module_django__core__servers__basehttp_destructor
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.core.servers.basehttp",   /* m_name */
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

MOD_INIT_DECL( django__core__servers__basehttp )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__core__servers__basehttp );
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

    // puts( "in initdjango__core__servers__basehttp" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__core__servers__basehttp = Py_InitModule4(
        "django.core.servers.basehttp",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__core__servers__basehttp = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__core__servers__basehttp = (PyDictObject *)((PyModuleObject *)_module_django__core__servers__basehttp)->md_dict;

    assertObject( _module_django__core__servers__basehttp );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_0bed9571c4e1bb1a804ee0b60fd8af70, _module_django__core__servers__basehttp );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__core__servers__basehttp );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__core__servers__basehttp != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__core__servers__basehttp, (Nuitka_StringObject *)_python_str_plain___doc__, _python_unicode_digest_0f78403f03ceb71e042c38af11fe7ccf );
    UPDATE_STRING_DICT0( _moduledict_django__core__servers__basehttp, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_d1b0e855ee860aa287a15eb65264a7f5 );
    PyFrameObject *frame_module_django__core__servers__basehttp = MAKE_FRAME( _codeobj_74f8fadd3ddd3fc84726cd4709c13439, _module_django__core__servers__basehttp );

    FrameGuard frame_guard( frame_module_django__core__servers__basehttp );
    try
    {
        assert( Py_REFCNT( frame_module_django__core__servers__basehttp ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 10 );
        UPDATE_STRING_DICT1( _moduledict_django__core__servers__basehttp, (Nuitka_StringObject *)_python_str_plain_unicode_literals, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain___future__, ((PyModuleObject *)_module_django__core__servers__basehttp)->md_dict, ((PyModuleObject *)_module_django__core__servers__basehttp)->md_dict, _python_list_str_plain_unicode_literals_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_unicode_literals ) );
        frame_guard.setLineNumber( 12 );
        UPDATE_STRING_DICT1( _moduledict_django__core__servers__basehttp, (Nuitka_StringObject *)_python_str_plain_BytesIO, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_io, ((PyModuleObject *)_module_django__core__servers__basehttp)->md_dict, ((PyModuleObject *)_module_django__core__servers__basehttp)->md_dict, _python_list_str_plain_BytesIO_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_BytesIO ) );
        frame_guard.setLineNumber( 13 );
        UPDATE_STRING_DICT1( _moduledict_django__core__servers__basehttp, (Nuitka_StringObject *)_python_str_plain_socket, IMPORT_MODULE( _python_str_plain_socket, ((PyModuleObject *)_module_django__core__servers__basehttp)->md_dict, ((PyModuleObject *)_module_django__core__servers__basehttp)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 14 );
        UPDATE_STRING_DICT1( _moduledict_django__core__servers__basehttp, (Nuitka_StringObject *)_python_str_plain_sys, IMPORT_MODULE( _python_str_plain_sys, ((PyModuleObject *)_module_django__core__servers__basehttp)->md_dict, ((PyModuleObject *)_module_django__core__servers__basehttp)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 15 );
        UPDATE_STRING_DICT1( _moduledict_django__core__servers__basehttp, (Nuitka_StringObject *)_python_str_plain_traceback, IMPORT_MODULE( _python_str_plain_traceback, ((PyModuleObject *)_module_django__core__servers__basehttp)->md_dict, ((PyModuleObject *)_module_django__core__servers__basehttp)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 16 );
        try
        {
            frame_guard.setLineNumber( 17 );
            UPDATE_STRING_DICT1( _moduledict_django__core__servers__basehttp, (Nuitka_StringObject *)_python_str_plain_urljoin, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_16d628fa9b79bd53ede39389589a2bbf, ((PyModuleObject *)_module_django__core__servers__basehttp)->md_dict, ((PyModuleObject *)_module_django__core__servers__basehttp)->md_dict, _python_list_str_plain_urljoin_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_urljoin ) );
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
                frame_guard.setLineNumber( 19 );
                UPDATE_STRING_DICT1( _moduledict_django__core__servers__basehttp, (Nuitka_StringObject *)_python_str_plain_urljoin, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_urlparse, ((PyModuleObject *)_module_django__core__servers__basehttp)->md_dict, ((PyModuleObject *)_module_django__core__servers__basehttp)->md_dict, _python_list_str_plain_urljoin_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_urljoin ) );
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
        frame_guard.setLineNumber( 20 );
        UPDATE_STRING_DICT1( _moduledict_django__core__servers__basehttp, (Nuitka_StringObject *)_python_str_plain_socketserver, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_91ddc8f1df73e2bf4268fd2741c1c593, ((PyModuleObject *)_module_django__core__servers__basehttp)->md_dict, ((PyModuleObject *)_module_django__core__servers__basehttp)->md_dict, _python_list_str_plain_socketserver_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_socketserver ) );
        frame_guard.setLineNumber( 21 );
        UPDATE_STRING_DICT1( _moduledict_django__core__servers__basehttp, (Nuitka_StringObject *)_python_str_plain_simple_server, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_wsgiref, ((PyModuleObject *)_module_django__core__servers__basehttp)->md_dict, ((PyModuleObject *)_module_django__core__servers__basehttp)->md_dict, _python_list_str_plain_simple_server_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_simple_server ) );
        frame_guard.setLineNumber( 22 );
        UPDATE_STRING_DICT1( _moduledict_django__core__servers__basehttp, (Nuitka_StringObject *)_python_str_plain_FileWrapper, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d14a6fd5b4e5cb0e87ffa0ac92290ffc, ((PyModuleObject *)_module_django__core__servers__basehttp)->md_dict, ((PyModuleObject *)_module_django__core__servers__basehttp)->md_dict, _python_list_str_plain_FileWrapper_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_FileWrapper ) );
        frame_guard.setLineNumber( 24 );
        UPDATE_STRING_DICT1( _moduledict_django__core__servers__basehttp, (Nuitka_StringObject *)_python_str_plain_color_style, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_7788709b924fa7e8af007652f7c24252, ((PyModuleObject *)_module_django__core__servers__basehttp)->md_dict, ((PyModuleObject *)_module_django__core__servers__basehttp)->md_dict, _python_list_str_plain_color_style_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_color_style ) );
        frame_guard.setLineNumber( 25 );
        UPDATE_STRING_DICT1( _moduledict_django__core__servers__basehttp, (Nuitka_StringObject *)_python_str_plain_get_wsgi_application, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_c08dd42bef643b4e923cc7d534465b58, ((PyModuleObject *)_module_django__core__servers__basehttp)->md_dict, ((PyModuleObject *)_module_django__core__servers__basehttp)->md_dict, _python_list_str_plain_get_wsgi_application_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_get_wsgi_application ) );
        frame_guard.setLineNumber( 26 );
        UPDATE_STRING_DICT1( _moduledict_django__core__servers__basehttp, (Nuitka_StringObject *)_python_str_plain_import_by_path, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_03bb9f131d782ff4dbd31e0966379285, ((PyModuleObject *)_module_django__core__servers__basehttp)->md_dict, ((PyModuleObject *)_module_django__core__servers__basehttp)->md_dict, _python_list_str_plain_import_by_path_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_import_by_path ) );
        frame_guard.setLineNumber( 27 );
        UPDATE_STRING_DICT1( _moduledict_django__core__servers__basehttp, (Nuitka_StringObject *)_python_str_plain_six, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__core__servers__basehttp)->md_dict, ((PyModuleObject *)_module_django__core__servers__basehttp)->md_dict, _python_list_str_plain_six_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_six ) );
        UPDATE_STRING_DICT0( _moduledict_django__core__servers__basehttp, (Nuitka_StringObject *)_python_str_plain___all__, _python_tuple_7b6005aae124df2ab3d1a0e017f28702_tuple );
        UPDATE_STRING_DICT0( _moduledict_django__core__servers__basehttp, (Nuitka_StringObject *)_python_str_plain_MAX_SOCKET_CHUNK_SIZE, _python_int_pos_33554432 );
        UPDATE_STRING_DICT1( _moduledict_django__core__servers__basehttp, (Nuitka_StringObject *)_python_str_plain_get_internal_wsgi_application, MAKE_FUNCTION_function_1_get_internal_wsgi_application_of_module_django__core__servers__basehttp(  ) );
        {
            frame_guard.setLineNumber( 64 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( PyExc_Exception ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_2_WSGIServerException_of_module_django__core__servers__basehttp(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__servers__basehttp___metaclass__.isInitialized( false ) ? _mvar_django__core__servers__basehttp___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_WSGIServerException, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__servers__basehttp, (Nuitka_StringObject *)_python_str_plain_WSGIServerException, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 68 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE2( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__servers__basehttp_simple_server.asObject0(), _python_str_plain_ServerHandler ) ).asObject(), LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_3_ServerHandler_of_module_django__core__servers__basehttp(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__servers__basehttp___metaclass__.isInitialized( false ) ? _mvar_django__core__servers__basehttp___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper0 call7;
                _tmp_python_tmp_class = ( call5.assign( _python_tmp_metaclass.asObject() ), call7.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_str_plain_ServerHandler, call7.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__servers__basehttp, (Nuitka_StringObject *)_python_str_plain_ServerHandler, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 108 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE2( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__servers__basehttp_simple_server.asObject0(), _python_str_plain_WSGIServer ) ).asObject(), LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_4_WSGIServer_of_module_django__core__servers__basehttp(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__servers__basehttp___metaclass__.isInitialized( false ) ? _mvar_django__core__servers__basehttp___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call11;
                PyObjectTempKeeper0 call9;
                _tmp_python_tmp_class = ( call9.assign( _python_tmp_metaclass.asObject() ), call11.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_str_plain_WSGIServer, call11.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__servers__basehttp, (Nuitka_StringObject *)_python_str_plain_WSGIServer, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 127 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE2( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__servers__basehttp_simple_server.asObject0(), _python_str_plain_WSGIRequestHandler ) ).asObject(), LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_5_WSGIRequestHandler_of_module_django__core__servers__basehttp(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__servers__basehttp___metaclass__.isInitialized( false ) ? _mvar_django__core__servers__basehttp___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call13;
                PyObjectTempKeeper0 call15;
                _tmp_python_tmp_class = ( call13.assign( _python_tmp_metaclass.asObject() ), call15.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), _python_str_plain_WSGIRequestHandler, call15.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__servers__basehttp, (Nuitka_StringObject *)_python_str_plain_WSGIRequestHandler, _python_tmp_class.asObject() );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__core__servers__basehttp)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__core__servers__basehttp, (Nuitka_StringObject *)_python_str_plain_run, MAKE_FUNCTION_function_6_run_of_module_django__core__servers__basehttp(  ) );

   return MOD_RETURN_VALUE( _module_django__core__servers__basehttp );
}
