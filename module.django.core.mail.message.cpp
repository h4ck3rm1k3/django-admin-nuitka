// Generated code for Python source for module 'django.core.mail.message'
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

// The _module_django__core__mail__message is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__core__mail__message;
PyDictObject *_moduledict_django__core__mail__message;

// The module level variables.
static PyObjectGlobalVariable_django__core__mail__message _mvar_django__core__mail__message_ADDRESS_HEADERS( &_module_django__core__mail__message, &_python_str_plain_ADDRESS_HEADERS );
static PyObjectGlobalVariable_django__core__mail__message _mvar_django__core__mail__message_BadHeaderError( &_module_django__core__mail__message, &_python_str_plain_BadHeaderError );
static PyObjectGlobalVariable_django__core__mail__message _mvar_django__core__mail__message_Charset( &_module_django__core__mail__message, &_python_str_plain_Charset );
static PyObjectGlobalVariable_django__core__mail__message _mvar_django__core__mail__message_DEFAULT_ATTACHMENT_MIME_TYPE( &_module_django__core__mail__message, &_python_str_plain_DEFAULT_ATTACHMENT_MIME_TYPE );
static PyObjectGlobalVariable_django__core__mail__message _mvar_django__core__mail__message_DNS_NAME( &_module_django__core__mail__message, &_python_str_plain_DNS_NAME );
static PyObjectGlobalVariable_django__core__mail__message _mvar_django__core__mail__message_EmailMessage( &_module_django__core__mail__message, &_python_str_plain_EmailMessage );
static PyObjectGlobalVariable_django__core__mail__message _mvar_django__core__mail__message_EmailMultiAlternatives( &_module_django__core__mail__message, &_python_str_plain_EmailMultiAlternatives );
static PyObjectGlobalVariable_django__core__mail__message _mvar_django__core__mail__message_Encoders( &_module_django__core__mail__message, &_python_str_plain_Encoders );
static PyObjectGlobalVariable_django__core__mail__message _mvar_django__core__mail__message_Generator( &_module_django__core__mail__message, &_python_str_plain_Generator );
static PyObjectGlobalVariable_django__core__mail__message _mvar_django__core__mail__message_Header( &_module_django__core__mail__message, &_python_str_plain_Header );
static PyObjectGlobalVariable_django__core__mail__message _mvar_django__core__mail__message_MIMEBase( &_module_django__core__mail__message, &_python_str_plain_MIMEBase );
static PyObjectGlobalVariable_django__core__mail__message _mvar_django__core__mail__message_MIMEMultipart( &_module_django__core__mail__message, &_python_str_plain_MIMEMultipart );
static PyObjectGlobalVariable_django__core__mail__message _mvar_django__core__mail__message_MIMEText( &_module_django__core__mail__message, &_python_str_plain_MIMEText );
static PyObjectGlobalVariable_django__core__mail__message _mvar_django__core__mail__message_SafeMIMEMultipart( &_module_django__core__mail__message, &_python_str_plain_SafeMIMEMultipart );
static PyObjectGlobalVariable_django__core__mail__message _mvar_django__core__mail__message_SafeMIMEText( &_module_django__core__mail__message, &_python_str_plain_SafeMIMEText );
static PyObjectGlobalVariable_django__core__mail__message _mvar_django__core__mail__message___metaclass__( &_module_django__core__mail__message, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__core__mail__message _mvar_django__core__mail__message_forbid_multi_line_headers( &_module_django__core__mail__message, &_python_str_plain_forbid_multi_line_headers );
static PyObjectGlobalVariable_django__core__mail__message _mvar_django__core__mail__message_force_text( &_module_django__core__mail__message, &_python_str_plain_force_text );
static PyObjectGlobalVariable_django__core__mail__message _mvar_django__core__mail__message_formataddr( &_module_django__core__mail__message, &_python_str_plain_formataddr );
static PyObjectGlobalVariable_django__core__mail__message _mvar_django__core__mail__message_formatdate( &_module_django__core__mail__message, &_python_str_plain_formatdate );
static PyObjectGlobalVariable_django__core__mail__message _mvar_django__core__mail__message_getaddresses( &_module_django__core__mail__message, &_python_str_plain_getaddresses );
static PyObjectGlobalVariable_django__core__mail__message _mvar_django__core__mail__message_make_msgid( &_module_django__core__mail__message, &_python_str_plain_make_msgid );
static PyObjectGlobalVariable_django__core__mail__message _mvar_django__core__mail__message_mimetypes( &_module_django__core__mail__message, &_python_str_plain_mimetypes );
static PyObjectGlobalVariable_django__core__mail__message _mvar_django__core__mail__message_os( &_module_django__core__mail__message, &_python_str_plain_os );
static PyObjectGlobalVariable_django__core__mail__message _mvar_django__core__mail__message_parseaddr( &_module_django__core__mail__message, &_python_str_plain_parseaddr );
static PyObjectGlobalVariable_django__core__mail__message _mvar_django__core__mail__message_random( &_module_django__core__mail__message, &_python_str_plain_random );
static PyObjectGlobalVariable_django__core__mail__message _mvar_django__core__mail__message_sanitize_address( &_module_django__core__mail__message, &_python_str_plain_sanitize_address );
static PyObjectGlobalVariable_django__core__mail__message _mvar_django__core__mail__message_settings( &_module_django__core__mail__message, &_python_str_plain_settings );
static PyObjectGlobalVariable_django__core__mail__message _mvar_django__core__mail__message_six( &_module_django__core__mail__message, &_python_str_plain_six );
static PyObjectGlobalVariable_django__core__mail__message _mvar_django__core__mail__message_sys( &_module_django__core__mail__message, &_python_str_plain_sys );
static PyObjectGlobalVariable_django__core__mail__message _mvar_django__core__mail__message_time( &_module_django__core__mail__message, &_python_str_plain_time );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_BadHeaderError_of_module_django__core__mail__message(  );


NUITKA_LOCAL_MODULE PyObject *impl_genexpr_1_of_function_3_forbid_multi_line_headers_of_module_django__core__mail__message( PyObject *_python_par___iterator, PyObjectSharedLocalVariable &python_closure_encoding );


NUITKA_LOCAL_MODULE PyObject *impl_class_5_SafeMIMEText_of_module_django__core__mail__message(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_6_SafeMIMEMultipart_of_module_django__core__mail__message(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_7_EmailMessage_of_module_django__core__mail__message(  );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_3_message_of_class_7_EmailMessage_of_module_django__core__mail__message( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_key );


NUITKA_LOCAL_MODULE PyObject *impl_class_8_EmailMultiAlternatives_of_module_django__core__mail__message(  );


static PyObject *MAKE_FUNCTION_function_10__create_mime_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message(  );


static PyObject *MAKE_FUNCTION_function_11__create_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_5_SafeMIMEText_of_module_django__core__mail__message(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_7_EmailMessage_of_module_django__core__mail__message(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message(  );


static PyObject *MAKE_FUNCTION_function_2___setitem___of_class_5_SafeMIMEText_of_module_django__core__mail__message(  );


static PyObject *MAKE_FUNCTION_function_2___setitem___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message(  );


static PyObject *MAKE_FUNCTION_function_2_attach_alternative_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message(  );


static PyObject *MAKE_FUNCTION_function_2_get_connection_of_class_7_EmailMessage_of_module_django__core__mail__message(  );


static PyObject *MAKE_FUNCTION_function_2_make_msgid_of_module_django__core__mail__message(  );


static PyObject *MAKE_FUNCTION_function_3__create_message_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message(  );


static PyObject *MAKE_FUNCTION_function_3_as_string_of_class_5_SafeMIMEText_of_module_django__core__mail__message(  );


static PyObject *MAKE_FUNCTION_function_3_as_string_of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message(  );


static PyObject *MAKE_FUNCTION_function_3_forbid_multi_line_headers_of_module_django__core__mail__message(  );


static PyObject *MAKE_FUNCTION_function_3_message_of_class_7_EmailMessage_of_module_django__core__mail__message(  );


static PyObject *MAKE_FUNCTION_function_4__create_alternatives_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message(  );


static PyObject *MAKE_FUNCTION_function_4_recipients_of_class_7_EmailMessage_of_module_django__core__mail__message(  );


static PyObject *MAKE_FUNCTION_function_4_sanitize_address_of_module_django__core__mail__message(  );


static PyObject *MAKE_FUNCTION_function_5_send_of_class_7_EmailMessage_of_module_django__core__mail__message(  );


static PyObject *MAKE_FUNCTION_function_6_attach_of_class_7_EmailMessage_of_module_django__core__mail__message(  );


static PyObject *MAKE_FUNCTION_function_7_attach_file_of_class_7_EmailMessage_of_module_django__core__mail__message(  );


static PyObject *MAKE_FUNCTION_function_8__create_message_of_class_7_EmailMessage_of_module_django__core__mail__message(  );


static PyObject *MAKE_FUNCTION_function_9__create_attachments_of_class_7_EmailMessage_of_module_django__core__mail__message(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_BadHeaderError_of_module_django__core__mail__message(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_message );
    return _python_var___module__.updateLocalsDict( PyDict_New() );
}


static PyObject *impl_function_2_make_msgid_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject *_python_par_idstring )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_idstring( _python_str_plain_idstring, _python_par_idstring );
    PyObjectLocalVariable _python_var_timeval( _python_str_plain_timeval );
    PyObjectLocalVariable _python_var_utcdate( _python_str_plain_utcdate );
    PyObjectLocalVariable _python_var_pid( _python_str_plain_pid );
    PyObjectLocalVariable _python_var_randint( _python_str_plain_randint );
    PyObjectLocalVariable _python_var_idhost( _python_str_plain_idhost );
    PyObjectLocalVariable _python_var_msgid( _python_str_plain_msgid );

    // Actual function code.
    static PyFrameObject *frame_function_2_make_msgid_of_module_django__core__mail__message = NULL;

    if ( isFrameUnusable( frame_function_2_make_msgid_of_module_django__core__mail__message ) )
    {
        if ( frame_function_2_make_msgid_of_module_django__core__mail__message )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_make_msgid_of_module_django__core__mail__message" );
#endif
            Py_DECREF( frame_function_2_make_msgid_of_module_django__core__mail__message );
        }

        frame_function_2_make_msgid_of_module_django__core__mail__message = MAKE_FRAME( _codeobj_28d2ce71e9aa7d964a7ae8f0f28e244c, _module_django__core__mail__message );
    }

    FrameGuard frame_guard( frame_function_2_make_msgid_of_module_django__core__mail__message );
    try
    {
        assert( Py_REFCNT( frame_function_2_make_msgid_of_module_django__core__mail__message ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 46 );
        _python_var_timeval.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__mail__message_time.asObject0(), _python_str_plain_time ) ).asObject() ) );
        frame_guard.setLineNumber( 47 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper1 call3;
            _python_var_utcdate.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__mail__message_time.asObject0(), _python_str_plain_strftime ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_unicode_digest_9749e6c8182f9339ffc2fc75ab27c2be, PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__mail__message_time.asObject0(), _python_str_plain_gmtime ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_timeval.asObject() ) ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 48 );
        try
        {
            frame_guard.setLineNumber( 49 );
            _python_var_pid.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__mail__message_os.asObject0(), _python_str_plain_getpid ) ).asObject() ) );
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

            if ( _exception.matches( PyExc_AttributeError ) )
            {
                frame_guard.detachFrame();
                _python_var_pid.assign0( _python_int_pos_1 );
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
        frame_guard.setLineNumber( 53 );
        _python_var_randint.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__mail__message_random.asObject0(), _python_str_plain_randrange ) ).asObject(), _python_int_pos_100000 ) );
        frame_guard.setLineNumber( 54 );
        if ( ( _python_var_idstring.asObject() == Py_None ) )
        {
            _python_var_idstring.assign0( _python_unicode_empty );
        }
        else
        {
            frame_guard.setLineNumber( 57 );
            _python_var_idstring.assign1( BINARY_OPERATION_ADD( _python_unicode_dot, _python_var_idstring.asObject() ) );
        }
        frame_guard.setLineNumber( 58 );
        _python_var_idhost.assign0( _mvar_django__core__mail__message_DNS_NAME.asObject0() );
        frame_guard.setLineNumber( 59 );
        {
            PyObjectTempKeeper0 make_tuple6;
            PyObjectTempKeeper0 make_tuple7;
            PyObjectTempKeeper0 make_tuple8;
            PyObjectTempKeeper0 make_tuple9;
            _python_var_msgid.assign1( BINARY_OPERATION_REMAINDER( _python_unicode_digest_743b93f8e798c98c3ed3b610603944d0, PyObjectTemporary( ( make_tuple6.assign( _python_var_utcdate.asObject() ), make_tuple7.assign( _python_var_pid.asObject() ), make_tuple8.assign( _python_var_randint.asObject() ), make_tuple9.assign( _python_var_idstring.asObject() ), MAKE_TUPLE5( make_tuple6.asObject0(), make_tuple7.asObject0(), make_tuple8.asObject0(), make_tuple9.asObject0(), _python_var_idhost.asObject() ) ) ).asObject() ) );
        }
        frame_guard.setLineNumber( 60 );
        return _python_var_msgid.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_idstring.updateLocalsDict( _python_var_msgid.updateLocalsDict( _python_var_idhost.updateLocalsDict( _python_var_randint.updateLocalsDict( _python_var_pid.updateLocalsDict( _python_var_utcdate.updateLocalsDict( _python_var_timeval.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_make_msgid_of_module_django__core__mail__message )
        {
           Py_DECREF( frame_function_2_make_msgid_of_module_django__core__mail__message );
           frame_function_2_make_msgid_of_module_django__core__mail__message = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_make_msgid_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_idstring = NULL;
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
                PyErr_Format( PyExc_TypeError, "make_msgid() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_idstring == key )
            {
                if (unlikely( _python_par_idstring ))
                {
                    PyErr_Format( PyExc_TypeError, "make_msgid() got multiple values for keyword argument 'idstring'" );
                    goto error_exit;
                }

                _python_par_idstring = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_idstring, key ) )
            {
                if (unlikely( _python_par_idstring ))
                {
                    PyErr_Format( PyExc_TypeError, "make_msgid() got multiple values for keyword argument 'idstring'" );
                    goto error_exit;
                }

                _python_par_idstring = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "make_msgid() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "make_msgid() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "make_msgid() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "make_msgid() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "make_msgid() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "make_msgid() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "make_msgid() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "make_msgid() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "make_msgid() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "make_msgid() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "make_msgid() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "make_msgid() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "make_msgid() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_idstring != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "make_msgid() got multiple values for keyword argument 'idstring'" );
             goto error_exit;
         }

        _python_par_idstring = INCREASE_REFCOUNT( args[ 0 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_idstring == NULL )
    {
        _python_par_idstring = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_idstring );
    }


    return impl_function_2_make_msgid_of_module_django__core__mail__message( self, _python_par_idstring );

error_exit:;

    Py_XDECREF( _python_par_idstring );

    return NULL;
}

static PyObject *dparse_function_2_make_msgid_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2_make_msgid_of_module_django__core__mail__message( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_make_msgid_of_module_django__core__mail__message( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_forbid_multi_line_headers_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject *_python_par_name, PyObject *_python_par_val, PyObject *_python_par_encoding )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );
    PyObjectLocalParameterVariableNoDel _python_var_val( _python_str_plain_val, _python_par_val );
    PyObjectSharedLocalVariable _python_var_encoding( _python_str_plain_encoding, _python_par_encoding );

    // Actual function code.
    static PyFrameObject *frame_function_3_forbid_multi_line_headers_of_module_django__core__mail__message = NULL;

    if ( isFrameUnusable( frame_function_3_forbid_multi_line_headers_of_module_django__core__mail__message ) )
    {
        if ( frame_function_3_forbid_multi_line_headers_of_module_django__core__mail__message )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_forbid_multi_line_headers_of_module_django__core__mail__message" );
#endif
            Py_DECREF( frame_function_3_forbid_multi_line_headers_of_module_django__core__mail__message );
        }

        frame_function_3_forbid_multi_line_headers_of_module_django__core__mail__message = MAKE_FRAME( _codeobj_8bcd9d914933d66659136ed5e33d9546, _module_django__core__mail__message );
    }

    FrameGuard frame_guard( frame_function_3_forbid_multi_line_headers_of_module_django__core__mail__message );
    try
    {
        assert( Py_REFCNT( frame_function_3_forbid_multi_line_headers_of_module_django__core__mail__message ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 81 );
        {
            PyObjectTempKeeper0 keeper_0;
            _python_var_encoding.assign1( ( CHECK_IF_TRUE( keeper_0.assign( _python_var_encoding.asObject() ) ) ? INCREASE_REFCOUNT( keeper_0.asObject0() ) : LOOKUP_ATTRIBUTE( _mvar_django__core__mail__message_settings.asObject0(), _python_str_plain_DEFAULT_CHARSET ) ) );
        }
        frame_guard.setLineNumber( 82 );
        {
            PyObjectTempKeeper0 call1;
            _python_var_val.assign1( ( call1.assign( _mvar_django__core__mail__message_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_val.asObject() ) ) );
        }
        frame_guard.setLineNumber( 83 );
        if ( ( SEQUENCE_CONTAINS_BOOL( _python_unicode_chr_10, _python_var_val.asObject() ) || SEQUENCE_CONTAINS_BOOL( _python_unicode_chr_13, _python_var_val.asObject() ) ) )
        {
            frame_guard.setLineNumber( 84 );
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper0 make_tuple3;
                {
                    PyObjectTemporary tmp_exception_type( ( call5.assign( _mvar_django__core__mail__message_BadHeaderError.asObject0() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_c957e99238ab05d869b59f3735ae7948, PyObjectTemporary( ( make_tuple3.assign( _python_var_val.asObject() ), MAKE_TUPLE2( make_tuple3.asObject0(), _python_var_name.asObject() ) ) ).asObject() ) ).asObject() ) ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
            }
        }
        {
            PyObject *_python_tmp_unhandled_indicator = Py_True;
            frame_guard.setLineNumber( 85 );
            try
            {
                frame_guard.setLineNumber( 86 );
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_val.asObject(), _python_str_plain_encode ) ).asObject(), _python_unicode_plain_ascii ) );
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

                if ( _exception.matches( PyExc_UnicodeEncodeError ) )
                {
                    frame_guard.detachFrame();
                    _python_tmp_unhandled_indicator = Py_False;
                    frame_guard.setLineNumber( 88 );
                    {
                        PyObjectTempKeeper1 cmp14;
                        if ( ( cmp14.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_name.asObject(), _python_str_plain_lower ) ).asObject() ) ), SEQUENCE_CONTAINS_BOOL( cmp14.asObject0(), _mvar_django__core__mail__message_ADDRESS_HEADERS.asObject0() ) ) )
                    {
                        frame_guard.setLineNumber( 89 );
                        {
                            PyObjectTempKeeper0 call7;
                            PyObjectTempKeeper1 call9;
                            _python_var_val.assign1( ( call9.assign( LOOKUP_ATTRIBUTE( _python_unicode_digest_fc763cb31e9938f37737394681228f83, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), PyObjectTemporary( impl_genexpr_1_of_function_3_forbid_multi_line_headers_of_module_django__core__mail__message( MAKE_ITERATOR( PyObjectTemporary( ( call7.assign( _mvar_django__core__mail__message_getaddresses.asObject0() ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), PyObjectTemporary( MAKE_TUPLE1( _python_var_val.asObject() ) ).asObject() ) ) ).asObject() ), _python_var_encoding ) ).asObject() ) ) );
                        }
                    }
                    else
                    {
                        frame_guard.setLineNumber( 92 );
                        {
                            PyObjectTempKeeper0 call11;
                            PyObjectTempKeeper0 call12;
                            _python_var_val.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call11.assign( _mvar_django__core__mail__message_Header.asObject0() ), call12.assign( _python_var_val.asObject() ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), call12.asObject0(), _python_var_encoding.asObject() ) ) ).asObject(), _python_str_plain_encode ) ).asObject() ) );
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
                frame_guard.setLineNumber( 94 );
                if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_name.asObject(), _python_str_plain_lower ) ).asObject() ) ).asObject(), _python_unicode_plain_subject ) )
                {
                    frame_guard.setLineNumber( 95 );
                    {
                        PyObjectTempKeeper0 call16;
                        _python_var_val.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call16.assign( _mvar_django__core__mail__message_Header.asObject0() ), CALL_FUNCTION_WITH_ARGS( call16.asObject0(), _python_var_val.asObject() ) ) ).asObject(), _python_str_plain_encode ) ).asObject() ) );
                    }
                }
            }
        }
        frame_guard.setLineNumber( 96 );
        {
            PyObjectTempKeeper1 make_tuple18;
            return ( make_tuple18.assign( TO_STR( _python_var_name.asObject() ) ), MAKE_TUPLE2( make_tuple18.asObject0(), _python_var_val.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_encoding.updateLocalsDict( _python_var_val.updateLocalsDict( _python_var_name.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_forbid_multi_line_headers_of_module_django__core__mail__message )
        {
           Py_DECREF( frame_function_3_forbid_multi_line_headers_of_module_django__core__mail__message );
           frame_function_3_forbid_multi_line_headers_of_module_django__core__mail__message = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_forbid_multi_line_headers_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_name = NULL;
    PyObject *_python_par_val = NULL;
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
                PyErr_Format( PyExc_TypeError, "forbid_multi_line_headers() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "forbid_multi_line_headers() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_val == key )
            {
                if (unlikely( _python_par_val ))
                {
                    PyErr_Format( PyExc_TypeError, "forbid_multi_line_headers() got multiple values for keyword argument 'val'" );
                    goto error_exit;
                }

                _python_par_val = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_encoding == key )
            {
                if (unlikely( _python_par_encoding ))
                {
                    PyErr_Format( PyExc_TypeError, "forbid_multi_line_headers() got multiple values for keyword argument 'encoding'" );
                    goto error_exit;
                }

                _python_par_encoding = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "forbid_multi_line_headers() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_val, key ) )
            {
                if (unlikely( _python_par_val ))
                {
                    PyErr_Format( PyExc_TypeError, "forbid_multi_line_headers() got multiple values for keyword argument 'val'" );
                    goto error_exit;
                }

                _python_par_val = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_encoding, key ) )
            {
                if (unlikely( _python_par_encoding ))
                {
                    PyErr_Format( PyExc_TypeError, "forbid_multi_line_headers() got multiple values for keyword argument 'encoding'" );
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
                   "forbid_multi_line_headers() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "forbid_multi_line_headers() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "forbid_multi_line_headers() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "forbid_multi_line_headers() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "forbid_multi_line_headers() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "forbid_multi_line_headers() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "forbid_multi_line_headers() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "forbid_multi_line_headers() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "forbid_multi_line_headers() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "forbid_multi_line_headers() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "forbid_multi_line_headers() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "forbid_multi_line_headers() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "forbid_multi_line_headers() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 3 ? args_given : 3;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "forbid_multi_line_headers() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_val != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "forbid_multi_line_headers() got multiple values for keyword argument 'val'" );
             goto error_exit;
         }

        _python_par_val = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_encoding != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "forbid_multi_line_headers() got multiple values for keyword argument 'encoding'" );
             goto error_exit;
         }

        _python_par_encoding = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_3_forbid_multi_line_headers_of_module_django__core__mail__message( self, _python_par_name, _python_par_val, _python_par_encoding );

error_exit:;

    Py_XDECREF( _python_par_name );
    Py_XDECREF( _python_par_val );
    Py_XDECREF( _python_par_encoding );

    return NULL;
}

static PyObject *dparse_function_3_forbid_multi_line_headers_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_3_forbid_multi_line_headers_of_module_django__core__mail__message( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_forbid_multi_line_headers_of_module_django__core__mail__message( self, args, size, NULL );
        return result;
    }

}




struct _context_generator_genexpr_1_of_function_3_forbid_multi_line_headers_of_module_django__core__mail__message_t
{
    // The generator function instance can access its parameters from creation time.
    PyObjectClosureVariable python_closure_encoding;
    PyObjectLocalParameterVariableNoDel python_var___iterator;
    PyObjectLocalVariable python_var_addr;
};

static void _context_generator_genexpr_1_of_function_3_forbid_multi_line_headers_of_module_django__core__mail__message_destructor( void *context_voidptr )
{
    _context_generator_genexpr_1_of_function_3_forbid_multi_line_headers_of_module_django__core__mail__message_t *_python_context = (struct _context_generator_genexpr_1_of_function_3_forbid_multi_line_headers_of_module_django__core__mail__message_t *)context_voidptr;

    delete _python_context;
}

static void genexpr_1_of_function_3_forbid_multi_line_headers_of_module_django__core__mail__message_context( Nuitka_GeneratorObject *generator )
{
    {
        // Make context accessible if one is used.

        NUITKA_MAY_BE_UNUSED struct _context_generator_genexpr_1_of_function_3_forbid_multi_line_headers_of_module_django__core__mail__message_t *_python_context = (_context_generator_genexpr_1_of_function_3_forbid_multi_line_headers_of_module_django__core__mail__message_t *)generator->m_context;


        // Local variable inits
        _python_context->python_var_addr.setVariableName( _python_str_plain_addr );

        // Actual function code.
        static PyFrameObject *frame_genexpr_1_of_function_3_forbid_multi_line_headers_of_module_django__core__mail__message = NULL;

        // Must be inside block, or else its d-tor will not be run.
        if ( isFrameUnusable( frame_genexpr_1_of_function_3_forbid_multi_line_headers_of_module_django__core__mail__message ) )
        {
            if ( frame_genexpr_1_of_function_3_forbid_multi_line_headers_of_module_django__core__mail__message )
            {
#if _DEBUG_REFRAME
                puts( "reframe for genexpr_1_of_function_3_forbid_multi_line_headers_of_module_django__core__mail__message" );
#endif
                Py_DECREF( frame_genexpr_1_of_function_3_forbid_multi_line_headers_of_module_django__core__mail__message );
            }

            frame_genexpr_1_of_function_3_forbid_multi_line_headers_of_module_django__core__mail__message = MAKE_FRAME( _codeobj_7cd3714ed64b5ba9968af88891782edf, _module_django__core__mail__message );
        }

        Py_INCREF( frame_genexpr_1_of_function_3_forbid_multi_line_headers_of_module_django__core__mail__message );
        generator->m_frame = frame_genexpr_1_of_function_3_forbid_multi_line_headers_of_module_django__core__mail__message;

        Py_CLEAR( generator->m_frame->f_back );

        generator->m_frame->f_back = PyThreadState_GET()->frame;
        Py_INCREF( generator->m_frame->f_back );

        PyThreadState_GET()->frame = generator->m_frame;

        FrameGuardLight frame_guard( &generator->m_frame );

        // TODO: The inject of the exception through C++ is very non-optimal, this flag
        // now indicates only if the exception occurs initially as supposed, or during
        // life, this could and should be shortcut.
        bool traceback;

        try
        {
            // TODO: In case we don't raise exceptions ourselves, we would still have to do this, so
            // beware to not optimize this away for generators without a replacement.
            traceback = true;
            CHECK_EXCEPTION( generator );
            traceback = false;

            {
                {
                    frame_guard.setLineNumber( 89 );
                    PyObject *_python_tmp_contraction_iter = _python_context->python_var___iterator.asObject();
                    while( true )
                    {
                        frame_guard.setLineNumber( 89 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        _python_context->python_var_addr.assign0( _python_tmp_iter_value.asObject() );
                        {
                            PyObjectTempKeeper0 call1;
                            PyObjectTempKeeper0 call2;
                            YIELD_VALUE( generator, ( call1.assign( _mvar_django__core__mail__message_sanitize_address.asObject0() ), call2.assign( _python_context->python_var_addr.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _python_context->python_closure_encoding.asObject() ) ) );
                        }

                       CONSIDER_THREADING();
                    }
                }
            }

            PyErr_SetNone( PyExc_StopIteration );
        }
        catch ( PythonException &_exception )
        {
            if ( !_exception.hasTraceback() )
            {
                _exception.setTraceback( MAKE_TRACEBACK( INCREASE_REFCOUNT( generator->m_frame ) ) );
            }
            else if ( traceback == false )
            {
                _exception.addTraceback( generator->m_frame );
            }
            _exception.toPython();

            // TODO: Moving this code is not allowed yet.
            generator->m_yielded = NULL;
        }
    }

    // TODO: Won't return, we should tell the compiler about that.
    generator->m_yielded = NULL;
    swapFiber( &generator->m_yielder_context, &generator->m_caller_context );
}

static PyObject *impl_genexpr_1_of_function_3_forbid_multi_line_headers_of_module_django__core__mail__message( PyObject *_python_par___iterator, PyObjectSharedLocalVariable &python_closure_encoding )
{
    // Create context if any
    struct _context_generator_genexpr_1_of_function_3_forbid_multi_line_headers_of_module_django__core__mail__message_t *_python_context = new _context_generator_genexpr_1_of_function_3_forbid_multi_line_headers_of_module_django__core__mail__message_t;
    _python_context->python_closure_encoding.shareWith( python_closure_encoding );

    try
    {
        PyObject *result = Nuitka_Generator_New(
            genexpr_1_of_function_3_forbid_multi_line_headers_of_module_django__core__mail__message_context,
            _python_str_angle_genexpr,
            _codeobj_0dd96bb244d348e3a74fc25b946a7632,
            _python_context,
            _context_generator_genexpr_1_of_function_3_forbid_multi_line_headers_of_module_django__core__mail__message_destructor
        );

        if (unlikely( result == NULL ))
        {
            PyErr_Format( PyExc_RuntimeError, "cannot create function <genexpr>" );
            return NULL;
        }

        // Copy to context parameter values and closured variables if any.
        _python_context->python_var___iterator.setVariableNameAndValue( _python_str_plain___iterator, _python_par___iterator );

        return result;
    }
    catch ( PythonException &_exception )
    {
        _exception.toPython();

        return NULL;
    }
}


static PyObject *impl_function_4_sanitize_address_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject *_python_par_addr, PyObject *_python_par_encoding )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_addr( _python_str_plain_addr, _python_par_addr );
    PyObjectLocalParameterVariableNoDel _python_var_encoding( _python_str_plain_encoding, _python_par_encoding );
    PyObjectLocalVariable _python_var_nm( _python_str_plain_nm );
    PyObjectLocalVariable _python_var_localpart( _python_str_plain_localpart );
    PyObjectLocalVariable _python_var_domain( _python_str_plain_domain );

    // Actual function code.
    static PyFrameObject *frame_function_4_sanitize_address_of_module_django__core__mail__message = NULL;

    if ( isFrameUnusable( frame_function_4_sanitize_address_of_module_django__core__mail__message ) )
    {
        if ( frame_function_4_sanitize_address_of_module_django__core__mail__message )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_sanitize_address_of_module_django__core__mail__message" );
#endif
            Py_DECREF( frame_function_4_sanitize_address_of_module_django__core__mail__message );
        }

        frame_function_4_sanitize_address_of_module_django__core__mail__message = MAKE_FRAME( _codeobj_2eaab2324717149ac4bdf67a73fd0d36, _module_django__core__mail__message );
    }

    FrameGuard frame_guard( frame_function_4_sanitize_address_of_module_django__core__mail__message );
    try
    {
        assert( Py_REFCNT( frame_function_4_sanitize_address_of_module_django__core__mail__message ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 100 );
        {
            PyObjectTempKeeper0 isinstance5;
            if ( ( isinstance5.assign( _python_var_addr.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance5.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__mail__message_six.asObject0(), _python_str_plain_string_types ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 101 );
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _python_var_addr.assign1( ( call3.assign( _mvar_django__core__mail__message_parseaddr.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( ( call1.assign( _mvar_django__core__mail__message_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_addr.asObject() ) ) ).asObject() ) ) );
            }
        }
        }
        {
            frame_guard.setLineNumber( 102 );
            PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_var_addr.asObject() ) );
            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
            _python_var_nm.assign0( _python_tmp_element_1.asObject() );
            _python_var_addr.assign0( _python_tmp_element_2.asObject() );
        }
        frame_guard.setLineNumber( 105 );
        try
        {
            frame_guard.setLineNumber( 106 );
            {
                PyObjectTempKeeper0 call10;
                PyObjectTempKeeper0 call11;
                _python_var_nm.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call10.assign( _mvar_django__core__mail__message_Header.asObject0() ), call11.assign( _python_var_nm.asObject() ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), call11.asObject0(), _python_var_encoding.asObject() ) ) ).asObject(), _python_str_plain_encode ) ).asObject() ) );
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

            if ( _exception.matches( PyExc_UnicodeEncodeError ) )
            {
                frame_guard.detachFrame();
                frame_guard.setLineNumber( 108 );
                {
                    PyObjectTempKeeper0 call7;
                    _python_var_nm.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call7.assign( _mvar_django__core__mail__message_Header.asObject0() ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _python_var_nm.asObject(), _python_unicode_digest_e9e2aa8136260a22b0b09fdee43ccb8a ) ) ).asObject(), _python_str_plain_encode ) ).asObject() ) );
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
        frame_guard.setLineNumber( 109 );
        try
        {
            frame_guard.setLineNumber( 110 );
            DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_addr.asObject(), _python_str_plain_encode ) ).asObject(), _python_unicode_plain_ascii ) );
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

            if ( _exception.matches( PyExc_UnicodeEncodeError ) )
            {
                frame_guard.detachFrame();
                frame_guard.setLineNumber( 112 );
                if ( SEQUENCE_CONTAINS_BOOL( _python_unicode_chr_64, _python_var_addr.asObject() ) )
                {
                    {
                        frame_guard.setLineNumber( 113 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_addr.asObject(), _python_str_plain_split ) ).asObject(), _python_unicode_chr_64, _python_int_pos_1 ) ).asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_localpart.assign0( _python_tmp_element_1.asObject() );
                        _python_var_domain.assign0( _python_tmp_element_2.asObject() );
                    }
                    frame_guard.setLineNumber( 114 );
                    {
                        PyObjectTempKeeper0 call13;
                        PyObjectTempKeeper0 call14;
                        _python_var_localpart.assign1( TO_STR( PyObjectTemporary( ( call13.assign( _mvar_django__core__mail__message_Header.asObject0() ), call14.assign( _python_var_localpart.asObject() ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), call14.asObject0(), _python_var_encoding.asObject() ) ) ).asObject() ) );
                    }
                    frame_guard.setLineNumber( 115 );
                    _python_var_domain.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_domain.asObject(), _python_str_plain_encode ) ).asObject(), _python_unicode_plain_idna ) ).asObject(), _python_str_plain_decode ) ).asObject(), _python_unicode_plain_ascii ) );
                    frame_guard.setLineNumber( 116 );
                    {
                        PyObjectTempKeeper1 call18;
                        PyObjectTempKeeper0 make_list16;
                        _python_var_addr.assign1( ( call18.assign( LOOKUP_ATTRIBUTE( _python_unicode_chr_64, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call18.asObject0(), PyObjectTemporary( ( make_list16.assign( _python_var_localpart.asObject() ), MAKE_LIST2( make_list16.asObject(), _python_var_domain.asObject1() ) ) ).asObject() ) ) );
                    }
                }
                else
                {
                    frame_guard.setLineNumber( 118 );
                    {
                        PyObjectTempKeeper0 call20;
                        PyObjectTempKeeper0 call21;
                        _python_var_addr.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call20.assign( _mvar_django__core__mail__message_Header.asObject0() ), call21.assign( _python_var_addr.asObject() ), CALL_FUNCTION_WITH_ARGS( call20.asObject0(), call21.asObject0(), _python_var_encoding.asObject() ) ) ).asObject(), _python_str_plain_encode ) ).asObject() ) );
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
        frame_guard.setLineNumber( 119 );
        {
            PyObjectTempKeeper0 call25;
            PyObjectTempKeeper0 make_tuple23;
            return ( call25.assign( _mvar_django__core__mail__message_formataddr.asObject0() ), CALL_FUNCTION_WITH_ARGS( call25.asObject0(), PyObjectTemporary( ( make_tuple23.assign( _python_var_nm.asObject() ), MAKE_TUPLE2( make_tuple23.asObject0(), _python_var_addr.asObject() ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_encoding.updateLocalsDict( _python_var_addr.updateLocalsDict( _python_var_domain.updateLocalsDict( _python_var_localpart.updateLocalsDict( _python_var_nm.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_4_sanitize_address_of_module_django__core__mail__message )
        {
           Py_DECREF( frame_function_4_sanitize_address_of_module_django__core__mail__message );
           frame_function_4_sanitize_address_of_module_django__core__mail__message = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_sanitize_address_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_addr = NULL;
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
                PyErr_Format( PyExc_TypeError, "sanitize_address() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "sanitize_address() got multiple values for keyword argument 'addr'" );
                    goto error_exit;
                }

                _python_par_addr = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_encoding == key )
            {
                if (unlikely( _python_par_encoding ))
                {
                    PyErr_Format( PyExc_TypeError, "sanitize_address() got multiple values for keyword argument 'encoding'" );
                    goto error_exit;
                }

                _python_par_encoding = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_addr, key ) )
            {
                if (unlikely( _python_par_addr ))
                {
                    PyErr_Format( PyExc_TypeError, "sanitize_address() got multiple values for keyword argument 'addr'" );
                    goto error_exit;
                }

                _python_par_addr = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_encoding, key ) )
            {
                if (unlikely( _python_par_encoding ))
                {
                    PyErr_Format( PyExc_TypeError, "sanitize_address() got multiple values for keyword argument 'encoding'" );
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
                   "sanitize_address() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "sanitize_address() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "sanitize_address() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "sanitize_address() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "sanitize_address() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "sanitize_address() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "sanitize_address() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "sanitize_address() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "sanitize_address() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "sanitize_address() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "sanitize_address() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "sanitize_address() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "sanitize_address() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_addr != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "sanitize_address() got multiple values for keyword argument 'addr'" );
             goto error_exit;
         }

        _python_par_addr = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_encoding != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "sanitize_address() got multiple values for keyword argument 'encoding'" );
             goto error_exit;
         }

        _python_par_encoding = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_4_sanitize_address_of_module_django__core__mail__message( self, _python_par_addr, _python_par_encoding );

error_exit:;

    Py_XDECREF( _python_par_addr );
    Py_XDECREF( _python_par_encoding );

    return NULL;
}

static PyObject *dparse_function_4_sanitize_address_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_4_sanitize_address_of_module_django__core__mail__message( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_sanitize_address_of_module_django__core__mail__message( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_5_SafeMIMEText_of_module_django__core__mail__message(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var___setitem__( _python_str_plain___setitem__ );
    PyObjectLocalVariable _python_var_as_string( _python_str_plain_as_string );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_message );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_5_SafeMIMEText_of_module_django__core__mail__message(  ) );
    _python_var___setitem__.assign1( MAKE_FUNCTION_function_2___setitem___of_class_5_SafeMIMEText_of_module_django__core__mail__message(  ) );
    _python_var_as_string.assign1( MAKE_FUNCTION_function_3_as_string_of_class_5_SafeMIMEText_of_module_django__core__mail__message(  ) );
    return _python_var_as_string.updateLocalsDict( _python_var___setitem__.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) );
}


static PyObject *impl_function_1___init___of_class_5_SafeMIMEText_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_text, PyObject *_python_par_subtype, PyObject *_python_par_charset )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_text( _python_str_plain_text, _python_par_text );
    PyObjectLocalParameterVariableNoDel _python_var_subtype( _python_str_plain_subtype, _python_par_subtype );
    PyObjectLocalParameterVariableNoDel _python_var_charset( _python_str_plain_charset, _python_par_charset );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_5_SafeMIMEText_of_module_django__core__mail__message = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_5_SafeMIMEText_of_module_django__core__mail__message ) )
    {
        if ( frame_function_1___init___of_class_5_SafeMIMEText_of_module_django__core__mail__message )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_5_SafeMIMEText_of_module_django__core__mail__message" );
#endif
            Py_DECREF( frame_function_1___init___of_class_5_SafeMIMEText_of_module_django__core__mail__message );
        }

        frame_function_1___init___of_class_5_SafeMIMEText_of_module_django__core__mail__message = MAKE_FRAME( _codeobj_ece0affdd97e86b1955b3c72162158c0, _module_django__core__mail__message );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_5_SafeMIMEText_of_module_django__core__mail__message );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_5_SafeMIMEText_of_module_django__core__mail__message ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 125 );
        {
                PyObject *tmp_identifier = _python_var_charset.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_encoding );
        }
        frame_guard.setLineNumber( 126 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper0 call2;
            PyObjectTempKeeper0 call3;
            PyObjectTempKeeper0 call4;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__mail__message_MIMEText.asObject0(), _python_str_plain___init__ ) ), call2.assign( _python_var_self.asObject() ), call3.assign( _python_var_text.asObject() ), call4.assign( _python_var_subtype.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), call3.asObject0(), call4.asObject0(), _python_var_charset.asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_charset.updateLocalsDict( _python_var_subtype.updateLocalsDict( _python_var_text.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_5_SafeMIMEText_of_module_django__core__mail__message )
        {
           Py_DECREF( frame_function_1___init___of_class_5_SafeMIMEText_of_module_django__core__mail__message );
           frame_function_1___init___of_class_5_SafeMIMEText_of_module_django__core__mail__message = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_5_SafeMIMEText_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_text = NULL;
    PyObject *_python_par_subtype = NULL;
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
            if ( found == false && _python_str_plain_text == key )
            {
                if (unlikely( _python_par_text ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'text'" );
                    goto error_exit;
                }

                _python_par_text = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_subtype == key )
            {
                if (unlikely( _python_par_subtype ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'subtype'" );
                    goto error_exit;
                }

                _python_par_subtype = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_charset == key )
            {
                if (unlikely( _python_par_charset ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'charset'" );
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
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_text, key ) )
            {
                if (unlikely( _python_par_text ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'text'" );
                    goto error_exit;
                }

                _python_par_text = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_subtype, key ) )
            {
                if (unlikely( _python_par_subtype ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'subtype'" );
                    goto error_exit;
                }

                _python_par_subtype = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_charset, key ) )
            {
                if (unlikely( _python_par_charset ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'charset'" );
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
    if (unlikely( args_given > 4 ))
    {
        if ( 4 == 1 )
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 4 )
                {
                    PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__init__() takes at least %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 4 ? args_given : 4;

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
         if (unlikely( _python_par_text != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'text'" );
             goto error_exit;
         }

        _python_par_text = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_subtype != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'subtype'" );
             goto error_exit;
         }

        _python_par_subtype = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_charset != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'charset'" );
             goto error_exit;
         }

        _python_par_charset = INCREASE_REFCOUNT( args[ 3 ] );
    }


    return impl_function_1___init___of_class_5_SafeMIMEText_of_module_django__core__mail__message( self, _python_par_self, _python_par_text, _python_par_subtype, _python_par_charset );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_text );
    Py_XDECREF( _python_par_subtype );
    Py_XDECREF( _python_par_charset );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_5_SafeMIMEText_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_1___init___of_class_5_SafeMIMEText_of_module_django__core__mail__message( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_5_SafeMIMEText_of_module_django__core__mail__message( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___setitem___of_class_5_SafeMIMEText_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name, PyObject *_python_par_val )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );
    PyObjectLocalParameterVariableNoDel _python_var_val( _python_str_plain_val, _python_par_val );

    // Actual function code.
    static PyFrameObject *frame_function_2___setitem___of_class_5_SafeMIMEText_of_module_django__core__mail__message = NULL;

    if ( isFrameUnusable( frame_function_2___setitem___of_class_5_SafeMIMEText_of_module_django__core__mail__message ) )
    {
        if ( frame_function_2___setitem___of_class_5_SafeMIMEText_of_module_django__core__mail__message )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2___setitem___of_class_5_SafeMIMEText_of_module_django__core__mail__message" );
#endif
            Py_DECREF( frame_function_2___setitem___of_class_5_SafeMIMEText_of_module_django__core__mail__message );
        }

        frame_function_2___setitem___of_class_5_SafeMIMEText_of_module_django__core__mail__message = MAKE_FRAME( _codeobj_68df158cdf2fec22415402d0118a7eb2, _module_django__core__mail__message );
    }

    FrameGuard frame_guard( frame_function_2___setitem___of_class_5_SafeMIMEText_of_module_django__core__mail__message );
    try
    {
        assert( Py_REFCNT( frame_function_2___setitem___of_class_5_SafeMIMEText_of_module_django__core__mail__message ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 129 );
            PyObject *_tmp_python_tmp_source_iter;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call2;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( call1.assign( _mvar_django__core__mail__message_forbid_multi_line_headers.asObject0() ), call2.assign( _python_var_name.asObject() ), call3.assign( _python_var_val.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), call3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_encoding ) ).asObject() ) ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
            _python_var_name.assign0( _python_tmp_element_1.asObject() );
            _python_var_val.assign0( _python_tmp_element_2.asObject() );
        }
        frame_guard.setLineNumber( 130 );
        {
            PyObjectTempKeeper1 call5;
            PyObjectTempKeeper0 call6;
            PyObjectTempKeeper0 call7;
            DECREASE_REFCOUNT( ( call5.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__mail__message_MIMEText.asObject0(), _python_str_plain___setitem__ ) ), call6.assign( _python_var_self.asObject() ), call7.assign( _python_var_name.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), call6.asObject0(), call7.asObject0(), _python_var_val.asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_val.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_2___setitem___of_class_5_SafeMIMEText_of_module_django__core__mail__message )
        {
           Py_DECREF( frame_function_2___setitem___of_class_5_SafeMIMEText_of_module_django__core__mail__message );
           frame_function_2___setitem___of_class_5_SafeMIMEText_of_module_django__core__mail__message = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2___setitem___of_class_5_SafeMIMEText_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_name = NULL;
    PyObject *_python_par_val = NULL;
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
                PyErr_Format( PyExc_TypeError, "__setitem__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__setitem__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__setitem__() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_val == key )
            {
                if (unlikely( _python_par_val ))
                {
                    PyErr_Format( PyExc_TypeError, "__setitem__() got multiple values for keyword argument 'val'" );
                    goto error_exit;
                }

                _python_par_val = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "__setitem__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__setitem__() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_val, key ) )
            {
                if (unlikely( _python_par_val ))
                {
                    PyErr_Format( PyExc_TypeError, "__setitem__() got multiple values for keyword argument 'val'" );
                    goto error_exit;
                }

                _python_par_val = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__setitem__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__setitem__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__setitem__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__setitem__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__setitem__() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "__setitem__() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__setitem__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "__setitem__() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__setitem__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__setitem__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__setitem__() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "__setitem__() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__setitem__() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__setitem__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__setitem__() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_val != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__setitem__() got multiple values for keyword argument 'val'" );
             goto error_exit;
         }

        _python_par_val = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_2___setitem___of_class_5_SafeMIMEText_of_module_django__core__mail__message( self, _python_par_self, _python_par_name, _python_par_val );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );
    Py_XDECREF( _python_par_val );

    return NULL;
}

static PyObject *dparse_function_2___setitem___of_class_5_SafeMIMEText_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_2___setitem___of_class_5_SafeMIMEText_of_module_django__core__mail__message( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___setitem___of_class_5_SafeMIMEText_of_module_django__core__mail__message( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_as_string_of_class_5_SafeMIMEText_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_unixfrom )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_unixfrom( _python_str_plain_unixfrom, _python_par_unixfrom );
    PyObjectLocalVariable _python_var_fp( _python_str_plain_fp );
    PyObjectLocalVariable _python_var_g( _python_str_plain_g );

    // Actual function code.
    static PyFrameObject *frame_function_3_as_string_of_class_5_SafeMIMEText_of_module_django__core__mail__message = NULL;

    if ( isFrameUnusable( frame_function_3_as_string_of_class_5_SafeMIMEText_of_module_django__core__mail__message ) )
    {
        if ( frame_function_3_as_string_of_class_5_SafeMIMEText_of_module_django__core__mail__message )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_as_string_of_class_5_SafeMIMEText_of_module_django__core__mail__message" );
#endif
            Py_DECREF( frame_function_3_as_string_of_class_5_SafeMIMEText_of_module_django__core__mail__message );
        }

        frame_function_3_as_string_of_class_5_SafeMIMEText_of_module_django__core__mail__message = MAKE_FRAME( _codeobj_be2b2218c30027540f2d0ced65626cce, _module_django__core__mail__message );
    }

    FrameGuard frame_guard( frame_function_3_as_string_of_class_5_SafeMIMEText_of_module_django__core__mail__message );
    try
    {
        assert( Py_REFCNT( frame_function_3_as_string_of_class_5_SafeMIMEText_of_module_django__core__mail__message ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 140 );
        _python_var_fp.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__mail__message_six.asObject0(), _python_str_plain_StringIO ) ).asObject() ) );
        frame_guard.setLineNumber( 141 );
        {
            PyObjectTempKeeper0 call1;
            _python_var_g.assign1( ( call1.assign( _mvar_django__core__mail__message_Generator.asObject0() ), CALL_FUNCTION( call1.asObject0(), PyObjectTemporary( MAKE_TUPLE1( _python_var_fp.asObject() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_892455e8315c7e7df195f969832d08f0 ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 142 );
        {
            PyObjectTempKeeper1 isinstance6;
            if ( ( RICH_COMPARE_BOOL_LT( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__mail__message_sys.asObject0(), _python_str_plain_version_info ) ).asObject(), _python_tuple_int_pos_2_int_pos_6_int_pos_6_tuple ) && ( isinstance6.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__payload ) ), BUILTIN_ISINSTANCE_BOOL( isinstance6.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__mail__message_six.asObject0(), _python_str_plain_text_type ) ).asObject() ) ) ) )
        {
            frame_guard.setLineNumber( 144 );
            {
                PyObjectTempKeeper1 call4;
                {
                    PyObjectTemporary tmp_identifier( ( call4.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__payload ) ).asObject(), _python_str_plain_encode ) ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__charset ) ).asObject(), _python_str_plain_output_charset ) ).asObject() ) ) );
                    SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain__payload );
            }
            }
        }
        }
        frame_guard.setLineNumber( 145 );
        {
            PyObjectTempKeeper1 call8;
            PyObjectTempKeeper1 call9;
            DECREASE_REFCOUNT( ( call8.assign( LOOKUP_ATTRIBUTE( _python_var_g.asObject(), _python_str_plain_flatten ) ), call9.assign( MAKE_TUPLE1( _python_var_self.asObject() ) ), CALL_FUNCTION( call8.asObject0(), call9.asObject0(), PyObjectTemporary( MAKE_DICT1( _python_var_unixfrom.asObject(), _python_str_plain_unixfrom ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 146 );
        return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_fp.asObject(), _python_str_plain_getvalue ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_unixfrom.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_g.updateLocalsDict( _python_var_fp.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_as_string_of_class_5_SafeMIMEText_of_module_django__core__mail__message )
        {
           Py_DECREF( frame_function_3_as_string_of_class_5_SafeMIMEText_of_module_django__core__mail__message );
           frame_function_3_as_string_of_class_5_SafeMIMEText_of_module_django__core__mail__message = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_as_string_of_class_5_SafeMIMEText_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_unixfrom = NULL;
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
                PyErr_Format( PyExc_TypeError, "as_string() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "as_string() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_unixfrom == key )
            {
                if (unlikely( _python_par_unixfrom ))
                {
                    PyErr_Format( PyExc_TypeError, "as_string() got multiple values for keyword argument 'unixfrom'" );
                    goto error_exit;
                }

                _python_par_unixfrom = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "as_string() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_unixfrom, key ) )
            {
                if (unlikely( _python_par_unixfrom ))
                {
                    PyErr_Format( PyExc_TypeError, "as_string() got multiple values for keyword argument 'unixfrom'" );
                    goto error_exit;
                }

                _python_par_unixfrom = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "as_string() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "as_string() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "as_string() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "as_string() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "as_string() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "as_string() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "as_string() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "as_string() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "as_string() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "as_string() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "as_string() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "as_string() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "as_string() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "as_string() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_unixfrom != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "as_string() got multiple values for keyword argument 'unixfrom'" );
             goto error_exit;
         }

        _python_par_unixfrom = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_unixfrom == NULL )
    {
        _python_par_unixfrom = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_unixfrom );
    }


    return impl_function_3_as_string_of_class_5_SafeMIMEText_of_module_django__core__mail__message( self, _python_par_self, _python_par_unixfrom );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_unixfrom );

    return NULL;
}

static PyObject *dparse_function_3_as_string_of_class_5_SafeMIMEText_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_3_as_string_of_class_5_SafeMIMEText_of_module_django__core__mail__message( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_as_string_of_class_5_SafeMIMEText_of_module_django__core__mail__message( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_6_SafeMIMEMultipart_of_module_django__core__mail__message(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var___setitem__( _python_str_plain___setitem__ );
    PyObjectLocalVariable _python_var_as_string( _python_str_plain_as_string );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_message );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message(  ) );
    _python_var___setitem__.assign1( MAKE_FUNCTION_function_2___setitem___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message(  ) );
    _python_var_as_string.assign1( MAKE_FUNCTION_function_3_as_string_of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message(  ) );
    return _python_var_as_string.updateLocalsDict( _python_var___setitem__.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) );
}


static PyObject *impl_function_1___init___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par__subtype, PyObject *_python_par_boundary, PyObject *_python_par__subparts, PyObject *_python_par_encoding, PyObject *_python_par__params )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var__subtype( _python_str_plain__subtype, _python_par__subtype );
    PyObjectLocalParameterVariableNoDel _python_var_boundary( _python_str_plain_boundary, _python_par_boundary );
    PyObjectLocalParameterVariableNoDel _python_var__subparts( _python_str_plain__subparts, _python_par__subparts );
    PyObjectLocalParameterVariableNoDel _python_var_encoding( _python_str_plain_encoding, _python_par_encoding );
    PyObjectLocalParameterVariableNoDel _python_var__params( _python_str_plain__params, _python_par__params );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message ) )
    {
        if ( frame_function_1___init___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message" );
#endif
            Py_DECREF( frame_function_1___init___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message );
        }

        frame_function_1___init___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message = MAKE_FRAME( _codeobj_322830f104a082094e2658ffe1b82336, _module_django__core__mail__message );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 152 );
        {
                PyObject *tmp_identifier = _python_var_encoding.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_encoding );
        }
        frame_guard.setLineNumber( 153 );
        {
            PyObjectTempKeeper1 call_tmp5;
            PyObjectTempKeeper1 call_tmp6;
            PyObjectTempKeeper0 make_tuple1;
            PyObjectTempKeeper0 make_tuple2;
            PyObjectTempKeeper0 make_tuple3;
            DECREASE_REFCOUNT( ( call_tmp5.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__mail__message_MIMEMultipart.asObject0(), _python_str_plain___init__ ) ), call_tmp6.assign( ( make_tuple1.assign( _python_var_self.asObject() ), make_tuple2.assign( _python_var__subtype.asObject() ), make_tuple3.assign( _python_var_boundary.asObject() ), MAKE_TUPLE4( make_tuple1.asObject0(), make_tuple2.asObject0(), make_tuple3.asObject0(), _python_var__subparts.asObject() ) ) ), impl_function_3_complex_call_helper_pos_star_dict_of_module___internal__( call_tmp5.asObject(), call_tmp6.asObject(), _python_var__params.asObject1() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var__params.updateLocalsDict( _python_var_encoding.updateLocalsDict( _python_var__subparts.updateLocalsDict( _python_var_boundary.updateLocalsDict( _python_var__subtype.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message )
        {
           Py_DECREF( frame_function_1___init___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message );
           frame_function_1___init___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par__subtype = NULL;
    PyObject *_python_par_boundary = NULL;
    PyObject *_python_par__subparts = NULL;
    PyObject *_python_par_encoding = NULL;
    PyObject *_python_par__params = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:

    if ( kw == NULL )
    {
        _python_par__params = PyDict_New();
    }
    else
    {
        if ( ((PyDictObject *)kw)->ma_used > 0 )
        {
#if PYTHON_VERSION < 330
            _python_par__params = _PyDict_NewPresized( ((PyDictObject *)kw)->ma_used  );

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

                    int res = PyDict_SetItem( _python_par__params, entry->me_key, entry->me_value );

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

            _python_par__params = (PyObject *)split_copy;
        }
        else
        {
            _python_par__params = PyDict_New();

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

                    int res = PyDict_SetItem( _python_par__params, entry->me_key, value );

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
            _python_par__params = PyDict_New();
        }
    }

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par__params, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par__params, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if argument _subtype was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par__params, _python_str_plain__subtype );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par__subtype == NULL );

            _python_par__subtype = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par__params, _python_str_plain__subtype );

            kw_found += 1;
        }
    }

    // Check if argument boundary was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par__params, _python_str_plain_boundary );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_boundary == NULL );

            _python_par_boundary = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par__params, _python_str_plain_boundary );

            kw_found += 1;
        }
    }

    // Check if argument _subparts was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par__params, _python_str_plain__subparts );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par__subparts == NULL );

            _python_par__subparts = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par__params, _python_str_plain__subparts );

            kw_found += 1;
        }
    }

    // Check if argument encoding was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par__params, _python_str_plain_encoding );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_encoding == NULL );

            _python_par_encoding = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par__params, _python_str_plain_encoding );

            kw_found += 1;
        }
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
            if ( 5 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
#else
            if ( 5 == 1 )
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
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
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
                if ( 5 == 1 )
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
         if (unlikely( _python_par__subtype != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument '_subtype'" );
             goto error_exit;
         }

        _python_par__subtype = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_boundary != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'boundary'" );
             goto error_exit;
         }

        _python_par_boundary = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par__subparts != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument '_subparts'" );
             goto error_exit;
         }

        _python_par__subparts = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_encoding != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'encoding'" );
             goto error_exit;
         }

        _python_par_encoding = INCREASE_REFCOUNT( args[ 4 ] );
    }
    // Assign values not given to defaults
    if ( _python_par__subtype == NULL )
    {
        _python_par__subtype = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par__subtype );
    }
    if ( _python_par_boundary == NULL )
    {
        _python_par_boundary = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_boundary );
    }
    if ( _python_par__subparts == NULL )
    {
        _python_par__subparts = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 2 ) );
        assertObject( _python_par__subparts );
    }
    if ( _python_par_encoding == NULL )
    {
        _python_par_encoding = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 3 ) );
        assertObject( _python_par_encoding );
    }


    return impl_function_1___init___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message( self, _python_par_self, _python_par__subtype, _python_par_boundary, _python_par__subparts, _python_par_encoding, _python_par__params );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par__subtype );
    Py_XDECREF( _python_par_boundary );
    Py_XDECREF( _python_par__subparts );
    Py_XDECREF( _python_par_encoding );
    Py_XDECREF( _python_par__params );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 6)
    {
        return impl_function_1___init___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___setitem___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name, PyObject *_python_par_val )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );
    PyObjectLocalParameterVariableNoDel _python_var_val( _python_str_plain_val, _python_par_val );

    // Actual function code.
    static PyFrameObject *frame_function_2___setitem___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message = NULL;

    if ( isFrameUnusable( frame_function_2___setitem___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message ) )
    {
        if ( frame_function_2___setitem___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2___setitem___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message" );
#endif
            Py_DECREF( frame_function_2___setitem___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message );
        }

        frame_function_2___setitem___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message = MAKE_FRAME( _codeobj_18802347ec5287700a5e01fc1572f137, _module_django__core__mail__message );
    }

    FrameGuard frame_guard( frame_function_2___setitem___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message );
    try
    {
        assert( Py_REFCNT( frame_function_2___setitem___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 156 );
            PyObject *_tmp_python_tmp_source_iter;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call2;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( call1.assign( _mvar_django__core__mail__message_forbid_multi_line_headers.asObject0() ), call2.assign( _python_var_name.asObject() ), call3.assign( _python_var_val.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), call3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_encoding ) ).asObject() ) ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
            _python_var_name.assign0( _python_tmp_element_1.asObject() );
            _python_var_val.assign0( _python_tmp_element_2.asObject() );
        }
        frame_guard.setLineNumber( 157 );
        {
            PyObjectTempKeeper1 call5;
            PyObjectTempKeeper0 call6;
            PyObjectTempKeeper0 call7;
            DECREASE_REFCOUNT( ( call5.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__mail__message_MIMEMultipart.asObject0(), _python_str_plain___setitem__ ) ), call6.assign( _python_var_self.asObject() ), call7.assign( _python_var_name.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), call6.asObject0(), call7.asObject0(), _python_var_val.asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_val.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_2___setitem___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message )
        {
           Py_DECREF( frame_function_2___setitem___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message );
           frame_function_2___setitem___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2___setitem___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_name = NULL;
    PyObject *_python_par_val = NULL;
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
                PyErr_Format( PyExc_TypeError, "__setitem__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__setitem__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__setitem__() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_val == key )
            {
                if (unlikely( _python_par_val ))
                {
                    PyErr_Format( PyExc_TypeError, "__setitem__() got multiple values for keyword argument 'val'" );
                    goto error_exit;
                }

                _python_par_val = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "__setitem__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__setitem__() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_val, key ) )
            {
                if (unlikely( _python_par_val ))
                {
                    PyErr_Format( PyExc_TypeError, "__setitem__() got multiple values for keyword argument 'val'" );
                    goto error_exit;
                }

                _python_par_val = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__setitem__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__setitem__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__setitem__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__setitem__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__setitem__() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "__setitem__() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__setitem__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "__setitem__() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__setitem__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__setitem__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__setitem__() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "__setitem__() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__setitem__() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__setitem__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__setitem__() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_val != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__setitem__() got multiple values for keyword argument 'val'" );
             goto error_exit;
         }

        _python_par_val = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_2___setitem___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message( self, _python_par_self, _python_par_name, _python_par_val );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );
    Py_XDECREF( _python_par_val );

    return NULL;
}

static PyObject *dparse_function_2___setitem___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_2___setitem___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___setitem___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_as_string_of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_unixfrom )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_unixfrom( _python_str_plain_unixfrom, _python_par_unixfrom );
    PyObjectLocalVariable _python_var_fp( _python_str_plain_fp );
    PyObjectLocalVariable _python_var_g( _python_str_plain_g );

    // Actual function code.
    static PyFrameObject *frame_function_3_as_string_of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message = NULL;

    if ( isFrameUnusable( frame_function_3_as_string_of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message ) )
    {
        if ( frame_function_3_as_string_of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_as_string_of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message" );
#endif
            Py_DECREF( frame_function_3_as_string_of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message );
        }

        frame_function_3_as_string_of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message = MAKE_FRAME( _codeobj_d080911a5e624dc0ec6a35f0389bc7e2, _module_django__core__mail__message );
    }

    FrameGuard frame_guard( frame_function_3_as_string_of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message );
    try
    {
        assert( Py_REFCNT( frame_function_3_as_string_of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 167 );
        _python_var_fp.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__mail__message_six.asObject0(), _python_str_plain_StringIO ) ).asObject() ) );
        frame_guard.setLineNumber( 168 );
        {
            PyObjectTempKeeper0 call1;
            _python_var_g.assign1( ( call1.assign( _mvar_django__core__mail__message_Generator.asObject0() ), CALL_FUNCTION( call1.asObject0(), PyObjectTemporary( MAKE_TUPLE1( _python_var_fp.asObject() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_892455e8315c7e7df195f969832d08f0 ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 169 );
        {
            PyObjectTempKeeper1 call4;
            PyObjectTempKeeper1 call5;
            DECREASE_REFCOUNT( ( call4.assign( LOOKUP_ATTRIBUTE( _python_var_g.asObject(), _python_str_plain_flatten ) ), call5.assign( MAKE_TUPLE1( _python_var_self.asObject() ) ), CALL_FUNCTION( call4.asObject0(), call5.asObject0(), PyObjectTemporary( MAKE_DICT1( _python_var_unixfrom.asObject(), _python_str_plain_unixfrom ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 170 );
        return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_fp.asObject(), _python_str_plain_getvalue ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_unixfrom.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_g.updateLocalsDict( _python_var_fp.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_as_string_of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message )
        {
           Py_DECREF( frame_function_3_as_string_of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message );
           frame_function_3_as_string_of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_as_string_of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_unixfrom = NULL;
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
                PyErr_Format( PyExc_TypeError, "as_string() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "as_string() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_unixfrom == key )
            {
                if (unlikely( _python_par_unixfrom ))
                {
                    PyErr_Format( PyExc_TypeError, "as_string() got multiple values for keyword argument 'unixfrom'" );
                    goto error_exit;
                }

                _python_par_unixfrom = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "as_string() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_unixfrom, key ) )
            {
                if (unlikely( _python_par_unixfrom ))
                {
                    PyErr_Format( PyExc_TypeError, "as_string() got multiple values for keyword argument 'unixfrom'" );
                    goto error_exit;
                }

                _python_par_unixfrom = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "as_string() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "as_string() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "as_string() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "as_string() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "as_string() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "as_string() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "as_string() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "as_string() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "as_string() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "as_string() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "as_string() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "as_string() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "as_string() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "as_string() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_unixfrom != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "as_string() got multiple values for keyword argument 'unixfrom'" );
             goto error_exit;
         }

        _python_par_unixfrom = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_unixfrom == NULL )
    {
        _python_par_unixfrom = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_unixfrom );
    }


    return impl_function_3_as_string_of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message( self, _python_par_self, _python_par_unixfrom );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_unixfrom );

    return NULL;
}

static PyObject *dparse_function_3_as_string_of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_3_as_string_of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_as_string_of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_7_EmailMessage_of_module_django__core__mail__message(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var_content_subtype( _python_str_plain_content_subtype );
    PyObjectLocalVariable _python_var_mixed_subtype( _python_str_plain_mixed_subtype );
    PyObjectLocalVariable _python_var_encoding( _python_str_plain_encoding );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_get_connection( _python_str_plain_get_connection );
    PyObjectLocalVariable _python_var_message( _python_str_plain_message );
    PyObjectLocalVariable _python_var_recipients( _python_str_plain_recipients );
    PyObjectLocalVariable _python_var_send( _python_str_plain_send );
    PyObjectLocalVariable _python_var_attach( _python_str_plain_attach );
    PyObjectLocalVariable _python_var_attach_file( _python_str_plain_attach_file );
    PyObjectLocalVariable _python_var__create_message( _python_str_plain__create_message );
    PyObjectLocalVariable _python_var__create_attachments( _python_str_plain__create_attachments );
    PyObjectLocalVariable _python_var__create_mime_attachment( _python_str_plain__create_mime_attachment );
    PyObjectLocalVariable _python_var__create_attachment( _python_str_plain__create_attachment );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_message );
    _python_var___doc__.assign0( _python_unicode_digest_3f0f39586c0c2930d8cb1570fa598266 );
    _python_var_content_subtype.assign0( _python_unicode_plain_plain );
    _python_var_mixed_subtype.assign0( _python_unicode_plain_mixed );
    _python_var_encoding.assign0( Py_None );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_7_EmailMessage_of_module_django__core__mail__message(  ) );
    _python_var_get_connection.assign1( MAKE_FUNCTION_function_2_get_connection_of_class_7_EmailMessage_of_module_django__core__mail__message(  ) );
    _python_var_message.assign1( MAKE_FUNCTION_function_3_message_of_class_7_EmailMessage_of_module_django__core__mail__message(  ) );
    _python_var_recipients.assign1( MAKE_FUNCTION_function_4_recipients_of_class_7_EmailMessage_of_module_django__core__mail__message(  ) );
    _python_var_send.assign1( MAKE_FUNCTION_function_5_send_of_class_7_EmailMessage_of_module_django__core__mail__message(  ) );
    _python_var_attach.assign1( MAKE_FUNCTION_function_6_attach_of_class_7_EmailMessage_of_module_django__core__mail__message(  ) );
    _python_var_attach_file.assign1( MAKE_FUNCTION_function_7_attach_file_of_class_7_EmailMessage_of_module_django__core__mail__message(  ) );
    _python_var__create_message.assign1( MAKE_FUNCTION_function_8__create_message_of_class_7_EmailMessage_of_module_django__core__mail__message(  ) );
    _python_var__create_attachments.assign1( MAKE_FUNCTION_function_9__create_attachments_of_class_7_EmailMessage_of_module_django__core__mail__message(  ) );
    _python_var__create_mime_attachment.assign1( MAKE_FUNCTION_function_10__create_mime_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message(  ) );
    _python_var__create_attachment.assign1( MAKE_FUNCTION_function_11__create_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message(  ) );
    return _python_var__create_attachment.updateLocalsDict( _python_var__create_mime_attachment.updateLocalsDict( _python_var__create_attachments.updateLocalsDict( _python_var__create_message.updateLocalsDict( _python_var_attach_file.updateLocalsDict( _python_var_attach.updateLocalsDict( _python_var_send.updateLocalsDict( _python_var_recipients.updateLocalsDict( _python_var_message.updateLocalsDict( _python_var_get_connection.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var_encoding.updateLocalsDict( _python_var_mixed_subtype.updateLocalsDict( _python_var_content_subtype.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_7_EmailMessage_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_subject, PyObject *_python_par_body, PyObject *_python_par_from_email, PyObject *_python_par_to, PyObject *_python_par_bcc, PyObject *_python_par_connection, PyObject *_python_par_attachments, PyObject *_python_par_headers, PyObject *_python_par_cc )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_subject( _python_str_plain_subject, _python_par_subject );
    PyObjectLocalParameterVariableNoDel _python_var_body( _python_str_plain_body, _python_par_body );
    PyObjectLocalParameterVariableNoDel _python_var_from_email( _python_str_plain_from_email, _python_par_from_email );
    PyObjectLocalParameterVariableNoDel _python_var_to( _python_str_plain_to, _python_par_to );
    PyObjectLocalParameterVariableNoDel _python_var_bcc( _python_str_plain_bcc, _python_par_bcc );
    PyObjectLocalParameterVariableNoDel _python_var_connection( _python_str_plain_connection, _python_par_connection );
    PyObjectLocalParameterVariableNoDel _python_var_attachments( _python_str_plain_attachments, _python_par_attachments );
    PyObjectLocalParameterVariableNoDel _python_var_headers( _python_str_plain_headers, _python_par_headers );
    PyObjectLocalParameterVariableNoDel _python_var_cc( _python_str_plain_cc, _python_par_cc );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_7_EmailMessage_of_module_django__core__mail__message = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_7_EmailMessage_of_module_django__core__mail__message ) )
    {
        if ( frame_function_1___init___of_class_7_EmailMessage_of_module_django__core__mail__message )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_7_EmailMessage_of_module_django__core__mail__message" );
#endif
            Py_DECREF( frame_function_1___init___of_class_7_EmailMessage_of_module_django__core__mail__message );
        }

        frame_function_1___init___of_class_7_EmailMessage_of_module_django__core__mail__message = MAKE_FRAME( _codeobj_c0f3d30d40585afdd33d7d1dbda993e9, _module_django__core__mail__message );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_7_EmailMessage_of_module_django__core__mail__message );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_7_EmailMessage_of_module_django__core__mail__message ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 191 );
        if ( CHECK_IF_TRUE( _python_var_to.asObject() ) )
        {
            frame_guard.setLineNumber( 192 );
            {
                PyObjectTempKeeper0 isinstance1;
                if ( (!( (!( ( isinstance1.assign( _python_var_to.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__mail__message_six.asObject0(), _python_str_plain_string_types ) ).asObject() ) ) )) )) )
            {
                frame_guard.setLineNumber( 192 );
                {
                        PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_AssertionError, PyObjectTemporary( MAKE_TUPLE1( _python_unicode_digest_c42e8bf8d5dad05c77be56fe883748e8 ) ).asObject() ) );
                        RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                }
            }
            }
            frame_guard.setLineNumber( 193 );
            {
                    PyObjectTemporary tmp_identifier( TO_LIST( _python_var_to.asObject() ) );
                    SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_to );
            }
        }
        else
        {
            frame_guard.setLineNumber( 195 );
            SET_ATTRIBUTE( PyObjectTemporary( PyList_New( 0 ) ).asObject(), _python_var_self.asObject(), _python_str_plain_to );
        }
        frame_guard.setLineNumber( 196 );
        if ( CHECK_IF_TRUE( _python_var_cc.asObject() ) )
        {
            frame_guard.setLineNumber( 197 );
            {
                PyObjectTempKeeper0 isinstance3;
                if ( (!( (!( ( isinstance3.assign( _python_var_cc.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__mail__message_six.asObject0(), _python_str_plain_string_types ) ).asObject() ) ) )) )) )
            {
                frame_guard.setLineNumber( 197 );
                {
                        PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_AssertionError, PyObjectTemporary( MAKE_TUPLE1( _python_unicode_digest_485029276ec192ff69b0fe4fef62febe ) ).asObject() ) );
                        RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                }
            }
            }
            frame_guard.setLineNumber( 198 );
            {
                    PyObjectTemporary tmp_identifier( TO_LIST( _python_var_cc.asObject() ) );
                    SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_cc );
            }
        }
        else
        {
            frame_guard.setLineNumber( 200 );
            SET_ATTRIBUTE( PyObjectTemporary( PyList_New( 0 ) ).asObject(), _python_var_self.asObject(), _python_str_plain_cc );
        }
        frame_guard.setLineNumber( 201 );
        if ( CHECK_IF_TRUE( _python_var_bcc.asObject() ) )
        {
            frame_guard.setLineNumber( 202 );
            {
                PyObjectTempKeeper0 isinstance5;
                if ( (!( (!( ( isinstance5.assign( _python_var_bcc.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance5.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__mail__message_six.asObject0(), _python_str_plain_string_types ) ).asObject() ) ) )) )) )
            {
                frame_guard.setLineNumber( 202 );
                {
                        PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_AssertionError, PyObjectTemporary( MAKE_TUPLE1( _python_unicode_digest_ac92c140f026fbd92f386f435e84117d ) ).asObject() ) );
                        RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                }
            }
            }
            frame_guard.setLineNumber( 203 );
            {
                    PyObjectTemporary tmp_identifier( TO_LIST( _python_var_bcc.asObject() ) );
                    SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_bcc );
            }
        }
        else
        {
            frame_guard.setLineNumber( 205 );
            SET_ATTRIBUTE( PyObjectTemporary( PyList_New( 0 ) ).asObject(), _python_var_self.asObject(), _python_str_plain_bcc );
        }
        frame_guard.setLineNumber( 206 );
        {
            PyObjectTempKeeper0 keeper_0;
            {
                PyObjectTemporary tmp_identifier( ( CHECK_IF_TRUE( keeper_0.assign( _python_var_from_email.asObject() ) ) ? INCREASE_REFCOUNT( keeper_0.asObject0() ) : LOOKUP_ATTRIBUTE( _mvar_django__core__mail__message_settings.asObject0(), _python_str_plain_DEFAULT_FROM_EMAIL ) ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_from_email );
        }
        }
        frame_guard.setLineNumber( 207 );
        {
                PyObject *tmp_identifier = _python_var_subject.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_subject );
        }
        frame_guard.setLineNumber( 208 );
        {
                PyObject *tmp_identifier = _python_var_body.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_body );
        }
        frame_guard.setLineNumber( 209 );
        {
            PyObjectTempKeeper0 keeper_1;
            {
                PyObjectTemporary tmp_identifier( ( CHECK_IF_TRUE( keeper_1.assign( _python_var_attachments.asObject() ) ) ? INCREASE_REFCOUNT( keeper_1.asObject0() ) : PyList_New( 0 ) ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_attachments );
        }
        }
        frame_guard.setLineNumber( 210 );
        {
            PyObjectTempKeeper0 keeper_2;
            {
                PyObjectTemporary tmp_identifier( ( CHECK_IF_TRUE( keeper_2.assign( _python_var_headers.asObject() ) ) ? INCREASE_REFCOUNT( keeper_2.asObject0() ) : PyDict_New() ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_extra_headers );
        }
        }
        frame_guard.setLineNumber( 211 );
        {
                PyObject *tmp_identifier = _python_var_connection.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_connection );
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
        frame_guard.getFrame0()->f_locals = _python_var_cc.updateLocalsDict( _python_var_headers.updateLocalsDict( _python_var_attachments.updateLocalsDict( _python_var_connection.updateLocalsDict( _python_var_bcc.updateLocalsDict( _python_var_to.updateLocalsDict( _python_var_from_email.updateLocalsDict( _python_var_body.updateLocalsDict( _python_var_subject.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_7_EmailMessage_of_module_django__core__mail__message )
        {
           Py_DECREF( frame_function_1___init___of_class_7_EmailMessage_of_module_django__core__mail__message );
           frame_function_1___init___of_class_7_EmailMessage_of_module_django__core__mail__message = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_7_EmailMessage_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_subject = NULL;
    PyObject *_python_par_body = NULL;
    PyObject *_python_par_from_email = NULL;
    PyObject *_python_par_to = NULL;
    PyObject *_python_par_bcc = NULL;
    PyObject *_python_par_connection = NULL;
    PyObject *_python_par_attachments = NULL;
    PyObject *_python_par_headers = NULL;
    PyObject *_python_par_cc = NULL;
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
            if ( found == false && _python_str_plain_subject == key )
            {
                if (unlikely( _python_par_subject ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'subject'" );
                    goto error_exit;
                }

                _python_par_subject = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_body == key )
            {
                if (unlikely( _python_par_body ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'body'" );
                    goto error_exit;
                }

                _python_par_body = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_from_email == key )
            {
                if (unlikely( _python_par_from_email ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'from_email'" );
                    goto error_exit;
                }

                _python_par_from_email = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_to == key )
            {
                if (unlikely( _python_par_to ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'to'" );
                    goto error_exit;
                }

                _python_par_to = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_bcc == key )
            {
                if (unlikely( _python_par_bcc ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'bcc'" );
                    goto error_exit;
                }

                _python_par_bcc = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_connection == key )
            {
                if (unlikely( _python_par_connection ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'connection'" );
                    goto error_exit;
                }

                _python_par_connection = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_attachments == key )
            {
                if (unlikely( _python_par_attachments ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'attachments'" );
                    goto error_exit;
                }

                _python_par_attachments = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_headers == key )
            {
                if (unlikely( _python_par_headers ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'headers'" );
                    goto error_exit;
                }

                _python_par_headers = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_cc == key )
            {
                if (unlikely( _python_par_cc ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'cc'" );
                    goto error_exit;
                }

                _python_par_cc = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_subject, key ) )
            {
                if (unlikely( _python_par_subject ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'subject'" );
                    goto error_exit;
                }

                _python_par_subject = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_body, key ) )
            {
                if (unlikely( _python_par_body ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'body'" );
                    goto error_exit;
                }

                _python_par_body = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_from_email, key ) )
            {
                if (unlikely( _python_par_from_email ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'from_email'" );
                    goto error_exit;
                }

                _python_par_from_email = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_to, key ) )
            {
                if (unlikely( _python_par_to ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'to'" );
                    goto error_exit;
                }

                _python_par_to = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_bcc, key ) )
            {
                if (unlikely( _python_par_bcc ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'bcc'" );
                    goto error_exit;
                }

                _python_par_bcc = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_connection, key ) )
            {
                if (unlikely( _python_par_connection ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'connection'" );
                    goto error_exit;
                }

                _python_par_connection = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_attachments, key ) )
            {
                if (unlikely( _python_par_attachments ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'attachments'" );
                    goto error_exit;
                }

                _python_par_attachments = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_headers, key ) )
            {
                if (unlikely( _python_par_headers ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'headers'" );
                    goto error_exit;
                }

                _python_par_headers = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_cc, key ) )
            {
                if (unlikely( _python_par_cc ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'cc'" );
                    goto error_exit;
                }

                _python_par_cc = value;

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
    if (unlikely( args_given > 10 ))
    {
        if ( 10 == 1 )
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 10, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 10 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 10, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 10, args_given + kw_only_found );
            }
#else
            if ( 10 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes %d positional arguments but %zd were given", 10, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 10, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 10 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d non-keyword arguments (%zd given)", 10, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 10 == 1 )
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
    args_usable_count = args_given < 10 ? args_given : 10;

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
         if (unlikely( _python_par_subject != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'subject'" );
             goto error_exit;
         }

        _python_par_subject = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_body != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'body'" );
             goto error_exit;
         }

        _python_par_body = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_from_email != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'from_email'" );
             goto error_exit;
         }

        _python_par_from_email = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_to != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'to'" );
             goto error_exit;
         }

        _python_par_to = INCREASE_REFCOUNT( args[ 4 ] );
    }
    if (likely( 5 < args_usable_count ))
    {
         if (unlikely( _python_par_bcc != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'bcc'" );
             goto error_exit;
         }

        _python_par_bcc = INCREASE_REFCOUNT( args[ 5 ] );
    }
    if (likely( 6 < args_usable_count ))
    {
         if (unlikely( _python_par_connection != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'connection'" );
             goto error_exit;
         }

        _python_par_connection = INCREASE_REFCOUNT( args[ 6 ] );
    }
    if (likely( 7 < args_usable_count ))
    {
         if (unlikely( _python_par_attachments != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'attachments'" );
             goto error_exit;
         }

        _python_par_attachments = INCREASE_REFCOUNT( args[ 7 ] );
    }
    if (likely( 8 < args_usable_count ))
    {
         if (unlikely( _python_par_headers != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'headers'" );
             goto error_exit;
         }

        _python_par_headers = INCREASE_REFCOUNT( args[ 8 ] );
    }
    if (likely( 9 < args_usable_count ))
    {
         if (unlikely( _python_par_cc != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'cc'" );
             goto error_exit;
         }

        _python_par_cc = INCREASE_REFCOUNT( args[ 9 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_subject == NULL )
    {
        _python_par_subject = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_subject );
    }
    if ( _python_par_body == NULL )
    {
        _python_par_body = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_body );
    }
    if ( _python_par_from_email == NULL )
    {
        _python_par_from_email = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 2 ) );
        assertObject( _python_par_from_email );
    }
    if ( _python_par_to == NULL )
    {
        _python_par_to = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 3 ) );
        assertObject( _python_par_to );
    }
    if ( _python_par_bcc == NULL )
    {
        _python_par_bcc = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 4 ) );
        assertObject( _python_par_bcc );
    }
    if ( _python_par_connection == NULL )
    {
        _python_par_connection = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 5 ) );
        assertObject( _python_par_connection );
    }
    if ( _python_par_attachments == NULL )
    {
        _python_par_attachments = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 6 ) );
        assertObject( _python_par_attachments );
    }
    if ( _python_par_headers == NULL )
    {
        _python_par_headers = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 7 ) );
        assertObject( _python_par_headers );
    }
    if ( _python_par_cc == NULL )
    {
        _python_par_cc = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 8 ) );
        assertObject( _python_par_cc );
    }


    return impl_function_1___init___of_class_7_EmailMessage_of_module_django__core__mail__message( self, _python_par_self, _python_par_subject, _python_par_body, _python_par_from_email, _python_par_to, _python_par_bcc, _python_par_connection, _python_par_attachments, _python_par_headers, _python_par_cc );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_subject );
    Py_XDECREF( _python_par_body );
    Py_XDECREF( _python_par_from_email );
    Py_XDECREF( _python_par_to );
    Py_XDECREF( _python_par_bcc );
    Py_XDECREF( _python_par_connection );
    Py_XDECREF( _python_par_attachments );
    Py_XDECREF( _python_par_headers );
    Py_XDECREF( _python_par_cc );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_7_EmailMessage_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 10)
    {
        return impl_function_1___init___of_class_7_EmailMessage_of_module_django__core__mail__message( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ), INCREASE_REFCOUNT( args[ 7 ] ), INCREASE_REFCOUNT( args[ 8 ] ), INCREASE_REFCOUNT( args[ 9 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_7_EmailMessage_of_module_django__core__mail__message( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_get_connection_of_class_7_EmailMessage_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_fail_silently )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_fail_silently( _python_str_plain_fail_silently, _python_par_fail_silently );
    PyObjectLocalVariable _python_var_get_connection( _python_str_plain_get_connection );

    // Actual function code.
    static PyFrameObject *frame_function_2_get_connection_of_class_7_EmailMessage_of_module_django__core__mail__message = NULL;

    if ( isFrameUnusable( frame_function_2_get_connection_of_class_7_EmailMessage_of_module_django__core__mail__message ) )
    {
        if ( frame_function_2_get_connection_of_class_7_EmailMessage_of_module_django__core__mail__message )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_get_connection_of_class_7_EmailMessage_of_module_django__core__mail__message" );
#endif
            Py_DECREF( frame_function_2_get_connection_of_class_7_EmailMessage_of_module_django__core__mail__message );
        }

        frame_function_2_get_connection_of_class_7_EmailMessage_of_module_django__core__mail__message = MAKE_FRAME( _codeobj_365908686e79412f3b1cd56297abe432, _module_django__core__mail__message );
    }

    FrameGuard frame_guard( frame_function_2_get_connection_of_class_7_EmailMessage_of_module_django__core__mail__message );
    try
    {
        assert( Py_REFCNT( frame_function_2_get_connection_of_class_7_EmailMessage_of_module_django__core__mail__message ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 214 );
        _python_var_get_connection.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_ea9bb7eb68e7731112941509331ba08f, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, PyObjectTemporary( _python_var_fail_silently.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_get_connection.updateLocalsDict( PyDict_New() ) ) ) ).asObject(), _python_list_str_plain_get_connection_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_get_connection ) );
        frame_guard.setLineNumber( 215 );
        if ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_connection ) ).asObject() ) )) )
        {
            frame_guard.setLineNumber( 216 );
            {
                PyObjectTempKeeper0 call1;
                {
                    PyObjectTemporary tmp_identifier( ( call1.assign( _python_var_get_connection.asObject() ), CALL_FUNCTION( call1.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT1( _python_var_fail_silently.asObject(), _python_str_plain_fail_silently ) ).asObject() ) ) );
                    SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_connection );
            }
            }
        }
        frame_guard.setLineNumber( 217 );
        return LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_connection );
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
        frame_guard.getFrame0()->f_locals = _python_var_fail_silently.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_get_connection.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_get_connection_of_class_7_EmailMessage_of_module_django__core__mail__message )
        {
           Py_DECREF( frame_function_2_get_connection_of_class_7_EmailMessage_of_module_django__core__mail__message );
           frame_function_2_get_connection_of_class_7_EmailMessage_of_module_django__core__mail__message = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_get_connection_of_class_7_EmailMessage_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_fail_silently = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_connection() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "get_connection() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_fail_silently == key )
            {
                if (unlikely( _python_par_fail_silently ))
                {
                    PyErr_Format( PyExc_TypeError, "get_connection() got multiple values for keyword argument 'fail_silently'" );
                    goto error_exit;
                }

                _python_par_fail_silently = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "get_connection() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_fail_silently, key ) )
            {
                if (unlikely( _python_par_fail_silently ))
                {
                    PyErr_Format( PyExc_TypeError, "get_connection() got multiple values for keyword argument 'fail_silently'" );
                    goto error_exit;
                }

                _python_par_fail_silently = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_connection() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_connection() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_connection() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_connection() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_connection() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_connection() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_connection() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_connection() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_connection() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_connection() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_connection() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_connection() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_connection() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "get_connection() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_fail_silently != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_connection() got multiple values for keyword argument 'fail_silently'" );
             goto error_exit;
         }

        _python_par_fail_silently = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_fail_silently == NULL )
    {
        _python_par_fail_silently = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_fail_silently );
    }


    return impl_function_2_get_connection_of_class_7_EmailMessage_of_module_django__core__mail__message( self, _python_par_self, _python_par_fail_silently );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_fail_silently );

    return NULL;
}

static PyObject *dparse_function_2_get_connection_of_class_7_EmailMessage_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2_get_connection_of_class_7_EmailMessage_of_module_django__core__mail__message( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_get_connection_of_class_7_EmailMessage_of_module_django__core__mail__message( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_message_of_class_7_EmailMessage_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_encoding( _python_str_plain_encoding );
    PyObjectLocalVariable _python_var_msg( _python_str_plain_msg );
    PyObjectLocalVariable _python_var_header_names( _python_str_plain_header_names );
    PyObjectLocalVariable _python_var_name( _python_str_plain_name );
    PyObjectLocalVariable _python_var_value( _python_str_plain_value );
    PyObjectLocalVariable _python_var_key( _python_str_plain_key );

    // Actual function code.
    static PyFrameObject *frame_function_3_message_of_class_7_EmailMessage_of_module_django__core__mail__message = NULL;

    if ( isFrameUnusable( frame_function_3_message_of_class_7_EmailMessage_of_module_django__core__mail__message ) )
    {
        if ( frame_function_3_message_of_class_7_EmailMessage_of_module_django__core__mail__message )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_message_of_class_7_EmailMessage_of_module_django__core__mail__message" );
#endif
            Py_DECREF( frame_function_3_message_of_class_7_EmailMessage_of_module_django__core__mail__message );
        }

        frame_function_3_message_of_class_7_EmailMessage_of_module_django__core__mail__message = MAKE_FRAME( _codeobj_c6a67ea2a3765dc75f59313c75efdbc3, _module_django__core__mail__message );
    }

    FrameGuard frame_guard( frame_function_3_message_of_class_7_EmailMessage_of_module_django__core__mail__message );
    try
    {
        assert( Py_REFCNT( frame_function_3_message_of_class_7_EmailMessage_of_module_django__core__mail__message ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 220 );
        {
            PyObjectTempKeeper1 keeper_0;
            _python_var_encoding.assign1( ( CHECK_IF_TRUE( keeper_0.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_encoding ) ) ) ? keeper_0.asObject() : LOOKUP_ATTRIBUTE( _mvar_django__core__mail__message_settings.asObject0(), _python_str_plain_DEFAULT_CHARSET ) ) );
        }
        frame_guard.setLineNumber( 221 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper1 call2;
            PyObjectTempKeeper1 call3;
            _python_var_msg.assign1( ( call1.assign( _mvar_django__core__mail__message_SafeMIMEText.asObject0() ), call2.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_body ) ), call3.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_content_subtype ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), call3.asObject0(), _python_var_encoding.asObject() ) ) );
        }
        frame_guard.setLineNumber( 222 );
        {
            PyObjectTempKeeper1 call5;
            _python_var_msg.assign1( ( call5.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__create_message ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_msg.asObject() ) ) );
        }
        frame_guard.setLineNumber( 223 );
        {
                PyObjectTemporary tmp_identifier( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_subject ) );
                SET_SUBSCRIPT( tmp_identifier.asObject(), _python_var_msg.asObject(), _python_unicode_plain_Subject );
        }
        frame_guard.setLineNumber( 224 );
        {
            PyObjectTempKeeper1 call7;
            {
                PyObjectTemporary tmp_identifier( ( call7.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_extra_headers ) ).asObject(), _python_str_plain_get ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _python_unicode_plain_From, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_from_email ) ).asObject() ) ) );
                SET_SUBSCRIPT( tmp_identifier.asObject(), _python_var_msg.asObject(), _python_unicode_plain_From );
        }
        }
        frame_guard.setLineNumber( 225 );
        {
            PyObjectTempKeeper1 call10;
            PyObjectTempKeeper1 call12;
            {
                PyObjectTemporary tmp_identifier( ( call12.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_extra_headers ) ).asObject(), _python_str_plain_get ) ), CALL_FUNCTION_WITH_ARGS( call12.asObject0(), _python_unicode_plain_To, PyObjectTemporary( ( call10.assign( LOOKUP_ATTRIBUTE( _python_unicode_digest_fc763cb31e9938f37737394681228f83, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_to ) ).asObject() ) ) ).asObject() ) ) );
                SET_SUBSCRIPT( tmp_identifier.asObject(), _python_var_msg.asObject(), _python_unicode_plain_To );
        }
        }
        frame_guard.setLineNumber( 226 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_cc ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 227 );
            {
                PyObjectTempKeeper1 call15;
                {
                    PyObjectTemporary tmp_identifier( ( call15.assign( LOOKUP_ATTRIBUTE( _python_unicode_digest_fc763cb31e9938f37737394681228f83, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call15.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_cc ) ).asObject() ) ) );
                    SET_SUBSCRIPT( tmp_identifier.asObject(), _python_var_msg.asObject(), _python_unicode_plain_Cc );
            }
            }
        }
        frame_guard.setLineNumber( 231 );
        _python_var_header_names.assign1( impl_listcontr_1_of_function_3_message_of_class_7_EmailMessage_of_module_django__core__mail__message( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_extra_headers ) ).asObject() ), _python_var_key ) );
        frame_guard.setLineNumber( 232 );
        if ( SEQUENCE_CONTAINS_NOT_BOOL( _python_unicode_plain_date, _python_var_header_names.asObject() ) )
        {
            frame_guard.setLineNumber( 233 );
            {
                    PyObjectTemporary tmp_identifier( CALL_FUNCTION_NO_ARGS( _mvar_django__core__mail__message_formatdate.asObject0() ) );
                    SET_SUBSCRIPT( tmp_identifier.asObject(), _python_var_msg.asObject(), _python_unicode_plain_Date );
            }
        }
        frame_guard.setLineNumber( 234 );
        if ( SEQUENCE_CONTAINS_NOT_BOOL( _python_unicode_digest_5737e797c58db6d71a3234b6b4ebf009, _python_var_header_names.asObject() ) )
        {
            frame_guard.setLineNumber( 235 );
            {
                    PyObjectTemporary tmp_identifier( CALL_FUNCTION_NO_ARGS( _mvar_django__core__mail__message_make_msgid.asObject0() ) );
                    SET_SUBSCRIPT( tmp_identifier.asObject(), _python_var_msg.asObject(), _python_unicode_digest_db6242debc08754b17f05726876775ee );
            }
        }
        {
            frame_guard.setLineNumber( 236 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_extra_headers ) ).asObject(), _python_str_plain_items ) ).asObject() ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 236 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    {
                        frame_guard.setLineNumber( 236 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_name.assign0( _python_tmp_element_1.asObject() );
                        _python_var_value.assign0( _python_tmp_element_2.asObject() );
                    }
                }
                frame_guard.setLineNumber( 237 );
                if ( SEQUENCE_CONTAINS_BOOL( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_name.asObject(), _python_str_plain_lower ) ).asObject() ) ).asObject(), _python_tuple_unicode_plain_from_unicode_plain_to_tuple ) )
                {
                    frame_guard.setLineNumber( 238 );
                    CONSIDER_THREADING(); continue;
                }
                frame_guard.setLineNumber( 239 );
                {
                        PyObject *tmp_identifier = _python_var_value.asObject();
                        PyObject *tmp_subscribed = _python_var_msg.asObject();
                        SET_SUBSCRIPT( tmp_identifier, tmp_subscribed, _python_var_name.asObject() );
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 240 );
        return _python_var_msg.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_key.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var_header_names.updateLocalsDict( _python_var_msg.updateLocalsDict( _python_var_encoding.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_message_of_class_7_EmailMessage_of_module_django__core__mail__message )
        {
           Py_DECREF( frame_function_3_message_of_class_7_EmailMessage_of_module_django__core__mail__message );
           frame_function_3_message_of_class_7_EmailMessage_of_module_django__core__mail__message = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_message_of_class_7_EmailMessage_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "message() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "message() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "message() got multiple values for keyword argument 'self'" );
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
                   "message() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "message() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "message() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "message() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "message() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "message() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "message() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "message() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "message() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "message() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "message() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "message() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "message() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "message() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_3_message_of_class_7_EmailMessage_of_module_django__core__mail__message( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3_message_of_class_7_EmailMessage_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3_message_of_class_7_EmailMessage_of_module_django__core__mail__message( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_message_of_class_7_EmailMessage_of_module_django__core__mail__message( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_3_message_of_class_7_EmailMessage_of_module_django__core__mail__message( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_key )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 231 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 231 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_key.assign0( _python_tmp_iter_value.asObject() );
                APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( python_closure_key.asObject(), _python_str_plain_lower ) ).asObject() ) ).asObject() ), Py_None;

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_4_recipients_of_class_7_EmailMessage_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_4_recipients_of_class_7_EmailMessage_of_module_django__core__mail__message = NULL;

    if ( isFrameUnusable( frame_function_4_recipients_of_class_7_EmailMessage_of_module_django__core__mail__message ) )
    {
        if ( frame_function_4_recipients_of_class_7_EmailMessage_of_module_django__core__mail__message )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_recipients_of_class_7_EmailMessage_of_module_django__core__mail__message" );
#endif
            Py_DECREF( frame_function_4_recipients_of_class_7_EmailMessage_of_module_django__core__mail__message );
        }

        frame_function_4_recipients_of_class_7_EmailMessage_of_module_django__core__mail__message = MAKE_FRAME( _codeobj_a0a7b5dda5fdf14a75d062a8ede95c40, _module_django__core__mail__message );
    }

    FrameGuard frame_guard( frame_function_4_recipients_of_class_7_EmailMessage_of_module_django__core__mail__message );
    try
    {
        assert( Py_REFCNT( frame_function_4_recipients_of_class_7_EmailMessage_of_module_django__core__mail__message ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 247 );
        {
            PyObjectTempKeeper1 op1;
            PyObjectTempKeeper1 op3;
            return ( op3.assign( ( op1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_to ) ), BINARY_OPERATION_ADD( op1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_cc ) ).asObject() ) ) ), BINARY_OPERATION_ADD( op3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_bcc ) ).asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_4_recipients_of_class_7_EmailMessage_of_module_django__core__mail__message )
        {
           Py_DECREF( frame_function_4_recipients_of_class_7_EmailMessage_of_module_django__core__mail__message );
           frame_function_4_recipients_of_class_7_EmailMessage_of_module_django__core__mail__message = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_recipients_of_class_7_EmailMessage_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "recipients() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "recipients() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "recipients() got multiple values for keyword argument 'self'" );
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
                   "recipients() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "recipients() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "recipients() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "recipients() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "recipients() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "recipients() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "recipients() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "recipients() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "recipients() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "recipients() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "recipients() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "recipients() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "recipients() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "recipients() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_4_recipients_of_class_7_EmailMessage_of_module_django__core__mail__message( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_4_recipients_of_class_7_EmailMessage_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_4_recipients_of_class_7_EmailMessage_of_module_django__core__mail__message( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_recipients_of_class_7_EmailMessage_of_module_django__core__mail__message( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_send_of_class_7_EmailMessage_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_fail_silently )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_fail_silently( _python_str_plain_fail_silently, _python_par_fail_silently );

    // Actual function code.
    static PyFrameObject *frame_function_5_send_of_class_7_EmailMessage_of_module_django__core__mail__message = NULL;

    if ( isFrameUnusable( frame_function_5_send_of_class_7_EmailMessage_of_module_django__core__mail__message ) )
    {
        if ( frame_function_5_send_of_class_7_EmailMessage_of_module_django__core__mail__message )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_send_of_class_7_EmailMessage_of_module_django__core__mail__message" );
#endif
            Py_DECREF( frame_function_5_send_of_class_7_EmailMessage_of_module_django__core__mail__message );
        }

        frame_function_5_send_of_class_7_EmailMessage_of_module_django__core__mail__message = MAKE_FRAME( _codeobj_7b3145ca946b87ed90c9cb28968c406c, _module_django__core__mail__message );
    }

    FrameGuard frame_guard( frame_function_5_send_of_class_7_EmailMessage_of_module_django__core__mail__message );
    try
    {
        assert( Py_REFCNT( frame_function_5_send_of_class_7_EmailMessage_of_module_django__core__mail__message ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 251 );
        if ( (!( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_recipients ) ).asObject() ) ).asObject() ) )) )
        {
            return INCREASE_REFCOUNT( _python_int_0 );
        }
        frame_guard.setLineNumber( 255 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper1 call3;
            return ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get_connection ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_fail_silently.asObject() ) ) ).asObject(), _python_str_plain_send_messages ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( MAKE_LIST1( _python_var_self.asObject1() ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_fail_silently.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_5_send_of_class_7_EmailMessage_of_module_django__core__mail__message )
        {
           Py_DECREF( frame_function_5_send_of_class_7_EmailMessage_of_module_django__core__mail__message );
           frame_function_5_send_of_class_7_EmailMessage_of_module_django__core__mail__message = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5_send_of_class_7_EmailMessage_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_fail_silently = NULL;
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
                PyErr_Format( PyExc_TypeError, "send() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "send() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_fail_silently == key )
            {
                if (unlikely( _python_par_fail_silently ))
                {
                    PyErr_Format( PyExc_TypeError, "send() got multiple values for keyword argument 'fail_silently'" );
                    goto error_exit;
                }

                _python_par_fail_silently = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "send() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_fail_silently, key ) )
            {
                if (unlikely( _python_par_fail_silently ))
                {
                    PyErr_Format( PyExc_TypeError, "send() got multiple values for keyword argument 'fail_silently'" );
                    goto error_exit;
                }

                _python_par_fail_silently = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "send() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "send() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "send() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "send() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "send() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "send() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "send() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "send() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "send() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "send() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "send() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "send() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "send() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "send() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_fail_silently != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "send() got multiple values for keyword argument 'fail_silently'" );
             goto error_exit;
         }

        _python_par_fail_silently = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_fail_silently == NULL )
    {
        _python_par_fail_silently = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_fail_silently );
    }


    return impl_function_5_send_of_class_7_EmailMessage_of_module_django__core__mail__message( self, _python_par_self, _python_par_fail_silently );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_fail_silently );

    return NULL;
}

static PyObject *dparse_function_5_send_of_class_7_EmailMessage_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_5_send_of_class_7_EmailMessage_of_module_django__core__mail__message( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_send_of_class_7_EmailMessage_of_module_django__core__mail__message( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_attach_of_class_7_EmailMessage_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_filename, PyObject *_python_par_content, PyObject *_python_par_mimetype )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_filename( _python_str_plain_filename, _python_par_filename );
    PyObjectLocalParameterVariableNoDel _python_var_content( _python_str_plain_content, _python_par_content );
    PyObjectLocalParameterVariableNoDel _python_var_mimetype( _python_str_plain_mimetype, _python_par_mimetype );

    // Actual function code.
    static PyFrameObject *frame_function_6_attach_of_class_7_EmailMessage_of_module_django__core__mail__message = NULL;

    if ( isFrameUnusable( frame_function_6_attach_of_class_7_EmailMessage_of_module_django__core__mail__message ) )
    {
        if ( frame_function_6_attach_of_class_7_EmailMessage_of_module_django__core__mail__message )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6_attach_of_class_7_EmailMessage_of_module_django__core__mail__message" );
#endif
            Py_DECREF( frame_function_6_attach_of_class_7_EmailMessage_of_module_django__core__mail__message );
        }

        frame_function_6_attach_of_class_7_EmailMessage_of_module_django__core__mail__message = MAKE_FRAME( _codeobj_ac5143b16ac9eeed6a460f7ba3353bb2, _module_django__core__mail__message );
    }

    FrameGuard frame_guard( frame_function_6_attach_of_class_7_EmailMessage_of_module_django__core__mail__message );
    try
    {
        assert( Py_REFCNT( frame_function_6_attach_of_class_7_EmailMessage_of_module_django__core__mail__message ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 265 );
        {
            PyObjectTempKeeper0 isinstance10;
            if ( ( isinstance10.assign( _python_var_filename.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance10.asObject0(), _mvar_django__core__mail__message_MIMEBase.asObject0() ) ) )
        {
            frame_guard.setLineNumber( 266 );
            {
                PyObjectTempKeeper0 cmp1;
                PyObjectTempKeeper0 keeper_0;
                if ( (!( ( ( cmp1.assign( _python_var_content.asObject() ), RICH_COMPARE_BOOL_EQ( cmp1.asObject0(), keeper_0.assign( _python_var_mimetype.asObject() ) ) ) && RICH_COMPARE_BOOL_EQ( keeper_0.asObject0(), Py_None ) ) )) )
            {
                frame_guard.setLineNumber( 266 );
                RAISE_EXCEPTION_WITH_TYPE( PyExc_AssertionError, PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
            }
            frame_guard.setLineNumber( 267 );
            {
                PyObjectTempKeeper1 call3;
                DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_attachments ) ).asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_filename.asObject() ) ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 269 );
            if ( ( _python_var_content.asObject() == Py_None ) )
            {
                frame_guard.setLineNumber( 269 );
                RAISE_EXCEPTION_WITH_TYPE( PyExc_AssertionError, PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
            frame_guard.setLineNumber( 270 );
            {
                PyObjectTempKeeper1 call8;
                PyObjectTempKeeper0 make_tuple5;
                PyObjectTempKeeper0 make_tuple6;
                DECREASE_REFCOUNT( ( call8.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_attachments ) ).asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), PyObjectTemporary( ( make_tuple5.assign( _python_var_filename.asObject() ), make_tuple6.assign( _python_var_content.asObject() ), MAKE_TUPLE3( make_tuple5.asObject0(), make_tuple6.asObject0(), _python_var_mimetype.asObject() ) ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_mimetype.updateLocalsDict( _python_var_content.updateLocalsDict( _python_var_filename.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_6_attach_of_class_7_EmailMessage_of_module_django__core__mail__message )
        {
           Py_DECREF( frame_function_6_attach_of_class_7_EmailMessage_of_module_django__core__mail__message );
           frame_function_6_attach_of_class_7_EmailMessage_of_module_django__core__mail__message = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_6_attach_of_class_7_EmailMessage_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_filename = NULL;
    PyObject *_python_par_content = NULL;
    PyObject *_python_par_mimetype = NULL;
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
                PyErr_Format( PyExc_TypeError, "attach() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "attach() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_filename == key )
            {
                if (unlikely( _python_par_filename ))
                {
                    PyErr_Format( PyExc_TypeError, "attach() got multiple values for keyword argument 'filename'" );
                    goto error_exit;
                }

                _python_par_filename = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_content == key )
            {
                if (unlikely( _python_par_content ))
                {
                    PyErr_Format( PyExc_TypeError, "attach() got multiple values for keyword argument 'content'" );
                    goto error_exit;
                }

                _python_par_content = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_mimetype == key )
            {
                if (unlikely( _python_par_mimetype ))
                {
                    PyErr_Format( PyExc_TypeError, "attach() got multiple values for keyword argument 'mimetype'" );
                    goto error_exit;
                }

                _python_par_mimetype = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "attach() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_filename, key ) )
            {
                if (unlikely( _python_par_filename ))
                {
                    PyErr_Format( PyExc_TypeError, "attach() got multiple values for keyword argument 'filename'" );
                    goto error_exit;
                }

                _python_par_filename = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_content, key ) )
            {
                if (unlikely( _python_par_content ))
                {
                    PyErr_Format( PyExc_TypeError, "attach() got multiple values for keyword argument 'content'" );
                    goto error_exit;
                }

                _python_par_content = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_mimetype, key ) )
            {
                if (unlikely( _python_par_mimetype ))
                {
                    PyErr_Format( PyExc_TypeError, "attach() got multiple values for keyword argument 'mimetype'" );
                    goto error_exit;
                }

                _python_par_mimetype = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "attach() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "attach() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "attach() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "attach() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "attach() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "attach() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "attach() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "attach() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "attach() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 4 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "attach() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "attach() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "attach() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "attach() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 4 ? args_given : 4;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "attach() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_filename != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "attach() got multiple values for keyword argument 'filename'" );
             goto error_exit;
         }

        _python_par_filename = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_content != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "attach() got multiple values for keyword argument 'content'" );
             goto error_exit;
         }

        _python_par_content = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_mimetype != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "attach() got multiple values for keyword argument 'mimetype'" );
             goto error_exit;
         }

        _python_par_mimetype = INCREASE_REFCOUNT( args[ 3 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_filename == NULL )
    {
        _python_par_filename = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_filename );
    }
    if ( _python_par_content == NULL )
    {
        _python_par_content = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_content );
    }
    if ( _python_par_mimetype == NULL )
    {
        _python_par_mimetype = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 2 ) );
        assertObject( _python_par_mimetype );
    }


    return impl_function_6_attach_of_class_7_EmailMessage_of_module_django__core__mail__message( self, _python_par_self, _python_par_filename, _python_par_content, _python_par_mimetype );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_filename );
    Py_XDECREF( _python_par_content );
    Py_XDECREF( _python_par_mimetype );

    return NULL;
}

static PyObject *dparse_function_6_attach_of_class_7_EmailMessage_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_6_attach_of_class_7_EmailMessage_of_module_django__core__mail__message( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_attach_of_class_7_EmailMessage_of_module_django__core__mail__message( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7_attach_file_of_class_7_EmailMessage_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_path, PyObject *_python_par_mimetype )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_path( _python_str_plain_path, _python_par_path );
    PyObjectLocalParameterVariableNoDel _python_var_mimetype( _python_str_plain_mimetype, _python_par_mimetype );
    PyObjectLocalVariable _python_var_filename( _python_str_plain_filename );
    PyObjectLocalVariable _python_var_f( _python_str_plain_f );
    PyObjectLocalVariable _python_var_content( _python_str_plain_content );

    // Actual function code.
    static PyFrameObject *frame_function_7_attach_file_of_class_7_EmailMessage_of_module_django__core__mail__message = NULL;

    if ( isFrameUnusable( frame_function_7_attach_file_of_class_7_EmailMessage_of_module_django__core__mail__message ) )
    {
        if ( frame_function_7_attach_file_of_class_7_EmailMessage_of_module_django__core__mail__message )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_7_attach_file_of_class_7_EmailMessage_of_module_django__core__mail__message" );
#endif
            Py_DECREF( frame_function_7_attach_file_of_class_7_EmailMessage_of_module_django__core__mail__message );
        }

        frame_function_7_attach_file_of_class_7_EmailMessage_of_module_django__core__mail__message = MAKE_FRAME( _codeobj_03a64a58d48805f1a1a17fe664b55678, _module_django__core__mail__message );
    }

    FrameGuard frame_guard( frame_function_7_attach_file_of_class_7_EmailMessage_of_module_django__core__mail__message );
    try
    {
        assert( Py_REFCNT( frame_function_7_attach_file_of_class_7_EmailMessage_of_module_django__core__mail__message ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 274 );
        {
            PyObjectTempKeeper1 call1;
            _python_var_filename.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__mail__message_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_basename ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_path.asObject() ) ) );
        }
        {
            frame_guard.setLineNumber( 275 );
            PyObjectTemporary _python_tmp_with_source( OPEN_FILE( _python_var_path.asObject(), _python_unicode_plain_rb, NULL ) );
            PyObjectTemporary _python_tmp_with_exit( LOOKUP_SPECIAL( _python_tmp_with_source.asObject(), _python_str_plain___exit__ ) );
            PyObjectTemporary _python_tmp_with_enter( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_SPECIAL( _python_tmp_with_source.asObject(), _python_str_plain___enter__ ) ).asObject() ) );
            PyObject *_python_tmp_indicator = Py_True;
            PythonExceptionKeeper _caught_1;


            try
            {
                try
                {
                    _python_var_f.assign0( _python_tmp_with_enter.asObject() );
                    frame_guard.setLineNumber( 276 );
                    _python_var_content.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_read ) ).asObject() ) );
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

                    if ( _exception.matches( PyExc_BaseException ) )
                    {
                        frame_guard.detachFrame();
                        _python_tmp_indicator = Py_False;
                        if ( (!( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _python_tmp_with_exit.asObject(), _exception.getType(), _exception.getValue(), (PyObject *)_exception.getTraceback() ) ).asObject() ) )) )
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

                _caught_1.save( _exception );

#if PYTHON_VERSION >= 300
                frame_guard.preserveExistingException();

                _exception.toExceptionHandler();
#endif
            }

            // Final code:
            if ( ( _python_tmp_indicator == Py_True ) )
            {
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( _python_tmp_with_exit.asObject(), Py_None, Py_None, Py_None ) );
            }
            _caught_1.rethrow();
        }
        frame_guard.setLineNumber( 277 );
        {
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper0 call4;
            PyObjectTempKeeper0 call5;
            DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_attach ) ), call4.assign( _python_var_filename.asObject() ), call5.assign( _python_var_content.asObject() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), call4.asObject0(), call5.asObject0(), _python_var_mimetype.asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_mimetype.updateLocalsDict( _python_var_path.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_content.updateLocalsDict( _python_var_f.updateLocalsDict( _python_var_filename.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_7_attach_file_of_class_7_EmailMessage_of_module_django__core__mail__message )
        {
           Py_DECREF( frame_function_7_attach_file_of_class_7_EmailMessage_of_module_django__core__mail__message );
           frame_function_7_attach_file_of_class_7_EmailMessage_of_module_django__core__mail__message = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_7_attach_file_of_class_7_EmailMessage_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_path = NULL;
    PyObject *_python_par_mimetype = NULL;
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
                PyErr_Format( PyExc_TypeError, "attach_file() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "attach_file() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "attach_file() got multiple values for keyword argument 'path'" );
                    goto error_exit;
                }

                _python_par_path = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_mimetype == key )
            {
                if (unlikely( _python_par_mimetype ))
                {
                    PyErr_Format( PyExc_TypeError, "attach_file() got multiple values for keyword argument 'mimetype'" );
                    goto error_exit;
                }

                _python_par_mimetype = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "attach_file() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "attach_file() got multiple values for keyword argument 'path'" );
                    goto error_exit;
                }

                _python_par_path = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_mimetype, key ) )
            {
                if (unlikely( _python_par_mimetype ))
                {
                    PyErr_Format( PyExc_TypeError, "attach_file() got multiple values for keyword argument 'mimetype'" );
                    goto error_exit;
                }

                _python_par_mimetype = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "attach_file() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "attach_file() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "attach_file() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "attach_file() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "attach_file() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "attach_file() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "attach_file() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "attach_file() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "attach_file() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "attach_file() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "attach_file() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "attach_file() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "attach_file() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "attach_file() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_path != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "attach_file() got multiple values for keyword argument 'path'" );
             goto error_exit;
         }

        _python_par_path = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_mimetype != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "attach_file() got multiple values for keyword argument 'mimetype'" );
             goto error_exit;
         }

        _python_par_mimetype = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_mimetype == NULL )
    {
        _python_par_mimetype = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_mimetype );
    }


    return impl_function_7_attach_file_of_class_7_EmailMessage_of_module_django__core__mail__message( self, _python_par_self, _python_par_path, _python_par_mimetype );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_path );
    Py_XDECREF( _python_par_mimetype );

    return NULL;
}

static PyObject *dparse_function_7_attach_file_of_class_7_EmailMessage_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_7_attach_file_of_class_7_EmailMessage_of_module_django__core__mail__message( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7_attach_file_of_class_7_EmailMessage_of_module_django__core__mail__message( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8__create_message_of_class_7_EmailMessage_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_msg )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_msg( _python_str_plain_msg, _python_par_msg );

    // Actual function code.
    static PyFrameObject *frame_function_8__create_message_of_class_7_EmailMessage_of_module_django__core__mail__message = NULL;

    if ( isFrameUnusable( frame_function_8__create_message_of_class_7_EmailMessage_of_module_django__core__mail__message ) )
    {
        if ( frame_function_8__create_message_of_class_7_EmailMessage_of_module_django__core__mail__message )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_8__create_message_of_class_7_EmailMessage_of_module_django__core__mail__message" );
#endif
            Py_DECREF( frame_function_8__create_message_of_class_7_EmailMessage_of_module_django__core__mail__message );
        }

        frame_function_8__create_message_of_class_7_EmailMessage_of_module_django__core__mail__message = MAKE_FRAME( _codeobj_b55a9b9736eb291a91fdab0154034b33, _module_django__core__mail__message );
    }

    FrameGuard frame_guard( frame_function_8__create_message_of_class_7_EmailMessage_of_module_django__core__mail__message );
    try
    {
        assert( Py_REFCNT( frame_function_8__create_message_of_class_7_EmailMessage_of_module_django__core__mail__message ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 280 );
        {
            PyObjectTempKeeper1 call1;
            return ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__create_attachments ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_msg.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_msg.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_8__create_message_of_class_7_EmailMessage_of_module_django__core__mail__message )
        {
           Py_DECREF( frame_function_8__create_message_of_class_7_EmailMessage_of_module_django__core__mail__message );
           frame_function_8__create_message_of_class_7_EmailMessage_of_module_django__core__mail__message = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_8__create_message_of_class_7_EmailMessage_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_msg = NULL;
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
                PyErr_Format( PyExc_TypeError, "_create_message() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_create_message() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_msg == key )
            {
                if (unlikely( _python_par_msg ))
                {
                    PyErr_Format( PyExc_TypeError, "_create_message() got multiple values for keyword argument 'msg'" );
                    goto error_exit;
                }

                _python_par_msg = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "_create_message() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_msg, key ) )
            {
                if (unlikely( _python_par_msg ))
                {
                    PyErr_Format( PyExc_TypeError, "_create_message() got multiple values for keyword argument 'msg'" );
                    goto error_exit;
                }

                _python_par_msg = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_create_message() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_create_message() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_create_message() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_create_message() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_create_message() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_create_message() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_create_message() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_create_message() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_create_message() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_create_message() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_create_message() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "_create_message() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_create_message() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_create_message() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_msg != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_create_message() got multiple values for keyword argument 'msg'" );
             goto error_exit;
         }

        _python_par_msg = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_8__create_message_of_class_7_EmailMessage_of_module_django__core__mail__message( self, _python_par_self, _python_par_msg );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_msg );

    return NULL;
}

static PyObject *dparse_function_8__create_message_of_class_7_EmailMessage_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_8__create_message_of_class_7_EmailMessage_of_module_django__core__mail__message( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8__create_message_of_class_7_EmailMessage_of_module_django__core__mail__message( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9__create_attachments_of_class_7_EmailMessage_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_msg )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_msg( _python_str_plain_msg, _python_par_msg );
    PyObjectLocalVariable _python_var_encoding( _python_str_plain_encoding );
    PyObjectLocalVariable _python_var_body_msg( _python_str_plain_body_msg );
    PyObjectLocalVariable _python_var_attachment( _python_str_plain_attachment );

    // Actual function code.
    static PyFrameObject *frame_function_9__create_attachments_of_class_7_EmailMessage_of_module_django__core__mail__message = NULL;

    if ( isFrameUnusable( frame_function_9__create_attachments_of_class_7_EmailMessage_of_module_django__core__mail__message ) )
    {
        if ( frame_function_9__create_attachments_of_class_7_EmailMessage_of_module_django__core__mail__message )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_9__create_attachments_of_class_7_EmailMessage_of_module_django__core__mail__message" );
#endif
            Py_DECREF( frame_function_9__create_attachments_of_class_7_EmailMessage_of_module_django__core__mail__message );
        }

        frame_function_9__create_attachments_of_class_7_EmailMessage_of_module_django__core__mail__message = MAKE_FRAME( _codeobj_a13dc0b60d095a6731cc4f062808cdda, _module_django__core__mail__message );
    }

    FrameGuard frame_guard( frame_function_9__create_attachments_of_class_7_EmailMessage_of_module_django__core__mail__message );
    try
    {
        assert( Py_REFCNT( frame_function_9__create_attachments_of_class_7_EmailMessage_of_module_django__core__mail__message ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 283 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_attachments ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 284 );
            {
                PyObjectTempKeeper1 keeper_0;
                _python_var_encoding.assign1( ( CHECK_IF_TRUE( keeper_0.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_encoding ) ) ) ? keeper_0.asObject() : LOOKUP_ATTRIBUTE( _mvar_django__core__mail__message_settings.asObject0(), _python_str_plain_DEFAULT_CHARSET ) ) );
            }
            frame_guard.setLineNumber( 285 );
            _python_var_body_msg.assign0( _python_var_msg.asObject() );
            frame_guard.setLineNumber( 286 );
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper1 make_dict1;
                _python_var_msg.assign1( ( call5.assign( _mvar_django__core__mail__message_SafeMIMEMultipart.asObject0() ), CALL_FUNCTION( call5.asObject0(), _python_tuple_empty, PyObjectTemporary( ( make_dict1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_mixed_subtype ) ), MAKE_DICT2( make_dict1.asObject0(), _python_str_plain__subtype, _python_var_encoding.asObject(), _python_str_plain_encoding ) ) ).asObject() ) ) );
            }
            frame_guard.setLineNumber( 287 );
            if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_body ) ).asObject() ) )
            {
                frame_guard.setLineNumber( 288 );
                {
                    PyObjectTempKeeper1 call8;
                    DECREASE_REFCOUNT( ( call8.assign( LOOKUP_ATTRIBUTE( _python_var_msg.asObject(), _python_str_plain_attach ) ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), _python_var_body_msg.asObject() ) ) );
                }
            }
            {
                frame_guard.setLineNumber( 289 );
                PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_attachments ) ).asObject() ) );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 289 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        _python_var_attachment.assign0( _python_tmp_iter_value.asObject() );
                    }
                    frame_guard.setLineNumber( 290 );
                    {
                        PyObjectTempKeeper0 isinstance16;
                        if ( ( isinstance16.assign( _python_var_attachment.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance16.asObject0(), _mvar_django__core__mail__message_MIMEBase.asObject0() ) ) )
                    {
                        frame_guard.setLineNumber( 291 );
                        {
                            PyObjectTempKeeper1 call10;
                            DECREASE_REFCOUNT( ( call10.assign( LOOKUP_ATTRIBUTE( _python_var_msg.asObject(), _python_str_plain_attach ) ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), _python_var_attachment.asObject() ) ) );
                        }
                    }
                    else
                    {
                        frame_guard.setLineNumber( 293 );
                        {
                            PyObjectTempKeeper1 call14;
                            PyObjectTempKeeper1 call_tmp12;
                            DECREASE_REFCOUNT( ( call14.assign( LOOKUP_ATTRIBUTE( _python_var_msg.asObject(), _python_str_plain_attach ) ), CALL_FUNCTION_WITH_ARGS( call14.asObject0(), PyObjectTemporary( ( call_tmp12.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__create_attachment ) ), impl_function_7_complex_call_helper_star_list_of_module___internal__( call_tmp12.asObject(), _python_var_attachment.asObject1() ) ) ).asObject() ) ) );
                        }
                    }
                    }

                   CONSIDER_THREADING();
                }
            }
        }
        frame_guard.setLineNumber( 294 );
        return _python_var_msg.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_msg.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_attachment.updateLocalsDict( _python_var_body_msg.updateLocalsDict( _python_var_encoding.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_9__create_attachments_of_class_7_EmailMessage_of_module_django__core__mail__message )
        {
           Py_DECREF( frame_function_9__create_attachments_of_class_7_EmailMessage_of_module_django__core__mail__message );
           frame_function_9__create_attachments_of_class_7_EmailMessage_of_module_django__core__mail__message = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_9__create_attachments_of_class_7_EmailMessage_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_msg = NULL;
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
                PyErr_Format( PyExc_TypeError, "_create_attachments() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_create_attachments() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_msg == key )
            {
                if (unlikely( _python_par_msg ))
                {
                    PyErr_Format( PyExc_TypeError, "_create_attachments() got multiple values for keyword argument 'msg'" );
                    goto error_exit;
                }

                _python_par_msg = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "_create_attachments() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_msg, key ) )
            {
                if (unlikely( _python_par_msg ))
                {
                    PyErr_Format( PyExc_TypeError, "_create_attachments() got multiple values for keyword argument 'msg'" );
                    goto error_exit;
                }

                _python_par_msg = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_create_attachments() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_create_attachments() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_create_attachments() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_create_attachments() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_create_attachments() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_create_attachments() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_create_attachments() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_create_attachments() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_create_attachments() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_create_attachments() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_create_attachments() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "_create_attachments() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_create_attachments() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_create_attachments() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_msg != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_create_attachments() got multiple values for keyword argument 'msg'" );
             goto error_exit;
         }

        _python_par_msg = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_9__create_attachments_of_class_7_EmailMessage_of_module_django__core__mail__message( self, _python_par_self, _python_par_msg );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_msg );

    return NULL;
}

static PyObject *dparse_function_9__create_attachments_of_class_7_EmailMessage_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_9__create_attachments_of_class_7_EmailMessage_of_module_django__core__mail__message( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9__create_attachments_of_class_7_EmailMessage_of_module_django__core__mail__message( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_10__create_mime_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_content, PyObject *_python_par_mimetype )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_content( _python_str_plain_content, _python_par_content );
    PyObjectLocalParameterVariableNoDel _python_var_mimetype( _python_str_plain_mimetype, _python_par_mimetype );
    PyObjectLocalVariable _python_var_basetype( _python_str_plain_basetype );
    PyObjectLocalVariable _python_var_subtype( _python_str_plain_subtype );
    PyObjectLocalVariable _python_var_encoding( _python_str_plain_encoding );
    PyObjectLocalVariable _python_var_attachment( _python_str_plain_attachment );

    // Actual function code.
    static PyFrameObject *frame_function_10__create_mime_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message = NULL;

    if ( isFrameUnusable( frame_function_10__create_mime_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message ) )
    {
        if ( frame_function_10__create_mime_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_10__create_mime_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message" );
#endif
            Py_DECREF( frame_function_10__create_mime_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message );
        }

        frame_function_10__create_mime_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message = MAKE_FRAME( _codeobj_c2542e9d371820b8229dea4684c5be29, _module_django__core__mail__message );
    }

    FrameGuard frame_guard( frame_function_10__create_mime_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message );
    try
    {
        assert( Py_REFCNT( frame_function_10__create_mime_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 300 );
            PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_mimetype.asObject(), _python_str_plain_split ) ).asObject(), _python_unicode_chr_47, _python_int_pos_1 ) ).asObject() ) );
            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
            _python_var_basetype.assign0( _python_tmp_element_1.asObject() );
            _python_var_subtype.assign0( _python_tmp_element_2.asObject() );
        }
        frame_guard.setLineNumber( 301 );
        if ( RICH_COMPARE_BOOL_EQ( _python_var_basetype.asObject(), _python_unicode_plain_text ) )
        {
            frame_guard.setLineNumber( 302 );
            {
                PyObjectTempKeeper1 keeper_0;
                _python_var_encoding.assign1( ( CHECK_IF_TRUE( keeper_0.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_encoding ) ) ) ? keeper_0.asObject() : LOOKUP_ATTRIBUTE( _mvar_django__core__mail__message_settings.asObject0(), _python_str_plain_DEFAULT_CHARSET ) ) );
            }
            frame_guard.setLineNumber( 303 );
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call2;
                PyObjectTempKeeper0 call3;
                _python_var_attachment.assign1( ( call1.assign( _mvar_django__core__mail__message_SafeMIMEText.asObject0() ), call2.assign( _python_var_content.asObject() ), call3.assign( _python_var_subtype.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), call3.asObject0(), _python_var_encoding.asObject() ) ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 306 );
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper0 call6;
                _python_var_attachment.assign1( ( call5.assign( _mvar_django__core__mail__message_MIMEBase.asObject0() ), call6.assign( _python_var_basetype.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), call6.asObject0(), _python_var_subtype.asObject() ) ) );
            }
            frame_guard.setLineNumber( 307 );
            {
                PyObjectTempKeeper1 call8;
                DECREASE_REFCOUNT( ( call8.assign( LOOKUP_ATTRIBUTE( _python_var_attachment.asObject(), _python_str_plain_set_payload ) ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), _python_var_content.asObject() ) ) );
            }
            frame_guard.setLineNumber( 308 );
            {
                PyObjectTempKeeper1 call10;
                DECREASE_REFCOUNT( ( call10.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__mail__message_Encoders.asObject0(), _python_str_plain_encode_base64 ) ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), _python_var_attachment.asObject() ) ) );
            }
        }
        frame_guard.setLineNumber( 309 );
        return _python_var_attachment.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_mimetype.updateLocalsDict( _python_var_content.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_attachment.updateLocalsDict( _python_var_encoding.updateLocalsDict( _python_var_subtype.updateLocalsDict( _python_var_basetype.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_10__create_mime_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message )
        {
           Py_DECREF( frame_function_10__create_mime_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message );
           frame_function_10__create_mime_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_10__create_mime_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_content = NULL;
    PyObject *_python_par_mimetype = NULL;
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
                PyErr_Format( PyExc_TypeError, "_create_mime_attachment() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_create_mime_attachment() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_content == key )
            {
                if (unlikely( _python_par_content ))
                {
                    PyErr_Format( PyExc_TypeError, "_create_mime_attachment() got multiple values for keyword argument 'content'" );
                    goto error_exit;
                }

                _python_par_content = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_mimetype == key )
            {
                if (unlikely( _python_par_mimetype ))
                {
                    PyErr_Format( PyExc_TypeError, "_create_mime_attachment() got multiple values for keyword argument 'mimetype'" );
                    goto error_exit;
                }

                _python_par_mimetype = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "_create_mime_attachment() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_content, key ) )
            {
                if (unlikely( _python_par_content ))
                {
                    PyErr_Format( PyExc_TypeError, "_create_mime_attachment() got multiple values for keyword argument 'content'" );
                    goto error_exit;
                }

                _python_par_content = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_mimetype, key ) )
            {
                if (unlikely( _python_par_mimetype ))
                {
                    PyErr_Format( PyExc_TypeError, "_create_mime_attachment() got multiple values for keyword argument 'mimetype'" );
                    goto error_exit;
                }

                _python_par_mimetype = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_create_mime_attachment() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_create_mime_attachment() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_create_mime_attachment() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_create_mime_attachment() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_create_mime_attachment() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "_create_mime_attachment() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_create_mime_attachment() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "_create_mime_attachment() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_create_mime_attachment() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_create_mime_attachment() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_create_mime_attachment() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "_create_mime_attachment() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_create_mime_attachment() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_create_mime_attachment() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_content != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_create_mime_attachment() got multiple values for keyword argument 'content'" );
             goto error_exit;
         }

        _python_par_content = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_mimetype != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_create_mime_attachment() got multiple values for keyword argument 'mimetype'" );
             goto error_exit;
         }

        _python_par_mimetype = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_10__create_mime_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message( self, _python_par_self, _python_par_content, _python_par_mimetype );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_content );
    Py_XDECREF( _python_par_mimetype );

    return NULL;
}

static PyObject *dparse_function_10__create_mime_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_10__create_mime_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_10__create_mime_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_11__create_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_filename, PyObject *_python_par_content, PyObject *_python_par_mimetype )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_filename( _python_str_plain_filename, _python_par_filename );
    PyObjectLocalParameterVariableNoDel _python_var_content( _python_str_plain_content, _python_par_content );
    PyObjectLocalParameterVariableNoDel _python_var_mimetype( _python_str_plain_mimetype, _python_par_mimetype );
    PyObjectLocalVariable _python_var__( _python_str_plain__ );
    PyObjectLocalVariable _python_var_attachment( _python_str_plain_attachment );

    // Actual function code.
    static PyFrameObject *frame_function_11__create_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message = NULL;

    if ( isFrameUnusable( frame_function_11__create_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message ) )
    {
        if ( frame_function_11__create_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_11__create_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message" );
#endif
            Py_DECREF( frame_function_11__create_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message );
        }

        frame_function_11__create_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message = MAKE_FRAME( _codeobj_8df4097d77434d699bdc34656aab71d9, _module_django__core__mail__message );
    }

    FrameGuard frame_guard( frame_function_11__create_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message );
    try
    {
        assert( Py_REFCNT( frame_function_11__create_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 316 );
        if ( ( _python_var_mimetype.asObject() == Py_None ) )
        {
            {
                frame_guard.setLineNumber( 317 );
                PyObject *_tmp_python_tmp_source_iter;
                {
                    PyObjectTempKeeper1 call1;
                    _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__mail__message_mimetypes.asObject0(), _python_str_plain_guess_type ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_filename.asObject() ) ) ).asObject() );
                }
                PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                _python_var_mimetype.assign0( _python_tmp_element_1.asObject() );
                _python_var__.assign0( _python_tmp_element_2.asObject() );
            }
            frame_guard.setLineNumber( 318 );
            if ( ( _python_var_mimetype.asObject() == Py_None ) )
            {
                frame_guard.setLineNumber( 319 );
                _python_var_mimetype.assign0( _mvar_django__core__mail__message_DEFAULT_ATTACHMENT_MIME_TYPE.asObject0() );
            }
        }
        frame_guard.setLineNumber( 320 );
        {
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper0 call4;
            _python_var_attachment.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__create_mime_attachment ) ), call4.assign( _python_var_content.asObject() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), call4.asObject0(), _python_var_mimetype.asObject() ) ) );
        }
        frame_guard.setLineNumber( 321 );
        if ( CHECK_IF_TRUE( _python_var_filename.asObject() ) )
        {
            frame_guard.setLineNumber( 322 );
            try
            {
                frame_guard.setLineNumber( 323 );
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_filename.asObject(), _python_str_plain_encode ) ).asObject(), _python_unicode_plain_ascii ) );
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

                if ( _exception.matches( PyExc_UnicodeEncodeError ) )
                {
                    frame_guard.detachFrame();
                    frame_guard.setLineNumber( 325 );
                    if ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__mail__message_six.asObject0(), _python_str_plain_PY3 ) ).asObject() ) )) )
                    {
                        frame_guard.setLineNumber( 326 );
                        _python_var_filename.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_filename.asObject(), _python_str_plain_encode ) ).asObject(), _python_unicode_digest_e9e2aa8136260a22b0b09fdee43ccb8a ) );
                    }
                    frame_guard.setLineNumber( 327 );
                    _python_var_filename.assign1( MAKE_TUPLE3( _python_unicode_digest_e9e2aa8136260a22b0b09fdee43ccb8a, _python_unicode_empty, _python_var_filename.asObject() ) );
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
            frame_guard.setLineNumber( 328 );
            {
                PyObjectTempKeeper1 call6;
                DECREASE_REFCOUNT( ( call6.assign( LOOKUP_ATTRIBUTE( _python_var_attachment.asObject(), _python_str_plain_add_header ) ), CALL_FUNCTION( call6.asObject0(), _python_tuple_03795136f58f05c8b97a8caf710f18d8_tuple, PyObjectTemporary( MAKE_DICT1( _python_var_filename.asObject(), _python_str_plain_filename ) ).asObject() ) ) );
            }
        }
        frame_guard.setLineNumber( 330 );
        return _python_var_attachment.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_mimetype.updateLocalsDict( _python_var_content.updateLocalsDict( _python_var_filename.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_attachment.updateLocalsDict( _python_var__.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_11__create_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message )
        {
           Py_DECREF( frame_function_11__create_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message );
           frame_function_11__create_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_11__create_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_filename = NULL;
    PyObject *_python_par_content = NULL;
    PyObject *_python_par_mimetype = NULL;
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
                PyErr_Format( PyExc_TypeError, "_create_attachment() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_create_attachment() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_filename == key )
            {
                if (unlikely( _python_par_filename ))
                {
                    PyErr_Format( PyExc_TypeError, "_create_attachment() got multiple values for keyword argument 'filename'" );
                    goto error_exit;
                }

                _python_par_filename = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_content == key )
            {
                if (unlikely( _python_par_content ))
                {
                    PyErr_Format( PyExc_TypeError, "_create_attachment() got multiple values for keyword argument 'content'" );
                    goto error_exit;
                }

                _python_par_content = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_mimetype == key )
            {
                if (unlikely( _python_par_mimetype ))
                {
                    PyErr_Format( PyExc_TypeError, "_create_attachment() got multiple values for keyword argument 'mimetype'" );
                    goto error_exit;
                }

                _python_par_mimetype = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "_create_attachment() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_filename, key ) )
            {
                if (unlikely( _python_par_filename ))
                {
                    PyErr_Format( PyExc_TypeError, "_create_attachment() got multiple values for keyword argument 'filename'" );
                    goto error_exit;
                }

                _python_par_filename = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_content, key ) )
            {
                if (unlikely( _python_par_content ))
                {
                    PyErr_Format( PyExc_TypeError, "_create_attachment() got multiple values for keyword argument 'content'" );
                    goto error_exit;
                }

                _python_par_content = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_mimetype, key ) )
            {
                if (unlikely( _python_par_mimetype ))
                {
                    PyErr_Format( PyExc_TypeError, "_create_attachment() got multiple values for keyword argument 'mimetype'" );
                    goto error_exit;
                }

                _python_par_mimetype = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_create_attachment() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_create_attachment() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_create_attachment() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_create_attachment() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_create_attachment() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "_create_attachment() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_create_attachment() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "_create_attachment() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_create_attachment() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 3 ))
    {
        if ( 4 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "_create_attachment() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_create_attachment() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "_create_attachment() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_create_attachment() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 4 ? args_given : 4;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_create_attachment() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_filename != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_create_attachment() got multiple values for keyword argument 'filename'" );
             goto error_exit;
         }

        _python_par_filename = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_content != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_create_attachment() got multiple values for keyword argument 'content'" );
             goto error_exit;
         }

        _python_par_content = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_mimetype != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_create_attachment() got multiple values for keyword argument 'mimetype'" );
             goto error_exit;
         }

        _python_par_mimetype = INCREASE_REFCOUNT( args[ 3 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_mimetype == NULL )
    {
        _python_par_mimetype = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_mimetype );
    }


    return impl_function_11__create_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message( self, _python_par_self, _python_par_filename, _python_par_content, _python_par_mimetype );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_filename );
    Py_XDECREF( _python_par_content );
    Py_XDECREF( _python_par_mimetype );

    return NULL;
}

static PyObject *dparse_function_11__create_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_11__create_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_11__create_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_8_EmailMultiAlternatives_of_module_django__core__mail__message(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var_alternative_subtype( _python_str_plain_alternative_subtype );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_attach_alternative( _python_str_plain_attach_alternative );
    PyObjectLocalVariable _python_var__create_message( _python_str_plain__create_message );
    PyObjectLocalVariable _python_var__create_alternatives( _python_str_plain__create_alternatives );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_message );
    _python_var___doc__.assign0( _python_unicode_digest_55e44496cf6132f0826fb697c44c32b8 );
    _python_var_alternative_subtype.assign0( _python_unicode_plain_alternative );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message(  ) );
    _python_var_attach_alternative.assign1( MAKE_FUNCTION_function_2_attach_alternative_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message(  ) );
    _python_var__create_message.assign1( MAKE_FUNCTION_function_3__create_message_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message(  ) );
    _python_var__create_alternatives.assign1( MAKE_FUNCTION_function_4__create_alternatives_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message(  ) );
    return _python_var__create_alternatives.updateLocalsDict( _python_var__create_message.updateLocalsDict( _python_var_attach_alternative.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var_alternative_subtype.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_subject, PyObject *_python_par_body, PyObject *_python_par_from_email, PyObject *_python_par_to, PyObject *_python_par_bcc, PyObject *_python_par_connection, PyObject *_python_par_attachments, PyObject *_python_par_headers, PyObject *_python_par_alternatives, PyObject *_python_par_cc )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_subject( _python_str_plain_subject, _python_par_subject );
    PyObjectLocalParameterVariableNoDel _python_var_body( _python_str_plain_body, _python_par_body );
    PyObjectLocalParameterVariableNoDel _python_var_from_email( _python_str_plain_from_email, _python_par_from_email );
    PyObjectLocalParameterVariableNoDel _python_var_to( _python_str_plain_to, _python_par_to );
    PyObjectLocalParameterVariableNoDel _python_var_bcc( _python_str_plain_bcc, _python_par_bcc );
    PyObjectLocalParameterVariableNoDel _python_var_connection( _python_str_plain_connection, _python_par_connection );
    PyObjectLocalParameterVariableNoDel _python_var_attachments( _python_str_plain_attachments, _python_par_attachments );
    PyObjectLocalParameterVariableNoDel _python_var_headers( _python_str_plain_headers, _python_par_headers );
    PyObjectLocalParameterVariableNoDel _python_var_alternatives( _python_str_plain_alternatives, _python_par_alternatives );
    PyObjectLocalParameterVariableNoDel _python_var_cc( _python_str_plain_cc, _python_par_cc );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message ) )
    {
        if ( frame_function_1___init___of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message" );
#endif
            Py_DECREF( frame_function_1___init___of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message );
        }

        frame_function_1___init___of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message = MAKE_FRAME( _codeobj_213f6aba16466a4a22861d18ad893f06, _module_django__core__mail__message );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 352 );
        {
            PyObjectTempKeeper1 call12;
            PyObjectTempKeeper0 make_tuple10;
            PyObjectTempKeeper0 make_tuple3;
            PyObjectTempKeeper0 make_tuple4;
            PyObjectTempKeeper0 make_tuple5;
            PyObjectTempKeeper0 make_tuple6;
            PyObjectTempKeeper0 make_tuple7;
            PyObjectTempKeeper0 make_tuple8;
            PyObjectTempKeeper0 make_tuple9;
            PyObjectTempKeeper0 super1;
            DECREASE_REFCOUNT( ( call12.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super1.assign( _mvar_django__core__mail__message_EmailMultiAlternatives.asObject0() ), BUILTIN_SUPER( super1.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain___init__ ) ), CALL_FUNCTION_WITH_POSARGS( call12.asObject0(), PyObjectTemporary( ( make_tuple3.assign( _python_var_subject.asObject() ), make_tuple4.assign( _python_var_body.asObject() ), make_tuple5.assign( _python_var_from_email.asObject() ), make_tuple6.assign( _python_var_to.asObject() ), make_tuple7.assign( _python_var_bcc.asObject() ), make_tuple8.assign( _python_var_connection.asObject() ), make_tuple9.assign( _python_var_attachments.asObject() ), make_tuple10.assign( _python_var_headers.asObject() ), MAKE_TUPLE9( make_tuple3.asObject0(), make_tuple4.asObject0(), make_tuple5.asObject0(), make_tuple6.asObject0(), make_tuple7.asObject0(), make_tuple8.asObject0(), make_tuple9.asObject0(), make_tuple10.asObject0(), _python_var_cc.asObject() ) ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 353 );
        {
            PyObjectTempKeeper0 keeper_0;
            {
                PyObjectTemporary tmp_identifier( ( CHECK_IF_TRUE( keeper_0.assign( _python_var_alternatives.asObject() ) ) ? INCREASE_REFCOUNT( keeper_0.asObject0() ) : PyList_New( 0 ) ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_alternatives );
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
        frame_guard.getFrame0()->f_locals = _python_var_cc.updateLocalsDict( _python_var_alternatives.updateLocalsDict( _python_var_headers.updateLocalsDict( _python_var_attachments.updateLocalsDict( _python_var_connection.updateLocalsDict( _python_var_bcc.updateLocalsDict( _python_var_to.updateLocalsDict( _python_var_from_email.updateLocalsDict( _python_var_body.updateLocalsDict( _python_var_subject.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message )
        {
           Py_DECREF( frame_function_1___init___of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message );
           frame_function_1___init___of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_subject = NULL;
    PyObject *_python_par_body = NULL;
    PyObject *_python_par_from_email = NULL;
    PyObject *_python_par_to = NULL;
    PyObject *_python_par_bcc = NULL;
    PyObject *_python_par_connection = NULL;
    PyObject *_python_par_attachments = NULL;
    PyObject *_python_par_headers = NULL;
    PyObject *_python_par_alternatives = NULL;
    PyObject *_python_par_cc = NULL;
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
            if ( found == false && _python_str_plain_subject == key )
            {
                if (unlikely( _python_par_subject ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'subject'" );
                    goto error_exit;
                }

                _python_par_subject = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_body == key )
            {
                if (unlikely( _python_par_body ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'body'" );
                    goto error_exit;
                }

                _python_par_body = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_from_email == key )
            {
                if (unlikely( _python_par_from_email ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'from_email'" );
                    goto error_exit;
                }

                _python_par_from_email = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_to == key )
            {
                if (unlikely( _python_par_to ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'to'" );
                    goto error_exit;
                }

                _python_par_to = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_bcc == key )
            {
                if (unlikely( _python_par_bcc ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'bcc'" );
                    goto error_exit;
                }

                _python_par_bcc = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_connection == key )
            {
                if (unlikely( _python_par_connection ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'connection'" );
                    goto error_exit;
                }

                _python_par_connection = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_attachments == key )
            {
                if (unlikely( _python_par_attachments ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'attachments'" );
                    goto error_exit;
                }

                _python_par_attachments = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_headers == key )
            {
                if (unlikely( _python_par_headers ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'headers'" );
                    goto error_exit;
                }

                _python_par_headers = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_alternatives == key )
            {
                if (unlikely( _python_par_alternatives ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'alternatives'" );
                    goto error_exit;
                }

                _python_par_alternatives = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_cc == key )
            {
                if (unlikely( _python_par_cc ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'cc'" );
                    goto error_exit;
                }

                _python_par_cc = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_subject, key ) )
            {
                if (unlikely( _python_par_subject ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'subject'" );
                    goto error_exit;
                }

                _python_par_subject = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_body, key ) )
            {
                if (unlikely( _python_par_body ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'body'" );
                    goto error_exit;
                }

                _python_par_body = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_from_email, key ) )
            {
                if (unlikely( _python_par_from_email ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'from_email'" );
                    goto error_exit;
                }

                _python_par_from_email = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_to, key ) )
            {
                if (unlikely( _python_par_to ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'to'" );
                    goto error_exit;
                }

                _python_par_to = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_bcc, key ) )
            {
                if (unlikely( _python_par_bcc ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'bcc'" );
                    goto error_exit;
                }

                _python_par_bcc = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_connection, key ) )
            {
                if (unlikely( _python_par_connection ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'connection'" );
                    goto error_exit;
                }

                _python_par_connection = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_attachments, key ) )
            {
                if (unlikely( _python_par_attachments ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'attachments'" );
                    goto error_exit;
                }

                _python_par_attachments = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_headers, key ) )
            {
                if (unlikely( _python_par_headers ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'headers'" );
                    goto error_exit;
                }

                _python_par_headers = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_alternatives, key ) )
            {
                if (unlikely( _python_par_alternatives ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'alternatives'" );
                    goto error_exit;
                }

                _python_par_alternatives = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_cc, key ) )
            {
                if (unlikely( _python_par_cc ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'cc'" );
                    goto error_exit;
                }

                _python_par_cc = value;

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
    if (unlikely( args_given > 11 ))
    {
        if ( 11 == 1 )
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 11, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 11 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 11, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 11, args_given + kw_only_found );
            }
#else
            if ( 11 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes %d positional arguments but %zd were given", 11, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 11, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 11 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d non-keyword arguments (%zd given)", 11, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 11 == 1 )
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
    args_usable_count = args_given < 11 ? args_given : 11;

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
         if (unlikely( _python_par_subject != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'subject'" );
             goto error_exit;
         }

        _python_par_subject = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_body != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'body'" );
             goto error_exit;
         }

        _python_par_body = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_from_email != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'from_email'" );
             goto error_exit;
         }

        _python_par_from_email = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_to != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'to'" );
             goto error_exit;
         }

        _python_par_to = INCREASE_REFCOUNT( args[ 4 ] );
    }
    if (likely( 5 < args_usable_count ))
    {
         if (unlikely( _python_par_bcc != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'bcc'" );
             goto error_exit;
         }

        _python_par_bcc = INCREASE_REFCOUNT( args[ 5 ] );
    }
    if (likely( 6 < args_usable_count ))
    {
         if (unlikely( _python_par_connection != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'connection'" );
             goto error_exit;
         }

        _python_par_connection = INCREASE_REFCOUNT( args[ 6 ] );
    }
    if (likely( 7 < args_usable_count ))
    {
         if (unlikely( _python_par_attachments != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'attachments'" );
             goto error_exit;
         }

        _python_par_attachments = INCREASE_REFCOUNT( args[ 7 ] );
    }
    if (likely( 8 < args_usable_count ))
    {
         if (unlikely( _python_par_headers != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'headers'" );
             goto error_exit;
         }

        _python_par_headers = INCREASE_REFCOUNT( args[ 8 ] );
    }
    if (likely( 9 < args_usable_count ))
    {
         if (unlikely( _python_par_alternatives != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'alternatives'" );
             goto error_exit;
         }

        _python_par_alternatives = INCREASE_REFCOUNT( args[ 9 ] );
    }
    if (likely( 10 < args_usable_count ))
    {
         if (unlikely( _python_par_cc != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'cc'" );
             goto error_exit;
         }

        _python_par_cc = INCREASE_REFCOUNT( args[ 10 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_subject == NULL )
    {
        _python_par_subject = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_subject );
    }
    if ( _python_par_body == NULL )
    {
        _python_par_body = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_body );
    }
    if ( _python_par_from_email == NULL )
    {
        _python_par_from_email = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 2 ) );
        assertObject( _python_par_from_email );
    }
    if ( _python_par_to == NULL )
    {
        _python_par_to = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 3 ) );
        assertObject( _python_par_to );
    }
    if ( _python_par_bcc == NULL )
    {
        _python_par_bcc = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 4 ) );
        assertObject( _python_par_bcc );
    }
    if ( _python_par_connection == NULL )
    {
        _python_par_connection = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 5 ) );
        assertObject( _python_par_connection );
    }
    if ( _python_par_attachments == NULL )
    {
        _python_par_attachments = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 6 ) );
        assertObject( _python_par_attachments );
    }
    if ( _python_par_headers == NULL )
    {
        _python_par_headers = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 7 ) );
        assertObject( _python_par_headers );
    }
    if ( _python_par_alternatives == NULL )
    {
        _python_par_alternatives = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 8 ) );
        assertObject( _python_par_alternatives );
    }
    if ( _python_par_cc == NULL )
    {
        _python_par_cc = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 9 ) );
        assertObject( _python_par_cc );
    }


    return impl_function_1___init___of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message( self, _python_par_self, _python_par_subject, _python_par_body, _python_par_from_email, _python_par_to, _python_par_bcc, _python_par_connection, _python_par_attachments, _python_par_headers, _python_par_alternatives, _python_par_cc );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_subject );
    Py_XDECREF( _python_par_body );
    Py_XDECREF( _python_par_from_email );
    Py_XDECREF( _python_par_to );
    Py_XDECREF( _python_par_bcc );
    Py_XDECREF( _python_par_connection );
    Py_XDECREF( _python_par_attachments );
    Py_XDECREF( _python_par_headers );
    Py_XDECREF( _python_par_alternatives );
    Py_XDECREF( _python_par_cc );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 11)
    {
        return impl_function_1___init___of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ), INCREASE_REFCOUNT( args[ 6 ] ), INCREASE_REFCOUNT( args[ 7 ] ), INCREASE_REFCOUNT( args[ 8 ] ), INCREASE_REFCOUNT( args[ 9 ] ), INCREASE_REFCOUNT( args[ 10 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_attach_alternative_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_content, PyObject *_python_par_mimetype )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_content( _python_str_plain_content, _python_par_content );
    PyObjectLocalParameterVariableNoDel _python_var_mimetype( _python_str_plain_mimetype, _python_par_mimetype );

    // Actual function code.
    static PyFrameObject *frame_function_2_attach_alternative_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message = NULL;

    if ( isFrameUnusable( frame_function_2_attach_alternative_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message ) )
    {
        if ( frame_function_2_attach_alternative_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_attach_alternative_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message" );
#endif
            Py_DECREF( frame_function_2_attach_alternative_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message );
        }

        frame_function_2_attach_alternative_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message = MAKE_FRAME( _codeobj_ae3e36b9996a0033616c95ffe7660e72, _module_django__core__mail__message );
    }

    FrameGuard frame_guard( frame_function_2_attach_alternative_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message );
    try
    {
        assert( Py_REFCNT( frame_function_2_attach_alternative_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 357 );
        if ( ( _python_var_content.asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 357 );
            RAISE_EXCEPTION_WITH_TYPE( PyExc_AssertionError, PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
        }
        frame_guard.setLineNumber( 358 );
        if ( ( _python_var_mimetype.asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 358 );
            RAISE_EXCEPTION_WITH_TYPE( PyExc_AssertionError, PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
        }
        frame_guard.setLineNumber( 359 );
        {
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper0 make_tuple1;
            DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_alternatives ) ).asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( ( make_tuple1.assign( _python_var_content.asObject() ), MAKE_TUPLE2( make_tuple1.asObject0(), _python_var_mimetype.asObject() ) ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_mimetype.updateLocalsDict( _python_var_content.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_attach_alternative_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message )
        {
           Py_DECREF( frame_function_2_attach_alternative_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message );
           frame_function_2_attach_alternative_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2_attach_alternative_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_content = NULL;
    PyObject *_python_par_mimetype = NULL;
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
                PyErr_Format( PyExc_TypeError, "attach_alternative() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "attach_alternative() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_content == key )
            {
                if (unlikely( _python_par_content ))
                {
                    PyErr_Format( PyExc_TypeError, "attach_alternative() got multiple values for keyword argument 'content'" );
                    goto error_exit;
                }

                _python_par_content = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_mimetype == key )
            {
                if (unlikely( _python_par_mimetype ))
                {
                    PyErr_Format( PyExc_TypeError, "attach_alternative() got multiple values for keyword argument 'mimetype'" );
                    goto error_exit;
                }

                _python_par_mimetype = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "attach_alternative() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_content, key ) )
            {
                if (unlikely( _python_par_content ))
                {
                    PyErr_Format( PyExc_TypeError, "attach_alternative() got multiple values for keyword argument 'content'" );
                    goto error_exit;
                }

                _python_par_content = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_mimetype, key ) )
            {
                if (unlikely( _python_par_mimetype ))
                {
                    PyErr_Format( PyExc_TypeError, "attach_alternative() got multiple values for keyword argument 'mimetype'" );
                    goto error_exit;
                }

                _python_par_mimetype = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "attach_alternative() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "attach_alternative() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "attach_alternative() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "attach_alternative() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "attach_alternative() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "attach_alternative() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "attach_alternative() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "attach_alternative() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "attach_alternative() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "attach_alternative() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "attach_alternative() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "attach_alternative() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "attach_alternative() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "attach_alternative() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_content != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "attach_alternative() got multiple values for keyword argument 'content'" );
             goto error_exit;
         }

        _python_par_content = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_mimetype != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "attach_alternative() got multiple values for keyword argument 'mimetype'" );
             goto error_exit;
         }

        _python_par_mimetype = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_2_attach_alternative_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message( self, _python_par_self, _python_par_content, _python_par_mimetype );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_content );
    Py_XDECREF( _python_par_mimetype );

    return NULL;
}

static PyObject *dparse_function_2_attach_alternative_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_2_attach_alternative_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_attach_alternative_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3__create_message_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_msg )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_msg( _python_str_plain_msg, _python_par_msg );

    // Actual function code.
    static PyFrameObject *frame_function_3__create_message_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message = NULL;

    if ( isFrameUnusable( frame_function_3__create_message_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message ) )
    {
        if ( frame_function_3__create_message_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3__create_message_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message" );
#endif
            Py_DECREF( frame_function_3__create_message_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message );
        }

        frame_function_3__create_message_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message = MAKE_FRAME( _codeobj_cc4d0ced733b5d418eb061f68afb07c6, _module_django__core__mail__message );
    }

    FrameGuard frame_guard( frame_function_3__create_message_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message );
    try
    {
        assert( Py_REFCNT( frame_function_3__create_message_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 362 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper1 call3;
            return ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__create_attachments ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__create_alternatives ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_msg.asObject() ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_msg.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_3__create_message_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message )
        {
           Py_DECREF( frame_function_3__create_message_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message );
           frame_function_3__create_message_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3__create_message_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_msg = NULL;
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
                PyErr_Format( PyExc_TypeError, "_create_message() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_create_message() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_msg == key )
            {
                if (unlikely( _python_par_msg ))
                {
                    PyErr_Format( PyExc_TypeError, "_create_message() got multiple values for keyword argument 'msg'" );
                    goto error_exit;
                }

                _python_par_msg = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "_create_message() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_msg, key ) )
            {
                if (unlikely( _python_par_msg ))
                {
                    PyErr_Format( PyExc_TypeError, "_create_message() got multiple values for keyword argument 'msg'" );
                    goto error_exit;
                }

                _python_par_msg = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_create_message() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_create_message() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_create_message() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_create_message() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_create_message() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_create_message() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_create_message() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_create_message() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_create_message() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_create_message() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_create_message() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "_create_message() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_create_message() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_create_message() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_msg != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_create_message() got multiple values for keyword argument 'msg'" );
             goto error_exit;
         }

        _python_par_msg = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_3__create_message_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message( self, _python_par_self, _python_par_msg );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_msg );

    return NULL;
}

static PyObject *dparse_function_3__create_message_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_3__create_message_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3__create_message_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4__create_alternatives_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_msg )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_msg( _python_str_plain_msg, _python_par_msg );
    PyObjectLocalVariable _python_var_encoding( _python_str_plain_encoding );
    PyObjectLocalVariable _python_var_body_msg( _python_str_plain_body_msg );
    PyObjectLocalVariable _python_var_alternative( _python_str_plain_alternative );

    // Actual function code.
    static PyFrameObject *frame_function_4__create_alternatives_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message = NULL;

    if ( isFrameUnusable( frame_function_4__create_alternatives_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message ) )
    {
        if ( frame_function_4__create_alternatives_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4__create_alternatives_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message" );
#endif
            Py_DECREF( frame_function_4__create_alternatives_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message );
        }

        frame_function_4__create_alternatives_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message = MAKE_FRAME( _codeobj_96b68f84080d390e0fc4728e7914c4dd, _module_django__core__mail__message );
    }

    FrameGuard frame_guard( frame_function_4__create_alternatives_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message );
    try
    {
        assert( Py_REFCNT( frame_function_4__create_alternatives_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 365 );
        {
            PyObjectTempKeeper1 keeper_0;
            _python_var_encoding.assign1( ( CHECK_IF_TRUE( keeper_0.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_encoding ) ) ) ? keeper_0.asObject() : LOOKUP_ATTRIBUTE( _mvar_django__core__mail__message_settings.asObject0(), _python_str_plain_DEFAULT_CHARSET ) ) );
        }
        frame_guard.setLineNumber( 366 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_alternatives ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 367 );
            _python_var_body_msg.assign0( _python_var_msg.asObject() );
            frame_guard.setLineNumber( 368 );
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper1 make_dict1;
                _python_var_msg.assign1( ( call5.assign( _mvar_django__core__mail__message_SafeMIMEMultipart.asObject0() ), CALL_FUNCTION( call5.asObject0(), _python_tuple_empty, PyObjectTemporary( ( make_dict1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_alternative_subtype ) ), MAKE_DICT2( make_dict1.asObject0(), _python_str_plain__subtype, _python_var_encoding.asObject(), _python_str_plain_encoding ) ) ).asObject() ) ) );
            }
            frame_guard.setLineNumber( 369 );
            if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_body ) ).asObject() ) )
            {
                frame_guard.setLineNumber( 370 );
                {
                    PyObjectTempKeeper1 call8;
                    DECREASE_REFCOUNT( ( call8.assign( LOOKUP_ATTRIBUTE( _python_var_msg.asObject(), _python_str_plain_attach ) ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), _python_var_body_msg.asObject() ) ) );
                }
            }
            {
                frame_guard.setLineNumber( 371 );
                PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_alternatives ) ).asObject() ) );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 371 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        _python_var_alternative.assign0( _python_tmp_iter_value.asObject() );
                    }
                    frame_guard.setLineNumber( 372 );
                    {
                        PyObjectTempKeeper1 call12;
                        PyObjectTempKeeper1 call_tmp10;
                        DECREASE_REFCOUNT( ( call12.assign( LOOKUP_ATTRIBUTE( _python_var_msg.asObject(), _python_str_plain_attach ) ), CALL_FUNCTION_WITH_ARGS( call12.asObject0(), PyObjectTemporary( ( call_tmp10.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__create_mime_attachment ) ), impl_function_7_complex_call_helper_star_list_of_module___internal__( call_tmp10.asObject(), _python_var_alternative.asObject1() ) ) ).asObject() ) ) );
                    }

                   CONSIDER_THREADING();
                }
            }
        }
        frame_guard.setLineNumber( 373 );
        return _python_var_msg.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_msg.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_alternative.updateLocalsDict( _python_var_body_msg.updateLocalsDict( _python_var_encoding.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_4__create_alternatives_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message )
        {
           Py_DECREF( frame_function_4__create_alternatives_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message );
           frame_function_4__create_alternatives_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4__create_alternatives_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_msg = NULL;
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
                PyErr_Format( PyExc_TypeError, "_create_alternatives() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_create_alternatives() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_msg == key )
            {
                if (unlikely( _python_par_msg ))
                {
                    PyErr_Format( PyExc_TypeError, "_create_alternatives() got multiple values for keyword argument 'msg'" );
                    goto error_exit;
                }

                _python_par_msg = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "_create_alternatives() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_msg, key ) )
            {
                if (unlikely( _python_par_msg ))
                {
                    PyErr_Format( PyExc_TypeError, "_create_alternatives() got multiple values for keyword argument 'msg'" );
                    goto error_exit;
                }

                _python_par_msg = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_create_alternatives() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_create_alternatives() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_create_alternatives() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_create_alternatives() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_create_alternatives() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_create_alternatives() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_create_alternatives() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_create_alternatives() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_create_alternatives() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_create_alternatives() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_create_alternatives() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "_create_alternatives() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_create_alternatives() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_create_alternatives() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_msg != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_create_alternatives() got multiple values for keyword argument 'msg'" );
             goto error_exit;
         }

        _python_par_msg = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_4__create_alternatives_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message( self, _python_par_self, _python_par_msg );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_msg );

    return NULL;
}

static PyObject *dparse_function_4__create_alternatives_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_4__create_alternatives_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4__create_alternatives_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_10__create_mime_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_10__create_mime_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message,
        dparse_function_10__create_mime_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message,
        _python_str_plain__create_mime_attachment,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_c2542e9d371820b8229dea4684c5be29,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__mail__message,
        _python_unicode_digest_cafe5d8e75e41e97c5185df8275b33a1
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_11__create_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_11__create_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message,
        dparse_function_11__create_attachment_of_class_7_EmailMessage_of_module_django__core__mail__message,
        _python_str_plain__create_attachment,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_8df4097d77434d699bdc34656aab71d9,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__mail__message,
        _python_unicode_digest_70413ec199bc44ee5768d42ccd704abd
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_5_SafeMIMEText_of_module_django__core__mail__message(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_5_SafeMIMEText_of_module_django__core__mail__message,
        dparse_function_1___init___of_class_5_SafeMIMEText_of_module_django__core__mail__message,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ece0affdd97e86b1955b3c72162158c0,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__mail__message,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message,
        dparse_function_1___init___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_322830f104a082094e2658ffe1b82336,
        INCREASE_REFCOUNT( _python_tuple_unicode_plain_mixed_none_none_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__mail__message,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_7_EmailMessage_of_module_django__core__mail__message(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_7_EmailMessage_of_module_django__core__mail__message,
        dparse_function_1___init___of_class_7_EmailMessage_of_module_django__core__mail__message,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_c0f3d30d40585afdd33d7d1dbda993e9,
        INCREASE_REFCOUNT( _python_tuple_fc205d4da08f41e9d4df1cc2dccc0463_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__mail__message,
        _python_unicode_digest_3df79ea6f786c7a923a93f18825102f0
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message,
        dparse_function_1___init___of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_213f6aba16466a4a22861d18ad893f06,
        INCREASE_REFCOUNT( _python_tuple_c4c260d145646e47c77fc33e241b07be_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__mail__message,
        _python_unicode_digest_4cee2da260c4f4691ddb8b5257c0dadf
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___setitem___of_class_5_SafeMIMEText_of_module_django__core__mail__message(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___setitem___of_class_5_SafeMIMEText_of_module_django__core__mail__message,
        dparse_function_2___setitem___of_class_5_SafeMIMEText_of_module_django__core__mail__message,
        _python_str_plain___setitem__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_68df158cdf2fec22415402d0118a7eb2,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__mail__message,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___setitem___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___setitem___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message,
        dparse_function_2___setitem___of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message,
        _python_str_plain___setitem__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_18802347ec5287700a5e01fc1572f137,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__mail__message,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_attach_alternative_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_attach_alternative_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message,
        dparse_function_2_attach_alternative_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message,
        _python_str_plain_attach_alternative,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ae3e36b9996a0033616c95ffe7660e72,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__mail__message,
        _python_unicode_digest_4de1ee42e8b703e20de6f3ea55090486
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_get_connection_of_class_7_EmailMessage_of_module_django__core__mail__message(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_get_connection_of_class_7_EmailMessage_of_module_django__core__mail__message,
        dparse_function_2_get_connection_of_class_7_EmailMessage_of_module_django__core__mail__message,
        _python_str_plain_get_connection,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_365908686e79412f3b1cd56297abe432,
        INCREASE_REFCOUNT( _python_tuple_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__mail__message,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_make_msgid_of_module_django__core__mail__message(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_make_msgid_of_module_django__core__mail__message,
        dparse_function_2_make_msgid_of_module_django__core__mail__message,
        _python_str_plain_make_msgid,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_28d2ce71e9aa7d964a7ae8f0f28e244c,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__mail__message,
        _python_unicode_digest_dcbd8313b9e58a14ceffb13006cb65c7
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3__create_message_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3__create_message_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message,
        dparse_function_3__create_message_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message,
        _python_str_plain__create_message,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_cc4d0ced733b5d418eb061f68afb07c6,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__mail__message,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_as_string_of_class_5_SafeMIMEText_of_module_django__core__mail__message(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_as_string_of_class_5_SafeMIMEText_of_module_django__core__mail__message,
        dparse_function_3_as_string_of_class_5_SafeMIMEText_of_module_django__core__mail__message,
        _python_str_plain_as_string,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_be2b2218c30027540f2d0ced65626cce,
        INCREASE_REFCOUNT( _python_tuple_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__mail__message,
        _python_unicode_digest_496bde6672fe047db6bcb937713b7327
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_as_string_of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_as_string_of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message,
        dparse_function_3_as_string_of_class_6_SafeMIMEMultipart_of_module_django__core__mail__message,
        _python_str_plain_as_string,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d080911a5e624dc0ec6a35f0389bc7e2,
        INCREASE_REFCOUNT( _python_tuple_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__mail__message,
        _python_unicode_digest_496bde6672fe047db6bcb937713b7327
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_forbid_multi_line_headers_of_module_django__core__mail__message(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_forbid_multi_line_headers_of_module_django__core__mail__message,
        dparse_function_3_forbid_multi_line_headers_of_module_django__core__mail__message,
        _python_str_plain_forbid_multi_line_headers,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_8bcd9d914933d66659136ed5e33d9546,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__mail__message,
        _python_unicode_digest_afc9634980c6e454eaa1a1b96d6fbdd2
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_message_of_class_7_EmailMessage_of_module_django__core__mail__message(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_message_of_class_7_EmailMessage_of_module_django__core__mail__message,
        dparse_function_3_message_of_class_7_EmailMessage_of_module_django__core__mail__message,
        _python_str_plain_message,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_c6a67ea2a3765dc75f59313c75efdbc3,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__mail__message,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4__create_alternatives_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4__create_alternatives_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message,
        dparse_function_4__create_alternatives_of_class_8_EmailMultiAlternatives_of_module_django__core__mail__message,
        _python_str_plain__create_alternatives,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_96b68f84080d390e0fc4728e7914c4dd,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__mail__message,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_recipients_of_class_7_EmailMessage_of_module_django__core__mail__message(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_recipients_of_class_7_EmailMessage_of_module_django__core__mail__message,
        dparse_function_4_recipients_of_class_7_EmailMessage_of_module_django__core__mail__message,
        _python_str_plain_recipients,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_a0a7b5dda5fdf14a75d062a8ede95c40,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__mail__message,
        _python_unicode_digest_da6ac52da16a8dbf4a59916a7c43e375
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_sanitize_address_of_module_django__core__mail__message(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_sanitize_address_of_module_django__core__mail__message,
        dparse_function_4_sanitize_address_of_module_django__core__mail__message,
        _python_str_plain_sanitize_address,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_2eaab2324717149ac4bdf67a73fd0d36,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__mail__message,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_send_of_class_7_EmailMessage_of_module_django__core__mail__message(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_send_of_class_7_EmailMessage_of_module_django__core__mail__message,
        dparse_function_5_send_of_class_7_EmailMessage_of_module_django__core__mail__message,
        _python_str_plain_send,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_7b3145ca946b87ed90c9cb28968c406c,
        INCREASE_REFCOUNT( _python_tuple_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__mail__message,
        _python_unicode_digest_4898c5a17a0d3b23dbd3c6cd8be4588f
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_attach_of_class_7_EmailMessage_of_module_django__core__mail__message(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_attach_of_class_7_EmailMessage_of_module_django__core__mail__message,
        dparse_function_6_attach_of_class_7_EmailMessage_of_module_django__core__mail__message,
        _python_str_plain_attach,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ac5143b16ac9eeed6a460f7ba3353bb2,
        INCREASE_REFCOUNT( _python_tuple_none_none_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__mail__message,
        _python_unicode_digest_0d4640e9e3b32bf8bf9112537c4ad1dd
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_attach_file_of_class_7_EmailMessage_of_module_django__core__mail__message(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_attach_file_of_class_7_EmailMessage_of_module_django__core__mail__message,
        dparse_function_7_attach_file_of_class_7_EmailMessage_of_module_django__core__mail__message,
        _python_str_plain_attach_file,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_03a64a58d48805f1a1a17fe664b55678,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__mail__message,
        _python_unicode_digest_81e9ed542385f09dca278666de2deb79
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8__create_message_of_class_7_EmailMessage_of_module_django__core__mail__message(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8__create_message_of_class_7_EmailMessage_of_module_django__core__mail__message,
        dparse_function_8__create_message_of_class_7_EmailMessage_of_module_django__core__mail__message,
        _python_str_plain__create_message,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b55a9b9736eb291a91fdab0154034b33,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__mail__message,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9__create_attachments_of_class_7_EmailMessage_of_module_django__core__mail__message(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9__create_attachments_of_class_7_EmailMessage_of_module_django__core__mail__message,
        dparse_function_9__create_attachments_of_class_7_EmailMessage_of_module_django__core__mail__message,
        _python_str_plain__create_attachments,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_a13dc0b60d095a6731cc4f062808cdda,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__mail__message,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.core.mail.message",   /* m_name */
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

MOD_INIT_DECL( django__core__mail__message )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__core__mail__message );
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

    // puts( "in initdjango__core__mail__message" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__core__mail__message = Py_InitModule4(
        "django.core.mail.message",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__core__mail__message = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__core__mail__message = (PyDictObject *)((PyModuleObject *)_module_django__core__mail__message)->md_dict;

    assertObject( _module_django__core__mail__message );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_6d19707122aee1f3b8a203d3e1be01fa, _module_django__core__mail__message );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__core__mail__message );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__core__mail__message != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__core__mail__message, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django__core__mail__message, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_0728b2c12ffdec89ba845f02fc1d16a3 );
    PyFrameObject *frame_module_django__core__mail__message = MAKE_FRAME( _codeobj_fefadc7d4a1311d73d0aab111b6c3e56, _module_django__core__mail__message );

    FrameGuard frame_guard( frame_module_django__core__mail__message );
    try
    {
        assert( Py_REFCNT( frame_module_django__core__mail__message ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 1 );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail__message, (Nuitka_StringObject *)_python_str_plain_unicode_literals, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain___future__, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, _python_list_str_plain_unicode_literals_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_unicode_literals ) );
        frame_guard.setLineNumber( 3 );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail__message, (Nuitka_StringObject *)_python_str_plain_mimetypes, IMPORT_MODULE( _python_str_plain_mimetypes, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 4 );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail__message, (Nuitka_StringObject *)_python_str_plain_os, IMPORT_MODULE( _python_str_plain_os, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 5 );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail__message, (Nuitka_StringObject *)_python_str_plain_random, IMPORT_MODULE( _python_str_plain_random, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 6 );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail__message, (Nuitka_StringObject *)_python_str_plain_sys, IMPORT_MODULE( _python_str_plain_sys, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 7 );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail__message, (Nuitka_StringObject *)_python_str_plain_time, IMPORT_MODULE( _python_str_plain_time, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 8 );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail__message, (Nuitka_StringObject *)_python_str_plain_Charset, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_email, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, _python_list_str_plain_charset_str_plain_encoders_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_charset ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail__message, (Nuitka_StringObject *)_python_str_plain_Encoders, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_email, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, _python_list_str_plain_charset_str_plain_encoders_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_encoders ) );
        frame_guard.setLineNumber( 9 );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail__message, (Nuitka_StringObject *)_python_str_plain_Generator, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_b38227eec142b7f546b86b1d7230f892, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, _python_list_str_plain_Generator_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_Generator ) );
        frame_guard.setLineNumber( 10 );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail__message, (Nuitka_StringObject *)_python_str_plain_MIMEText, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_7188946be9751e3fc26a2d24642bfa16, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, _python_list_str_plain_MIMEText_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_MIMEText ) );
        frame_guard.setLineNumber( 11 );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail__message, (Nuitka_StringObject *)_python_str_plain_MIMEMultipart, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_a4667b520b212a16317829bcb290bcb4, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, _python_list_str_plain_MIMEMultipart_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_MIMEMultipart ) );
        frame_guard.setLineNumber( 12 );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail__message, (Nuitka_StringObject *)_python_str_plain_MIMEBase, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_dc54181a3936c5f55b64d53a8e6a933e, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, _python_list_str_plain_MIMEBase_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_MIMEBase ) );
        frame_guard.setLineNumber( 13 );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail__message, (Nuitka_StringObject *)_python_str_plain_Header, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_de4cd03df2f70e67d8618a9dfc6c4c06, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, _python_list_str_plain_Header_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_Header ) );
        frame_guard.setLineNumber( 14 );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail__message, (Nuitka_StringObject *)_python_str_plain_formatdate, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_1a9591a82bc3f9ffec5ea5580f1e001d, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, _python_list_64f7388e0658450dd096316e5ba6e186_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_formatdate ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail__message, (Nuitka_StringObject *)_python_str_plain_getaddresses, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_1a9591a82bc3f9ffec5ea5580f1e001d, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, _python_list_64f7388e0658450dd096316e5ba6e186_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_getaddresses ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail__message, (Nuitka_StringObject *)_python_str_plain_formataddr, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_1a9591a82bc3f9ffec5ea5580f1e001d, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, _python_list_64f7388e0658450dd096316e5ba6e186_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_formataddr ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail__message, (Nuitka_StringObject *)_python_str_plain_parseaddr, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_1a9591a82bc3f9ffec5ea5580f1e001d, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, _python_list_64f7388e0658450dd096316e5ba6e186_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_parseaddr ) );
        frame_guard.setLineNumber( 16 );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail__message, (Nuitka_StringObject *)_python_str_plain_settings, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, _python_list_str_plain_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_settings ) );
        frame_guard.setLineNumber( 17 );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail__message, (Nuitka_StringObject *)_python_str_plain_DNS_NAME, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_951c6b668e3184429d22e5add1c178cf, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, _python_list_str_plain_DNS_NAME_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_DNS_NAME ) );
        frame_guard.setLineNumber( 18 );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail__message, (Nuitka_StringObject *)_python_str_plain_force_text, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, _python_list_str_plain_force_text_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_force_text ) );
        frame_guard.setLineNumber( 19 );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail__message, (Nuitka_StringObject *)_python_str_plain_six, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, ((PyModuleObject *)_module_django__core__mail__message)->md_dict, _python_list_str_plain_six_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_six ) );
        frame_guard.setLineNumber( 24 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__mail__message_Charset.asObject0(), _python_str_plain_add_charset ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_unicode_digest_e9e2aa8136260a22b0b09fdee43ccb8a, PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__mail__message_Charset.asObject0(), _python_str_plain_SHORTEST ) ).asObject(), Py_None, _python_unicode_digest_e9e2aa8136260a22b0b09fdee43ccb8a ) ) );
        }
        UPDATE_STRING_DICT0( _moduledict_django__core__mail__message, (Nuitka_StringObject *)_python_str_plain_DEFAULT_ATTACHMENT_MIME_TYPE, _python_unicode_digest_fe7a824e702dbb28a101bb89430df06b );
        {
            frame_guard.setLineNumber( 31 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( PyExc_ValueError ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_1_BadHeaderError_of_module_django__core__mail__message(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__mail__message___metaclass__.isInitialized( false ) ? _mvar_django__core__mail__message___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call6;
                PyObjectTempKeeper0 call8;
                _tmp_python_tmp_class = ( call6.assign( _python_tmp_metaclass.asObject() ), call8.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), _python_str_plain_BadHeaderError, call8.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__mail__message, (Nuitka_StringObject *)_python_str_plain_BadHeaderError, _python_tmp_class.asObject() );
        }
        UPDATE_STRING_DICT1( _moduledict_django__core__mail__message, (Nuitka_StringObject *)_python_str_plain_make_msgid, MAKE_FUNCTION_function_2_make_msgid_of_module_django__core__mail__message(  ) );
        frame_guard.setLineNumber( 64 );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail__message, (Nuitka_StringObject *)_python_str_plain_ADDRESS_HEADERS, CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_set ), PyObjectTemporary( LIST_COPY( _python_list_b1c788856c52285a851a4df240f1f13a_list ) ).asObject() ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail__message, (Nuitka_StringObject *)_python_str_plain_forbid_multi_line_headers, MAKE_FUNCTION_function_3_forbid_multi_line_headers_of_module_django__core__mail__message(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__mail__message, (Nuitka_StringObject *)_python_str_plain_sanitize_address, MAKE_FUNCTION_function_4_sanitize_address_of_module_django__core__mail__message(  ) );
        {
            frame_guard.setLineNumber( 122 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__core__mail__message_MIMEText.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_5_SafeMIMEText_of_module_django__core__mail__message(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__mail__message___metaclass__.isInitialized( false ) ? _mvar_django__core__mail__message___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call10;
                PyObjectTempKeeper0 call12;
                _tmp_python_tmp_class = ( call10.assign( _python_tmp_metaclass.asObject() ), call12.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), _python_str_plain_SafeMIMEText, call12.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__mail__message, (Nuitka_StringObject *)_python_str_plain_SafeMIMEText, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 149 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__core__mail__message_MIMEMultipart.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_6_SafeMIMEMultipart_of_module_django__core__mail__message(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__mail__message___metaclass__.isInitialized( false ) ? _mvar_django__core__mail__message___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call14;
                PyObjectTempKeeper0 call16;
                _tmp_python_tmp_class = ( call14.assign( _python_tmp_metaclass.asObject() ), call16.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call14.asObject0(), _python_str_plain_SafeMIMEMultipart, call16.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__mail__message, (Nuitka_StringObject *)_python_str_plain_SafeMIMEMultipart, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 173 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_7_EmailMessage_of_module_django__core__mail__message(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__mail__message___metaclass__.isInitialized( false ) ? _mvar_django__core__mail__message___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call18;
                PyObjectTempKeeper0 call20;
                _tmp_python_tmp_class = ( call18.assign( _python_tmp_metaclass.asObject() ), call20.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call18.asObject0(), _python_str_plain_EmailMessage, call20.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__mail__message, (Nuitka_StringObject *)_python_str_plain_EmailMessage, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 333 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__core__mail__message_EmailMessage.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_8_EmailMultiAlternatives_of_module_django__core__mail__message(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__mail__message___metaclass__.isInitialized( false ) ? _mvar_django__core__mail__message___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call22;
                PyObjectTempKeeper0 call24;
                _tmp_python_tmp_class = ( call22.assign( _python_tmp_metaclass.asObject() ), call24.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call22.asObject0(), _python_str_plain_EmailMultiAlternatives, call24.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__mail__message, (Nuitka_StringObject *)_python_str_plain_EmailMultiAlternatives, _python_tmp_class.asObject() );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__core__mail__message)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }

   return MOD_RETURN_VALUE( _module_django__core__mail__message );
}
