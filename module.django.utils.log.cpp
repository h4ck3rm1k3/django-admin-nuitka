// Generated code for Python source for module 'django.utils.log'
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

// The _module_django__utils__log is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__utils__log;
PyDictObject *_moduledict_django__utils__log;

// The module level variables.
static PyObjectGlobalVariable_django__utils__log _mvar_django__utils__log_ExceptionReporter( &_module_django__utils__log, &_python_str_plain_ExceptionReporter );
static PyObjectGlobalVariable_django__utils__log _mvar_django__utils__log___metaclass__( &_module_django__utils__log, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__utils__log _mvar_django__utils__log_get_connection( &_module_django__utils__log, &_python_str_plain_get_connection );
static PyObjectGlobalVariable_django__utils__log _mvar_django__utils__log_get_exception_reporter_filter( &_module_django__utils__log, &_python_str_plain_get_exception_reporter_filter );
static PyObjectGlobalVariable_django__utils__log _mvar_django__utils__log_logging( &_module_django__utils__log, &_python_str_plain_logging );
static PyObjectGlobalVariable_django__utils__log _mvar_django__utils__log_mail( &_module_django__utils__log, &_python_str_plain_mail );
static PyObjectGlobalVariable_django__utils__log _mvar_django__utils__log_settings( &_module_django__utils__log, &_python_str_plain_settings );
static PyObjectGlobalVariable_django__utils__log _mvar_django__utils__log_traceback( &_module_django__utils__log, &_python_str_plain_traceback );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_NullHandler_of_module_django__utils__log(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_2_AdminEmailHandler_of_module_django__utils__log(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_3_CallbackFilter_of_module_django__utils__log(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_4_RequireDebugFalse_of_module_django__utils__log(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_5_RequireDebugTrue_of_module_django__utils__log(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_2_AdminEmailHandler_of_module_django__utils__log(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_3_CallbackFilter_of_module_django__utils__log(  );


static PyObject *MAKE_FUNCTION_function_1_emit_of_class_1_NullHandler_of_module_django__utils__log(  );


static PyObject *MAKE_FUNCTION_function_1_filter_of_class_4_RequireDebugFalse_of_module_django__utils__log(  );


static PyObject *MAKE_FUNCTION_function_1_filter_of_class_5_RequireDebugTrue_of_module_django__utils__log(  );


static PyObject *MAKE_FUNCTION_function_2_emit_of_class_2_AdminEmailHandler_of_module_django__utils__log(  );


static PyObject *MAKE_FUNCTION_function_2_filter_of_class_3_CallbackFilter_of_module_django__utils__log(  );


static PyObject *MAKE_FUNCTION_function_3_connection_of_class_2_AdminEmailHandler_of_module_django__utils__log(  );


static PyObject *MAKE_FUNCTION_function_4_format_subject_of_class_2_AdminEmailHandler_of_module_django__utils__log(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_NullHandler_of_module_django__utils__log(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var_emit( _python_str_plain_emit );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_log );
    _python_var_emit.assign1( MAKE_FUNCTION_function_1_emit_of_class_1_NullHandler_of_module_django__utils__log(  ) );
    return _python_var_emit.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) );
}


static PyObject *impl_function_1_emit_of_class_1_NullHandler_of_module_django__utils__log( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_record )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_record( _python_str_plain_record, _python_par_record );

    // Actual function code.
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1_emit_of_class_1_NullHandler_of_module_django__utils__log( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_record = NULL;
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
                PyErr_Format( PyExc_TypeError, "emit() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "emit() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_record == key )
            {
                if (unlikely( _python_par_record ))
                {
                    PyErr_Format( PyExc_TypeError, "emit() got multiple values for keyword argument 'record'" );
                    goto error_exit;
                }

                _python_par_record = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "emit() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_record, key ) )
            {
                if (unlikely( _python_par_record ))
                {
                    PyErr_Format( PyExc_TypeError, "emit() got multiple values for keyword argument 'record'" );
                    goto error_exit;
                }

                _python_par_record = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "emit() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "emit() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "emit() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "emit() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "emit() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "emit() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "emit() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "emit() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "emit() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "emit() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "emit() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "emit() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "emit() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "emit() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_record != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "emit() got multiple values for keyword argument 'record'" );
             goto error_exit;
         }

        _python_par_record = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_1_emit_of_class_1_NullHandler_of_module_django__utils__log( self, _python_par_self, _python_par_record );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_record );

    return NULL;
}

static PyObject *dparse_function_1_emit_of_class_1_NullHandler_of_module_django__utils__log( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1_emit_of_class_1_NullHandler_of_module_django__utils__log( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_emit_of_class_1_NullHandler_of_module_django__utils__log( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_2_AdminEmailHandler_of_module_django__utils__log(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_emit( _python_str_plain_emit );
    PyObjectLocalVariable _python_var_connection( _python_str_plain_connection );
    PyObjectLocalVariable _python_var_format_subject( _python_str_plain_format_subject );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_log );
    _python_var___doc__.assign0( _python_str_digest_baca7c5e1d54678b55a295deb35d92ee );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_2_AdminEmailHandler_of_module_django__utils__log(  ) );
    _python_var_emit.assign1( MAKE_FUNCTION_function_2_emit_of_class_2_AdminEmailHandler_of_module_django__utils__log(  ) );
    _python_var_connection.assign1( MAKE_FUNCTION_function_3_connection_of_class_2_AdminEmailHandler_of_module_django__utils__log(  ) );
    _python_var_format_subject.assign1( MAKE_FUNCTION_function_4_format_subject_of_class_2_AdminEmailHandler_of_module_django__utils__log(  ) );
    return _python_var_format_subject.updateLocalsDict( _python_var_connection.updateLocalsDict( _python_var_emit.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_2_AdminEmailHandler_of_module_django__utils__log( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_include_html, PyObject *_python_par_email_backend )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_include_html( _python_str_plain_include_html, _python_par_include_html );
    PyObjectLocalParameterVariableNoDel _python_var_email_backend( _python_str_plain_email_backend, _python_par_email_backend );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_2_AdminEmailHandler_of_module_django__utils__log = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_2_AdminEmailHandler_of_module_django__utils__log ) )
    {
        if ( frame_function_1___init___of_class_2_AdminEmailHandler_of_module_django__utils__log )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_2_AdminEmailHandler_of_module_django__utils__log" );
#endif
            Py_DECREF( frame_function_1___init___of_class_2_AdminEmailHandler_of_module_django__utils__log );
        }

        frame_function_1___init___of_class_2_AdminEmailHandler_of_module_django__utils__log = MAKE_FRAME( _codeobj_51df41c0e63e3d1e89953eef01531f25, _module_django__utils__log );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_2_AdminEmailHandler_of_module_django__utils__log );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_2_AdminEmailHandler_of_module_django__utils__log ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 86 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__log_logging.asObject0(), _python_str_plain_Handler ) ).asObject(), _python_str_plain___init__ ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_self.asObject() ) ) );
        }
        frame_guard.setLineNumber( 87 );
        {
                PyObject *tmp_identifier = _python_var_include_html.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_include_html );
        }
        frame_guard.setLineNumber( 88 );
        {
                PyObject *tmp_identifier = _python_var_email_backend.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_email_backend );
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
        frame_guard.getFrame0()->f_locals = _python_var_email_backend.updateLocalsDict( _python_var_include_html.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_2_AdminEmailHandler_of_module_django__utils__log )
        {
           Py_DECREF( frame_function_1___init___of_class_2_AdminEmailHandler_of_module_django__utils__log );
           frame_function_1___init___of_class_2_AdminEmailHandler_of_module_django__utils__log = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_2_AdminEmailHandler_of_module_django__utils__log( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_include_html = NULL;
    PyObject *_python_par_email_backend = NULL;
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
            if ( found == false && _python_str_plain_include_html == key )
            {
                if (unlikely( _python_par_include_html ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'include_html'" );
                    goto error_exit;
                }

                _python_par_include_html = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_email_backend == key )
            {
                if (unlikely( _python_par_email_backend ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'email_backend'" );
                    goto error_exit;
                }

                _python_par_email_backend = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_include_html, key ) )
            {
                if (unlikely( _python_par_include_html ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'include_html'" );
                    goto error_exit;
                }

                _python_par_include_html = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_email_backend, key ) )
            {
                if (unlikely( _python_par_email_backend ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'email_backend'" );
                    goto error_exit;
                }

                _python_par_email_backend = value;

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
         if (unlikely( _python_par_include_html != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'include_html'" );
             goto error_exit;
         }

        _python_par_include_html = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_email_backend != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'email_backend'" );
             goto error_exit;
         }

        _python_par_email_backend = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_include_html == NULL )
    {
        _python_par_include_html = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_include_html );
    }
    if ( _python_par_email_backend == NULL )
    {
        _python_par_email_backend = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_email_backend );
    }


    return impl_function_1___init___of_class_2_AdminEmailHandler_of_module_django__utils__log( self, _python_par_self, _python_par_include_html, _python_par_email_backend );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_include_html );
    Py_XDECREF( _python_par_email_backend );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_2_AdminEmailHandler_of_module_django__utils__log( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_1___init___of_class_2_AdminEmailHandler_of_module_django__utils__log( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_2_AdminEmailHandler_of_module_django__utils__log( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_emit_of_class_2_AdminEmailHandler_of_module_django__utils__log( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_record )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_record( _python_str_plain_record, _python_par_record );
    PyObjectLocalVariable _python_var_request( _python_str_plain_request );
    PyObjectLocalVariable _python_var_subject( _python_str_plain_subject );
    PyObjectLocalVariable _python_var_filter( _python_str_plain_filter );
    PyObjectLocalVariable _python_var_request_repr( _python_str_plain_request_repr );
    PyObjectLocalVariable _python_var_exc_info( _python_str_plain_exc_info );
    PyObjectLocalVariable _python_var_stack_trace( _python_str_plain_stack_trace );
    PyObjectLocalVariable _python_var_message( _python_str_plain_message );
    PyObjectLocalVariable _python_var_reporter( _python_str_plain_reporter );
    PyObjectLocalVariable _python_var_html_message( _python_str_plain_html_message );

    // Actual function code.
    static PyFrameObject *frame_function_2_emit_of_class_2_AdminEmailHandler_of_module_django__utils__log = NULL;

    if ( isFrameUnusable( frame_function_2_emit_of_class_2_AdminEmailHandler_of_module_django__utils__log ) )
    {
        if ( frame_function_2_emit_of_class_2_AdminEmailHandler_of_module_django__utils__log )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_emit_of_class_2_AdminEmailHandler_of_module_django__utils__log" );
#endif
            Py_DECREF( frame_function_2_emit_of_class_2_AdminEmailHandler_of_module_django__utils__log );
        }

        frame_function_2_emit_of_class_2_AdminEmailHandler_of_module_django__utils__log = MAKE_FRAME( _codeobj_5bd1930284735ec419d856b45ca585e5, _module_django__utils__log );
    }

    FrameGuard frame_guard( frame_function_2_emit_of_class_2_AdminEmailHandler_of_module_django__utils__log );
    try
    {
        assert( Py_REFCNT( frame_function_2_emit_of_class_2_AdminEmailHandler_of_module_django__utils__log ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 91 );
        try
        {
            frame_guard.setLineNumber( 92 );
            _python_var_request.assign1( LOOKUP_ATTRIBUTE( _python_var_record.asObject(), _python_str_plain_request ) );
            frame_guard.setLineNumber( 93 );
            {
                PyObjectTempKeeper1 cmp3;
                PyObjectTempKeeper1 make_tuple5;
                PyObjectTempKeeper0 make_tuple6;
                _python_var_subject.assign1( BINARY_OPERATION_REMAINDER( _python_str_digest_0d21ebe92610d07acdba25cc910723fd, PyObjectTemporary( ( make_tuple5.assign( LOOKUP_ATTRIBUTE( _python_var_record.asObject(), _python_str_plain_levelname ) ), make_tuple6.assign( ( ( cmp3.assign( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_request.asObject(), _python_str_plain_META ) ).asObject(), _python_str_plain_get ) ).asObject(), _python_str_plain_REMOTE_ADDR ) ), SEQUENCE_CONTAINS_BOOL( cmp3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__log_settings.asObject0(), _python_str_plain_INTERNAL_IPS ) ).asObject() ) ) ? _python_str_plain_internal : _python_str_plain_EXTERNAL ) ), MAKE_TUPLE3( make_tuple5.asObject0(), make_tuple6.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_record.asObject(), _python_str_plain_getMessage ) ).asObject() ) ).asObject() ) ) ).asObject() ) );
            }
            frame_guard.setLineNumber( 99 );
            {
                PyObjectTempKeeper0 call8;
                _python_var_filter.assign1( ( call8.assign( _mvar_django__utils__log_get_exception_reporter_filter.asObject0() ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), _python_var_request.asObject() ) ) );
            }
            frame_guard.setLineNumber( 100 );
            {
                PyObjectTempKeeper1 call10;
                _python_var_request_repr.assign1( ( call10.assign( LOOKUP_ATTRIBUTE( _python_var_filter.asObject(), _python_str_plain_get_request_repr ) ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), _python_var_request.asObject() ) ) );
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
                frame_guard.setLineNumber( 102 );
                {
                    PyObjectTempKeeper1 make_tuple1;
                    _python_var_subject.assign1( BINARY_OPERATION_REMAINDER( _python_str_digest_7d341c08fd102f0b86285b5ff2e26ea7, PyObjectTemporary( ( make_tuple1.assign( LOOKUP_ATTRIBUTE( _python_var_record.asObject(), _python_str_plain_levelname ) ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_record.asObject(), _python_str_plain_getMessage ) ).asObject() ) ).asObject() ) ) ).asObject() ) );
                }
                _python_var_request.assign0( Py_None );
                _python_var_request_repr.assign0( _python_str_digest_9bf0212ed33cb9ca8759f2012ac7ba2d );
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
        frame_guard.setLineNumber( 108 );
        {
            PyObjectTempKeeper1 call12;
            _python_var_subject.assign1( ( call12.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_format_subject ) ), CALL_FUNCTION_WITH_ARGS( call12.asObject0(), _python_var_subject.asObject() ) ) );
        }
        frame_guard.setLineNumber( 110 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_record.asObject(), _python_str_plain_exc_info ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 111 );
            _python_var_exc_info.assign1( LOOKUP_ATTRIBUTE( _python_var_record.asObject(), _python_str_plain_exc_info ) );
            frame_guard.setLineNumber( 112 );
            {
                PyObjectTempKeeper1 call16;
                PyObjectTempKeeper1 call_tmp14;
                _python_var_stack_trace.assign1( ( call16.assign( LOOKUP_ATTRIBUTE( _python_str_chr_10, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call16.asObject0(), PyObjectTemporary( ( call_tmp14.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__log_traceback.asObject0(), _python_str_plain_format_exception ) ), impl_function_7_complex_call_helper_star_list_of_module___internal__( call_tmp14.asObject(), LOOKUP_ATTRIBUTE( _python_var_record.asObject(), _python_str_plain_exc_info ) ) ) ).asObject() ) ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 114 );
            _python_var_exc_info.assign1( MAKE_TUPLE3( Py_None, PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_record.asObject(), _python_str_plain_getMessage ) ).asObject() ) ).asObject(), Py_None ) );
            _python_var_stack_trace.assign0( _python_str_digest_80d9fa4ba717772a3fb8305172064ff9 );
        }
        frame_guard.setLineNumber( 117 );
        {
            PyObjectTempKeeper0 make_tuple18;
            _python_var_message.assign1( BINARY_OPERATION_REMAINDER( _python_str_digest_9393cd09143f6694c044ffb01cc49129, PyObjectTemporary( ( make_tuple18.assign( _python_var_stack_trace.asObject() ), MAKE_TUPLE2( make_tuple18.asObject0(), _python_var_request_repr.asObject() ) ) ).asObject() ) );
        }
        frame_guard.setLineNumber( 118 );
        {
            PyObjectTempKeeper0 call_tmp20;
            PyObjectTempKeeper1 call_tmp21;
            _python_var_reporter.assign1( ( call_tmp20.assign( _mvar_django__utils__log_ExceptionReporter.asObject0() ), call_tmp21.assign( MAKE_TUPLE1( _python_var_request.asObject() ) ), impl_function_9_complex_call_helper_pos_keywords_star_list_of_module___internal__( call_tmp20.asObject(), call_tmp21.asObject(), PyDict_Copy( _python_dict_d5e010695c039685facbc386484f0431 ), _python_var_exc_info.asObject1() ) ) );
        }
        frame_guard.setLineNumber( 119 );
        _python_var_html_message.assign1( ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_include_html ) ).asObject() ) ? CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_reporter.asObject(), _python_str_plain_get_traceback_html ) ).asObject() ) : INCREASE_REFCOUNT( Py_None ) ) );
        frame_guard.setLineNumber( 120 );
        {
            PyObjectTempKeeper1 call32;
            PyObjectTempKeeper1 call33;
            PyObjectTempKeeper0 make_dict26;
            PyObjectTempKeeper0 make_tuple30;
            DECREASE_REFCOUNT( ( call32.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__log_mail.asObject0(), _python_str_plain_mail_admins ) ), call33.assign( ( make_tuple30.assign( _python_var_subject.asObject() ), MAKE_TUPLE2( make_tuple30.asObject0(), _python_var_message.asObject() ) ) ), CALL_FUNCTION( call32.asObject0(), call33.asObject0(), PyObjectTemporary( ( make_dict26.assign( _python_var_html_message.asObject() ), MAKE_DICT3( Py_True, _python_str_plain_fail_silently, make_dict26.asObject0(), _python_str_plain_html_message, PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_connection ) ).asObject() ) ).asObject(), _python_str_plain_connection ) ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_record.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_html_message.updateLocalsDict( _python_var_reporter.updateLocalsDict( _python_var_message.updateLocalsDict( _python_var_stack_trace.updateLocalsDict( _python_var_exc_info.updateLocalsDict( _python_var_request_repr.updateLocalsDict( _python_var_filter.updateLocalsDict( _python_var_subject.updateLocalsDict( _python_var_request.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_emit_of_class_2_AdminEmailHandler_of_module_django__utils__log )
        {
           Py_DECREF( frame_function_2_emit_of_class_2_AdminEmailHandler_of_module_django__utils__log );
           frame_function_2_emit_of_class_2_AdminEmailHandler_of_module_django__utils__log = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2_emit_of_class_2_AdminEmailHandler_of_module_django__utils__log( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_record = NULL;
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
                PyErr_Format( PyExc_TypeError, "emit() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "emit() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_record == key )
            {
                if (unlikely( _python_par_record ))
                {
                    PyErr_Format( PyExc_TypeError, "emit() got multiple values for keyword argument 'record'" );
                    goto error_exit;
                }

                _python_par_record = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "emit() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_record, key ) )
            {
                if (unlikely( _python_par_record ))
                {
                    PyErr_Format( PyExc_TypeError, "emit() got multiple values for keyword argument 'record'" );
                    goto error_exit;
                }

                _python_par_record = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "emit() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "emit() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "emit() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "emit() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "emit() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "emit() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "emit() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "emit() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "emit() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "emit() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "emit() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "emit() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "emit() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "emit() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_record != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "emit() got multiple values for keyword argument 'record'" );
             goto error_exit;
         }

        _python_par_record = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_2_emit_of_class_2_AdminEmailHandler_of_module_django__utils__log( self, _python_par_self, _python_par_record );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_record );

    return NULL;
}

static PyObject *dparse_function_2_emit_of_class_2_AdminEmailHandler_of_module_django__utils__log( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2_emit_of_class_2_AdminEmailHandler_of_module_django__utils__log( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_emit_of_class_2_AdminEmailHandler_of_module_django__utils__log( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_connection_of_class_2_AdminEmailHandler_of_module_django__utils__log( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_3_connection_of_class_2_AdminEmailHandler_of_module_django__utils__log = NULL;

    if ( isFrameUnusable( frame_function_3_connection_of_class_2_AdminEmailHandler_of_module_django__utils__log ) )
    {
        if ( frame_function_3_connection_of_class_2_AdminEmailHandler_of_module_django__utils__log )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_connection_of_class_2_AdminEmailHandler_of_module_django__utils__log" );
#endif
            Py_DECREF( frame_function_3_connection_of_class_2_AdminEmailHandler_of_module_django__utils__log );
        }

        frame_function_3_connection_of_class_2_AdminEmailHandler_of_module_django__utils__log = MAKE_FRAME( _codeobj_43acb0d9e256e9f7d865b320a8fd1e8c, _module_django__utils__log );
    }

    FrameGuard frame_guard( frame_function_3_connection_of_class_2_AdminEmailHandler_of_module_django__utils__log );
    try
    {
        assert( Py_REFCNT( frame_function_3_connection_of_class_2_AdminEmailHandler_of_module_django__utils__log ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 125 );
        {
            PyObjectTempKeeper0 call1;
            return ( call1.assign( _mvar_django__utils__log_get_connection.asObject0() ), CALL_FUNCTION( call1.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT2( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_email_backend ) ).asObject(), _python_str_plain_backend, Py_True, _python_str_plain_fail_silently ) ).asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_3_connection_of_class_2_AdminEmailHandler_of_module_django__utils__log )
        {
           Py_DECREF( frame_function_3_connection_of_class_2_AdminEmailHandler_of_module_django__utils__log );
           frame_function_3_connection_of_class_2_AdminEmailHandler_of_module_django__utils__log = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_connection_of_class_2_AdminEmailHandler_of_module_django__utils__log( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "connection() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "connection() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "connection() got multiple values for keyword argument 'self'" );
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
                   "connection() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "connection() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "connection() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "connection() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "connection() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "connection() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "connection() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "connection() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "connection() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "connection() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "connection() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "connection() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "connection() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "connection() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_3_connection_of_class_2_AdminEmailHandler_of_module_django__utils__log( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3_connection_of_class_2_AdminEmailHandler_of_module_django__utils__log( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3_connection_of_class_2_AdminEmailHandler_of_module_django__utils__log( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_connection_of_class_2_AdminEmailHandler_of_module_django__utils__log( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_format_subject_of_class_2_AdminEmailHandler_of_module_django__utils__log( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_subject )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_subject( _python_str_plain_subject, _python_par_subject );
    PyObjectLocalVariable _python_var_formatted_subject( _python_str_plain_formatted_subject );

    // Actual function code.
    static PyFrameObject *frame_function_4_format_subject_of_class_2_AdminEmailHandler_of_module_django__utils__log = NULL;

    if ( isFrameUnusable( frame_function_4_format_subject_of_class_2_AdminEmailHandler_of_module_django__utils__log ) )
    {
        if ( frame_function_4_format_subject_of_class_2_AdminEmailHandler_of_module_django__utils__log )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_format_subject_of_class_2_AdminEmailHandler_of_module_django__utils__log" );
#endif
            Py_DECREF( frame_function_4_format_subject_of_class_2_AdminEmailHandler_of_module_django__utils__log );
        }

        frame_function_4_format_subject_of_class_2_AdminEmailHandler_of_module_django__utils__log = MAKE_FRAME( _codeobj_5fbb0cb568c6702dd04189b1f887faf8, _module_django__utils__log );
    }

    FrameGuard frame_guard( frame_function_4_format_subject_of_class_2_AdminEmailHandler_of_module_django__utils__log );
    try
    {
        assert( Py_REFCNT( frame_function_4_format_subject_of_class_2_AdminEmailHandler_of_module_django__utils__log ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 133 );
        _python_var_formatted_subject.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_subject.asObject(), _python_str_plain_replace ) ).asObject(), _python_str_chr_10, _python_str_digest_1d78758685e5e2f4efeeb490f8521abd ) ).asObject(), _python_str_plain_replace ) ).asObject(), _python_str_chr_13, _python_str_digest_8ce55a318e070899562e8613f93a3e49 ) );
        frame_guard.setLineNumber( 134 );
        return LOOKUP_INDEX_SLICE( _python_var_formatted_subject.asObject(), 0, 989 );
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
        frame_guard.getFrame0()->f_locals = _python_var_subject.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_formatted_subject.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_4_format_subject_of_class_2_AdminEmailHandler_of_module_django__utils__log )
        {
           Py_DECREF( frame_function_4_format_subject_of_class_2_AdminEmailHandler_of_module_django__utils__log );
           frame_function_4_format_subject_of_class_2_AdminEmailHandler_of_module_django__utils__log = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_format_subject_of_class_2_AdminEmailHandler_of_module_django__utils__log( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_subject = NULL;
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
                PyErr_Format( PyExc_TypeError, "format_subject() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "format_subject() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "format_subject() got multiple values for keyword argument 'subject'" );
                    goto error_exit;
                }

                _python_par_subject = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "format_subject() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "format_subject() got multiple values for keyword argument 'subject'" );
                    goto error_exit;
                }

                _python_par_subject = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "format_subject() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "format_subject() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "format_subject() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "format_subject() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "format_subject() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "format_subject() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "format_subject() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "format_subject() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "format_subject() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "format_subject() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "format_subject() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "format_subject() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "format_subject() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "format_subject() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_subject != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "format_subject() got multiple values for keyword argument 'subject'" );
             goto error_exit;
         }

        _python_par_subject = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_4_format_subject_of_class_2_AdminEmailHandler_of_module_django__utils__log( self, _python_par_self, _python_par_subject );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_subject );

    return NULL;
}

static PyObject *dparse_function_4_format_subject_of_class_2_AdminEmailHandler_of_module_django__utils__log( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_4_format_subject_of_class_2_AdminEmailHandler_of_module_django__utils__log( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_format_subject_of_class_2_AdminEmailHandler_of_module_django__utils__log( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_3_CallbackFilter_of_module_django__utils__log(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_filter( _python_str_plain_filter );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_log );
    _python_var___doc__.assign0( _python_str_digest_ee4a853ad8acef3a02e2faa8194dcb19 );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_3_CallbackFilter_of_module_django__utils__log(  ) );
    _python_var_filter.assign1( MAKE_FUNCTION_function_2_filter_of_class_3_CallbackFilter_of_module_django__utils__log(  ) );
    return _python_var_filter.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) );
}


static PyObject *impl_function_1___init___of_class_3_CallbackFilter_of_module_django__utils__log( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_callback )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_callback( _python_str_plain_callback, _python_par_callback );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_3_CallbackFilter_of_module_django__utils__log = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_3_CallbackFilter_of_module_django__utils__log ) )
    {
        if ( frame_function_1___init___of_class_3_CallbackFilter_of_module_django__utils__log )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_3_CallbackFilter_of_module_django__utils__log" );
#endif
            Py_DECREF( frame_function_1___init___of_class_3_CallbackFilter_of_module_django__utils__log );
        }

        frame_function_1___init___of_class_3_CallbackFilter_of_module_django__utils__log = MAKE_FRAME( _codeobj_10ddc704520a1e805124c3e830d51fbc, _module_django__utils__log );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_3_CallbackFilter_of_module_django__utils__log );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_3_CallbackFilter_of_module_django__utils__log ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 145 );
        {
                PyObject *tmp_identifier = _python_var_callback.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_callback );
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
        frame_guard.getFrame0()->f_locals = _python_var_callback.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_3_CallbackFilter_of_module_django__utils__log )
        {
           Py_DECREF( frame_function_1___init___of_class_3_CallbackFilter_of_module_django__utils__log );
           frame_function_1___init___of_class_3_CallbackFilter_of_module_django__utils__log = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_3_CallbackFilter_of_module_django__utils__log( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_callback = NULL;
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
            if ( found == false && _python_str_plain_callback == key )
            {
                if (unlikely( _python_par_callback ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'callback'" );
                    goto error_exit;
                }

                _python_par_callback = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_callback, key ) )
            {
                if (unlikely( _python_par_callback ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'callback'" );
                    goto error_exit;
                }

                _python_par_callback = value;

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
         if (unlikely( _python_par_callback != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'callback'" );
             goto error_exit;
         }

        _python_par_callback = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_1___init___of_class_3_CallbackFilter_of_module_django__utils__log( self, _python_par_self, _python_par_callback );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_callback );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_3_CallbackFilter_of_module_django__utils__log( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1___init___of_class_3_CallbackFilter_of_module_django__utils__log( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_3_CallbackFilter_of_module_django__utils__log( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_filter_of_class_3_CallbackFilter_of_module_django__utils__log( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_record )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_record( _python_str_plain_record, _python_par_record );

    // Actual function code.
    static PyFrameObject *frame_function_2_filter_of_class_3_CallbackFilter_of_module_django__utils__log = NULL;

    if ( isFrameUnusable( frame_function_2_filter_of_class_3_CallbackFilter_of_module_django__utils__log ) )
    {
        if ( frame_function_2_filter_of_class_3_CallbackFilter_of_module_django__utils__log )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_filter_of_class_3_CallbackFilter_of_module_django__utils__log" );
#endif
            Py_DECREF( frame_function_2_filter_of_class_3_CallbackFilter_of_module_django__utils__log );
        }

        frame_function_2_filter_of_class_3_CallbackFilter_of_module_django__utils__log = MAKE_FRAME( _codeobj_b1b2fbde5ea6f0543c971e4a8cbe0059, _module_django__utils__log );
    }

    FrameGuard frame_guard( frame_function_2_filter_of_class_3_CallbackFilter_of_module_django__utils__log );
    try
    {
        assert( Py_REFCNT( frame_function_2_filter_of_class_3_CallbackFilter_of_module_django__utils__log ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 148 );
        {
            PyObjectTempKeeper1 call1;
            if ( CHECK_IF_TRUE( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_callback ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_record.asObject() ) ) ).asObject() ) )
        {
            return INCREASE_REFCOUNT( _python_int_pos_1 );
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
        frame_guard.getFrame0()->f_locals = _python_var_record.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_2_filter_of_class_3_CallbackFilter_of_module_django__utils__log )
        {
           Py_DECREF( frame_function_2_filter_of_class_3_CallbackFilter_of_module_django__utils__log );
           frame_function_2_filter_of_class_3_CallbackFilter_of_module_django__utils__log = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( _python_int_0 );
}
static PyObject *fparse_function_2_filter_of_class_3_CallbackFilter_of_module_django__utils__log( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_record = NULL;
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
                PyErr_Format( PyExc_TypeError, "filter() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "filter() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_record == key )
            {
                if (unlikely( _python_par_record ))
                {
                    PyErr_Format( PyExc_TypeError, "filter() got multiple values for keyword argument 'record'" );
                    goto error_exit;
                }

                _python_par_record = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "filter() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_record, key ) )
            {
                if (unlikely( _python_par_record ))
                {
                    PyErr_Format( PyExc_TypeError, "filter() got multiple values for keyword argument 'record'" );
                    goto error_exit;
                }

                _python_par_record = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "filter() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "filter() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "filter() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "filter() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "filter() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "filter() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "filter() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "filter() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "filter() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "filter() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "filter() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "filter() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "filter() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "filter() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_record != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "filter() got multiple values for keyword argument 'record'" );
             goto error_exit;
         }

        _python_par_record = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_2_filter_of_class_3_CallbackFilter_of_module_django__utils__log( self, _python_par_self, _python_par_record );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_record );

    return NULL;
}

static PyObject *dparse_function_2_filter_of_class_3_CallbackFilter_of_module_django__utils__log( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2_filter_of_class_3_CallbackFilter_of_module_django__utils__log( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_filter_of_class_3_CallbackFilter_of_module_django__utils__log( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_4_RequireDebugFalse_of_module_django__utils__log(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var_filter( _python_str_plain_filter );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_log );
    _python_var_filter.assign1( MAKE_FUNCTION_function_1_filter_of_class_4_RequireDebugFalse_of_module_django__utils__log(  ) );
    return _python_var_filter.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) );
}


static PyObject *impl_function_1_filter_of_class_4_RequireDebugFalse_of_module_django__utils__log( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_record )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_record( _python_str_plain_record, _python_par_record );

    // Actual function code.
    static PyFrameObject *frame_function_1_filter_of_class_4_RequireDebugFalse_of_module_django__utils__log = NULL;

    if ( isFrameUnusable( frame_function_1_filter_of_class_4_RequireDebugFalse_of_module_django__utils__log ) )
    {
        if ( frame_function_1_filter_of_class_4_RequireDebugFalse_of_module_django__utils__log )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_filter_of_class_4_RequireDebugFalse_of_module_django__utils__log" );
#endif
            Py_DECREF( frame_function_1_filter_of_class_4_RequireDebugFalse_of_module_django__utils__log );
        }

        frame_function_1_filter_of_class_4_RequireDebugFalse_of_module_django__utils__log = MAKE_FRAME( _codeobj_abdef5bae5b893f380b0fab2ed28613c, _module_django__utils__log );
    }

    FrameGuard frame_guard( frame_function_1_filter_of_class_4_RequireDebugFalse_of_module_django__utils__log );
    try
    {
        assert( Py_REFCNT( frame_function_1_filter_of_class_4_RequireDebugFalse_of_module_django__utils__log ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 155 );
        return INCREASE_REFCOUNT( UNARY_OPERATION( UNARY_NOT, PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__log_settings.asObject0(), _python_str_plain_DEBUG ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_record.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_1_filter_of_class_4_RequireDebugFalse_of_module_django__utils__log )
        {
           Py_DECREF( frame_function_1_filter_of_class_4_RequireDebugFalse_of_module_django__utils__log );
           frame_function_1_filter_of_class_4_RequireDebugFalse_of_module_django__utils__log = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1_filter_of_class_4_RequireDebugFalse_of_module_django__utils__log( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_record = NULL;
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
                PyErr_Format( PyExc_TypeError, "filter() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "filter() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_record == key )
            {
                if (unlikely( _python_par_record ))
                {
                    PyErr_Format( PyExc_TypeError, "filter() got multiple values for keyword argument 'record'" );
                    goto error_exit;
                }

                _python_par_record = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "filter() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_record, key ) )
            {
                if (unlikely( _python_par_record ))
                {
                    PyErr_Format( PyExc_TypeError, "filter() got multiple values for keyword argument 'record'" );
                    goto error_exit;
                }

                _python_par_record = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "filter() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "filter() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "filter() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "filter() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "filter() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "filter() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "filter() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "filter() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "filter() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "filter() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "filter() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "filter() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "filter() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "filter() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_record != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "filter() got multiple values for keyword argument 'record'" );
             goto error_exit;
         }

        _python_par_record = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_1_filter_of_class_4_RequireDebugFalse_of_module_django__utils__log( self, _python_par_self, _python_par_record );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_record );

    return NULL;
}

static PyObject *dparse_function_1_filter_of_class_4_RequireDebugFalse_of_module_django__utils__log( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1_filter_of_class_4_RequireDebugFalse_of_module_django__utils__log( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_filter_of_class_4_RequireDebugFalse_of_module_django__utils__log( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_5_RequireDebugTrue_of_module_django__utils__log(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var_filter( _python_str_plain_filter );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_log );
    _python_var_filter.assign1( MAKE_FUNCTION_function_1_filter_of_class_5_RequireDebugTrue_of_module_django__utils__log(  ) );
    return _python_var_filter.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) );
}


static PyObject *impl_function_1_filter_of_class_5_RequireDebugTrue_of_module_django__utils__log( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_record )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_record( _python_str_plain_record, _python_par_record );

    // Actual function code.
    static PyFrameObject *frame_function_1_filter_of_class_5_RequireDebugTrue_of_module_django__utils__log = NULL;

    if ( isFrameUnusable( frame_function_1_filter_of_class_5_RequireDebugTrue_of_module_django__utils__log ) )
    {
        if ( frame_function_1_filter_of_class_5_RequireDebugTrue_of_module_django__utils__log )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_filter_of_class_5_RequireDebugTrue_of_module_django__utils__log" );
#endif
            Py_DECREF( frame_function_1_filter_of_class_5_RequireDebugTrue_of_module_django__utils__log );
        }

        frame_function_1_filter_of_class_5_RequireDebugTrue_of_module_django__utils__log = MAKE_FRAME( _codeobj_c3b7ee2b965d1cc9361980c5535ac039, _module_django__utils__log );
    }

    FrameGuard frame_guard( frame_function_1_filter_of_class_5_RequireDebugTrue_of_module_django__utils__log );
    try
    {
        assert( Py_REFCNT( frame_function_1_filter_of_class_5_RequireDebugTrue_of_module_django__utils__log ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 160 );
        return LOOKUP_ATTRIBUTE( _mvar_django__utils__log_settings.asObject0(), _python_str_plain_DEBUG );
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
        frame_guard.getFrame0()->f_locals = _python_var_record.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_1_filter_of_class_5_RequireDebugTrue_of_module_django__utils__log )
        {
           Py_DECREF( frame_function_1_filter_of_class_5_RequireDebugTrue_of_module_django__utils__log );
           frame_function_1_filter_of_class_5_RequireDebugTrue_of_module_django__utils__log = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1_filter_of_class_5_RequireDebugTrue_of_module_django__utils__log( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_record = NULL;
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
                PyErr_Format( PyExc_TypeError, "filter() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "filter() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_record == key )
            {
                if (unlikely( _python_par_record ))
                {
                    PyErr_Format( PyExc_TypeError, "filter() got multiple values for keyword argument 'record'" );
                    goto error_exit;
                }

                _python_par_record = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "filter() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_record, key ) )
            {
                if (unlikely( _python_par_record ))
                {
                    PyErr_Format( PyExc_TypeError, "filter() got multiple values for keyword argument 'record'" );
                    goto error_exit;
                }

                _python_par_record = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "filter() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "filter() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "filter() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "filter() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "filter() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "filter() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "filter() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "filter() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "filter() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "filter() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "filter() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "filter() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "filter() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "filter() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_record != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "filter() got multiple values for keyword argument 'record'" );
             goto error_exit;
         }

        _python_par_record = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_1_filter_of_class_5_RequireDebugTrue_of_module_django__utils__log( self, _python_par_self, _python_par_record );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_record );

    return NULL;
}

static PyObject *dparse_function_1_filter_of_class_5_RequireDebugTrue_of_module_django__utils__log( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1_filter_of_class_5_RequireDebugTrue_of_module_django__utils__log( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_filter_of_class_5_RequireDebugTrue_of_module_django__utils__log( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1___init___of_class_2_AdminEmailHandler_of_module_django__utils__log(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_2_AdminEmailHandler_of_module_django__utils__log,
        dparse_function_1___init___of_class_2_AdminEmailHandler_of_module_django__utils__log,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_51df41c0e63e3d1e89953eef01531f25,
        INCREASE_REFCOUNT( _python_tuple_false_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__log,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_3_CallbackFilter_of_module_django__utils__log(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_3_CallbackFilter_of_module_django__utils__log,
        dparse_function_1___init___of_class_3_CallbackFilter_of_module_django__utils__log,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_10ddc704520a1e805124c3e830d51fbc,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__log,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_emit_of_class_1_NullHandler_of_module_django__utils__log(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_emit_of_class_1_NullHandler_of_module_django__utils__log,
        dparse_function_1_emit_of_class_1_NullHandler_of_module_django__utils__log,
        _python_str_plain_emit,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_aa1de5757a97f528f5b285e79e1faaf6,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__log,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_filter_of_class_4_RequireDebugFalse_of_module_django__utils__log(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_filter_of_class_4_RequireDebugFalse_of_module_django__utils__log,
        dparse_function_1_filter_of_class_4_RequireDebugFalse_of_module_django__utils__log,
        _python_str_plain_filter,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_abdef5bae5b893f380b0fab2ed28613c,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__log,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_filter_of_class_5_RequireDebugTrue_of_module_django__utils__log(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_filter_of_class_5_RequireDebugTrue_of_module_django__utils__log,
        dparse_function_1_filter_of_class_5_RequireDebugTrue_of_module_django__utils__log,
        _python_str_plain_filter,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_c3b7ee2b965d1cc9361980c5535ac039,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__log,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_emit_of_class_2_AdminEmailHandler_of_module_django__utils__log(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_emit_of_class_2_AdminEmailHandler_of_module_django__utils__log,
        dparse_function_2_emit_of_class_2_AdminEmailHandler_of_module_django__utils__log,
        _python_str_plain_emit,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_5bd1930284735ec419d856b45ca585e5,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__log,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_filter_of_class_3_CallbackFilter_of_module_django__utils__log(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_filter_of_class_3_CallbackFilter_of_module_django__utils__log,
        dparse_function_2_filter_of_class_3_CallbackFilter_of_module_django__utils__log,
        _python_str_plain_filter,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b1b2fbde5ea6f0543c971e4a8cbe0059,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__log,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_connection_of_class_2_AdminEmailHandler_of_module_django__utils__log(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_connection_of_class_2_AdminEmailHandler_of_module_django__utils__log,
        dparse_function_3_connection_of_class_2_AdminEmailHandler_of_module_django__utils__log,
        _python_str_plain_connection,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_43acb0d9e256e9f7d865b320a8fd1e8c,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__log,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_format_subject_of_class_2_AdminEmailHandler_of_module_django__utils__log(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_format_subject_of_class_2_AdminEmailHandler_of_module_django__utils__log,
        dparse_function_4_format_subject_of_class_2_AdminEmailHandler_of_module_django__utils__log,
        _python_str_plain_format_subject,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_5fbb0cb568c6702dd04189b1f887faf8,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__log,
        _python_str_digest_8726a042798ebd3a3178438b8cdbc4b9
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.utils.log",   /* m_name */
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

MOD_INIT_DECL( django__utils__log )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__utils__log );
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

    // puts( "in initdjango__utils__log" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__utils__log = Py_InitModule4(
        "django.utils.log",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__utils__log = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__utils__log = (PyDictObject *)((PyModuleObject *)_module_django__utils__log)->md_dict;

    assertObject( _module_django__utils__log );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_757406db1d9f861d55460430f537cbf8, _module_django__utils__log );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__utils__log );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__utils__log != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__utils__log, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django__utils__log, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_c7e2c083a04752151913140fa802733d );
    PyFrameObject *frame_module_django__utils__log = MAKE_FRAME( _codeobj_68e3b1f43ffb1ba74a3632e5791cc2f5, _module_django__utils__log );

    FrameGuard frame_guard( frame_module_django__utils__log );
    try
    {
        assert( Py_REFCNT( frame_module_django__utils__log ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 1 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__log, (Nuitka_StringObject *)_python_str_plain_logging, IMPORT_MODULE( _python_str_plain_logging, ((PyModuleObject *)_module_django__utils__log)->md_dict, ((PyModuleObject *)_module_django__utils__log)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 2 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__log, (Nuitka_StringObject *)_python_str_plain_traceback, IMPORT_MODULE( _python_str_plain_traceback, ((PyModuleObject *)_module_django__utils__log)->md_dict, ((PyModuleObject *)_module_django__utils__log)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 4 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__log, (Nuitka_StringObject *)_python_str_plain_settings, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__utils__log)->md_dict, ((PyModuleObject *)_module_django__utils__log)->md_dict, _python_list_str_plain_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_settings ) );
        frame_guard.setLineNumber( 5 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__log, (Nuitka_StringObject *)_python_str_plain_mail, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_7fde38a6b8ad78c8ebb1bdff593c9e48, ((PyModuleObject *)_module_django__utils__log)->md_dict, ((PyModuleObject *)_module_django__utils__log)->md_dict, _python_list_str_plain_mail_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_mail ) );
        frame_guard.setLineNumber( 6 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__log, (Nuitka_StringObject *)_python_str_plain_get_connection, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_ea9bb7eb68e7731112941509331ba08f, ((PyModuleObject *)_module_django__utils__log)->md_dict, ((PyModuleObject *)_module_django__utils__log)->md_dict, _python_list_str_plain_get_connection_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_get_connection ) );
        frame_guard.setLineNumber( 7 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__log, (Nuitka_StringObject *)_python_str_plain_ExceptionReporter, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_fb728193c3b7c51365c63de90c1d5dda, ((PyModuleObject *)_module_django__utils__log)->md_dict, ((PyModuleObject *)_module_django__utils__log)->md_dict, _python_list_846af9696ab594671835ec082c2b4674_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ExceptionReporter ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__log, (Nuitka_StringObject *)_python_str_plain_get_exception_reporter_filter, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_fb728193c3b7c51365c63de90c1d5dda, ((PyModuleObject *)_module_django__utils__log)->md_dict, ((PyModuleObject *)_module_django__utils__log)->md_dict, _python_list_846af9696ab594671835ec082c2b4674_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_get_exception_reporter_filter ) );
        frame_guard.setLineNumber( 12 );
        try
        {
            frame_guard.setLineNumber( 13 );
            UPDATE_STRING_DICT1( _moduledict_django__utils__log, (Nuitka_StringObject *)_python_str_plain_NullHandler, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_logging, ((PyModuleObject *)_module_django__utils__log)->md_dict, ((PyModuleObject *)_module_django__utils__log)->md_dict, _python_list_str_plain_NullHandler_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_NullHandler ) );
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
                {
                    frame_guard.setLineNumber( 15 );
                    PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__log_logging.asObject0(), _python_str_plain_Handler ) ).asObject() ) );
                    PyObjectTemporary _python_tmp_class_dict( impl_class_1_NullHandler_of_module_django__utils__log(  ) );
                    PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__utils__log___metaclass__.isInitialized( false ) ? _mvar_django__utils__log___metaclass__.asObject0() : NULL ) ) ) );
                    PyObject *_tmp_python_tmp_class;
                    {
                        PyObjectTempKeeper0 call1;
                        PyObjectTempKeeper0 call3;
                        _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_NullHandler, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
                    }
                    PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
                    UPDATE_STRING_DICT0( _moduledict_django__utils__log, (Nuitka_StringObject *)_python_str_plain_NullHandler, _python_tmp_class.asObject() );
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
        frame_guard.setLineNumber( 21 );
        try
        {
            frame_guard.setLineNumber( 22 );
            UPDATE_STRING_DICT1( _moduledict_django__utils__log, (Nuitka_StringObject *)_python_str_plain_dictConfig, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_0e983160cf13b842b45a3e718034371e, ((PyModuleObject *)_module_django__utils__log)->md_dict, ((PyModuleObject *)_module_django__utils__log)->md_dict, _python_list_str_plain_dictConfig_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_dictConfig ) );
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
                frame_guard.setLineNumber( 24 );
                UPDATE_STRING_DICT1( _moduledict_django__utils__log, (Nuitka_StringObject *)_python_str_plain_dictConfig, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_f60f8752aa5b17068ecd8555ac43a187, ((PyModuleObject *)_module_django__utils__log)->md_dict, ((PyModuleObject *)_module_django__utils__log)->md_dict, _python_list_str_plain_dictConfig_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_dictConfig ) );
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
        frame_guard.setLineNumber( 26 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__log, (Nuitka_StringObject *)_python_str_plain_getLogger, LOOKUP_ATTRIBUTE( _mvar_django__utils__log_logging.asObject0(), _python_str_plain_getLogger ) );
        frame_guard.setLineNumber( 31 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__log, (Nuitka_StringObject *)_python_str_plain_DEFAULT_LOGGING, MAKE_DICT5( _python_int_pos_1, _python_str_plain_version, Py_False, _python_str_plain_disable_existing_loggers, PyObjectTemporary( MAKE_DICT2( PyObjectTemporary( PyDict_Copy( _python_dict_2ac5811888ec6e40290b3781ad1f41e4 ) ).asObject(), _python_str_plain_require_debug_false, PyObjectTemporary( PyDict_Copy( _python_dict_c1fd2b20519a19bfa6e42160128265a5 ) ).asObject(), _python_str_plain_require_debug_true ) ).asObject(), _python_str_plain_filters, PyObjectTemporary( MAKE_DICT3( PyObjectTemporary( MAKE_DICT3( _python_str_plain_INFO, _python_str_plain_level, PyObjectTemporary( LIST_COPY( _python_list_str_plain_require_debug_true_list ) ).asObject(), _python_str_plain_filters, _python_str_digest_4209416eb5f938fa2959e48a558adbc3, _python_str_plain_class ) ).asObject(), _python_str_plain_console, PyObjectTemporary( PyDict_Copy( _python_dict_da12577a432d1ad032c2aad9977cbd10 ) ).asObject(), _python_str_plain_null, PyObjectTemporary( MAKE_DICT3( _python_str_plain_ERROR, _python_str_plain_level, PyObjectTemporary( LIST_COPY( _python_list_str_plain_require_debug_false_list ) ).asObject(), _python_str_plain_filters, _python_str_digest_f7dd797e7a3472d3c18d18972e148af7, _python_str_plain_class ) ).asObject(), _python_str_plain_mail_admins ) ).asObject(), _python_str_plain_handlers, PyObjectTemporary( MAKE_DICT4( PyObjectTemporary( PyDict_Copy( _python_dict_3d288f9c18c801dee4df744a5c3206f4 ) ).asObject(), _python_str_plain_django, PyObjectTemporary( MAKE_DICT3( PyObjectTemporary( LIST_COPY( _python_list_str_plain_mail_admins_list ) ).asObject(), _python_str_plain_handlers, _python_str_plain_ERROR, _python_str_plain_level, Py_False, _python_str_plain_propagate ) ).asObject(), _python_str_digest_62b3f671777cd348390a3b2a70236231, PyObjectTemporary( MAKE_DICT3( PyObjectTemporary( LIST_COPY( _python_list_str_plain_mail_admins_list ) ).asObject(), _python_str_plain_handlers, _python_str_plain_ERROR, _python_str_plain_level, Py_False, _python_str_plain_propagate ) ).asObject(), _python_str_digest_75a39062e6d476e8b903e6341ea361c1, PyObjectTemporary( PyDict_Copy( _python_dict_3d288f9c18c801dee4df744a5c3206f4 ) ).asObject(), _python_str_digest_caf9bd10e1a231effd2976aa84cb179a ) ).asObject(), _python_str_plain_loggers ) );
        {
            frame_guard.setLineNumber( 78 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__log_logging.asObject0(), _python_str_plain_Handler ) ).asObject() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_2_AdminEmailHandler_of_module_django__utils__log(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__utils__log___metaclass__.isInitialized( false ) ? _mvar_django__utils__log___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper0 call7;
                _tmp_python_tmp_class = ( call5.assign( _python_tmp_metaclass.asObject() ), call7.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_str_plain_AdminEmailHandler, call7.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__utils__log, (Nuitka_StringObject *)_python_str_plain_AdminEmailHandler, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 137 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__log_logging.asObject0(), _python_str_plain_Filter ) ).asObject() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_3_CallbackFilter_of_module_django__utils__log(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__utils__log___metaclass__.isInitialized( false ) ? _mvar_django__utils__log___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call11;
                PyObjectTempKeeper0 call9;
                _tmp_python_tmp_class = ( call9.assign( _python_tmp_metaclass.asObject() ), call11.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_str_plain_CallbackFilter, call11.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__utils__log, (Nuitka_StringObject *)_python_str_plain_CallbackFilter, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 153 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__log_logging.asObject0(), _python_str_plain_Filter ) ).asObject() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_4_RequireDebugFalse_of_module_django__utils__log(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__utils__log___metaclass__.isInitialized( false ) ? _mvar_django__utils__log___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call13;
                PyObjectTempKeeper0 call15;
                _tmp_python_tmp_class = ( call13.assign( _python_tmp_metaclass.asObject() ), call15.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), _python_str_plain_RequireDebugFalse, call15.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__utils__log, (Nuitka_StringObject *)_python_str_plain_RequireDebugFalse, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 158 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__log_logging.asObject0(), _python_str_plain_Filter ) ).asObject() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_5_RequireDebugTrue_of_module_django__utils__log(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__utils__log___metaclass__.isInitialized( false ) ? _mvar_django__utils__log___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call17;
                PyObjectTempKeeper0 call19;
                _tmp_python_tmp_class = ( call17.assign( _python_tmp_metaclass.asObject() ), call19.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call17.asObject0(), _python_str_plain_RequireDebugTrue, call19.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__utils__log, (Nuitka_StringObject *)_python_str_plain_RequireDebugTrue, _python_tmp_class.asObject() );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__utils__log)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }

   return MOD_RETURN_VALUE( _module_django__utils__log );
}
