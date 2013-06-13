// Generated code for Python source for module 'django.utils.tzinfo'
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

// The _module_django__utils__tzinfo is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__utils__tzinfo;
PyDictObject *_moduledict_django__utils__tzinfo;

// The module level variables.
static PyObjectGlobalVariable_django__utils__tzinfo _mvar_django__utils__tzinfo_DEFAULT_LOCALE_ENCODING( &_module_django__utils__tzinfo, &_python_str_plain_DEFAULT_LOCALE_ENCODING );
static PyObjectGlobalVariable_django__utils__tzinfo _mvar_django__utils__tzinfo___metaclass__( &_module_django__utils__tzinfo, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__utils__tzinfo _mvar_django__utils__tzinfo_force_str( &_module_django__utils__tzinfo, &_python_str_plain_force_str );
static PyObjectGlobalVariable_django__utils__tzinfo _mvar_django__utils__tzinfo_force_text( &_module_django__utils__tzinfo, &_python_str_plain_force_text );
static PyObjectGlobalVariable_django__utils__tzinfo _mvar_django__utils__tzinfo_time( &_module_django__utils__tzinfo, &_python_str_plain_time );
static PyObjectGlobalVariable_django__utils__tzinfo _mvar_django__utils__tzinfo_timedelta( &_module_django__utils__tzinfo, &_python_str_plain_timedelta );
static PyObjectGlobalVariable_django__utils__tzinfo _mvar_django__utils__tzinfo_tzinfo( &_module_django__utils__tzinfo, &_python_str_plain_tzinfo );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_FixedOffset_of_module_django__utils__tzinfo(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_2_LocalTimezone_of_module_django__utils__tzinfo(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_FixedOffset_of_module_django__utils__tzinfo(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__tzinfo(  );


static PyObject *MAKE_FUNCTION_function_2___repr___of_class_1_FixedOffset_of_module_django__utils__tzinfo(  );


static PyObject *MAKE_FUNCTION_function_2___repr___of_class_2_LocalTimezone_of_module_django__utils__tzinfo(  );


static PyObject *MAKE_FUNCTION_function_3___getinitargs___of_class_1_FixedOffset_of_module_django__utils__tzinfo(  );


static PyObject *MAKE_FUNCTION_function_3___getinitargs___of_class_2_LocalTimezone_of_module_django__utils__tzinfo(  );


static PyObject *MAKE_FUNCTION_function_4_utcoffset_of_class_1_FixedOffset_of_module_django__utils__tzinfo(  );


static PyObject *MAKE_FUNCTION_function_4_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__tzinfo(  );


static PyObject *MAKE_FUNCTION_function_5_dst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo(  );


static PyObject *MAKE_FUNCTION_function_5_tzname_of_class_1_FixedOffset_of_module_django__utils__tzinfo(  );


static PyObject *MAKE_FUNCTION_function_6_dst_of_class_1_FixedOffset_of_module_django__utils__tzinfo(  );


static PyObject *MAKE_FUNCTION_function_6_tzname_of_class_2_LocalTimezone_of_module_django__utils__tzinfo(  );


static PyObject *MAKE_FUNCTION_function_7__isdst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_FixedOffset_of_module_django__utils__tzinfo(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var___repr__( _python_str_plain___repr__ );
    PyObjectLocalVariable _python_var___getinitargs__( _python_str_plain___getinitargs__ );
    PyObjectLocalVariable _python_var_utcoffset( _python_str_plain_utcoffset );
    PyObjectLocalVariable _python_var_tzname( _python_str_plain_tzname );
    PyObjectLocalVariable _python_var_dst( _python_str_plain_dst );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_tzinfo );
    _python_var___doc__.assign0( _python_unicode_digest_7163014309ef749ebddb2de0c461a1a0 );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_1_FixedOffset_of_module_django__utils__tzinfo(  ) );
    _python_var___repr__.assign1( MAKE_FUNCTION_function_2___repr___of_class_1_FixedOffset_of_module_django__utils__tzinfo(  ) );
    _python_var___getinitargs__.assign1( MAKE_FUNCTION_function_3___getinitargs___of_class_1_FixedOffset_of_module_django__utils__tzinfo(  ) );
    _python_var_utcoffset.assign1( MAKE_FUNCTION_function_4_utcoffset_of_class_1_FixedOffset_of_module_django__utils__tzinfo(  ) );
    _python_var_tzname.assign1( MAKE_FUNCTION_function_5_tzname_of_class_1_FixedOffset_of_module_django__utils__tzinfo(  ) );
    _python_var_dst.assign1( MAKE_FUNCTION_function_6_dst_of_class_1_FixedOffset_of_module_django__utils__tzinfo(  ) );
    return _python_var_dst.updateLocalsDict( _python_var_tzname.updateLocalsDict( _python_var_utcoffset.updateLocalsDict( _python_var___getinitargs__.updateLocalsDict( _python_var___repr__.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_1_FixedOffset_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_offset )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_offset( _python_str_plain_offset, _python_par_offset );
    PyObjectLocalVariable _python_var_sign( _python_str_plain_sign );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_1_FixedOffset_of_module_django__utils__tzinfo = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_1_FixedOffset_of_module_django__utils__tzinfo ) )
    {
        if ( frame_function_1___init___of_class_1_FixedOffset_of_module_django__utils__tzinfo )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_1_FixedOffset_of_module_django__utils__tzinfo" );
#endif
            Py_DECREF( frame_function_1___init___of_class_1_FixedOffset_of_module_django__utils__tzinfo );
        }

        frame_function_1___init___of_class_1_FixedOffset_of_module_django__utils__tzinfo = MAKE_FRAME( _codeobj_5de4e17717c36f844223e83fd7ae9e30, _module_django__utils__tzinfo );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_1_FixedOffset_of_module_django__utils__tzinfo );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_1_FixedOffset_of_module_django__utils__tzinfo ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 18 );
        {
            PyObjectTempKeeper0 isinstance4;
            if ( ( isinstance4.assign( _python_var_offset.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance4.asObject0(), _mvar_django__utils__tzinfo_timedelta.asObject0() ) ) )
        {
            frame_guard.setLineNumber( 19 );
            {
                    PyObject *tmp_identifier = _python_var_offset.asObject();
                    SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__FixedOffset__offset );
            }
            frame_guard.setLineNumber( 20 );
            _python_var_offset.assign1( BINARY_OPERATION( PyNumber_FloorDivide, PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__FixedOffset__offset ) ).asObject(), _python_str_plain_seconds ) ).asObject(), _python_int_pos_60 ) );
        }
        else
        {
            frame_guard.setLineNumber( 22 );
            {
                PyObjectTempKeeper0 call1;
                {
                    PyObjectTemporary tmp_identifier( ( call1.assign( _mvar_django__utils__tzinfo_timedelta.asObject0() ), CALL_FUNCTION( call1.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT1( _python_var_offset.asObject(), _python_str_plain_minutes ) ).asObject() ) ) );
                    SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain__FixedOffset__offset );
            }
            }
        }
        }
        frame_guard.setLineNumber( 24 );
        _python_var_sign.assign0( ( RICH_COMPARE_BOOL_LT( _python_var_offset.asObject(), _python_int_0 ) ? _python_unicode_chr_45 : _python_unicode_chr_43 ) );
        frame_guard.setLineNumber( 25 );
        {
            PyObjectTempKeeper0 make_tuple6;
            PyObjectTempKeeper1 make_tuple7;
            {
                PyObjectTemporary tmp_identifier( BINARY_OPERATION_REMAINDER( _python_unicode_digest_75108034431801c60651e6a6a592ee65, PyObjectTemporary( ( make_tuple6.assign( _python_var_sign.asObject() ), make_tuple7.assign( BINARY_OPERATION_DIV( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_abs ), _python_var_offset.asObject() ) ).asObject(), _python_float_60_0 ) ), MAKE_TUPLE3( make_tuple6.asObject0(), make_tuple7.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_abs ), _python_var_offset.asObject() ) ).asObject(), _python_int_pos_60 ) ).asObject() ) ) ).asObject() ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain__FixedOffset__name );
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
        frame_guard.getFrame0()->f_locals = _python_var_offset.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_sign.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_1_FixedOffset_of_module_django__utils__tzinfo )
        {
           Py_DECREF( frame_function_1___init___of_class_1_FixedOffset_of_module_django__utils__tzinfo );
           frame_function_1___init___of_class_1_FixedOffset_of_module_django__utils__tzinfo = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_1_FixedOffset_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_offset = NULL;
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
            if ( found == false && _python_str_plain_offset == key )
            {
                if (unlikely( _python_par_offset ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'offset'" );
                    goto error_exit;
                }

                _python_par_offset = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_offset, key ) )
            {
                if (unlikely( _python_par_offset ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'offset'" );
                    goto error_exit;
                }

                _python_par_offset = value;

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
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
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
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
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
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__init__() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
         if (unlikely( _python_par_offset != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'offset'" );
             goto error_exit;
         }

        _python_par_offset = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_1___init___of_class_1_FixedOffset_of_module_django__utils__tzinfo( self, _python_par_self, _python_par_offset );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_offset );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_1_FixedOffset_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1___init___of_class_1_FixedOffset_of_module_django__utils__tzinfo( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_1_FixedOffset_of_module_django__utils__tzinfo( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___repr___of_class_1_FixedOffset_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_2___repr___of_class_1_FixedOffset_of_module_django__utils__tzinfo = NULL;

    if ( isFrameUnusable( frame_function_2___repr___of_class_1_FixedOffset_of_module_django__utils__tzinfo ) )
    {
        if ( frame_function_2___repr___of_class_1_FixedOffset_of_module_django__utils__tzinfo )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2___repr___of_class_1_FixedOffset_of_module_django__utils__tzinfo" );
#endif
            Py_DECREF( frame_function_2___repr___of_class_1_FixedOffset_of_module_django__utils__tzinfo );
        }

        frame_function_2___repr___of_class_1_FixedOffset_of_module_django__utils__tzinfo = MAKE_FRAME( _codeobj_54f9a346f86b09db1e2d70ec8e1313a3, _module_django__utils__tzinfo );
    }

    FrameGuard frame_guard( frame_function_2___repr___of_class_1_FixedOffset_of_module_django__utils__tzinfo );
    try
    {
        assert( Py_REFCNT( frame_function_2___repr___of_class_1_FixedOffset_of_module_django__utils__tzinfo ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 28 );
        return LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__FixedOffset__name );
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

        if ( frame_guard.getFrame0() == frame_function_2___repr___of_class_1_FixedOffset_of_module_django__utils__tzinfo )
        {
           Py_DECREF( frame_function_2___repr___of_class_1_FixedOffset_of_module_django__utils__tzinfo );
           frame_function_2___repr___of_class_1_FixedOffset_of_module_django__utils__tzinfo = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2___repr___of_class_1_FixedOffset_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__repr__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__repr__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__repr__() got multiple values for keyword argument 'self'" );
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
                   "__repr__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__repr__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__repr__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__repr__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__repr__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__repr__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__repr__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__repr__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__repr__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__repr__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__repr__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__repr__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__repr__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__repr__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2___repr___of_class_1_FixedOffset_of_module_django__utils__tzinfo( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2___repr___of_class_1_FixedOffset_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2___repr___of_class_1_FixedOffset_of_module_django__utils__tzinfo( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___repr___of_class_1_FixedOffset_of_module_django__utils__tzinfo( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3___getinitargs___of_class_1_FixedOffset_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_3___getinitargs___of_class_1_FixedOffset_of_module_django__utils__tzinfo = NULL;

    if ( isFrameUnusable( frame_function_3___getinitargs___of_class_1_FixedOffset_of_module_django__utils__tzinfo ) )
    {
        if ( frame_function_3___getinitargs___of_class_1_FixedOffset_of_module_django__utils__tzinfo )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3___getinitargs___of_class_1_FixedOffset_of_module_django__utils__tzinfo" );
#endif
            Py_DECREF( frame_function_3___getinitargs___of_class_1_FixedOffset_of_module_django__utils__tzinfo );
        }

        frame_function_3___getinitargs___of_class_1_FixedOffset_of_module_django__utils__tzinfo = MAKE_FRAME( _codeobj_c6ee00a1203ab811d54d3859097a4515, _module_django__utils__tzinfo );
    }

    FrameGuard frame_guard( frame_function_3___getinitargs___of_class_1_FixedOffset_of_module_django__utils__tzinfo );
    try
    {
        assert( Py_REFCNT( frame_function_3___getinitargs___of_class_1_FixedOffset_of_module_django__utils__tzinfo ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 31 );
        return MAKE_TUPLE1( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__FixedOffset__offset ) ).asObject() );
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

        if ( frame_guard.getFrame0() == frame_function_3___getinitargs___of_class_1_FixedOffset_of_module_django__utils__tzinfo )
        {
           Py_DECREF( frame_function_3___getinitargs___of_class_1_FixedOffset_of_module_django__utils__tzinfo );
           frame_function_3___getinitargs___of_class_1_FixedOffset_of_module_django__utils__tzinfo = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3___getinitargs___of_class_1_FixedOffset_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__getinitargs__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__getinitargs__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__getinitargs__() got multiple values for keyword argument 'self'" );
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
                   "__getinitargs__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__getinitargs__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__getinitargs__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__getinitargs__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__getinitargs__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__getinitargs__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__getinitargs__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__getinitargs__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__getinitargs__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__getinitargs__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__getinitargs__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__getinitargs__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__getinitargs__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__getinitargs__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_3___getinitargs___of_class_1_FixedOffset_of_module_django__utils__tzinfo( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3___getinitargs___of_class_1_FixedOffset_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3___getinitargs___of_class_1_FixedOffset_of_module_django__utils__tzinfo( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3___getinitargs___of_class_1_FixedOffset_of_module_django__utils__tzinfo( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_utcoffset_of_class_1_FixedOffset_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_dt )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_dt( _python_str_plain_dt, _python_par_dt );

    // Actual function code.
    static PyFrameObject *frame_function_4_utcoffset_of_class_1_FixedOffset_of_module_django__utils__tzinfo = NULL;

    if ( isFrameUnusable( frame_function_4_utcoffset_of_class_1_FixedOffset_of_module_django__utils__tzinfo ) )
    {
        if ( frame_function_4_utcoffset_of_class_1_FixedOffset_of_module_django__utils__tzinfo )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_utcoffset_of_class_1_FixedOffset_of_module_django__utils__tzinfo" );
#endif
            Py_DECREF( frame_function_4_utcoffset_of_class_1_FixedOffset_of_module_django__utils__tzinfo );
        }

        frame_function_4_utcoffset_of_class_1_FixedOffset_of_module_django__utils__tzinfo = MAKE_FRAME( _codeobj_18648a243229d6846b9d2749549968b9, _module_django__utils__tzinfo );
    }

    FrameGuard frame_guard( frame_function_4_utcoffset_of_class_1_FixedOffset_of_module_django__utils__tzinfo );
    try
    {
        assert( Py_REFCNT( frame_function_4_utcoffset_of_class_1_FixedOffset_of_module_django__utils__tzinfo ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 34 );
        return LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__FixedOffset__offset );
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
        frame_guard.getFrame0()->f_locals = _python_var_dt.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_4_utcoffset_of_class_1_FixedOffset_of_module_django__utils__tzinfo )
        {
           Py_DECREF( frame_function_4_utcoffset_of_class_1_FixedOffset_of_module_django__utils__tzinfo );
           frame_function_4_utcoffset_of_class_1_FixedOffset_of_module_django__utils__tzinfo = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_utcoffset_of_class_1_FixedOffset_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_dt = NULL;
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
                PyErr_Format( PyExc_TypeError, "utcoffset() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "utcoffset() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_dt == key )
            {
                if (unlikely( _python_par_dt ))
                {
                    PyErr_Format( PyExc_TypeError, "utcoffset() got multiple values for keyword argument 'dt'" );
                    goto error_exit;
                }

                _python_par_dt = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "utcoffset() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_dt, key ) )
            {
                if (unlikely( _python_par_dt ))
                {
                    PyErr_Format( PyExc_TypeError, "utcoffset() got multiple values for keyword argument 'dt'" );
                    goto error_exit;
                }

                _python_par_dt = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "utcoffset() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "utcoffset() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "utcoffset() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "utcoffset() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "utcoffset() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "utcoffset() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "utcoffset() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "utcoffset() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "utcoffset() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "utcoffset() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "utcoffset() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "utcoffset() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "utcoffset() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "utcoffset() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_dt != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "utcoffset() got multiple values for keyword argument 'dt'" );
             goto error_exit;
         }

        _python_par_dt = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_4_utcoffset_of_class_1_FixedOffset_of_module_django__utils__tzinfo( self, _python_par_self, _python_par_dt );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_dt );

    return NULL;
}

static PyObject *dparse_function_4_utcoffset_of_class_1_FixedOffset_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_4_utcoffset_of_class_1_FixedOffset_of_module_django__utils__tzinfo( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_utcoffset_of_class_1_FixedOffset_of_module_django__utils__tzinfo( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_tzname_of_class_1_FixedOffset_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_dt )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_dt( _python_str_plain_dt, _python_par_dt );

    // Actual function code.
    static PyFrameObject *frame_function_5_tzname_of_class_1_FixedOffset_of_module_django__utils__tzinfo = NULL;

    if ( isFrameUnusable( frame_function_5_tzname_of_class_1_FixedOffset_of_module_django__utils__tzinfo ) )
    {
        if ( frame_function_5_tzname_of_class_1_FixedOffset_of_module_django__utils__tzinfo )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_tzname_of_class_1_FixedOffset_of_module_django__utils__tzinfo" );
#endif
            Py_DECREF( frame_function_5_tzname_of_class_1_FixedOffset_of_module_django__utils__tzinfo );
        }

        frame_function_5_tzname_of_class_1_FixedOffset_of_module_django__utils__tzinfo = MAKE_FRAME( _codeobj_f31c4bf1c45ae64f005c170b2b2e917a, _module_django__utils__tzinfo );
    }

    FrameGuard frame_guard( frame_function_5_tzname_of_class_1_FixedOffset_of_module_django__utils__tzinfo );
    try
    {
        assert( Py_REFCNT( frame_function_5_tzname_of_class_1_FixedOffset_of_module_django__utils__tzinfo ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 37 );
        return LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__FixedOffset__name );
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
        frame_guard.getFrame0()->f_locals = _python_var_dt.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_5_tzname_of_class_1_FixedOffset_of_module_django__utils__tzinfo )
        {
           Py_DECREF( frame_function_5_tzname_of_class_1_FixedOffset_of_module_django__utils__tzinfo );
           frame_function_5_tzname_of_class_1_FixedOffset_of_module_django__utils__tzinfo = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5_tzname_of_class_1_FixedOffset_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_dt = NULL;
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
                PyErr_Format( PyExc_TypeError, "tzname() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "tzname() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_dt == key )
            {
                if (unlikely( _python_par_dt ))
                {
                    PyErr_Format( PyExc_TypeError, "tzname() got multiple values for keyword argument 'dt'" );
                    goto error_exit;
                }

                _python_par_dt = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "tzname() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_dt, key ) )
            {
                if (unlikely( _python_par_dt ))
                {
                    PyErr_Format( PyExc_TypeError, "tzname() got multiple values for keyword argument 'dt'" );
                    goto error_exit;
                }

                _python_par_dt = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "tzname() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "tzname() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "tzname() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "tzname() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "tzname() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "tzname() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "tzname() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "tzname() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "tzname() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "tzname() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "tzname() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "tzname() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "tzname() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "tzname() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_dt != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "tzname() got multiple values for keyword argument 'dt'" );
             goto error_exit;
         }

        _python_par_dt = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_5_tzname_of_class_1_FixedOffset_of_module_django__utils__tzinfo( self, _python_par_self, _python_par_dt );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_dt );

    return NULL;
}

static PyObject *dparse_function_5_tzname_of_class_1_FixedOffset_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_5_tzname_of_class_1_FixedOffset_of_module_django__utils__tzinfo( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_tzname_of_class_1_FixedOffset_of_module_django__utils__tzinfo( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_dst_of_class_1_FixedOffset_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_dt )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_dt( _python_str_plain_dt, _python_par_dt );

    // Actual function code.
    static PyFrameObject *frame_function_6_dst_of_class_1_FixedOffset_of_module_django__utils__tzinfo = NULL;

    if ( isFrameUnusable( frame_function_6_dst_of_class_1_FixedOffset_of_module_django__utils__tzinfo ) )
    {
        if ( frame_function_6_dst_of_class_1_FixedOffset_of_module_django__utils__tzinfo )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6_dst_of_class_1_FixedOffset_of_module_django__utils__tzinfo" );
#endif
            Py_DECREF( frame_function_6_dst_of_class_1_FixedOffset_of_module_django__utils__tzinfo );
        }

        frame_function_6_dst_of_class_1_FixedOffset_of_module_django__utils__tzinfo = MAKE_FRAME( _codeobj_d70b8d7c25fa47758c107713c1295beb, _module_django__utils__tzinfo );
    }

    FrameGuard frame_guard( frame_function_6_dst_of_class_1_FixedOffset_of_module_django__utils__tzinfo );
    try
    {
        assert( Py_REFCNT( frame_function_6_dst_of_class_1_FixedOffset_of_module_django__utils__tzinfo ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 40 );
        return CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__tzinfo_timedelta.asObject0(), _python_int_0 );
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
        frame_guard.getFrame0()->f_locals = _python_var_dt.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_6_dst_of_class_1_FixedOffset_of_module_django__utils__tzinfo )
        {
           Py_DECREF( frame_function_6_dst_of_class_1_FixedOffset_of_module_django__utils__tzinfo );
           frame_function_6_dst_of_class_1_FixedOffset_of_module_django__utils__tzinfo = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_6_dst_of_class_1_FixedOffset_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_dt = NULL;
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
                PyErr_Format( PyExc_TypeError, "dst() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "dst() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_dt == key )
            {
                if (unlikely( _python_par_dt ))
                {
                    PyErr_Format( PyExc_TypeError, "dst() got multiple values for keyword argument 'dt'" );
                    goto error_exit;
                }

                _python_par_dt = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "dst() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_dt, key ) )
            {
                if (unlikely( _python_par_dt ))
                {
                    PyErr_Format( PyExc_TypeError, "dst() got multiple values for keyword argument 'dt'" );
                    goto error_exit;
                }

                _python_par_dt = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "dst() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "dst() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "dst() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "dst() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "dst() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "dst() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "dst() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "dst() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "dst() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "dst() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "dst() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "dst() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "dst() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "dst() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_dt != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "dst() got multiple values for keyword argument 'dt'" );
             goto error_exit;
         }

        _python_par_dt = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_6_dst_of_class_1_FixedOffset_of_module_django__utils__tzinfo( self, _python_par_self, _python_par_dt );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_dt );

    return NULL;
}

static PyObject *dparse_function_6_dst_of_class_1_FixedOffset_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_6_dst_of_class_1_FixedOffset_of_module_django__utils__tzinfo( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_dst_of_class_1_FixedOffset_of_module_django__utils__tzinfo( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_2_LocalTimezone_of_module_django__utils__tzinfo(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var___repr__( _python_str_plain___repr__ );
    PyObjectLocalVariable _python_var___getinitargs__( _python_str_plain___getinitargs__ );
    PyObjectLocalVariable _python_var_utcoffset( _python_str_plain_utcoffset );
    PyObjectLocalVariable _python_var_dst( _python_str_plain_dst );
    PyObjectLocalVariable _python_var_tzname( _python_str_plain_tzname );
    PyObjectLocalVariable _python_var__isdst( _python_str_plain__isdst );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_tzinfo );
    _python_var___doc__.assign0( _python_unicode_digest_5eff6b8a65b67900e4d2f3ff0aa2c7ac );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__tzinfo(  ) );
    _python_var___repr__.assign1( MAKE_FUNCTION_function_2___repr___of_class_2_LocalTimezone_of_module_django__utils__tzinfo(  ) );
    _python_var___getinitargs__.assign1( MAKE_FUNCTION_function_3___getinitargs___of_class_2_LocalTimezone_of_module_django__utils__tzinfo(  ) );
    _python_var_utcoffset.assign1( MAKE_FUNCTION_function_4_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__tzinfo(  ) );
    _python_var_dst.assign1( MAKE_FUNCTION_function_5_dst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo(  ) );
    _python_var_tzname.assign1( MAKE_FUNCTION_function_6_tzname_of_class_2_LocalTimezone_of_module_django__utils__tzinfo(  ) );
    _python_var__isdst.assign1( MAKE_FUNCTION_function_7__isdst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo(  ) );
    return _python_var__isdst.updateLocalsDict( _python_var_tzname.updateLocalsDict( _python_var_dst.updateLocalsDict( _python_var_utcoffset.updateLocalsDict( _python_var___getinitargs__.updateLocalsDict( _python_var___repr__.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_dt )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_dt( _python_str_plain_dt, _python_par_dt );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__tzinfo = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__tzinfo ) )
    {
        if ( frame_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__tzinfo )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_2_LocalTimezone_of_module_django__utils__tzinfo" );
#endif
            Py_DECREF( frame_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__tzinfo );
        }

        frame_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__tzinfo = MAKE_FRAME( _codeobj_4151aac6a7c24aa2b3cb038b6a6ba4fd, _module_django__utils__tzinfo );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__tzinfo );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__tzinfo ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 51 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__tzinfo_tzinfo.asObject0(), _python_str_plain___init__ ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_self.asObject() ) ) );
        }
        frame_guard.setLineNumber( 52 );
        {
                PyObject *tmp_identifier = _python_var_dt.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain__LocalTimezone__dt );
        }
        frame_guard.setLineNumber( 53 );
        {
            PyObjectTempKeeper1 call3;
            {
                PyObjectTemporary tmp_identifier( ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_tzname ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_dt.asObject() ) ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain__tzname );
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
        frame_guard.getFrame0()->f_locals = _python_var_dt.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__tzinfo )
        {
           Py_DECREF( frame_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__tzinfo );
           frame_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__tzinfo = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_dt = NULL;
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
            if ( found == false && _python_str_plain_dt == key )
            {
                if (unlikely( _python_par_dt ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'dt'" );
                    goto error_exit;
                }

                _python_par_dt = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_dt, key ) )
            {
                if (unlikely( _python_par_dt ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'dt'" );
                    goto error_exit;
                }

                _python_par_dt = value;

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
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
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
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
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
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__init__() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
         if (unlikely( _python_par_dt != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'dt'" );
             goto error_exit;
         }

        _python_par_dt = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__tzinfo( self, _python_par_self, _python_par_dt );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_dt );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__tzinfo( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__tzinfo( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___repr___of_class_2_LocalTimezone_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_2___repr___of_class_2_LocalTimezone_of_module_django__utils__tzinfo = NULL;

    if ( isFrameUnusable( frame_function_2___repr___of_class_2_LocalTimezone_of_module_django__utils__tzinfo ) )
    {
        if ( frame_function_2___repr___of_class_2_LocalTimezone_of_module_django__utils__tzinfo )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2___repr___of_class_2_LocalTimezone_of_module_django__utils__tzinfo" );
#endif
            Py_DECREF( frame_function_2___repr___of_class_2_LocalTimezone_of_module_django__utils__tzinfo );
        }

        frame_function_2___repr___of_class_2_LocalTimezone_of_module_django__utils__tzinfo = MAKE_FRAME( _codeobj_37374ad5e386bc9d483db7d7512c48ba, _module_django__utils__tzinfo );
    }

    FrameGuard frame_guard( frame_function_2___repr___of_class_2_LocalTimezone_of_module_django__utils__tzinfo );
    try
    {
        assert( Py_REFCNT( frame_function_2___repr___of_class_2_LocalTimezone_of_module_django__utils__tzinfo ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 56 );
        {
            PyObjectTempKeeper0 call1;
            return ( call1.assign( _mvar_django__utils__tzinfo_force_str.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__tzname ) ).asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_2___repr___of_class_2_LocalTimezone_of_module_django__utils__tzinfo )
        {
           Py_DECREF( frame_function_2___repr___of_class_2_LocalTimezone_of_module_django__utils__tzinfo );
           frame_function_2___repr___of_class_2_LocalTimezone_of_module_django__utils__tzinfo = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2___repr___of_class_2_LocalTimezone_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__repr__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__repr__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__repr__() got multiple values for keyword argument 'self'" );
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
                   "__repr__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__repr__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__repr__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__repr__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__repr__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__repr__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__repr__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__repr__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__repr__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__repr__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__repr__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__repr__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__repr__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__repr__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2___repr___of_class_2_LocalTimezone_of_module_django__utils__tzinfo( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2___repr___of_class_2_LocalTimezone_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2___repr___of_class_2_LocalTimezone_of_module_django__utils__tzinfo( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___repr___of_class_2_LocalTimezone_of_module_django__utils__tzinfo( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3___getinitargs___of_class_2_LocalTimezone_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_3___getinitargs___of_class_2_LocalTimezone_of_module_django__utils__tzinfo = NULL;

    if ( isFrameUnusable( frame_function_3___getinitargs___of_class_2_LocalTimezone_of_module_django__utils__tzinfo ) )
    {
        if ( frame_function_3___getinitargs___of_class_2_LocalTimezone_of_module_django__utils__tzinfo )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3___getinitargs___of_class_2_LocalTimezone_of_module_django__utils__tzinfo" );
#endif
            Py_DECREF( frame_function_3___getinitargs___of_class_2_LocalTimezone_of_module_django__utils__tzinfo );
        }

        frame_function_3___getinitargs___of_class_2_LocalTimezone_of_module_django__utils__tzinfo = MAKE_FRAME( _codeobj_21530e965d6adc4e53d8b375250a8c4b, _module_django__utils__tzinfo );
    }

    FrameGuard frame_guard( frame_function_3___getinitargs___of_class_2_LocalTimezone_of_module_django__utils__tzinfo );
    try
    {
        assert( Py_REFCNT( frame_function_3___getinitargs___of_class_2_LocalTimezone_of_module_django__utils__tzinfo ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 59 );
        return MAKE_TUPLE1( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__LocalTimezone__dt ) ).asObject() );
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

        if ( frame_guard.getFrame0() == frame_function_3___getinitargs___of_class_2_LocalTimezone_of_module_django__utils__tzinfo )
        {
           Py_DECREF( frame_function_3___getinitargs___of_class_2_LocalTimezone_of_module_django__utils__tzinfo );
           frame_function_3___getinitargs___of_class_2_LocalTimezone_of_module_django__utils__tzinfo = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3___getinitargs___of_class_2_LocalTimezone_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__getinitargs__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__getinitargs__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__getinitargs__() got multiple values for keyword argument 'self'" );
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
                   "__getinitargs__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__getinitargs__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__getinitargs__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__getinitargs__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__getinitargs__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__getinitargs__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__getinitargs__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__getinitargs__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__getinitargs__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__getinitargs__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__getinitargs__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__getinitargs__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__getinitargs__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__getinitargs__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_3___getinitargs___of_class_2_LocalTimezone_of_module_django__utils__tzinfo( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3___getinitargs___of_class_2_LocalTimezone_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3___getinitargs___of_class_2_LocalTimezone_of_module_django__utils__tzinfo( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3___getinitargs___of_class_2_LocalTimezone_of_module_django__utils__tzinfo( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_dt )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_dt( _python_str_plain_dt, _python_par_dt );

    // Actual function code.
    static PyFrameObject *frame_function_4_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__tzinfo = NULL;

    if ( isFrameUnusable( frame_function_4_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__tzinfo ) )
    {
        if ( frame_function_4_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__tzinfo )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__tzinfo" );
#endif
            Py_DECREF( frame_function_4_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__tzinfo );
        }

        frame_function_4_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__tzinfo = MAKE_FRAME( _codeobj_09a2a783db51b12e0847b89a4fe6c440, _module_django__utils__tzinfo );
    }

    FrameGuard frame_guard( frame_function_4_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__tzinfo );
    try
    {
        assert( Py_REFCNT( frame_function_4_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__tzinfo ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 62 );
        {
            PyObjectTempKeeper1 call7;
            if ( CHECK_IF_TRUE( PyObjectTemporary( ( call7.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__isdst ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _python_var_dt.asObject() ) ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 63 );
            {
                PyObjectTempKeeper0 call1;
                return ( call1.assign( _mvar_django__utils__tzinfo_timedelta.asObject0() ), CALL_FUNCTION( call1.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT1( PyObjectTemporary( UNARY_OPERATION( PyNumber_Negative, PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__tzinfo_time.asObject0(), _python_str_plain_altzone ) ).asObject() ) ).asObject(), _python_str_plain_seconds ) ).asObject() ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 65 );
            {
                PyObjectTempKeeper0 call4;
                return ( call4.assign( _mvar_django__utils__tzinfo_timedelta.asObject0() ), CALL_FUNCTION( call4.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT1( PyObjectTemporary( UNARY_OPERATION( PyNumber_Negative, PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__tzinfo_time.asObject0(), _python_str_plain_timezone ) ).asObject() ) ).asObject(), _python_str_plain_seconds ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_dt.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_4_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__tzinfo )
        {
           Py_DECREF( frame_function_4_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__tzinfo );
           frame_function_4_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__tzinfo = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_dt = NULL;
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
                PyErr_Format( PyExc_TypeError, "utcoffset() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "utcoffset() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_dt == key )
            {
                if (unlikely( _python_par_dt ))
                {
                    PyErr_Format( PyExc_TypeError, "utcoffset() got multiple values for keyword argument 'dt'" );
                    goto error_exit;
                }

                _python_par_dt = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "utcoffset() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_dt, key ) )
            {
                if (unlikely( _python_par_dt ))
                {
                    PyErr_Format( PyExc_TypeError, "utcoffset() got multiple values for keyword argument 'dt'" );
                    goto error_exit;
                }

                _python_par_dt = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "utcoffset() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "utcoffset() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "utcoffset() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "utcoffset() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "utcoffset() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "utcoffset() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "utcoffset() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "utcoffset() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "utcoffset() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "utcoffset() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "utcoffset() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "utcoffset() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "utcoffset() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "utcoffset() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_dt != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "utcoffset() got multiple values for keyword argument 'dt'" );
             goto error_exit;
         }

        _python_par_dt = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_4_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__tzinfo( self, _python_par_self, _python_par_dt );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_dt );

    return NULL;
}

static PyObject *dparse_function_4_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_4_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__tzinfo( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__tzinfo( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_dst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_dt )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_dt( _python_str_plain_dt, _python_par_dt );

    // Actual function code.
    static PyFrameObject *frame_function_5_dst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo = NULL;

    if ( isFrameUnusable( frame_function_5_dst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo ) )
    {
        if ( frame_function_5_dst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_dst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo" );
#endif
            Py_DECREF( frame_function_5_dst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo );
        }

        frame_function_5_dst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo = MAKE_FRAME( _codeobj_e95d74dd62ca50b194df3b253ffcc3ae, _module_django__utils__tzinfo );
    }

    FrameGuard frame_guard( frame_function_5_dst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo );
    try
    {
        assert( Py_REFCNT( frame_function_5_dst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 68 );
        {
            PyObjectTempKeeper1 call9;
            if ( CHECK_IF_TRUE( PyObjectTemporary( ( call9.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__isdst ) ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_var_dt.asObject() ) ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 69 );
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call4;
                PyObjectTempKeeper1 op7;
                return ( op7.assign( ( call1.assign( _mvar_django__utils__tzinfo_timedelta.asObject0() ), CALL_FUNCTION( call1.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT1( PyObjectTemporary( UNARY_OPERATION( PyNumber_Negative, PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__tzinfo_time.asObject0(), _python_str_plain_altzone ) ).asObject() ) ).asObject(), _python_str_plain_seconds ) ).asObject() ) ) ), BINARY_OPERATION_SUB( op7.asObject0(), PyObjectTemporary( ( call4.assign( _mvar_django__utils__tzinfo_timedelta.asObject0() ), CALL_FUNCTION( call4.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT1( PyObjectTemporary( UNARY_OPERATION( PyNumber_Negative, PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__tzinfo_time.asObject0(), _python_str_plain_timezone ) ).asObject() ) ).asObject(), _python_str_plain_seconds ) ).asObject() ) ) ).asObject() ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 71 );
            return CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__tzinfo_timedelta.asObject0(), _python_int_0 );
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
        frame_guard.getFrame0()->f_locals = _python_var_dt.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_5_dst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo )
        {
           Py_DECREF( frame_function_5_dst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo );
           frame_function_5_dst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5_dst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_dt = NULL;
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
                PyErr_Format( PyExc_TypeError, "dst() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "dst() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_dt == key )
            {
                if (unlikely( _python_par_dt ))
                {
                    PyErr_Format( PyExc_TypeError, "dst() got multiple values for keyword argument 'dt'" );
                    goto error_exit;
                }

                _python_par_dt = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "dst() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_dt, key ) )
            {
                if (unlikely( _python_par_dt ))
                {
                    PyErr_Format( PyExc_TypeError, "dst() got multiple values for keyword argument 'dt'" );
                    goto error_exit;
                }

                _python_par_dt = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "dst() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "dst() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "dst() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "dst() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "dst() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "dst() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "dst() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "dst() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "dst() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "dst() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "dst() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "dst() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "dst() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "dst() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_dt != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "dst() got multiple values for keyword argument 'dt'" );
             goto error_exit;
         }

        _python_par_dt = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_5_dst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo( self, _python_par_self, _python_par_dt );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_dt );

    return NULL;
}

static PyObject *dparse_function_5_dst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_5_dst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_dst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_tzname_of_class_2_LocalTimezone_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_dt )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_dt( _python_str_plain_dt, _python_par_dt );
    PyObjectLocalVariable _python_var_is_dst( _python_str_plain_is_dst );

    // Actual function code.
    static PyFrameObject *frame_function_6_tzname_of_class_2_LocalTimezone_of_module_django__utils__tzinfo = NULL;

    if ( isFrameUnusable( frame_function_6_tzname_of_class_2_LocalTimezone_of_module_django__utils__tzinfo ) )
    {
        if ( frame_function_6_tzname_of_class_2_LocalTimezone_of_module_django__utils__tzinfo )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6_tzname_of_class_2_LocalTimezone_of_module_django__utils__tzinfo" );
#endif
            Py_DECREF( frame_function_6_tzname_of_class_2_LocalTimezone_of_module_django__utils__tzinfo );
        }

        frame_function_6_tzname_of_class_2_LocalTimezone_of_module_django__utils__tzinfo = MAKE_FRAME( _codeobj_fee35349ffb22fac965908fb9bbc20b8, _module_django__utils__tzinfo );
    }

    FrameGuard frame_guard( frame_function_6_tzname_of_class_2_LocalTimezone_of_module_django__utils__tzinfo );
    try
    {
        assert( Py_REFCNT( frame_function_6_tzname_of_class_2_LocalTimezone_of_module_django__utils__tzinfo ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 74 );
        {
            PyObjectTempKeeper1 call1;
            _python_var_is_dst.assign1( ( ( _python_var_dt.asObject() == Py_None ) ? INCREASE_REFCOUNT( Py_False ) : ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__isdst ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_dt.asObject() ) ) ) );
        }
        frame_guard.setLineNumber( 75 );
        try
        {
            frame_guard.setLineNumber( 76 );
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper1 call6;
                PyObjectTempKeeper1 subscr3;
                return ( call5.assign( _mvar_django__utils__tzinfo_force_text.asObject0() ), call6.assign( ( subscr3.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__tzinfo_time.asObject0(), _python_str_plain_tzname ) ), LOOKUP_SUBSCRIPT( subscr3.asObject0(), _python_var_is_dst.asObject() ) ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), call6.asObject0(), _mvar_django__utils__tzinfo_DEFAULT_LOCALE_ENCODING.asObject0() ) );
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

            if ( _exception.matches( PyExc_UnicodeDecodeError ) )
            {
                frame_guard.detachFrame();
                return INCREASE_REFCOUNT( Py_None );
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
        frame_guard.getFrame0()->f_locals = _python_var_dt.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_is_dst.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_6_tzname_of_class_2_LocalTimezone_of_module_django__utils__tzinfo )
        {
           Py_DECREF( frame_function_6_tzname_of_class_2_LocalTimezone_of_module_django__utils__tzinfo );
           frame_function_6_tzname_of_class_2_LocalTimezone_of_module_django__utils__tzinfo = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_6_tzname_of_class_2_LocalTimezone_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_dt = NULL;
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
                PyErr_Format( PyExc_TypeError, "tzname() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "tzname() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_dt == key )
            {
                if (unlikely( _python_par_dt ))
                {
                    PyErr_Format( PyExc_TypeError, "tzname() got multiple values for keyword argument 'dt'" );
                    goto error_exit;
                }

                _python_par_dt = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "tzname() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_dt, key ) )
            {
                if (unlikely( _python_par_dt ))
                {
                    PyErr_Format( PyExc_TypeError, "tzname() got multiple values for keyword argument 'dt'" );
                    goto error_exit;
                }

                _python_par_dt = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "tzname() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "tzname() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "tzname() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "tzname() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "tzname() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "tzname() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "tzname() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "tzname() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "tzname() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "tzname() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "tzname() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "tzname() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "tzname() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "tzname() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_dt != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "tzname() got multiple values for keyword argument 'dt'" );
             goto error_exit;
         }

        _python_par_dt = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_6_tzname_of_class_2_LocalTimezone_of_module_django__utils__tzinfo( self, _python_par_self, _python_par_dt );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_dt );

    return NULL;
}

static PyObject *dparse_function_6_tzname_of_class_2_LocalTimezone_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_6_tzname_of_class_2_LocalTimezone_of_module_django__utils__tzinfo( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_tzname_of_class_2_LocalTimezone_of_module_django__utils__tzinfo( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7__isdst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_dt )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_dt( _python_str_plain_dt, _python_par_dt );
    PyObjectLocalVariable _python_var_tt( _python_str_plain_tt );
    PyObjectLocalVariable _python_var_stamp( _python_str_plain_stamp );

    // Actual function code.
    static PyFrameObject *frame_function_7__isdst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo = NULL;

    if ( isFrameUnusable( frame_function_7__isdst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo ) )
    {
        if ( frame_function_7__isdst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_7__isdst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo" );
#endif
            Py_DECREF( frame_function_7__isdst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo );
        }

        frame_function_7__isdst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo = MAKE_FRAME( _codeobj_10582e4fc26c7f765cd85041c7f4b33a, _module_django__utils__tzinfo );
    }

    FrameGuard frame_guard( frame_function_7__isdst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo );
    try
    {
        assert( Py_REFCNT( frame_function_7__isdst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 81 );
        {
            PyObjectTempKeeper1 make_tuple1;
            PyObjectTempKeeper1 make_tuple2;
            PyObjectTempKeeper1 make_tuple3;
            PyObjectTempKeeper1 make_tuple4;
            PyObjectTempKeeper1 make_tuple5;
            PyObjectTempKeeper1 make_tuple6;
            _python_var_tt.assign1( ( make_tuple1.assign( LOOKUP_ATTRIBUTE( _python_var_dt.asObject(), _python_str_plain_year ) ), make_tuple2.assign( LOOKUP_ATTRIBUTE( _python_var_dt.asObject(), _python_str_plain_month ) ), make_tuple3.assign( LOOKUP_ATTRIBUTE( _python_var_dt.asObject(), _python_str_plain_day ) ), make_tuple4.assign( LOOKUP_ATTRIBUTE( _python_var_dt.asObject(), _python_str_plain_hour ) ), make_tuple5.assign( LOOKUP_ATTRIBUTE( _python_var_dt.asObject(), _python_str_plain_minute ) ), make_tuple6.assign( LOOKUP_ATTRIBUTE( _python_var_dt.asObject(), _python_str_plain_second ) ), MAKE_TUPLE9( make_tuple1.asObject0(), make_tuple2.asObject0(), make_tuple3.asObject0(), make_tuple4.asObject0(), make_tuple5.asObject0(), make_tuple6.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_dt.asObject(), _python_str_plain_weekday ) ).asObject() ) ).asObject(), _python_int_0, _python_int_0 ) ) );
        }
        frame_guard.setLineNumber( 84 );
        try
        {
            frame_guard.setLineNumber( 85 );
            {
                PyObjectTempKeeper1 call12;
                _python_var_stamp.assign1( ( call12.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__tzinfo_time.asObject0(), _python_str_plain_mktime ) ), CALL_FUNCTION_WITH_ARGS( call12.asObject0(), _python_var_tt.asObject() ) ) );
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

            if ( _exception.matches( PyExc_OverflowError ) || _exception.matches( PyExc_ValueError ) )
            {
                frame_guard.detachFrame();
                frame_guard.setLineNumber( 97 );
                _python_var_tt.assign1( BINARY_OPERATION_ADD( _python_tuple_int_pos_2037_tuple, PyObjectTemporary( LOOKUP_INDEX_SLICE( _python_var_tt.asObject(), 1, PY_SSIZE_T_MAX ) ).asObject() ) );
                frame_guard.setLineNumber( 98 );
                {
                    PyObjectTempKeeper1 call10;
                    _python_var_stamp.assign1( ( call10.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__tzinfo_time.asObject0(), _python_str_plain_mktime ) ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), _python_var_tt.asObject() ) ) );
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
        frame_guard.setLineNumber( 99 );
        {
            PyObjectTempKeeper1 call14;
            _python_var_tt.assign1( ( call14.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__tzinfo_time.asObject0(), _python_str_plain_localtime ) ), CALL_FUNCTION_WITH_ARGS( call14.asObject0(), _python_var_stamp.asObject() ) ) );
        }
        frame_guard.setLineNumber( 100 );
        return RICH_COMPARE_GT( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_tt.asObject(), _python_str_plain_tm_isdst ) ).asObject(), _python_int_0 );
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
        frame_guard.getFrame0()->f_locals = _python_var_dt.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_stamp.updateLocalsDict( _python_var_tt.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_7__isdst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo )
        {
           Py_DECREF( frame_function_7__isdst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo );
           frame_function_7__isdst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_7__isdst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_dt = NULL;
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
                PyErr_Format( PyExc_TypeError, "_isdst() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_isdst() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_dt == key )
            {
                if (unlikely( _python_par_dt ))
                {
                    PyErr_Format( PyExc_TypeError, "_isdst() got multiple values for keyword argument 'dt'" );
                    goto error_exit;
                }

                _python_par_dt = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "_isdst() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_dt, key ) )
            {
                if (unlikely( _python_par_dt ))
                {
                    PyErr_Format( PyExc_TypeError, "_isdst() got multiple values for keyword argument 'dt'" );
                    goto error_exit;
                }

                _python_par_dt = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_isdst() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_isdst() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_isdst() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_isdst() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_isdst() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_isdst() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_isdst() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_isdst() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_isdst() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_isdst() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_isdst() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "_isdst() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_isdst() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_isdst() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_dt != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_isdst() got multiple values for keyword argument 'dt'" );
             goto error_exit;
         }

        _python_par_dt = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_7__isdst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo( self, _python_par_self, _python_par_dt );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_dt );

    return NULL;
}

static PyObject *dparse_function_7__isdst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_7__isdst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7__isdst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_FixedOffset_of_module_django__utils__tzinfo(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_1_FixedOffset_of_module_django__utils__tzinfo,
        dparse_function_1___init___of_class_1_FixedOffset_of_module_django__utils__tzinfo,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_5de4e17717c36f844223e83fd7ae9e30,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__tzinfo,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__tzinfo(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__tzinfo,
        dparse_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__tzinfo,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_4151aac6a7c24aa2b3cb038b6a6ba4fd,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__tzinfo,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___repr___of_class_1_FixedOffset_of_module_django__utils__tzinfo(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___repr___of_class_1_FixedOffset_of_module_django__utils__tzinfo,
        dparse_function_2___repr___of_class_1_FixedOffset_of_module_django__utils__tzinfo,
        _python_str_plain___repr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_54f9a346f86b09db1e2d70ec8e1313a3,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__tzinfo,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___repr___of_class_2_LocalTimezone_of_module_django__utils__tzinfo(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___repr___of_class_2_LocalTimezone_of_module_django__utils__tzinfo,
        dparse_function_2___repr___of_class_2_LocalTimezone_of_module_django__utils__tzinfo,
        _python_str_plain___repr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_37374ad5e386bc9d483db7d7512c48ba,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__tzinfo,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3___getinitargs___of_class_1_FixedOffset_of_module_django__utils__tzinfo(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3___getinitargs___of_class_1_FixedOffset_of_module_django__utils__tzinfo,
        dparse_function_3___getinitargs___of_class_1_FixedOffset_of_module_django__utils__tzinfo,
        _python_str_plain___getinitargs__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_c6ee00a1203ab811d54d3859097a4515,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__tzinfo,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3___getinitargs___of_class_2_LocalTimezone_of_module_django__utils__tzinfo(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3___getinitargs___of_class_2_LocalTimezone_of_module_django__utils__tzinfo,
        dparse_function_3___getinitargs___of_class_2_LocalTimezone_of_module_django__utils__tzinfo,
        _python_str_plain___getinitargs__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_21530e965d6adc4e53d8b375250a8c4b,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__tzinfo,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_utcoffset_of_class_1_FixedOffset_of_module_django__utils__tzinfo(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_utcoffset_of_class_1_FixedOffset_of_module_django__utils__tzinfo,
        dparse_function_4_utcoffset_of_class_1_FixedOffset_of_module_django__utils__tzinfo,
        _python_str_plain_utcoffset,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_18648a243229d6846b9d2749549968b9,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__tzinfo,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__tzinfo(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__tzinfo,
        dparse_function_4_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__tzinfo,
        _python_str_plain_utcoffset,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_09a2a783db51b12e0847b89a4fe6c440,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__tzinfo,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_dst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_dst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo,
        dparse_function_5_dst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo,
        _python_str_plain_dst,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e95d74dd62ca50b194df3b253ffcc3ae,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__tzinfo,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_tzname_of_class_1_FixedOffset_of_module_django__utils__tzinfo(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_tzname_of_class_1_FixedOffset_of_module_django__utils__tzinfo,
        dparse_function_5_tzname_of_class_1_FixedOffset_of_module_django__utils__tzinfo,
        _python_str_plain_tzname,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_f31c4bf1c45ae64f005c170b2b2e917a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__tzinfo,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_dst_of_class_1_FixedOffset_of_module_django__utils__tzinfo(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_dst_of_class_1_FixedOffset_of_module_django__utils__tzinfo,
        dparse_function_6_dst_of_class_1_FixedOffset_of_module_django__utils__tzinfo,
        _python_str_plain_dst,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d70b8d7c25fa47758c107713c1295beb,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__tzinfo,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_tzname_of_class_2_LocalTimezone_of_module_django__utils__tzinfo(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_tzname_of_class_2_LocalTimezone_of_module_django__utils__tzinfo,
        dparse_function_6_tzname_of_class_2_LocalTimezone_of_module_django__utils__tzinfo,
        _python_str_plain_tzname,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_fee35349ffb22fac965908fb9bbc20b8,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__tzinfo,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7__isdst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7__isdst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo,
        dparse_function_7__isdst_of_class_2_LocalTimezone_of_module_django__utils__tzinfo,
        _python_str_plain__isdst,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_10582e4fc26c7f765cd85041c7f4b33a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__tzinfo,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.utils.tzinfo",   /* m_name */
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

MOD_INIT_DECL( django__utils__tzinfo )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__utils__tzinfo );
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

    // puts( "in initdjango__utils__tzinfo" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__utils__tzinfo = Py_InitModule4(
        "django.utils.tzinfo",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__utils__tzinfo = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__utils__tzinfo = (PyDictObject *)((PyModuleObject *)_module_django__utils__tzinfo)->md_dict;

    assertObject( _module_django__utils__tzinfo );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_503679903f504364ca4ae3d636dd72d9, _module_django__utils__tzinfo );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__utils__tzinfo );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__utils__tzinfo != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__utils__tzinfo, (Nuitka_StringObject *)_python_str_plain___doc__, _python_unicode_digest_564ffa155a8f55cd1addd5db948f3c5c );
    UPDATE_STRING_DICT0( _moduledict_django__utils__tzinfo, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_90acff73b3ed6b1d3fd8785415fc5497 );
    PyFrameObject *frame_module_django__utils__tzinfo = MAKE_FRAME( _codeobj_d58538e9714e825a0d5907dd5713c581, _module_django__utils__tzinfo );

    FrameGuard frame_guard( frame_module_django__utils__tzinfo );
    try
    {
        assert( Py_REFCNT( frame_module_django__utils__tzinfo ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 3 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__tzinfo, (Nuitka_StringObject *)_python_str_plain_unicode_literals, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain___future__, ((PyModuleObject *)_module_django__utils__tzinfo)->md_dict, ((PyModuleObject *)_module_django__utils__tzinfo)->md_dict, _python_list_str_plain_unicode_literals_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_unicode_literals ) );
        frame_guard.setLineNumber( 5 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__tzinfo, (Nuitka_StringObject *)_python_str_plain_time, IMPORT_MODULE( _python_str_plain_time, ((PyModuleObject *)_module_django__utils__tzinfo)->md_dict, ((PyModuleObject *)_module_django__utils__tzinfo)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 6 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__tzinfo, (Nuitka_StringObject *)_python_str_plain_timedelta, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_datetime, ((PyModuleObject *)_module_django__utils__tzinfo)->md_dict, ((PyModuleObject *)_module_django__utils__tzinfo)->md_dict, _python_list_str_plain_timedelta_str_plain_tzinfo_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_timedelta ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__tzinfo, (Nuitka_StringObject *)_python_str_plain_tzinfo, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_datetime, ((PyModuleObject *)_module_django__utils__tzinfo)->md_dict, ((PyModuleObject *)_module_django__utils__tzinfo)->md_dict, _python_list_str_plain_timedelta_str_plain_tzinfo_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_tzinfo ) );
        frame_guard.setLineNumber( 8 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__tzinfo, (Nuitka_StringObject *)_python_str_plain_force_str, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__utils__tzinfo)->md_dict, ((PyModuleObject *)_module_django__utils__tzinfo)->md_dict, _python_list_b5605df35f7bb48cf20aff2d8a193417_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_force_str ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__tzinfo, (Nuitka_StringObject *)_python_str_plain_force_text, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__utils__tzinfo)->md_dict, ((PyModuleObject *)_module_django__utils__tzinfo)->md_dict, _python_list_b5605df35f7bb48cf20aff2d8a193417_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_force_text ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__tzinfo, (Nuitka_StringObject *)_python_str_plain_DEFAULT_LOCALE_ENCODING, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__utils__tzinfo)->md_dict, ((PyModuleObject *)_module_django__utils__tzinfo)->md_dict, _python_list_b5605df35f7bb48cf20aff2d8a193417_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_DEFAULT_LOCALE_ENCODING ) );
        {
            frame_guard.setLineNumber( 15 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__utils__tzinfo_tzinfo.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_1_FixedOffset_of_module_django__utils__tzinfo(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__utils__tzinfo___metaclass__.isInitialized( false ) ? _mvar_django__utils__tzinfo___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_FixedOffset, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__utils__tzinfo, (Nuitka_StringObject *)_python_str_plain_FixedOffset, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 48 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__utils__tzinfo_tzinfo.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_2_LocalTimezone_of_module_django__utils__tzinfo(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__utils__tzinfo___metaclass__.isInitialized( false ) ? _mvar_django__utils__tzinfo___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper0 call7;
                _tmp_python_tmp_class = ( call5.assign( _python_tmp_metaclass.asObject() ), call7.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_str_plain_LocalTimezone, call7.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__utils__tzinfo, (Nuitka_StringObject *)_python_str_plain_LocalTimezone, _python_tmp_class.asObject() );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__utils__tzinfo)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }

   return MOD_RETURN_VALUE( _module_django__utils__tzinfo );
}
