// Generated code for Python source for module 'django.utils.datetime_safe'
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

// The _module_django__utils__datetime_safe is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__utils__datetime_safe;
PyDictObject *_moduledict_django__utils__datetime_safe;

// The module level variables.
static PyObjectGlobalVariable_django__utils__datetime_safe _mvar_django__utils__datetime_safe___metaclass__( &_module_django__utils__datetime_safe, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__utils__datetime_safe _mvar_django__utils__datetime_safe__findall( &_module_django__utils__datetime_safe, &_python_str_plain__findall );
static PyObjectGlobalVariable_django__utils__datetime_safe _mvar_django__utils__datetime_safe__illegal_formatting( &_module_django__utils__datetime_safe, &_python_str_plain__illegal_formatting );
static PyObjectGlobalVariable_django__utils__datetime_safe _mvar_django__utils__datetime_safe_date( &_module_django__utils__datetime_safe, &_python_str_plain_date );
static PyObjectGlobalVariable_django__utils__datetime_safe _mvar_django__utils__datetime_safe_datetime( &_module_django__utils__datetime_safe, &_python_str_plain_datetime );
static PyObjectGlobalVariable_django__utils__datetime_safe _mvar_django__utils__datetime_safe_re( &_module_django__utils__datetime_safe, &_python_str_plain_re );
static PyObjectGlobalVariable_django__utils__datetime_safe _mvar_django__utils__datetime_safe_real_date( &_module_django__utils__datetime_safe, &_python_str_plain_real_date );
static PyObjectGlobalVariable_django__utils__datetime_safe _mvar_django__utils__datetime_safe_real_datetime( &_module_django__utils__datetime_safe, &_python_str_plain_real_datetime );
static PyObjectGlobalVariable_django__utils__datetime_safe _mvar_django__utils__datetime_safe_strftime( &_module_django__utils__datetime_safe, &_python_str_plain_strftime );
static PyObjectGlobalVariable_django__utils__datetime_safe _mvar_django__utils__datetime_safe_time( &_module_django__utils__datetime_safe, &_python_str_plain_time );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_date_of_module_django__utils__datetime_safe(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_2_datetime_of_module_django__utils__datetime_safe(  );


static PyObject *MAKE_FUNCTION_function_1_strftime_of_class_1_date_of_module_django__utils__datetime_safe(  );


static PyObject *MAKE_FUNCTION_function_1_strftime_of_class_2_datetime_of_module_django__utils__datetime_safe(  );


static PyObject *MAKE_FUNCTION_function_2_combine_of_class_2_datetime_of_module_django__utils__datetime_safe(  );


static PyObject *MAKE_FUNCTION_function_3_date_of_class_2_datetime_of_module_django__utils__datetime_safe(  );


static PyObject *MAKE_FUNCTION_function_3_new_date_of_module_django__utils__datetime_safe(  );


static PyObject *MAKE_FUNCTION_function_4_new_datetime_of_module_django__utils__datetime_safe(  );


static PyObject *MAKE_FUNCTION_function_5__findall_of_module_django__utils__datetime_safe(  );


static PyObject *MAKE_FUNCTION_function_6_strftime_of_module_django__utils__datetime_safe(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_date_of_module_django__utils__datetime_safe(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var_strftime( _python_str_plain_strftime );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_datetime_safe );
    _python_var_strftime.assign1( MAKE_FUNCTION_function_1_strftime_of_class_1_date_of_module_django__utils__datetime_safe(  ) );
    return _python_var_strftime.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) );
}


static PyObject *impl_function_1_strftime_of_class_1_date_of_module_django__utils__datetime_safe( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_fmt )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_fmt( _python_str_plain_fmt, _python_par_fmt );

    // Actual function code.
    static PyFrameObject *frame_function_1_strftime_of_class_1_date_of_module_django__utils__datetime_safe = NULL;

    if ( isFrameUnusable( frame_function_1_strftime_of_class_1_date_of_module_django__utils__datetime_safe ) )
    {
        if ( frame_function_1_strftime_of_class_1_date_of_module_django__utils__datetime_safe )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_strftime_of_class_1_date_of_module_django__utils__datetime_safe" );
#endif
            Py_DECREF( frame_function_1_strftime_of_class_1_date_of_module_django__utils__datetime_safe );
        }

        frame_function_1_strftime_of_class_1_date_of_module_django__utils__datetime_safe = MAKE_FRAME( _codeobj_88a419b2dc53bb1062c32b3e97fb6e8f, _module_django__utils__datetime_safe );
    }

    FrameGuard frame_guard( frame_function_1_strftime_of_class_1_date_of_module_django__utils__datetime_safe );
    try
    {
        assert( Py_REFCNT( frame_function_1_strftime_of_class_1_date_of_module_django__utils__datetime_safe ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 16 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper0 call2;
            return ( call1.assign( _mvar_django__utils__datetime_safe_strftime.asObject0() ), call2.assign( _python_var_self.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _python_var_fmt.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_fmt.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_1_strftime_of_class_1_date_of_module_django__utils__datetime_safe )
        {
           Py_DECREF( frame_function_1_strftime_of_class_1_date_of_module_django__utils__datetime_safe );
           frame_function_1_strftime_of_class_1_date_of_module_django__utils__datetime_safe = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1_strftime_of_class_1_date_of_module_django__utils__datetime_safe( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_fmt = NULL;
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
                PyErr_Format( PyExc_TypeError, "strftime() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "strftime() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_fmt == key )
            {
                if (unlikely( _python_par_fmt ))
                {
                    PyErr_Format( PyExc_TypeError, "strftime() got multiple values for keyword argument 'fmt'" );
                    goto error_exit;
                }

                _python_par_fmt = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "strftime() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_fmt, key ) )
            {
                if (unlikely( _python_par_fmt ))
                {
                    PyErr_Format( PyExc_TypeError, "strftime() got multiple values for keyword argument 'fmt'" );
                    goto error_exit;
                }

                _python_par_fmt = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "strftime() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "strftime() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "strftime() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "strftime() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "strftime() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "strftime() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "strftime() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "strftime() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "strftime() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "strftime() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "strftime() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "strftime() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "strftime() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "strftime() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_fmt != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "strftime() got multiple values for keyword argument 'fmt'" );
             goto error_exit;
         }

        _python_par_fmt = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_1_strftime_of_class_1_date_of_module_django__utils__datetime_safe( self, _python_par_self, _python_par_fmt );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_fmt );

    return NULL;
}

static PyObject *dparse_function_1_strftime_of_class_1_date_of_module_django__utils__datetime_safe( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1_strftime_of_class_1_date_of_module_django__utils__datetime_safe( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_strftime_of_class_1_date_of_module_django__utils__datetime_safe( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_2_datetime_of_module_django__utils__datetime_safe(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var_strftime( _python_str_plain_strftime );
    PyObjectLocalVariable _python_var_combine( _python_str_plain_combine );
    PyObjectLocalVariable _python_var_date( _python_str_plain_date );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_datetime_safe );
    _python_var_strftime.assign1( MAKE_FUNCTION_function_1_strftime_of_class_2_datetime_of_module_django__utils__datetime_safe(  ) );
    _python_var_combine.assign1( MAKE_FUNCTION_function_2_combine_of_class_2_datetime_of_module_django__utils__datetime_safe(  ) );
    _python_var_date.assign1( MAKE_FUNCTION_function_3_date_of_class_2_datetime_of_module_django__utils__datetime_safe(  ) );
    return _python_var_date.updateLocalsDict( _python_var_combine.updateLocalsDict( _python_var_strftime.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) );
}


static PyObject *impl_function_1_strftime_of_class_2_datetime_of_module_django__utils__datetime_safe( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_fmt )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_fmt( _python_str_plain_fmt, _python_par_fmt );

    // Actual function code.
    static PyFrameObject *frame_function_1_strftime_of_class_2_datetime_of_module_django__utils__datetime_safe = NULL;

    if ( isFrameUnusable( frame_function_1_strftime_of_class_2_datetime_of_module_django__utils__datetime_safe ) )
    {
        if ( frame_function_1_strftime_of_class_2_datetime_of_module_django__utils__datetime_safe )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_strftime_of_class_2_datetime_of_module_django__utils__datetime_safe" );
#endif
            Py_DECREF( frame_function_1_strftime_of_class_2_datetime_of_module_django__utils__datetime_safe );
        }

        frame_function_1_strftime_of_class_2_datetime_of_module_django__utils__datetime_safe = MAKE_FRAME( _codeobj_8d7c448f6a793ebb868427f0508f472f, _module_django__utils__datetime_safe );
    }

    FrameGuard frame_guard( frame_function_1_strftime_of_class_2_datetime_of_module_django__utils__datetime_safe );
    try
    {
        assert( Py_REFCNT( frame_function_1_strftime_of_class_2_datetime_of_module_django__utils__datetime_safe ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 20 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper0 call2;
            return ( call1.assign( _mvar_django__utils__datetime_safe_strftime.asObject0() ), call2.assign( _python_var_self.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _python_var_fmt.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_fmt.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_1_strftime_of_class_2_datetime_of_module_django__utils__datetime_safe )
        {
           Py_DECREF( frame_function_1_strftime_of_class_2_datetime_of_module_django__utils__datetime_safe );
           frame_function_1_strftime_of_class_2_datetime_of_module_django__utils__datetime_safe = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1_strftime_of_class_2_datetime_of_module_django__utils__datetime_safe( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_fmt = NULL;
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
                PyErr_Format( PyExc_TypeError, "strftime() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "strftime() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_fmt == key )
            {
                if (unlikely( _python_par_fmt ))
                {
                    PyErr_Format( PyExc_TypeError, "strftime() got multiple values for keyword argument 'fmt'" );
                    goto error_exit;
                }

                _python_par_fmt = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "strftime() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_fmt, key ) )
            {
                if (unlikely( _python_par_fmt ))
                {
                    PyErr_Format( PyExc_TypeError, "strftime() got multiple values for keyword argument 'fmt'" );
                    goto error_exit;
                }

                _python_par_fmt = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "strftime() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "strftime() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "strftime() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "strftime() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "strftime() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "strftime() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "strftime() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "strftime() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "strftime() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "strftime() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "strftime() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "strftime() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "strftime() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "strftime() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_fmt != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "strftime() got multiple values for keyword argument 'fmt'" );
             goto error_exit;
         }

        _python_par_fmt = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_1_strftime_of_class_2_datetime_of_module_django__utils__datetime_safe( self, _python_par_self, _python_par_fmt );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_fmt );

    return NULL;
}

static PyObject *dparse_function_1_strftime_of_class_2_datetime_of_module_django__utils__datetime_safe( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1_strftime_of_class_2_datetime_of_module_django__utils__datetime_safe( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_strftime_of_class_2_datetime_of_module_django__utils__datetime_safe( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_combine_of_class_2_datetime_of_module_django__utils__datetime_safe( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_date, PyObject *_python_par_time )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_date( _python_str_plain_date, _python_par_date );
    PyObjectLocalParameterVariableNoDel _python_var_time( _python_str_plain_time, _python_par_time );

    // Actual function code.
    static PyFrameObject *frame_function_2_combine_of_class_2_datetime_of_module_django__utils__datetime_safe = NULL;

    if ( isFrameUnusable( frame_function_2_combine_of_class_2_datetime_of_module_django__utils__datetime_safe ) )
    {
        if ( frame_function_2_combine_of_class_2_datetime_of_module_django__utils__datetime_safe )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_combine_of_class_2_datetime_of_module_django__utils__datetime_safe" );
#endif
            Py_DECREF( frame_function_2_combine_of_class_2_datetime_of_module_django__utils__datetime_safe );
        }

        frame_function_2_combine_of_class_2_datetime_of_module_django__utils__datetime_safe = MAKE_FRAME( _codeobj_b166b321048e94a22ce0573134e4a458, _module_django__utils__datetime_safe );
    }

    FrameGuard frame_guard( frame_function_2_combine_of_class_2_datetime_of_module_django__utils__datetime_safe );
    try
    {
        assert( Py_REFCNT( frame_function_2_combine_of_class_2_datetime_of_module_django__utils__datetime_safe ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 23 );
        {
            PyObjectTempKeeper0 call8;
            PyObjectTempKeeper1 make_tuple1;
            PyObjectTempKeeper1 make_tuple2;
            PyObjectTempKeeper1 make_tuple3;
            PyObjectTempKeeper1 make_tuple4;
            PyObjectTempKeeper1 make_tuple5;
            PyObjectTempKeeper1 make_tuple6;
            return ( call8.assign( _mvar_django__utils__datetime_safe_datetime.asObject0() ), CALL_FUNCTION_WITH_POSARGS( call8.asObject0(), PyObjectTemporary( ( make_tuple1.assign( LOOKUP_ATTRIBUTE( _python_var_date.asObject(), _python_str_plain_year ) ), make_tuple2.assign( LOOKUP_ATTRIBUTE( _python_var_date.asObject(), _python_str_plain_month ) ), make_tuple3.assign( LOOKUP_ATTRIBUTE( _python_var_date.asObject(), _python_str_plain_day ) ), make_tuple4.assign( LOOKUP_ATTRIBUTE( _python_var_time.asObject(), _python_str_plain_hour ) ), make_tuple5.assign( LOOKUP_ATTRIBUTE( _python_var_time.asObject(), _python_str_plain_minute ) ), make_tuple6.assign( LOOKUP_ATTRIBUTE( _python_var_time.asObject(), _python_str_plain_microsecond ) ), MAKE_TUPLE7( make_tuple1.asObject0(), make_tuple2.asObject0(), make_tuple3.asObject0(), make_tuple4.asObject0(), make_tuple5.asObject0(), make_tuple6.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_time.asObject(), _python_str_plain_tzinfo ) ).asObject() ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_time.updateLocalsDict( _python_var_date.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_combine_of_class_2_datetime_of_module_django__utils__datetime_safe )
        {
           Py_DECREF( frame_function_2_combine_of_class_2_datetime_of_module_django__utils__datetime_safe );
           frame_function_2_combine_of_class_2_datetime_of_module_django__utils__datetime_safe = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_combine_of_class_2_datetime_of_module_django__utils__datetime_safe( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_date = NULL;
    PyObject *_python_par_time = NULL;
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
                PyErr_Format( PyExc_TypeError, "combine() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "combine() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_date == key )
            {
                if (unlikely( _python_par_date ))
                {
                    PyErr_Format( PyExc_TypeError, "combine() got multiple values for keyword argument 'date'" );
                    goto error_exit;
                }

                _python_par_date = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_time == key )
            {
                if (unlikely( _python_par_time ))
                {
                    PyErr_Format( PyExc_TypeError, "combine() got multiple values for keyword argument 'time'" );
                    goto error_exit;
                }

                _python_par_time = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "combine() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_date, key ) )
            {
                if (unlikely( _python_par_date ))
                {
                    PyErr_Format( PyExc_TypeError, "combine() got multiple values for keyword argument 'date'" );
                    goto error_exit;
                }

                _python_par_date = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_time, key ) )
            {
                if (unlikely( _python_par_time ))
                {
                    PyErr_Format( PyExc_TypeError, "combine() got multiple values for keyword argument 'time'" );
                    goto error_exit;
                }

                _python_par_time = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "combine() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "combine() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "combine() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "combine() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "combine() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "combine() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "combine() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "combine() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "combine() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "combine() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "combine() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "combine() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "combine() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "combine() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_date != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "combine() got multiple values for keyword argument 'date'" );
             goto error_exit;
         }

        _python_par_date = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_time != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "combine() got multiple values for keyword argument 'time'" );
             goto error_exit;
         }

        _python_par_time = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_2_combine_of_class_2_datetime_of_module_django__utils__datetime_safe( self, _python_par_self, _python_par_date, _python_par_time );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_date );
    Py_XDECREF( _python_par_time );

    return NULL;
}

static PyObject *dparse_function_2_combine_of_class_2_datetime_of_module_django__utils__datetime_safe( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_2_combine_of_class_2_datetime_of_module_django__utils__datetime_safe( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_combine_of_class_2_datetime_of_module_django__utils__datetime_safe( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_date_of_class_2_datetime_of_module_django__utils__datetime_safe( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_3_date_of_class_2_datetime_of_module_django__utils__datetime_safe = NULL;

    if ( isFrameUnusable( frame_function_3_date_of_class_2_datetime_of_module_django__utils__datetime_safe ) )
    {
        if ( frame_function_3_date_of_class_2_datetime_of_module_django__utils__datetime_safe )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_date_of_class_2_datetime_of_module_django__utils__datetime_safe" );
#endif
            Py_DECREF( frame_function_3_date_of_class_2_datetime_of_module_django__utils__datetime_safe );
        }

        frame_function_3_date_of_class_2_datetime_of_module_django__utils__datetime_safe = MAKE_FRAME( _codeobj_e49d911c5f66a9a7c701359ab63cf864, _module_django__utils__datetime_safe );
    }

    FrameGuard frame_guard( frame_function_3_date_of_class_2_datetime_of_module_django__utils__datetime_safe );
    try
    {
        assert( Py_REFCNT( frame_function_3_date_of_class_2_datetime_of_module_django__utils__datetime_safe ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 26 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper1 call2;
            PyObjectTempKeeper1 call3;
            return ( call1.assign( _mvar_django__utils__datetime_safe_date.asObject0() ), call2.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_year ) ), call3.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_month ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), call3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_day ) ).asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_3_date_of_class_2_datetime_of_module_django__utils__datetime_safe )
        {
           Py_DECREF( frame_function_3_date_of_class_2_datetime_of_module_django__utils__datetime_safe );
           frame_function_3_date_of_class_2_datetime_of_module_django__utils__datetime_safe = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_date_of_class_2_datetime_of_module_django__utils__datetime_safe( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "date() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "date() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "date() got multiple values for keyword argument 'self'" );
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
                   "date() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "date() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "date() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "date() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "date() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "date() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "date() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "date() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "date() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "date() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "date() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "date() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "date() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "date() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_3_date_of_class_2_datetime_of_module_django__utils__datetime_safe( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3_date_of_class_2_datetime_of_module_django__utils__datetime_safe( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3_date_of_class_2_datetime_of_module_django__utils__datetime_safe( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_date_of_class_2_datetime_of_module_django__utils__datetime_safe( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_new_date_of_module_django__utils__datetime_safe( Nuitka_FunctionObject *self, PyObject *_python_par_d )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_d( _python_str_plain_d, _python_par_d );

    // Actual function code.
    static PyFrameObject *frame_function_3_new_date_of_module_django__utils__datetime_safe = NULL;

    if ( isFrameUnusable( frame_function_3_new_date_of_module_django__utils__datetime_safe ) )
    {
        if ( frame_function_3_new_date_of_module_django__utils__datetime_safe )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_new_date_of_module_django__utils__datetime_safe" );
#endif
            Py_DECREF( frame_function_3_new_date_of_module_django__utils__datetime_safe );
        }

        frame_function_3_new_date_of_module_django__utils__datetime_safe = MAKE_FRAME( _codeobj_89b486220f70c30dd4a22579ab6b75ce, _module_django__utils__datetime_safe );
    }

    FrameGuard frame_guard( frame_function_3_new_date_of_module_django__utils__datetime_safe );
    try
    {
        assert( Py_REFCNT( frame_function_3_new_date_of_module_django__utils__datetime_safe ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 30 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper1 call2;
            PyObjectTempKeeper1 call3;
            return ( call1.assign( _mvar_django__utils__datetime_safe_date.asObject0() ), call2.assign( LOOKUP_ATTRIBUTE( _python_var_d.asObject(), _python_str_plain_year ) ), call3.assign( LOOKUP_ATTRIBUTE( _python_var_d.asObject(), _python_str_plain_month ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), call3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_d.asObject(), _python_str_plain_day ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_d.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_3_new_date_of_module_django__utils__datetime_safe )
        {
           Py_DECREF( frame_function_3_new_date_of_module_django__utils__datetime_safe );
           frame_function_3_new_date_of_module_django__utils__datetime_safe = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_new_date_of_module_django__utils__datetime_safe( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_d = NULL;
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
                PyErr_Format( PyExc_TypeError, "new_date() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_d == key )
            {
                if (unlikely( _python_par_d ))
                {
                    PyErr_Format( PyExc_TypeError, "new_date() got multiple values for keyword argument 'd'" );
                    goto error_exit;
                }

                _python_par_d = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_d, key ) )
            {
                if (unlikely( _python_par_d ))
                {
                    PyErr_Format( PyExc_TypeError, "new_date() got multiple values for keyword argument 'd'" );
                    goto error_exit;
                }

                _python_par_d = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "new_date() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "new_date() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "new_date() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "new_date() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "new_date() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "new_date() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "new_date() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "new_date() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "new_date() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "new_date() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "new_date() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "new_date() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "new_date() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_d != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "new_date() got multiple values for keyword argument 'd'" );
             goto error_exit;
         }

        _python_par_d = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_3_new_date_of_module_django__utils__datetime_safe( self, _python_par_d );

error_exit:;

    Py_XDECREF( _python_par_d );

    return NULL;
}

static PyObject *dparse_function_3_new_date_of_module_django__utils__datetime_safe( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3_new_date_of_module_django__utils__datetime_safe( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_new_date_of_module_django__utils__datetime_safe( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_new_datetime_of_module_django__utils__datetime_safe( Nuitka_FunctionObject *self, PyObject *_python_par_d )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_d( _python_str_plain_d, _python_par_d );
    PyObjectLocalVariable _python_var_kw( _python_str_plain_kw );

    // Actual function code.
    static PyFrameObject *frame_function_4_new_datetime_of_module_django__utils__datetime_safe = NULL;

    if ( isFrameUnusable( frame_function_4_new_datetime_of_module_django__utils__datetime_safe ) )
    {
        if ( frame_function_4_new_datetime_of_module_django__utils__datetime_safe )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_new_datetime_of_module_django__utils__datetime_safe" );
#endif
            Py_DECREF( frame_function_4_new_datetime_of_module_django__utils__datetime_safe );
        }

        frame_function_4_new_datetime_of_module_django__utils__datetime_safe = MAKE_FRAME( _codeobj_3b0a069ed830c7d082e690c251484322, _module_django__utils__datetime_safe );
    }

    FrameGuard frame_guard( frame_function_4_new_datetime_of_module_django__utils__datetime_safe );
    try
    {
        assert( Py_REFCNT( frame_function_4_new_datetime_of_module_django__utils__datetime_safe ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 36 );
        {
            PyObjectTempKeeper1 make_list1;
            PyObjectTempKeeper1 make_list2;
            _python_var_kw.assign1( ( make_list1.assign( LOOKUP_ATTRIBUTE( _python_var_d.asObject(), _python_str_plain_year ) ), make_list2.assign( LOOKUP_ATTRIBUTE( _python_var_d.asObject(), _python_str_plain_month ) ), MAKE_LIST3( make_list1.asObject(), make_list2.asObject(), LOOKUP_ATTRIBUTE( _python_var_d.asObject(), _python_str_plain_day ) ) ) );
        }
        frame_guard.setLineNumber( 37 );
        {
            PyObjectTempKeeper0 isinstance11;
            if ( ( isinstance11.assign( _python_var_d.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance11.asObject0(), _mvar_django__utils__datetime_safe_real_datetime.asObject0() ) ) )
        {
            frame_guard.setLineNumber( 38 );
            {
                PyObjectTempKeeper1 call9;
                PyObjectTempKeeper1 make_list4;
                PyObjectTempKeeper1 make_list5;
                PyObjectTempKeeper1 make_list6;
                PyObjectTempKeeper1 make_list7;
                DECREASE_REFCOUNT( ( call9.assign( LOOKUP_ATTRIBUTE( _python_var_kw.asObject(), _python_str_plain_extend ) ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), PyObjectTemporary( ( make_list4.assign( LOOKUP_ATTRIBUTE( _python_var_d.asObject(), _python_str_plain_hour ) ), make_list5.assign( LOOKUP_ATTRIBUTE( _python_var_d.asObject(), _python_str_plain_minute ) ), make_list6.assign( LOOKUP_ATTRIBUTE( _python_var_d.asObject(), _python_str_plain_second ) ), make_list7.assign( LOOKUP_ATTRIBUTE( _python_var_d.asObject(), _python_str_plain_microsecond ) ), MAKE_LIST5( make_list4.asObject(), make_list5.asObject(), make_list6.asObject(), make_list7.asObject(), LOOKUP_ATTRIBUTE( _python_var_d.asObject(), _python_str_plain_tzinfo ) ) ) ).asObject() ) ) );
            }
        }
        }
        frame_guard.setLineNumber( 39 );
        {
            PyObjectTempKeeper0 call_tmp13;
            return ( call_tmp13.assign( _mvar_django__utils__datetime_safe_datetime.asObject0() ), impl_function_7_complex_call_helper_star_list_of_module___internal__( call_tmp13.asObject(), _python_var_kw.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_d.updateLocalsDict( _python_var_kw.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_4_new_datetime_of_module_django__utils__datetime_safe )
        {
           Py_DECREF( frame_function_4_new_datetime_of_module_django__utils__datetime_safe );
           frame_function_4_new_datetime_of_module_django__utils__datetime_safe = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_new_datetime_of_module_django__utils__datetime_safe( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_d = NULL;
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
                PyErr_Format( PyExc_TypeError, "new_datetime() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_d == key )
            {
                if (unlikely( _python_par_d ))
                {
                    PyErr_Format( PyExc_TypeError, "new_datetime() got multiple values for keyword argument 'd'" );
                    goto error_exit;
                }

                _python_par_d = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_d, key ) )
            {
                if (unlikely( _python_par_d ))
                {
                    PyErr_Format( PyExc_TypeError, "new_datetime() got multiple values for keyword argument 'd'" );
                    goto error_exit;
                }

                _python_par_d = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "new_datetime() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "new_datetime() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "new_datetime() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "new_datetime() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "new_datetime() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "new_datetime() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "new_datetime() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "new_datetime() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "new_datetime() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "new_datetime() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "new_datetime() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "new_datetime() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "new_datetime() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_d != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "new_datetime() got multiple values for keyword argument 'd'" );
             goto error_exit;
         }

        _python_par_d = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_4_new_datetime_of_module_django__utils__datetime_safe( self, _python_par_d );

error_exit:;

    Py_XDECREF( _python_par_d );

    return NULL;
}

static PyObject *dparse_function_4_new_datetime_of_module_django__utils__datetime_safe( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_4_new_datetime_of_module_django__utils__datetime_safe( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_new_datetime_of_module_django__utils__datetime_safe( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5__findall_of_module_django__utils__datetime_safe( Nuitka_FunctionObject *self, PyObject *_python_par_text, PyObject *_python_par_substr )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_text( _python_str_plain_text, _python_par_text );
    PyObjectLocalParameterVariableNoDel _python_var_substr( _python_str_plain_substr, _python_par_substr );
    PyObjectLocalVariable _python_var_sites( _python_str_plain_sites );
    PyObjectLocalVariable _python_var_i( _python_str_plain_i );
    PyObjectLocalVariable _python_var_j( _python_str_plain_j );

    // Actual function code.
    _python_var_sites.assign1( PyList_New( 0 ) );
    _python_var_i.assign0( _python_int_0 );
    static PyFrameObject *frame_function_5__findall_of_module_django__utils__datetime_safe = NULL;

    if ( isFrameUnusable( frame_function_5__findall_of_module_django__utils__datetime_safe ) )
    {
        if ( frame_function_5__findall_of_module_django__utils__datetime_safe )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5__findall_of_module_django__utils__datetime_safe" );
#endif
            Py_DECREF( frame_function_5__findall_of_module_django__utils__datetime_safe );
        }

        frame_function_5__findall_of_module_django__utils__datetime_safe = MAKE_FRAME( _codeobj_35b650f5d123a1ab49f4055fa790d07f, _module_django__utils__datetime_safe );
    }

    FrameGuard frame_guard( frame_function_5__findall_of_module_django__utils__datetime_safe );
    try
    {
        assert( Py_REFCNT( frame_function_5__findall_of_module_django__utils__datetime_safe ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 49 );
        while( true )
        {
            frame_guard.setLineNumber( 50 );
            {
                PyObjectTempKeeper1 call1;
                PyObjectTempKeeper0 call2;
                _python_var_j.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_text.asObject(), _python_str_plain_find ) ), call2.assign( _python_var_substr.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _python_var_i.asObject() ) ) );
            }
            frame_guard.setLineNumber( 51 );
            if ( RICH_COMPARE_BOOL_EQ( _python_var_j.asObject(), _python_int_neg_1 ) )
            {
                frame_guard.setLineNumber( 52 );
                break;
            }
            frame_guard.setLineNumber( 53 );
            {
                PyObjectTempKeeper1 call4;
                DECREASE_REFCOUNT( ( call4.assign( LOOKUP_ATTRIBUTE( _python_var_sites.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), _python_var_j.asObject() ) ) );
            }
            frame_guard.setLineNumber( 54 );
            _python_var_i.assign1( BINARY_OPERATION_ADD( _python_var_j.asObject(), _python_int_pos_1 ) );

           CONSIDER_THREADING();
        }
        frame_guard.setLineNumber( 55 );
        return _python_var_sites.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_substr.updateLocalsDict( _python_var_text.updateLocalsDict( _python_var_j.updateLocalsDict( _python_var_i.updateLocalsDict( _python_var_sites.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_5__findall_of_module_django__utils__datetime_safe )
        {
           Py_DECREF( frame_function_5__findall_of_module_django__utils__datetime_safe );
           frame_function_5__findall_of_module_django__utils__datetime_safe = NULL;
        }

        _exception.toPython();
        return NULL;
    }
}
static PyObject *fparse_function_5__findall_of_module_django__utils__datetime_safe( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_text = NULL;
    PyObject *_python_par_substr = NULL;
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
                PyErr_Format( PyExc_TypeError, "_findall() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_text == key )
            {
                if (unlikely( _python_par_text ))
                {
                    PyErr_Format( PyExc_TypeError, "_findall() got multiple values for keyword argument 'text'" );
                    goto error_exit;
                }

                _python_par_text = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_substr == key )
            {
                if (unlikely( _python_par_substr ))
                {
                    PyErr_Format( PyExc_TypeError, "_findall() got multiple values for keyword argument 'substr'" );
                    goto error_exit;
                }

                _python_par_substr = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_text, key ) )
            {
                if (unlikely( _python_par_text ))
                {
                    PyErr_Format( PyExc_TypeError, "_findall() got multiple values for keyword argument 'text'" );
                    goto error_exit;
                }

                _python_par_text = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_substr, key ) )
            {
                if (unlikely( _python_par_substr ))
                {
                    PyErr_Format( PyExc_TypeError, "_findall() got multiple values for keyword argument 'substr'" );
                    goto error_exit;
                }

                _python_par_substr = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_findall() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_findall() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_findall() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_findall() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_findall() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_findall() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_findall() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_findall() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_findall() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_findall() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_findall() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "_findall() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_findall() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_text != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_findall() got multiple values for keyword argument 'text'" );
             goto error_exit;
         }

        _python_par_text = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_substr != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_findall() got multiple values for keyword argument 'substr'" );
             goto error_exit;
         }

        _python_par_substr = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_5__findall_of_module_django__utils__datetime_safe( self, _python_par_text, _python_par_substr );

error_exit:;

    Py_XDECREF( _python_par_text );
    Py_XDECREF( _python_par_substr );

    return NULL;
}

static PyObject *dparse_function_5__findall_of_module_django__utils__datetime_safe( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_5__findall_of_module_django__utils__datetime_safe( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5__findall_of_module_django__utils__datetime_safe( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_strftime_of_module_django__utils__datetime_safe( Nuitka_FunctionObject *self, PyObject *_python_par_dt, PyObject *_python_par_fmt )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_dt( _python_str_plain_dt, _python_par_dt );
    PyObjectLocalParameterVariableNoDel _python_var_fmt( _python_str_plain_fmt, _python_par_fmt );
    PyObjectLocalVariable _python_var_illegal_formatting( _python_str_plain_illegal_formatting );
    PyObjectLocalVariable _python_var_year( _python_str_plain_year );
    PyObjectLocalVariable _python_var_delta( _python_str_plain_delta );
    PyObjectLocalVariable _python_var_off( _python_str_plain_off );
    PyObjectLocalVariable _python_var_timetuple( _python_str_plain_timetuple );
    PyObjectLocalVariable _python_var_s1( _python_str_plain_s1 );
    PyObjectLocalVariable _python_var_sites1( _python_str_plain_sites1 );
    PyObjectLocalVariable _python_var_s2( _python_str_plain_s2 );
    PyObjectLocalVariable _python_var_sites2( _python_str_plain_sites2 );
    PyObjectLocalVariable _python_var_sites( _python_str_plain_sites );
    PyObjectLocalVariable _python_var_site( _python_str_plain_site );
    PyObjectLocalVariable _python_var_s( _python_str_plain_s );
    PyObjectLocalVariable _python_var_syear( _python_str_plain_syear );

    // Actual function code.
    static PyFrameObject *frame_function_6_strftime_of_module_django__utils__datetime_safe = NULL;

    if ( isFrameUnusable( frame_function_6_strftime_of_module_django__utils__datetime_safe ) )
    {
        if ( frame_function_6_strftime_of_module_django__utils__datetime_safe )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6_strftime_of_module_django__utils__datetime_safe" );
#endif
            Py_DECREF( frame_function_6_strftime_of_module_django__utils__datetime_safe );
        }

        frame_function_6_strftime_of_module_django__utils__datetime_safe = MAKE_FRAME( _codeobj_7ba95c078b4c2e11cfae356191678e37, _module_django__utils__datetime_safe );
    }

    FrameGuard frame_guard( frame_function_6_strftime_of_module_django__utils__datetime_safe );
    try
    {
        assert( Py_REFCNT( frame_function_6_strftime_of_module_django__utils__datetime_safe ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 58 );
        if ( RICH_COMPARE_BOOL_GE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_dt.asObject(), _python_str_plain_year ) ).asObject(), _python_int_pos_1900 ) )
        {
            frame_guard.setLineNumber( 59 );
            {
                PyObjectTempKeeper1 call3;
                PyObjectTempKeeper1 super1;
                return ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super1.assign( BUILTIN_TYPE1( _python_var_dt.asObject() ) ), BUILTIN_SUPER( super1.asObject0(), _python_var_dt.asObject() ) ) ).asObject(), _python_str_plain_strftime ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_fmt.asObject() ) );
            }
        }
        frame_guard.setLineNumber( 60 );
        {
            PyObjectTempKeeper1 call5;
            _python_var_illegal_formatting.assign1( ( call5.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__datetime_safe__illegal_formatting.asObject0(), _python_str_plain_search ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_fmt.asObject() ) ) );
        }
        frame_guard.setLineNumber( 61 );
        if ( CHECK_IF_TRUE( _python_var_illegal_formatting.asObject() ) )
        {
            frame_guard.setLineNumber( 62 );
            {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_TypeError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_ADD( _python_str_digest_ca438d63be6134f4cb3d84522a037655, PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_illegal_formatting.asObject(), _python_str_plain_group ) ).asObject(), _python_int_0 ) ).asObject() ) ).asObject() ) ).asObject() ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
        }
        frame_guard.setLineNumber( 64 );
        _python_var_year.assign1( LOOKUP_ATTRIBUTE( _python_var_dt.asObject(), _python_str_plain_year ) );
        frame_guard.setLineNumber( 67 );
        _python_var_delta.assign1( BINARY_OPERATION_SUB( _python_int_pos_2000, _python_var_year.asObject() ) );
        frame_guard.setLineNumber( 68 );
        {
            PyObjectTempKeeper1 op7;
            _python_var_off.assign1( BINARY_OPERATION_MUL( _python_int_pos_6, PyObjectTemporary( ( op7.assign( BINARY_OPERATION( PyNumber_FloorDivide, _python_var_delta.asObject(), _python_int_pos_100 ) ), BINARY_OPERATION_ADD( op7.asObject0(), PyObjectTemporary( BINARY_OPERATION( PyNumber_FloorDivide, _python_var_delta.asObject(), _python_int_pos_400 ) ).asObject() ) ) ).asObject() ) );
        }
        frame_guard.setLineNumber( 69 );
        {
            PyObjectTempKeeper0 op9;
            _python_var_year.assign1( ( op9.assign( _python_var_year.asObject() ), BINARY_OPERATION_ADD( op9.asObject0(), _python_var_off.asObject() ) ) );
        }
        frame_guard.setLineNumber( 72 );
        {
            PyObjectTempKeeper0 op11;
            _python_var_year.assign1( ( op11.assign( _python_var_year.asObject() ), BINARY_OPERATION_ADD( op11.asObject0(), PyObjectTemporary( BINARY_OPERATION_MUL( PyObjectTemporary( BINARY_OPERATION( PyNumber_FloorDivide, PyObjectTemporary( BINARY_OPERATION_SUB( _python_int_pos_2000, _python_var_year.asObject() ) ).asObject(), _python_int_pos_28 ) ).asObject(), _python_int_pos_28 ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 73 );
        _python_var_timetuple.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_dt.asObject(), _python_str_plain_timetuple ) ).asObject() ) );
        frame_guard.setLineNumber( 74 );
        {
            PyObjectTempKeeper1 call15;
            PyObjectTempKeeper0 call16;
            PyObjectTempKeeper1 op13;
            _python_var_s1.assign1( ( call15.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__datetime_safe_time.asObject0(), _python_str_plain_strftime ) ), call16.assign( _python_var_fmt.asObject() ), CALL_FUNCTION_WITH_ARGS( call15.asObject0(), call16.asObject0(), PyObjectTemporary( ( op13.assign( MAKE_TUPLE1( _python_var_year.asObject() ) ), BINARY_OPERATION_ADD( op13.asObject0(), PyObjectTemporary( LOOKUP_INDEX_SLICE( _python_var_timetuple.asObject(), 1, PY_SSIZE_T_MAX ) ).asObject() ) ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 75 );
        {
            PyObjectTempKeeper0 call18;
            PyObjectTempKeeper0 call19;
            _python_var_sites1.assign1( ( call18.assign( _mvar_django__utils__datetime_safe__findall.asObject0() ), call19.assign( _python_var_s1.asObject() ), CALL_FUNCTION_WITH_ARGS( call18.asObject0(), call19.asObject0(), PyObjectTemporary( TO_STR( _python_var_year.asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 77 );
        {
            PyObjectTempKeeper1 call23;
            PyObjectTempKeeper0 call24;
            PyObjectTempKeeper1 op21;
            _python_var_s2.assign1( ( call23.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__datetime_safe_time.asObject0(), _python_str_plain_strftime ) ), call24.assign( _python_var_fmt.asObject() ), CALL_FUNCTION_WITH_ARGS( call23.asObject0(), call24.asObject0(), PyObjectTemporary( ( op21.assign( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_ADD( _python_var_year.asObject(), _python_int_pos_28 ) ).asObject() ) ), BINARY_OPERATION_ADD( op21.asObject0(), PyObjectTemporary( LOOKUP_INDEX_SLICE( _python_var_timetuple.asObject(), 1, PY_SSIZE_T_MAX ) ).asObject() ) ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 78 );
        {
            PyObjectTempKeeper0 call26;
            PyObjectTempKeeper0 call27;
            _python_var_sites2.assign1( ( call26.assign( _mvar_django__utils__datetime_safe__findall.asObject0() ), call27.assign( _python_var_s2.asObject() ), CALL_FUNCTION_WITH_ARGS( call26.asObject0(), call27.asObject0(), PyObjectTemporary( TO_STR( PyObjectTemporary( BINARY_OPERATION_ADD( _python_var_year.asObject(), _python_int_pos_28 ) ).asObject() ) ).asObject() ) ) );
        }
        _python_var_sites.assign1( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 81 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_sites1.asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 81 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_site.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 82 );
                {
                    PyObjectTempKeeper0 cmp31;
                    if ( ( cmp31.assign( _python_var_site.asObject() ), SEQUENCE_CONTAINS_BOOL( cmp31.asObject0(), _python_var_sites2.asObject() ) ) )
                {
                    frame_guard.setLineNumber( 83 );
                    {
                        PyObjectTempKeeper1 call29;
                        DECREASE_REFCOUNT( ( call29.assign( LOOKUP_ATTRIBUTE( _python_var_sites.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call29.asObject0(), _python_var_site.asObject() ) ) );
                    }
                }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 85 );
        _python_var_s.assign0( _python_var_s1.asObject() );
        frame_guard.setLineNumber( 86 );
        _python_var_syear.assign1( BINARY_OPERATION_REMAINDER( _python_str_digest_2e926dea494dcc0ad0b33295ca43abc1, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_dt.asObject(), _python_str_plain_year ) ).asObject() ) ).asObject() ) );
        {
            frame_guard.setLineNumber( 87 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_sites.asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 87 );
                    PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_2 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                    _python_var_site.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 88 );
                {
                    PyObjectTempKeeper1 op36;
                    PyObjectTempKeeper1 op41;
                    PyObjectTempKeeper0 slice33;
                    PyObjectTempKeeper0 slice38;
                    _python_var_s.assign1( ( op41.assign( ( op36.assign( ( slice33.assign( _python_var_s.asObject() ), LOOKUP_SLICE( slice33.asObject0(), Py_None, _python_var_site.asObject() ) ) ), BINARY_OPERATION_ADD( op36.asObject0(), _python_var_syear.asObject() ) ) ), BINARY_OPERATION_ADD( op41.asObject0(), PyObjectTemporary( ( slice38.assign( _python_var_s.asObject() ), LOOKUP_SLICE( slice38.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( _python_var_site.asObject(), _python_int_pos_4 ) ).asObject(), Py_None ) ) ).asObject() ) ) );
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 89 );
        return _python_var_s.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_fmt.updateLocalsDict( _python_var_dt.updateLocalsDict( _python_var_syear.updateLocalsDict( _python_var_s.updateLocalsDict( _python_var_site.updateLocalsDict( _python_var_sites.updateLocalsDict( _python_var_sites2.updateLocalsDict( _python_var_s2.updateLocalsDict( _python_var_sites1.updateLocalsDict( _python_var_s1.updateLocalsDict( _python_var_timetuple.updateLocalsDict( _python_var_off.updateLocalsDict( _python_var_delta.updateLocalsDict( _python_var_year.updateLocalsDict( _python_var_illegal_formatting.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_6_strftime_of_module_django__utils__datetime_safe )
        {
           Py_DECREF( frame_function_6_strftime_of_module_django__utils__datetime_safe );
           frame_function_6_strftime_of_module_django__utils__datetime_safe = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_6_strftime_of_module_django__utils__datetime_safe( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_dt = NULL;
    PyObject *_python_par_fmt = NULL;
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
                PyErr_Format( PyExc_TypeError, "strftime() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_dt == key )
            {
                if (unlikely( _python_par_dt ))
                {
                    PyErr_Format( PyExc_TypeError, "strftime() got multiple values for keyword argument 'dt'" );
                    goto error_exit;
                }

                _python_par_dt = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_fmt == key )
            {
                if (unlikely( _python_par_fmt ))
                {
                    PyErr_Format( PyExc_TypeError, "strftime() got multiple values for keyword argument 'fmt'" );
                    goto error_exit;
                }

                _python_par_fmt = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_dt, key ) )
            {
                if (unlikely( _python_par_dt ))
                {
                    PyErr_Format( PyExc_TypeError, "strftime() got multiple values for keyword argument 'dt'" );
                    goto error_exit;
                }

                _python_par_dt = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_fmt, key ) )
            {
                if (unlikely( _python_par_fmt ))
                {
                    PyErr_Format( PyExc_TypeError, "strftime() got multiple values for keyword argument 'fmt'" );
                    goto error_exit;
                }

                _python_par_fmt = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "strftime() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "strftime() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "strftime() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "strftime() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "strftime() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "strftime() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "strftime() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "strftime() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "strftime() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "strftime() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "strftime() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "strftime() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "strftime() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_dt != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "strftime() got multiple values for keyword argument 'dt'" );
             goto error_exit;
         }

        _python_par_dt = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_fmt != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "strftime() got multiple values for keyword argument 'fmt'" );
             goto error_exit;
         }

        _python_par_fmt = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_6_strftime_of_module_django__utils__datetime_safe( self, _python_par_dt, _python_par_fmt );

error_exit:;

    Py_XDECREF( _python_par_dt );
    Py_XDECREF( _python_par_fmt );

    return NULL;
}

static PyObject *dparse_function_6_strftime_of_module_django__utils__datetime_safe( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_6_strftime_of_module_django__utils__datetime_safe( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_strftime_of_module_django__utils__datetime_safe( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_strftime_of_class_1_date_of_module_django__utils__datetime_safe(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_strftime_of_class_1_date_of_module_django__utils__datetime_safe,
        dparse_function_1_strftime_of_class_1_date_of_module_django__utils__datetime_safe,
        _python_str_plain_strftime,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_88a419b2dc53bb1062c32b3e97fb6e8f,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__datetime_safe,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_strftime_of_class_2_datetime_of_module_django__utils__datetime_safe(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_strftime_of_class_2_datetime_of_module_django__utils__datetime_safe,
        dparse_function_1_strftime_of_class_2_datetime_of_module_django__utils__datetime_safe,
        _python_str_plain_strftime,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_8d7c448f6a793ebb868427f0508f472f,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__datetime_safe,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_combine_of_class_2_datetime_of_module_django__utils__datetime_safe(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_combine_of_class_2_datetime_of_module_django__utils__datetime_safe,
        dparse_function_2_combine_of_class_2_datetime_of_module_django__utils__datetime_safe,
        _python_str_plain_combine,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b166b321048e94a22ce0573134e4a458,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__datetime_safe,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_date_of_class_2_datetime_of_module_django__utils__datetime_safe(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_date_of_class_2_datetime_of_module_django__utils__datetime_safe,
        dparse_function_3_date_of_class_2_datetime_of_module_django__utils__datetime_safe,
        _python_str_plain_date,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e49d911c5f66a9a7c701359ab63cf864,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__datetime_safe,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_new_date_of_module_django__utils__datetime_safe(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_new_date_of_module_django__utils__datetime_safe,
        dparse_function_3_new_date_of_module_django__utils__datetime_safe,
        _python_str_plain_new_date,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_89b486220f70c30dd4a22579ab6b75ce,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__datetime_safe,
        _python_str_digest_8dd8e422299792d8bebde5caebc7665e
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_new_datetime_of_module_django__utils__datetime_safe(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_new_datetime_of_module_django__utils__datetime_safe,
        dparse_function_4_new_datetime_of_module_django__utils__datetime_safe,
        _python_str_plain_new_datetime,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_3b0a069ed830c7d082e690c251484322,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__datetime_safe,
        _python_str_digest_d9fb32242addf1e014c53a115d46f5e2
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5__findall_of_module_django__utils__datetime_safe(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5__findall_of_module_django__utils__datetime_safe,
        dparse_function_5__findall_of_module_django__utils__datetime_safe,
        _python_str_plain__findall,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_35b650f5d123a1ab49f4055fa790d07f,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__datetime_safe,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_strftime_of_module_django__utils__datetime_safe(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_strftime_of_module_django__utils__datetime_safe,
        dparse_function_6_strftime_of_module_django__utils__datetime_safe,
        _python_str_plain_strftime,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_7ba95c078b4c2e11cfae356191678e37,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__datetime_safe,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.utils.datetime_safe",   /* m_name */
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

MOD_INIT_DECL( django__utils__datetime_safe )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__utils__datetime_safe );
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

    // puts( "in initdjango__utils__datetime_safe" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__utils__datetime_safe = Py_InitModule4(
        "django.utils.datetime_safe",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__utils__datetime_safe = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__utils__datetime_safe = (PyDictObject *)((PyModuleObject *)_module_django__utils__datetime_safe)->md_dict;

    assertObject( _module_django__utils__datetime_safe );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_6861927dc8d055ec926f313eeae87e49, _module_django__utils__datetime_safe );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__utils__datetime_safe );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__utils__datetime_safe != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__utils__datetime_safe, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django__utils__datetime_safe, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_8b43e215f7f2304fe6bf9667ea0a5b50 );
    PyFrameObject *frame_module_django__utils__datetime_safe = MAKE_FRAME( _codeobj_d6c04ecb8b442e8dfdbdf93e6ed7507e, _module_django__utils__datetime_safe );

    FrameGuard frame_guard( frame_module_django__utils__datetime_safe );
    try
    {
        assert( Py_REFCNT( frame_module_django__utils__datetime_safe ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 10 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__datetime_safe, (Nuitka_StringObject *)_python_str_plain_real_date, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_datetime, ((PyModuleObject *)_module_django__utils__datetime_safe)->md_dict, ((PyModuleObject *)_module_django__utils__datetime_safe)->md_dict, _python_list_str_plain_date_str_plain_datetime_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_date ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__datetime_safe, (Nuitka_StringObject *)_python_str_plain_real_datetime, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_datetime, ((PyModuleObject *)_module_django__utils__datetime_safe)->md_dict, ((PyModuleObject *)_module_django__utils__datetime_safe)->md_dict, _python_list_str_plain_date_str_plain_datetime_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_datetime ) );
        frame_guard.setLineNumber( 11 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__datetime_safe, (Nuitka_StringObject *)_python_str_plain_re, IMPORT_MODULE( _python_str_plain_re, ((PyModuleObject *)_module_django__utils__datetime_safe)->md_dict, ((PyModuleObject *)_module_django__utils__datetime_safe)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 12 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__datetime_safe, (Nuitka_StringObject *)_python_str_plain_time, IMPORT_MODULE( _python_str_plain_time, ((PyModuleObject *)_module_django__utils__datetime_safe)->md_dict, ((PyModuleObject *)_module_django__utils__datetime_safe)->md_dict, Py_None, _python_int_neg_1 ) );
        {
            frame_guard.setLineNumber( 14 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__utils__datetime_safe_real_date.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_1_date_of_module_django__utils__datetime_safe(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__utils__datetime_safe___metaclass__.isInitialized( false ) ? _mvar_django__utils__datetime_safe___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_date, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__utils__datetime_safe, (Nuitka_StringObject *)_python_str_plain_date, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 18 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__utils__datetime_safe_real_datetime.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_2_datetime_of_module_django__utils__datetime_safe(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__utils__datetime_safe___metaclass__.isInitialized( false ) ? _mvar_django__utils__datetime_safe___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper0 call7;
                _tmp_python_tmp_class = ( call5.assign( _python_tmp_metaclass.asObject() ), call7.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_str_plain_datetime, call7.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__utils__datetime_safe, (Nuitka_StringObject *)_python_str_plain_datetime, _python_tmp_class.asObject() );
        }
        UPDATE_STRING_DICT1( _moduledict_django__utils__datetime_safe, (Nuitka_StringObject *)_python_str_plain_new_date, MAKE_FUNCTION_function_3_new_date_of_module_django__utils__datetime_safe(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__datetime_safe, (Nuitka_StringObject *)_python_str_plain_new_datetime, MAKE_FUNCTION_function_4_new_datetime_of_module_django__utils__datetime_safe(  ) );
        frame_guard.setLineNumber( 43 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__datetime_safe, (Nuitka_StringObject *)_python_str_plain__illegal_formatting, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__datetime_safe_re.asObject0(), _python_str_plain_compile ) ).asObject(), _python_str_digest_1d10df2d23b526bd9df21f22d4604f09 ) );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__utils__datetime_safe)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__utils__datetime_safe, (Nuitka_StringObject *)_python_str_plain__findall, MAKE_FUNCTION_function_5__findall_of_module_django__utils__datetime_safe(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__datetime_safe, (Nuitka_StringObject *)_python_str_plain_strftime, MAKE_FUNCTION_function_6_strftime_of_module_django__utils__datetime_safe(  ) );

   return MOD_RETURN_VALUE( _module_django__utils__datetime_safe );
}
