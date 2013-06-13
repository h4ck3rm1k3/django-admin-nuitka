// Generated code for Python source for module 'django.utils.timezone'
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

// The _module_django__utils__timezone is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__utils__timezone;
PyDictObject *_moduledict_django__utils__timezone;

// The module level variables.
static PyObjectGlobalVariable_django__utils__timezone _mvar_django__utils__timezone_LocalTimezone( &_module_django__utils__timezone, &_python_str_plain_LocalTimezone );
static PyObjectGlobalVariable_django__utils__timezone _mvar_django__utils__timezone_UTC( &_module_django__utils__timezone, &_python_str_plain_UTC );
static PyObjectGlobalVariable_django__utils__timezone _mvar_django__utils__timezone_ZERO( &_module_django__utils__timezone, &_python_str_plain_ZERO );
static PyObjectGlobalVariable_django__utils__timezone _mvar_django__utils__timezone___metaclass__( &_module_django__utils__timezone, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__utils__timezone _mvar_django__utils__timezone__active( &_module_django__utils__timezone, &_python_str_plain__active );
static PyObjectGlobalVariable_django__utils__timezone _mvar_django__utils__timezone__get_timezone_name( &_module_django__utils__timezone, &_python_str_plain__get_timezone_name );
static PyObjectGlobalVariable_django__utils__timezone _mvar_django__utils__timezone__localtime( &_module_django__utils__timezone, &_python_str_plain__localtime );
static PyObjectGlobalVariable_django__utils__timezone _mvar_django__utils__timezone__time( &_module_django__utils__timezone, &_python_str_plain__time );
static PyObjectGlobalVariable_django__utils__timezone _mvar_django__utils__timezone_activate( &_module_django__utils__timezone, &_python_str_plain_activate );
static PyObjectGlobalVariable_django__utils__timezone _mvar_django__utils__timezone_datetime( &_module_django__utils__timezone, &_python_str_plain_datetime );
static PyObjectGlobalVariable_django__utils__timezone _mvar_django__utils__timezone_deactivate( &_module_django__utils__timezone, &_python_str_plain_deactivate );
static PyObjectGlobalVariable_django__utils__timezone _mvar_django__utils__timezone_get_current_timezone( &_module_django__utils__timezone, &_python_str_plain_get_current_timezone );
static PyObjectGlobalVariable_django__utils__timezone _mvar_django__utils__timezone_get_default_timezone( &_module_django__utils__timezone, &_python_str_plain_get_default_timezone );
static PyObjectGlobalVariable_django__utils__timezone _mvar_django__utils__timezone_is_naive( &_module_django__utils__timezone, &_python_str_plain_is_naive );
static PyObjectGlobalVariable_django__utils__timezone _mvar_django__utils__timezone_local( &_module_django__utils__timezone, &_python_str_plain_local );
static PyObjectGlobalVariable_django__utils__timezone _mvar_django__utils__timezone_localtime( &_module_django__utils__timezone, &_python_str_plain_localtime );
static PyObjectGlobalVariable_django__utils__timezone _mvar_django__utils__timezone_pytz( &_module_django__utils__timezone, &_python_str_plain_pytz );
static PyObjectGlobalVariable_django__utils__timezone _mvar_django__utils__timezone_settings( &_module_django__utils__timezone, &_python_str_plain_settings );
static PyObjectGlobalVariable_django__utils__timezone _mvar_django__utils__timezone_six( &_module_django__utils__timezone, &_python_str_plain_six );
static PyObjectGlobalVariable_django__utils__timezone _mvar_django__utils__timezone_timedelta( &_module_django__utils__timezone, &_python_str_plain_timedelta );
static PyObjectGlobalVariable_django__utils__timezone _mvar_django__utils__timezone_tzinfo( &_module_django__utils__timezone, &_python_str_plain_tzinfo );
static PyObjectGlobalVariable_django__utils__timezone _mvar_django__utils__timezone_utc( &_module_django__utils__timezone, &_python_str_plain_utc );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_UTC_of_module_django__utils__timezone(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_2_LocalTimezone_of_module_django__utils__timezone(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_10_override_of_module_django__utils__timezone(  );


static PyObject *MAKE_FUNCTION_function_11_template_localtime_of_module_django__utils__timezone(  );


static PyObject *MAKE_FUNCTION_function_12_localtime_of_module_django__utils__timezone(  );


static PyObject *MAKE_FUNCTION_function_13_now_of_module_django__utils__timezone(  );


static PyObject *MAKE_FUNCTION_function_14_is_aware_of_module_django__utils__timezone(  );


static PyObject *MAKE_FUNCTION_function_15_is_naive_of_module_django__utils__timezone(  );


static PyObject *MAKE_FUNCTION_function_16_make_aware_of_module_django__utils__timezone(  );


static PyObject *MAKE_FUNCTION_function_17_make_naive_of_module_django__utils__timezone(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_10_override_of_module_django__utils__timezone(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__timezone(  );


static PyObject *MAKE_FUNCTION_function_1___repr___of_class_1_UTC_of_module_django__utils__timezone(  );


static PyObject *MAKE_FUNCTION_function_2___enter___of_class_10_override_of_module_django__utils__timezone(  );


static PyObject *MAKE_FUNCTION_function_2___repr___of_class_2_LocalTimezone_of_module_django__utils__timezone(  );


static PyObject *MAKE_FUNCTION_function_2_utcoffset_of_class_1_UTC_of_module_django__utils__timezone(  );


static PyObject *MAKE_FUNCTION_function_3___exit___of_class_10_override_of_module_django__utils__timezone(  );


static PyObject *MAKE_FUNCTION_function_3_get_default_timezone_of_module_django__utils__timezone(  );


static PyObject *MAKE_FUNCTION_function_3_tzname_of_class_1_UTC_of_module_django__utils__timezone(  );


static PyObject *MAKE_FUNCTION_function_3_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__timezone(  );


static PyObject *MAKE_FUNCTION_function_4_dst_of_class_1_UTC_of_module_django__utils__timezone(  );


static PyObject *MAKE_FUNCTION_function_4_dst_of_class_2_LocalTimezone_of_module_django__utils__timezone(  );


static PyObject *MAKE_FUNCTION_function_4_get_default_timezone_name_of_module_django__utils__timezone(  );


static PyObject *MAKE_FUNCTION_function_5_get_current_timezone_of_module_django__utils__timezone(  );


static PyObject *MAKE_FUNCTION_function_5_tzname_of_class_2_LocalTimezone_of_module_django__utils__timezone(  );


static PyObject *MAKE_FUNCTION_function_6__isdst_of_class_2_LocalTimezone_of_module_django__utils__timezone(  );


static PyObject *MAKE_FUNCTION_function_6_get_current_timezone_name_of_module_django__utils__timezone(  );


static PyObject *MAKE_FUNCTION_function_7__get_timezone_name_of_module_django__utils__timezone(  );


static PyObject *MAKE_FUNCTION_function_8_activate_of_module_django__utils__timezone(  );


static PyObject *MAKE_FUNCTION_function_9_deactivate_of_module_django__utils__timezone(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_UTC_of_module_django__utils__timezone(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___repr__( _python_str_plain___repr__ );
    PyObjectLocalVariable _python_var_utcoffset( _python_str_plain_utcoffset );
    PyObjectLocalVariable _python_var_tzname( _python_str_plain_tzname );
    PyObjectLocalVariable _python_var_dst( _python_str_plain_dst );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_timezone );
    _python_var___doc__.assign0( _python_str_digest_2dda7baa4c6c1f8185c5db422daf48a4 );
    _python_var___repr__.assign1( MAKE_FUNCTION_function_1___repr___of_class_1_UTC_of_module_django__utils__timezone(  ) );
    _python_var_utcoffset.assign1( MAKE_FUNCTION_function_2_utcoffset_of_class_1_UTC_of_module_django__utils__timezone(  ) );
    _python_var_tzname.assign1( MAKE_FUNCTION_function_3_tzname_of_class_1_UTC_of_module_django__utils__timezone(  ) );
    _python_var_dst.assign1( MAKE_FUNCTION_function_4_dst_of_class_1_UTC_of_module_django__utils__timezone(  ) );
    return _python_var_dst.updateLocalsDict( _python_var_tzname.updateLocalsDict( _python_var_utcoffset.updateLocalsDict( _python_var___repr__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) );
}


static PyObject *impl_function_1___repr___of_class_1_UTC_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    return INCREASE_REFCOUNT( _python_str_angle_UTC );
}
static PyObject *fparse_function_1___repr___of_class_1_UTC_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_1___repr___of_class_1_UTC_of_module_django__utils__timezone( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_1___repr___of_class_1_UTC_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_1___repr___of_class_1_UTC_of_module_django__utils__timezone( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___repr___of_class_1_UTC_of_module_django__utils__timezone( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_utcoffset_of_class_1_UTC_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_dt )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_dt( _python_str_plain_dt, _python_par_dt );

    // Actual function code.
    static PyFrameObject *frame_function_2_utcoffset_of_class_1_UTC_of_module_django__utils__timezone = NULL;

    if ( isFrameUnusable( frame_function_2_utcoffset_of_class_1_UTC_of_module_django__utils__timezone ) )
    {
        if ( frame_function_2_utcoffset_of_class_1_UTC_of_module_django__utils__timezone )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_utcoffset_of_class_1_UTC_of_module_django__utils__timezone" );
#endif
            Py_DECREF( frame_function_2_utcoffset_of_class_1_UTC_of_module_django__utils__timezone );
        }

        frame_function_2_utcoffset_of_class_1_UTC_of_module_django__utils__timezone = MAKE_FRAME( _codeobj_1a31bcd4b89f4ba9bb4f040dfcc55f7a, _module_django__utils__timezone );
    }

    FrameGuard frame_guard( frame_function_2_utcoffset_of_class_1_UTC_of_module_django__utils__timezone );
    try
    {
        assert( Py_REFCNT( frame_function_2_utcoffset_of_class_1_UTC_of_module_django__utils__timezone ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 40 );
        return _mvar_django__utils__timezone_ZERO.asObject();
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

        if ( frame_guard.getFrame0() == frame_function_2_utcoffset_of_class_1_UTC_of_module_django__utils__timezone )
        {
           Py_DECREF( frame_function_2_utcoffset_of_class_1_UTC_of_module_django__utils__timezone );
           frame_function_2_utcoffset_of_class_1_UTC_of_module_django__utils__timezone = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_utcoffset_of_class_1_UTC_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_2_utcoffset_of_class_1_UTC_of_module_django__utils__timezone( self, _python_par_self, _python_par_dt );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_dt );

    return NULL;
}

static PyObject *dparse_function_2_utcoffset_of_class_1_UTC_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2_utcoffset_of_class_1_UTC_of_module_django__utils__timezone( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_utcoffset_of_class_1_UTC_of_module_django__utils__timezone( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_tzname_of_class_1_UTC_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_dt )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_dt( _python_str_plain_dt, _python_par_dt );

    // Actual function code.
    return INCREASE_REFCOUNT( _python_str_plain_UTC );
}
static PyObject *fparse_function_3_tzname_of_class_1_UTC_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_3_tzname_of_class_1_UTC_of_module_django__utils__timezone( self, _python_par_self, _python_par_dt );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_dt );

    return NULL;
}

static PyObject *dparse_function_3_tzname_of_class_1_UTC_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_3_tzname_of_class_1_UTC_of_module_django__utils__timezone( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_tzname_of_class_1_UTC_of_module_django__utils__timezone( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_dst_of_class_1_UTC_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_dt )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_dt( _python_str_plain_dt, _python_par_dt );

    // Actual function code.
    static PyFrameObject *frame_function_4_dst_of_class_1_UTC_of_module_django__utils__timezone = NULL;

    if ( isFrameUnusable( frame_function_4_dst_of_class_1_UTC_of_module_django__utils__timezone ) )
    {
        if ( frame_function_4_dst_of_class_1_UTC_of_module_django__utils__timezone )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_dst_of_class_1_UTC_of_module_django__utils__timezone" );
#endif
            Py_DECREF( frame_function_4_dst_of_class_1_UTC_of_module_django__utils__timezone );
        }

        frame_function_4_dst_of_class_1_UTC_of_module_django__utils__timezone = MAKE_FRAME( _codeobj_5e7e748076f70034235fefb8532cd02e, _module_django__utils__timezone );
    }

    FrameGuard frame_guard( frame_function_4_dst_of_class_1_UTC_of_module_django__utils__timezone );
    try
    {
        assert( Py_REFCNT( frame_function_4_dst_of_class_1_UTC_of_module_django__utils__timezone ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 46 );
        return _mvar_django__utils__timezone_ZERO.asObject();
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

        if ( frame_guard.getFrame0() == frame_function_4_dst_of_class_1_UTC_of_module_django__utils__timezone )
        {
           Py_DECREF( frame_function_4_dst_of_class_1_UTC_of_module_django__utils__timezone );
           frame_function_4_dst_of_class_1_UTC_of_module_django__utils__timezone = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_dst_of_class_1_UTC_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_4_dst_of_class_1_UTC_of_module_django__utils__timezone( self, _python_par_self, _python_par_dt );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_dt );

    return NULL;
}

static PyObject *dparse_function_4_dst_of_class_1_UTC_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_4_dst_of_class_1_UTC_of_module_django__utils__timezone( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_dst_of_class_1_UTC_of_module_django__utils__timezone( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_2_LocalTimezone_of_module_django__utils__timezone(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var___repr__( _python_str_plain___repr__ );
    PyObjectLocalVariable _python_var_utcoffset( _python_str_plain_utcoffset );
    PyObjectLocalVariable _python_var_dst( _python_str_plain_dst );
    PyObjectLocalVariable _python_var_tzname( _python_str_plain_tzname );
    PyObjectLocalVariable _python_var__isdst( _python_str_plain__isdst );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_timezone );
    _python_var___doc__.assign0( _python_str_digest_72ac08e5a02141078e8f069ad369ad69 );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__timezone(  ) );
    _python_var___repr__.assign1( MAKE_FUNCTION_function_2___repr___of_class_2_LocalTimezone_of_module_django__utils__timezone(  ) );
    _python_var_utcoffset.assign1( MAKE_FUNCTION_function_3_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__timezone(  ) );
    _python_var_dst.assign1( MAKE_FUNCTION_function_4_dst_of_class_2_LocalTimezone_of_module_django__utils__timezone(  ) );
    _python_var_tzname.assign1( MAKE_FUNCTION_function_5_tzname_of_class_2_LocalTimezone_of_module_django__utils__timezone(  ) );
    _python_var__isdst.assign1( MAKE_FUNCTION_function_6__isdst_of_class_2_LocalTimezone_of_module_django__utils__timezone(  ) );
    return _python_var__isdst.updateLocalsDict( _python_var_tzname.updateLocalsDict( _python_var_dst.updateLocalsDict( _python_var_utcoffset.updateLocalsDict( _python_var___repr__.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__timezone = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__timezone ) )
    {
        if ( frame_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__timezone )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_2_LocalTimezone_of_module_django__utils__timezone" );
#endif
            Py_DECREF( frame_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__timezone );
        }

        frame_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__timezone = MAKE_FRAME( _codeobj_f66b146a6a08b202aa9f413ad08e0639, _module_django__utils__timezone );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__timezone );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__timezone ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 59 );
        {
            PyObjectTempKeeper0 call1;
            {
                PyObjectTemporary tmp_identifier( ( call1.assign( _mvar_django__utils__timezone_timedelta.asObject0() ), CALL_FUNCTION( call1.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT1( PyObjectTemporary( UNARY_OPERATION( PyNumber_Negative, PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__timezone__time.asObject0(), _python_str_plain_timezone ) ).asObject() ) ).asObject(), _python_str_plain_seconds ) ).asObject() ) ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_STDOFFSET );
        }
        }
        frame_guard.setLineNumber( 60 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__timezone__time.asObject0(), _python_str_plain_daylight ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 61 );
            {
                PyObjectTempKeeper0 call4;
                {
                    PyObjectTemporary tmp_identifier( ( call4.assign( _mvar_django__utils__timezone_timedelta.asObject0() ), CALL_FUNCTION( call4.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT1( PyObjectTemporary( UNARY_OPERATION( PyNumber_Negative, PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__timezone__time.asObject0(), _python_str_plain_altzone ) ).asObject() ) ).asObject(), _python_str_plain_seconds ) ).asObject() ) ) );
                    SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_DSTOFFSET );
            }
            }
        }
        else
        {
            frame_guard.setLineNumber( 63 );
            {
                    PyObjectTemporary tmp_identifier( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_STDOFFSET ) );
                    SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_DSTOFFSET );
            }
        }
        frame_guard.setLineNumber( 64 );
        {
            PyObjectTempKeeper1 op7;
            {
                PyObjectTemporary tmp_identifier( ( op7.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_DSTOFFSET ) ), BINARY_OPERATION_SUB( op7.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_STDOFFSET ) ).asObject() ) ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_DSTDIFF );
        }
        }
        frame_guard.setLineNumber( 65 );
        {
            PyObjectTempKeeper1 call9;
            DECREASE_REFCOUNT( ( call9.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__timezone_tzinfo.asObject0(), _python_str_plain___init__ ) ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_var_self.asObject() ) ) );
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

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__timezone )
        {
           Py_DECREF( frame_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__timezone );
           frame_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__timezone = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
    if (unlikely( args_given > 1 ))
    {
        if ( 1 == 1 )
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
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


    return impl_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__timezone( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__timezone( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__timezone( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___repr___of_class_2_LocalTimezone_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    return INCREASE_REFCOUNT( _python_str_angle_LocalTimezone );
}
static PyObject *fparse_function_2___repr___of_class_2_LocalTimezone_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_2___repr___of_class_2_LocalTimezone_of_module_django__utils__timezone( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2___repr___of_class_2_LocalTimezone_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2___repr___of_class_2_LocalTimezone_of_module_django__utils__timezone( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___repr___of_class_2_LocalTimezone_of_module_django__utils__timezone( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_dt )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_dt( _python_str_plain_dt, _python_par_dt );

    // Actual function code.
    static PyFrameObject *frame_function_3_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__timezone = NULL;

    if ( isFrameUnusable( frame_function_3_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__timezone ) )
    {
        if ( frame_function_3_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__timezone )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__timezone" );
#endif
            Py_DECREF( frame_function_3_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__timezone );
        }

        frame_function_3_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__timezone = MAKE_FRAME( _codeobj_58f7cb1a7e78e019a9ce357cdc5428cc, _module_django__utils__timezone );
    }

    FrameGuard frame_guard( frame_function_3_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__timezone );
    try
    {
        assert( Py_REFCNT( frame_function_3_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__timezone ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 71 );
        {
            PyObjectTempKeeper1 call1;
            if ( CHECK_IF_TRUE( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__isdst ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_dt.asObject() ) ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 72 );
            return LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_DSTOFFSET );
        }
        else
        {
            frame_guard.setLineNumber( 74 );
            return LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_STDOFFSET );
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

        if ( frame_guard.getFrame0() == frame_function_3_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__timezone )
        {
           Py_DECREF( frame_function_3_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__timezone );
           frame_function_3_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__timezone = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_3_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__timezone( self, _python_par_self, _python_par_dt );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_dt );

    return NULL;
}

static PyObject *dparse_function_3_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_3_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__timezone( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__timezone( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_dst_of_class_2_LocalTimezone_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_dt )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_dt( _python_str_plain_dt, _python_par_dt );

    // Actual function code.
    static PyFrameObject *frame_function_4_dst_of_class_2_LocalTimezone_of_module_django__utils__timezone = NULL;

    if ( isFrameUnusable( frame_function_4_dst_of_class_2_LocalTimezone_of_module_django__utils__timezone ) )
    {
        if ( frame_function_4_dst_of_class_2_LocalTimezone_of_module_django__utils__timezone )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_dst_of_class_2_LocalTimezone_of_module_django__utils__timezone" );
#endif
            Py_DECREF( frame_function_4_dst_of_class_2_LocalTimezone_of_module_django__utils__timezone );
        }

        frame_function_4_dst_of_class_2_LocalTimezone_of_module_django__utils__timezone = MAKE_FRAME( _codeobj_b0d73474509682a20a9e8fd4c169e34d, _module_django__utils__timezone );
    }

    FrameGuard frame_guard( frame_function_4_dst_of_class_2_LocalTimezone_of_module_django__utils__timezone );
    try
    {
        assert( Py_REFCNT( frame_function_4_dst_of_class_2_LocalTimezone_of_module_django__utils__timezone ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 77 );
        {
            PyObjectTempKeeper1 call1;
            if ( CHECK_IF_TRUE( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__isdst ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_dt.asObject() ) ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 78 );
            return LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_DSTDIFF );
        }
        else
        {
            frame_guard.setLineNumber( 80 );
            return _mvar_django__utils__timezone_ZERO.asObject();
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

        if ( frame_guard.getFrame0() == frame_function_4_dst_of_class_2_LocalTimezone_of_module_django__utils__timezone )
        {
           Py_DECREF( frame_function_4_dst_of_class_2_LocalTimezone_of_module_django__utils__timezone );
           frame_function_4_dst_of_class_2_LocalTimezone_of_module_django__utils__timezone = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_dst_of_class_2_LocalTimezone_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_4_dst_of_class_2_LocalTimezone_of_module_django__utils__timezone( self, _python_par_self, _python_par_dt );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_dt );

    return NULL;
}

static PyObject *dparse_function_4_dst_of_class_2_LocalTimezone_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_4_dst_of_class_2_LocalTimezone_of_module_django__utils__timezone( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_dst_of_class_2_LocalTimezone_of_module_django__utils__timezone( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_tzname_of_class_2_LocalTimezone_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_dt )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_dt( _python_str_plain_dt, _python_par_dt );
    PyObjectLocalVariable _python_var_is_dst( _python_str_plain_is_dst );

    // Actual function code.
    static PyFrameObject *frame_function_5_tzname_of_class_2_LocalTimezone_of_module_django__utils__timezone = NULL;

    if ( isFrameUnusable( frame_function_5_tzname_of_class_2_LocalTimezone_of_module_django__utils__timezone ) )
    {
        if ( frame_function_5_tzname_of_class_2_LocalTimezone_of_module_django__utils__timezone )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_tzname_of_class_2_LocalTimezone_of_module_django__utils__timezone" );
#endif
            Py_DECREF( frame_function_5_tzname_of_class_2_LocalTimezone_of_module_django__utils__timezone );
        }

        frame_function_5_tzname_of_class_2_LocalTimezone_of_module_django__utils__timezone = MAKE_FRAME( _codeobj_d588dd78b013eb9240a209f529085277, _module_django__utils__timezone );
    }

    FrameGuard frame_guard( frame_function_5_tzname_of_class_2_LocalTimezone_of_module_django__utils__timezone );
    try
    {
        assert( Py_REFCNT( frame_function_5_tzname_of_class_2_LocalTimezone_of_module_django__utils__timezone ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 83 );
        {
            PyObjectTempKeeper1 call1;
            _python_var_is_dst.assign1( ( ( _python_var_dt.asObject() == Py_None ) ? INCREASE_REFCOUNT( Py_False ) : ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__isdst ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_dt.asObject() ) ) ) );
        }
        frame_guard.setLineNumber( 84 );
        {
            PyObjectTempKeeper1 subscr3;
            return ( subscr3.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__timezone__time.asObject0(), _python_str_plain_tzname ) ), LOOKUP_SUBSCRIPT( subscr3.asObject0(), _python_var_is_dst.asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_5_tzname_of_class_2_LocalTimezone_of_module_django__utils__timezone )
        {
           Py_DECREF( frame_function_5_tzname_of_class_2_LocalTimezone_of_module_django__utils__timezone );
           frame_function_5_tzname_of_class_2_LocalTimezone_of_module_django__utils__timezone = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5_tzname_of_class_2_LocalTimezone_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_5_tzname_of_class_2_LocalTimezone_of_module_django__utils__timezone( self, _python_par_self, _python_par_dt );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_dt );

    return NULL;
}

static PyObject *dparse_function_5_tzname_of_class_2_LocalTimezone_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_5_tzname_of_class_2_LocalTimezone_of_module_django__utils__timezone( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_tzname_of_class_2_LocalTimezone_of_module_django__utils__timezone( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6__isdst_of_class_2_LocalTimezone_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_dt )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_dt( _python_str_plain_dt, _python_par_dt );
    PyObjectLocalVariable _python_var_tt( _python_str_plain_tt );
    PyObjectLocalVariable _python_var_stamp( _python_str_plain_stamp );

    // Actual function code.
    static PyFrameObject *frame_function_6__isdst_of_class_2_LocalTimezone_of_module_django__utils__timezone = NULL;

    if ( isFrameUnusable( frame_function_6__isdst_of_class_2_LocalTimezone_of_module_django__utils__timezone ) )
    {
        if ( frame_function_6__isdst_of_class_2_LocalTimezone_of_module_django__utils__timezone )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6__isdst_of_class_2_LocalTimezone_of_module_django__utils__timezone" );
#endif
            Py_DECREF( frame_function_6__isdst_of_class_2_LocalTimezone_of_module_django__utils__timezone );
        }

        frame_function_6__isdst_of_class_2_LocalTimezone_of_module_django__utils__timezone = MAKE_FRAME( _codeobj_d74c3755ffc4020b8fe9b1e873cb964a, _module_django__utils__timezone );
    }

    FrameGuard frame_guard( frame_function_6__isdst_of_class_2_LocalTimezone_of_module_django__utils__timezone );
    try
    {
        assert( Py_REFCNT( frame_function_6__isdst_of_class_2_LocalTimezone_of_module_django__utils__timezone ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 87 );
        {
            PyObjectTempKeeper1 make_tuple1;
            PyObjectTempKeeper1 make_tuple2;
            PyObjectTempKeeper1 make_tuple3;
            PyObjectTempKeeper1 make_tuple4;
            PyObjectTempKeeper1 make_tuple5;
            PyObjectTempKeeper1 make_tuple6;
            _python_var_tt.assign1( ( make_tuple1.assign( LOOKUP_ATTRIBUTE( _python_var_dt.asObject(), _python_str_plain_year ) ), make_tuple2.assign( LOOKUP_ATTRIBUTE( _python_var_dt.asObject(), _python_str_plain_month ) ), make_tuple3.assign( LOOKUP_ATTRIBUTE( _python_var_dt.asObject(), _python_str_plain_day ) ), make_tuple4.assign( LOOKUP_ATTRIBUTE( _python_var_dt.asObject(), _python_str_plain_hour ) ), make_tuple5.assign( LOOKUP_ATTRIBUTE( _python_var_dt.asObject(), _python_str_plain_minute ) ), make_tuple6.assign( LOOKUP_ATTRIBUTE( _python_var_dt.asObject(), _python_str_plain_second ) ), MAKE_TUPLE9( make_tuple1.asObject0(), make_tuple2.asObject0(), make_tuple3.asObject0(), make_tuple4.asObject0(), make_tuple5.asObject0(), make_tuple6.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_dt.asObject(), _python_str_plain_weekday ) ).asObject() ) ).asObject(), _python_int_0, _python_int_0 ) ) );
        }
        frame_guard.setLineNumber( 90 );
        {
            PyObjectTempKeeper1 call10;
            _python_var_stamp.assign1( ( call10.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__timezone__time.asObject0(), _python_str_plain_mktime ) ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), _python_var_tt.asObject() ) ) );
        }
        frame_guard.setLineNumber( 91 );
        {
            PyObjectTempKeeper1 call12;
            _python_var_tt.assign1( ( call12.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__timezone__time.asObject0(), _python_str_plain_localtime ) ), CALL_FUNCTION_WITH_ARGS( call12.asObject0(), _python_var_stamp.asObject() ) ) );
        }
        frame_guard.setLineNumber( 92 );
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

        if ( frame_guard.getFrame0() == frame_function_6__isdst_of_class_2_LocalTimezone_of_module_django__utils__timezone )
        {
           Py_DECREF( frame_function_6__isdst_of_class_2_LocalTimezone_of_module_django__utils__timezone );
           frame_function_6__isdst_of_class_2_LocalTimezone_of_module_django__utils__timezone = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_6__isdst_of_class_2_LocalTimezone_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_6__isdst_of_class_2_LocalTimezone_of_module_django__utils__timezone( self, _python_par_self, _python_par_dt );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_dt );

    return NULL;
}

static PyObject *dparse_function_6__isdst_of_class_2_LocalTimezone_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_6__isdst_of_class_2_LocalTimezone_of_module_django__utils__timezone( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6__isdst_of_class_2_LocalTimezone_of_module_django__utils__timezone( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_get_default_timezone_of_module_django__utils__timezone( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.


    // Actual function code.
    static PyFrameObject *frame_function_3_get_default_timezone_of_module_django__utils__timezone = NULL;

    if ( isFrameUnusable( frame_function_3_get_default_timezone_of_module_django__utils__timezone ) )
    {
        if ( frame_function_3_get_default_timezone_of_module_django__utils__timezone )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_get_default_timezone_of_module_django__utils__timezone" );
#endif
            Py_DECREF( frame_function_3_get_default_timezone_of_module_django__utils__timezone );
        }

        frame_function_3_get_default_timezone_of_module_django__utils__timezone = MAKE_FRAME( _codeobj_ab54f0c81cc095b91fb4b782096a5e91, _module_django__utils__timezone );
    }

    FrameGuard frame_guard( frame_function_3_get_default_timezone_of_module_django__utils__timezone );
    try
    {
        assert( Py_REFCNT( frame_function_3_get_default_timezone_of_module_django__utils__timezone ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 111 );
        if ( ( _mvar_django__utils__timezone__localtime.asObject0() == Py_None ) )
        {
            frame_guard.setLineNumber( 112 );
            {
                PyObjectTempKeeper1 isinstance3;
                if ( ( ( isinstance3.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__timezone_settings.asObject0(), _python_str_plain_TIME_ZONE ) ), BUILTIN_ISINSTANCE_BOOL( isinstance3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__timezone_six.asObject0(), _python_str_plain_string_types ) ).asObject() ) ) && ( _mvar_django__utils__timezone_pytz.asObject0() != Py_None ) ) )
            {
                frame_guard.setLineNumber( 113 );
                {
                    PyObjectTempKeeper1 call1;
                    UPDATE_STRING_DICT1( _moduledict_django__utils__timezone, (Nuitka_StringObject *)_python_str_plain__localtime, ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__timezone_pytz.asObject0(), _python_str_plain_timezone ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__timezone_settings.asObject0(), _python_str_plain_TIME_ZONE ) ).asObject() ) ) );
                }
            }
            else
            {
                frame_guard.setLineNumber( 116 );
                UPDATE_STRING_DICT1( _moduledict_django__utils__timezone, (Nuitka_StringObject *)_python_str_plain__localtime, CALL_FUNCTION_NO_ARGS( _mvar_django__utils__timezone_LocalTimezone.asObject0() ) );
            }
            }
        }
        frame_guard.setLineNumber( 117 );
        return _mvar_django__utils__timezone__localtime.asObject();
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

        if ( frame_guard.getFrame0() == frame_function_3_get_default_timezone_of_module_django__utils__timezone )
        {
           Py_DECREF( frame_function_3_get_default_timezone_of_module_django__utils__timezone );
           frame_function_3_get_default_timezone_of_module_django__utils__timezone = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_get_default_timezone_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        PyErr_Format( PyExc_TypeError, "get_default_timezone() takes no arguments (%zd given)", args_given + kw_size );
#else
        if ( kw_size == 0 )
        {
           PyErr_Format( PyExc_TypeError, "get_default_timezone() takes 0 positional arguments but %zd was given", args_given );
        }
        else
        {
           PyObject *tmp_iter = PyObject_GetIter( kw );
           PyObject *tmp_arg_name = PyIter_Next( tmp_iter );
           Py_DECREF( tmp_iter );

           PyErr_Format( PyExc_TypeError, "get_default_timezone() got an unexpected keyword argument '%s'", Nuitka_String_AsString( tmp_arg_name ) );

           Py_DECREF( tmp_arg_name );
        }
#endif
        goto error_exit;
    }


    return impl_function_3_get_default_timezone_of_module_django__utils__timezone( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_3_get_default_timezone_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0)
    {
        return impl_function_3_get_default_timezone_of_module_django__utils__timezone( self );
    }
    else
    {
        PyObject *result = fparse_function_3_get_default_timezone_of_module_django__utils__timezone( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_get_default_timezone_name_of_module_django__utils__timezone( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.


    // Actual function code.
    static PyFrameObject *frame_function_4_get_default_timezone_name_of_module_django__utils__timezone = NULL;

    if ( isFrameUnusable( frame_function_4_get_default_timezone_name_of_module_django__utils__timezone ) )
    {
        if ( frame_function_4_get_default_timezone_name_of_module_django__utils__timezone )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_get_default_timezone_name_of_module_django__utils__timezone" );
#endif
            Py_DECREF( frame_function_4_get_default_timezone_name_of_module_django__utils__timezone );
        }

        frame_function_4_get_default_timezone_name_of_module_django__utils__timezone = MAKE_FRAME( _codeobj_f1272e4ea941fdfe0d6eecda548161bc, _module_django__utils__timezone );
    }

    FrameGuard frame_guard( frame_function_4_get_default_timezone_name_of_module_django__utils__timezone );
    try
    {
        assert( Py_REFCNT( frame_function_4_get_default_timezone_name_of_module_django__utils__timezone ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 124 );
        {
            PyObjectTempKeeper0 call1;
            return ( call1.assign( _mvar_django__utils__timezone__get_timezone_name.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( _mvar_django__utils__timezone_get_default_timezone.asObject0() ) ).asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_4_get_default_timezone_name_of_module_django__utils__timezone )
        {
           Py_DECREF( frame_function_4_get_default_timezone_name_of_module_django__utils__timezone );
           frame_function_4_get_default_timezone_name_of_module_django__utils__timezone = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_get_default_timezone_name_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        PyErr_Format( PyExc_TypeError, "get_default_timezone_name() takes no arguments (%zd given)", args_given + kw_size );
#else
        if ( kw_size == 0 )
        {
           PyErr_Format( PyExc_TypeError, "get_default_timezone_name() takes 0 positional arguments but %zd was given", args_given );
        }
        else
        {
           PyObject *tmp_iter = PyObject_GetIter( kw );
           PyObject *tmp_arg_name = PyIter_Next( tmp_iter );
           Py_DECREF( tmp_iter );

           PyErr_Format( PyExc_TypeError, "get_default_timezone_name() got an unexpected keyword argument '%s'", Nuitka_String_AsString( tmp_arg_name ) );

           Py_DECREF( tmp_arg_name );
        }
#endif
        goto error_exit;
    }


    return impl_function_4_get_default_timezone_name_of_module_django__utils__timezone( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_4_get_default_timezone_name_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0)
    {
        return impl_function_4_get_default_timezone_name_of_module_django__utils__timezone( self );
    }
    else
    {
        PyObject *result = fparse_function_4_get_default_timezone_name_of_module_django__utils__timezone( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_get_current_timezone_of_module_django__utils__timezone( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.


    // Actual function code.
    static PyFrameObject *frame_function_5_get_current_timezone_of_module_django__utils__timezone = NULL;

    if ( isFrameUnusable( frame_function_5_get_current_timezone_of_module_django__utils__timezone ) )
    {
        if ( frame_function_5_get_current_timezone_of_module_django__utils__timezone )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_get_current_timezone_of_module_django__utils__timezone" );
#endif
            Py_DECREF( frame_function_5_get_current_timezone_of_module_django__utils__timezone );
        }

        frame_function_5_get_current_timezone_of_module_django__utils__timezone = MAKE_FRAME( _codeobj_a8a2c2d7f7ce0669b4c7e9e059c611d8, _module_django__utils__timezone );
    }

    FrameGuard frame_guard( frame_function_5_get_current_timezone_of_module_django__utils__timezone );
    try
    {
        assert( Py_REFCNT( frame_function_5_get_current_timezone_of_module_django__utils__timezone ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 132 );
        {
            PyObjectTempKeeper0 getattr1;
            return ( getattr1.assign( _mvar_django__utils__timezone__active.asObject0() ), BUILTIN_GETATTR( getattr1.asObject0(), _python_str_plain_value, PyObjectTemporary( CALL_FUNCTION_NO_ARGS( _mvar_django__utils__timezone_get_default_timezone.asObject0() ) ).asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_5_get_current_timezone_of_module_django__utils__timezone )
        {
           Py_DECREF( frame_function_5_get_current_timezone_of_module_django__utils__timezone );
           frame_function_5_get_current_timezone_of_module_django__utils__timezone = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5_get_current_timezone_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        PyErr_Format( PyExc_TypeError, "get_current_timezone() takes no arguments (%zd given)", args_given + kw_size );
#else
        if ( kw_size == 0 )
        {
           PyErr_Format( PyExc_TypeError, "get_current_timezone() takes 0 positional arguments but %zd was given", args_given );
        }
        else
        {
           PyObject *tmp_iter = PyObject_GetIter( kw );
           PyObject *tmp_arg_name = PyIter_Next( tmp_iter );
           Py_DECREF( tmp_iter );

           PyErr_Format( PyExc_TypeError, "get_current_timezone() got an unexpected keyword argument '%s'", Nuitka_String_AsString( tmp_arg_name ) );

           Py_DECREF( tmp_arg_name );
        }
#endif
        goto error_exit;
    }


    return impl_function_5_get_current_timezone_of_module_django__utils__timezone( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_5_get_current_timezone_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0)
    {
        return impl_function_5_get_current_timezone_of_module_django__utils__timezone( self );
    }
    else
    {
        PyObject *result = fparse_function_5_get_current_timezone_of_module_django__utils__timezone( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_get_current_timezone_name_of_module_django__utils__timezone( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.


    // Actual function code.
    static PyFrameObject *frame_function_6_get_current_timezone_name_of_module_django__utils__timezone = NULL;

    if ( isFrameUnusable( frame_function_6_get_current_timezone_name_of_module_django__utils__timezone ) )
    {
        if ( frame_function_6_get_current_timezone_name_of_module_django__utils__timezone )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6_get_current_timezone_name_of_module_django__utils__timezone" );
#endif
            Py_DECREF( frame_function_6_get_current_timezone_name_of_module_django__utils__timezone );
        }

        frame_function_6_get_current_timezone_name_of_module_django__utils__timezone = MAKE_FRAME( _codeobj_15aeb24a2bf449c904168837b0b180bd, _module_django__utils__timezone );
    }

    FrameGuard frame_guard( frame_function_6_get_current_timezone_name_of_module_django__utils__timezone );
    try
    {
        assert( Py_REFCNT( frame_function_6_get_current_timezone_name_of_module_django__utils__timezone ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 138 );
        {
            PyObjectTempKeeper0 call1;
            return ( call1.assign( _mvar_django__utils__timezone__get_timezone_name.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( _mvar_django__utils__timezone_get_current_timezone.asObject0() ) ).asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_6_get_current_timezone_name_of_module_django__utils__timezone )
        {
           Py_DECREF( frame_function_6_get_current_timezone_name_of_module_django__utils__timezone );
           frame_function_6_get_current_timezone_name_of_module_django__utils__timezone = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_6_get_current_timezone_name_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        PyErr_Format( PyExc_TypeError, "get_current_timezone_name() takes no arguments (%zd given)", args_given + kw_size );
#else
        if ( kw_size == 0 )
        {
           PyErr_Format( PyExc_TypeError, "get_current_timezone_name() takes 0 positional arguments but %zd was given", args_given );
        }
        else
        {
           PyObject *tmp_iter = PyObject_GetIter( kw );
           PyObject *tmp_arg_name = PyIter_Next( tmp_iter );
           Py_DECREF( tmp_iter );

           PyErr_Format( PyExc_TypeError, "get_current_timezone_name() got an unexpected keyword argument '%s'", Nuitka_String_AsString( tmp_arg_name ) );

           Py_DECREF( tmp_arg_name );
        }
#endif
        goto error_exit;
    }


    return impl_function_6_get_current_timezone_name_of_module_django__utils__timezone( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_6_get_current_timezone_name_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0)
    {
        return impl_function_6_get_current_timezone_name_of_module_django__utils__timezone( self );
    }
    else
    {
        PyObject *result = fparse_function_6_get_current_timezone_name_of_module_django__utils__timezone( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7__get_timezone_name_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject *_python_par_timezone )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_timezone( _python_str_plain_timezone, _python_par_timezone );

    // Actual function code.
    static PyFrameObject *frame_function_7__get_timezone_name_of_module_django__utils__timezone = NULL;

    if ( isFrameUnusable( frame_function_7__get_timezone_name_of_module_django__utils__timezone ) )
    {
        if ( frame_function_7__get_timezone_name_of_module_django__utils__timezone )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_7__get_timezone_name_of_module_django__utils__timezone" );
#endif
            Py_DECREF( frame_function_7__get_timezone_name_of_module_django__utils__timezone );
        }

        frame_function_7__get_timezone_name_of_module_django__utils__timezone = MAKE_FRAME( _codeobj_d045f6e38d1c503771bb407a402ad5ff, _module_django__utils__timezone );
    }

    FrameGuard frame_guard( frame_function_7__get_timezone_name_of_module_django__utils__timezone );
    try
    {
        assert( Py_REFCNT( frame_function_7__get_timezone_name_of_module_django__utils__timezone ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 144 );
        try
        {
            frame_guard.setLineNumber( 146 );
            return LOOKUP_ATTRIBUTE( _python_var_timezone.asObject(), _python_str_plain_zone );
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
                frame_guard.setLineNumber( 149 );
                return CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_timezone.asObject(), _python_str_plain_tzname ) ).asObject(), Py_None );
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
        frame_guard.getFrame0()->f_locals = _python_var_timezone.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_7__get_timezone_name_of_module_django__utils__timezone )
        {
           Py_DECREF( frame_function_7__get_timezone_name_of_module_django__utils__timezone );
           frame_function_7__get_timezone_name_of_module_django__utils__timezone = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_7__get_timezone_name_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_timezone = NULL;
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
                PyErr_Format( PyExc_TypeError, "_get_timezone_name() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_timezone == key )
            {
                if (unlikely( _python_par_timezone ))
                {
                    PyErr_Format( PyExc_TypeError, "_get_timezone_name() got multiple values for keyword argument 'timezone'" );
                    goto error_exit;
                }

                _python_par_timezone = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_timezone, key ) )
            {
                if (unlikely( _python_par_timezone ))
                {
                    PyErr_Format( PyExc_TypeError, "_get_timezone_name() got multiple values for keyword argument 'timezone'" );
                    goto error_exit;
                }

                _python_par_timezone = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_get_timezone_name() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_get_timezone_name() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_get_timezone_name() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_get_timezone_name() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_get_timezone_name() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_get_timezone_name() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_get_timezone_name() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_get_timezone_name() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_get_timezone_name() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_get_timezone_name() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_get_timezone_name() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_get_timezone_name() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_get_timezone_name() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_timezone != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_get_timezone_name() got multiple values for keyword argument 'timezone'" );
             goto error_exit;
         }

        _python_par_timezone = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_7__get_timezone_name_of_module_django__utils__timezone( self, _python_par_timezone );

error_exit:;

    Py_XDECREF( _python_par_timezone );

    return NULL;
}

static PyObject *dparse_function_7__get_timezone_name_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_7__get_timezone_name_of_module_django__utils__timezone( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7__get_timezone_name_of_module_django__utils__timezone( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8_activate_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject *_python_par_timezone )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_timezone( _python_str_plain_timezone, _python_par_timezone );

    // Actual function code.
    static PyFrameObject *frame_function_8_activate_of_module_django__utils__timezone = NULL;

    if ( isFrameUnusable( frame_function_8_activate_of_module_django__utils__timezone ) )
    {
        if ( frame_function_8_activate_of_module_django__utils__timezone )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_8_activate_of_module_django__utils__timezone" );
#endif
            Py_DECREF( frame_function_8_activate_of_module_django__utils__timezone );
        }

        frame_function_8_activate_of_module_django__utils__timezone = MAKE_FRAME( _codeobj_1a38f889066ae1df8c9c7bfdc4ae71ae, _module_django__utils__timezone );
    }

    FrameGuard frame_guard( frame_function_8_activate_of_module_django__utils__timezone );
    try
    {
        assert( Py_REFCNT( frame_function_8_activate_of_module_django__utils__timezone ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 163 );
        {
            PyObjectTempKeeper0 isinstance5;
            if ( ( isinstance5.assign( _python_var_timezone.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance5.asObject0(), _mvar_django__utils__timezone_tzinfo.asObject0() ) ) )
        {
            frame_guard.setLineNumber( 164 );
            {
                    PyObject *tmp_identifier = _python_var_timezone.asObject();
                    SET_ATTRIBUTE( tmp_identifier, _mvar_django__utils__timezone__active.asObject0(), _python_str_plain_value );
            }
        }
        else
        {
            frame_guard.setLineNumber( 165 );
            {
                PyObjectTempKeeper0 isinstance3;
                if ( ( ( isinstance3.assign( _python_var_timezone.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__timezone_six.asObject0(), _python_str_plain_string_types ) ).asObject() ) ) && ( _mvar_django__utils__timezone_pytz.asObject0() != Py_None ) ) )
            {
                frame_guard.setLineNumber( 166 );
                {
                    PyObjectTempKeeper1 call1;
                    {
                        PyObjectTemporary tmp_identifier( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__timezone_pytz.asObject0(), _python_str_plain_timezone ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_timezone.asObject() ) ) );
                        SET_ATTRIBUTE( tmp_identifier.asObject(), _mvar_django__utils__timezone__active.asObject0(), _python_str_plain_value );
                }
                }
            }
            else
            {
                frame_guard.setLineNumber( 168 );
                {
                        PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_ValueError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_33d82dab813a32d4fd7e80956c765265, _python_var_timezone.asObject() ) ).asObject() ) ).asObject() ) );
                        RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                }
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
        frame_guard.getFrame0()->f_locals = _python_var_timezone.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_8_activate_of_module_django__utils__timezone )
        {
           Py_DECREF( frame_function_8_activate_of_module_django__utils__timezone );
           frame_function_8_activate_of_module_django__utils__timezone = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_8_activate_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_timezone = NULL;
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
                PyErr_Format( PyExc_TypeError, "activate() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_timezone == key )
            {
                if (unlikely( _python_par_timezone ))
                {
                    PyErr_Format( PyExc_TypeError, "activate() got multiple values for keyword argument 'timezone'" );
                    goto error_exit;
                }

                _python_par_timezone = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_timezone, key ) )
            {
                if (unlikely( _python_par_timezone ))
                {
                    PyErr_Format( PyExc_TypeError, "activate() got multiple values for keyword argument 'timezone'" );
                    goto error_exit;
                }

                _python_par_timezone = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "activate() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "activate() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "activate() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "activate() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "activate() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "activate() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "activate() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "activate() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "activate() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "activate() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "activate() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "activate() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "activate() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_timezone != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "activate() got multiple values for keyword argument 'timezone'" );
             goto error_exit;
         }

        _python_par_timezone = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_8_activate_of_module_django__utils__timezone( self, _python_par_timezone );

error_exit:;

    Py_XDECREF( _python_par_timezone );

    return NULL;
}

static PyObject *dparse_function_8_activate_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_8_activate_of_module_django__utils__timezone( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_activate_of_module_django__utils__timezone( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9_deactivate_of_module_django__utils__timezone( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.


    // Actual function code.
    static PyFrameObject *frame_function_9_deactivate_of_module_django__utils__timezone = NULL;

    if ( isFrameUnusable( frame_function_9_deactivate_of_module_django__utils__timezone ) )
    {
        if ( frame_function_9_deactivate_of_module_django__utils__timezone )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_9_deactivate_of_module_django__utils__timezone" );
#endif
            Py_DECREF( frame_function_9_deactivate_of_module_django__utils__timezone );
        }

        frame_function_9_deactivate_of_module_django__utils__timezone = MAKE_FRAME( _codeobj_55d69368fcdb9825ea11f1c7ddd851ab, _module_django__utils__timezone );
    }

    FrameGuard frame_guard( frame_function_9_deactivate_of_module_django__utils__timezone );
    try
    {
        assert( Py_REFCNT( frame_function_9_deactivate_of_module_django__utils__timezone ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 176 );
        if ( HAS_ATTRIBUTE( _mvar_django__utils__timezone__active.asObject0(), _python_str_plain_value ) )
        {
            frame_guard.setLineNumber( 177 );
            DEL_ATTRIBUTE( _mvar_django__utils__timezone__active.asObject0(), _python_str_plain_value );
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

        if ( frame_guard.getFrame0() == frame_function_9_deactivate_of_module_django__utils__timezone )
        {
           Py_DECREF( frame_function_9_deactivate_of_module_django__utils__timezone );
           frame_function_9_deactivate_of_module_django__utils__timezone = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_9_deactivate_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        PyErr_Format( PyExc_TypeError, "deactivate() takes no arguments (%zd given)", args_given + kw_size );
#else
        if ( kw_size == 0 )
        {
           PyErr_Format( PyExc_TypeError, "deactivate() takes 0 positional arguments but %zd was given", args_given );
        }
        else
        {
           PyObject *tmp_iter = PyObject_GetIter( kw );
           PyObject *tmp_arg_name = PyIter_Next( tmp_iter );
           Py_DECREF( tmp_iter );

           PyErr_Format( PyExc_TypeError, "deactivate() got an unexpected keyword argument '%s'", Nuitka_String_AsString( tmp_arg_name ) );

           Py_DECREF( tmp_arg_name );
        }
#endif
        goto error_exit;
    }


    return impl_function_9_deactivate_of_module_django__utils__timezone( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_9_deactivate_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0)
    {
        return impl_function_9_deactivate_of_module_django__utils__timezone( self );
    }
    else
    {
        PyObject *result = fparse_function_9_deactivate_of_module_django__utils__timezone( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_10_override_of_module_django__utils__timezone(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var___enter__( _python_str_plain___enter__ );
    PyObjectLocalVariable _python_var___exit__( _python_str_plain___exit__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_timezone );
    _python_var___doc__.assign0( _python_str_digest_bb6615060b324d0cd8f868c367b42563 );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_10_override_of_module_django__utils__timezone(  ) );
    _python_var___enter__.assign1( MAKE_FUNCTION_function_2___enter___of_class_10_override_of_module_django__utils__timezone(  ) );
    _python_var___exit__.assign1( MAKE_FUNCTION_function_3___exit___of_class_10_override_of_module_django__utils__timezone(  ) );
    return _python_var___exit__.updateLocalsDict( _python_var___enter__.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_10_override_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_timezone )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_timezone( _python_str_plain_timezone, _python_par_timezone );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_10_override_of_module_django__utils__timezone = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_10_override_of_module_django__utils__timezone ) )
    {
        if ( frame_function_1___init___of_class_10_override_of_module_django__utils__timezone )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_10_override_of_module_django__utils__timezone" );
#endif
            Py_DECREF( frame_function_1___init___of_class_10_override_of_module_django__utils__timezone );
        }

        frame_function_1___init___of_class_10_override_of_module_django__utils__timezone = MAKE_FRAME( _codeobj_2493ba571bda6e5e6f8ef1fb3b96fb87, _module_django__utils__timezone );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_10_override_of_module_django__utils__timezone );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_10_override_of_module_django__utils__timezone ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 192 );
        {
                PyObject *tmp_identifier = _python_var_timezone.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_timezone );
        }
        frame_guard.setLineNumber( 193 );
        {
                PyObjectTemporary tmp_identifier( BUILTIN_GETATTR( _mvar_django__utils__timezone__active.asObject0(), _python_str_plain_value, Py_None ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_old_timezone );
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
        frame_guard.getFrame0()->f_locals = _python_var_timezone.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_10_override_of_module_django__utils__timezone )
        {
           Py_DECREF( frame_function_1___init___of_class_10_override_of_module_django__utils__timezone );
           frame_function_1___init___of_class_10_override_of_module_django__utils__timezone = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_10_override_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_timezone = NULL;
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
            if ( found == false && _python_str_plain_timezone == key )
            {
                if (unlikely( _python_par_timezone ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'timezone'" );
                    goto error_exit;
                }

                _python_par_timezone = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_timezone, key ) )
            {
                if (unlikely( _python_par_timezone ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'timezone'" );
                    goto error_exit;
                }

                _python_par_timezone = value;

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
         if (unlikely( _python_par_timezone != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'timezone'" );
             goto error_exit;
         }

        _python_par_timezone = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_1___init___of_class_10_override_of_module_django__utils__timezone( self, _python_par_self, _python_par_timezone );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_timezone );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_10_override_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1___init___of_class_10_override_of_module_django__utils__timezone( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_10_override_of_module_django__utils__timezone( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___enter___of_class_10_override_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_2___enter___of_class_10_override_of_module_django__utils__timezone = NULL;

    if ( isFrameUnusable( frame_function_2___enter___of_class_10_override_of_module_django__utils__timezone ) )
    {
        if ( frame_function_2___enter___of_class_10_override_of_module_django__utils__timezone )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2___enter___of_class_10_override_of_module_django__utils__timezone" );
#endif
            Py_DECREF( frame_function_2___enter___of_class_10_override_of_module_django__utils__timezone );
        }

        frame_function_2___enter___of_class_10_override_of_module_django__utils__timezone = MAKE_FRAME( _codeobj_36255ecd39f3896532413af4a807939d, _module_django__utils__timezone );
    }

    FrameGuard frame_guard( frame_function_2___enter___of_class_10_override_of_module_django__utils__timezone );
    try
    {
        assert( Py_REFCNT( frame_function_2___enter___of_class_10_override_of_module_django__utils__timezone ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 196 );
        if ( ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_timezone ) ).asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 197 );
            DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( _mvar_django__utils__timezone_deactivate.asObject0() ) );
        }
        else
        {
            frame_guard.setLineNumber( 199 );
            {
                PyObjectTempKeeper0 call1;
                DECREASE_REFCOUNT( ( call1.assign( _mvar_django__utils__timezone_activate.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_timezone ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_2___enter___of_class_10_override_of_module_django__utils__timezone )
        {
           Py_DECREF( frame_function_2___enter___of_class_10_override_of_module_django__utils__timezone );
           frame_function_2___enter___of_class_10_override_of_module_django__utils__timezone = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2___enter___of_class_10_override_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__enter__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__enter__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__enter__() got multiple values for keyword argument 'self'" );
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
                   "__enter__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__enter__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__enter__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__enter__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__enter__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__enter__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__enter__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__enter__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__enter__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__enter__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__enter__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__enter__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__enter__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__enter__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2___enter___of_class_10_override_of_module_django__utils__timezone( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2___enter___of_class_10_override_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2___enter___of_class_10_override_of_module_django__utils__timezone( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___enter___of_class_10_override_of_module_django__utils__timezone( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3___exit___of_class_10_override_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_exc_type, PyObject *_python_par_exc_value, PyObject *_python_par_traceback )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_exc_type( _python_str_plain_exc_type, _python_par_exc_type );
    PyObjectLocalParameterVariableNoDel _python_var_exc_value( _python_str_plain_exc_value, _python_par_exc_value );
    PyObjectLocalParameterVariableNoDel _python_var_traceback( _python_str_plain_traceback, _python_par_traceback );

    // Actual function code.
    static PyFrameObject *frame_function_3___exit___of_class_10_override_of_module_django__utils__timezone = NULL;

    if ( isFrameUnusable( frame_function_3___exit___of_class_10_override_of_module_django__utils__timezone ) )
    {
        if ( frame_function_3___exit___of_class_10_override_of_module_django__utils__timezone )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3___exit___of_class_10_override_of_module_django__utils__timezone" );
#endif
            Py_DECREF( frame_function_3___exit___of_class_10_override_of_module_django__utils__timezone );
        }

        frame_function_3___exit___of_class_10_override_of_module_django__utils__timezone = MAKE_FRAME( _codeobj_e71d0567c2898f63ad788f5da0f4bf44, _module_django__utils__timezone );
    }

    FrameGuard frame_guard( frame_function_3___exit___of_class_10_override_of_module_django__utils__timezone );
    try
    {
        assert( Py_REFCNT( frame_function_3___exit___of_class_10_override_of_module_django__utils__timezone ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 202 );
        if ( ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_old_timezone ) ).asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 203 );
            DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( _mvar_django__utils__timezone_deactivate.asObject0() ) );
        }
        else
        {
            frame_guard.setLineNumber( 205 );
            {
                    PyObjectTemporary tmp_identifier( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_old_timezone ) );
                    SET_ATTRIBUTE( tmp_identifier.asObject(), _mvar_django__utils__timezone__active.asObject0(), _python_str_plain_value );
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
        frame_guard.getFrame0()->f_locals = _python_var_traceback.updateLocalsDict( _python_var_exc_value.updateLocalsDict( _python_var_exc_type.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3___exit___of_class_10_override_of_module_django__utils__timezone )
        {
           Py_DECREF( frame_function_3___exit___of_class_10_override_of_module_django__utils__timezone );
           frame_function_3___exit___of_class_10_override_of_module_django__utils__timezone = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_3___exit___of_class_10_override_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_exc_type = NULL;
    PyObject *_python_par_exc_value = NULL;
    PyObject *_python_par_traceback = NULL;
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
                PyErr_Format( PyExc_TypeError, "__exit__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__exit__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_exc_type == key )
            {
                if (unlikely( _python_par_exc_type ))
                {
                    PyErr_Format( PyExc_TypeError, "__exit__() got multiple values for keyword argument 'exc_type'" );
                    goto error_exit;
                }

                _python_par_exc_type = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_exc_value == key )
            {
                if (unlikely( _python_par_exc_value ))
                {
                    PyErr_Format( PyExc_TypeError, "__exit__() got multiple values for keyword argument 'exc_value'" );
                    goto error_exit;
                }

                _python_par_exc_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_traceback == key )
            {
                if (unlikely( _python_par_traceback ))
                {
                    PyErr_Format( PyExc_TypeError, "__exit__() got multiple values for keyword argument 'traceback'" );
                    goto error_exit;
                }

                _python_par_traceback = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "__exit__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_exc_type, key ) )
            {
                if (unlikely( _python_par_exc_type ))
                {
                    PyErr_Format( PyExc_TypeError, "__exit__() got multiple values for keyword argument 'exc_type'" );
                    goto error_exit;
                }

                _python_par_exc_type = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_exc_value, key ) )
            {
                if (unlikely( _python_par_exc_value ))
                {
                    PyErr_Format( PyExc_TypeError, "__exit__() got multiple values for keyword argument 'exc_value'" );
                    goto error_exit;
                }

                _python_par_exc_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_traceback, key ) )
            {
                if (unlikely( _python_par_traceback ))
                {
                    PyErr_Format( PyExc_TypeError, "__exit__() got multiple values for keyword argument 'traceback'" );
                    goto error_exit;
                }

                _python_par_traceback = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__exit__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__exit__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__exit__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__exit__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__exit__() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "__exit__() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__exit__() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "__exit__() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__exit__() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__exit__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__exit__() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 4 )
                {
                    PyErr_Format( PyExc_TypeError, "__exit__() takes exactly %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__exit__() takes at least %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__exit__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_exc_type != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__exit__() got multiple values for keyword argument 'exc_type'" );
             goto error_exit;
         }

        _python_par_exc_type = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_exc_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__exit__() got multiple values for keyword argument 'exc_value'" );
             goto error_exit;
         }

        _python_par_exc_value = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_traceback != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__exit__() got multiple values for keyword argument 'traceback'" );
             goto error_exit;
         }

        _python_par_traceback = INCREASE_REFCOUNT( args[ 3 ] );
    }


    return impl_function_3___exit___of_class_10_override_of_module_django__utils__timezone( self, _python_par_self, _python_par_exc_type, _python_par_exc_value, _python_par_traceback );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_exc_type );
    Py_XDECREF( _python_par_exc_value );
    Py_XDECREF( _python_par_traceback );

    return NULL;
}

static PyObject *dparse_function_3___exit___of_class_10_override_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_3___exit___of_class_10_override_of_module_django__utils__timezone( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3___exit___of_class_10_override_of_module_django__utils__timezone( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_11_template_localtime_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_use_tz )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_use_tz( _python_str_plain_use_tz, _python_par_use_tz );
    PyObjectLocalVariable _python_var_should_convert( _python_str_plain_should_convert );

    // Actual function code.
    static PyFrameObject *frame_function_11_template_localtime_of_module_django__utils__timezone = NULL;

    if ( isFrameUnusable( frame_function_11_template_localtime_of_module_django__utils__timezone ) )
    {
        if ( frame_function_11_template_localtime_of_module_django__utils__timezone )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_11_template_localtime_of_module_django__utils__timezone" );
#endif
            Py_DECREF( frame_function_11_template_localtime_of_module_django__utils__timezone );
        }

        frame_function_11_template_localtime_of_module_django__utils__timezone = MAKE_FRAME( _codeobj_94a5dc4068f0a6ddd2481e3a463e54bc, _module_django__utils__timezone );
    }

    FrameGuard frame_guard( frame_function_11_template_localtime_of_module_django__utils__timezone );
    try
    {
        assert( Py_REFCNT( frame_function_11_template_localtime_of_module_django__utils__timezone ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 219 );
        {
            PyObjectTempKeeper0 call3;
            PyObjectTempKeeper0 isinstance1;
            PyObjectTempKeeper0 keeper_0;
            PyObjectTempKeeper1 keeper_1;
            PyObjectTempKeeper0 keeper_2;
            _python_var_should_convert.assign1( ( CHECK_IF_TRUE( keeper_2.assign( BOOL_FROM( ( isinstance1.assign( _python_var_value.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance1.asObject0(), _mvar_django__utils__timezone_datetime.asObject0() ) ) ) ) ) ? ( CHECK_IF_TRUE( keeper_1.assign( ( ( _python_var_use_tz.asObject() == Py_None ) ? LOOKUP_ATTRIBUTE( _mvar_django__utils__timezone_settings.asObject0(), _python_str_plain_USE_TZ ) : _python_var_use_tz.asObject1() ) ) ) ? ( CHECK_IF_TRUE( keeper_0.assign( UNARY_OPERATION( UNARY_NOT, PyObjectTemporary( ( call3.assign( _mvar_django__utils__timezone_is_naive.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_value.asObject() ) ) ).asObject() ) ) ) ? BUILTIN_GETATTR( _python_var_value.asObject(), _python_str_plain_convert_to_local_time, Py_True ) : INCREASE_REFCOUNT( keeper_0.asObject0() ) ) : keeper_1.asObject() ) : INCREASE_REFCOUNT( keeper_2.asObject0() ) ) );
        }
        frame_guard.setLineNumber( 223 );
        {
            PyObjectTempKeeper0 call5;
            return ( CHECK_IF_TRUE( _python_var_should_convert.asObject() ) ? ( call5.assign( _mvar_django__utils__timezone_localtime.asObject0() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_value.asObject() ) ) : _python_var_value.asObject1() );
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
        frame_guard.getFrame0()->f_locals = _python_var_use_tz.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_should_convert.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_11_template_localtime_of_module_django__utils__timezone )
        {
           Py_DECREF( frame_function_11_template_localtime_of_module_django__utils__timezone );
           frame_function_11_template_localtime_of_module_django__utils__timezone = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_11_template_localtime_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_use_tz = NULL;
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
                PyErr_Format( PyExc_TypeError, "template_localtime() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_value == key )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "template_localtime() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_use_tz == key )
            {
                if (unlikely( _python_par_use_tz ))
                {
                    PyErr_Format( PyExc_TypeError, "template_localtime() got multiple values for keyword argument 'use_tz'" );
                    goto error_exit;
                }

                _python_par_use_tz = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "template_localtime() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_use_tz, key ) )
            {
                if (unlikely( _python_par_use_tz ))
                {
                    PyErr_Format( PyExc_TypeError, "template_localtime() got multiple values for keyword argument 'use_tz'" );
                    goto error_exit;
                }

                _python_par_use_tz = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "template_localtime() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "template_localtime() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "template_localtime() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "template_localtime() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "template_localtime() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "template_localtime() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "template_localtime() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "template_localtime() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "template_localtime() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "template_localtime() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "template_localtime() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "template_localtime() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "template_localtime() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "template_localtime() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_use_tz != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "template_localtime() got multiple values for keyword argument 'use_tz'" );
             goto error_exit;
         }

        _python_par_use_tz = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_use_tz == NULL )
    {
        _python_par_use_tz = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_use_tz );
    }


    return impl_function_11_template_localtime_of_module_django__utils__timezone( self, _python_par_value, _python_par_use_tz );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_use_tz );

    return NULL;
}

static PyObject *dparse_function_11_template_localtime_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_11_template_localtime_of_module_django__utils__timezone( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_11_template_localtime_of_module_django__utils__timezone( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_12_localtime_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_timezone )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_timezone( _python_str_plain_timezone, _python_par_timezone );

    // Actual function code.
    static PyFrameObject *frame_function_12_localtime_of_module_django__utils__timezone = NULL;

    if ( isFrameUnusable( frame_function_12_localtime_of_module_django__utils__timezone ) )
    {
        if ( frame_function_12_localtime_of_module_django__utils__timezone )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_12_localtime_of_module_django__utils__timezone" );
#endif
            Py_DECREF( frame_function_12_localtime_of_module_django__utils__timezone );
        }

        frame_function_12_localtime_of_module_django__utils__timezone = MAKE_FRAME( _codeobj_93a5e70f32d083fa8e3b712a37716b88, _module_django__utils__timezone );
    }

    FrameGuard frame_guard( frame_function_12_localtime_of_module_django__utils__timezone );
    try
    {
        assert( Py_REFCNT( frame_function_12_localtime_of_module_django__utils__timezone ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 235 );
        if ( ( _python_var_timezone.asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 236 );
            _python_var_timezone.assign1( CALL_FUNCTION_NO_ARGS( _mvar_django__utils__timezone_get_current_timezone.asObject0() ) );
        }
        frame_guard.setLineNumber( 237 );
        {
            PyObjectTempKeeper1 call1;
            _python_var_value.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_value.asObject(), _python_str_plain_astimezone ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_timezone.asObject() ) ) );
        }
        frame_guard.setLineNumber( 238 );
        if ( HAS_ATTRIBUTE( _python_var_timezone.asObject(), _python_str_plain_normalize ) )
        {
            frame_guard.setLineNumber( 240 );
            {
                PyObjectTempKeeper1 call3;
                _python_var_value.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_timezone.asObject(), _python_str_plain_normalize ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_value.asObject() ) ) );
            }
        }
        frame_guard.setLineNumber( 241 );
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
        frame_guard.getFrame0()->f_locals = _python_var_timezone.updateLocalsDict( _python_var_value.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_12_localtime_of_module_django__utils__timezone )
        {
           Py_DECREF( frame_function_12_localtime_of_module_django__utils__timezone );
           frame_function_12_localtime_of_module_django__utils__timezone = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_12_localtime_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_timezone = NULL;
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
                PyErr_Format( PyExc_TypeError, "localtime() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_value == key )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "localtime() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_timezone == key )
            {
                if (unlikely( _python_par_timezone ))
                {
                    PyErr_Format( PyExc_TypeError, "localtime() got multiple values for keyword argument 'timezone'" );
                    goto error_exit;
                }

                _python_par_timezone = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "localtime() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_timezone, key ) )
            {
                if (unlikely( _python_par_timezone ))
                {
                    PyErr_Format( PyExc_TypeError, "localtime() got multiple values for keyword argument 'timezone'" );
                    goto error_exit;
                }

                _python_par_timezone = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "localtime() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "localtime() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "localtime() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "localtime() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "localtime() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "localtime() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "localtime() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "localtime() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "localtime() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "localtime() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "localtime() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "localtime() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "localtime() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "localtime() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_timezone != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "localtime() got multiple values for keyword argument 'timezone'" );
             goto error_exit;
         }

        _python_par_timezone = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_timezone == NULL )
    {
        _python_par_timezone = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_timezone );
    }


    return impl_function_12_localtime_of_module_django__utils__timezone( self, _python_par_value, _python_par_timezone );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_timezone );

    return NULL;
}

static PyObject *dparse_function_12_localtime_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_12_localtime_of_module_django__utils__timezone( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_12_localtime_of_module_django__utils__timezone( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_13_now_of_module_django__utils__timezone( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.


    // Actual function code.
    static PyFrameObject *frame_function_13_now_of_module_django__utils__timezone = NULL;

    if ( isFrameUnusable( frame_function_13_now_of_module_django__utils__timezone ) )
    {
        if ( frame_function_13_now_of_module_django__utils__timezone )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_13_now_of_module_django__utils__timezone" );
#endif
            Py_DECREF( frame_function_13_now_of_module_django__utils__timezone );
        }

        frame_function_13_now_of_module_django__utils__timezone = MAKE_FRAME( _codeobj_da7ff07d40c0f067cb9be5a6300c4fd4, _module_django__utils__timezone );
    }

    FrameGuard frame_guard( frame_function_13_now_of_module_django__utils__timezone );
    try
    {
        assert( Py_REFCNT( frame_function_13_now_of_module_django__utils__timezone ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 247 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__timezone_settings.asObject0(), _python_str_plain_USE_TZ ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 249 );
            {
                PyObjectTempKeeper1 call1;
                return ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__timezone_datetime.asObject0(), _python_str_plain_utcnow ) ).asObject() ) ).asObject(), _python_str_plain_replace ) ), CALL_FUNCTION( call1.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT1( _mvar_django__utils__timezone_utc.asObject0(), _python_str_plain_tzinfo ) ).asObject() ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 251 );
            return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__timezone_datetime.asObject0(), _python_str_plain_now ) ).asObject() );
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

        if ( frame_guard.getFrame0() == frame_function_13_now_of_module_django__utils__timezone )
        {
           Py_DECREF( frame_function_13_now_of_module_django__utils__timezone );
           frame_function_13_now_of_module_django__utils__timezone = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_13_now_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        PyErr_Format( PyExc_TypeError, "now() takes no arguments (%zd given)", args_given + kw_size );
#else
        if ( kw_size == 0 )
        {
           PyErr_Format( PyExc_TypeError, "now() takes 0 positional arguments but %zd was given", args_given );
        }
        else
        {
           PyObject *tmp_iter = PyObject_GetIter( kw );
           PyObject *tmp_arg_name = PyIter_Next( tmp_iter );
           Py_DECREF( tmp_iter );

           PyErr_Format( PyExc_TypeError, "now() got an unexpected keyword argument '%s'", Nuitka_String_AsString( tmp_arg_name ) );

           Py_DECREF( tmp_arg_name );
        }
#endif
        goto error_exit;
    }


    return impl_function_13_now_of_module_django__utils__timezone( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_function_13_now_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0)
    {
        return impl_function_13_now_of_module_django__utils__timezone( self );
    }
    else
    {
        PyObject *result = fparse_function_13_now_of_module_django__utils__timezone( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_14_is_aware_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_14_is_aware_of_module_django__utils__timezone = NULL;

    if ( isFrameUnusable( frame_function_14_is_aware_of_module_django__utils__timezone ) )
    {
        if ( frame_function_14_is_aware_of_module_django__utils__timezone )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_14_is_aware_of_module_django__utils__timezone" );
#endif
            Py_DECREF( frame_function_14_is_aware_of_module_django__utils__timezone );
        }

        frame_function_14_is_aware_of_module_django__utils__timezone = MAKE_FRAME( _codeobj_7b7329c22637184ebcc00a73712a565c, _module_django__utils__timezone );
    }

    FrameGuard frame_guard( frame_function_14_is_aware_of_module_django__utils__timezone );
    try
    {
        assert( Py_REFCNT( frame_function_14_is_aware_of_module_django__utils__timezone ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 263 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper0 keeper_0;
            return INCREASE_REFCOUNT( ( CHECK_IF_TRUE( keeper_0.assign( BOOL_FROM( ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_value.asObject(), _python_str_plain_tzinfo ) ).asObject() != Py_None ) ) ) ) ? BOOL_FROM( ( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_value.asObject(), _python_str_plain_tzinfo ) ).asObject(), _python_str_plain_utcoffset ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_value.asObject() ) ) ).asObject() != Py_None ) ) : keeper_0.asObject0() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_value.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_14_is_aware_of_module_django__utils__timezone )
        {
           Py_DECREF( frame_function_14_is_aware_of_module_django__utils__timezone );
           frame_function_14_is_aware_of_module_django__utils__timezone = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_14_is_aware_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
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
                PyErr_Format( PyExc_TypeError, "is_aware() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_value == key )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "is_aware() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "is_aware() got multiple values for keyword argument 'value'" );
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
                   "is_aware() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "is_aware() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "is_aware() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "is_aware() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "is_aware() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "is_aware() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "is_aware() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "is_aware() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "is_aware() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "is_aware() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "is_aware() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "is_aware() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "is_aware() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "is_aware() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_14_is_aware_of_module_django__utils__timezone( self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_14_is_aware_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_14_is_aware_of_module_django__utils__timezone( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_14_is_aware_of_module_django__utils__timezone( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_15_is_naive_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_15_is_naive_of_module_django__utils__timezone = NULL;

    if ( isFrameUnusable( frame_function_15_is_naive_of_module_django__utils__timezone ) )
    {
        if ( frame_function_15_is_naive_of_module_django__utils__timezone )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_15_is_naive_of_module_django__utils__timezone" );
#endif
            Py_DECREF( frame_function_15_is_naive_of_module_django__utils__timezone );
        }

        frame_function_15_is_naive_of_module_django__utils__timezone = MAKE_FRAME( _codeobj_c17acd13baa486783dedb47f9d643c71, _module_django__utils__timezone );
    }

    FrameGuard frame_guard( frame_function_15_is_naive_of_module_django__utils__timezone );
    try
    {
        assert( Py_REFCNT( frame_function_15_is_naive_of_module_django__utils__timezone ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 272 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper0 keeper_0;
            return INCREASE_REFCOUNT( ( CHECK_IF_TRUE( keeper_0.assign( BOOL_FROM( ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_value.asObject(), _python_str_plain_tzinfo ) ).asObject() == Py_None ) ) ) ) ? keeper_0.asObject0() : BOOL_FROM( ( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_value.asObject(), _python_str_plain_tzinfo ) ).asObject(), _python_str_plain_utcoffset ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_value.asObject() ) ) ).asObject() == Py_None ) ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_value.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_15_is_naive_of_module_django__utils__timezone )
        {
           Py_DECREF( frame_function_15_is_naive_of_module_django__utils__timezone );
           frame_function_15_is_naive_of_module_django__utils__timezone = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_15_is_naive_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
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
                PyErr_Format( PyExc_TypeError, "is_naive() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_value == key )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "is_naive() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "is_naive() got multiple values for keyword argument 'value'" );
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
                   "is_naive() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "is_naive() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "is_naive() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "is_naive() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "is_naive() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "is_naive() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "is_naive() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "is_naive() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "is_naive() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "is_naive() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "is_naive() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "is_naive() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "is_naive() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "is_naive() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_15_is_naive_of_module_django__utils__timezone( self, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_15_is_naive_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_15_is_naive_of_module_django__utils__timezone( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_15_is_naive_of_module_django__utils__timezone( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_16_make_aware_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_timezone )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_timezone( _python_str_plain_timezone, _python_par_timezone );

    // Actual function code.
    static PyFrameObject *frame_function_16_make_aware_of_module_django__utils__timezone = NULL;

    if ( isFrameUnusable( frame_function_16_make_aware_of_module_django__utils__timezone ) )
    {
        if ( frame_function_16_make_aware_of_module_django__utils__timezone )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_16_make_aware_of_module_django__utils__timezone" );
#endif
            Py_DECREF( frame_function_16_make_aware_of_module_django__utils__timezone );
        }

        frame_function_16_make_aware_of_module_django__utils__timezone = MAKE_FRAME( _codeobj_a407505b941920f17395c1e752fd12fa, _module_django__utils__timezone );
    }

    FrameGuard frame_guard( frame_function_16_make_aware_of_module_django__utils__timezone );
    try
    {
        assert( Py_REFCNT( frame_function_16_make_aware_of_module_django__utils__timezone ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 278 );
        if ( HAS_ATTRIBUTE( _python_var_timezone.asObject(), _python_str_plain_localize ) )
        {
            frame_guard.setLineNumber( 280 );
            {
                PyObjectTempKeeper1 call1;
                return ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_timezone.asObject(), _python_str_plain_localize ) ), CALL_FUNCTION( call1.asObject0(), PyObjectTemporary( MAKE_TUPLE1( _python_var_value.asObject() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_8e8c1d65431e3dd158521ef226d7852b ) ).asObject() ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 283 );
            {
                PyObjectTempKeeper1 call4;
                return ( call4.assign( LOOKUP_ATTRIBUTE( _python_var_value.asObject(), _python_str_plain_replace ) ), CALL_FUNCTION( call4.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT1( _python_var_timezone.asObject(), _python_str_plain_tzinfo ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_timezone.updateLocalsDict( _python_var_value.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_16_make_aware_of_module_django__utils__timezone )
        {
           Py_DECREF( frame_function_16_make_aware_of_module_django__utils__timezone );
           frame_function_16_make_aware_of_module_django__utils__timezone = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_16_make_aware_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_timezone = NULL;
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
                PyErr_Format( PyExc_TypeError, "make_aware() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_value == key )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "make_aware() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_timezone == key )
            {
                if (unlikely( _python_par_timezone ))
                {
                    PyErr_Format( PyExc_TypeError, "make_aware() got multiple values for keyword argument 'timezone'" );
                    goto error_exit;
                }

                _python_par_timezone = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "make_aware() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_timezone, key ) )
            {
                if (unlikely( _python_par_timezone ))
                {
                    PyErr_Format( PyExc_TypeError, "make_aware() got multiple values for keyword argument 'timezone'" );
                    goto error_exit;
                }

                _python_par_timezone = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "make_aware() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "make_aware() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "make_aware() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "make_aware() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "make_aware() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "make_aware() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "make_aware() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "make_aware() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "make_aware() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "make_aware() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "make_aware() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "make_aware() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "make_aware() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "make_aware() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_timezone != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "make_aware() got multiple values for keyword argument 'timezone'" );
             goto error_exit;
         }

        _python_par_timezone = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_16_make_aware_of_module_django__utils__timezone( self, _python_par_value, _python_par_timezone );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_timezone );

    return NULL;
}

static PyObject *dparse_function_16_make_aware_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_16_make_aware_of_module_django__utils__timezone( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_16_make_aware_of_module_django__utils__timezone( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_17_make_naive_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_timezone )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_timezone( _python_str_plain_timezone, _python_par_timezone );

    // Actual function code.
    static PyFrameObject *frame_function_17_make_naive_of_module_django__utils__timezone = NULL;

    if ( isFrameUnusable( frame_function_17_make_naive_of_module_django__utils__timezone ) )
    {
        if ( frame_function_17_make_naive_of_module_django__utils__timezone )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_17_make_naive_of_module_django__utils__timezone" );
#endif
            Py_DECREF( frame_function_17_make_naive_of_module_django__utils__timezone );
        }

        frame_function_17_make_naive_of_module_django__utils__timezone = MAKE_FRAME( _codeobj_56f738058470af23d08e455a9bf8430f, _module_django__utils__timezone );
    }

    FrameGuard frame_guard( frame_function_17_make_naive_of_module_django__utils__timezone );
    try
    {
        assert( Py_REFCNT( frame_function_17_make_naive_of_module_django__utils__timezone ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 289 );
        {
            PyObjectTempKeeper1 call1;
            _python_var_value.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_value.asObject(), _python_str_plain_astimezone ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_timezone.asObject() ) ) );
        }
        frame_guard.setLineNumber( 290 );
        if ( HAS_ATTRIBUTE( _python_var_timezone.asObject(), _python_str_plain_normalize ) )
        {
            frame_guard.setLineNumber( 292 );
            {
                PyObjectTempKeeper1 call3;
                _python_var_value.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_timezone.asObject(), _python_str_plain_normalize ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_value.asObject() ) ) );
            }
        }
        frame_guard.setLineNumber( 293 );
        return CALL_FUNCTION( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_value.asObject(), _python_str_plain_replace ) ).asObject(), _python_tuple_empty, PyObjectTemporary( PyDict_Copy( _python_dict_19923244156fa96a7d6f1da74d173385 ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_timezone.updateLocalsDict( _python_var_value.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_17_make_naive_of_module_django__utils__timezone )
        {
           Py_DECREF( frame_function_17_make_naive_of_module_django__utils__timezone );
           frame_function_17_make_naive_of_module_django__utils__timezone = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_17_make_naive_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_timezone = NULL;
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
                PyErr_Format( PyExc_TypeError, "make_naive() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_value == key )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "make_naive() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_timezone == key )
            {
                if (unlikely( _python_par_timezone ))
                {
                    PyErr_Format( PyExc_TypeError, "make_naive() got multiple values for keyword argument 'timezone'" );
                    goto error_exit;
                }

                _python_par_timezone = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "make_naive() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_timezone, key ) )
            {
                if (unlikely( _python_par_timezone ))
                {
                    PyErr_Format( PyExc_TypeError, "make_naive() got multiple values for keyword argument 'timezone'" );
                    goto error_exit;
                }

                _python_par_timezone = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "make_naive() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "make_naive() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "make_naive() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "make_naive() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "make_naive() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "make_naive() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "make_naive() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "make_naive() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "make_naive() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "make_naive() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "make_naive() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "make_naive() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "make_naive() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "make_naive() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_timezone != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "make_naive() got multiple values for keyword argument 'timezone'" );
             goto error_exit;
         }

        _python_par_timezone = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_17_make_naive_of_module_django__utils__timezone( self, _python_par_value, _python_par_timezone );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_timezone );

    return NULL;
}

static PyObject *dparse_function_17_make_naive_of_module_django__utils__timezone( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_17_make_naive_of_module_django__utils__timezone( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_17_make_naive_of_module_django__utils__timezone( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_11_template_localtime_of_module_django__utils__timezone(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_11_template_localtime_of_module_django__utils__timezone,
        dparse_function_11_template_localtime_of_module_django__utils__timezone,
        _python_str_plain_template_localtime,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_94a5dc4068f0a6ddd2481e3a463e54bc,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__timezone,
        _python_str_digest_1ea9ad6dc71c3cc2fc766a480ebb1ca5
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_12_localtime_of_module_django__utils__timezone(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_12_localtime_of_module_django__utils__timezone,
        dparse_function_12_localtime_of_module_django__utils__timezone,
        _python_str_plain_localtime,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_93a5e70f32d083fa8e3b712a37716b88,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__timezone,
        _python_str_digest_fd743c78fcbe6ea8702264b9ac398aca
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_13_now_of_module_django__utils__timezone(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_13_now_of_module_django__utils__timezone,
        dparse_function_13_now_of_module_django__utils__timezone,
        _python_str_plain_now,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_da7ff07d40c0f067cb9be5a6300c4fd4,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__timezone,
        _python_str_digest_76c8ff7ab07ecaa24e7d53e8c3663fb8
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_14_is_aware_of_module_django__utils__timezone(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_14_is_aware_of_module_django__utils__timezone,
        dparse_function_14_is_aware_of_module_django__utils__timezone,
        _python_str_plain_is_aware,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_7b7329c22637184ebcc00a73712a565c,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__timezone,
        _python_str_digest_e8fec486e6bc2ade3661889bfefbb34d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_15_is_naive_of_module_django__utils__timezone(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_15_is_naive_of_module_django__utils__timezone,
        dparse_function_15_is_naive_of_module_django__utils__timezone,
        _python_str_plain_is_naive,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_c17acd13baa486783dedb47f9d643c71,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__timezone,
        _python_str_digest_0ce37a0a11ca8c73ec60c93b7e4dddcd
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_16_make_aware_of_module_django__utils__timezone(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_16_make_aware_of_module_django__utils__timezone,
        dparse_function_16_make_aware_of_module_django__utils__timezone,
        _python_str_plain_make_aware,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_a407505b941920f17395c1e752fd12fa,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__timezone,
        _python_str_digest_4def10b15b63b0d4849e43f3ea7e16f3
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_17_make_naive_of_module_django__utils__timezone(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_17_make_naive_of_module_django__utils__timezone,
        dparse_function_17_make_naive_of_module_django__utils__timezone,
        _python_str_plain_make_naive,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_56f738058470af23d08e455a9bf8430f,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__timezone,
        _python_str_digest_f38e0c5d212c8abe5dafde6125565d14
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_10_override_of_module_django__utils__timezone(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_10_override_of_module_django__utils__timezone,
        dparse_function_1___init___of_class_10_override_of_module_django__utils__timezone,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_2493ba571bda6e5e6f8ef1fb3b96fb87,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__timezone,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__timezone(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__timezone,
        dparse_function_1___init___of_class_2_LocalTimezone_of_module_django__utils__timezone,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_f66b146a6a08b202aa9f413ad08e0639,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__timezone,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___repr___of_class_1_UTC_of_module_django__utils__timezone(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___repr___of_class_1_UTC_of_module_django__utils__timezone,
        dparse_function_1___repr___of_class_1_UTC_of_module_django__utils__timezone,
        _python_str_plain___repr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_c3bfe77ab184716e36e62052ee0328f2,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__timezone,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___enter___of_class_10_override_of_module_django__utils__timezone(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___enter___of_class_10_override_of_module_django__utils__timezone,
        dparse_function_2___enter___of_class_10_override_of_module_django__utils__timezone,
        _python_str_plain___enter__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_36255ecd39f3896532413af4a807939d,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__timezone,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___repr___of_class_2_LocalTimezone_of_module_django__utils__timezone(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___repr___of_class_2_LocalTimezone_of_module_django__utils__timezone,
        dparse_function_2___repr___of_class_2_LocalTimezone_of_module_django__utils__timezone,
        _python_str_plain___repr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_cf1e9ae2ea548ffb7a9cb25af34cd17a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__timezone,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_utcoffset_of_class_1_UTC_of_module_django__utils__timezone(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_utcoffset_of_class_1_UTC_of_module_django__utils__timezone,
        dparse_function_2_utcoffset_of_class_1_UTC_of_module_django__utils__timezone,
        _python_str_plain_utcoffset,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_1a31bcd4b89f4ba9bb4f040dfcc55f7a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__timezone,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3___exit___of_class_10_override_of_module_django__utils__timezone(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3___exit___of_class_10_override_of_module_django__utils__timezone,
        dparse_function_3___exit___of_class_10_override_of_module_django__utils__timezone,
        _python_str_plain___exit__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e71d0567c2898f63ad788f5da0f4bf44,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__timezone,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_get_default_timezone_of_module_django__utils__timezone(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_get_default_timezone_of_module_django__utils__timezone,
        dparse_function_3_get_default_timezone_of_module_django__utils__timezone,
        _python_str_plain_get_default_timezone,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ab54f0c81cc095b91fb4b782096a5e91,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__timezone,
        _python_str_digest_cfd4d240d4e985f5ed3040cb48d56005
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_tzname_of_class_1_UTC_of_module_django__utils__timezone(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_tzname_of_class_1_UTC_of_module_django__utils__timezone,
        dparse_function_3_tzname_of_class_1_UTC_of_module_django__utils__timezone,
        _python_str_plain_tzname,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_770bf0c8eaafae43a124a98d415cefb3,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__timezone,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__timezone(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__timezone,
        dparse_function_3_utcoffset_of_class_2_LocalTimezone_of_module_django__utils__timezone,
        _python_str_plain_utcoffset,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_58f7cb1a7e78e019a9ce357cdc5428cc,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__timezone,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_dst_of_class_1_UTC_of_module_django__utils__timezone(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_dst_of_class_1_UTC_of_module_django__utils__timezone,
        dparse_function_4_dst_of_class_1_UTC_of_module_django__utils__timezone,
        _python_str_plain_dst,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_5e7e748076f70034235fefb8532cd02e,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__timezone,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_dst_of_class_2_LocalTimezone_of_module_django__utils__timezone(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_dst_of_class_2_LocalTimezone_of_module_django__utils__timezone,
        dparse_function_4_dst_of_class_2_LocalTimezone_of_module_django__utils__timezone,
        _python_str_plain_dst,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b0d73474509682a20a9e8fd4c169e34d,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__timezone,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_get_default_timezone_name_of_module_django__utils__timezone(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_get_default_timezone_name_of_module_django__utils__timezone,
        dparse_function_4_get_default_timezone_name_of_module_django__utils__timezone,
        _python_str_plain_get_default_timezone_name,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_f1272e4ea941fdfe0d6eecda548161bc,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__timezone,
        _python_str_digest_044b4f7d99391f92a4a20bf15c7ef149
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_get_current_timezone_of_module_django__utils__timezone(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_get_current_timezone_of_module_django__utils__timezone,
        dparse_function_5_get_current_timezone_of_module_django__utils__timezone,
        _python_str_plain_get_current_timezone,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_a8a2c2d7f7ce0669b4c7e9e059c611d8,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__timezone,
        _python_str_digest_34d3f92afd1c119b68e0aba7ee48f8fd
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_tzname_of_class_2_LocalTimezone_of_module_django__utils__timezone(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_tzname_of_class_2_LocalTimezone_of_module_django__utils__timezone,
        dparse_function_5_tzname_of_class_2_LocalTimezone_of_module_django__utils__timezone,
        _python_str_plain_tzname,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d588dd78b013eb9240a209f529085277,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__timezone,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6__isdst_of_class_2_LocalTimezone_of_module_django__utils__timezone(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6__isdst_of_class_2_LocalTimezone_of_module_django__utils__timezone,
        dparse_function_6__isdst_of_class_2_LocalTimezone_of_module_django__utils__timezone,
        _python_str_plain__isdst,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d74c3755ffc4020b8fe9b1e873cb964a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__timezone,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_get_current_timezone_name_of_module_django__utils__timezone(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_get_current_timezone_name_of_module_django__utils__timezone,
        dparse_function_6_get_current_timezone_name_of_module_django__utils__timezone,
        _python_str_plain_get_current_timezone_name,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_15aeb24a2bf449c904168837b0b180bd,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__timezone,
        _python_str_digest_e2664b2c598d584a7a1b1fd7b2ae5ef8
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7__get_timezone_name_of_module_django__utils__timezone(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7__get_timezone_name_of_module_django__utils__timezone,
        dparse_function_7__get_timezone_name_of_module_django__utils__timezone,
        _python_str_plain__get_timezone_name,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d045f6e38d1c503771bb407a402ad5ff,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__timezone,
        _python_str_digest_f37b9808e1295eff9e2e7b00322ed478
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_activate_of_module_django__utils__timezone(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_activate_of_module_django__utils__timezone,
        dparse_function_8_activate_of_module_django__utils__timezone,
        _python_str_plain_activate,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_1a38f889066ae1df8c9c7bfdc4ae71ae,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__timezone,
        _python_str_digest_52375a421b17e2f6b89cf1c1383aa090
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_deactivate_of_module_django__utils__timezone(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_deactivate_of_module_django__utils__timezone,
        dparse_function_9_deactivate_of_module_django__utils__timezone,
        _python_str_plain_deactivate,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_55d69368fcdb9825ea11f1c7ddd851ab,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__timezone,
        _python_str_digest_3d68cd033deac35483020af2e88c3d7a
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.utils.timezone",   /* m_name */
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

MOD_INIT_DECL( django__utils__timezone )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__utils__timezone );
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

    // puts( "in initdjango__utils__timezone" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__utils__timezone = Py_InitModule4(
        "django.utils.timezone",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__utils__timezone = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__utils__timezone = (PyDictObject *)((PyModuleObject *)_module_django__utils__timezone)->md_dict;

    assertObject( _module_django__utils__timezone );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_73d3e50847215b8dcd97fb275615b5ea, _module_django__utils__timezone );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__utils__timezone );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__utils__timezone != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__utils__timezone, (Nuitka_StringObject *)_python_str_plain___doc__, _python_str_digest_f18ea75d7fb9e5a9ec680f0fd983d861 );
    UPDATE_STRING_DICT0( _moduledict_django__utils__timezone, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_87507a5432b8e484ea76c7a0a3830b98 );
    PyFrameObject *frame_module_django__utils__timezone = MAKE_FRAME( _codeobj_334aa3cef541e998ce82b0d7a89e827b, _module_django__utils__timezone );

    FrameGuard frame_guard( frame_module_django__utils__timezone );
    try
    {
        assert( Py_REFCNT( frame_module_django__utils__timezone ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 6 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__timezone, (Nuitka_StringObject *)_python_str_plain_datetime, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_datetime, ((PyModuleObject *)_module_django__utils__timezone)->md_dict, ((PyModuleObject *)_module_django__utils__timezone)->md_dict, _python_list_str_plain_datetime_str_plain_timedelta_str_plain_tzinfo_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_datetime ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__timezone, (Nuitka_StringObject *)_python_str_plain_timedelta, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_datetime, ((PyModuleObject *)_module_django__utils__timezone)->md_dict, ((PyModuleObject *)_module_django__utils__timezone)->md_dict, _python_list_str_plain_datetime_str_plain_timedelta_str_plain_tzinfo_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_timedelta ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__timezone, (Nuitka_StringObject *)_python_str_plain_tzinfo, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_datetime, ((PyModuleObject *)_module_django__utils__timezone)->md_dict, ((PyModuleObject *)_module_django__utils__timezone)->md_dict, _python_list_str_plain_datetime_str_plain_timedelta_str_plain_tzinfo_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_tzinfo ) );
        frame_guard.setLineNumber( 7 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__timezone, (Nuitka_StringObject *)_python_str_plain_local, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_threading, ((PyModuleObject *)_module_django__utils__timezone)->md_dict, ((PyModuleObject *)_module_django__utils__timezone)->md_dict, _python_list_str_plain_local_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_local ) );
        frame_guard.setLineNumber( 8 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__timezone, (Nuitka_StringObject *)_python_str_plain__time, IMPORT_MODULE( _python_str_plain_time, ((PyModuleObject *)_module_django__utils__timezone)->md_dict, ((PyModuleObject *)_module_django__utils__timezone)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 10 );
        try
        {
            frame_guard.setLineNumber( 11 );
            UPDATE_STRING_DICT1( _moduledict_django__utils__timezone, (Nuitka_StringObject *)_python_str_plain_pytz, IMPORT_MODULE( _python_str_plain_pytz, ((PyModuleObject *)_module_django__utils__timezone)->md_dict, ((PyModuleObject *)_module_django__utils__timezone)->md_dict, Py_None, _python_int_neg_1 ) );
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
                UPDATE_STRING_DICT0( _moduledict_django__utils__timezone, (Nuitka_StringObject *)_python_str_plain_pytz, Py_None );
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
        frame_guard.setLineNumber( 15 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__timezone, (Nuitka_StringObject *)_python_str_plain_settings, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__utils__timezone)->md_dict, ((PyModuleObject *)_module_django__utils__timezone)->md_dict, _python_list_str_plain_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_settings ) );
        frame_guard.setLineNumber( 16 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__timezone, (Nuitka_StringObject *)_python_str_plain_six, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__utils__timezone)->md_dict, ((PyModuleObject *)_module_django__utils__timezone)->md_dict, _python_list_str_plain_six_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_six ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__timezone, (Nuitka_StringObject *)_python_str_plain___all__, LIST_COPY( _python_list_badad6327a600884f82a69fd45b90af5_list ) );
        frame_guard.setLineNumber( 27 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__timezone, (Nuitka_StringObject *)_python_str_plain_ZERO, CALL_FUNCTION_WITH_ARGS( _mvar_django__utils__timezone_timedelta.asObject0(), _python_int_0 ) );
        {
            frame_guard.setLineNumber( 29 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__utils__timezone_tzinfo.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_1_UTC_of_module_django__utils__timezone(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__utils__timezone___metaclass__.isInitialized( false ) ? _mvar_django__utils__timezone___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_UTC, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__utils__timezone, (Nuitka_StringObject *)_python_str_plain_UTC, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 48 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__utils__timezone_tzinfo.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_2_LocalTimezone_of_module_django__utils__timezone(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__utils__timezone___metaclass__.isInitialized( false ) ? _mvar_django__utils__timezone___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper0 call7;
                _tmp_python_tmp_class = ( call5.assign( _python_tmp_metaclass.asObject() ), call7.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_str_plain_LocalTimezone, call7.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__utils__timezone, (Nuitka_StringObject *)_python_str_plain_LocalTimezone, _python_tmp_class.asObject() );
        }
        frame_guard.setLineNumber( 95 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__timezone, (Nuitka_StringObject *)_python_str_plain_utc, ( CHECK_IF_TRUE( _mvar_django__utils__timezone_pytz.asObject0() ) ? LOOKUP_ATTRIBUTE( _mvar_django__utils__timezone_pytz.asObject0(), _python_str_plain_utc ) : CALL_FUNCTION_NO_ARGS( _mvar_django__utils__timezone_UTC.asObject0() ) ) );
        UPDATE_STRING_DICT0( _moduledict_django__utils__timezone, (Nuitka_StringObject *)_python_str_plain__localtime, Py_None );
        UPDATE_STRING_DICT1( _moduledict_django__utils__timezone, (Nuitka_StringObject *)_python_str_plain_get_default_timezone, MAKE_FUNCTION_function_3_get_default_timezone_of_module_django__utils__timezone(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__timezone, (Nuitka_StringObject *)_python_str_plain_get_default_timezone_name, MAKE_FUNCTION_function_4_get_default_timezone_name_of_module_django__utils__timezone(  ) );
        frame_guard.setLineNumber( 126 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__timezone, (Nuitka_StringObject *)_python_str_plain__active, CALL_FUNCTION_NO_ARGS( _mvar_django__utils__timezone_local.asObject0() ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__timezone, (Nuitka_StringObject *)_python_str_plain_get_current_timezone, MAKE_FUNCTION_function_5_get_current_timezone_of_module_django__utils__timezone(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__timezone, (Nuitka_StringObject *)_python_str_plain_get_current_timezone_name, MAKE_FUNCTION_function_6_get_current_timezone_name_of_module_django__utils__timezone(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__timezone, (Nuitka_StringObject *)_python_str_plain__get_timezone_name, MAKE_FUNCTION_function_7__get_timezone_name_of_module_django__utils__timezone(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__timezone, (Nuitka_StringObject *)_python_str_plain_activate, MAKE_FUNCTION_function_8_activate_of_module_django__utils__timezone(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__timezone, (Nuitka_StringObject *)_python_str_plain_deactivate, MAKE_FUNCTION_function_9_deactivate_of_module_django__utils__timezone(  ) );
        {
            frame_guard.setLineNumber( 179 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_10_override_of_module_django__utils__timezone(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__utils__timezone___metaclass__.isInitialized( false ) ? _mvar_django__utils__timezone___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call11;
                PyObjectTempKeeper0 call9;
                _tmp_python_tmp_class = ( call9.assign( _python_tmp_metaclass.asObject() ), call11.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_str_plain_override, call11.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__utils__timezone, (Nuitka_StringObject *)_python_str_plain_override, _python_tmp_class.asObject() );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__utils__timezone)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__utils__timezone, (Nuitka_StringObject *)_python_str_plain_template_localtime, MAKE_FUNCTION_function_11_template_localtime_of_module_django__utils__timezone(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__timezone, (Nuitka_StringObject *)_python_str_plain_localtime, MAKE_FUNCTION_function_12_localtime_of_module_django__utils__timezone(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__timezone, (Nuitka_StringObject *)_python_str_plain_now, MAKE_FUNCTION_function_13_now_of_module_django__utils__timezone(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__timezone, (Nuitka_StringObject *)_python_str_plain_is_aware, MAKE_FUNCTION_function_14_is_aware_of_module_django__utils__timezone(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__timezone, (Nuitka_StringObject *)_python_str_plain_is_naive, MAKE_FUNCTION_function_15_is_naive_of_module_django__utils__timezone(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__timezone, (Nuitka_StringObject *)_python_str_plain_make_aware, MAKE_FUNCTION_function_16_make_aware_of_module_django__utils__timezone(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__timezone, (Nuitka_StringObject *)_python_str_plain_make_naive, MAKE_FUNCTION_function_17_make_naive_of_module_django__utils__timezone(  ) );

   return MOD_RETURN_VALUE( _module_django__utils__timezone );
}
