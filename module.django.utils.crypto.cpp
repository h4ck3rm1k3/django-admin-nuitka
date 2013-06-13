// Generated code for Python source for module 'django.utils.crypto'
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

// The _module_django__utils__crypto is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__utils__crypto;
PyDictObject *_moduledict_django__utils__crypto;

// The module level variables.
static PyObjectGlobalVariable_django__utils__crypto _mvar_django__utils__crypto__bin_to_long( &_module_django__utils__crypto, &_python_str_plain__bin_to_long );
static PyObjectGlobalVariable_django__utils__crypto _mvar_django__utils__crypto__fast_hmac( &_module_django__utils__crypto, &_python_str_plain__fast_hmac );
static PyObjectGlobalVariable_django__utils__crypto _mvar_django__utils__crypto__long_to_bin( &_module_django__utils__crypto, &_python_str_plain__long_to_bin );
static PyObjectGlobalVariable_django__utils__crypto _mvar_django__utils__crypto_binascii( &_module_django__utils__crypto, &_python_str_plain_binascii );
static PyObjectGlobalVariable_django__utils__crypto _mvar_django__utils__crypto_force_bytes( &_module_django__utils__crypto, &_python_str_plain_force_bytes );
static PyObjectGlobalVariable_django__utils__crypto _mvar_django__utils__crypto_hashlib( &_module_django__utils__crypto, &_python_str_plain_hashlib );
static PyObjectGlobalVariable_django__utils__crypto _mvar_django__utils__crypto_hmac( &_module_django__utils__crypto, &_python_str_plain_hmac );
static PyObjectGlobalVariable_django__utils__crypto _mvar_django__utils__crypto_operator( &_module_django__utils__crypto, &_python_str_plain_operator );
static PyObjectGlobalVariable_django__utils__crypto _mvar_django__utils__crypto_random( &_module_django__utils__crypto, &_python_str_plain_random );
static PyObjectGlobalVariable_django__utils__crypto _mvar_django__utils__crypto_reduce( &_module_django__utils__crypto, &_python_str_plain_reduce );
static PyObjectGlobalVariable_django__utils__crypto _mvar_django__utils__crypto_settings( &_module_django__utils__crypto, &_python_str_plain_settings );
static PyObjectGlobalVariable_django__utils__crypto _mvar_django__utils__crypto_six( &_module_django__utils__crypto, &_python_str_plain_six );
static PyObjectGlobalVariable_django__utils__crypto _mvar_django__utils__crypto_struct( &_module_django__utils__crypto, &_python_str_plain_struct );
static PyObjectGlobalVariable_django__utils__crypto _mvar_django__utils__crypto_time( &_module_django__utils__crypto, &_python_str_plain_time );
static PyObjectGlobalVariable_django__utils__crypto _mvar_django__utils__crypto_using_sysrandom( &_module_django__utils__crypto, &_python_str_plain_using_sysrandom );
static PyObjectGlobalVariable_django__utils__crypto _mvar_django__utils__crypto_warnings( &_module_django__utils__crypto, &_python_str_plain_warnings );
static PyObjectGlobalVariable_django__utils__crypto _mvar_django__utils__crypto_xrange( &_module_django__utils__crypto, &_python_str_plain_xrange );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_2_get_random_string_of_module_django__utils__crypto( PyObject *_python_par___iterator, PyObjectLocalParameterVariableNoDel &python_closure_allowed_chars, PyObjectLocalVariable &python_closure_i );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_2_of_function_7_pbkdf2_of_module_django__utils__crypto( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_F, PyObjectLocalVariable &python_closure_x );


static PyObject *MAKE_FUNCTION_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto( PyObjectSharedLocalVariable &python_closure_digest, PyObjectSharedLocalVariable &python_closure_hex_format_string, PyObjectSharedLocalVariable &python_closure_iterations, PyObjectSharedLocalVariable &python_closure_password, PyObjectSharedLocalVariable &python_closure_salt );


// This structure is for attachment as self of function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto.
// It is allocated at the time the function object is created.
struct _context_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto_t
{
    // The function can access a read-only closure of the creator.
    PyObjectClosureVariable python_closure_digest;
    PyObjectClosureVariable python_closure_hex_format_string;
    PyObjectClosureVariable python_closure_iterations;
    PyObjectClosureVariable python_closure_password;
    PyObjectClosureVariable python_closure_salt;
};

static void _context_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto_destructor( void *context_voidptr )
{
    _context_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto_t *_python_context = (_context_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto_t *)context_voidptr;



    delete _python_context;
}


static PyObject *MAKE_FUNCTION_function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto( PyObjectSharedLocalVariable &python_closure_digest, PyObjectSharedLocalVariable &python_closure_i, PyObjectSharedLocalVariable &python_closure_iterations, PyObjectSharedLocalVariable &python_closure_password, PyObjectSharedLocalVariable &python_closure_salt );


static PyObject *MAKE_FUNCTION_function_1_salted_hmac_of_module_django__utils__crypto(  );


static PyObject *MAKE_FUNCTION_function_2_get_random_string_of_module_django__utils__crypto(  );


static PyObject *MAKE_FUNCTION_function_3_constant_time_compare_of_module_django__utils__crypto(  );


static PyObject *MAKE_FUNCTION_function_4__bin_to_long_of_module_django__utils__crypto(  );


static PyObject *MAKE_FUNCTION_function_5__long_to_bin_of_module_django__utils__crypto(  );


static PyObject *MAKE_FUNCTION_function_6__fast_hmac_of_module_django__utils__crypto(  );


static PyObject *MAKE_FUNCTION_function_7_pbkdf2_of_module_django__utils__crypto(  );


// The module function definitions.
static PyObject *impl_function_1_salted_hmac_of_module_django__utils__crypto( Nuitka_FunctionObject *self, PyObject *_python_par_key_salt, PyObject *_python_par_value, PyObject *_python_par_secret )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_key_salt( _python_str_plain_key_salt, _python_par_key_salt );
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_secret( _python_str_plain_secret, _python_par_secret );
    PyObjectLocalVariable _python_var_key( _python_str_plain_key );

    // Actual function code.
    static PyFrameObject *frame_function_1_salted_hmac_of_module_django__utils__crypto = NULL;

    if ( isFrameUnusable( frame_function_1_salted_hmac_of_module_django__utils__crypto ) )
    {
        if ( frame_function_1_salted_hmac_of_module_django__utils__crypto )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_salted_hmac_of_module_django__utils__crypto" );
#endif
            Py_DECREF( frame_function_1_salted_hmac_of_module_django__utils__crypto );
        }

        frame_function_1_salted_hmac_of_module_django__utils__crypto = MAKE_FRAME( _codeobj_759f8ca5543215eab98f0adb19174bb2, _module_django__utils__crypto );
    }

    FrameGuard frame_guard( frame_function_1_salted_hmac_of_module_django__utils__crypto );
    try
    {
        assert( Py_REFCNT( frame_function_1_salted_hmac_of_module_django__utils__crypto ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 38 );
        if ( ( _python_var_secret.asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 39 );
            _python_var_secret.assign1( LOOKUP_ATTRIBUTE( _mvar_django__utils__crypto_settings.asObject0(), _python_str_plain_SECRET_KEY ) );
        }
        frame_guard.setLineNumber( 44 );
        {
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper0 op1;
            _python_var_key.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__crypto_hashlib.asObject0(), _python_str_plain_sha1 ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( op1.assign( _python_var_key_salt.asObject() ), BINARY_OPERATION_ADD( op1.asObject0(), _python_var_secret.asObject() ) ) ).asObject(), _python_str_plain_encode ) ).asObject(), _python_unicode_digest_e9e2aa8136260a22b0b09fdee43ccb8a ) ).asObject() ) ) ).asObject(), _python_str_plain_digest ) ).asObject() ) );
        }
        frame_guard.setLineNumber( 50 );
        {
            PyObjectTempKeeper1 call11;
            PyObjectTempKeeper1 call12;
            PyObjectTempKeeper0 call5;
            PyObjectTempKeeper1 make_dict7;
            return ( call11.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__crypto_hmac.asObject0(), _python_str_plain_new ) ), call12.assign( MAKE_TUPLE1( _python_var_key.asObject() ) ), CALL_FUNCTION( call11.asObject0(), call12.asObject0(), PyObjectTemporary( ( make_dict7.assign( ( call5.assign( _mvar_django__utils__crypto_force_bytes.asObject0() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_value.asObject() ) ) ), MAKE_DICT2( make_dict7.asObject0(), _python_str_plain_msg, PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__crypto_hashlib.asObject0(), _python_str_plain_sha1 ) ).asObject(), _python_str_plain_digestmod ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_secret.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_key_salt.updateLocalsDict( _python_var_key.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_salted_hmac_of_module_django__utils__crypto )
        {
           Py_DECREF( frame_function_1_salted_hmac_of_module_django__utils__crypto );
           frame_function_1_salted_hmac_of_module_django__utils__crypto = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1_salted_hmac_of_module_django__utils__crypto( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_key_salt = NULL;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_secret = NULL;
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
                PyErr_Format( PyExc_TypeError, "salted_hmac() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_key_salt == key )
            {
                if (unlikely( _python_par_key_salt ))
                {
                    PyErr_Format( PyExc_TypeError, "salted_hmac() got multiple values for keyword argument 'key_salt'" );
                    goto error_exit;
                }

                _python_par_key_salt = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_value == key )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "salted_hmac() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_secret == key )
            {
                if (unlikely( _python_par_secret ))
                {
                    PyErr_Format( PyExc_TypeError, "salted_hmac() got multiple values for keyword argument 'secret'" );
                    goto error_exit;
                }

                _python_par_secret = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_key_salt, key ) )
            {
                if (unlikely( _python_par_key_salt ))
                {
                    PyErr_Format( PyExc_TypeError, "salted_hmac() got multiple values for keyword argument 'key_salt'" );
                    goto error_exit;
                }

                _python_par_key_salt = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "salted_hmac() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_secret, key ) )
            {
                if (unlikely( _python_par_secret ))
                {
                    PyErr_Format( PyExc_TypeError, "salted_hmac() got multiple values for keyword argument 'secret'" );
                    goto error_exit;
                }

                _python_par_secret = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "salted_hmac() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "salted_hmac() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "salted_hmac() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "salted_hmac() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "salted_hmac() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "salted_hmac() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "salted_hmac() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "salted_hmac() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "salted_hmac() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "salted_hmac() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "salted_hmac() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "salted_hmac() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "salted_hmac() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 3 ? args_given : 3;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_key_salt != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "salted_hmac() got multiple values for keyword argument 'key_salt'" );
             goto error_exit;
         }

        _python_par_key_salt = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "salted_hmac() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_secret != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "salted_hmac() got multiple values for keyword argument 'secret'" );
             goto error_exit;
         }

        _python_par_secret = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_secret == NULL )
    {
        _python_par_secret = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_secret );
    }


    return impl_function_1_salted_hmac_of_module_django__utils__crypto( self, _python_par_key_salt, _python_par_value, _python_par_secret );

error_exit:;

    Py_XDECREF( _python_par_key_salt );
    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_secret );

    return NULL;
}

static PyObject *dparse_function_1_salted_hmac_of_module_django__utils__crypto( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_1_salted_hmac_of_module_django__utils__crypto( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_salted_hmac_of_module_django__utils__crypto( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_get_random_string_of_module_django__utils__crypto( Nuitka_FunctionObject *self, PyObject *_python_par_length, PyObject *_python_par_allowed_chars )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_length( _python_str_plain_length, _python_par_length );
    PyObjectLocalParameterVariableNoDel _python_var_allowed_chars( _python_str_plain_allowed_chars, _python_par_allowed_chars );
    PyObjectLocalVariable _python_var_i( _python_str_plain_i );

    // Actual function code.
    static PyFrameObject *frame_function_2_get_random_string_of_module_django__utils__crypto = NULL;

    if ( isFrameUnusable( frame_function_2_get_random_string_of_module_django__utils__crypto ) )
    {
        if ( frame_function_2_get_random_string_of_module_django__utils__crypto )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_get_random_string_of_module_django__utils__crypto" );
#endif
            Py_DECREF( frame_function_2_get_random_string_of_module_django__utils__crypto );
        }

        frame_function_2_get_random_string_of_module_django__utils__crypto = MAKE_FRAME( _codeobj_9de18e33f1361523e5402db7f048183c, _module_django__utils__crypto );
    }

    FrameGuard frame_guard( frame_function_2_get_random_string_of_module_django__utils__crypto );
    try
    {
        assert( Py_REFCNT( frame_function_2_get_random_string_of_module_django__utils__crypto ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 62 );
        if ( (!( CHECK_IF_TRUE( _mvar_django__utils__crypto_using_sysrandom.asObject0() ) )) )
        {
            frame_guard.setLineNumber( 69 );
            {
                PyObjectTempKeeper1 call4;
                PyObjectTempKeeper1 call6;
                PyObjectTempKeeper1 make_tuple1;
                PyObjectTempKeeper1 make_tuple2;
                DECREASE_REFCOUNT( ( call6.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__crypto_random.asObject0(), _python_str_plain_seed ) ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call4.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__crypto_hashlib.asObject0(), _python_str_plain_sha256 ) ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_01f53e42b0247f24e3030ed68606e4cf, PyObjectTemporary( ( make_tuple1.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__crypto_random.asObject0(), _python_str_plain_getstate ) ).asObject() ) ), make_tuple2.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__crypto_time.asObject0(), _python_str_plain_time ) ).asObject() ) ), MAKE_TUPLE3( make_tuple1.asObject0(), make_tuple2.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__crypto_settings.asObject0(), _python_str_plain_SECRET_KEY ) ).asObject() ) ) ).asObject() ) ).asObject(), _python_str_plain_encode ) ).asObject(), _python_unicode_digest_e9e2aa8136260a22b0b09fdee43ccb8a ) ).asObject() ) ) ).asObject(), _python_str_plain_digest ) ).asObject() ) ).asObject() ) ) );
            }
        }
        frame_guard.setLineNumber( 76 );
        {
            PyObjectTempKeeper1 call8;
            return ( call8.assign( LOOKUP_ATTRIBUTE( _python_unicode_empty, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), PyObjectTemporary( impl_listcontr_1_of_function_2_get_random_string_of_module_django__utils__crypto( MAKE_ITERATOR( PyObjectTemporary( BUILTIN_RANGE( _python_var_length.asObject() ) ).asObject() ), _python_var_allowed_chars, _python_var_i ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_allowed_chars.updateLocalsDict( _python_var_length.updateLocalsDict( _python_var_i.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_get_random_string_of_module_django__utils__crypto )
        {
           Py_DECREF( frame_function_2_get_random_string_of_module_django__utils__crypto );
           frame_function_2_get_random_string_of_module_django__utils__crypto = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_get_random_string_of_module_django__utils__crypto( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_length = NULL;
    PyObject *_python_par_allowed_chars = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_random_string() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_length == key )
            {
                if (unlikely( _python_par_length ))
                {
                    PyErr_Format( PyExc_TypeError, "get_random_string() got multiple values for keyword argument 'length'" );
                    goto error_exit;
                }

                _python_par_length = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_allowed_chars == key )
            {
                if (unlikely( _python_par_allowed_chars ))
                {
                    PyErr_Format( PyExc_TypeError, "get_random_string() got multiple values for keyword argument 'allowed_chars'" );
                    goto error_exit;
                }

                _python_par_allowed_chars = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_length, key ) )
            {
                if (unlikely( _python_par_length ))
                {
                    PyErr_Format( PyExc_TypeError, "get_random_string() got multiple values for keyword argument 'length'" );
                    goto error_exit;
                }

                _python_par_length = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_allowed_chars, key ) )
            {
                if (unlikely( _python_par_allowed_chars ))
                {
                    PyErr_Format( PyExc_TypeError, "get_random_string() got multiple values for keyword argument 'allowed_chars'" );
                    goto error_exit;
                }

                _python_par_allowed_chars = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_random_string() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_random_string() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_random_string() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_random_string() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_random_string() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_random_string() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_random_string() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_random_string() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_random_string() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 0 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "get_random_string() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_random_string() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "get_random_string() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_random_string() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_length != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_random_string() got multiple values for keyword argument 'length'" );
             goto error_exit;
         }

        _python_par_length = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_allowed_chars != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_random_string() got multiple values for keyword argument 'allowed_chars'" );
             goto error_exit;
         }

        _python_par_allowed_chars = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_length == NULL )
    {
        _python_par_length = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_length );
    }
    if ( _python_par_allowed_chars == NULL )
    {
        _python_par_allowed_chars = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_allowed_chars );
    }


    return impl_function_2_get_random_string_of_module_django__utils__crypto( self, _python_par_length, _python_par_allowed_chars );

error_exit:;

    Py_XDECREF( _python_par_length );
    Py_XDECREF( _python_par_allowed_chars );

    return NULL;
}

static PyObject *dparse_function_2_get_random_string_of_module_django__utils__crypto( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2_get_random_string_of_module_django__utils__crypto( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_get_random_string_of_module_django__utils__crypto( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_2_get_random_string_of_module_django__utils__crypto( PyObject *_python_par___iterator,PyObjectLocalParameterVariableNoDel &python_closure_allowed_chars,PyObjectLocalVariable &python_closure_i )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 76 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 76 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_i.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper1 call1;
                    APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__crypto_random.asObject0(), _python_str_plain_choice ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), python_closure_allowed_chars.asObject() ) ) ).asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_3_constant_time_compare_of_module_django__utils__crypto( Nuitka_FunctionObject *self, PyObject *_python_par_val1, PyObject *_python_par_val2 )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_val1( _python_str_plain_val1, _python_par_val1 );
    PyObjectLocalParameterVariableNoDel _python_var_val2( _python_str_plain_val2, _python_par_val2 );
    PyObjectLocalVariable _python_var_result( _python_str_plain_result );
    PyObjectLocalVariable _python_var_x( _python_str_plain_x );
    PyObjectLocalVariable _python_var_y( _python_str_plain_y );

    // Actual function code.
    static PyFrameObject *frame_function_3_constant_time_compare_of_module_django__utils__crypto = NULL;

    if ( isFrameUnusable( frame_function_3_constant_time_compare_of_module_django__utils__crypto ) )
    {
        if ( frame_function_3_constant_time_compare_of_module_django__utils__crypto )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_constant_time_compare_of_module_django__utils__crypto" );
#endif
            Py_DECREF( frame_function_3_constant_time_compare_of_module_django__utils__crypto );
        }

        frame_function_3_constant_time_compare_of_module_django__utils__crypto = MAKE_FRAME( _codeobj_78afbb2e43d8bdca007e6eb884dbccd5, _module_django__utils__crypto );
    }

    FrameGuard frame_guard( frame_function_3_constant_time_compare_of_module_django__utils__crypto );
    try
    {
        assert( Py_REFCNT( frame_function_3_constant_time_compare_of_module_django__utils__crypto ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 90 );
        {
            PyObjectTempKeeper1 cmp1;
            if ( ( cmp1.assign( BUILTIN_LEN( _python_var_val1.asObject() ) ), RICH_COMPARE_BOOL_NE( cmp1.asObject0(), PyObjectTemporary( BUILTIN_LEN( _python_var_val2.asObject() ) ).asObject() ) ) )
        {
            return INCREASE_REFCOUNT( Py_False );
        }
        }
        _python_var_result.assign0( _python_int_0 );
        frame_guard.setLineNumber( 93 );
        if ( ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__crypto_six.asObject0(), _python_str_plain_PY3 ) ).asObject() ) && ( BUILTIN_ISINSTANCE_BOOL( _python_var_val1.asObject(), LOOKUP_BUILTIN( _python_str_plain_bytes ) ) && BUILTIN_ISINSTANCE_BOOL( _python_var_val2.asObject(), LOOKUP_BUILTIN( _python_str_plain_bytes ) ) ) ) )
        {
            {
                frame_guard.setLineNumber( 94 );
                PyObject *_tmp_python_tmp_for_iterator;
                {
                    PyObjectTempKeeper0 call4;
                    _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( ( call4.assign( _python_var_val1.asObject() ), CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_zip ), call4.asObject0(), _python_var_val2.asObject() ) ) ).asObject() );
                }
                PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 94 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        {
                            frame_guard.setLineNumber( 94 );
                            PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                            _python_var_x.assign0( _python_tmp_element_1.asObject() );
                            _python_var_y.assign0( _python_tmp_element_2.asObject() );
                        }
                    }
                    {
                        frame_guard.setLineNumber( 95 );
                        PyObject *_python_tmp_inplace_start = _python_var_result.asObject();
                        PyObject *_tmp_python_tmp_inplace_end;
                        {
                            PyObjectTempKeeper0 op6;
                            PyObjectTempKeeper0 op8;
                            _tmp_python_tmp_inplace_end = ( op8.assign( _python_tmp_inplace_start ), BINARY_OPERATION( PyNumber_InPlaceOr, op8.asObject0(), PyObjectTemporary( ( op6.assign( _python_var_x.asObject() ), BINARY_OPERATION( PyNumber_Xor, op6.asObject0(), _python_var_y.asObject() ) ) ).asObject() ) );
                        }
                        PyObjectTemporary _python_tmp_inplace_end( _tmp_python_tmp_inplace_end );
                        if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
                        {
                            _python_var_result.assign0( _python_tmp_inplace_end.asObject() );
                        }
                    }

                   CONSIDER_THREADING();
                }
            }
        }
        else
        {
            {
                frame_guard.setLineNumber( 97 );
                PyObject *_tmp_python_tmp_for_iterator;
                {
                    PyObjectTempKeeper0 call11;
                    _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( ( call11.assign( _python_var_val1.asObject() ), CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_zip ), call11.asObject0(), _python_var_val2.asObject() ) ) ).asObject() );
                }
                PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 97 );
                        PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_2 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                        {
                            frame_guard.setLineNumber( 97 );
                            PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                            _python_var_x.assign0( _python_tmp_element_1.asObject() );
                            _python_var_y.assign0( _python_tmp_element_2.asObject() );
                        }
                    }
                    {
                        frame_guard.setLineNumber( 98 );
                        PyObject *_python_tmp_inplace_start = _python_var_result.asObject();
                        PyObject *_tmp_python_tmp_inplace_end;
                        {
                            PyObjectTempKeeper1 op13;
                            PyObjectTempKeeper0 op15;
                            _tmp_python_tmp_inplace_end = ( op15.assign( _python_tmp_inplace_start ), BINARY_OPERATION( PyNumber_InPlaceOr, op15.asObject0(), PyObjectTemporary( ( op13.assign( BUILTIN_ORD( _python_var_x.asObject() ) ), BINARY_OPERATION( PyNumber_Xor, op13.asObject0(), PyObjectTemporary( BUILTIN_ORD( _python_var_y.asObject() ) ).asObject() ) ) ).asObject() ) );
                        }
                        PyObjectTemporary _python_tmp_inplace_end( _tmp_python_tmp_inplace_end );
                        if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
                        {
                            _python_var_result.assign0( _python_tmp_inplace_end.asObject() );
                        }
                    }

                   CONSIDER_THREADING();
                }
            }
        }
        frame_guard.setLineNumber( 99 );
        return RICH_COMPARE_EQ( _python_var_result.asObject(), _python_int_0 );
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
        frame_guard.getFrame0()->f_locals = _python_var_val2.updateLocalsDict( _python_var_val1.updateLocalsDict( _python_var_y.updateLocalsDict( _python_var_x.updateLocalsDict( _python_var_result.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_constant_time_compare_of_module_django__utils__crypto )
        {
           Py_DECREF( frame_function_3_constant_time_compare_of_module_django__utils__crypto );
           frame_function_3_constant_time_compare_of_module_django__utils__crypto = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_constant_time_compare_of_module_django__utils__crypto( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_val1 = NULL;
    PyObject *_python_par_val2 = NULL;
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
                PyErr_Format( PyExc_TypeError, "constant_time_compare() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_val1 == key )
            {
                if (unlikely( _python_par_val1 ))
                {
                    PyErr_Format( PyExc_TypeError, "constant_time_compare() got multiple values for keyword argument 'val1'" );
                    goto error_exit;
                }

                _python_par_val1 = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_val2 == key )
            {
                if (unlikely( _python_par_val2 ))
                {
                    PyErr_Format( PyExc_TypeError, "constant_time_compare() got multiple values for keyword argument 'val2'" );
                    goto error_exit;
                }

                _python_par_val2 = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_val1, key ) )
            {
                if (unlikely( _python_par_val1 ))
                {
                    PyErr_Format( PyExc_TypeError, "constant_time_compare() got multiple values for keyword argument 'val1'" );
                    goto error_exit;
                }

                _python_par_val1 = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_val2, key ) )
            {
                if (unlikely( _python_par_val2 ))
                {
                    PyErr_Format( PyExc_TypeError, "constant_time_compare() got multiple values for keyword argument 'val2'" );
                    goto error_exit;
                }

                _python_par_val2 = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "constant_time_compare() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "constant_time_compare() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "constant_time_compare() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "constant_time_compare() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "constant_time_compare() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "constant_time_compare() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "constant_time_compare() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "constant_time_compare() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "constant_time_compare() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "constant_time_compare() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "constant_time_compare() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "constant_time_compare() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "constant_time_compare() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_val1 != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "constant_time_compare() got multiple values for keyword argument 'val1'" );
             goto error_exit;
         }

        _python_par_val1 = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_val2 != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "constant_time_compare() got multiple values for keyword argument 'val2'" );
             goto error_exit;
         }

        _python_par_val2 = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_3_constant_time_compare_of_module_django__utils__crypto( self, _python_par_val1, _python_par_val2 );

error_exit:;

    Py_XDECREF( _python_par_val1 );
    Py_XDECREF( _python_par_val2 );

    return NULL;
}

static PyObject *dparse_function_3_constant_time_compare_of_module_django__utils__crypto( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_3_constant_time_compare_of_module_django__utils__crypto( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_constant_time_compare_of_module_django__utils__crypto( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4__bin_to_long_of_module_django__utils__crypto( Nuitka_FunctionObject *self, PyObject *_python_par_x )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_x( _python_str_plain_x, _python_par_x );

    // Actual function code.
    static PyFrameObject *frame_function_4__bin_to_long_of_module_django__utils__crypto = NULL;

    if ( isFrameUnusable( frame_function_4__bin_to_long_of_module_django__utils__crypto ) )
    {
        if ( frame_function_4__bin_to_long_of_module_django__utils__crypto )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4__bin_to_long_of_module_django__utils__crypto" );
#endif
            Py_DECREF( frame_function_4__bin_to_long_of_module_django__utils__crypto );
        }

        frame_function_4__bin_to_long_of_module_django__utils__crypto = MAKE_FRAME( _codeobj_d33fcea1586eec40e752c5a1c3b07dda, _module_django__utils__crypto );
    }

    FrameGuard frame_guard( frame_function_4__bin_to_long_of_module_django__utils__crypto );
    try
    {
        assert( Py_REFCNT( frame_function_4__bin_to_long_of_module_django__utils__crypto ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 108 );
        {
            PyObjectTempKeeper1 call1;
            return TO_INT2( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__crypto_binascii.asObject0(), _python_str_plain_hexlify ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_x.asObject() ) ) ).asObject(), _python_int_pos_16 );
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
        frame_guard.getFrame0()->f_locals = _python_var_x.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_4__bin_to_long_of_module_django__utils__crypto )
        {
           Py_DECREF( frame_function_4__bin_to_long_of_module_django__utils__crypto );
           frame_function_4__bin_to_long_of_module_django__utils__crypto = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4__bin_to_long_of_module_django__utils__crypto( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_x = NULL;
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
                PyErr_Format( PyExc_TypeError, "_bin_to_long() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_x == key )
            {
                if (unlikely( _python_par_x ))
                {
                    PyErr_Format( PyExc_TypeError, "_bin_to_long() got multiple values for keyword argument 'x'" );
                    goto error_exit;
                }

                _python_par_x = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_x, key ) )
            {
                if (unlikely( _python_par_x ))
                {
                    PyErr_Format( PyExc_TypeError, "_bin_to_long() got multiple values for keyword argument 'x'" );
                    goto error_exit;
                }

                _python_par_x = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_bin_to_long() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_bin_to_long() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_bin_to_long() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_bin_to_long() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_bin_to_long() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_bin_to_long() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_bin_to_long() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_bin_to_long() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_bin_to_long() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_bin_to_long() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_bin_to_long() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_bin_to_long() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_bin_to_long() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_x != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_bin_to_long() got multiple values for keyword argument 'x'" );
             goto error_exit;
         }

        _python_par_x = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_4__bin_to_long_of_module_django__utils__crypto( self, _python_par_x );

error_exit:;

    Py_XDECREF( _python_par_x );

    return NULL;
}

static PyObject *dparse_function_4__bin_to_long_of_module_django__utils__crypto( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_4__bin_to_long_of_module_django__utils__crypto( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4__bin_to_long_of_module_django__utils__crypto( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5__long_to_bin_of_module_django__utils__crypto( Nuitka_FunctionObject *self, PyObject *_python_par_x, PyObject *_python_par_hex_format_string )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_x( _python_str_plain_x, _python_par_x );
    PyObjectLocalParameterVariableNoDel _python_var_hex_format_string( _python_str_plain_hex_format_string, _python_par_hex_format_string );

    // Actual function code.
    static PyFrameObject *frame_function_5__long_to_bin_of_module_django__utils__crypto = NULL;

    if ( isFrameUnusable( frame_function_5__long_to_bin_of_module_django__utils__crypto ) )
    {
        if ( frame_function_5__long_to_bin_of_module_django__utils__crypto )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5__long_to_bin_of_module_django__utils__crypto" );
#endif
            Py_DECREF( frame_function_5__long_to_bin_of_module_django__utils__crypto );
        }

        frame_function_5__long_to_bin_of_module_django__utils__crypto = MAKE_FRAME( _codeobj_60a5ff182fa7533b061b0985e0d89e89, _module_django__utils__crypto );
    }

    FrameGuard frame_guard( frame_function_5__long_to_bin_of_module_django__utils__crypto );
    try
    {
        assert( Py_REFCNT( frame_function_5__long_to_bin_of_module_django__utils__crypto ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 116 );
        {
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper0 op1;
            return ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__crypto_binascii.asObject0(), _python_str_plain_unhexlify ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( op1.assign( _python_var_hex_format_string.asObject() ), BINARY_OPERATION_REMAINDER( op1.asObject0(), _python_var_x.asObject() ) ) ).asObject(), _python_str_plain_encode ) ).asObject(), _python_unicode_plain_ascii ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_hex_format_string.updateLocalsDict( _python_var_x.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_5__long_to_bin_of_module_django__utils__crypto )
        {
           Py_DECREF( frame_function_5__long_to_bin_of_module_django__utils__crypto );
           frame_function_5__long_to_bin_of_module_django__utils__crypto = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5__long_to_bin_of_module_django__utils__crypto( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_x = NULL;
    PyObject *_python_par_hex_format_string = NULL;
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
                PyErr_Format( PyExc_TypeError, "_long_to_bin() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_x == key )
            {
                if (unlikely( _python_par_x ))
                {
                    PyErr_Format( PyExc_TypeError, "_long_to_bin() got multiple values for keyword argument 'x'" );
                    goto error_exit;
                }

                _python_par_x = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_hex_format_string == key )
            {
                if (unlikely( _python_par_hex_format_string ))
                {
                    PyErr_Format( PyExc_TypeError, "_long_to_bin() got multiple values for keyword argument 'hex_format_string'" );
                    goto error_exit;
                }

                _python_par_hex_format_string = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_x, key ) )
            {
                if (unlikely( _python_par_x ))
                {
                    PyErr_Format( PyExc_TypeError, "_long_to_bin() got multiple values for keyword argument 'x'" );
                    goto error_exit;
                }

                _python_par_x = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_hex_format_string, key ) )
            {
                if (unlikely( _python_par_hex_format_string ))
                {
                    PyErr_Format( PyExc_TypeError, "_long_to_bin() got multiple values for keyword argument 'hex_format_string'" );
                    goto error_exit;
                }

                _python_par_hex_format_string = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_long_to_bin() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_long_to_bin() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_long_to_bin() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_long_to_bin() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_long_to_bin() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_long_to_bin() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_long_to_bin() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_long_to_bin() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_long_to_bin() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_long_to_bin() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_long_to_bin() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "_long_to_bin() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_long_to_bin() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_x != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_long_to_bin() got multiple values for keyword argument 'x'" );
             goto error_exit;
         }

        _python_par_x = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_hex_format_string != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_long_to_bin() got multiple values for keyword argument 'hex_format_string'" );
             goto error_exit;
         }

        _python_par_hex_format_string = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_5__long_to_bin_of_module_django__utils__crypto( self, _python_par_x, _python_par_hex_format_string );

error_exit:;

    Py_XDECREF( _python_par_x );
    Py_XDECREF( _python_par_hex_format_string );

    return NULL;
}

static PyObject *dparse_function_5__long_to_bin_of_module_django__utils__crypto( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_5__long_to_bin_of_module_django__utils__crypto( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5__long_to_bin_of_module_django__utils__crypto( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6__fast_hmac_of_module_django__utils__crypto( Nuitka_FunctionObject *self, PyObject *_python_par_key, PyObject *_python_par_msg, PyObject *_python_par_digest )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_key( _python_str_plain_key, _python_par_key );
    PyObjectLocalParameterVariableNoDel _python_var_msg( _python_str_plain_msg, _python_par_msg );
    PyObjectLocalParameterVariableNoDel _python_var_digest( _python_str_plain_digest, _python_par_digest );
    PyObjectLocalVariable _python_var_dig1( _python_str_plain_dig1 );
    PyObjectLocalVariable _python_var_dig2( _python_str_plain_dig2 );

    // Actual function code.
    static PyFrameObject *frame_function_6__fast_hmac_of_module_django__utils__crypto = NULL;

    if ( isFrameUnusable( frame_function_6__fast_hmac_of_module_django__utils__crypto ) )
    {
        if ( frame_function_6__fast_hmac_of_module_django__utils__crypto )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6__fast_hmac_of_module_django__utils__crypto" );
#endif
            Py_DECREF( frame_function_6__fast_hmac_of_module_django__utils__crypto );
        }

        frame_function_6__fast_hmac_of_module_django__utils__crypto = MAKE_FRAME( _codeobj_d480d0882be32261cef0a66a7879f4e2, _module_django__utils__crypto );
    }

    FrameGuard frame_guard( frame_function_6__fast_hmac_of_module_django__utils__crypto );
    try
    {
        assert( Py_REFCNT( frame_function_6__fast_hmac_of_module_django__utils__crypto ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 125 );
            PyObject *_tmp_python_tmp_source_iter;
            {
                PyObjectTempKeeper1 make_tuple1;
                _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( make_tuple1.assign( CALL_FUNCTION_NO_ARGS( _python_var_digest.asObject() ) ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( _python_var_digest.asObject() ) ).asObject() ) ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
            _python_var_dig1.assign0( _python_tmp_element_1.asObject() );
            _python_var_dig2.assign0( _python_tmp_element_2.asObject() );
        }
        frame_guard.setLineNumber( 126 );
        {
            PyObjectTempKeeper1 cmp5;
            if ( ( cmp5.assign( BUILTIN_LEN( _python_var_key.asObject() ) ), RICH_COMPARE_BOOL_GT( cmp5.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_dig1.asObject(), _python_str_plain_block_size ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 127 );
            {
                PyObjectTempKeeper0 call3;
                _python_var_key.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call3.assign( _python_var_digest.asObject() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_key.asObject() ) ) ).asObject(), _python_str_plain_digest ) ).asObject() ) );
            }
        }
        }
        {
            frame_guard.setLineNumber( 128 );
            PyObject *_python_tmp_inplace_start = _python_var_key.asObject();
            PyObject *_tmp_python_tmp_inplace_end;
            {
                PyObjectTempKeeper1 op7;
                PyObjectTempKeeper0 op9;
                _tmp_python_tmp_inplace_end = ( op9.assign( _python_tmp_inplace_start ), BINARY_OPERATION( PyNumber_InPlaceAdd, op9.asObject0(), PyObjectTemporary( BINARY_OPERATION_MUL( _python_str_chr_0, PyObjectTemporary( ( op7.assign( LOOKUP_ATTRIBUTE( _python_var_dig1.asObject(), _python_str_plain_block_size ) ), BINARY_OPERATION_SUB( op7.asObject0(), PyObjectTemporary( BUILTIN_LEN( _python_var_key.asObject() ) ).asObject() ) ) ).asObject() ) ).asObject() ) );
            }
            PyObjectTemporary _python_tmp_inplace_end( _tmp_python_tmp_inplace_end );
            if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
            {
                _python_var_key.assign0( _python_tmp_inplace_end.asObject() );
            }
        }
        frame_guard.setLineNumber( 129 );
        {
            PyObjectTempKeeper1 call11;
            PyObjectTempKeeper1 call13;
            DECREASE_REFCOUNT( ( call13.assign( LOOKUP_ATTRIBUTE( _python_var_dig1.asObject(), _python_str_plain_update ) ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), PyObjectTemporary( ( call11.assign( LOOKUP_ATTRIBUTE( _python_var_key.asObject(), _python_str_plain_translate ) ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__crypto_hmac.asObject0(), _python_str_plain_trans_36 ) ).asObject() ) ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 130 );
        {
            PyObjectTempKeeper1 call15;
            DECREASE_REFCOUNT( ( call15.assign( LOOKUP_ATTRIBUTE( _python_var_dig1.asObject(), _python_str_plain_update ) ), CALL_FUNCTION_WITH_ARGS( call15.asObject0(), _python_var_msg.asObject() ) ) );
        }
        frame_guard.setLineNumber( 131 );
        {
            PyObjectTempKeeper1 call17;
            PyObjectTempKeeper1 call19;
            DECREASE_REFCOUNT( ( call19.assign( LOOKUP_ATTRIBUTE( _python_var_dig2.asObject(), _python_str_plain_update ) ), CALL_FUNCTION_WITH_ARGS( call19.asObject0(), PyObjectTemporary( ( call17.assign( LOOKUP_ATTRIBUTE( _python_var_key.asObject(), _python_str_plain_translate ) ), CALL_FUNCTION_WITH_ARGS( call17.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__crypto_hmac.asObject0(), _python_str_plain_trans_5C ) ).asObject() ) ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 132 );
        {
            PyObjectTempKeeper1 call21;
            DECREASE_REFCOUNT( ( call21.assign( LOOKUP_ATTRIBUTE( _python_var_dig2.asObject(), _python_str_plain_update ) ), CALL_FUNCTION_WITH_ARGS( call21.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_dig1.asObject(), _python_str_plain_digest ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 133 );
        return _python_var_dig2.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_digest.updateLocalsDict( _python_var_msg.updateLocalsDict( _python_var_key.updateLocalsDict( _python_var_dig2.updateLocalsDict( _python_var_dig1.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_6__fast_hmac_of_module_django__utils__crypto )
        {
           Py_DECREF( frame_function_6__fast_hmac_of_module_django__utils__crypto );
           frame_function_6__fast_hmac_of_module_django__utils__crypto = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_6__fast_hmac_of_module_django__utils__crypto( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_key = NULL;
    PyObject *_python_par_msg = NULL;
    PyObject *_python_par_digest = NULL;
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
                PyErr_Format( PyExc_TypeError, "_fast_hmac() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_key == key )
            {
                if (unlikely( _python_par_key ))
                {
                    PyErr_Format( PyExc_TypeError, "_fast_hmac() got multiple values for keyword argument 'key'" );
                    goto error_exit;
                }

                _python_par_key = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_msg == key )
            {
                if (unlikely( _python_par_msg ))
                {
                    PyErr_Format( PyExc_TypeError, "_fast_hmac() got multiple values for keyword argument 'msg'" );
                    goto error_exit;
                }

                _python_par_msg = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_digest == key )
            {
                if (unlikely( _python_par_digest ))
                {
                    PyErr_Format( PyExc_TypeError, "_fast_hmac() got multiple values for keyword argument 'digest'" );
                    goto error_exit;
                }

                _python_par_digest = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_key, key ) )
            {
                if (unlikely( _python_par_key ))
                {
                    PyErr_Format( PyExc_TypeError, "_fast_hmac() got multiple values for keyword argument 'key'" );
                    goto error_exit;
                }

                _python_par_key = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_msg, key ) )
            {
                if (unlikely( _python_par_msg ))
                {
                    PyErr_Format( PyExc_TypeError, "_fast_hmac() got multiple values for keyword argument 'msg'" );
                    goto error_exit;
                }

                _python_par_msg = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_digest, key ) )
            {
                if (unlikely( _python_par_digest ))
                {
                    PyErr_Format( PyExc_TypeError, "_fast_hmac() got multiple values for keyword argument 'digest'" );
                    goto error_exit;
                }

                _python_par_digest = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_fast_hmac() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_fast_hmac() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_fast_hmac() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_fast_hmac() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_fast_hmac() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "_fast_hmac() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_fast_hmac() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "_fast_hmac() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_fast_hmac() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_fast_hmac() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_fast_hmac() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "_fast_hmac() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_fast_hmac() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 3 ? args_given : 3;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_key != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_fast_hmac() got multiple values for keyword argument 'key'" );
             goto error_exit;
         }

        _python_par_key = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_msg != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_fast_hmac() got multiple values for keyword argument 'msg'" );
             goto error_exit;
         }

        _python_par_msg = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_digest != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_fast_hmac() got multiple values for keyword argument 'digest'" );
             goto error_exit;
         }

        _python_par_digest = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_6__fast_hmac_of_module_django__utils__crypto( self, _python_par_key, _python_par_msg, _python_par_digest );

error_exit:;

    Py_XDECREF( _python_par_key );
    Py_XDECREF( _python_par_msg );
    Py_XDECREF( _python_par_digest );

    return NULL;
}

static PyObject *dparse_function_6__fast_hmac_of_module_django__utils__crypto( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_6__fast_hmac_of_module_django__utils__crypto( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6__fast_hmac_of_module_django__utils__crypto( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7_pbkdf2_of_module_django__utils__crypto( Nuitka_FunctionObject *self, PyObject *_python_par_password, PyObject *_python_par_salt, PyObject *_python_par_iterations, PyObject *_python_par_dklen, PyObject *_python_par_digest )
{
    // No context is used.

    // Local variable declarations.
    PyObjectSharedLocalVariable _python_var_password( _python_str_plain_password, _python_par_password );
    PyObjectSharedLocalVariable _python_var_salt( _python_str_plain_salt, _python_par_salt );
    PyObjectSharedLocalVariable _python_var_iterations( _python_str_plain_iterations, _python_par_iterations );
    PyObjectLocalParameterVariableNoDel _python_var_dklen( _python_str_plain_dklen, _python_par_dklen );
    PyObjectSharedLocalVariable _python_var_digest( _python_str_plain_digest, _python_par_digest );
    PyObjectLocalVariable _python_var_hlen( _python_str_plain_hlen );
    PyObjectLocalVariable _python_var_l( _python_str_plain_l );
    PyObjectLocalVariable _python_var_r( _python_str_plain_r );
    PyObjectSharedLocalVariable _python_var_hex_format_string( _python_str_plain_hex_format_string );
    PyObjectLocalVariable _python_var_F( _python_str_plain_F );
    PyObjectLocalVariable _python_var_T( _python_str_plain_T );
    PyObjectLocalVariable _python_var_x( _python_str_plain_x );

    // Actual function code.
    static PyFrameObject *frame_function_7_pbkdf2_of_module_django__utils__crypto = NULL;

    if ( isFrameUnusable( frame_function_7_pbkdf2_of_module_django__utils__crypto ) )
    {
        if ( frame_function_7_pbkdf2_of_module_django__utils__crypto )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_7_pbkdf2_of_module_django__utils__crypto" );
#endif
            Py_DECREF( frame_function_7_pbkdf2_of_module_django__utils__crypto );
        }

        frame_function_7_pbkdf2_of_module_django__utils__crypto = MAKE_FRAME( _codeobj_695eb61077c318be71e00661221dabf7, _module_django__utils__crypto );
    }

    FrameGuard frame_guard( frame_function_7_pbkdf2_of_module_django__utils__crypto );
    try
    {
        assert( Py_REFCNT( frame_function_7_pbkdf2_of_module_django__utils__crypto ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 148 );
        if ( (!( RICH_COMPARE_BOOL_GT( _python_var_iterations.asObject(), _python_int_0 ) )) )
        {
            frame_guard.setLineNumber( 148 );
            RAISE_EXCEPTION_WITH_TYPE( PyExc_AssertionError, PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
        }
        frame_guard.setLineNumber( 149 );
        if ( (!( CHECK_IF_TRUE( _python_var_digest.asObject() ) )) )
        {
            frame_guard.setLineNumber( 150 );
            _python_var_digest.assign1( LOOKUP_ATTRIBUTE( _mvar_django__utils__crypto_hashlib.asObject0(), _python_str_plain_sha256 ) );
        }
        frame_guard.setLineNumber( 151 );
        {
            PyObjectTempKeeper0 call1;
            _python_var_password.assign1( ( call1.assign( _mvar_django__utils__crypto_force_bytes.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_password.asObject() ) ) );
        }
        frame_guard.setLineNumber( 152 );
        {
            PyObjectTempKeeper0 call3;
            _python_var_salt.assign1( ( call3.assign( _mvar_django__utils__crypto_force_bytes.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_salt.asObject() ) ) );
        }
        frame_guard.setLineNumber( 153 );
        _python_var_hlen.assign1( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( _python_var_digest.asObject() ) ).asObject(), _python_str_plain_digest_size ) );
        frame_guard.setLineNumber( 154 );
        if ( (!( CHECK_IF_TRUE( _python_var_dklen.asObject() ) )) )
        {
            frame_guard.setLineNumber( 155 );
            _python_var_dklen.assign0( _python_var_hlen.asObject() );
        }
        frame_guard.setLineNumber( 156 );
        {
            PyObjectTempKeeper0 cmp5;
            if ( ( cmp5.assign( _python_var_dklen.asObject() ), RICH_COMPARE_BOOL_GT( cmp5.asObject0(), PyObjectTemporary( BINARY_OPERATION_MUL( _python_int_pos_4294967295, _python_var_hlen.asObject() ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 157 );
            {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_OverflowError, PyObjectTemporary( MAKE_TUPLE1( _python_unicode_digest_8c6a1cc6488852a670d76f5275b784ff ) ).asObject() ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
        }
        }
        frame_guard.setLineNumber( 158 );
        {
            PyObjectTempKeeper1 op7;
            _python_var_l.assign1( UNARY_OPERATION( PyNumber_Negative, PyObjectTemporary( ( op7.assign( UNARY_OPERATION( PyNumber_Negative, _python_var_dklen.asObject() ) ), BINARY_OPERATION( PyNumber_FloorDivide, op7.asObject0(), _python_var_hlen.asObject() ) ) ).asObject() ) );
        }
        frame_guard.setLineNumber( 159 );
        {
            PyObjectTempKeeper0 op11;
            PyObjectTempKeeper1 op9;
            _python_var_r.assign1( ( op11.assign( _python_var_dklen.asObject() ), BINARY_OPERATION_SUB( op11.asObject0(), PyObjectTemporary( ( op9.assign( BINARY_OPERATION_SUB( _python_var_l.asObject(), _python_int_pos_1 ) ), BINARY_OPERATION_MUL( op9.asObject0(), _python_var_hlen.asObject() ) ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 161 );
        _python_var_hex_format_string.assign1( BINARY_OPERATION_REMAINDER( _python_unicode_digest_e495877e4ca60a12f29fcf4c057e7d2b, PyObjectTemporary( BINARY_OPERATION_MUL( _python_var_hlen.asObject(), _python_int_pos_2 ) ).asObject() ) );
        _python_var_F.assign1( MAKE_FUNCTION_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto( _python_var_digest, _python_var_hex_format_string, _python_var_iterations, _python_var_password, _python_var_salt ) );
        frame_guard.setLineNumber( 171 );
        _python_var_T.assign1( impl_listcontr_2_of_function_7_pbkdf2_of_module_django__utils__crypto( MAKE_ITERATOR( PyObjectTemporary( BUILTIN_RANGE2( _python_int_pos_1, PyObjectTemporary( BINARY_OPERATION_ADD( _python_var_l.asObject(), _python_int_pos_1 ) ).asObject() ) ).asObject() ), _python_var_F, _python_var_x ) );
        frame_guard.setLineNumber( 172 );
        {
            PyObjectTempKeeper1 call13;
            PyObjectTempKeeper1 op18;
            PyObjectTempKeeper1 slice15;
            return ( op18.assign( ( call13.assign( LOOKUP_ATTRIBUTE( _python_str_empty, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), PyObjectTemporary( LOOKUP_INDEX_SLICE( _python_var_T.asObject(), 0, -1 ) ).asObject() ) ) ), BINARY_OPERATION_ADD( op18.asObject0(), PyObjectTemporary( ( slice15.assign( LOOKUP_SUBSCRIPT_CONST( _python_var_T.asObject(), _python_int_neg_1, -1 ) ), LOOKUP_SLICE( slice15.asObject0(), Py_None, _python_var_r.asObject() ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_digest.updateLocalsDict( _python_var_dklen.updateLocalsDict( _python_var_iterations.updateLocalsDict( _python_var_salt.updateLocalsDict( _python_var_password.updateLocalsDict( _python_var_x.updateLocalsDict( _python_var_T.updateLocalsDict( _python_var_F.updateLocalsDict( _python_var_hex_format_string.updateLocalsDict( _python_var_r.updateLocalsDict( _python_var_l.updateLocalsDict( _python_var_hlen.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_7_pbkdf2_of_module_django__utils__crypto )
        {
           Py_DECREF( frame_function_7_pbkdf2_of_module_django__utils__crypto );
           frame_function_7_pbkdf2_of_module_django__utils__crypto = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_7_pbkdf2_of_module_django__utils__crypto( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_password = NULL;
    PyObject *_python_par_salt = NULL;
    PyObject *_python_par_iterations = NULL;
    PyObject *_python_par_dklen = NULL;
    PyObject *_python_par_digest = NULL;
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
                PyErr_Format( PyExc_TypeError, "pbkdf2() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_password == key )
            {
                if (unlikely( _python_par_password ))
                {
                    PyErr_Format( PyExc_TypeError, "pbkdf2() got multiple values for keyword argument 'password'" );
                    goto error_exit;
                }

                _python_par_password = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_salt == key )
            {
                if (unlikely( _python_par_salt ))
                {
                    PyErr_Format( PyExc_TypeError, "pbkdf2() got multiple values for keyword argument 'salt'" );
                    goto error_exit;
                }

                _python_par_salt = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_iterations == key )
            {
                if (unlikely( _python_par_iterations ))
                {
                    PyErr_Format( PyExc_TypeError, "pbkdf2() got multiple values for keyword argument 'iterations'" );
                    goto error_exit;
                }

                _python_par_iterations = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_dklen == key )
            {
                if (unlikely( _python_par_dklen ))
                {
                    PyErr_Format( PyExc_TypeError, "pbkdf2() got multiple values for keyword argument 'dklen'" );
                    goto error_exit;
                }

                _python_par_dklen = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_digest == key )
            {
                if (unlikely( _python_par_digest ))
                {
                    PyErr_Format( PyExc_TypeError, "pbkdf2() got multiple values for keyword argument 'digest'" );
                    goto error_exit;
                }

                _python_par_digest = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_password, key ) )
            {
                if (unlikely( _python_par_password ))
                {
                    PyErr_Format( PyExc_TypeError, "pbkdf2() got multiple values for keyword argument 'password'" );
                    goto error_exit;
                }

                _python_par_password = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_salt, key ) )
            {
                if (unlikely( _python_par_salt ))
                {
                    PyErr_Format( PyExc_TypeError, "pbkdf2() got multiple values for keyword argument 'salt'" );
                    goto error_exit;
                }

                _python_par_salt = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_iterations, key ) )
            {
                if (unlikely( _python_par_iterations ))
                {
                    PyErr_Format( PyExc_TypeError, "pbkdf2() got multiple values for keyword argument 'iterations'" );
                    goto error_exit;
                }

                _python_par_iterations = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_dklen, key ) )
            {
                if (unlikely( _python_par_dklen ))
                {
                    PyErr_Format( PyExc_TypeError, "pbkdf2() got multiple values for keyword argument 'dklen'" );
                    goto error_exit;
                }

                _python_par_dklen = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_digest, key ) )
            {
                if (unlikely( _python_par_digest ))
                {
                    PyErr_Format( PyExc_TypeError, "pbkdf2() got multiple values for keyword argument 'digest'" );
                    goto error_exit;
                }

                _python_par_digest = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "pbkdf2() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "pbkdf2() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "pbkdf2() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "pbkdf2() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "pbkdf2() takes exactly %d arguments (%zd given)", 5, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 5 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "pbkdf2() takes exactly %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "pbkdf2() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
#else
            if ( 5 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "pbkdf2() takes %d positional arguments but %zd were given", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "pbkdf2() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "pbkdf2() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "pbkdf2() takes exactly %d non-keyword arguments (%zd given)", 5, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 5 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "pbkdf2() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "pbkdf2() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 5 ? args_given : 5;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_password != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "pbkdf2() got multiple values for keyword argument 'password'" );
             goto error_exit;
         }

        _python_par_password = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_salt != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "pbkdf2() got multiple values for keyword argument 'salt'" );
             goto error_exit;
         }

        _python_par_salt = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_iterations != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "pbkdf2() got multiple values for keyword argument 'iterations'" );
             goto error_exit;
         }

        _python_par_iterations = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_dklen != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "pbkdf2() got multiple values for keyword argument 'dklen'" );
             goto error_exit;
         }

        _python_par_dklen = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_digest != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "pbkdf2() got multiple values for keyword argument 'digest'" );
             goto error_exit;
         }

        _python_par_digest = INCREASE_REFCOUNT( args[ 4 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_dklen == NULL )
    {
        _python_par_dklen = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_dklen );
    }
    if ( _python_par_digest == NULL )
    {
        _python_par_digest = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_digest );
    }


    return impl_function_7_pbkdf2_of_module_django__utils__crypto( self, _python_par_password, _python_par_salt, _python_par_iterations, _python_par_dklen, _python_par_digest );

error_exit:;

    Py_XDECREF( _python_par_password );
    Py_XDECREF( _python_par_salt );
    Py_XDECREF( _python_par_iterations );
    Py_XDECREF( _python_par_dklen );
    Py_XDECREF( _python_par_digest );

    return NULL;
}

static PyObject *dparse_function_7_pbkdf2_of_module_django__utils__crypto( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5)
    {
        return impl_function_7_pbkdf2_of_module_django__utils__crypto( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7_pbkdf2_of_module_django__utils__crypto( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto( Nuitka_FunctionObject *self, PyObject *_python_par_i )
{
    // The context of the function.
    struct _context_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto_t *_python_context = (struct _context_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto_t *)self->m_context;

    // Local variable declarations.
    PyObjectSharedLocalVariable _python_var_i( _python_str_plain_i, _python_par_i );
    PyObjectLocalVariable _python_var_U( _python_str_plain_U );

    // Actual function code.
    _python_var_U.assign1( MAKE_FUNCTION_function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto( _python_context->python_closure_digest, _python_var_i, _python_context->python_closure_iterations, _python_context->python_closure_password, _python_context->python_closure_salt ) );
    static PyFrameObject *frame_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto = NULL;

    if ( isFrameUnusable( frame_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto ) )
    {
        if ( frame_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto" );
#endif
            Py_DECREF( frame_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto );
        }

        frame_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto = MAKE_FRAME( _codeobj_d2856f63c97db6ebd242827d23e82a77, _module_django__utils__crypto );
    }

    FrameGuard frame_guard( frame_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto );
    try
    {
        assert( Py_REFCNT( frame_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 169 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper1 call2;
            PyObjectTempKeeper0 call4;
            PyObjectTempKeeper1 call5;
            return ( call4.assign( _mvar_django__utils__crypto__long_to_bin.asObject0() ), call5.assign( ( call1.assign( _mvar_django__utils__crypto_reduce.asObject0() ), call2.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__crypto_operator.asObject0(), _python_str_plain_xor ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( _python_var_U.asObject() ) ).asObject() ) ) ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), call5.asObject0(), _python_context->python_closure_hex_format_string.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_i.updateLocalsDict( _python_context->python_closure_hex_format_string.updateLocalsDict( _python_var_U.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto )
        {
           Py_DECREF( frame_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto );
           frame_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto = NULL;
        }

        _exception.toPython();
        return NULL;
    }
}
static PyObject *fparse_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_i = NULL;
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
                PyErr_Format( PyExc_TypeError, "F() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_i == key )
            {
                if (unlikely( _python_par_i ))
                {
                    PyErr_Format( PyExc_TypeError, "F() got multiple values for keyword argument 'i'" );
                    goto error_exit;
                }

                _python_par_i = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_i, key ) )
            {
                if (unlikely( _python_par_i ))
                {
                    PyErr_Format( PyExc_TypeError, "F() got multiple values for keyword argument 'i'" );
                    goto error_exit;
                }

                _python_par_i = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "F() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "F() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "F() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "F() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "F() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "F() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "F() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "F() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "F() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "F() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "F() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "F() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "F() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_i != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "F() got multiple values for keyword argument 'i'" );
             goto error_exit;
         }

        _python_par_i = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto( self, _python_par_i );

error_exit:;

    Py_XDECREF( _python_par_i );

    return NULL;
}

static PyObject *dparse_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto( self, args, size, NULL );
        return result;
    }

}





// This structure is for attachment as self of the generator function function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto and
// contains the common closure. It is allocated at the time the genexpr object is created.
struct _context_common_function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto_t
{
    // Ref count to keep track of common context usage and release only when it's the last one
    int ref_count;

    // The generator function can access a read-only closure of the creator.
    PyObjectClosureVariable python_closure_digest;
    PyObjectClosureVariable python_closure_i;
    PyObjectClosureVariable python_closure_iterations;
    PyObjectClosureVariable python_closure_password;
    PyObjectClosureVariable python_closure_salt;
};

struct _context_generator_function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto_t
{
    _context_common_function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto_t *common_context;

    // The generator function instance can access its parameters from creation time.
    PyObjectLocalVariable python_var_u;
    PyObjectLocalVariable python_var_j;
};

static void _context_common_function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto_destructor( void *context_voidptr )
{
    _context_common_function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto_t *_python_context = (struct _context_common_function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto_t *)context_voidptr;

    assert( _python_context->ref_count > 0 );
    _python_context->ref_count -= 1;


    if ( _python_context->ref_count == 0 )
    {
        delete _python_context;
    }
}

static void _context_generator_function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto_destructor( void *context_voidptr )
{
    _context_generator_function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto_t *_python_context = (struct _context_generator_function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto_t *)context_voidptr;

    _context_common_function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto_destructor( _python_context->common_context );

    delete _python_context;
}

static void function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto_context( Nuitka_GeneratorObject *generator )
{
    {
        // Make context accessible if one is used.

        NUITKA_MAY_BE_UNUSED struct _context_generator_function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto_t *_python_context = (_context_generator_function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto_t *)generator->m_context;


        // Local variable inits
        _python_context->python_var_u.setVariableName( _python_str_plain_u );
        _python_context->python_var_j.setVariableName( _python_str_plain_j );

        // Actual function code.
        static PyFrameObject *frame_function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto = NULL;

        // Must be inside block, or else its d-tor will not be run.
        if ( isFrameUnusable( frame_function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto ) )
        {
            if ( frame_function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto )
            {
#if _DEBUG_REFRAME
                puts( "reframe for function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto" );
#endif
                Py_DECREF( frame_function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto );
            }

            frame_function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto = MAKE_FRAME( _codeobj_27f8e317515327f72add54bcb69ff95e, _module_django__utils__crypto );
        }

        Py_INCREF( frame_function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto );
        generator->m_frame = frame_function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto;

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

            frame_guard.setLineNumber( 165 );
            {
                PyObjectTempKeeper1 call1;
                PyObjectTempKeeper0 op4;
                _python_context->python_var_u.assign1( ( op4.assign( _python_context->common_context->python_closure_salt.asObject() ), BINARY_OPERATION_ADD( op4.asObject0(), PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__crypto_struct.asObject0(), _python_str_plain_pack ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_digest_0c0ac9ac6f2911cae7267f8fa795e944, _python_context->common_context->python_closure_i.asObject() ) ) ).asObject() ) ) );
            }
            {
                frame_guard.setLineNumber( 166 );
                PyObject *_tmp_python_tmp_for_iterator;
                {
                    PyObjectTempKeeper0 call6;
                    _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( ( call6.assign( _mvar_django__utils__crypto_xrange.asObject0() ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), PyObjectTemporary( TO_INT( _python_context->common_context->python_closure_iterations.asObject() ) ).asObject() ) ) ).asObject() );
                }
                PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 166 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        _python_context->python_var_j.assign0( _python_tmp_iter_value.asObject() );
                    }
                    frame_guard.setLineNumber( 167 );
                    {
                        PyObjectTempKeeper0 call10;
                        PyObjectTempKeeper0 call8;
                        PyObjectTempKeeper0 call9;
                        _python_context->python_var_u.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call8.assign( _mvar_django__utils__crypto__fast_hmac.asObject0() ), call9.assign( _python_context->common_context->python_closure_password.asObject() ), call10.assign( _python_context->python_var_u.asObject() ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), call9.asObject0(), call10.asObject0(), _python_context->common_context->python_closure_digest.asObject() ) ) ).asObject(), _python_str_plain_digest ) ).asObject() ) );
                    }
                    frame_guard.setLineNumber( 168 );
                    {
                        PyObjectTempKeeper0 call12;
                        YIELD_VALUE( generator, ( call12.assign( _mvar_django__utils__crypto__bin_to_long.asObject0() ), CALL_FUNCTION_WITH_ARGS( call12.asObject0(), _python_context->python_var_u.asObject() ) ) );
                    }

                   CONSIDER_THREADING();
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

static PyObject *impl_function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto( Nuitka_FunctionObject *self )
{
    // Create context if any
    struct _context_common_function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto_t *_python_common_context = (struct _context_common_function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto_t *)self->m_context;
    struct _context_generator_function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto_t *_python_context = new _context_generator_function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto_t;

    _python_context->common_context = _python_common_context;
    _python_common_context->ref_count += 1;

    try
    {
        PyObject *result = Nuitka_Generator_New(
            function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto_context,
            _python_str_plain_U,
            _codeobj_27f8e317515327f72add54bcb69ff95e,
            _python_context,
            _context_generator_function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto_destructor
        );

        if (unlikely( result == NULL ))
        {
            PyErr_Format( PyExc_RuntimeError, "cannot create function U" );
            return NULL;
        }

        // Copy to context parameter values and closured variables if any.


        return result;
    }
    catch ( PythonException &_exception )
    {
        _exception.toPython();

        return NULL;
    }
}
static PyObject *fparse_function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        PyErr_Format( PyExc_TypeError, "U() takes no arguments (%zd given)", args_given + kw_size );
#else
        if ( kw_size == 0 )
        {
           PyErr_Format( PyExc_TypeError, "U() takes 0 positional arguments but %zd was given", args_given );
        }
        else
        {
           PyObject *tmp_iter = PyObject_GetIter( kw );
           PyObject *tmp_arg_name = PyIter_Next( tmp_iter );
           Py_DECREF( tmp_iter );

           PyErr_Format( PyExc_TypeError, "U() got an unexpected keyword argument '%s'", Nuitka_String_AsString( tmp_arg_name ) );

           Py_DECREF( tmp_arg_name );
        }
#endif
        goto error_exit;
    }


    return impl_function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0)
    {
        return impl_function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto( self );
    }
    else
    {
        PyObject *result = fparse_function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_2_of_function_7_pbkdf2_of_module_django__utils__crypto( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_F,PyObjectLocalVariable &python_closure_x )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 171 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 171 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_x.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper0 call1;
                    APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( ( call1.assign( python_closure_F.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), python_closure_x.asObject() ) ) ).asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}



static PyObject *MAKE_FUNCTION_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto( PyObjectSharedLocalVariable &python_closure_digest, PyObjectSharedLocalVariable &python_closure_hex_format_string, PyObjectSharedLocalVariable &python_closure_iterations, PyObjectSharedLocalVariable &python_closure_password, PyObjectSharedLocalVariable &python_closure_salt )
{
    struct _context_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto_t *_python_context = new _context_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto_t;

    // Copy the parameter default values and closure values over.
    _python_context->python_closure_digest.shareWith( python_closure_digest );
    _python_context->python_closure_hex_format_string.shareWith( python_closure_hex_format_string );
    _python_context->python_closure_iterations.shareWith( python_closure_iterations );
    _python_context->python_closure_password.shareWith( python_closure_password );
    _python_context->python_closure_salt.shareWith( python_closure_salt );

    PyObject *result = Nuitka_Function_New(
        fparse_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto,
        dparse_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto,
        _python_str_plain_F,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d2856f63c97db6ebd242827d23e82a77,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__crypto,
        Py_None,
        _python_context,
        _context_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto_destructor
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto( PyObjectSharedLocalVariable &python_closure_digest, PyObjectSharedLocalVariable &python_closure_i, PyObjectSharedLocalVariable &python_closure_iterations, PyObjectSharedLocalVariable &python_closure_password, PyObjectSharedLocalVariable &python_closure_salt )
{
    struct _context_common_function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto_t *_python_context = new _context_common_function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto_t;
    _python_context->ref_count = 1;

    // Copy the parameter default values and closure values over.
    _python_context->python_closure_digest.shareWith( python_closure_digest );
    _python_context->python_closure_i.shareWith( python_closure_i );
    _python_context->python_closure_iterations.shareWith( python_closure_iterations );
    _python_context->python_closure_password.shareWith( python_closure_password );
    _python_context->python_closure_salt.shareWith( python_closure_salt );

    return Nuitka_Function_New(
        fparse_function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto,
        dparse_function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto,
        _python_str_plain_U,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_27f8e317515327f72add54bcb69ff95e,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__crypto,
        Py_None,
        _python_context,
        _context_common_function_1_U_of_function_1_F_of_function_7_pbkdf2_of_module_django__utils__crypto_destructor
    );
}



static PyObject *MAKE_FUNCTION_function_1_salted_hmac_of_module_django__utils__crypto(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_salted_hmac_of_module_django__utils__crypto,
        dparse_function_1_salted_hmac_of_module_django__utils__crypto,
        _python_str_plain_salted_hmac,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_759f8ca5543215eab98f0adb19174bb2,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__crypto,
        _python_unicode_digest_9c70cde3c271d7c7f7653e68e4d4d8db
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_get_random_string_of_module_django__utils__crypto(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_get_random_string_of_module_django__utils__crypto,
        dparse_function_2_get_random_string_of_module_django__utils__crypto,
        _python_str_plain_get_random_string,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_9de18e33f1361523e5402db7f048183c,
        INCREASE_REFCOUNT( _python_tuple_int_pos_12_unicode_digest_76658de2ac7d406f93dfbe8bb6d9f549_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__crypto,
        _python_unicode_digest_7a1bbd4b0a55946beb09c2b8712749a9
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_constant_time_compare_of_module_django__utils__crypto(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_constant_time_compare_of_module_django__utils__crypto,
        dparse_function_3_constant_time_compare_of_module_django__utils__crypto,
        _python_str_plain_constant_time_compare,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_78afbb2e43d8bdca007e6eb884dbccd5,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__crypto,
        _python_unicode_digest_6c83d17918001065433a3ca7aa09d37a
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4__bin_to_long_of_module_django__utils__crypto(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4__bin_to_long_of_module_django__utils__crypto,
        dparse_function_4__bin_to_long_of_module_django__utils__crypto,
        _python_str_plain__bin_to_long,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d33fcea1586eec40e752c5a1c3b07dda,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__crypto,
        _python_unicode_digest_f80e39c9c04a469fb1cac52e09669366
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5__long_to_bin_of_module_django__utils__crypto(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5__long_to_bin_of_module_django__utils__crypto,
        dparse_function_5__long_to_bin_of_module_django__utils__crypto,
        _python_str_plain__long_to_bin,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_60a5ff182fa7533b061b0985e0d89e89,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__crypto,
        _python_unicode_digest_b84e67189151e3ef0fabb99e3ebceb1f
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6__fast_hmac_of_module_django__utils__crypto(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6__fast_hmac_of_module_django__utils__crypto,
        dparse_function_6__fast_hmac_of_module_django__utils__crypto,
        _python_str_plain__fast_hmac,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d480d0882be32261cef0a66a7879f4e2,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__crypto,
        _python_unicode_digest_513429462309d75272c71534ce6e4ca4
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_pbkdf2_of_module_django__utils__crypto(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_pbkdf2_of_module_django__utils__crypto,
        dparse_function_7_pbkdf2_of_module_django__utils__crypto,
        _python_str_plain_pbkdf2,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_695eb61077c318be71e00661221dabf7,
        INCREASE_REFCOUNT( _python_tuple_int_0_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__crypto,
        _python_unicode_digest_0ae9cb528761f42cf03fcc3273a9bc7c
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.utils.crypto",   /* m_name */
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

MOD_INIT_DECL( django__utils__crypto )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__utils__crypto );
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

    // puts( "in initdjango__utils__crypto" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__utils__crypto = Py_InitModule4(
        "django.utils.crypto",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__utils__crypto = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__utils__crypto = (PyDictObject *)((PyModuleObject *)_module_django__utils__crypto)->md_dict;

    assertObject( _module_django__utils__crypto );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_3c5b97d03e4a763dec24de64fa4fff15, _module_django__utils__crypto );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__utils__crypto );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__utils__crypto != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__utils__crypto, (Nuitka_StringObject *)_python_str_plain___doc__, _python_unicode_digest_d6195884d24259a3585fc08cdbbf04a6 );
    UPDATE_STRING_DICT0( _moduledict_django__utils__crypto, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_b46c9638ebd55fe08bdc9879e4b15a9b );
    PyFrameObject *frame_module_django__utils__crypto = MAKE_FRAME( _codeobj_7b0abf2b24a939b4e7d3fe241a896a8b, _module_django__utils__crypto );

    FrameGuard frame_guard( frame_module_django__utils__crypto );
    try
    {
        assert( Py_REFCNT( frame_module_django__utils__crypto ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 4 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__crypto, (Nuitka_StringObject *)_python_str_plain_unicode_literals, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain___future__, ((PyModuleObject *)_module_django__utils__crypto)->md_dict, ((PyModuleObject *)_module_django__utils__crypto)->md_dict, _python_list_str_plain_unicode_literals_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_unicode_literals ) );
        frame_guard.setLineNumber( 6 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__crypto, (Nuitka_StringObject *)_python_str_plain_hmac, IMPORT_MODULE( _python_str_plain_hmac, ((PyModuleObject *)_module_django__utils__crypto)->md_dict, ((PyModuleObject *)_module_django__utils__crypto)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 7 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__crypto, (Nuitka_StringObject *)_python_str_plain_struct, IMPORT_MODULE( _python_str_plain_struct, ((PyModuleObject *)_module_django__utils__crypto)->md_dict, ((PyModuleObject *)_module_django__utils__crypto)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 8 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__crypto, (Nuitka_StringObject *)_python_str_plain_hashlib, IMPORT_MODULE( _python_str_plain_hashlib, ((PyModuleObject *)_module_django__utils__crypto)->md_dict, ((PyModuleObject *)_module_django__utils__crypto)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 9 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__crypto, (Nuitka_StringObject *)_python_str_plain_binascii, IMPORT_MODULE( _python_str_plain_binascii, ((PyModuleObject *)_module_django__utils__crypto)->md_dict, ((PyModuleObject *)_module_django__utils__crypto)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 10 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__crypto, (Nuitka_StringObject *)_python_str_plain_operator, IMPORT_MODULE( _python_str_plain_operator, ((PyModuleObject *)_module_django__utils__crypto)->md_dict, ((PyModuleObject *)_module_django__utils__crypto)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 11 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__crypto, (Nuitka_StringObject *)_python_str_plain_time, IMPORT_MODULE( _python_str_plain_time, ((PyModuleObject *)_module_django__utils__crypto)->md_dict, ((PyModuleObject *)_module_django__utils__crypto)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 12 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__crypto, (Nuitka_StringObject *)_python_str_plain_reduce, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_functools, ((PyModuleObject *)_module_django__utils__crypto)->md_dict, ((PyModuleObject *)_module_django__utils__crypto)->md_dict, _python_list_str_plain_reduce_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_reduce ) );
        frame_guard.setLineNumber( 15 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__crypto, (Nuitka_StringObject *)_python_str_plain_random, IMPORT_MODULE( _python_str_plain_random, ((PyModuleObject *)_module_django__utils__crypto)->md_dict, ((PyModuleObject *)_module_django__utils__crypto)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 16 );
        try
        {
            frame_guard.setLineNumber( 17 );
            UPDATE_STRING_DICT1( _moduledict_django__utils__crypto, (Nuitka_StringObject *)_python_str_plain_random, CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__crypto_random.asObject0(), _python_str_plain_SystemRandom ) ).asObject() ) );
            UPDATE_STRING_DICT0( _moduledict_django__utils__crypto, (Nuitka_StringObject *)_python_str_plain_using_sysrandom, Py_True );
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

            if ( _exception.matches( PyExc_NotImplementedError ) )
            {
                frame_guard.detachFrame();
                frame_guard.setLineNumber( 20 );
                UPDATE_STRING_DICT1( _moduledict_django__utils__crypto, (Nuitka_StringObject *)_python_str_plain_warnings, IMPORT_MODULE( _python_str_plain_warnings, ((PyModuleObject *)_module_django__utils__crypto)->md_dict, ((PyModuleObject *)_module_django__utils__crypto)->md_dict, Py_None, _python_int_neg_1 ) );
                frame_guard.setLineNumber( 21 );
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__crypto_warnings.asObject0(), _python_str_plain_warn ) ).asObject(), _python_unicode_digest_6437fe4e103488678abdbe6acf3966d4 ) );
                UPDATE_STRING_DICT0( _moduledict_django__utils__crypto, (Nuitka_StringObject *)_python_str_plain_using_sysrandom, Py_False );
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
        frame_guard.setLineNumber( 25 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__crypto, (Nuitka_StringObject *)_python_str_plain_settings, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__utils__crypto)->md_dict, ((PyModuleObject *)_module_django__utils__crypto)->md_dict, _python_list_str_plain_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_settings ) );
        frame_guard.setLineNumber( 26 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__crypto, (Nuitka_StringObject *)_python_str_plain_force_bytes, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__utils__crypto)->md_dict, ((PyModuleObject *)_module_django__utils__crypto)->md_dict, _python_list_str_plain_force_bytes_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_force_bytes ) );
        frame_guard.setLineNumber( 27 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__crypto, (Nuitka_StringObject *)_python_str_plain_six, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__utils__crypto)->md_dict, ((PyModuleObject *)_module_django__utils__crypto)->md_dict, _python_list_str_plain_six_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_six ) );
        frame_guard.setLineNumber( 28 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__crypto, (Nuitka_StringObject *)_python_str_plain_xrange, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_91ddc8f1df73e2bf4268fd2741c1c593, ((PyModuleObject *)_module_django__utils__crypto)->md_dict, ((PyModuleObject *)_module_django__utils__crypto)->md_dict, _python_list_str_plain_xrange_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_xrange ) );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__utils__crypto)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__utils__crypto, (Nuitka_StringObject *)_python_str_plain_salted_hmac, MAKE_FUNCTION_function_1_salted_hmac_of_module_django__utils__crypto(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__crypto, (Nuitka_StringObject *)_python_str_plain_get_random_string, MAKE_FUNCTION_function_2_get_random_string_of_module_django__utils__crypto(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__crypto, (Nuitka_StringObject *)_python_str_plain_constant_time_compare, MAKE_FUNCTION_function_3_constant_time_compare_of_module_django__utils__crypto(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__crypto, (Nuitka_StringObject *)_python_str_plain__bin_to_long, MAKE_FUNCTION_function_4__bin_to_long_of_module_django__utils__crypto(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__crypto, (Nuitka_StringObject *)_python_str_plain__long_to_bin, MAKE_FUNCTION_function_5__long_to_bin_of_module_django__utils__crypto(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__crypto, (Nuitka_StringObject *)_python_str_plain__fast_hmac, MAKE_FUNCTION_function_6__fast_hmac_of_module_django__utils__crypto(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__crypto, (Nuitka_StringObject *)_python_str_plain_pbkdf2, MAKE_FUNCTION_function_7_pbkdf2_of_module_django__utils__crypto(  ) );

   return MOD_RETURN_VALUE( _module_django__utils__crypto );
}
