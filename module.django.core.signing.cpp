// Generated code for Python source for module 'django.core.signing'
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

// The _module_django__core__signing is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__core__signing;
PyDictObject *_moduledict_django__core__signing;

// The module level variables.
static PyObjectGlobalVariable_django__core__signing _mvar_django__core__signing_BadSignature( &_module_django__core__signing, &_python_str_plain_BadSignature );
static PyObjectGlobalVariable_django__core__signing _mvar_django__core__signing_JSONSerializer( &_module_django__core__signing, &_python_str_plain_JSONSerializer );
static PyObjectGlobalVariable_django__core__signing _mvar_django__core__signing_SignatureExpired( &_module_django__core__signing, &_python_str_plain_SignatureExpired );
static PyObjectGlobalVariable_django__core__signing _mvar_django__core__signing_Signer( &_module_django__core__signing, &_python_str_plain_Signer );
static PyObjectGlobalVariable_django__core__signing _mvar_django__core__signing_TimestampSigner( &_module_django__core__signing, &_python_str_plain_TimestampSigner );
static PyObjectGlobalVariable_django__core__signing _mvar_django__core__signing___metaclass__( &_module_django__core__signing, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__core__signing _mvar_django__core__signing_b64_decode( &_module_django__core__signing, &_python_str_plain_b64_decode );
static PyObjectGlobalVariable_django__core__signing _mvar_django__core__signing_b64_encode( &_module_django__core__signing, &_python_str_plain_b64_encode );
static PyObjectGlobalVariable_django__core__signing _mvar_django__core__signing_base64( &_module_django__core__signing, &_python_str_plain_base64 );
static PyObjectGlobalVariable_django__core__signing _mvar_django__core__signing_base64_hmac( &_module_django__core__signing, &_python_str_plain_base64_hmac );
static PyObjectGlobalVariable_django__core__signing _mvar_django__core__signing_baseconv( &_module_django__core__signing, &_python_str_plain_baseconv );
static PyObjectGlobalVariable_django__core__signing _mvar_django__core__signing_constant_time_compare( &_module_django__core__signing, &_python_str_plain_constant_time_compare );
static PyObjectGlobalVariable_django__core__signing _mvar_django__core__signing_force_bytes( &_module_django__core__signing, &_python_str_plain_force_bytes );
static PyObjectGlobalVariable_django__core__signing _mvar_django__core__signing_force_str( &_module_django__core__signing, &_python_str_plain_force_str );
static PyObjectGlobalVariable_django__core__signing _mvar_django__core__signing_force_text( &_module_django__core__signing, &_python_str_plain_force_text );
static PyObjectGlobalVariable_django__core__signing _mvar_django__core__signing_import_by_path( &_module_django__core__signing, &_python_str_plain_import_by_path );
static PyObjectGlobalVariable_django__core__signing _mvar_django__core__signing_json( &_module_django__core__signing, &_python_str_plain_json );
static PyObjectGlobalVariable_django__core__signing _mvar_django__core__signing_salted_hmac( &_module_django__core__signing, &_python_str_plain_salted_hmac );
static PyObjectGlobalVariable_django__core__signing _mvar_django__core__signing_settings( &_module_django__core__signing, &_python_str_plain_settings );
static PyObjectGlobalVariable_django__core__signing _mvar_django__core__signing_time( &_module_django__core__signing, &_python_str_plain_time );
static PyObjectGlobalVariable_django__core__signing _mvar_django__core__signing_zlib( &_module_django__core__signing, &_python_str_plain_zlib );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_BadSignature_of_module_django__core__signing(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_2_SignatureExpired_of_module_django__core__signing(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_7_JSONSerializer_of_module_django__core__signing(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_10_Signer_of_module_django__core__signing(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_11_TimestampSigner_of_module_django__core__signing(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_10_Signer_of_module_django__core__signing(  );


static PyObject *MAKE_FUNCTION_function_1_dumps_of_class_7_JSONSerializer_of_module_django__core__signing(  );


static PyObject *MAKE_FUNCTION_function_1_timestamp_of_class_11_TimestampSigner_of_module_django__core__signing(  );


static PyObject *MAKE_FUNCTION_function_2_loads_of_class_7_JSONSerializer_of_module_django__core__signing(  );


static PyObject *MAKE_FUNCTION_function_2_sign_of_class_11_TimestampSigner_of_module_django__core__signing(  );


static PyObject *MAKE_FUNCTION_function_2_signature_of_class_10_Signer_of_module_django__core__signing(  );


static PyObject *MAKE_FUNCTION_function_3_b64_encode_of_module_django__core__signing(  );


static PyObject *MAKE_FUNCTION_function_3_sign_of_class_10_Signer_of_module_django__core__signing(  );


static PyObject *MAKE_FUNCTION_function_3_unsign_of_class_11_TimestampSigner_of_module_django__core__signing(  );


static PyObject *MAKE_FUNCTION_function_4_b64_decode_of_module_django__core__signing(  );


static PyObject *MAKE_FUNCTION_function_4_unsign_of_class_10_Signer_of_module_django__core__signing(  );


static PyObject *MAKE_FUNCTION_function_5_base64_hmac_of_module_django__core__signing(  );


static PyObject *MAKE_FUNCTION_function_6_get_cookie_signer_of_module_django__core__signing(  );


static PyObject *MAKE_FUNCTION_function_8_dumps_of_module_django__core__signing( PyObject *defaults );


static PyObject *MAKE_FUNCTION_function_9_loads_of_module_django__core__signing( PyObject *defaults );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_BadSignature_of_module_django__core__signing(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_signing );
    _python_var___doc__.assign0( _python_unicode_digest_92412f34d448b1625ae95382ec2e6f8d );
    return _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) );
}


NUITKA_LOCAL_MODULE PyObject *impl_class_2_SignatureExpired_of_module_django__core__signing(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_signing );
    _python_var___doc__.assign0( _python_unicode_digest_3f3ab047c741c4e32b69cd5e4702255a );
    return _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) );
}


static PyObject *impl_function_3_b64_encode_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject *_python_par_s )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_s( _python_str_plain_s, _python_par_s );

    // Actual function code.
    static PyFrameObject *frame_function_3_b64_encode_of_module_django__core__signing = NULL;

    if ( isFrameUnusable( frame_function_3_b64_encode_of_module_django__core__signing ) )
    {
        if ( frame_function_3_b64_encode_of_module_django__core__signing )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_b64_encode_of_module_django__core__signing" );
#endif
            Py_DECREF( frame_function_3_b64_encode_of_module_django__core__signing );
        }

        frame_function_3_b64_encode_of_module_django__core__signing = MAKE_FRAME( _codeobj_877257ba14a9178c88d940b4bd2012b7, _module_django__core__signing );
    }

    FrameGuard frame_guard( frame_function_3_b64_encode_of_module_django__core__signing );
    try
    {
        assert( Py_REFCNT( frame_function_3_b64_encode_of_module_django__core__signing ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 65 );
        {
            PyObjectTempKeeper1 call1;
            return CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__signing_base64.asObject0(), _python_str_plain_urlsafe_b64encode ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_s.asObject() ) ) ).asObject(), _python_str_plain_strip ) ).asObject(), _python_str_chr_61 );
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
        frame_guard.getFrame0()->f_locals = _python_var_s.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_3_b64_encode_of_module_django__core__signing )
        {
           Py_DECREF( frame_function_3_b64_encode_of_module_django__core__signing );
           frame_function_3_b64_encode_of_module_django__core__signing = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_b64_encode_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_s = NULL;
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
                PyErr_Format( PyExc_TypeError, "b64_encode() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_s == key )
            {
                if (unlikely( _python_par_s ))
                {
                    PyErr_Format( PyExc_TypeError, "b64_encode() got multiple values for keyword argument 's'" );
                    goto error_exit;
                }

                _python_par_s = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_s, key ) )
            {
                if (unlikely( _python_par_s ))
                {
                    PyErr_Format( PyExc_TypeError, "b64_encode() got multiple values for keyword argument 's'" );
                    goto error_exit;
                }

                _python_par_s = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "b64_encode() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "b64_encode() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "b64_encode() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "b64_encode() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "b64_encode() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "b64_encode() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "b64_encode() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "b64_encode() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "b64_encode() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "b64_encode() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "b64_encode() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "b64_encode() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "b64_encode() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_s != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "b64_encode() got multiple values for keyword argument 's'" );
             goto error_exit;
         }

        _python_par_s = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_3_b64_encode_of_module_django__core__signing( self, _python_par_s );

error_exit:;

    Py_XDECREF( _python_par_s );

    return NULL;
}

static PyObject *dparse_function_3_b64_encode_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3_b64_encode_of_module_django__core__signing( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_b64_encode_of_module_django__core__signing( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_b64_decode_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject *_python_par_s )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_s( _python_str_plain_s, _python_par_s );
    PyObjectLocalVariable _python_var_pad( _python_str_plain_pad );

    // Actual function code.
    static PyFrameObject *frame_function_4_b64_decode_of_module_django__core__signing = NULL;

    if ( isFrameUnusable( frame_function_4_b64_decode_of_module_django__core__signing ) )
    {
        if ( frame_function_4_b64_decode_of_module_django__core__signing )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_b64_decode_of_module_django__core__signing" );
#endif
            Py_DECREF( frame_function_4_b64_decode_of_module_django__core__signing );
        }

        frame_function_4_b64_decode_of_module_django__core__signing = MAKE_FRAME( _codeobj_ddc7ded4a441e4f2a49703148fe3b63f, _module_django__core__signing );
    }

    FrameGuard frame_guard( frame_function_4_b64_decode_of_module_django__core__signing );
    try
    {
        assert( Py_REFCNT( frame_function_4_b64_decode_of_module_django__core__signing ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 69 );
        _python_var_pad.assign1( BINARY_OPERATION_MUL( _python_str_chr_61, PyObjectTemporary( BINARY_OPERATION_REMAINDER( PyObjectTemporary( UNARY_OPERATION( PyNumber_Negative, PyObjectTemporary( BUILTIN_LEN( _python_var_s.asObject() ) ).asObject() ) ).asObject(), _python_int_pos_4 ) ).asObject() ) );
        frame_guard.setLineNumber( 70 );
        {
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper0 op1;
            return ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__signing_base64.asObject0(), _python_str_plain_urlsafe_b64decode ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( ( op1.assign( _python_var_s.asObject() ), BINARY_OPERATION_ADD( op1.asObject0(), _python_var_pad.asObject() ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_s.updateLocalsDict( _python_var_pad.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_4_b64_decode_of_module_django__core__signing )
        {
           Py_DECREF( frame_function_4_b64_decode_of_module_django__core__signing );
           frame_function_4_b64_decode_of_module_django__core__signing = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_b64_decode_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_s = NULL;
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
                PyErr_Format( PyExc_TypeError, "b64_decode() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_s == key )
            {
                if (unlikely( _python_par_s ))
                {
                    PyErr_Format( PyExc_TypeError, "b64_decode() got multiple values for keyword argument 's'" );
                    goto error_exit;
                }

                _python_par_s = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_s, key ) )
            {
                if (unlikely( _python_par_s ))
                {
                    PyErr_Format( PyExc_TypeError, "b64_decode() got multiple values for keyword argument 's'" );
                    goto error_exit;
                }

                _python_par_s = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "b64_decode() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "b64_decode() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "b64_decode() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "b64_decode() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "b64_decode() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "b64_decode() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "b64_decode() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "b64_decode() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "b64_decode() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "b64_decode() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "b64_decode() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "b64_decode() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "b64_decode() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_s != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "b64_decode() got multiple values for keyword argument 's'" );
             goto error_exit;
         }

        _python_par_s = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_4_b64_decode_of_module_django__core__signing( self, _python_par_s );

error_exit:;

    Py_XDECREF( _python_par_s );

    return NULL;
}

static PyObject *dparse_function_4_b64_decode_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_4_b64_decode_of_module_django__core__signing( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_b64_decode_of_module_django__core__signing( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_base64_hmac_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject *_python_par_salt, PyObject *_python_par_value, PyObject *_python_par_key )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_salt( _python_str_plain_salt, _python_par_salt );
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_key( _python_str_plain_key, _python_par_key );

    // Actual function code.
    static PyFrameObject *frame_function_5_base64_hmac_of_module_django__core__signing = NULL;

    if ( isFrameUnusable( frame_function_5_base64_hmac_of_module_django__core__signing ) )
    {
        if ( frame_function_5_base64_hmac_of_module_django__core__signing )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_base64_hmac_of_module_django__core__signing" );
#endif
            Py_DECREF( frame_function_5_base64_hmac_of_module_django__core__signing );
        }

        frame_function_5_base64_hmac_of_module_django__core__signing = MAKE_FRAME( _codeobj_3af9d3f481199fa19e8265d1babf8408, _module_django__core__signing );
    }

    FrameGuard frame_guard( frame_function_5_base64_hmac_of_module_django__core__signing );
    try
    {
        assert( Py_REFCNT( frame_function_5_base64_hmac_of_module_django__core__signing ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 74 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper0 call2;
            PyObjectTempKeeper0 call3;
            PyObjectTempKeeper0 call5;
            return ( call5.assign( _mvar_django__core__signing_b64_encode.asObject0() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( _mvar_django__core__signing_salted_hmac.asObject0() ), call2.assign( _python_var_salt.asObject() ), call3.assign( _python_var_value.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), call3.asObject0(), _python_var_key.asObject() ) ) ).asObject(), _python_str_plain_digest ) ).asObject() ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_key.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_salt.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_5_base64_hmac_of_module_django__core__signing )
        {
           Py_DECREF( frame_function_5_base64_hmac_of_module_django__core__signing );
           frame_function_5_base64_hmac_of_module_django__core__signing = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5_base64_hmac_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_salt = NULL;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_key = NULL;
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
                PyErr_Format( PyExc_TypeError, "base64_hmac() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_salt == key )
            {
                if (unlikely( _python_par_salt ))
                {
                    PyErr_Format( PyExc_TypeError, "base64_hmac() got multiple values for keyword argument 'salt'" );
                    goto error_exit;
                }

                _python_par_salt = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_value == key )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "base64_hmac() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_key == key )
            {
                if (unlikely( _python_par_key ))
                {
                    PyErr_Format( PyExc_TypeError, "base64_hmac() got multiple values for keyword argument 'key'" );
                    goto error_exit;
                }

                _python_par_key = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_salt, key ) )
            {
                if (unlikely( _python_par_salt ))
                {
                    PyErr_Format( PyExc_TypeError, "base64_hmac() got multiple values for keyword argument 'salt'" );
                    goto error_exit;
                }

                _python_par_salt = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "base64_hmac() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_key, key ) )
            {
                if (unlikely( _python_par_key ))
                {
                    PyErr_Format( PyExc_TypeError, "base64_hmac() got multiple values for keyword argument 'key'" );
                    goto error_exit;
                }

                _python_par_key = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "base64_hmac() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "base64_hmac() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "base64_hmac() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "base64_hmac() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "base64_hmac() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "base64_hmac() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "base64_hmac() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "base64_hmac() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "base64_hmac() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "base64_hmac() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "base64_hmac() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "base64_hmac() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "base64_hmac() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 3 ? args_given : 3;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_salt != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "base64_hmac() got multiple values for keyword argument 'salt'" );
             goto error_exit;
         }

        _python_par_salt = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "base64_hmac() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_key != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "base64_hmac() got multiple values for keyword argument 'key'" );
             goto error_exit;
         }

        _python_par_key = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_5_base64_hmac_of_module_django__core__signing( self, _python_par_salt, _python_par_value, _python_par_key );

error_exit:;

    Py_XDECREF( _python_par_salt );
    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_key );

    return NULL;
}

static PyObject *dparse_function_5_base64_hmac_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_5_base64_hmac_of_module_django__core__signing( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_base64_hmac_of_module_django__core__signing( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_get_cookie_signer_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject *_python_par_salt )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_salt( _python_str_plain_salt, _python_par_salt );
    PyObjectLocalVariable _python_var_Signer( _python_str_plain_Signer );

    // Actual function code.
    static PyFrameObject *frame_function_6_get_cookie_signer_of_module_django__core__signing = NULL;

    if ( isFrameUnusable( frame_function_6_get_cookie_signer_of_module_django__core__signing ) )
    {
        if ( frame_function_6_get_cookie_signer_of_module_django__core__signing )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6_get_cookie_signer_of_module_django__core__signing" );
#endif
            Py_DECREF( frame_function_6_get_cookie_signer_of_module_django__core__signing );
        }

        frame_function_6_get_cookie_signer_of_module_django__core__signing = MAKE_FRAME( _codeobj_1f0fba97700cf56aecc8d6d6bc702e89, _module_django__core__signing );
    }

    FrameGuard frame_guard( frame_function_6_get_cookie_signer_of_module_django__core__signing );
    try
    {
        assert( Py_REFCNT( frame_function_6_get_cookie_signer_of_module_django__core__signing ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 78 );
        {
            PyObjectTempKeeper0 call1;
            _python_var_Signer.assign1( ( call1.assign( _mvar_django__core__signing_import_by_path.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__signing_settings.asObject0(), _python_str_plain_SIGNING_BACKEND ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 79 );
        {
            PyObjectTempKeeper0 call3;
            PyObjectTempKeeper1 call4;
            return ( call3.assign( _python_var_Signer.asObject() ), call4.assign( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_ADD( _python_unicode_digest_fc2758282942090149dee4e3d7b8ddd9, PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__signing_settings.asObject0(), _python_str_plain_SECRET_KEY ) ).asObject() ) ).asObject() ) ), CALL_FUNCTION( call3.asObject0(), call4.asObject0(), PyObjectTemporary( MAKE_DICT1( _python_var_salt.asObject(), _python_str_plain_salt ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_salt.updateLocalsDict( _python_var_Signer.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_6_get_cookie_signer_of_module_django__core__signing )
        {
           Py_DECREF( frame_function_6_get_cookie_signer_of_module_django__core__signing );
           frame_function_6_get_cookie_signer_of_module_django__core__signing = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_6_get_cookie_signer_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_salt = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_cookie_signer() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_salt == key )
            {
                if (unlikely( _python_par_salt ))
                {
                    PyErr_Format( PyExc_TypeError, "get_cookie_signer() got multiple values for keyword argument 'salt'" );
                    goto error_exit;
                }

                _python_par_salt = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_salt, key ) )
            {
                if (unlikely( _python_par_salt ))
                {
                    PyErr_Format( PyExc_TypeError, "get_cookie_signer() got multiple values for keyword argument 'salt'" );
                    goto error_exit;
                }

                _python_par_salt = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_cookie_signer() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_cookie_signer() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_cookie_signer() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_cookie_signer() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_cookie_signer() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_cookie_signer() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_cookie_signer() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_cookie_signer() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_cookie_signer() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_cookie_signer() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_cookie_signer() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "get_cookie_signer() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_cookie_signer() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_salt != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_cookie_signer() got multiple values for keyword argument 'salt'" );
             goto error_exit;
         }

        _python_par_salt = INCREASE_REFCOUNT( args[ 0 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_salt == NULL )
    {
        _python_par_salt = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_salt );
    }


    return impl_function_6_get_cookie_signer_of_module_django__core__signing( self, _python_par_salt );

error_exit:;

    Py_XDECREF( _python_par_salt );

    return NULL;
}

static PyObject *dparse_function_6_get_cookie_signer_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_6_get_cookie_signer_of_module_django__core__signing( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_get_cookie_signer_of_module_django__core__signing( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_7_JSONSerializer_of_module_django__core__signing(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var_dumps( _python_str_plain_dumps );
    PyObjectLocalVariable _python_var_loads( _python_str_plain_loads );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_signing );
    _python_var___doc__.assign0( _python_unicode_digest_42f8aa9708fd07d11c7404dc4f5f060e );
    _python_var_dumps.assign1( MAKE_FUNCTION_function_1_dumps_of_class_7_JSONSerializer_of_module_django__core__signing(  ) );
    _python_var_loads.assign1( MAKE_FUNCTION_function_2_loads_of_class_7_JSONSerializer_of_module_django__core__signing(  ) );
    return _python_var_loads.updateLocalsDict( _python_var_dumps.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) );
}


static PyObject *impl_function_1_dumps_of_class_7_JSONSerializer_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_obj )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_obj( _python_str_plain_obj, _python_par_obj );

    // Actual function code.
    static PyFrameObject *frame_function_1_dumps_of_class_7_JSONSerializer_of_module_django__core__signing = NULL;

    if ( isFrameUnusable( frame_function_1_dumps_of_class_7_JSONSerializer_of_module_django__core__signing ) )
    {
        if ( frame_function_1_dumps_of_class_7_JSONSerializer_of_module_django__core__signing )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_dumps_of_class_7_JSONSerializer_of_module_django__core__signing" );
#endif
            Py_DECREF( frame_function_1_dumps_of_class_7_JSONSerializer_of_module_django__core__signing );
        }

        frame_function_1_dumps_of_class_7_JSONSerializer_of_module_django__core__signing = MAKE_FRAME( _codeobj_3d3579d41950a805978601e2301b709c, _module_django__core__signing );
    }

    FrameGuard frame_guard( frame_function_1_dumps_of_class_7_JSONSerializer_of_module_django__core__signing );
    try
    {
        assert( Py_REFCNT( frame_function_1_dumps_of_class_7_JSONSerializer_of_module_django__core__signing ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 88 );
        {
            PyObjectTempKeeper1 call1;
            return CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__signing_json.asObject0(), _python_str_plain_dumps ) ), CALL_FUNCTION( call1.asObject0(), PyObjectTemporary( MAKE_TUPLE1( _python_var_obj.asObject() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_2bb81ca477866ba7cbc495323bb1417b ) ).asObject() ) ) ).asObject(), _python_str_plain_encode ) ).asObject(), _python_unicode_digest_e08e7740844024234d1fdfbba1279b3c );
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
        frame_guard.getFrame0()->f_locals = _python_var_obj.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_1_dumps_of_class_7_JSONSerializer_of_module_django__core__signing )
        {
           Py_DECREF( frame_function_1_dumps_of_class_7_JSONSerializer_of_module_django__core__signing );
           frame_function_1_dumps_of_class_7_JSONSerializer_of_module_django__core__signing = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1_dumps_of_class_7_JSONSerializer_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_obj = NULL;
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
                PyErr_Format( PyExc_TypeError, "dumps() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "dumps() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_obj == key )
            {
                if (unlikely( _python_par_obj ))
                {
                    PyErr_Format( PyExc_TypeError, "dumps() got multiple values for keyword argument 'obj'" );
                    goto error_exit;
                }

                _python_par_obj = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "dumps() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_obj, key ) )
            {
                if (unlikely( _python_par_obj ))
                {
                    PyErr_Format( PyExc_TypeError, "dumps() got multiple values for keyword argument 'obj'" );
                    goto error_exit;
                }

                _python_par_obj = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "dumps() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "dumps() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "dumps() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "dumps() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "dumps() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "dumps() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "dumps() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "dumps() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "dumps() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "dumps() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "dumps() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "dumps() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "dumps() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "dumps() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_obj != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "dumps() got multiple values for keyword argument 'obj'" );
             goto error_exit;
         }

        _python_par_obj = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_1_dumps_of_class_7_JSONSerializer_of_module_django__core__signing( self, _python_par_self, _python_par_obj );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_obj );

    return NULL;
}

static PyObject *dparse_function_1_dumps_of_class_7_JSONSerializer_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1_dumps_of_class_7_JSONSerializer_of_module_django__core__signing( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_dumps_of_class_7_JSONSerializer_of_module_django__core__signing( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_loads_of_class_7_JSONSerializer_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_data )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_data( _python_str_plain_data, _python_par_data );

    // Actual function code.
    static PyFrameObject *frame_function_2_loads_of_class_7_JSONSerializer_of_module_django__core__signing = NULL;

    if ( isFrameUnusable( frame_function_2_loads_of_class_7_JSONSerializer_of_module_django__core__signing ) )
    {
        if ( frame_function_2_loads_of_class_7_JSONSerializer_of_module_django__core__signing )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_loads_of_class_7_JSONSerializer_of_module_django__core__signing" );
#endif
            Py_DECREF( frame_function_2_loads_of_class_7_JSONSerializer_of_module_django__core__signing );
        }

        frame_function_2_loads_of_class_7_JSONSerializer_of_module_django__core__signing = MAKE_FRAME( _codeobj_ca68ef91b3b5461d9b93f064940906cc, _module_django__core__signing );
    }

    FrameGuard frame_guard( frame_function_2_loads_of_class_7_JSONSerializer_of_module_django__core__signing );
    try
    {
        assert( Py_REFCNT( frame_function_2_loads_of_class_7_JSONSerializer_of_module_django__core__signing ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 91 );
        {
            PyObjectTempKeeper1 call1;
            return ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__signing_json.asObject0(), _python_str_plain_loads ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_data.asObject(), _python_str_plain_decode ) ).asObject(), _python_unicode_digest_e08e7740844024234d1fdfbba1279b3c ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_data.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_2_loads_of_class_7_JSONSerializer_of_module_django__core__signing )
        {
           Py_DECREF( frame_function_2_loads_of_class_7_JSONSerializer_of_module_django__core__signing );
           frame_function_2_loads_of_class_7_JSONSerializer_of_module_django__core__signing = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_loads_of_class_7_JSONSerializer_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "loads() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "loads() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "loads() got multiple values for keyword argument 'data'" );
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
                    PyErr_Format( PyExc_TypeError, "loads() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "loads() got multiple values for keyword argument 'data'" );
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
                   "loads() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "loads() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "loads() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "loads() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "loads() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "loads() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "loads() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "loads() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "loads() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "loads() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "loads() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "loads() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "loads() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "loads() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_data != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "loads() got multiple values for keyword argument 'data'" );
             goto error_exit;
         }

        _python_par_data = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_2_loads_of_class_7_JSONSerializer_of_module_django__core__signing( self, _python_par_self, _python_par_data );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_data );

    return NULL;
}

static PyObject *dparse_function_2_loads_of_class_7_JSONSerializer_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2_loads_of_class_7_JSONSerializer_of_module_django__core__signing( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_loads_of_class_7_JSONSerializer_of_module_django__core__signing( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8_dumps_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject *_python_par_obj, PyObject *_python_par_key, PyObject *_python_par_salt, PyObject *_python_par_serializer, PyObject *_python_par_compress )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_obj( _python_str_plain_obj, _python_par_obj );
    PyObjectLocalParameterVariableNoDel _python_var_key( _python_str_plain_key, _python_par_key );
    PyObjectLocalParameterVariableNoDel _python_var_salt( _python_str_plain_salt, _python_par_salt );
    PyObjectLocalParameterVariableNoDel _python_var_serializer( _python_str_plain_serializer, _python_par_serializer );
    PyObjectLocalParameterVariableNoDel _python_var_compress( _python_str_plain_compress, _python_par_compress );
    PyObjectLocalVariable _python_var_data( _python_str_plain_data );
    PyObjectLocalVariable _python_var_is_compressed( _python_str_plain_is_compressed );
    PyObjectLocalVariable _python_var_compressed( _python_str_plain_compressed );
    PyObjectLocalVariable _python_var_base64d( _python_str_plain_base64d );

    // Actual function code.
    static PyFrameObject *frame_function_8_dumps_of_module_django__core__signing = NULL;

    if ( isFrameUnusable( frame_function_8_dumps_of_module_django__core__signing ) )
    {
        if ( frame_function_8_dumps_of_module_django__core__signing )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_8_dumps_of_module_django__core__signing" );
#endif
            Py_DECREF( frame_function_8_dumps_of_module_django__core__signing );
        }

        frame_function_8_dumps_of_module_django__core__signing = MAKE_FRAME( _codeobj_3b6073b3dcc8960a9a142e2fd05aaba1, _module_django__core__signing );
    }

    FrameGuard frame_guard( frame_function_8_dumps_of_module_django__core__signing );
    try
    {
        assert( Py_REFCNT( frame_function_8_dumps_of_module_django__core__signing ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 110 );
        {
            PyObjectTempKeeper1 call1;
            _python_var_data.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( _python_var_serializer.asObject() ) ).asObject(), _python_str_plain_dumps ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_obj.asObject() ) ) );
        }
        _python_var_is_compressed.assign0( Py_False );
        frame_guard.setLineNumber( 115 );
        if ( CHECK_IF_TRUE( _python_var_compress.asObject() ) )
        {
            frame_guard.setLineNumber( 117 );
            {
                PyObjectTempKeeper1 call3;
                _python_var_compressed.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__signing_zlib.asObject0(), _python_str_plain_compress ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_data.asObject() ) ) );
            }
            frame_guard.setLineNumber( 118 );
            {
                PyObjectTempKeeper1 cmp5;
                if ( ( cmp5.assign( BUILTIN_LEN( _python_var_compressed.asObject() ) ), RICH_COMPARE_BOOL_LT( cmp5.asObject0(), PyObjectTemporary( BINARY_OPERATION_SUB( PyObjectTemporary( BUILTIN_LEN( _python_var_data.asObject() ) ).asObject(), _python_int_pos_1 ) ).asObject() ) ) )
            {
                frame_guard.setLineNumber( 119 );
                _python_var_data.assign0( _python_var_compressed.asObject() );
                _python_var_is_compressed.assign0( Py_True );
            }
            }
        }
        frame_guard.setLineNumber( 121 );
        {
            PyObjectTempKeeper0 call7;
            _python_var_base64d.assign1( ( call7.assign( _mvar_django__core__signing_b64_encode.asObject0() ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _python_var_data.asObject() ) ) );
        }
        frame_guard.setLineNumber( 122 );
        if ( CHECK_IF_TRUE( _python_var_is_compressed.asObject() ) )
        {
            frame_guard.setLineNumber( 123 );
            _python_var_base64d.assign1( BINARY_OPERATION_ADD( _python_str_dot, _python_var_base64d.asObject() ) );
        }
        frame_guard.setLineNumber( 124 );
        {
            PyObjectTempKeeper1 call10;
            PyObjectTempKeeper1 call12;
            PyObjectTempKeeper0 call9;
            return ( call12.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call9.assign( _mvar_django__core__signing_TimestampSigner.asObject0() ), call10.assign( MAKE_TUPLE1( _python_var_key.asObject() ) ), CALL_FUNCTION( call9.asObject0(), call10.asObject0(), PyObjectTemporary( MAKE_DICT1( _python_var_salt.asObject(), _python_str_plain_salt ) ).asObject() ) ) ).asObject(), _python_str_plain_sign ) ), CALL_FUNCTION_WITH_ARGS( call12.asObject0(), _python_var_base64d.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_compress.updateLocalsDict( _python_var_serializer.updateLocalsDict( _python_var_salt.updateLocalsDict( _python_var_key.updateLocalsDict( _python_var_obj.updateLocalsDict( _python_var_base64d.updateLocalsDict( _python_var_compressed.updateLocalsDict( _python_var_is_compressed.updateLocalsDict( _python_var_data.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_8_dumps_of_module_django__core__signing )
        {
           Py_DECREF( frame_function_8_dumps_of_module_django__core__signing );
           frame_function_8_dumps_of_module_django__core__signing = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_8_dumps_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_obj = NULL;
    PyObject *_python_par_key = NULL;
    PyObject *_python_par_salt = NULL;
    PyObject *_python_par_serializer = NULL;
    PyObject *_python_par_compress = NULL;
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
                PyErr_Format( PyExc_TypeError, "dumps() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_obj == key )
            {
                if (unlikely( _python_par_obj ))
                {
                    PyErr_Format( PyExc_TypeError, "dumps() got multiple values for keyword argument 'obj'" );
                    goto error_exit;
                }

                _python_par_obj = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_key == key )
            {
                if (unlikely( _python_par_key ))
                {
                    PyErr_Format( PyExc_TypeError, "dumps() got multiple values for keyword argument 'key'" );
                    goto error_exit;
                }

                _python_par_key = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_salt == key )
            {
                if (unlikely( _python_par_salt ))
                {
                    PyErr_Format( PyExc_TypeError, "dumps() got multiple values for keyword argument 'salt'" );
                    goto error_exit;
                }

                _python_par_salt = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_serializer == key )
            {
                if (unlikely( _python_par_serializer ))
                {
                    PyErr_Format( PyExc_TypeError, "dumps() got multiple values for keyword argument 'serializer'" );
                    goto error_exit;
                }

                _python_par_serializer = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_compress == key )
            {
                if (unlikely( _python_par_compress ))
                {
                    PyErr_Format( PyExc_TypeError, "dumps() got multiple values for keyword argument 'compress'" );
                    goto error_exit;
                }

                _python_par_compress = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_obj, key ) )
            {
                if (unlikely( _python_par_obj ))
                {
                    PyErr_Format( PyExc_TypeError, "dumps() got multiple values for keyword argument 'obj'" );
                    goto error_exit;
                }

                _python_par_obj = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_key, key ) )
            {
                if (unlikely( _python_par_key ))
                {
                    PyErr_Format( PyExc_TypeError, "dumps() got multiple values for keyword argument 'key'" );
                    goto error_exit;
                }

                _python_par_key = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_salt, key ) )
            {
                if (unlikely( _python_par_salt ))
                {
                    PyErr_Format( PyExc_TypeError, "dumps() got multiple values for keyword argument 'salt'" );
                    goto error_exit;
                }

                _python_par_salt = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_serializer, key ) )
            {
                if (unlikely( _python_par_serializer ))
                {
                    PyErr_Format( PyExc_TypeError, "dumps() got multiple values for keyword argument 'serializer'" );
                    goto error_exit;
                }

                _python_par_serializer = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_compress, key ) )
            {
                if (unlikely( _python_par_compress ))
                {
                    PyErr_Format( PyExc_TypeError, "dumps() got multiple values for keyword argument 'compress'" );
                    goto error_exit;
                }

                _python_par_compress = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "dumps() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "dumps() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "dumps() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "dumps() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "dumps() takes exactly %d arguments (%zd given)", 5, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 5 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "dumps() takes exactly %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "dumps() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
#else
            if ( 5 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "dumps() takes %d positional arguments but %zd were given", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "dumps() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "dumps() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "dumps() takes exactly %d non-keyword arguments (%zd given)", 5, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 5 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "dumps() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "dumps() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 5 ? args_given : 5;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_obj != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "dumps() got multiple values for keyword argument 'obj'" );
             goto error_exit;
         }

        _python_par_obj = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_key != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "dumps() got multiple values for keyword argument 'key'" );
             goto error_exit;
         }

        _python_par_key = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_salt != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "dumps() got multiple values for keyword argument 'salt'" );
             goto error_exit;
         }

        _python_par_salt = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_serializer != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "dumps() got multiple values for keyword argument 'serializer'" );
             goto error_exit;
         }

        _python_par_serializer = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_compress != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "dumps() got multiple values for keyword argument 'compress'" );
             goto error_exit;
         }

        _python_par_compress = INCREASE_REFCOUNT( args[ 4 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_key == NULL )
    {
        _python_par_key = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_key );
    }
    if ( _python_par_salt == NULL )
    {
        _python_par_salt = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_salt );
    }
    if ( _python_par_serializer == NULL )
    {
        _python_par_serializer = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 2 ) );
        assertObject( _python_par_serializer );
    }
    if ( _python_par_compress == NULL )
    {
        _python_par_compress = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 3 ) );
        assertObject( _python_par_compress );
    }


    return impl_function_8_dumps_of_module_django__core__signing( self, _python_par_obj, _python_par_key, _python_par_salt, _python_par_serializer, _python_par_compress );

error_exit:;

    Py_XDECREF( _python_par_obj );
    Py_XDECREF( _python_par_key );
    Py_XDECREF( _python_par_salt );
    Py_XDECREF( _python_par_serializer );
    Py_XDECREF( _python_par_compress );

    return NULL;
}

static PyObject *dparse_function_8_dumps_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5)
    {
        return impl_function_8_dumps_of_module_django__core__signing( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_dumps_of_module_django__core__signing( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9_loads_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject *_python_par_s, PyObject *_python_par_key, PyObject *_python_par_salt, PyObject *_python_par_serializer, PyObject *_python_par_max_age )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_s( _python_str_plain_s, _python_par_s );
    PyObjectLocalParameterVariableNoDel _python_var_key( _python_str_plain_key, _python_par_key );
    PyObjectLocalParameterVariableNoDel _python_var_salt( _python_str_plain_salt, _python_par_salt );
    PyObjectLocalParameterVariableNoDel _python_var_serializer( _python_str_plain_serializer, _python_par_serializer );
    PyObjectLocalParameterVariableNoDel _python_var_max_age( _python_str_plain_max_age, _python_par_max_age );
    PyObjectLocalVariable _python_var_base64d( _python_str_plain_base64d );
    PyObjectLocalVariable _python_var_decompress( _python_str_plain_decompress );
    PyObjectLocalVariable _python_var_data( _python_str_plain_data );

    // Actual function code.
    static PyFrameObject *frame_function_9_loads_of_module_django__core__signing = NULL;

    if ( isFrameUnusable( frame_function_9_loads_of_module_django__core__signing ) )
    {
        if ( frame_function_9_loads_of_module_django__core__signing )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_9_loads_of_module_django__core__signing" );
#endif
            Py_DECREF( frame_function_9_loads_of_module_django__core__signing );
        }

        frame_function_9_loads_of_module_django__core__signing = MAKE_FRAME( _codeobj_ccd26b56eb9527e362a8f8cd08915cea, _module_django__core__signing );
    }

    FrameGuard frame_guard( frame_function_9_loads_of_module_django__core__signing );
    try
    {
        assert( Py_REFCNT( frame_function_9_loads_of_module_django__core__signing ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 135 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper1 call2;
            PyObjectTempKeeper1 call4;
            PyObjectTempKeeper1 call5;
            PyObjectTempKeeper0 call7;
            _python_var_base64d.assign1( ( call7.assign( _mvar_django__core__signing_force_bytes.asObject0() ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), PyObjectTemporary( ( call4.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( _mvar_django__core__signing_TimestampSigner.asObject0() ), call2.assign( MAKE_TUPLE1( _python_var_key.asObject() ) ), CALL_FUNCTION( call1.asObject0(), call2.asObject0(), PyObjectTemporary( MAKE_DICT1( _python_var_salt.asObject(), _python_str_plain_salt ) ).asObject() ) ) ).asObject(), _python_str_plain_unsign ) ), call5.assign( MAKE_TUPLE1( _python_var_s.asObject() ) ), CALL_FUNCTION( call4.asObject0(), call5.asObject0(), PyObjectTemporary( MAKE_DICT1( _python_var_max_age.asObject(), _python_str_plain_max_age ) ).asObject() ) ) ).asObject() ) ) );
        }
        _python_var_decompress.assign0( Py_False );
        frame_guard.setLineNumber( 137 );
        if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_INDEX_SLICE( _python_var_base64d.asObject(), 0, 1 ) ).asObject(), _python_str_dot ) )
        {
            frame_guard.setLineNumber( 139 );
            _python_var_base64d.assign1( LOOKUP_INDEX_SLICE( _python_var_base64d.asObject(), 1, PY_SSIZE_T_MAX ) );
            _python_var_decompress.assign0( Py_True );
        }
        frame_guard.setLineNumber( 141 );
        {
            PyObjectTempKeeper0 call9;
            _python_var_data.assign1( ( call9.assign( _mvar_django__core__signing_b64_decode.asObject0() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_var_base64d.asObject() ) ) );
        }
        frame_guard.setLineNumber( 142 );
        if ( CHECK_IF_TRUE( _python_var_decompress.asObject() ) )
        {
            frame_guard.setLineNumber( 143 );
            {
                PyObjectTempKeeper1 call11;
                _python_var_data.assign1( ( call11.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__signing_zlib.asObject0(), _python_str_plain_decompress ) ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), _python_var_data.asObject() ) ) );
            }
        }
        frame_guard.setLineNumber( 144 );
        {
            PyObjectTempKeeper1 call13;
            return ( call13.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( _python_var_serializer.asObject() ) ).asObject(), _python_str_plain_loads ) ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), _python_var_data.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_max_age.updateLocalsDict( _python_var_serializer.updateLocalsDict( _python_var_salt.updateLocalsDict( _python_var_key.updateLocalsDict( _python_var_s.updateLocalsDict( _python_var_data.updateLocalsDict( _python_var_decompress.updateLocalsDict( _python_var_base64d.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_9_loads_of_module_django__core__signing )
        {
           Py_DECREF( frame_function_9_loads_of_module_django__core__signing );
           frame_function_9_loads_of_module_django__core__signing = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_9_loads_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_s = NULL;
    PyObject *_python_par_key = NULL;
    PyObject *_python_par_salt = NULL;
    PyObject *_python_par_serializer = NULL;
    PyObject *_python_par_max_age = NULL;
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
                PyErr_Format( PyExc_TypeError, "loads() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_s == key )
            {
                if (unlikely( _python_par_s ))
                {
                    PyErr_Format( PyExc_TypeError, "loads() got multiple values for keyword argument 's'" );
                    goto error_exit;
                }

                _python_par_s = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_key == key )
            {
                if (unlikely( _python_par_key ))
                {
                    PyErr_Format( PyExc_TypeError, "loads() got multiple values for keyword argument 'key'" );
                    goto error_exit;
                }

                _python_par_key = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_salt == key )
            {
                if (unlikely( _python_par_salt ))
                {
                    PyErr_Format( PyExc_TypeError, "loads() got multiple values for keyword argument 'salt'" );
                    goto error_exit;
                }

                _python_par_salt = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_serializer == key )
            {
                if (unlikely( _python_par_serializer ))
                {
                    PyErr_Format( PyExc_TypeError, "loads() got multiple values for keyword argument 'serializer'" );
                    goto error_exit;
                }

                _python_par_serializer = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_max_age == key )
            {
                if (unlikely( _python_par_max_age ))
                {
                    PyErr_Format( PyExc_TypeError, "loads() got multiple values for keyword argument 'max_age'" );
                    goto error_exit;
                }

                _python_par_max_age = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_s, key ) )
            {
                if (unlikely( _python_par_s ))
                {
                    PyErr_Format( PyExc_TypeError, "loads() got multiple values for keyword argument 's'" );
                    goto error_exit;
                }

                _python_par_s = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_key, key ) )
            {
                if (unlikely( _python_par_key ))
                {
                    PyErr_Format( PyExc_TypeError, "loads() got multiple values for keyword argument 'key'" );
                    goto error_exit;
                }

                _python_par_key = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_salt, key ) )
            {
                if (unlikely( _python_par_salt ))
                {
                    PyErr_Format( PyExc_TypeError, "loads() got multiple values for keyword argument 'salt'" );
                    goto error_exit;
                }

                _python_par_salt = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_serializer, key ) )
            {
                if (unlikely( _python_par_serializer ))
                {
                    PyErr_Format( PyExc_TypeError, "loads() got multiple values for keyword argument 'serializer'" );
                    goto error_exit;
                }

                _python_par_serializer = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_max_age, key ) )
            {
                if (unlikely( _python_par_max_age ))
                {
                    PyErr_Format( PyExc_TypeError, "loads() got multiple values for keyword argument 'max_age'" );
                    goto error_exit;
                }

                _python_par_max_age = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "loads() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "loads() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "loads() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "loads() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "loads() takes exactly %d arguments (%zd given)", 5, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 5 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "loads() takes exactly %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "loads() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
#else
            if ( 5 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "loads() takes %d positional arguments but %zd were given", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "loads() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "loads() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "loads() takes exactly %d non-keyword arguments (%zd given)", 5, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 5 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "loads() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "loads() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 5 ? args_given : 5;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_s != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "loads() got multiple values for keyword argument 's'" );
             goto error_exit;
         }

        _python_par_s = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_key != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "loads() got multiple values for keyword argument 'key'" );
             goto error_exit;
         }

        _python_par_key = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_salt != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "loads() got multiple values for keyword argument 'salt'" );
             goto error_exit;
         }

        _python_par_salt = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_serializer != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "loads() got multiple values for keyword argument 'serializer'" );
             goto error_exit;
         }

        _python_par_serializer = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_max_age != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "loads() got multiple values for keyword argument 'max_age'" );
             goto error_exit;
         }

        _python_par_max_age = INCREASE_REFCOUNT( args[ 4 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_key == NULL )
    {
        _python_par_key = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_key );
    }
    if ( _python_par_salt == NULL )
    {
        _python_par_salt = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_salt );
    }
    if ( _python_par_serializer == NULL )
    {
        _python_par_serializer = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 2 ) );
        assertObject( _python_par_serializer );
    }
    if ( _python_par_max_age == NULL )
    {
        _python_par_max_age = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 3 ) );
        assertObject( _python_par_max_age );
    }


    return impl_function_9_loads_of_module_django__core__signing( self, _python_par_s, _python_par_key, _python_par_salt, _python_par_serializer, _python_par_max_age );

error_exit:;

    Py_XDECREF( _python_par_s );
    Py_XDECREF( _python_par_key );
    Py_XDECREF( _python_par_salt );
    Py_XDECREF( _python_par_serializer );
    Py_XDECREF( _python_par_max_age );

    return NULL;
}

static PyObject *dparse_function_9_loads_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5)
    {
        return impl_function_9_loads_of_module_django__core__signing( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9_loads_of_module_django__core__signing( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_10_Signer_of_module_django__core__signing(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_signature( _python_str_plain_signature );
    PyObjectLocalVariable _python_var_sign( _python_str_plain_sign );
    PyObjectLocalVariable _python_var_unsign( _python_str_plain_unsign );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_signing );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_10_Signer_of_module_django__core__signing(  ) );
    _python_var_signature.assign1( MAKE_FUNCTION_function_2_signature_of_class_10_Signer_of_module_django__core__signing(  ) );
    _python_var_sign.assign1( MAKE_FUNCTION_function_3_sign_of_class_10_Signer_of_module_django__core__signing(  ) );
    _python_var_unsign.assign1( MAKE_FUNCTION_function_4_unsign_of_class_10_Signer_of_module_django__core__signing(  ) );
    return _python_var_unsign.updateLocalsDict( _python_var_sign.updateLocalsDict( _python_var_signature.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_10_Signer_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_key, PyObject *_python_par_sep, PyObject *_python_par_salt )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_key( _python_str_plain_key, _python_par_key );
    PyObjectLocalParameterVariableNoDel _python_var_sep( _python_str_plain_sep, _python_par_sep );
    PyObjectLocalParameterVariableNoDel _python_var_salt( _python_str_plain_salt, _python_par_salt );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_10_Signer_of_module_django__core__signing = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_10_Signer_of_module_django__core__signing ) )
    {
        if ( frame_function_1___init___of_class_10_Signer_of_module_django__core__signing )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_10_Signer_of_module_django__core__signing" );
#endif
            Py_DECREF( frame_function_1___init___of_class_10_Signer_of_module_django__core__signing );
        }

        frame_function_1___init___of_class_10_Signer_of_module_django__core__signing = MAKE_FRAME( _codeobj_68ae90683acf399a806a63e84d2fa7d3, _module_django__core__signing );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_10_Signer_of_module_django__core__signing );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_10_Signer_of_module_django__core__signing ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 151 );
        {
                PyObjectTemporary tmp_identifier( TO_STR( _python_var_sep.asObject() ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_sep );
        }
        frame_guard.setLineNumber( 152 );
        {
            PyObjectTempKeeper0 keeper_0;
            {
                PyObjectTemporary tmp_identifier( TO_STR( PyObjectTemporary( ( CHECK_IF_TRUE( keeper_0.assign( _python_var_key.asObject() ) ) ? INCREASE_REFCOUNT( keeper_0.asObject0() ) : LOOKUP_ATTRIBUTE( _mvar_django__core__signing_settings.asObject0(), _python_str_plain_SECRET_KEY ) ) ).asObject() ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_key );
        }
        }
        frame_guard.setLineNumber( 153 );
        {
            PyObjectTempKeeper0 keeper_1;
            PyObjectTempKeeper1 make_tuple1;
            {
                PyObjectTemporary tmp_identifier( TO_STR( PyObjectTemporary( ( CHECK_IF_TRUE( keeper_1.assign( _python_var_salt.asObject() ) ) ? INCREASE_REFCOUNT( keeper_1.asObject0() ) : BINARY_OPERATION_REMAINDER( _python_unicode_digest_fffb2b4b5e45eb8109d63f2497fbdbc1, PyObjectTemporary( ( make_tuple1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___class__ ) ).asObject(), _python_str_plain___module__ ) ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain___class__ ) ).asObject(), _python_str_plain___name__ ) ).asObject() ) ) ).asObject() ) ) ).asObject() ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_salt );
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
        frame_guard.getFrame0()->f_locals = _python_var_salt.updateLocalsDict( _python_var_sep.updateLocalsDict( _python_var_key.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_10_Signer_of_module_django__core__signing )
        {
           Py_DECREF( frame_function_1___init___of_class_10_Signer_of_module_django__core__signing );
           frame_function_1___init___of_class_10_Signer_of_module_django__core__signing = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_10_Signer_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_key = NULL;
    PyObject *_python_par_sep = NULL;
    PyObject *_python_par_salt = NULL;
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
            if ( found == false && _python_str_plain_key == key )
            {
                if (unlikely( _python_par_key ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'key'" );
                    goto error_exit;
                }

                _python_par_key = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_sep == key )
            {
                if (unlikely( _python_par_sep ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'sep'" );
                    goto error_exit;
                }

                _python_par_sep = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_salt == key )
            {
                if (unlikely( _python_par_salt ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'salt'" );
                    goto error_exit;
                }

                _python_par_salt = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_key, key ) )
            {
                if (unlikely( _python_par_key ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'key'" );
                    goto error_exit;
                }

                _python_par_key = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_sep, key ) )
            {
                if (unlikely( _python_par_sep ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'sep'" );
                    goto error_exit;
                }

                _python_par_sep = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_salt, key ) )
            {
                if (unlikely( _python_par_salt ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'salt'" );
                    goto error_exit;
                }

                _python_par_salt = value;

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
            if ( 4 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 1 )
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
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
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
                if ( 4 == 1 )
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
         if (unlikely( _python_par_key != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'key'" );
             goto error_exit;
         }

        _python_par_key = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_sep != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'sep'" );
             goto error_exit;
         }

        _python_par_sep = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_salt != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'salt'" );
             goto error_exit;
         }

        _python_par_salt = INCREASE_REFCOUNT( args[ 3 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_key == NULL )
    {
        _python_par_key = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_key );
    }
    if ( _python_par_sep == NULL )
    {
        _python_par_sep = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_sep );
    }
    if ( _python_par_salt == NULL )
    {
        _python_par_salt = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 2 ) );
        assertObject( _python_par_salt );
    }


    return impl_function_1___init___of_class_10_Signer_of_module_django__core__signing( self, _python_par_self, _python_par_key, _python_par_sep, _python_par_salt );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_key );
    Py_XDECREF( _python_par_sep );
    Py_XDECREF( _python_par_salt );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_10_Signer_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_1___init___of_class_10_Signer_of_module_django__core__signing( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_10_Signer_of_module_django__core__signing( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_signature_of_class_10_Signer_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalVariable _python_var_signature( _python_str_plain_signature );

    // Actual function code.
    static PyFrameObject *frame_function_2_signature_of_class_10_Signer_of_module_django__core__signing = NULL;

    if ( isFrameUnusable( frame_function_2_signature_of_class_10_Signer_of_module_django__core__signing ) )
    {
        if ( frame_function_2_signature_of_class_10_Signer_of_module_django__core__signing )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_signature_of_class_10_Signer_of_module_django__core__signing" );
#endif
            Py_DECREF( frame_function_2_signature_of_class_10_Signer_of_module_django__core__signing );
        }

        frame_function_2_signature_of_class_10_Signer_of_module_django__core__signing = MAKE_FRAME( _codeobj_57a0bfe2317b29de1b8bca3aed7caa35, _module_django__core__signing );
    }

    FrameGuard frame_guard( frame_function_2_signature_of_class_10_Signer_of_module_django__core__signing );
    try
    {
        assert( Py_REFCNT( frame_function_2_signature_of_class_10_Signer_of_module_django__core__signing ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 157 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper1 call2;
            PyObjectTempKeeper0 call3;
            _python_var_signature.assign1( ( call1.assign( _mvar_django__core__signing_base64_hmac.asObject0() ), call2.assign( BINARY_OPERATION_ADD( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_salt ) ).asObject(), _python_unicode_plain_signer ) ), call3.assign( _python_var_value.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), call3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_key ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 159 );
        {
            PyObjectTempKeeper0 call5;
            return ( call5.assign( _mvar_django__core__signing_force_str.asObject0() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_signature.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_value.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_signature.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_signature_of_class_10_Signer_of_module_django__core__signing )
        {
           Py_DECREF( frame_function_2_signature_of_class_10_Signer_of_module_django__core__signing );
           frame_function_2_signature_of_class_10_Signer_of_module_django__core__signing = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_signature_of_class_10_Signer_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_value = NULL;
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
                PyErr_Format( PyExc_TypeError, "signature() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "signature() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_value == key )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "signature() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "signature() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "signature() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "signature() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "signature() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "signature() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "signature() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "signature() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "signature() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "signature() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "signature() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "signature() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "signature() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "signature() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "signature() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "signature() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "signature() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "signature() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_2_signature_of_class_10_Signer_of_module_django__core__signing( self, _python_par_self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_2_signature_of_class_10_Signer_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2_signature_of_class_10_Signer_of_module_django__core__signing( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_signature_of_class_10_Signer_of_module_django__core__signing( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_sign_of_class_10_Signer_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_3_sign_of_class_10_Signer_of_module_django__core__signing = NULL;

    if ( isFrameUnusable( frame_function_3_sign_of_class_10_Signer_of_module_django__core__signing ) )
    {
        if ( frame_function_3_sign_of_class_10_Signer_of_module_django__core__signing )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_sign_of_class_10_Signer_of_module_django__core__signing" );
#endif
            Py_DECREF( frame_function_3_sign_of_class_10_Signer_of_module_django__core__signing );
        }

        frame_function_3_sign_of_class_10_Signer_of_module_django__core__signing = MAKE_FRAME( _codeobj_32dfe65e2ec83f47a06a8990db408c61, _module_django__core__signing );
    }

    FrameGuard frame_guard( frame_function_3_sign_of_class_10_Signer_of_module_django__core__signing );
    try
    {
        assert( Py_REFCNT( frame_function_3_sign_of_class_10_Signer_of_module_django__core__signing ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 162 );
        {
            PyObjectTempKeeper0 call1;
            _python_var_value.assign1( ( call1.assign( _mvar_django__core__signing_force_str.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_value.asObject() ) ) );
        }
        frame_guard.setLineNumber( 163 );
        {
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper0 make_tuple5;
            PyObjectTempKeeper1 make_tuple6;
            return BINARY_OPERATION_REMAINDER( _python_str_digest_01f53e42b0247f24e3030ed68606e4cf, PyObjectTemporary( ( make_tuple5.assign( _python_var_value.asObject() ), make_tuple6.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_sep ) ), MAKE_TUPLE3( make_tuple5.asObject0(), make_tuple6.asObject0(), PyObjectTemporary( ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_signature ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_value.asObject() ) ) ).asObject() ) ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_value.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_3_sign_of_class_10_Signer_of_module_django__core__signing )
        {
           Py_DECREF( frame_function_3_sign_of_class_10_Signer_of_module_django__core__signing );
           frame_function_3_sign_of_class_10_Signer_of_module_django__core__signing = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_sign_of_class_10_Signer_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_value = NULL;
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
                PyErr_Format( PyExc_TypeError, "sign() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "sign() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_value == key )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "sign() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "sign() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "sign() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "sign() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "sign() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "sign() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "sign() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "sign() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "sign() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "sign() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "sign() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "sign() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "sign() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "sign() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "sign() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "sign() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "sign() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "sign() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_3_sign_of_class_10_Signer_of_module_django__core__signing( self, _python_par_self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_3_sign_of_class_10_Signer_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_3_sign_of_class_10_Signer_of_module_django__core__signing( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_sign_of_class_10_Signer_of_module_django__core__signing( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_unsign_of_class_10_Signer_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_signed_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_signed_value( _python_str_plain_signed_value, _python_par_signed_value );
    PyObjectLocalVariable _python_var_value( _python_str_plain_value );
    PyObjectLocalVariable _python_var_sig( _python_str_plain_sig );

    // Actual function code.
    static PyFrameObject *frame_function_4_unsign_of_class_10_Signer_of_module_django__core__signing = NULL;

    if ( isFrameUnusable( frame_function_4_unsign_of_class_10_Signer_of_module_django__core__signing ) )
    {
        if ( frame_function_4_unsign_of_class_10_Signer_of_module_django__core__signing )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_unsign_of_class_10_Signer_of_module_django__core__signing" );
#endif
            Py_DECREF( frame_function_4_unsign_of_class_10_Signer_of_module_django__core__signing );
        }

        frame_function_4_unsign_of_class_10_Signer_of_module_django__core__signing = MAKE_FRAME( _codeobj_d1b27d855ffa15a7c0f88bcde4e47c20, _module_django__core__signing );
    }

    FrameGuard frame_guard( frame_function_4_unsign_of_class_10_Signer_of_module_django__core__signing );
    try
    {
        assert( Py_REFCNT( frame_function_4_unsign_of_class_10_Signer_of_module_django__core__signing ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 166 );
        {
            PyObjectTempKeeper0 call1;
            _python_var_signed_value.assign1( ( call1.assign( _mvar_django__core__signing_force_str.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_signed_value.asObject() ) ) );
        }
        frame_guard.setLineNumber( 167 );
        {
            PyObjectTempKeeper1 cmp5;
            if ( ( cmp5.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_sep ) ), SEQUENCE_CONTAINS_NOT_BOOL( cmp5.asObject0(), _python_var_signed_value.asObject() ) ) )
        {
            frame_guard.setLineNumber( 168 );
            {
                PyObjectTempKeeper0 call3;
                {
                    PyObjectTemporary tmp_exception_type( ( call3.assign( _mvar_django__core__signing_BadSignature.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_992ee0261a297bacc7ed8a01314f955b, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_sep ) ).asObject() ) ).asObject() ) ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
            }
        }
        }
        {
            frame_guard.setLineNumber( 169 );
            PyObject *_tmp_python_tmp_source_iter;
            {
                PyObjectTempKeeper1 call7;
                _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( call7.assign( LOOKUP_ATTRIBUTE( _python_var_signed_value.asObject(), _python_str_plain_rsplit ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_sep ) ).asObject(), _python_int_pos_1 ) ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
            _python_var_value.assign0( _python_tmp_element_1.asObject() );
            _python_var_sig.assign0( _python_tmp_element_2.asObject() );
        }
        frame_guard.setLineNumber( 170 );
        {
            PyObjectTempKeeper1 call12;
            PyObjectTempKeeper0 call14;
            PyObjectTempKeeper0 call15;
            if ( CHECK_IF_TRUE( PyObjectTemporary( ( call14.assign( _mvar_django__core__signing_constant_time_compare.asObject0() ), call15.assign( _python_var_sig.asObject() ), CALL_FUNCTION_WITH_ARGS( call14.asObject0(), call15.asObject0(), PyObjectTemporary( ( call12.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_signature ) ), CALL_FUNCTION_WITH_ARGS( call12.asObject0(), _python_var_value.asObject() ) ) ).asObject() ) ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 171 );
            {
                PyObjectTempKeeper0 call10;
                return ( call10.assign( _mvar_django__core__signing_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), _python_var_value.asObject() ) );
            }
        }
        }
        frame_guard.setLineNumber( 172 );
        {
            PyObjectTempKeeper0 call17;
            {
                PyObjectTemporary tmp_exception_type( ( call17.assign( _mvar_django__core__signing_BadSignature.asObject0() ), CALL_FUNCTION_WITH_ARGS( call17.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_02b3ac186505f3aa8db7407b30e8547a, _python_var_sig.asObject() ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_signed_value.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_sig.updateLocalsDict( _python_var_value.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_4_unsign_of_class_10_Signer_of_module_django__core__signing )
        {
           Py_DECREF( frame_function_4_unsign_of_class_10_Signer_of_module_django__core__signing );
           frame_function_4_unsign_of_class_10_Signer_of_module_django__core__signing = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_unsign_of_class_10_Signer_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_signed_value = NULL;
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
                PyErr_Format( PyExc_TypeError, "unsign() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "unsign() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_signed_value == key )
            {
                if (unlikely( _python_par_signed_value ))
                {
                    PyErr_Format( PyExc_TypeError, "unsign() got multiple values for keyword argument 'signed_value'" );
                    goto error_exit;
                }

                _python_par_signed_value = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "unsign() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_signed_value, key ) )
            {
                if (unlikely( _python_par_signed_value ))
                {
                    PyErr_Format( PyExc_TypeError, "unsign() got multiple values for keyword argument 'signed_value'" );
                    goto error_exit;
                }

                _python_par_signed_value = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "unsign() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "unsign() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "unsign() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "unsign() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "unsign() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "unsign() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "unsign() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "unsign() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "unsign() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "unsign() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "unsign() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "unsign() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "unsign() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "unsign() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_signed_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "unsign() got multiple values for keyword argument 'signed_value'" );
             goto error_exit;
         }

        _python_par_signed_value = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_4_unsign_of_class_10_Signer_of_module_django__core__signing( self, _python_par_self, _python_par_signed_value );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_signed_value );

    return NULL;
}

static PyObject *dparse_function_4_unsign_of_class_10_Signer_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_4_unsign_of_class_10_Signer_of_module_django__core__signing( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_unsign_of_class_10_Signer_of_module_django__core__signing( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_11_TimestampSigner_of_module_django__core__signing(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var_timestamp( _python_str_plain_timestamp );
    PyObjectLocalVariable _python_var_sign( _python_str_plain_sign );
    PyObjectLocalVariable _python_var_unsign( _python_str_plain_unsign );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_signing );
    _python_var_timestamp.assign1( MAKE_FUNCTION_function_1_timestamp_of_class_11_TimestampSigner_of_module_django__core__signing(  ) );
    _python_var_sign.assign1( MAKE_FUNCTION_function_2_sign_of_class_11_TimestampSigner_of_module_django__core__signing(  ) );
    _python_var_unsign.assign1( MAKE_FUNCTION_function_3_unsign_of_class_11_TimestampSigner_of_module_django__core__signing(  ) );
    return _python_var_unsign.updateLocalsDict( _python_var_sign.updateLocalsDict( _python_var_timestamp.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) );
}


static PyObject *impl_function_1_timestamp_of_class_11_TimestampSigner_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_1_timestamp_of_class_11_TimestampSigner_of_module_django__core__signing = NULL;

    if ( isFrameUnusable( frame_function_1_timestamp_of_class_11_TimestampSigner_of_module_django__core__signing ) )
    {
        if ( frame_function_1_timestamp_of_class_11_TimestampSigner_of_module_django__core__signing )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_timestamp_of_class_11_TimestampSigner_of_module_django__core__signing" );
#endif
            Py_DECREF( frame_function_1_timestamp_of_class_11_TimestampSigner_of_module_django__core__signing );
        }

        frame_function_1_timestamp_of_class_11_TimestampSigner_of_module_django__core__signing = MAKE_FRAME( _codeobj_fe0deabc3ddec59808324c3e8fa55f09, _module_django__core__signing );
    }

    FrameGuard frame_guard( frame_function_1_timestamp_of_class_11_TimestampSigner_of_module_django__core__signing );
    try
    {
        assert( Py_REFCNT( frame_function_1_timestamp_of_class_11_TimestampSigner_of_module_django__core__signing ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 178 );
        {
            PyObjectTempKeeper1 call1;
            return ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__signing_baseconv.asObject0(), _python_str_plain_base62 ) ).asObject(), _python_str_plain_encode ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( TO_INT( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__signing_time.asObject0(), _python_str_plain_time ) ).asObject() ) ).asObject() ) ).asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_1_timestamp_of_class_11_TimestampSigner_of_module_django__core__signing )
        {
           Py_DECREF( frame_function_1_timestamp_of_class_11_TimestampSigner_of_module_django__core__signing );
           frame_function_1_timestamp_of_class_11_TimestampSigner_of_module_django__core__signing = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1_timestamp_of_class_11_TimestampSigner_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "timestamp() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "timestamp() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "timestamp() got multiple values for keyword argument 'self'" );
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
                   "timestamp() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "timestamp() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "timestamp() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "timestamp() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "timestamp() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "timestamp() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "timestamp() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "timestamp() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "timestamp() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "timestamp() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "timestamp() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "timestamp() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "timestamp() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "timestamp() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_1_timestamp_of_class_11_TimestampSigner_of_module_django__core__signing( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_1_timestamp_of_class_11_TimestampSigner_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_1_timestamp_of_class_11_TimestampSigner_of_module_django__core__signing( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_timestamp_of_class_11_TimestampSigner_of_module_django__core__signing( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_sign_of_class_11_TimestampSigner_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_2_sign_of_class_11_TimestampSigner_of_module_django__core__signing = NULL;

    if ( isFrameUnusable( frame_function_2_sign_of_class_11_TimestampSigner_of_module_django__core__signing ) )
    {
        if ( frame_function_2_sign_of_class_11_TimestampSigner_of_module_django__core__signing )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_sign_of_class_11_TimestampSigner_of_module_django__core__signing" );
#endif
            Py_DECREF( frame_function_2_sign_of_class_11_TimestampSigner_of_module_django__core__signing );
        }

        frame_function_2_sign_of_class_11_TimestampSigner_of_module_django__core__signing = MAKE_FRAME( _codeobj_28e2a52c0586e0ec459b99baa3be5cd1, _module_django__core__signing );
    }

    FrameGuard frame_guard( frame_function_2_sign_of_class_11_TimestampSigner_of_module_django__core__signing );
    try
    {
        assert( Py_REFCNT( frame_function_2_sign_of_class_11_TimestampSigner_of_module_django__core__signing ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 181 );
        {
            PyObjectTempKeeper0 call1;
            _python_var_value.assign1( ( call1.assign( _mvar_django__core__signing_force_str.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_value.asObject() ) ) );
        }
        frame_guard.setLineNumber( 182 );
        {
            PyObjectTempKeeper0 make_tuple3;
            PyObjectTempKeeper1 make_tuple4;
            _python_var_value.assign1( BINARY_OPERATION_REMAINDER( _python_str_digest_01f53e42b0247f24e3030ed68606e4cf, PyObjectTemporary( ( make_tuple3.assign( _python_var_value.asObject() ), make_tuple4.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_sep ) ), MAKE_TUPLE3( make_tuple3.asObject0(), make_tuple4.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_timestamp ) ).asObject() ) ).asObject() ) ) ).asObject() ) );
        }
        frame_guard.setLineNumber( 183 );
        {
            PyObjectTempKeeper1 call8;
            PyObjectTempKeeper0 super6;
            return ( call8.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super6.assign( _mvar_django__core__signing_TimestampSigner.asObject0() ), BUILTIN_SUPER( super6.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain_sign ) ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), _python_var_value.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_value.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_2_sign_of_class_11_TimestampSigner_of_module_django__core__signing )
        {
           Py_DECREF( frame_function_2_sign_of_class_11_TimestampSigner_of_module_django__core__signing );
           frame_function_2_sign_of_class_11_TimestampSigner_of_module_django__core__signing = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_sign_of_class_11_TimestampSigner_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_value = NULL;
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
                PyErr_Format( PyExc_TypeError, "sign() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "sign() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_value == key )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "sign() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "sign() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "sign() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "sign() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "sign() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "sign() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "sign() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "sign() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "sign() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "sign() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "sign() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "sign() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "sign() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "sign() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "sign() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "sign() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "sign() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "sign() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_2_sign_of_class_11_TimestampSigner_of_module_django__core__signing( self, _python_par_self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_2_sign_of_class_11_TimestampSigner_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2_sign_of_class_11_TimestampSigner_of_module_django__core__signing( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_sign_of_class_11_TimestampSigner_of_module_django__core__signing( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_unsign_of_class_11_TimestampSigner_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_value, PyObject *_python_par_max_age )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_max_age( _python_str_plain_max_age, _python_par_max_age );
    PyObjectLocalVariable _python_var_result( _python_str_plain_result );
    PyObjectLocalVariable _python_var_timestamp( _python_str_plain_timestamp );
    PyObjectLocalVariable _python_var_age( _python_str_plain_age );

    // Actual function code.
    static PyFrameObject *frame_function_3_unsign_of_class_11_TimestampSigner_of_module_django__core__signing = NULL;

    if ( isFrameUnusable( frame_function_3_unsign_of_class_11_TimestampSigner_of_module_django__core__signing ) )
    {
        if ( frame_function_3_unsign_of_class_11_TimestampSigner_of_module_django__core__signing )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_unsign_of_class_11_TimestampSigner_of_module_django__core__signing" );
#endif
            Py_DECREF( frame_function_3_unsign_of_class_11_TimestampSigner_of_module_django__core__signing );
        }

        frame_function_3_unsign_of_class_11_TimestampSigner_of_module_django__core__signing = MAKE_FRAME( _codeobj_813a0077c614ff62f1c1f96df918a221, _module_django__core__signing );
    }

    FrameGuard frame_guard( frame_function_3_unsign_of_class_11_TimestampSigner_of_module_django__core__signing );
    try
    {
        assert( Py_REFCNT( frame_function_3_unsign_of_class_11_TimestampSigner_of_module_django__core__signing ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 186 );
        {
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper0 super1;
            _python_var_result.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super1.assign( _mvar_django__core__signing_TimestampSigner.asObject0() ), BUILTIN_SUPER( super1.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain_unsign ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_value.asObject() ) ) );
        }
        {
            frame_guard.setLineNumber( 187 );
            PyObject *_tmp_python_tmp_source_iter;
            {
                PyObjectTempKeeper1 call5;
                _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( call5.assign( LOOKUP_ATTRIBUTE( _python_var_result.asObject(), _python_str_plain_rsplit ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_sep ) ).asObject(), _python_int_pos_1 ) ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
            _python_var_value.assign0( _python_tmp_element_1.asObject() );
            _python_var_timestamp.assign0( _python_tmp_element_2.asObject() );
        }
        frame_guard.setLineNumber( 188 );
        {
            PyObjectTempKeeper1 call8;
            _python_var_timestamp.assign1( ( call8.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__signing_baseconv.asObject0(), _python_str_plain_base62 ) ).asObject(), _python_str_plain_decode ) ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), _python_var_timestamp.asObject() ) ) );
        }
        frame_guard.setLineNumber( 189 );
        if ( ( _python_var_max_age.asObject() != Py_None ) )
        {
            frame_guard.setLineNumber( 191 );
            {
                PyObjectTempKeeper1 op10;
                _python_var_age.assign1( ( op10.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__signing_time.asObject0(), _python_str_plain_time ) ).asObject() ) ), BINARY_OPERATION_SUB( op10.asObject0(), _python_var_timestamp.asObject() ) ) );
            }
            frame_guard.setLineNumber( 192 );
            {
                PyObjectTempKeeper0 cmp16;
                if ( ( cmp16.assign( _python_var_age.asObject() ), RICH_COMPARE_BOOL_GT( cmp16.asObject0(), _python_var_max_age.asObject() ) ) )
            {
                frame_guard.setLineNumber( 193 );
                {
                    PyObjectTempKeeper0 call14;
                    PyObjectTempKeeper0 make_tuple12;
                    {
                        PyObjectTemporary tmp_exception_type( ( call14.assign( _mvar_django__core__signing_SignatureExpired.asObject0() ), CALL_FUNCTION_WITH_ARGS( call14.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_4e82b313eeda230cd456630c40121d13, PyObjectTemporary( ( make_tuple12.assign( _python_var_age.asObject() ), MAKE_TUPLE2( make_tuple12.asObject0(), _python_var_max_age.asObject() ) ) ).asObject() ) ).asObject() ) ) );
                        RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                }
                }
            }
            }
        }
        frame_guard.setLineNumber( 195 );
        return _python_var_value.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_max_age.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_age.updateLocalsDict( _python_var_timestamp.updateLocalsDict( _python_var_result.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_unsign_of_class_11_TimestampSigner_of_module_django__core__signing )
        {
           Py_DECREF( frame_function_3_unsign_of_class_11_TimestampSigner_of_module_django__core__signing );
           frame_function_3_unsign_of_class_11_TimestampSigner_of_module_django__core__signing = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_unsign_of_class_11_TimestampSigner_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_max_age = NULL;
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
                PyErr_Format( PyExc_TypeError, "unsign() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "unsign() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_value == key )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "unsign() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_max_age == key )
            {
                if (unlikely( _python_par_max_age ))
                {
                    PyErr_Format( PyExc_TypeError, "unsign() got multiple values for keyword argument 'max_age'" );
                    goto error_exit;
                }

                _python_par_max_age = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "unsign() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "unsign() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_max_age, key ) )
            {
                if (unlikely( _python_par_max_age ))
                {
                    PyErr_Format( PyExc_TypeError, "unsign() got multiple values for keyword argument 'max_age'" );
                    goto error_exit;
                }

                _python_par_max_age = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "unsign() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "unsign() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "unsign() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "unsign() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "unsign() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "unsign() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "unsign() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "unsign() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "unsign() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "unsign() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "unsign() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "unsign() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "unsign() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "unsign() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "unsign() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_max_age != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "unsign() got multiple values for keyword argument 'max_age'" );
             goto error_exit;
         }

        _python_par_max_age = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_max_age == NULL )
    {
        _python_par_max_age = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_max_age );
    }


    return impl_function_3_unsign_of_class_11_TimestampSigner_of_module_django__core__signing( self, _python_par_self, _python_par_value, _python_par_max_age );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_max_age );

    return NULL;
}

static PyObject *dparse_function_3_unsign_of_class_11_TimestampSigner_of_module_django__core__signing( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_3_unsign_of_class_11_TimestampSigner_of_module_django__core__signing( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_unsign_of_class_11_TimestampSigner_of_module_django__core__signing( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1___init___of_class_10_Signer_of_module_django__core__signing(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_10_Signer_of_module_django__core__signing,
        dparse_function_1___init___of_class_10_Signer_of_module_django__core__signing,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_68ae90683acf399a806a63e84d2fa7d3,
        INCREASE_REFCOUNT( _python_tuple_none_unicode_chr_58_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__signing,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_dumps_of_class_7_JSONSerializer_of_module_django__core__signing(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_dumps_of_class_7_JSONSerializer_of_module_django__core__signing,
        dparse_function_1_dumps_of_class_7_JSONSerializer_of_module_django__core__signing,
        _python_str_plain_dumps,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_3d3579d41950a805978601e2301b709c,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__signing,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_timestamp_of_class_11_TimestampSigner_of_module_django__core__signing(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_timestamp_of_class_11_TimestampSigner_of_module_django__core__signing,
        dparse_function_1_timestamp_of_class_11_TimestampSigner_of_module_django__core__signing,
        _python_str_plain_timestamp,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_fe0deabc3ddec59808324c3e8fa55f09,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__signing,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_loads_of_class_7_JSONSerializer_of_module_django__core__signing(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_loads_of_class_7_JSONSerializer_of_module_django__core__signing,
        dparse_function_2_loads_of_class_7_JSONSerializer_of_module_django__core__signing,
        _python_str_plain_loads,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ca68ef91b3b5461d9b93f064940906cc,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__signing,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_sign_of_class_11_TimestampSigner_of_module_django__core__signing(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_sign_of_class_11_TimestampSigner_of_module_django__core__signing,
        dparse_function_2_sign_of_class_11_TimestampSigner_of_module_django__core__signing,
        _python_str_plain_sign,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_28e2a52c0586e0ec459b99baa3be5cd1,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__signing,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_signature_of_class_10_Signer_of_module_django__core__signing(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_signature_of_class_10_Signer_of_module_django__core__signing,
        dparse_function_2_signature_of_class_10_Signer_of_module_django__core__signing,
        _python_str_plain_signature,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_57a0bfe2317b29de1b8bca3aed7caa35,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__signing,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_b64_encode_of_module_django__core__signing(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_b64_encode_of_module_django__core__signing,
        dparse_function_3_b64_encode_of_module_django__core__signing,
        _python_str_plain_b64_encode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_877257ba14a9178c88d940b4bd2012b7,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__signing,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_sign_of_class_10_Signer_of_module_django__core__signing(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_sign_of_class_10_Signer_of_module_django__core__signing,
        dparse_function_3_sign_of_class_10_Signer_of_module_django__core__signing,
        _python_str_plain_sign,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_32dfe65e2ec83f47a06a8990db408c61,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__signing,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_unsign_of_class_11_TimestampSigner_of_module_django__core__signing(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_unsign_of_class_11_TimestampSigner_of_module_django__core__signing,
        dparse_function_3_unsign_of_class_11_TimestampSigner_of_module_django__core__signing,
        _python_str_plain_unsign,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_813a0077c614ff62f1c1f96df918a221,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__signing,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_b64_decode_of_module_django__core__signing(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_b64_decode_of_module_django__core__signing,
        dparse_function_4_b64_decode_of_module_django__core__signing,
        _python_str_plain_b64_decode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ddc7ded4a441e4f2a49703148fe3b63f,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__signing,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_unsign_of_class_10_Signer_of_module_django__core__signing(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_unsign_of_class_10_Signer_of_module_django__core__signing,
        dparse_function_4_unsign_of_class_10_Signer_of_module_django__core__signing,
        _python_str_plain_unsign,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d1b27d855ffa15a7c0f88bcde4e47c20,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__signing,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_base64_hmac_of_module_django__core__signing(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_base64_hmac_of_module_django__core__signing,
        dparse_function_5_base64_hmac_of_module_django__core__signing,
        _python_str_plain_base64_hmac,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_3af9d3f481199fa19e8265d1babf8408,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__signing,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_get_cookie_signer_of_module_django__core__signing(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_get_cookie_signer_of_module_django__core__signing,
        dparse_function_6_get_cookie_signer_of_module_django__core__signing,
        _python_str_plain_get_cookie_signer,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_1f0fba97700cf56aecc8d6d6bc702e89,
        INCREASE_REFCOUNT( _python_tuple_unicode_digest_12ce7501e19c48e93f973d78ae2bad84_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__signing,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_dumps_of_module_django__core__signing( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_dumps_of_module_django__core__signing,
        dparse_function_8_dumps_of_module_django__core__signing,
        _python_str_plain_dumps,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_3b6073b3dcc8960a9a142e2fd05aaba1,
        defaults,
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__signing,
        _python_unicode_digest_e5c74b6fa3cf5b108a3400a0d0fbf597
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_loads_of_module_django__core__signing( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_loads_of_module_django__core__signing,
        dparse_function_9_loads_of_module_django__core__signing,
        _python_str_plain_loads,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ccd26b56eb9527e362a8f8cd08915cea,
        defaults,
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__signing,
        _python_unicode_digest_12c23d4cc1ee5157855839e8fd13c577
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.core.signing",   /* m_name */
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

MOD_INIT_DECL( django__core__signing )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__core__signing );
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

    // puts( "in initdjango__core__signing" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__core__signing = Py_InitModule4(
        "django.core.signing",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__core__signing = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__core__signing = (PyDictObject *)((PyModuleObject *)_module_django__core__signing)->md_dict;

    assertObject( _module_django__core__signing );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_d4ce648ac4451507cb03fe56ac247ffb, _module_django__core__signing );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__core__signing );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__core__signing != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__core__signing, (Nuitka_StringObject *)_python_str_plain___doc__, _python_unicode_digest_09861f0e3edb67b2aee84e421fb1d9da );
    UPDATE_STRING_DICT0( _moduledict_django__core__signing, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_47c13b133d29d704996f4fbd6e6c4755 );
    PyFrameObject *frame_module_django__core__signing = MAKE_FRAME( _codeobj_b94bdbdae9cdd8fdcd61ce921b29779c, _module_django__core__signing );

    FrameGuard frame_guard( frame_module_django__core__signing );
    try
    {
        assert( Py_REFCNT( frame_module_django__core__signing ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 36 );
        UPDATE_STRING_DICT1( _moduledict_django__core__signing, (Nuitka_StringObject *)_python_str_plain_unicode_literals, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain___future__, ((PyModuleObject *)_module_django__core__signing)->md_dict, ((PyModuleObject *)_module_django__core__signing)->md_dict, _python_list_str_plain_unicode_literals_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_unicode_literals ) );
        frame_guard.setLineNumber( 38 );
        UPDATE_STRING_DICT1( _moduledict_django__core__signing, (Nuitka_StringObject *)_python_str_plain_base64, IMPORT_MODULE( _python_str_plain_base64, ((PyModuleObject *)_module_django__core__signing)->md_dict, ((PyModuleObject *)_module_django__core__signing)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 39 );
        UPDATE_STRING_DICT1( _moduledict_django__core__signing, (Nuitka_StringObject *)_python_str_plain_json, IMPORT_MODULE( _python_str_plain_json, ((PyModuleObject *)_module_django__core__signing)->md_dict, ((PyModuleObject *)_module_django__core__signing)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 40 );
        UPDATE_STRING_DICT1( _moduledict_django__core__signing, (Nuitka_StringObject *)_python_str_plain_time, IMPORT_MODULE( _python_str_plain_time, ((PyModuleObject *)_module_django__core__signing)->md_dict, ((PyModuleObject *)_module_django__core__signing)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 41 );
        UPDATE_STRING_DICT1( _moduledict_django__core__signing, (Nuitka_StringObject *)_python_str_plain_zlib, IMPORT_MODULE( _python_str_plain_zlib, ((PyModuleObject *)_module_django__core__signing)->md_dict, ((PyModuleObject *)_module_django__core__signing)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 43 );
        UPDATE_STRING_DICT1( _moduledict_django__core__signing, (Nuitka_StringObject *)_python_str_plain_settings, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__core__signing)->md_dict, ((PyModuleObject *)_module_django__core__signing)->md_dict, _python_list_str_plain_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_settings ) );
        frame_guard.setLineNumber( 44 );
        UPDATE_STRING_DICT1( _moduledict_django__core__signing, (Nuitka_StringObject *)_python_str_plain_baseconv, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__core__signing)->md_dict, ((PyModuleObject *)_module_django__core__signing)->md_dict, _python_list_str_plain_baseconv_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_baseconv ) );
        frame_guard.setLineNumber( 45 );
        UPDATE_STRING_DICT1( _moduledict_django__core__signing, (Nuitka_StringObject *)_python_str_plain_constant_time_compare, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_3c5b97d03e4a763dec24de64fa4fff15, ((PyModuleObject *)_module_django__core__signing)->md_dict, ((PyModuleObject *)_module_django__core__signing)->md_dict, _python_list_str_plain_constant_time_compare_str_plain_salted_hmac_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_constant_time_compare ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__signing, (Nuitka_StringObject *)_python_str_plain_salted_hmac, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_3c5b97d03e4a763dec24de64fa4fff15, ((PyModuleObject *)_module_django__core__signing)->md_dict, ((PyModuleObject *)_module_django__core__signing)->md_dict, _python_list_str_plain_constant_time_compare_str_plain_salted_hmac_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_salted_hmac ) );
        frame_guard.setLineNumber( 46 );
        UPDATE_STRING_DICT1( _moduledict_django__core__signing, (Nuitka_StringObject *)_python_str_plain_force_bytes, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__core__signing)->md_dict, ((PyModuleObject *)_module_django__core__signing)->md_dict, _python_list_d6306c2f860a2f77bd4b5bdcfd86dfec_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_force_bytes ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__signing, (Nuitka_StringObject *)_python_str_plain_force_str, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__core__signing)->md_dict, ((PyModuleObject *)_module_django__core__signing)->md_dict, _python_list_d6306c2f860a2f77bd4b5bdcfd86dfec_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_force_str ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__signing, (Nuitka_StringObject *)_python_str_plain_force_text, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__core__signing)->md_dict, ((PyModuleObject *)_module_django__core__signing)->md_dict, _python_list_d6306c2f860a2f77bd4b5bdcfd86dfec_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_force_text ) );
        frame_guard.setLineNumber( 47 );
        UPDATE_STRING_DICT1( _moduledict_django__core__signing, (Nuitka_StringObject *)_python_str_plain_import_by_path, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_03bb9f131d782ff4dbd31e0966379285, ((PyModuleObject *)_module_django__core__signing)->md_dict, ((PyModuleObject *)_module_django__core__signing)->md_dict, _python_list_str_plain_import_by_path_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_import_by_path ) );
        {
            frame_guard.setLineNumber( 50 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( PyExc_Exception ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_1_BadSignature_of_module_django__core__signing(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__signing___metaclass__.isInitialized( false ) ? _mvar_django__core__signing___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_BadSignature, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__signing, (Nuitka_StringObject *)_python_str_plain_BadSignature, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 57 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__core__signing_BadSignature.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_2_SignatureExpired_of_module_django__core__signing(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__signing___metaclass__.isInitialized( false ) ? _mvar_django__core__signing___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper0 call7;
                _tmp_python_tmp_class = ( call5.assign( _python_tmp_metaclass.asObject() ), call7.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_str_plain_SignatureExpired, call7.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__signing, (Nuitka_StringObject *)_python_str_plain_SignatureExpired, _python_tmp_class.asObject() );
        }
        UPDATE_STRING_DICT1( _moduledict_django__core__signing, (Nuitka_StringObject *)_python_str_plain_b64_encode, MAKE_FUNCTION_function_3_b64_encode_of_module_django__core__signing(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__signing, (Nuitka_StringObject *)_python_str_plain_b64_decode, MAKE_FUNCTION_function_4_b64_decode_of_module_django__core__signing(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__signing, (Nuitka_StringObject *)_python_str_plain_base64_hmac, MAKE_FUNCTION_function_5_base64_hmac_of_module_django__core__signing(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__signing, (Nuitka_StringObject *)_python_str_plain_get_cookie_signer, MAKE_FUNCTION_function_6_get_cookie_signer_of_module_django__core__signing(  ) );
        {
            frame_guard.setLineNumber( 82 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_7_JSONSerializer_of_module_django__core__signing(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__signing___metaclass__.isInitialized( false ) ? _mvar_django__core__signing___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call11;
                PyObjectTempKeeper0 call9;
                _tmp_python_tmp_class = ( call9.assign( _python_tmp_metaclass.asObject() ), call11.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_str_plain_JSONSerializer, call11.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__signing, (Nuitka_StringObject *)_python_str_plain_JSONSerializer, _python_tmp_class.asObject() );
        }
        frame_guard.setLineNumber( 94 );
        UPDATE_STRING_DICT1( _moduledict_django__core__signing, (Nuitka_StringObject *)_python_str_plain_dumps, MAKE_FUNCTION_function_8_dumps_of_module_django__core__signing( MAKE_TUPLE4( Py_None, _python_unicode_digest_d4ce648ac4451507cb03fe56ac247ffb, _mvar_django__core__signing_JSONSerializer.asObject0(), Py_False ) ) );
        frame_guard.setLineNumber( 127 );
        UPDATE_STRING_DICT1( _moduledict_django__core__signing, (Nuitka_StringObject *)_python_str_plain_loads, MAKE_FUNCTION_function_9_loads_of_module_django__core__signing( MAKE_TUPLE4( Py_None, _python_unicode_digest_d4ce648ac4451507cb03fe56ac247ffb, _mvar_django__core__signing_JSONSerializer.asObject0(), Py_None ) ) );
        {
            frame_guard.setLineNumber( 147 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_10_Signer_of_module_django__core__signing(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__signing___metaclass__.isInitialized( false ) ? _mvar_django__core__signing___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call13;
                PyObjectTempKeeper0 call15;
                _tmp_python_tmp_class = ( call13.assign( _python_tmp_metaclass.asObject() ), call15.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), _python_str_plain_Signer, call15.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__signing, (Nuitka_StringObject *)_python_str_plain_Signer, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 175 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__core__signing_Signer.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_11_TimestampSigner_of_module_django__core__signing(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__signing___metaclass__.isInitialized( false ) ? _mvar_django__core__signing___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call17;
                PyObjectTempKeeper0 call19;
                _tmp_python_tmp_class = ( call17.assign( _python_tmp_metaclass.asObject() ), call19.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call17.asObject0(), _python_str_plain_TimestampSigner, call19.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__core__signing, (Nuitka_StringObject *)_python_str_plain_TimestampSigner, _python_tmp_class.asObject() );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__core__signing)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }

   return MOD_RETURN_VALUE( _module_django__core__signing );
}
