// Generated code for Python source for module 'django.http.cookie'
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

// The _module_django__http__cookie is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__http__cookie;
PyDictObject *_moduledict_django__http__cookie;

// The module level variables.
static PyObjectGlobalVariable_django__http__cookie _mvar_django__http__cookie_Morsel( &_module_django__http__cookie, &_python_str_plain_Morsel );
static PyObjectGlobalVariable_django__http__cookie _mvar_django__http__cookie_SimpleCookie( &_module_django__http__cookie, &_python_str_plain_SimpleCookie );
static PyObjectGlobalVariable_django__http__cookie _mvar_django__http__cookie___metaclass__( &_module_django__http__cookie, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__http__cookie _mvar_django__http__cookie__cookie_allows_colon_in_names( &_module_django__http__cookie, &_python_str_plain__cookie_allows_colon_in_names );
static PyObjectGlobalVariable_django__http__cookie _mvar_django__http__cookie__cookie_encodes_correctly( &_module_django__http__cookie, &_python_str_plain__cookie_encodes_correctly );
static PyObjectGlobalVariable_django__http__cookie _mvar_django__http__cookie__tc( &_module_django__http__cookie, &_python_str_plain__tc );
static PyObjectGlobalVariable_django__http__cookie _mvar_django__http__cookie_force_str( &_module_django__http__cookie, &_python_str_plain_force_str );
static PyObjectGlobalVariable_django__http__cookie _mvar_django__http__cookie_http_cookies( &_module_django__http__cookie, &_python_str_plain_http_cookies );
static PyObjectGlobalVariable_django__http__cookie _mvar_django__http__cookie_six( &_module_django__http__cookie, &_python_str_plain_six );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_SimpleCookie_of_module_django__http__cookie(  );


static PyObject *MAKE_FUNCTION_function_1_value_encode_of_class_1_SimpleCookie_of_module_django__http__cookie(  );


static PyObject *MAKE_FUNCTION_function_2_load_of_class_1_SimpleCookie_of_module_django__http__cookie(  );


static PyObject *MAKE_FUNCTION_function_2_parse_cookie_of_module_django__http__cookie(  );


static PyObject *MAKE_FUNCTION_function_3__BaseCookie__set_of_class_1_SimpleCookie_of_module_django__http__cookie(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_SimpleCookie_of_module_django__http__cookie(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var_value_encode( _python_str_plain_value_encode );
    PyObjectLocalVariable _python_var_load( _python_str_plain_load );
    PyObjectLocalVariable _python_var__BaseCookie__set( _python_str_plain__BaseCookie__set );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_cookie );
    static PyFrameObject *frame_class_1_SimpleCookie_of_module_django__http__cookie = NULL;

    if ( isFrameUnusable( frame_class_1_SimpleCookie_of_module_django__http__cookie ) )
    {
        if ( frame_class_1_SimpleCookie_of_module_django__http__cookie )
        {
#if _DEBUG_REFRAME
            puts( "reframe for class_1_SimpleCookie_of_module_django__http__cookie" );
#endif
            Py_DECREF( frame_class_1_SimpleCookie_of_module_django__http__cookie );
        }

        frame_class_1_SimpleCookie_of_module_django__http__cookie = MAKE_FRAME( _codeobj_60ad96a832c578c8ac9484d90c498be3, _module_django__http__cookie );
    }

    FrameGuard frame_guard( frame_class_1_SimpleCookie_of_module_django__http__cookie );
    try
    {
        assert( Py_REFCNT( frame_class_1_SimpleCookie_of_module_django__http__cookie ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 24 );
        if ( (!( CHECK_IF_TRUE( _mvar_django__http__cookie__cookie_encodes_correctly.asObject0() ) )) )
        {
            _python_var_value_encode.assign1( MAKE_FUNCTION_function_1_value_encode_of_class_1_SimpleCookie_of_module_django__http__cookie(  ) );
        }
        frame_guard.setLineNumber( 49 );
        if ( (!( CHECK_IF_TRUE( _mvar_django__http__cookie__cookie_allows_colon_in_names.asObject0() ) )) )
        {
            _python_var_load.assign1( MAKE_FUNCTION_function_2_load_of_class_1_SimpleCookie_of_module_django__http__cookie(  ) );
            _python_var__BaseCookie__set.assign1( MAKE_FUNCTION_function_3__BaseCookie__set_of_class_1_SimpleCookie_of_module_django__http__cookie(  ) );
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
        frame_guard.getFrame0()->f_locals = _python_var__BaseCookie__set.updateLocalsDict( _python_var_load.updateLocalsDict( _python_var_value_encode.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_class_1_SimpleCookie_of_module_django__http__cookie )
        {
           Py_DECREF( frame_class_1_SimpleCookie_of_module_django__http__cookie );
           frame_class_1_SimpleCookie_of_module_django__http__cookie = NULL;
        }

        throw;
    }
    return _python_var__BaseCookie__set.updateLocalsDict( _python_var_load.updateLocalsDict( _python_var_value_encode.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) );
}


static PyObject *impl_function_1_value_encode_of_class_1_SimpleCookie_of_module_django__http__cookie( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_val )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_val( _python_str_plain_val, _python_par_val );
    PyObjectLocalVariable _python_var_encoded( _python_str_plain_encoded );

    // Actual function code.
    static PyFrameObject *frame_function_1_value_encode_of_class_1_SimpleCookie_of_module_django__http__cookie = NULL;

    if ( isFrameUnusable( frame_function_1_value_encode_of_class_1_SimpleCookie_of_module_django__http__cookie ) )
    {
        if ( frame_function_1_value_encode_of_class_1_SimpleCookie_of_module_django__http__cookie )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_value_encode_of_class_1_SimpleCookie_of_module_django__http__cookie" );
#endif
            Py_DECREF( frame_function_1_value_encode_of_class_1_SimpleCookie_of_module_django__http__cookie );
        }

        frame_function_1_value_encode_of_class_1_SimpleCookie_of_module_django__http__cookie = MAKE_FRAME( _codeobj_bc240dd095e3ac85ad032d4d61b95491, _module_django__http__cookie );
    }

    FrameGuard frame_guard( frame_function_1_value_encode_of_class_1_SimpleCookie_of_module_django__http__cookie );
    try
    {
        assert( Py_REFCNT( frame_function_1_value_encode_of_class_1_SimpleCookie_of_module_django__http__cookie ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 39 );
            PyObject *_tmp_python_tmp_source_iter;
            {
                PyObjectTempKeeper1 call3;
                PyObjectTempKeeper0 super1;
                _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super1.assign( _mvar_django__http__cookie_SimpleCookie.asObject0() ), BUILTIN_SUPER( super1.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain_value_encode ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_val.asObject() ) ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
            _python_var_val.assign0( _python_tmp_element_1.asObject() );
            _python_var_encoded.assign0( _python_tmp_element_2.asObject() );
        }
        frame_guard.setLineNumber( 41 );
        _python_var_encoded.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_encoded.asObject(), _python_str_plain_replace ) ).asObject(), _python_unicode_chr_59, _python_unicode_digest_81e55cb1fb59fed4101b529e20c3c5dc ) ).asObject(), _python_str_plain_replace ) ).asObject(), _python_unicode_chr_44, _python_unicode_digest_50d016e3ecbc4077bff979b7b9741e16 ) );
        frame_guard.setLineNumber( 44 );
        if ( ( SEQUENCE_CONTAINS_BOOL( _python_unicode_chr_92, _python_var_encoded.asObject() ) && (!( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_encoded.asObject(), _python_str_plain_startswith ) ).asObject(), _python_unicode_chr_34 ) ).asObject() ) )) ) )
        {
            frame_guard.setLineNumber( 45 );
            _python_var_encoded.assign1( BINARY_OPERATION_ADD( PyObjectTemporary( BINARY_OPERATION_ADD( _python_unicode_chr_34, _python_var_encoded.asObject() ) ).asObject(), _python_unicode_chr_34 ) );
        }
        frame_guard.setLineNumber( 47 );
        {
            PyObjectTempKeeper0 make_tuple5;
            return ( make_tuple5.assign( _python_var_val.asObject() ), MAKE_TUPLE2( make_tuple5.asObject0(), _python_var_encoded.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_val.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_encoded.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_value_encode_of_class_1_SimpleCookie_of_module_django__http__cookie )
        {
           Py_DECREF( frame_function_1_value_encode_of_class_1_SimpleCookie_of_module_django__http__cookie );
           frame_function_1_value_encode_of_class_1_SimpleCookie_of_module_django__http__cookie = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1_value_encode_of_class_1_SimpleCookie_of_module_django__http__cookie( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "value_encode() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "value_encode() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_val == key )
            {
                if (unlikely( _python_par_val ))
                {
                    PyErr_Format( PyExc_TypeError, "value_encode() got multiple values for keyword argument 'val'" );
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
                    PyErr_Format( PyExc_TypeError, "value_encode() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_val, key ) )
            {
                if (unlikely( _python_par_val ))
                {
                    PyErr_Format( PyExc_TypeError, "value_encode() got multiple values for keyword argument 'val'" );
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
                   "value_encode() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "value_encode() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "value_encode() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "value_encode() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "value_encode() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "value_encode() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "value_encode() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "value_encode() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "value_encode() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "value_encode() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "value_encode() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "value_encode() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "value_encode() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "value_encode() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_val != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "value_encode() got multiple values for keyword argument 'val'" );
             goto error_exit;
         }

        _python_par_val = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_1_value_encode_of_class_1_SimpleCookie_of_module_django__http__cookie( self, _python_par_self, _python_par_val );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_val );

    return NULL;
}

static PyObject *dparse_function_1_value_encode_of_class_1_SimpleCookie_of_module_django__http__cookie( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1_value_encode_of_class_1_SimpleCookie_of_module_django__http__cookie( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_value_encode_of_class_1_SimpleCookie_of_module_django__http__cookie( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_load_of_class_1_SimpleCookie_of_module_django__http__cookie( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_rawdata )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_rawdata( _python_str_plain_rawdata, _python_par_rawdata );
    PyObjectLocalVariable _python_var_key( _python_str_plain_key );

    // Actual function code.
    static PyFrameObject *frame_function_2_load_of_class_1_SimpleCookie_of_module_django__http__cookie = NULL;

    if ( isFrameUnusable( frame_function_2_load_of_class_1_SimpleCookie_of_module_django__http__cookie ) )
    {
        if ( frame_function_2_load_of_class_1_SimpleCookie_of_module_django__http__cookie )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_load_of_class_1_SimpleCookie_of_module_django__http__cookie" );
#endif
            Py_DECREF( frame_function_2_load_of_class_1_SimpleCookie_of_module_django__http__cookie );
        }

        frame_function_2_load_of_class_1_SimpleCookie_of_module_django__http__cookie = MAKE_FRAME( _codeobj_55945748f767469072aa194de3f3e1c3, _module_django__http__cookie );
    }

    FrameGuard frame_guard( frame_function_2_load_of_class_1_SimpleCookie_of_module_django__http__cookie );
    try
    {
        assert( Py_REFCNT( frame_function_2_load_of_class_1_SimpleCookie_of_module_django__http__cookie ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 51 );
        {
                PyObjectTemporary tmp_identifier( CALL_FUNCTION_NO_ARGS( LOOKUP_BUILTIN( _python_str_plain_set ) ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_bad_cookies );
        }
        frame_guard.setLineNumber( 52 );
        {
            PyObjectTempKeeper0 isinstance3;
            if ( ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__http__cookie_six.asObject0(), _python_str_plain_PY3 ) ).asObject() ) )) && ( isinstance3.assign( _python_var_rawdata.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__http__cookie_six.asObject0(), _python_str_plain_text_type ) ).asObject() ) ) ) )
        {
            frame_guard.setLineNumber( 53 );
            {
                PyObjectTempKeeper0 call1;
                _python_var_rawdata.assign1( ( call1.assign( _mvar_django__http__cookie_force_str.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_rawdata.asObject() ) ) );
            }
        }
        }
        frame_guard.setLineNumber( 54 );
        {
            PyObjectTempKeeper1 call7;
            PyObjectTempKeeper0 super5;
            DECREASE_REFCOUNT( ( call7.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super5.assign( _mvar_django__http__cookie_SimpleCookie.asObject0() ), BUILTIN_SUPER( super5.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain_load ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _python_var_rawdata.asObject() ) ) );
        }
        {
            frame_guard.setLineNumber( 55 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_bad_cookies ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 55 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_key.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 56 );
                {
                        PyObject *tmp_subscribed = _python_var_self.asObject();
                        DEL_SUBSCRIPT( tmp_subscribed, _python_var_key.asObject() );
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

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_rawdata.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_key.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_load_of_class_1_SimpleCookie_of_module_django__http__cookie )
        {
           Py_DECREF( frame_function_2_load_of_class_1_SimpleCookie_of_module_django__http__cookie );
           frame_function_2_load_of_class_1_SimpleCookie_of_module_django__http__cookie = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2_load_of_class_1_SimpleCookie_of_module_django__http__cookie( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_rawdata = NULL;
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
                PyErr_Format( PyExc_TypeError, "load() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "load() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_rawdata == key )
            {
                if (unlikely( _python_par_rawdata ))
                {
                    PyErr_Format( PyExc_TypeError, "load() got multiple values for keyword argument 'rawdata'" );
                    goto error_exit;
                }

                _python_par_rawdata = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "load() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_rawdata, key ) )
            {
                if (unlikely( _python_par_rawdata ))
                {
                    PyErr_Format( PyExc_TypeError, "load() got multiple values for keyword argument 'rawdata'" );
                    goto error_exit;
                }

                _python_par_rawdata = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "load() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "load() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "load() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "load() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "load() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "load() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "load() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "load() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "load() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "load() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "load() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "load() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "load() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "load() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_rawdata != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "load() got multiple values for keyword argument 'rawdata'" );
             goto error_exit;
         }

        _python_par_rawdata = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_2_load_of_class_1_SimpleCookie_of_module_django__http__cookie( self, _python_par_self, _python_par_rawdata );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_rawdata );

    return NULL;
}

static PyObject *dparse_function_2_load_of_class_1_SimpleCookie_of_module_django__http__cookie( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2_load_of_class_1_SimpleCookie_of_module_django__http__cookie( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_load_of_class_1_SimpleCookie_of_module_django__http__cookie( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3__BaseCookie__set_of_class_1_SimpleCookie_of_module_django__http__cookie( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_key, PyObject *_python_par_real_value, PyObject *_python_par_coded_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_key( _python_str_plain_key, _python_par_key );
    PyObjectLocalParameterVariableNoDel _python_var_real_value( _python_str_plain_real_value, _python_par_real_value );
    PyObjectLocalParameterVariableNoDel _python_var_coded_value( _python_str_plain_coded_value, _python_par_coded_value );
    PyObjectLocalVariable _python_var_M( _python_str_plain_M );

    // Actual function code.
    static PyFrameObject *frame_function_3__BaseCookie__set_of_class_1_SimpleCookie_of_module_django__http__cookie = NULL;

    if ( isFrameUnusable( frame_function_3__BaseCookie__set_of_class_1_SimpleCookie_of_module_django__http__cookie ) )
    {
        if ( frame_function_3__BaseCookie__set_of_class_1_SimpleCookie_of_module_django__http__cookie )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3__BaseCookie__set_of_class_1_SimpleCookie_of_module_django__http__cookie" );
#endif
            Py_DECREF( frame_function_3__BaseCookie__set_of_class_1_SimpleCookie_of_module_django__http__cookie );
        }

        frame_function_3__BaseCookie__set_of_class_1_SimpleCookie_of_module_django__http__cookie = MAKE_FRAME( _codeobj_b2b6fb9ef749f885942072c712943211, _module_django__http__cookie );
    }

    FrameGuard frame_guard( frame_function_3__BaseCookie__set_of_class_1_SimpleCookie_of_module_django__http__cookie );
    try
    {
        assert( Py_REFCNT( frame_function_3__BaseCookie__set_of_class_1_SimpleCookie_of_module_django__http__cookie ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 61 );
        {
            PyObjectTempKeeper0 call1;
            _python_var_key.assign1( ( call1.assign( _mvar_django__http__cookie_force_str.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_key.asObject() ) ) );
        }
        frame_guard.setLineNumber( 62 );
        try
        {
            frame_guard.setLineNumber( 63 );
            {
                PyObjectTempKeeper0 call10;
                PyObjectTempKeeper1 call9;
                _python_var_M.assign1( ( call9.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_get ) ), call10.assign( _python_var_key.asObject() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), call10.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( _mvar_django__http__cookie_Morsel.asObject0() ) ).asObject() ) ) );
            }
            frame_guard.setLineNumber( 64 );
            {
                PyObjectTempKeeper1 call12;
                PyObjectTempKeeper0 call13;
                PyObjectTempKeeper0 call14;
                DECREASE_REFCOUNT( ( call12.assign( LOOKUP_ATTRIBUTE( _python_var_M.asObject(), _python_str_plain_set ) ), call13.assign( _python_var_key.asObject() ), call14.assign( _python_var_real_value.asObject() ), CALL_FUNCTION_WITH_ARGS( call12.asObject0(), call13.asObject0(), call14.asObject0(), _python_var_coded_value.asObject() ) ) );
            }
            frame_guard.setLineNumber( 65 );
            {
                PyObjectTempKeeper1 call16;
                PyObjectTempKeeper0 call17;
                PyObjectTempKeeper0 call18;
                DECREASE_REFCOUNT( ( call16.assign( LOOKUP_ATTRIBUTE( LOOKUP_BUILTIN( _python_str_plain_dict ), _python_str_plain___setitem__ ) ), call17.assign( _python_var_self.asObject() ), call18.assign( _python_var_key.asObject() ), CALL_FUNCTION_WITH_ARGS( call16.asObject0(), call17.asObject0(), call18.asObject0(), _python_var_M.asObject() ) ) );
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

            if ( _exception.matches( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__http__cookie_http_cookies.asObject0(), _python_str_plain_CookieError ) ).asObject() ) )
            {
                frame_guard.detachFrame();
                frame_guard.setLineNumber( 67 );
                {
                    PyObjectTempKeeper1 call3;
                    DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_bad_cookies ) ).asObject(), _python_str_plain_add ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_key.asObject() ) ) );
                }
                frame_guard.setLineNumber( 68 );
                {
                    PyObjectTempKeeper1 call5;
                    PyObjectTempKeeper0 call6;
                    PyObjectTempKeeper0 call7;
                    DECREASE_REFCOUNT( ( call5.assign( LOOKUP_ATTRIBUTE( LOOKUP_BUILTIN( _python_str_plain_dict ), _python_str_plain___setitem__ ) ), call6.assign( _python_var_self.asObject() ), call7.assign( _python_var_key.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), call6.asObject0(), call7.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__http__cookie_http_cookies.asObject0(), _python_str_plain_Morsel ) ).asObject() ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_coded_value.updateLocalsDict( _python_var_real_value.updateLocalsDict( _python_var_key.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_M.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3__BaseCookie__set_of_class_1_SimpleCookie_of_module_django__http__cookie )
        {
           Py_DECREF( frame_function_3__BaseCookie__set_of_class_1_SimpleCookie_of_module_django__http__cookie );
           frame_function_3__BaseCookie__set_of_class_1_SimpleCookie_of_module_django__http__cookie = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_3__BaseCookie__set_of_class_1_SimpleCookie_of_module_django__http__cookie( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_key = NULL;
    PyObject *_python_par_real_value = NULL;
    PyObject *_python_par_coded_value = NULL;
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
                PyErr_Format( PyExc_TypeError, "_BaseCookie__set() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_BaseCookie__set() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "_BaseCookie__set() got multiple values for keyword argument 'key'" );
                    goto error_exit;
                }

                _python_par_key = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_real_value == key )
            {
                if (unlikely( _python_par_real_value ))
                {
                    PyErr_Format( PyExc_TypeError, "_BaseCookie__set() got multiple values for keyword argument 'real_value'" );
                    goto error_exit;
                }

                _python_par_real_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_coded_value == key )
            {
                if (unlikely( _python_par_coded_value ))
                {
                    PyErr_Format( PyExc_TypeError, "_BaseCookie__set() got multiple values for keyword argument 'coded_value'" );
                    goto error_exit;
                }

                _python_par_coded_value = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "_BaseCookie__set() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "_BaseCookie__set() got multiple values for keyword argument 'key'" );
                    goto error_exit;
                }

                _python_par_key = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_real_value, key ) )
            {
                if (unlikely( _python_par_real_value ))
                {
                    PyErr_Format( PyExc_TypeError, "_BaseCookie__set() got multiple values for keyword argument 'real_value'" );
                    goto error_exit;
                }

                _python_par_real_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_coded_value, key ) )
            {
                if (unlikely( _python_par_coded_value ))
                {
                    PyErr_Format( PyExc_TypeError, "_BaseCookie__set() got multiple values for keyword argument 'coded_value'" );
                    goto error_exit;
                }

                _python_par_coded_value = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_BaseCookie__set() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_BaseCookie__set() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_BaseCookie__set() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_BaseCookie__set() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_BaseCookie__set() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "_BaseCookie__set() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_BaseCookie__set() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "_BaseCookie__set() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_BaseCookie__set() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_BaseCookie__set() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_BaseCookie__set() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 4 )
                {
                    PyErr_Format( PyExc_TypeError, "_BaseCookie__set() takes exactly %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_BaseCookie__set() takes at least %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_BaseCookie__set() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_key != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_BaseCookie__set() got multiple values for keyword argument 'key'" );
             goto error_exit;
         }

        _python_par_key = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_real_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_BaseCookie__set() got multiple values for keyword argument 'real_value'" );
             goto error_exit;
         }

        _python_par_real_value = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_coded_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_BaseCookie__set() got multiple values for keyword argument 'coded_value'" );
             goto error_exit;
         }

        _python_par_coded_value = INCREASE_REFCOUNT( args[ 3 ] );
    }


    return impl_function_3__BaseCookie__set_of_class_1_SimpleCookie_of_module_django__http__cookie( self, _python_par_self, _python_par_key, _python_par_real_value, _python_par_coded_value );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_key );
    Py_XDECREF( _python_par_real_value );
    Py_XDECREF( _python_par_coded_value );

    return NULL;
}

static PyObject *dparse_function_3__BaseCookie__set_of_class_1_SimpleCookie_of_module_django__http__cookie( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_3__BaseCookie__set_of_class_1_SimpleCookie_of_module_django__http__cookie( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3__BaseCookie__set_of_class_1_SimpleCookie_of_module_django__http__cookie( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_parse_cookie_of_module_django__http__cookie( Nuitka_FunctionObject *self, PyObject *_python_par_cookie )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_cookie( _python_str_plain_cookie, _python_par_cookie );
    PyObjectLocalVariable _python_var_c( _python_str_plain_c );
    PyObjectLocalVariable _python_var_cookiedict( _python_str_plain_cookiedict );
    PyObjectLocalVariable _python_var_key( _python_str_plain_key );

    // Actual function code.
    static PyFrameObject *frame_function_2_parse_cookie_of_module_django__http__cookie = NULL;

    if ( isFrameUnusable( frame_function_2_parse_cookie_of_module_django__http__cookie ) )
    {
        if ( frame_function_2_parse_cookie_of_module_django__http__cookie )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_parse_cookie_of_module_django__http__cookie" );
#endif
            Py_DECREF( frame_function_2_parse_cookie_of_module_django__http__cookie );
        }

        frame_function_2_parse_cookie_of_module_django__http__cookie = MAKE_FRAME( _codeobj_34c55366b8509da27ec29d614df2bf22, _module_django__http__cookie );
    }

    FrameGuard frame_guard( frame_function_2_parse_cookie_of_module_django__http__cookie );
    try
    {
        assert( Py_REFCNT( frame_function_2_parse_cookie_of_module_django__http__cookie ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 72 );
        if ( RICH_COMPARE_BOOL_EQ( _python_var_cookie.asObject(), _python_unicode_empty ) )
        {
            return PyDict_New();
        }
        frame_guard.setLineNumber( 74 );
        {
            PyObjectTempKeeper0 isinstance3;
            if ( (!( ( isinstance3.assign( _python_var_cookie.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__http__cookie_http_cookies.asObject0(), _python_str_plain_BaseCookie ) ).asObject() ) ) )) )
        {
            frame_guard.setLineNumber( 75 );
            try
            {
                frame_guard.setLineNumber( 76 );
                _python_var_c.assign1( CALL_FUNCTION_NO_ARGS( _mvar_django__http__cookie_SimpleCookie.asObject0() ) );
                frame_guard.setLineNumber( 77 );
                {
                    PyObjectTempKeeper1 call1;
                    DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_c.asObject(), _python_str_plain_load ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_cookie.asObject() ) ) );
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

                if ( _exception.matches( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__http__cookie_http_cookies.asObject0(), _python_str_plain_CookieError ) ).asObject() ) )
                {
                    frame_guard.detachFrame();
                    return PyDict_New();
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
        else
        {
            frame_guard.setLineNumber( 82 );
            _python_var_c.assign0( _python_var_cookie.asObject() );
        }
        }
        _python_var_cookiedict.assign1( PyDict_New() );
        {
            frame_guard.setLineNumber( 84 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_c.asObject(), _python_str_plain_keys ) ).asObject() ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 84 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_key.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 85 );
                {
                    PyObjectTempKeeper1 call5;
                    {
                        PyObjectTemporary tmp_identifier( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call5.assign( LOOKUP_ATTRIBUTE( _python_var_c.asObject(), _python_str_plain_get ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_key.asObject() ) ) ).asObject(), _python_str_plain_value ) );
                        PyObject *tmp_subscribed = _python_var_cookiedict.asObject();
                        SET_SUBSCRIPT( tmp_identifier.asObject(), tmp_subscribed, _python_var_key.asObject() );
                }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 86 );
        return _python_var_cookiedict.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_cookie.updateLocalsDict( _python_var_key.updateLocalsDict( _python_var_cookiedict.updateLocalsDict( _python_var_c.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_parse_cookie_of_module_django__http__cookie )
        {
           Py_DECREF( frame_function_2_parse_cookie_of_module_django__http__cookie );
           frame_function_2_parse_cookie_of_module_django__http__cookie = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_parse_cookie_of_module_django__http__cookie( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_cookie = NULL;
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
                PyErr_Format( PyExc_TypeError, "parse_cookie() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_cookie == key )
            {
                if (unlikely( _python_par_cookie ))
                {
                    PyErr_Format( PyExc_TypeError, "parse_cookie() got multiple values for keyword argument 'cookie'" );
                    goto error_exit;
                }

                _python_par_cookie = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_cookie, key ) )
            {
                if (unlikely( _python_par_cookie ))
                {
                    PyErr_Format( PyExc_TypeError, "parse_cookie() got multiple values for keyword argument 'cookie'" );
                    goto error_exit;
                }

                _python_par_cookie = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "parse_cookie() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "parse_cookie() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "parse_cookie() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "parse_cookie() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "parse_cookie() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "parse_cookie() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "parse_cookie() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "parse_cookie() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "parse_cookie() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "parse_cookie() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "parse_cookie() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "parse_cookie() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "parse_cookie() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_cookie != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "parse_cookie() got multiple values for keyword argument 'cookie'" );
             goto error_exit;
         }

        _python_par_cookie = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2_parse_cookie_of_module_django__http__cookie( self, _python_par_cookie );

error_exit:;

    Py_XDECREF( _python_par_cookie );

    return NULL;
}

static PyObject *dparse_function_2_parse_cookie_of_module_django__http__cookie( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2_parse_cookie_of_module_django__http__cookie( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_parse_cookie_of_module_django__http__cookie( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_value_encode_of_class_1_SimpleCookie_of_module_django__http__cookie(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_value_encode_of_class_1_SimpleCookie_of_module_django__http__cookie,
        dparse_function_1_value_encode_of_class_1_SimpleCookie_of_module_django__http__cookie,
        _python_str_plain_value_encode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_bc240dd095e3ac85ad032d4d61b95491,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__cookie,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_load_of_class_1_SimpleCookie_of_module_django__http__cookie(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_load_of_class_1_SimpleCookie_of_module_django__http__cookie,
        dparse_function_2_load_of_class_1_SimpleCookie_of_module_django__http__cookie,
        _python_str_plain_load,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_55945748f767469072aa194de3f3e1c3,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__cookie,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_parse_cookie_of_module_django__http__cookie(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_parse_cookie_of_module_django__http__cookie,
        dparse_function_2_parse_cookie_of_module_django__http__cookie,
        _python_str_plain_parse_cookie,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_34c55366b8509da27ec29d614df2bf22,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__cookie,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3__BaseCookie__set_of_class_1_SimpleCookie_of_module_django__http__cookie(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3__BaseCookie__set_of_class_1_SimpleCookie_of_module_django__http__cookie,
        dparse_function_3__BaseCookie__set_of_class_1_SimpleCookie_of_module_django__http__cookie,
        _python_str_plain__BaseCookie__set,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b2b6fb9ef749f885942072c712943211,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__cookie,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.http.cookie",   /* m_name */
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

MOD_INIT_DECL( django__http__cookie )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__http__cookie );
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

    // puts( "in initdjango__http__cookie" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__http__cookie = Py_InitModule4(
        "django.http.cookie",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__http__cookie = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__http__cookie = (PyDictObject *)((PyModuleObject *)_module_django__http__cookie)->md_dict;

    assertObject( _module_django__http__cookie );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_2ee87dfeb85457305bdd85e4ee04df60, _module_django__http__cookie );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__http__cookie );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__http__cookie != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__http__cookie, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django__http__cookie, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_580eecb7789e91ca9d66b4c404c53b03 );
    PyFrameObject *frame_module_django__http__cookie = MAKE_FRAME( _codeobj_7ffb90e196ae020ef6c57b6ffc17c806, _module_django__http__cookie );

    FrameGuard frame_guard( frame_module_django__http__cookie );
    try
    {
        assert( Py_REFCNT( frame_module_django__http__cookie ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 1 );
        UPDATE_STRING_DICT1( _moduledict_django__http__cookie, (Nuitka_StringObject *)_python_str_plain_absolute_import, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain___future__, ((PyModuleObject *)_module_django__http__cookie)->md_dict, ((PyModuleObject *)_module_django__http__cookie)->md_dict, _python_list_str_plain_absolute_import_str_plain_unicode_literals_list, _python_int_0 ) ).asObject(), _python_str_plain_absolute_import ) );
        UPDATE_STRING_DICT1( _moduledict_django__http__cookie, (Nuitka_StringObject *)_python_str_plain_unicode_literals, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain___future__, ((PyModuleObject *)_module_django__http__cookie)->md_dict, ((PyModuleObject *)_module_django__http__cookie)->md_dict, _python_list_str_plain_absolute_import_str_plain_unicode_literals_list, _python_int_0 ) ).asObject(), _python_str_plain_unicode_literals ) );
        frame_guard.setLineNumber( 3 );
        UPDATE_STRING_DICT1( _moduledict_django__http__cookie, (Nuitka_StringObject *)_python_str_plain_force_str, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__http__cookie)->md_dict, ((PyModuleObject *)_module_django__http__cookie)->md_dict, _python_list_str_plain_force_str_list, _python_int_0 ) ).asObject(), _python_str_plain_force_str ) );
        frame_guard.setLineNumber( 4 );
        UPDATE_STRING_DICT1( _moduledict_django__http__cookie, (Nuitka_StringObject *)_python_str_plain_six, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__http__cookie)->md_dict, ((PyModuleObject *)_module_django__http__cookie)->md_dict, _python_list_str_plain_six_list, _python_int_0 ) ).asObject(), _python_str_plain_six ) );
        frame_guard.setLineNumber( 5 );
        UPDATE_STRING_DICT1( _moduledict_django__http__cookie, (Nuitka_StringObject *)_python_str_plain_http_cookies, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_91ddc8f1df73e2bf4268fd2741c1c593, ((PyModuleObject *)_module_django__http__cookie)->md_dict, ((PyModuleObject *)_module_django__http__cookie)->md_dict, _python_list_str_plain_http_cookies_list, _python_int_0 ) ).asObject(), _python_str_plain_http_cookies ) );
        frame_guard.setLineNumber( 9 );
        UPDATE_STRING_DICT1( _moduledict_django__http__cookie, (Nuitka_StringObject *)_python_str_plain__cookie_encodes_correctly, RICH_COMPARE_EQ( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__http__cookie_http_cookies.asObject0(), _python_str_plain_SimpleCookie ) ).asObject() ) ).asObject(), _python_str_plain_value_encode ) ).asObject(), _python_unicode_chr_59 ) ).asObject(), _python_tuple_6d0291d51db3f04bad863cb4f7fe9097_tuple ) );
        frame_guard.setLineNumber( 11 );
        UPDATE_STRING_DICT1( _moduledict_django__http__cookie, (Nuitka_StringObject *)_python_str_plain__tc, CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__http__cookie_http_cookies.asObject0(), _python_str_plain_SimpleCookie ) ).asObject() ) );
        frame_guard.setLineNumber( 12 );
        try
        {
            frame_guard.setLineNumber( 13 );
            DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__http__cookie__tc.asObject0(), _python_str_plain_load ) ).asObject(), _python_str_digest_9b2420402e10dc328f61fb48fed2f79f ) );
            UPDATE_STRING_DICT0( _moduledict_django__http__cookie, (Nuitka_StringObject *)_python_str_plain__cookie_allows_colon_in_names, Py_True );
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

            if ( _exception.matches( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__http__cookie_http_cookies.asObject0(), _python_str_plain_CookieError ) ).asObject() ) )
            {
                frame_guard.detachFrame();
                UPDATE_STRING_DICT0( _moduledict_django__http__cookie, (Nuitka_StringObject *)_python_str_plain__cookie_allows_colon_in_names, Py_False );
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
        frame_guard.setLineNumber( 18 );
        if ( ( CHECK_IF_TRUE( _mvar_django__http__cookie__cookie_encodes_correctly.asObject0() ) && CHECK_IF_TRUE( _mvar_django__http__cookie__cookie_allows_colon_in_names.asObject0() ) ) )
        {
            frame_guard.setLineNumber( 19 );
            UPDATE_STRING_DICT1( _moduledict_django__http__cookie, (Nuitka_StringObject *)_python_str_plain_SimpleCookie, LOOKUP_ATTRIBUTE( _mvar_django__http__cookie_http_cookies.asObject0(), _python_str_plain_SimpleCookie ) );
        }
        else
        {
            frame_guard.setLineNumber( 21 );
            UPDATE_STRING_DICT1( _moduledict_django__http__cookie, (Nuitka_StringObject *)_python_str_plain_Morsel, LOOKUP_ATTRIBUTE( _mvar_django__http__cookie_http_cookies.asObject0(), _python_str_plain_Morsel ) );
            {
                frame_guard.setLineNumber( 23 );
                PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__http__cookie_http_cookies.asObject0(), _python_str_plain_SimpleCookie ) ).asObject() ) );
                PyObjectTemporary _python_tmp_class_dict( impl_class_1_SimpleCookie_of_module_django__http__cookie(  ) );
                PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__http__cookie___metaclass__.isInitialized( false ) ? _mvar_django__http__cookie___metaclass__.asObject0() : NULL ) ) ) );
                PyObject *_tmp_python_tmp_class;
                {
                    PyObjectTempKeeper0 call1;
                    PyObjectTempKeeper0 call3;
                    _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_SimpleCookie, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
                }
                PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
                UPDATE_STRING_DICT0( _moduledict_django__http__cookie, (Nuitka_StringObject *)_python_str_plain_SimpleCookie, _python_tmp_class.asObject() );
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

#if 0
    // TODO: Recognize the need for it
        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__http__cookie)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__http__cookie, (Nuitka_StringObject *)_python_str_plain_parse_cookie, MAKE_FUNCTION_function_2_parse_cookie_of_module_django__http__cookie(  ) );

   return MOD_RETURN_VALUE( _module_django__http__cookie );
}
