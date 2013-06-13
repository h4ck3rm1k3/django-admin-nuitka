// Generated code for Python source for module 'django.db.backends.util'
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

// The _module_django__db__backends__util is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__db__backends__util;
PyDictObject *_moduledict_django__db__backends__util;

// The module level variables.
static PyObjectGlobalVariable_django__db__backends__util _mvar_django__db__backends__util_CursorWrapper( &_module_django__db__backends__util, &_python_str_plain_CursorWrapper );
static PyObjectGlobalVariable_django__db__backends__util _mvar_django__db__backends__util___metaclass__( &_module_django__db__backends__util, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__db__backends__util _mvar_django__db__backends__util_datetime( &_module_django__db__backends__util, &_python_str_plain_datetime );
static PyObjectGlobalVariable_django__db__backends__util _mvar_django__db__backends__util_decimal( &_module_django__db__backends__util, &_python_str_plain_decimal );
static PyObjectGlobalVariable_django__db__backends__util _mvar_django__db__backends__util_force_bytes( &_module_django__db__backends__util, &_python_str_plain_force_bytes );
static PyObjectGlobalVariable_django__db__backends__util _mvar_django__db__backends__util_hashlib( &_module_django__db__backends__util, &_python_str_plain_hashlib );
static PyObjectGlobalVariable_django__db__backends__util _mvar_django__db__backends__util_logger( &_module_django__db__backends__util, &_python_str_plain_logger );
static PyObjectGlobalVariable_django__db__backends__util _mvar_django__db__backends__util_logging( &_module_django__db__backends__util, &_python_str_plain_logging );
static PyObjectGlobalVariable_django__db__backends__util _mvar_django__db__backends__util_settings( &_module_django__db__backends__util, &_python_str_plain_settings );
static PyObjectGlobalVariable_django__db__backends__util _mvar_django__db__backends__util_time( &_module_django__db__backends__util, &_python_str_plain_time );
static PyObjectGlobalVariable_django__db__backends__util _mvar_django__db__backends__util_typecast_date( &_module_django__db__backends__util, &_python_str_plain_typecast_date );
static PyObjectGlobalVariable_django__db__backends__util _mvar_django__db__backends__util_utc( &_module_django__db__backends__util, &_python_str_plain_utc );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_CursorWrapper_of_module_django__db__backends__util(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_2_CursorDebugWrapper_of_module_django__db__backends__util(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_CursorWrapper_of_module_django__db__backends__util(  );


static PyObject *MAKE_FUNCTION_function_1_execute_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util(  );


static PyObject *MAKE_FUNCTION_function_2___getattr___of_class_1_CursorWrapper_of_module_django__db__backends__util(  );


static PyObject *MAKE_FUNCTION_function_2_executemany_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util(  );


static PyObject *MAKE_FUNCTION_function_3___iter___of_class_1_CursorWrapper_of_module_django__db__backends__util(  );


static PyObject *MAKE_FUNCTION_function_3_typecast_date_of_module_django__db__backends__util(  );


static PyObject *MAKE_FUNCTION_function_4_typecast_time_of_module_django__db__backends__util(  );


static PyObject *MAKE_FUNCTION_function_5_typecast_timestamp_of_module_django__db__backends__util(  );


static PyObject *MAKE_FUNCTION_function_6_typecast_decimal_of_module_django__db__backends__util(  );


static PyObject *MAKE_FUNCTION_function_7_rev_typecast_decimal_of_module_django__db__backends__util(  );


static PyObject *MAKE_FUNCTION_function_8_truncate_name_of_module_django__db__backends__util(  );


static PyObject *MAKE_FUNCTION_function_9_format_number_of_module_django__db__backends__util(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_CursorWrapper_of_module_django__db__backends__util(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var___getattr__( _python_str_plain___getattr__ );
    PyObjectLocalVariable _python_var___iter__( _python_str_plain___iter__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_util );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_1_CursorWrapper_of_module_django__db__backends__util(  ) );
    _python_var___getattr__.assign1( MAKE_FUNCTION_function_2___getattr___of_class_1_CursorWrapper_of_module_django__db__backends__util(  ) );
    _python_var___iter__.assign1( MAKE_FUNCTION_function_3___iter___of_class_1_CursorWrapper_of_module_django__db__backends__util(  ) );
    return _python_var___iter__.updateLocalsDict( _python_var___getattr__.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) );
}


static PyObject *impl_function_1___init___of_class_1_CursorWrapper_of_module_django__db__backends__util( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_cursor, PyObject *_python_par_db )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_cursor( _python_str_plain_cursor, _python_par_cursor );
    PyObjectLocalParameterVariableNoDel _python_var_db( _python_str_plain_db, _python_par_db );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_1_CursorWrapper_of_module_django__db__backends__util = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_1_CursorWrapper_of_module_django__db__backends__util ) )
    {
        if ( frame_function_1___init___of_class_1_CursorWrapper_of_module_django__db__backends__util )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_1_CursorWrapper_of_module_django__db__backends__util" );
#endif
            Py_DECREF( frame_function_1___init___of_class_1_CursorWrapper_of_module_django__db__backends__util );
        }

        frame_function_1___init___of_class_1_CursorWrapper_of_module_django__db__backends__util = MAKE_FRAME( _codeobj_076bc67b575778918a39ff14c16bcbd9, _module_django__db__backends__util );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_1_CursorWrapper_of_module_django__db__backends__util );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_1_CursorWrapper_of_module_django__db__backends__util ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 19 );
        {
                PyObject *tmp_identifier = _python_var_cursor.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_cursor );
        }
        frame_guard.setLineNumber( 20 );
        {
                PyObject *tmp_identifier = _python_var_db.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_db );
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
        frame_guard.getFrame0()->f_locals = _python_var_db.updateLocalsDict( _python_var_cursor.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_1_CursorWrapper_of_module_django__db__backends__util )
        {
           Py_DECREF( frame_function_1___init___of_class_1_CursorWrapper_of_module_django__db__backends__util );
           frame_function_1___init___of_class_1_CursorWrapper_of_module_django__db__backends__util = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_1_CursorWrapper_of_module_django__db__backends__util( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_cursor = NULL;
    PyObject *_python_par_db = NULL;
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
            if ( found == false && _python_str_plain_cursor == key )
            {
                if (unlikely( _python_par_cursor ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'cursor'" );
                    goto error_exit;
                }

                _python_par_cursor = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_db == key )
            {
                if (unlikely( _python_par_db ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'db'" );
                    goto error_exit;
                }

                _python_par_db = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_cursor, key ) )
            {
                if (unlikely( _python_par_cursor ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'cursor'" );
                    goto error_exit;
                }

                _python_par_cursor = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_db, key ) )
            {
                if (unlikely( _python_par_db ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'db'" );
                    goto error_exit;
                }

                _python_par_db = value;

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
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
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
    if (unlikely( args_given + kw_found - kw_only_found < 3 ))
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
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__init__() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
         if (unlikely( _python_par_cursor != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'cursor'" );
             goto error_exit;
         }

        _python_par_cursor = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_db != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'db'" );
             goto error_exit;
         }

        _python_par_db = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_1___init___of_class_1_CursorWrapper_of_module_django__db__backends__util( self, _python_par_self, _python_par_cursor, _python_par_db );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_cursor );
    Py_XDECREF( _python_par_db );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_1_CursorWrapper_of_module_django__db__backends__util( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_1___init___of_class_1_CursorWrapper_of_module_django__db__backends__util( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_1_CursorWrapper_of_module_django__db__backends__util( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___getattr___of_class_1_CursorWrapper_of_module_django__db__backends__util( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_attr )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_attr( _python_str_plain_attr, _python_par_attr );
    PyObjectLocalVariable _python_var_cursor_attr( _python_str_plain_cursor_attr );

    // Actual function code.
    static PyFrameObject *frame_function_2___getattr___of_class_1_CursorWrapper_of_module_django__db__backends__util = NULL;

    if ( isFrameUnusable( frame_function_2___getattr___of_class_1_CursorWrapper_of_module_django__db__backends__util ) )
    {
        if ( frame_function_2___getattr___of_class_1_CursorWrapper_of_module_django__db__backends__util )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2___getattr___of_class_1_CursorWrapper_of_module_django__db__backends__util" );
#endif
            Py_DECREF( frame_function_2___getattr___of_class_1_CursorWrapper_of_module_django__db__backends__util );
        }

        frame_function_2___getattr___of_class_1_CursorWrapper_of_module_django__db__backends__util = MAKE_FRAME( _codeobj_4ab7376133baddb9708d87084a53ca65, _module_django__db__backends__util );
    }

    FrameGuard frame_guard( frame_function_2___getattr___of_class_1_CursorWrapper_of_module_django__db__backends__util );
    try
    {
        assert( Py_REFCNT( frame_function_2___getattr___of_class_1_CursorWrapper_of_module_django__db__backends__util ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 23 );
        if ( SEQUENCE_CONTAINS_BOOL( _python_var_attr.asObject(), _python_tuple_ee3fc39862ee1edcdbada3865d33481c_tuple ) )
        {
            frame_guard.setLineNumber( 24 );
            DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_db ) ).asObject(), _python_str_plain_set_dirty ) ).asObject() ) );
        }
        frame_guard.setLineNumber( 25 );
        {
            PyObjectTempKeeper1 getattr1;
            _python_var_cursor_attr.assign1( ( getattr1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_cursor ) ), BUILTIN_GETATTR( getattr1.asObject0(), _python_var_attr.asObject(), NULL ) ) );
        }
        frame_guard.setLineNumber( 26 );
        if ( SEQUENCE_CONTAINS_BOOL( _python_var_attr.asObject(), _python_tuple_8f4ce5d70f43a072b3d8565cdc72914f_tuple ) )
        {
            frame_guard.setLineNumber( 28 );
            {
                PyObjectTempKeeper1 call4;
                return ( call4.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_db ) ).asObject(), _python_str_plain_wrap_database_errors ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), _python_var_cursor_attr.asObject() ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 30 );
            return _python_var_cursor_attr.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_attr.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_cursor_attr.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_2___getattr___of_class_1_CursorWrapper_of_module_django__db__backends__util )
        {
           Py_DECREF( frame_function_2___getattr___of_class_1_CursorWrapper_of_module_django__db__backends__util );
           frame_function_2___getattr___of_class_1_CursorWrapper_of_module_django__db__backends__util = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2___getattr___of_class_1_CursorWrapper_of_module_django__db__backends__util( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_attr = NULL;
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
                PyErr_Format( PyExc_TypeError, "__getattr__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__getattr__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_attr == key )
            {
                if (unlikely( _python_par_attr ))
                {
                    PyErr_Format( PyExc_TypeError, "__getattr__() got multiple values for keyword argument 'attr'" );
                    goto error_exit;
                }

                _python_par_attr = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "__getattr__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_attr, key ) )
            {
                if (unlikely( _python_par_attr ))
                {
                    PyErr_Format( PyExc_TypeError, "__getattr__() got multiple values for keyword argument 'attr'" );
                    goto error_exit;
                }

                _python_par_attr = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__getattr__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__getattr__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__getattr__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__getattr__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__getattr__() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__getattr__() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__getattr__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__getattr__() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__getattr__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__getattr__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__getattr__() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "__getattr__() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__getattr__() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__getattr__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_attr != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__getattr__() got multiple values for keyword argument 'attr'" );
             goto error_exit;
         }

        _python_par_attr = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_2___getattr___of_class_1_CursorWrapper_of_module_django__db__backends__util( self, _python_par_self, _python_par_attr );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_attr );

    return NULL;
}

static PyObject *dparse_function_2___getattr___of_class_1_CursorWrapper_of_module_django__db__backends__util( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2___getattr___of_class_1_CursorWrapper_of_module_django__db__backends__util( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___getattr___of_class_1_CursorWrapper_of_module_django__db__backends__util( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3___iter___of_class_1_CursorWrapper_of_module_django__db__backends__util( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_3___iter___of_class_1_CursorWrapper_of_module_django__db__backends__util = NULL;

    if ( isFrameUnusable( frame_function_3___iter___of_class_1_CursorWrapper_of_module_django__db__backends__util ) )
    {
        if ( frame_function_3___iter___of_class_1_CursorWrapper_of_module_django__db__backends__util )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3___iter___of_class_1_CursorWrapper_of_module_django__db__backends__util" );
#endif
            Py_DECREF( frame_function_3___iter___of_class_1_CursorWrapper_of_module_django__db__backends__util );
        }

        frame_function_3___iter___of_class_1_CursorWrapper_of_module_django__db__backends__util = MAKE_FRAME( _codeobj_5828dc45240d49e5584387a569b86211, _module_django__db__backends__util );
    }

    FrameGuard frame_guard( frame_function_3___iter___of_class_1_CursorWrapper_of_module_django__db__backends__util );
    try
    {
        assert( Py_REFCNT( frame_function_3___iter___of_class_1_CursorWrapper_of_module_django__db__backends__util ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 33 );
        return MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_cursor ) ).asObject() );
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

        if ( frame_guard.getFrame0() == frame_function_3___iter___of_class_1_CursorWrapper_of_module_django__db__backends__util )
        {
           Py_DECREF( frame_function_3___iter___of_class_1_CursorWrapper_of_module_django__db__backends__util );
           frame_function_3___iter___of_class_1_CursorWrapper_of_module_django__db__backends__util = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3___iter___of_class_1_CursorWrapper_of_module_django__db__backends__util( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__iter__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__iter__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__iter__() got multiple values for keyword argument 'self'" );
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
                   "__iter__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__iter__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__iter__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__iter__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__iter__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__iter__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__iter__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__iter__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__iter__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__iter__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_3___iter___of_class_1_CursorWrapper_of_module_django__db__backends__util( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3___iter___of_class_1_CursorWrapper_of_module_django__db__backends__util( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3___iter___of_class_1_CursorWrapper_of_module_django__db__backends__util( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3___iter___of_class_1_CursorWrapper_of_module_django__db__backends__util( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_2_CursorDebugWrapper_of_module_django__db__backends__util(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var_execute( _python_str_plain_execute );
    PyObjectLocalVariable _python_var_executemany( _python_str_plain_executemany );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_util );
    _python_var_execute.assign1( MAKE_FUNCTION_function_1_execute_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util(  ) );
    _python_var_executemany.assign1( MAKE_FUNCTION_function_2_executemany_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util(  ) );
    return _python_var_executemany.updateLocalsDict( _python_var_execute.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) );
}


static PyObject *impl_function_1_execute_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_sql, PyObject *_python_par_params )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_sql( _python_str_plain_sql, _python_par_sql );
    PyObjectLocalParameterVariableNoDel _python_var_params( _python_str_plain_params, _python_par_params );
    PyObjectLocalVariable _python_var_start( _python_str_plain_start );
    PyObjectLocalVariable _python_var_stop( _python_str_plain_stop );
    PyObjectLocalVariable _python_var_duration( _python_str_plain_duration );

    // Actual function code.
    static PyFrameObject *frame_function_1_execute_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util = NULL;

    if ( isFrameUnusable( frame_function_1_execute_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util ) )
    {
        if ( frame_function_1_execute_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_execute_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util" );
#endif
            Py_DECREF( frame_function_1_execute_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util );
        }

        frame_function_1_execute_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util = MAKE_FRAME( _codeobj_911a5dbad07f0d2cf5df718cc7936273, _module_django__db__backends__util );
    }

    FrameGuard frame_guard( frame_function_1_execute_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util );
    try
    {
        assert( Py_REFCNT( frame_function_1_execute_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 39 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_db ) ).asObject(), _python_str_plain_set_dirty ) ).asObject() ) );
        frame_guard.setLineNumber( 40 );
        _python_var_start.assign1( CALL_FUNCTION_NO_ARGS( _mvar_django__db__backends__util_time.asObject0() ) );
        frame_guard.setLineNumber( 41 );
        PythonExceptionKeeper _caught_1;

        PyObjectTempKeeper1 _return_value_1;

        try
        {
            {
                frame_guard.setLineNumber( 42 );
                PyObjectTemporary _python_tmp_with_source( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_db ) ).asObject(), _python_str_plain_wrap_database_errors ) ).asObject() ) );
                PyObjectTemporary _python_tmp_with_exit( LOOKUP_SPECIAL( _python_tmp_with_source.asObject(), _python_str_plain___exit__ ) );
                PyObjectTemporary _python_tmp_with_enter( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_SPECIAL( _python_tmp_with_source.asObject(), _python_str_plain___enter__ ) ).asObject() ) );
                PyObject *_python_tmp_indicator = Py_True;
                PythonExceptionKeeper _caught_2;

                PyObjectTempKeeper1 _return_value_2;

                try
                {
                    try
                    {
                        frame_guard.setLineNumber( 43 );
                        if ( ( _python_var_params.asObject() == Py_None ) )
                        {
                            frame_guard.setLineNumber( 45 );
                            {
                                PyObjectTempKeeper1 call25;
                                throw ReturnValueException( ( call25.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_cursor ) ).asObject(), _python_str_plain_execute ) ), CALL_FUNCTION_WITH_ARGS( call25.asObject0(), _python_var_sql.asObject() ) ) );
                            }
                        }
                        frame_guard.setLineNumber( 46 );
                        {
                            PyObjectTempKeeper1 call27;
                            PyObjectTempKeeper0 call28;
                            throw ReturnValueException( ( call27.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_cursor ) ).asObject(), _python_str_plain_execute ) ), call28.assign( _python_var_sql.asObject() ), CALL_FUNCTION_WITH_ARGS( call27.asObject0(), call28.asObject0(), _python_var_params.asObject() ) ) );
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

                    _caught_2.save( _exception );

#if PYTHON_VERSION >= 300
                    frame_guard.preserveExistingException();

                    _exception.toExceptionHandler();
#endif
                }
                catch ( ReturnValueException &e )
                {
                    _return_value_2.assign( e.getValue() );
                }

                // Final code:
                if ( ( _python_tmp_indicator == Py_True ) )
                {
                    DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( _python_tmp_with_exit.asObject(), Py_None, Py_None, Py_None ) );
                }
                _caught_2.rethrow();
                if ( _return_value_2.isKeeping() )
                {
                    throw ReturnValueException( _return_value_2.asObject() );
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
        catch ( ReturnValueException &e )
        {
            _return_value_1.assign( e.getValue() );
        }

        // Final code:
        frame_guard.setLineNumber( 48 );
        _python_var_stop.assign1( CALL_FUNCTION_NO_ARGS( _mvar_django__db__backends__util_time.asObject0() ) );
        frame_guard.setLineNumber( 49 );
        {
            PyObjectTempKeeper0 op1;
            _python_var_duration.assign1( ( op1.assign( _python_var_stop.asObject() ), BINARY_OPERATION_SUB( op1.asObject0(), _python_var_start.asObject() ) ) );
        }
        frame_guard.setLineNumber( 50 );
        {
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper1 call4;
            PyObjectTempKeeper0 call5;
            _python_var_sql.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_db ) ).asObject(), _python_str_plain_ops ) ).asObject(), _python_str_plain_last_executed_query ) ), call4.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_cursor ) ), call5.assign( _python_var_sql.asObject() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), call4.asObject0(), call5.asObject0(), _python_var_params.asObject() ) ) );
        }
        frame_guard.setLineNumber( 51 );
        {
            PyObjectTempKeeper1 call11;
            PyObjectTempKeeper0 make_dict7;
            DECREASE_REFCOUNT( ( call11.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_db ) ).asObject(), _python_str_plain_queries ) ).asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), PyObjectTemporary( ( make_dict7.assign( _python_var_sql.asObject() ), MAKE_DICT2( make_dict7.asObject0(), _python_unicode_plain_sql, PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_dc6de963f7dbb5cd8f87b960cc392aca, _python_var_duration.asObject() ) ).asObject(), _python_unicode_plain_time ) ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 55 );
        {
            PyObjectTempKeeper1 call22;
            PyObjectTempKeeper1 call23;
            PyObjectTempKeeper0 make_dict13;
            PyObjectTempKeeper0 make_dict15;
            PyObjectTempKeeper0 make_tuple19;
            PyObjectTempKeeper0 make_tuple20;
            DECREASE_REFCOUNT( ( call22.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__backends__util_logger.asObject0(), _python_str_plain_debug ) ), call23.assign( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_41891f61e43f263ef3eda79c315fb489, PyObjectTemporary( ( make_tuple19.assign( _python_var_duration.asObject() ), make_tuple20.assign( _python_var_sql.asObject() ), MAKE_TUPLE3( make_tuple19.asObject0(), make_tuple20.asObject0(), _python_var_params.asObject() ) ) ).asObject() ) ).asObject() ) ), CALL_FUNCTION( call22.asObject0(), call23.asObject0(), PyObjectTemporary( MAKE_DICT1( PyObjectTemporary( ( make_dict13.assign( _python_var_duration.asObject() ), make_dict15.assign( _python_var_sql.asObject() ), MAKE_DICT3( make_dict13.asObject0(), _python_unicode_plain_duration, make_dict15.asObject0(), _python_unicode_plain_sql, _python_var_params.asObject(), _python_unicode_plain_params ) ) ).asObject(), _python_str_plain_extra ) ).asObject() ) ) );
        }
        _caught_1.rethrow();
        if ( _return_value_1.isKeeping() )
        {
            return _return_value_1.asObject();
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
        frame_guard.getFrame0()->f_locals = _python_var_params.updateLocalsDict( _python_var_sql.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_duration.updateLocalsDict( _python_var_stop.updateLocalsDict( _python_var_start.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_execute_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util )
        {
           Py_DECREF( frame_function_1_execute_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util );
           frame_function_1_execute_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1_execute_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_sql = NULL;
    PyObject *_python_par_params = NULL;
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
                PyErr_Format( PyExc_TypeError, "execute() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "execute() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_sql == key )
            {
                if (unlikely( _python_par_sql ))
                {
                    PyErr_Format( PyExc_TypeError, "execute() got multiple values for keyword argument 'sql'" );
                    goto error_exit;
                }

                _python_par_sql = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_params == key )
            {
                if (unlikely( _python_par_params ))
                {
                    PyErr_Format( PyExc_TypeError, "execute() got multiple values for keyword argument 'params'" );
                    goto error_exit;
                }

                _python_par_params = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "execute() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_sql, key ) )
            {
                if (unlikely( _python_par_sql ))
                {
                    PyErr_Format( PyExc_TypeError, "execute() got multiple values for keyword argument 'sql'" );
                    goto error_exit;
                }

                _python_par_sql = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_params, key ) )
            {
                if (unlikely( _python_par_params ))
                {
                    PyErr_Format( PyExc_TypeError, "execute() got multiple values for keyword argument 'params'" );
                    goto error_exit;
                }

                _python_par_params = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "execute() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "execute() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "execute() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "execute() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "execute() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "execute() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "execute() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "execute() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "execute() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "execute() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "execute() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "execute() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "execute() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "execute() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_sql != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "execute() got multiple values for keyword argument 'sql'" );
             goto error_exit;
         }

        _python_par_sql = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_params != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "execute() got multiple values for keyword argument 'params'" );
             goto error_exit;
         }

        _python_par_params = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_params == NULL )
    {
        _python_par_params = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_params );
    }


    return impl_function_1_execute_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util( self, _python_par_self, _python_par_sql, _python_par_params );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_sql );
    Py_XDECREF( _python_par_params );

    return NULL;
}

static PyObject *dparse_function_1_execute_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_1_execute_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_execute_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_executemany_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_sql, PyObject *_python_par_param_list )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_sql( _python_str_plain_sql, _python_par_sql );
    PyObjectLocalParameterVariableNoDel _python_var_param_list( _python_str_plain_param_list, _python_par_param_list );
    PyObjectLocalVariable _python_var_start( _python_str_plain_start );
    PyObjectLocalVariable _python_var_stop( _python_str_plain_stop );
    PyObjectLocalVariable _python_var_duration( _python_str_plain_duration );
    PyObjectLocalVariable _python_var_times( _python_str_plain_times );

    // Actual function code.
    static PyFrameObject *frame_function_2_executemany_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util = NULL;

    if ( isFrameUnusable( frame_function_2_executemany_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util ) )
    {
        if ( frame_function_2_executemany_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_executemany_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util" );
#endif
            Py_DECREF( frame_function_2_executemany_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util );
        }

        frame_function_2_executemany_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util = MAKE_FRAME( _codeobj_85c12952a5f84e2f783f3b1d3b3ea810, _module_django__db__backends__util );
    }

    FrameGuard frame_guard( frame_function_2_executemany_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util );
    try
    {
        assert( Py_REFCNT( frame_function_2_executemany_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 60 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_db ) ).asObject(), _python_str_plain_set_dirty ) ).asObject() ) );
        frame_guard.setLineNumber( 61 );
        _python_var_start.assign1( CALL_FUNCTION_NO_ARGS( _mvar_django__db__backends__util_time.asObject0() ) );
        frame_guard.setLineNumber( 62 );
        PythonExceptionKeeper _caught_1;

        PyObjectTempKeeper1 _return_value_1;

        try
        {
            {
                frame_guard.setLineNumber( 63 );
                PyObjectTemporary _python_tmp_with_source( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_db ) ).asObject(), _python_str_plain_wrap_database_errors ) ).asObject() ) );
                PyObjectTemporary _python_tmp_with_exit( LOOKUP_SPECIAL( _python_tmp_with_source.asObject(), _python_str_plain___exit__ ) );
                PyObjectTemporary _python_tmp_with_enter( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_SPECIAL( _python_tmp_with_source.asObject(), _python_str_plain___enter__ ) ).asObject() ) );
                PyObject *_python_tmp_indicator = Py_True;
                PythonExceptionKeeper _caught_2;

                PyObjectTempKeeper1 _return_value_2;

                try
                {
                    try
                    {
                        frame_guard.setLineNumber( 64 );
                        {
                            PyObjectTempKeeper1 call23;
                            PyObjectTempKeeper0 call24;
                            throw ReturnValueException( ( call23.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_cursor ) ).asObject(), _python_str_plain_executemany ) ), call24.assign( _python_var_sql.asObject() ), CALL_FUNCTION_WITH_ARGS( call23.asObject0(), call24.asObject0(), _python_var_param_list.asObject() ) ) );
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

                    _caught_2.save( _exception );

#if PYTHON_VERSION >= 300
                    frame_guard.preserveExistingException();

                    _exception.toExceptionHandler();
#endif
                }
                catch ( ReturnValueException &e )
                {
                    _return_value_2.assign( e.getValue() );
                }

                // Final code:
                if ( ( _python_tmp_indicator == Py_True ) )
                {
                    DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( _python_tmp_with_exit.asObject(), Py_None, Py_None, Py_None ) );
                }
                _caught_2.rethrow();
                if ( _return_value_2.isKeeping() )
                {
                    throw ReturnValueException( _return_value_2.asObject() );
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
        catch ( ReturnValueException &e )
        {
            _return_value_1.assign( e.getValue() );
        }

        // Final code:
        frame_guard.setLineNumber( 66 );
        _python_var_stop.assign1( CALL_FUNCTION_NO_ARGS( _mvar_django__db__backends__util_time.asObject0() ) );
        frame_guard.setLineNumber( 67 );
        {
            PyObjectTempKeeper0 op1;
            _python_var_duration.assign1( ( op1.assign( _python_var_stop.asObject() ), BINARY_OPERATION_SUB( op1.asObject0(), _python_var_start.asObject() ) ) );
        }
        frame_guard.setLineNumber( 68 );
        try
        {
            frame_guard.setLineNumber( 69 );
            _python_var_times.assign1( BUILTIN_LEN( _python_var_param_list.asObject() ) );
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

            if ( _exception.matches( PyExc_TypeError ) )
            {
                frame_guard.detachFrame();
                _python_var_times.assign0( _python_unicode_chr_63 );
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
        frame_guard.setLineNumber( 72 );
        {
            PyObjectTempKeeper1 call9;
            PyObjectTempKeeper1 make_dict5;
            PyObjectTempKeeper0 make_tuple3;
            DECREASE_REFCOUNT( ( call9.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_db ) ).asObject(), _python_str_plain_queries ) ).asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), PyObjectTemporary( ( make_dict5.assign( BINARY_OPERATION_REMAINDER( _python_unicode_digest_4f728d31e9e16c6e51af5ff908b3eaba, PyObjectTemporary( ( make_tuple3.assign( _python_var_times.asObject() ), MAKE_TUPLE2( make_tuple3.asObject0(), _python_var_sql.asObject() ) ) ).asObject() ) ), MAKE_DICT2( make_dict5.asObject0(), _python_unicode_plain_sql, PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_dc6de963f7dbb5cd8f87b960cc392aca, _python_var_duration.asObject() ) ).asObject(), _python_unicode_plain_time ) ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 76 );
        {
            PyObjectTempKeeper1 call20;
            PyObjectTempKeeper1 call21;
            PyObjectTempKeeper0 make_dict11;
            PyObjectTempKeeper0 make_dict13;
            PyObjectTempKeeper0 make_tuple17;
            PyObjectTempKeeper0 make_tuple18;
            DECREASE_REFCOUNT( ( call20.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__backends__util_logger.asObject0(), _python_str_plain_debug ) ), call21.assign( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_unicode_digest_41891f61e43f263ef3eda79c315fb489, PyObjectTemporary( ( make_tuple17.assign( _python_var_duration.asObject() ), make_tuple18.assign( _python_var_sql.asObject() ), MAKE_TUPLE3( make_tuple17.asObject0(), make_tuple18.asObject0(), _python_var_param_list.asObject() ) ) ).asObject() ) ).asObject() ) ), CALL_FUNCTION( call20.asObject0(), call21.asObject0(), PyObjectTemporary( MAKE_DICT1( PyObjectTemporary( ( make_dict11.assign( _python_var_duration.asObject() ), make_dict13.assign( _python_var_sql.asObject() ), MAKE_DICT3( make_dict11.asObject0(), _python_unicode_plain_duration, make_dict13.asObject0(), _python_unicode_plain_sql, _python_var_param_list.asObject(), _python_unicode_plain_params ) ) ).asObject(), _python_str_plain_extra ) ).asObject() ) ) );
        }
        _caught_1.rethrow();
        if ( _return_value_1.isKeeping() )
        {
            return _return_value_1.asObject();
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
        frame_guard.getFrame0()->f_locals = _python_var_param_list.updateLocalsDict( _python_var_sql.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_times.updateLocalsDict( _python_var_duration.updateLocalsDict( _python_var_stop.updateLocalsDict( _python_var_start.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_executemany_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util )
        {
           Py_DECREF( frame_function_2_executemany_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util );
           frame_function_2_executemany_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2_executemany_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_sql = NULL;
    PyObject *_python_par_param_list = NULL;
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
                PyErr_Format( PyExc_TypeError, "executemany() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "executemany() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_sql == key )
            {
                if (unlikely( _python_par_sql ))
                {
                    PyErr_Format( PyExc_TypeError, "executemany() got multiple values for keyword argument 'sql'" );
                    goto error_exit;
                }

                _python_par_sql = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_param_list == key )
            {
                if (unlikely( _python_par_param_list ))
                {
                    PyErr_Format( PyExc_TypeError, "executemany() got multiple values for keyword argument 'param_list'" );
                    goto error_exit;
                }

                _python_par_param_list = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "executemany() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_sql, key ) )
            {
                if (unlikely( _python_par_sql ))
                {
                    PyErr_Format( PyExc_TypeError, "executemany() got multiple values for keyword argument 'sql'" );
                    goto error_exit;
                }

                _python_par_sql = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_param_list, key ) )
            {
                if (unlikely( _python_par_param_list ))
                {
                    PyErr_Format( PyExc_TypeError, "executemany() got multiple values for keyword argument 'param_list'" );
                    goto error_exit;
                }

                _python_par_param_list = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "executemany() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "executemany() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "executemany() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "executemany() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "executemany() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "executemany() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "executemany() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "executemany() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "executemany() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "executemany() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "executemany() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "executemany() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "executemany() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "executemany() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_sql != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "executemany() got multiple values for keyword argument 'sql'" );
             goto error_exit;
         }

        _python_par_sql = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_param_list != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "executemany() got multiple values for keyword argument 'param_list'" );
             goto error_exit;
         }

        _python_par_param_list = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_2_executemany_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util( self, _python_par_self, _python_par_sql, _python_par_param_list );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_sql );
    Py_XDECREF( _python_par_param_list );

    return NULL;
}

static PyObject *dparse_function_2_executemany_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_2_executemany_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_executemany_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_typecast_date_of_module_django__db__backends__util( Nuitka_FunctionObject *self, PyObject *_python_par_s )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_s( _python_str_plain_s, _python_par_s );

    // Actual function code.
    static PyFrameObject *frame_function_3_typecast_date_of_module_django__db__backends__util = NULL;

    if ( isFrameUnusable( frame_function_3_typecast_date_of_module_django__db__backends__util ) )
    {
        if ( frame_function_3_typecast_date_of_module_django__db__backends__util )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_typecast_date_of_module_django__db__backends__util" );
#endif
            Py_DECREF( frame_function_3_typecast_date_of_module_django__db__backends__util );
        }

        frame_function_3_typecast_date_of_module_django__db__backends__util = MAKE_FRAME( _codeobj_c8dc3dd976066e5f0430cb178e98788b, _module_django__db__backends__util );
    }

    FrameGuard frame_guard( frame_function_3_typecast_date_of_module_django__db__backends__util );
    try
    {
        assert( Py_REFCNT( frame_function_3_typecast_date_of_module_django__db__backends__util ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 86 );
        {
            PyObjectTempKeeper1 call_tmp1;
            return ( CHECK_IF_TRUE( _python_var_s.asObject() ) ? ( call_tmp1.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__backends__util_datetime.asObject0(), _python_str_plain_date ) ), impl_function_7_complex_call_helper_star_list_of_module___internal__( call_tmp1.asObject(), CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_map ), LOOKUP_BUILTIN( _python_str_plain_int ), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_s.asObject(), _python_str_plain_split ) ).asObject(), _python_unicode_chr_45 ) ).asObject() ) ) ) : INCREASE_REFCOUNT( Py_None ) );
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

        if ( frame_guard.getFrame0() == frame_function_3_typecast_date_of_module_django__db__backends__util )
        {
           Py_DECREF( frame_function_3_typecast_date_of_module_django__db__backends__util );
           frame_function_3_typecast_date_of_module_django__db__backends__util = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_typecast_date_of_module_django__db__backends__util( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "typecast_date() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "typecast_date() got multiple values for keyword argument 's'" );
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
                    PyErr_Format( PyExc_TypeError, "typecast_date() got multiple values for keyword argument 's'" );
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
                   "typecast_date() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "typecast_date() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "typecast_date() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "typecast_date() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "typecast_date() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "typecast_date() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "typecast_date() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "typecast_date() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "typecast_date() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "typecast_date() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "typecast_date() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "typecast_date() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "typecast_date() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "typecast_date() got multiple values for keyword argument 's'" );
             goto error_exit;
         }

        _python_par_s = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_3_typecast_date_of_module_django__db__backends__util( self, _python_par_s );

error_exit:;

    Py_XDECREF( _python_par_s );

    return NULL;
}

static PyObject *dparse_function_3_typecast_date_of_module_django__db__backends__util( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3_typecast_date_of_module_django__db__backends__util( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_typecast_date_of_module_django__db__backends__util( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_typecast_time_of_module_django__db__backends__util( Nuitka_FunctionObject *self, PyObject *_python_par_s )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_s( _python_str_plain_s, _python_par_s );
    PyObjectLocalVariable _python_var_hour( _python_str_plain_hour );
    PyObjectLocalVariable _python_var_minutes( _python_str_plain_minutes );
    PyObjectLocalVariable _python_var_seconds( _python_str_plain_seconds );
    PyObjectLocalVariable _python_var_microseconds( _python_str_plain_microseconds );

    // Actual function code.
    static PyFrameObject *frame_function_4_typecast_time_of_module_django__db__backends__util = NULL;

    if ( isFrameUnusable( frame_function_4_typecast_time_of_module_django__db__backends__util ) )
    {
        if ( frame_function_4_typecast_time_of_module_django__db__backends__util )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_typecast_time_of_module_django__db__backends__util" );
#endif
            Py_DECREF( frame_function_4_typecast_time_of_module_django__db__backends__util );
        }

        frame_function_4_typecast_time_of_module_django__db__backends__util = MAKE_FRAME( _codeobj_78998d05f024c6b1e763c8647e509b1e, _module_django__db__backends__util );
    }

    FrameGuard frame_guard( frame_function_4_typecast_time_of_module_django__db__backends__util );
    try
    {
        assert( Py_REFCNT( frame_function_4_typecast_time_of_module_django__db__backends__util ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 89 );
        if ( (!( CHECK_IF_TRUE( _python_var_s.asObject() ) )) )
        {
            return INCREASE_REFCOUNT( Py_None );
        }
        {
            frame_guard.setLineNumber( 90 );
            PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_s.asObject(), _python_str_plain_split ) ).asObject(), _python_unicode_chr_58 ) ).asObject() ) );
            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
            PyObjectTemporary _python_tmp_element_3( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 2 ) );
            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 3 );
            _python_var_hour.assign0( _python_tmp_element_1.asObject() );
            _python_var_minutes.assign0( _python_tmp_element_2.asObject() );
            _python_var_seconds.assign0( _python_tmp_element_3.asObject() );
        }
        frame_guard.setLineNumber( 91 );
        if ( SEQUENCE_CONTAINS_BOOL( _python_unicode_dot, _python_var_seconds.asObject() ) )
        {
            {
                frame_guard.setLineNumber( 92 );
                PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_seconds.asObject(), _python_str_plain_split ) ).asObject(), _python_unicode_dot ) ).asObject() ) );
                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                _python_var_seconds.assign0( _python_tmp_element_1.asObject() );
                _python_var_microseconds.assign0( _python_tmp_element_2.asObject() );
            }
        }
        else
        {
            _python_var_microseconds.assign0( _python_unicode_plain_0 );
        }
        frame_guard.setLineNumber( 95 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper1 call2;
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper1 call4;
            return ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__backends__util_datetime.asObject0(), _python_str_plain_time ) ), call2.assign( TO_INT( _python_var_hour.asObject() ) ), call3.assign( TO_INT( _python_var_minutes.asObject() ) ), call4.assign( TO_INT( _python_var_seconds.asObject() ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), call3.asObject0(), call4.asObject0(), PyObjectTemporary( TO_INT( PyObjectTemporary( BINARY_OPERATION_MUL( PyObjectTemporary( TO_FLOAT( PyObjectTemporary( BINARY_OPERATION_ADD( _python_unicode_dot, _python_var_microseconds.asObject() ) ).asObject() ) ).asObject(), _python_int_pos_1000000 ) ).asObject() ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_s.updateLocalsDict( _python_var_microseconds.updateLocalsDict( _python_var_seconds.updateLocalsDict( _python_var_minutes.updateLocalsDict( _python_var_hour.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_4_typecast_time_of_module_django__db__backends__util )
        {
           Py_DECREF( frame_function_4_typecast_time_of_module_django__db__backends__util );
           frame_function_4_typecast_time_of_module_django__db__backends__util = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_typecast_time_of_module_django__db__backends__util( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "typecast_time() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "typecast_time() got multiple values for keyword argument 's'" );
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
                    PyErr_Format( PyExc_TypeError, "typecast_time() got multiple values for keyword argument 's'" );
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
                   "typecast_time() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "typecast_time() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "typecast_time() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "typecast_time() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "typecast_time() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "typecast_time() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "typecast_time() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "typecast_time() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "typecast_time() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "typecast_time() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "typecast_time() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "typecast_time() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "typecast_time() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "typecast_time() got multiple values for keyword argument 's'" );
             goto error_exit;
         }

        _python_par_s = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_4_typecast_time_of_module_django__db__backends__util( self, _python_par_s );

error_exit:;

    Py_XDECREF( _python_par_s );

    return NULL;
}

static PyObject *dparse_function_4_typecast_time_of_module_django__db__backends__util( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_4_typecast_time_of_module_django__db__backends__util( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_typecast_time_of_module_django__db__backends__util( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_typecast_timestamp_of_module_django__db__backends__util( Nuitka_FunctionObject *self, PyObject *_python_par_s )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_s( _python_str_plain_s, _python_par_s );
    PyObjectLocalVariable _python_var_d( _python_str_plain_d );
    PyObjectLocalVariable _python_var_t( _python_str_plain_t );
    PyObjectLocalVariable _python_var_tz( _python_str_plain_tz );
    PyObjectLocalVariable _python_var_dates( _python_str_plain_dates );
    PyObjectLocalVariable _python_var_times( _python_str_plain_times );
    PyObjectLocalVariable _python_var_seconds( _python_str_plain_seconds );
    PyObjectLocalVariable _python_var_microseconds( _python_str_plain_microseconds );
    PyObjectLocalVariable _python_var_tzinfo( _python_str_plain_tzinfo );

    // Actual function code.
    static PyFrameObject *frame_function_5_typecast_timestamp_of_module_django__db__backends__util = NULL;

    if ( isFrameUnusable( frame_function_5_typecast_timestamp_of_module_django__db__backends__util ) )
    {
        if ( frame_function_5_typecast_timestamp_of_module_django__db__backends__util )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_typecast_timestamp_of_module_django__db__backends__util" );
#endif
            Py_DECREF( frame_function_5_typecast_timestamp_of_module_django__db__backends__util );
        }

        frame_function_5_typecast_timestamp_of_module_django__db__backends__util = MAKE_FRAME( _codeobj_faa602782d94b52c389aa1c0a329833a, _module_django__db__backends__util );
    }

    FrameGuard frame_guard( frame_function_5_typecast_timestamp_of_module_django__db__backends__util );
    try
    {
        assert( Py_REFCNT( frame_function_5_typecast_timestamp_of_module_django__db__backends__util ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 100 );
        if ( (!( CHECK_IF_TRUE( _python_var_s.asObject() ) )) )
        {
            return INCREASE_REFCOUNT( Py_None );
        }
        frame_guard.setLineNumber( 101 );
        if ( SEQUENCE_CONTAINS_NOT_BOOL( _python_unicode_space, _python_var_s.asObject() ) )
        {
            frame_guard.setLineNumber( 101 );
            {
                PyObjectTempKeeper0 call1;
                return ( call1.assign( _mvar_django__db__backends__util_typecast_date.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_s.asObject() ) );
            }
        }
        {
            frame_guard.setLineNumber( 102 );
            PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_s.asObject(), _python_str_plain_split ) ).asObject() ) ).asObject() ) );
            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
            _python_var_d.assign0( _python_tmp_element_1.asObject() );
            _python_var_t.assign0( _python_tmp_element_2.asObject() );
        }
        frame_guard.setLineNumber( 105 );
        if ( SEQUENCE_CONTAINS_BOOL( _python_unicode_chr_45, _python_var_t.asObject() ) )
        {
            {
                frame_guard.setLineNumber( 106 );
                PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_split ) ).asObject(), _python_unicode_chr_45, _python_int_pos_1 ) ).asObject() ) );
                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                _python_var_t.assign0( _python_tmp_element_1.asObject() );
                _python_var_tz.assign0( _python_tmp_element_2.asObject() );
            }
            frame_guard.setLineNumber( 107 );
            _python_var_tz.assign1( BINARY_OPERATION_ADD( _python_unicode_chr_45, _python_var_tz.asObject() ) );
        }
        else
        {
            frame_guard.setLineNumber( 108 );
            if ( SEQUENCE_CONTAINS_BOOL( _python_unicode_chr_43, _python_var_t.asObject() ) )
            {
                {
                    frame_guard.setLineNumber( 109 );
                    PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_split ) ).asObject(), _python_unicode_chr_43, _python_int_pos_1 ) ).asObject() ) );
                    PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                    PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                    UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                    _python_var_t.assign0( _python_tmp_element_1.asObject() );
                    _python_var_tz.assign0( _python_tmp_element_2.asObject() );
                }
                frame_guard.setLineNumber( 110 );
                _python_var_tz.assign1( BINARY_OPERATION_ADD( _python_unicode_chr_43, _python_var_tz.asObject() ) );
            }
            else
            {
                _python_var_tz.assign0( _python_unicode_empty );
            }
        }
        frame_guard.setLineNumber( 113 );
        _python_var_dates.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_d.asObject(), _python_str_plain_split ) ).asObject(), _python_unicode_chr_45 ) );
        frame_guard.setLineNumber( 114 );
        _python_var_times.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_split ) ).asObject(), _python_unicode_chr_58 ) );
        frame_guard.setLineNumber( 115 );
        _python_var_seconds.assign1( LOOKUP_SUBSCRIPT_CONST( _python_var_times.asObject(), _python_int_pos_2, 2 ) );
        frame_guard.setLineNumber( 116 );
        if ( SEQUENCE_CONTAINS_BOOL( _python_unicode_dot, _python_var_seconds.asObject() ) )
        {
            {
                frame_guard.setLineNumber( 117 );
                PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_seconds.asObject(), _python_str_plain_split ) ).asObject(), _python_unicode_dot ) ).asObject() ) );
                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                _python_var_seconds.assign0( _python_tmp_element_1.asObject() );
                _python_var_microseconds.assign0( _python_tmp_element_2.asObject() );
            }
        }
        else
        {
            _python_var_microseconds.assign0( _python_unicode_plain_0 );
        }
        frame_guard.setLineNumber( 120 );
        _python_var_tzinfo.assign0( ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__db__backends__util_settings.asObject0(), _python_str_plain_USE_TZ ) ).asObject() ) ? _mvar_django__db__backends__util_utc.asObject0() : Py_None ) );
        frame_guard.setLineNumber( 121 );
        {
            PyObjectTempKeeper1 call11;
            PyObjectTempKeeper1 make_tuple3;
            PyObjectTempKeeper1 make_tuple4;
            PyObjectTempKeeper1 make_tuple5;
            PyObjectTempKeeper1 make_tuple6;
            PyObjectTempKeeper1 make_tuple7;
            PyObjectTempKeeper1 make_tuple8;
            PyObjectTempKeeper1 make_tuple9;
            return ( call11.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__backends__util_datetime.asObject0(), _python_str_plain_datetime ) ), CALL_FUNCTION_WITH_POSARGS( call11.asObject0(), PyObjectTemporary( ( make_tuple3.assign( TO_INT( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_dates.asObject(), _python_int_0, 0 ) ).asObject() ) ), make_tuple4.assign( TO_INT( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_dates.asObject(), _python_int_pos_1, 1 ) ).asObject() ) ), make_tuple5.assign( TO_INT( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_dates.asObject(), _python_int_pos_2, 2 ) ).asObject() ) ), make_tuple6.assign( TO_INT( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_times.asObject(), _python_int_0, 0 ) ).asObject() ) ), make_tuple7.assign( TO_INT( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_times.asObject(), _python_int_pos_1, 1 ) ).asObject() ) ), make_tuple8.assign( TO_INT( _python_var_seconds.asObject() ) ), make_tuple9.assign( TO_INT( PyObjectTemporary( LOOKUP_INDEX_SLICE( PyObjectTemporary( BINARY_OPERATION_ADD( _python_var_microseconds.asObject(), _python_unicode_plain_000000 ) ).asObject(), 0, 6 ) ).asObject() ) ), MAKE_TUPLE8( make_tuple3.asObject0(), make_tuple4.asObject0(), make_tuple5.asObject0(), make_tuple6.asObject0(), make_tuple7.asObject0(), make_tuple8.asObject0(), make_tuple9.asObject0(), _python_var_tzinfo.asObject() ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_s.updateLocalsDict( _python_var_tzinfo.updateLocalsDict( _python_var_microseconds.updateLocalsDict( _python_var_seconds.updateLocalsDict( _python_var_times.updateLocalsDict( _python_var_dates.updateLocalsDict( _python_var_tz.updateLocalsDict( _python_var_t.updateLocalsDict( _python_var_d.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_5_typecast_timestamp_of_module_django__db__backends__util )
        {
           Py_DECREF( frame_function_5_typecast_timestamp_of_module_django__db__backends__util );
           frame_function_5_typecast_timestamp_of_module_django__db__backends__util = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5_typecast_timestamp_of_module_django__db__backends__util( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "typecast_timestamp() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "typecast_timestamp() got multiple values for keyword argument 's'" );
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
                    PyErr_Format( PyExc_TypeError, "typecast_timestamp() got multiple values for keyword argument 's'" );
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
                   "typecast_timestamp() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "typecast_timestamp() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "typecast_timestamp() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "typecast_timestamp() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "typecast_timestamp() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "typecast_timestamp() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "typecast_timestamp() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "typecast_timestamp() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "typecast_timestamp() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "typecast_timestamp() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "typecast_timestamp() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "typecast_timestamp() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "typecast_timestamp() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "typecast_timestamp() got multiple values for keyword argument 's'" );
             goto error_exit;
         }

        _python_par_s = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_5_typecast_timestamp_of_module_django__db__backends__util( self, _python_par_s );

error_exit:;

    Py_XDECREF( _python_par_s );

    return NULL;
}

static PyObject *dparse_function_5_typecast_timestamp_of_module_django__db__backends__util( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_5_typecast_timestamp_of_module_django__db__backends__util( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_typecast_timestamp_of_module_django__db__backends__util( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_typecast_decimal_of_module_django__db__backends__util( Nuitka_FunctionObject *self, PyObject *_python_par_s )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_s( _python_str_plain_s, _python_par_s );

    // Actual function code.
    static PyFrameObject *frame_function_6_typecast_decimal_of_module_django__db__backends__util = NULL;

    if ( isFrameUnusable( frame_function_6_typecast_decimal_of_module_django__db__backends__util ) )
    {
        if ( frame_function_6_typecast_decimal_of_module_django__db__backends__util )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6_typecast_decimal_of_module_django__db__backends__util" );
#endif
            Py_DECREF( frame_function_6_typecast_decimal_of_module_django__db__backends__util );
        }

        frame_function_6_typecast_decimal_of_module_django__db__backends__util = MAKE_FRAME( _codeobj_c9411f4108d238968e1a81f3836c897e, _module_django__db__backends__util );
    }

    FrameGuard frame_guard( frame_function_6_typecast_decimal_of_module_django__db__backends__util );
    try
    {
        assert( Py_REFCNT( frame_function_6_typecast_decimal_of_module_django__db__backends__util ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 126 );
        if ( ( ( _python_var_s.asObject() == Py_None ) || RICH_COMPARE_BOOL_EQ( _python_var_s.asObject(), _python_unicode_empty ) ) )
        {
            return INCREASE_REFCOUNT( Py_None );
        }
        frame_guard.setLineNumber( 128 );
        {
            PyObjectTempKeeper1 call1;
            return ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__backends__util_decimal.asObject0(), _python_str_plain_Decimal ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_s.asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_6_typecast_decimal_of_module_django__db__backends__util )
        {
           Py_DECREF( frame_function_6_typecast_decimal_of_module_django__db__backends__util );
           frame_function_6_typecast_decimal_of_module_django__db__backends__util = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_6_typecast_decimal_of_module_django__db__backends__util( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "typecast_decimal() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "typecast_decimal() got multiple values for keyword argument 's'" );
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
                    PyErr_Format( PyExc_TypeError, "typecast_decimal() got multiple values for keyword argument 's'" );
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
                   "typecast_decimal() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "typecast_decimal() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "typecast_decimal() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "typecast_decimal() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "typecast_decimal() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "typecast_decimal() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "typecast_decimal() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "typecast_decimal() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "typecast_decimal() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "typecast_decimal() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "typecast_decimal() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "typecast_decimal() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "typecast_decimal() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "typecast_decimal() got multiple values for keyword argument 's'" );
             goto error_exit;
         }

        _python_par_s = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_6_typecast_decimal_of_module_django__db__backends__util( self, _python_par_s );

error_exit:;

    Py_XDECREF( _python_par_s );

    return NULL;
}

static PyObject *dparse_function_6_typecast_decimal_of_module_django__db__backends__util( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_6_typecast_decimal_of_module_django__db__backends__util( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_typecast_decimal_of_module_django__db__backends__util( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7_rev_typecast_decimal_of_module_django__db__backends__util( Nuitka_FunctionObject *self, PyObject *_python_par_d )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_d( _python_str_plain_d, _python_par_d );

    // Actual function code.
    static PyFrameObject *frame_function_7_rev_typecast_decimal_of_module_django__db__backends__util = NULL;

    if ( isFrameUnusable( frame_function_7_rev_typecast_decimal_of_module_django__db__backends__util ) )
    {
        if ( frame_function_7_rev_typecast_decimal_of_module_django__db__backends__util )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_7_rev_typecast_decimal_of_module_django__db__backends__util" );
#endif
            Py_DECREF( frame_function_7_rev_typecast_decimal_of_module_django__db__backends__util );
        }

        frame_function_7_rev_typecast_decimal_of_module_django__db__backends__util = MAKE_FRAME( _codeobj_f9ed9a2af54659646eb269dcf112c25a, _module_django__db__backends__util );
    }

    FrameGuard frame_guard( frame_function_7_rev_typecast_decimal_of_module_django__db__backends__util );
    try
    {
        assert( Py_REFCNT( frame_function_7_rev_typecast_decimal_of_module_django__db__backends__util ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 135 );
        if ( ( _python_var_d.asObject() == Py_None ) )
        {
            return INCREASE_REFCOUNT( Py_None );
        }
        frame_guard.setLineNumber( 137 );
        return TO_STR( _python_var_d.asObject() );
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

        if ( frame_guard.getFrame0() == frame_function_7_rev_typecast_decimal_of_module_django__db__backends__util )
        {
           Py_DECREF( frame_function_7_rev_typecast_decimal_of_module_django__db__backends__util );
           frame_function_7_rev_typecast_decimal_of_module_django__db__backends__util = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_7_rev_typecast_decimal_of_module_django__db__backends__util( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "rev_typecast_decimal() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "rev_typecast_decimal() got multiple values for keyword argument 'd'" );
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
                    PyErr_Format( PyExc_TypeError, "rev_typecast_decimal() got multiple values for keyword argument 'd'" );
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
                   "rev_typecast_decimal() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "rev_typecast_decimal() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "rev_typecast_decimal() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "rev_typecast_decimal() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "rev_typecast_decimal() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "rev_typecast_decimal() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "rev_typecast_decimal() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "rev_typecast_decimal() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "rev_typecast_decimal() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "rev_typecast_decimal() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "rev_typecast_decimal() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "rev_typecast_decimal() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "rev_typecast_decimal() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "rev_typecast_decimal() got multiple values for keyword argument 'd'" );
             goto error_exit;
         }

        _python_par_d = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_7_rev_typecast_decimal_of_module_django__db__backends__util( self, _python_par_d );

error_exit:;

    Py_XDECREF( _python_par_d );

    return NULL;
}

static PyObject *dparse_function_7_rev_typecast_decimal_of_module_django__db__backends__util( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_7_rev_typecast_decimal_of_module_django__db__backends__util( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7_rev_typecast_decimal_of_module_django__db__backends__util( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8_truncate_name_of_module_django__db__backends__util( Nuitka_FunctionObject *self, PyObject *_python_par_name, PyObject *_python_par_length, PyObject *_python_par_hash_len )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );
    PyObjectLocalParameterVariableNoDel _python_var_length( _python_str_plain_length, _python_par_length );
    PyObjectLocalParameterVariableNoDel _python_var_hash_len( _python_str_plain_hash_len, _python_par_hash_len );
    PyObjectLocalVariable _python_var_hsh( _python_str_plain_hsh );

    // Actual function code.
    static PyFrameObject *frame_function_8_truncate_name_of_module_django__db__backends__util = NULL;

    if ( isFrameUnusable( frame_function_8_truncate_name_of_module_django__db__backends__util ) )
    {
        if ( frame_function_8_truncate_name_of_module_django__db__backends__util )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_8_truncate_name_of_module_django__db__backends__util" );
#endif
            Py_DECREF( frame_function_8_truncate_name_of_module_django__db__backends__util );
        }

        frame_function_8_truncate_name_of_module_django__db__backends__util = MAKE_FRAME( _codeobj_a013b5cb96b5043b4601a010a23abc6f, _module_django__db__backends__util );
    }

    FrameGuard frame_guard( frame_function_8_truncate_name_of_module_django__db__backends__util );
    try
    {
        assert( Py_REFCNT( frame_function_8_truncate_name_of_module_django__db__backends__util ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 142 );
        {
            PyObjectTempKeeper1 cmp1;
            if ( ( ( _python_var_length.asObject() == Py_None ) || ( cmp1.assign( BUILTIN_LEN( _python_var_name.asObject() ) ), RICH_COMPARE_BOOL_LE( cmp1.asObject0(), _python_var_length.asObject() ) ) ) )
        {
            frame_guard.setLineNumber( 143 );
            return _python_var_name.asObject1();
        }
        }
        frame_guard.setLineNumber( 145 );
        {
            PyObjectTempKeeper0 call3;
            PyObjectTempKeeper1 call5;
            PyObjectTempKeeper1 slice7;
            _python_var_hsh.assign1( ( slice7.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call5.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__backends__util_hashlib.asObject0(), _python_str_plain_md5 ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), PyObjectTemporary( ( call3.assign( _mvar_django__db__backends__util_force_bytes.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_name.asObject() ) ) ).asObject() ) ) ).asObject(), _python_str_plain_hexdigest ) ).asObject() ) ), LOOKUP_SLICE( slice7.asObject0(), Py_None, _python_var_hash_len.asObject() ) ) );
        }
        frame_guard.setLineNumber( 146 );
        {
            PyObjectTempKeeper1 make_tuple15;
            PyObjectTempKeeper0 op10;
            PyObjectTempKeeper0 slice12;
            return BINARY_OPERATION_REMAINDER( _python_unicode_digest_f0275d2ae1aaf69b3b06259723647d35, PyObjectTemporary( ( make_tuple15.assign( ( slice12.assign( _python_var_name.asObject() ), LOOKUP_SLICE( slice12.asObject0(), Py_None, PyObjectTemporary( ( op10.assign( _python_var_length.asObject() ), BINARY_OPERATION_SUB( op10.asObject0(), _python_var_hash_len.asObject() ) ) ).asObject() ) ) ), MAKE_TUPLE2( make_tuple15.asObject0(), _python_var_hsh.asObject() ) ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_hash_len.updateLocalsDict( _python_var_length.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var_hsh.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_8_truncate_name_of_module_django__db__backends__util )
        {
           Py_DECREF( frame_function_8_truncate_name_of_module_django__db__backends__util );
           frame_function_8_truncate_name_of_module_django__db__backends__util = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_8_truncate_name_of_module_django__db__backends__util( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_name = NULL;
    PyObject *_python_par_length = NULL;
    PyObject *_python_par_hash_len = NULL;
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
                PyErr_Format( PyExc_TypeError, "truncate_name() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "truncate_name() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_length == key )
            {
                if (unlikely( _python_par_length ))
                {
                    PyErr_Format( PyExc_TypeError, "truncate_name() got multiple values for keyword argument 'length'" );
                    goto error_exit;
                }

                _python_par_length = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_hash_len == key )
            {
                if (unlikely( _python_par_hash_len ))
                {
                    PyErr_Format( PyExc_TypeError, "truncate_name() got multiple values for keyword argument 'hash_len'" );
                    goto error_exit;
                }

                _python_par_hash_len = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "truncate_name() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_length, key ) )
            {
                if (unlikely( _python_par_length ))
                {
                    PyErr_Format( PyExc_TypeError, "truncate_name() got multiple values for keyword argument 'length'" );
                    goto error_exit;
                }

                _python_par_length = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_hash_len, key ) )
            {
                if (unlikely( _python_par_hash_len ))
                {
                    PyErr_Format( PyExc_TypeError, "truncate_name() got multiple values for keyword argument 'hash_len'" );
                    goto error_exit;
                }

                _python_par_hash_len = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "truncate_name() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "truncate_name() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "truncate_name() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "truncate_name() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "truncate_name() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "truncate_name() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "truncate_name() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "truncate_name() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "truncate_name() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "truncate_name() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "truncate_name() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "truncate_name() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "truncate_name() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "truncate_name() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_length != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "truncate_name() got multiple values for keyword argument 'length'" );
             goto error_exit;
         }

        _python_par_length = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_hash_len != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "truncate_name() got multiple values for keyword argument 'hash_len'" );
             goto error_exit;
         }

        _python_par_hash_len = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_length == NULL )
    {
        _python_par_length = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_length );
    }
    if ( _python_par_hash_len == NULL )
    {
        _python_par_hash_len = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_hash_len );
    }


    return impl_function_8_truncate_name_of_module_django__db__backends__util( self, _python_par_name, _python_par_length, _python_par_hash_len );

error_exit:;

    Py_XDECREF( _python_par_name );
    Py_XDECREF( _python_par_length );
    Py_XDECREF( _python_par_hash_len );

    return NULL;
}

static PyObject *dparse_function_8_truncate_name_of_module_django__db__backends__util( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_8_truncate_name_of_module_django__db__backends__util( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_truncate_name_of_module_django__db__backends__util( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9_format_number_of_module_django__db__backends__util( Nuitka_FunctionObject *self, PyObject *_python_par_value, PyObject *_python_par_max_digits, PyObject *_python_par_decimal_places )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );
    PyObjectLocalParameterVariableNoDel _python_var_max_digits( _python_str_plain_max_digits, _python_par_max_digits );
    PyObjectLocalParameterVariableNoDel _python_var_decimal_places( _python_str_plain_decimal_places, _python_par_decimal_places );
    PyObjectLocalVariable _python_var_context( _python_str_plain_context );

    // Actual function code.
    static PyFrameObject *frame_function_9_format_number_of_module_django__db__backends__util = NULL;

    if ( isFrameUnusable( frame_function_9_format_number_of_module_django__db__backends__util ) )
    {
        if ( frame_function_9_format_number_of_module_django__db__backends__util )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_9_format_number_of_module_django__db__backends__util" );
#endif
            Py_DECREF( frame_function_9_format_number_of_module_django__db__backends__util );
        }

        frame_function_9_format_number_of_module_django__db__backends__util = MAKE_FRAME( _codeobj_422a01640caed2d1430eb7ce7e739aac, _module_django__db__backends__util );
    }

    FrameGuard frame_guard( frame_function_9_format_number_of_module_django__db__backends__util );
    try
    {
        assert( Py_REFCNT( frame_function_9_format_number_of_module_django__db__backends__util ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 153 );
        {
            PyObjectTempKeeper0 isinstance10;
            if ( ( isinstance10.assign( _python_var_value.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance10.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__db__backends__util_decimal.asObject0(), _python_str_plain_Decimal ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 154 );
            _python_var_context.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__db__backends__util_decimal.asObject0(), _python_str_plain_getcontext ) ).asObject() ) ).asObject(), _python_str_plain_copy ) ).asObject() ) );
            frame_guard.setLineNumber( 155 );
            {
                    PyObject *tmp_identifier = _python_var_max_digits.asObject();
                    SET_ATTRIBUTE( tmp_identifier, _python_var_context.asObject(), _python_str_plain_prec );
            }
            frame_guard.setLineNumber( 156 );
            {
                PyObjectTempKeeper1 call3;
                PyObjectTempKeeper1 call4;
                PyObjectTempKeeper1 call6;
                PyObjectTempKeeper1 op1;
                return ( call6.assign( LOOKUP_ATTRIBUTE( _python_unicode_digest_50f90900dc2a05f0f152282c903984d3, _python_str_plain_format ) ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), PyObjectTemporary( ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_value.asObject(), _python_str_plain_quantize ) ), call4.assign( MAKE_TUPLE1( PyObjectTemporary( ( op1.assign( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__db__backends__util_decimal.asObject0(), _python_str_plain_Decimal ) ).asObject(), _python_unicode_digest_66c8d76cad709856ccec680cab8ab35a ) ), POWER_OPERATION( op1.asObject0(), _python_var_decimal_places.asObject() ) ) ).asObject() ) ), CALL_FUNCTION( call3.asObject0(), call4.asObject0(), PyObjectTemporary( MAKE_DICT1( _python_var_context.asObject(), _python_str_plain_context ) ).asObject() ) ) ).asObject() ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 158 );
            {
                PyObjectTempKeeper0 make_tuple8;
                return BINARY_OPERATION_REMAINDER( _python_unicode_digest_f808c674ec3efbdaeb214a7adb26dc6e, PyObjectTemporary( ( make_tuple8.assign( _python_var_decimal_places.asObject() ), MAKE_TUPLE2( make_tuple8.asObject0(), _python_var_value.asObject() ) ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_decimal_places.updateLocalsDict( _python_var_max_digits.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_context.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_9_format_number_of_module_django__db__backends__util )
        {
           Py_DECREF( frame_function_9_format_number_of_module_django__db__backends__util );
           frame_function_9_format_number_of_module_django__db__backends__util = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_9_format_number_of_module_django__db__backends__util( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_value = NULL;
    PyObject *_python_par_max_digits = NULL;
    PyObject *_python_par_decimal_places = NULL;
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
                PyErr_Format( PyExc_TypeError, "format_number() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "format_number() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_max_digits == key )
            {
                if (unlikely( _python_par_max_digits ))
                {
                    PyErr_Format( PyExc_TypeError, "format_number() got multiple values for keyword argument 'max_digits'" );
                    goto error_exit;
                }

                _python_par_max_digits = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_decimal_places == key )
            {
                if (unlikely( _python_par_decimal_places ))
                {
                    PyErr_Format( PyExc_TypeError, "format_number() got multiple values for keyword argument 'decimal_places'" );
                    goto error_exit;
                }

                _python_par_decimal_places = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "format_number() got multiple values for keyword argument 'value'" );
                    goto error_exit;
                }

                _python_par_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_max_digits, key ) )
            {
                if (unlikely( _python_par_max_digits ))
                {
                    PyErr_Format( PyExc_TypeError, "format_number() got multiple values for keyword argument 'max_digits'" );
                    goto error_exit;
                }

                _python_par_max_digits = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_decimal_places, key ) )
            {
                if (unlikely( _python_par_decimal_places ))
                {
                    PyErr_Format( PyExc_TypeError, "format_number() got multiple values for keyword argument 'decimal_places'" );
                    goto error_exit;
                }

                _python_par_decimal_places = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "format_number() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "format_number() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "format_number() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "format_number() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "format_number() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "format_number() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "format_number() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "format_number() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "format_number() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "format_number() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "format_number() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "format_number() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "format_number() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 3 ? args_given : 3;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "format_number() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_max_digits != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "format_number() got multiple values for keyword argument 'max_digits'" );
             goto error_exit;
         }

        _python_par_max_digits = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_decimal_places != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "format_number() got multiple values for keyword argument 'decimal_places'" );
             goto error_exit;
         }

        _python_par_decimal_places = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_9_format_number_of_module_django__db__backends__util( self, _python_par_value, _python_par_max_digits, _python_par_decimal_places );

error_exit:;

    Py_XDECREF( _python_par_value );
    Py_XDECREF( _python_par_max_digits );
    Py_XDECREF( _python_par_decimal_places );

    return NULL;
}

static PyObject *dparse_function_9_format_number_of_module_django__db__backends__util( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_9_format_number_of_module_django__db__backends__util( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9_format_number_of_module_django__db__backends__util( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_CursorWrapper_of_module_django__db__backends__util(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_1_CursorWrapper_of_module_django__db__backends__util,
        dparse_function_1___init___of_class_1_CursorWrapper_of_module_django__db__backends__util,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_076bc67b575778918a39ff14c16bcbd9,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__backends__util,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_execute_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_execute_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util,
        dparse_function_1_execute_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util,
        _python_str_plain_execute,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_911a5dbad07f0d2cf5df718cc7936273,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__backends__util,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___getattr___of_class_1_CursorWrapper_of_module_django__db__backends__util(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___getattr___of_class_1_CursorWrapper_of_module_django__db__backends__util,
        dparse_function_2___getattr___of_class_1_CursorWrapper_of_module_django__db__backends__util,
        _python_str_plain___getattr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_4ab7376133baddb9708d87084a53ca65,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__backends__util,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_executemany_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_executemany_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util,
        dparse_function_2_executemany_of_class_2_CursorDebugWrapper_of_module_django__db__backends__util,
        _python_str_plain_executemany,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_85c12952a5f84e2f783f3b1d3b3ea810,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__backends__util,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3___iter___of_class_1_CursorWrapper_of_module_django__db__backends__util(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3___iter___of_class_1_CursorWrapper_of_module_django__db__backends__util,
        dparse_function_3___iter___of_class_1_CursorWrapper_of_module_django__db__backends__util,
        _python_str_plain___iter__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_5828dc45240d49e5584387a569b86211,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__backends__util,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_typecast_date_of_module_django__db__backends__util(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_typecast_date_of_module_django__db__backends__util,
        dparse_function_3_typecast_date_of_module_django__db__backends__util,
        _python_str_plain_typecast_date,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_c8dc3dd976066e5f0430cb178e98788b,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__backends__util,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_typecast_time_of_module_django__db__backends__util(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_typecast_time_of_module_django__db__backends__util,
        dparse_function_4_typecast_time_of_module_django__db__backends__util,
        _python_str_plain_typecast_time,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_78998d05f024c6b1e763c8647e509b1e,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__backends__util,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_typecast_timestamp_of_module_django__db__backends__util(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_typecast_timestamp_of_module_django__db__backends__util,
        dparse_function_5_typecast_timestamp_of_module_django__db__backends__util,
        _python_str_plain_typecast_timestamp,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_faa602782d94b52c389aa1c0a329833a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__backends__util,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_typecast_decimal_of_module_django__db__backends__util(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_typecast_decimal_of_module_django__db__backends__util,
        dparse_function_6_typecast_decimal_of_module_django__db__backends__util,
        _python_str_plain_typecast_decimal,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_c9411f4108d238968e1a81f3836c897e,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__backends__util,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_rev_typecast_decimal_of_module_django__db__backends__util(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_rev_typecast_decimal_of_module_django__db__backends__util,
        dparse_function_7_rev_typecast_decimal_of_module_django__db__backends__util,
        _python_str_plain_rev_typecast_decimal,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_f9ed9a2af54659646eb269dcf112c25a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__backends__util,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_truncate_name_of_module_django__db__backends__util(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_truncate_name_of_module_django__db__backends__util,
        dparse_function_8_truncate_name_of_module_django__db__backends__util,
        _python_str_plain_truncate_name,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_a013b5cb96b5043b4601a010a23abc6f,
        INCREASE_REFCOUNT( _python_tuple_none_int_pos_4_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__backends__util,
        _python_unicode_digest_f939993cfa5db0786fd9da73e53ea1d3
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_format_number_of_module_django__db__backends__util(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_format_number_of_module_django__db__backends__util,
        dparse_function_9_format_number_of_module_django__db__backends__util,
        _python_str_plain_format_number,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_422a01640caed2d1430eb7ce7e739aac,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__backends__util,
        _python_unicode_digest_186108107c8d91ec30fcdc2826fac926
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.db.backends.util",   /* m_name */
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

MOD_INIT_DECL( django__db__backends__util )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__db__backends__util );
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

    // puts( "in initdjango__db__backends__util" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__db__backends__util = Py_InitModule4(
        "django.db.backends.util",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__db__backends__util = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__db__backends__util = (PyDictObject *)((PyModuleObject *)_module_django__db__backends__util)->md_dict;

    assertObject( _module_django__db__backends__util );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_b5be7f6c91fed9b62d9bcfe2aecc89cf, _module_django__db__backends__util );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__db__backends__util );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__db__backends__util != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__db__backends__util, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django__db__backends__util, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_8e3550342b691ade006eeefce4bee080 );
    PyFrameObject *frame_module_django__db__backends__util = MAKE_FRAME( _codeobj_f386245a7782bc0aac9ac2e4374b3688, _module_django__db__backends__util );

    FrameGuard frame_guard( frame_module_django__db__backends__util );
    try
    {
        assert( Py_REFCNT( frame_module_django__db__backends__util ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 1 );
        UPDATE_STRING_DICT1( _moduledict_django__db__backends__util, (Nuitka_StringObject *)_python_str_plain_unicode_literals, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain___future__, ((PyModuleObject *)_module_django__db__backends__util)->md_dict, ((PyModuleObject *)_module_django__db__backends__util)->md_dict, _python_list_str_plain_unicode_literals_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_unicode_literals ) );
        frame_guard.setLineNumber( 3 );
        UPDATE_STRING_DICT1( _moduledict_django__db__backends__util, (Nuitka_StringObject *)_python_str_plain_datetime, IMPORT_MODULE( _python_str_plain_datetime, ((PyModuleObject *)_module_django__db__backends__util)->md_dict, ((PyModuleObject *)_module_django__db__backends__util)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 4 );
        UPDATE_STRING_DICT1( _moduledict_django__db__backends__util, (Nuitka_StringObject *)_python_str_plain_decimal, IMPORT_MODULE( _python_str_plain_decimal, ((PyModuleObject *)_module_django__db__backends__util)->md_dict, ((PyModuleObject *)_module_django__db__backends__util)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 5 );
        UPDATE_STRING_DICT1( _moduledict_django__db__backends__util, (Nuitka_StringObject *)_python_str_plain_hashlib, IMPORT_MODULE( _python_str_plain_hashlib, ((PyModuleObject *)_module_django__db__backends__util)->md_dict, ((PyModuleObject *)_module_django__db__backends__util)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 6 );
        UPDATE_STRING_DICT1( _moduledict_django__db__backends__util, (Nuitka_StringObject *)_python_str_plain_logging, IMPORT_MODULE( _python_str_plain_logging, ((PyModuleObject *)_module_django__db__backends__util)->md_dict, ((PyModuleObject *)_module_django__db__backends__util)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 7 );
        UPDATE_STRING_DICT1( _moduledict_django__db__backends__util, (Nuitka_StringObject *)_python_str_plain_time, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_time, ((PyModuleObject *)_module_django__db__backends__util)->md_dict, ((PyModuleObject *)_module_django__db__backends__util)->md_dict, _python_list_str_plain_time_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_time ) );
        frame_guard.setLineNumber( 9 );
        UPDATE_STRING_DICT1( _moduledict_django__db__backends__util, (Nuitka_StringObject *)_python_str_plain_settings, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__db__backends__util)->md_dict, ((PyModuleObject *)_module_django__db__backends__util)->md_dict, _python_list_str_plain_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_settings ) );
        frame_guard.setLineNumber( 10 );
        UPDATE_STRING_DICT1( _moduledict_django__db__backends__util, (Nuitka_StringObject *)_python_str_plain_force_bytes, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__db__backends__util)->md_dict, ((PyModuleObject *)_module_django__db__backends__util)->md_dict, _python_list_str_plain_force_bytes_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_force_bytes ) );
        frame_guard.setLineNumber( 11 );
        UPDATE_STRING_DICT1( _moduledict_django__db__backends__util, (Nuitka_StringObject *)_python_str_plain_utc, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_73d3e50847215b8dcd97fb275615b5ea, ((PyModuleObject *)_module_django__db__backends__util)->md_dict, ((PyModuleObject *)_module_django__db__backends__util)->md_dict, _python_list_str_plain_utc_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_utc ) );
        frame_guard.setLineNumber( 14 );
        UPDATE_STRING_DICT1( _moduledict_django__db__backends__util, (Nuitka_StringObject *)_python_str_plain_logger, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__db__backends__util_logging.asObject0(), _python_str_plain_getLogger ) ).asObject(), _python_unicode_digest_67631acd3c65ad614c0beb0db7bbe60a ) );
        {
            frame_guard.setLineNumber( 17 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_1_CursorWrapper_of_module_django__db__backends__util(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__backends__util___metaclass__.isInitialized( false ) ? _mvar_django__db__backends__util___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_CursorWrapper, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__backends__util, (Nuitka_StringObject *)_python_str_plain_CursorWrapper, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 36 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__db__backends__util_CursorWrapper.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_2_CursorDebugWrapper_of_module_django__db__backends__util(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__backends__util___metaclass__.isInitialized( false ) ? _mvar_django__db__backends__util___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper0 call7;
                _tmp_python_tmp_class = ( call5.assign( _python_tmp_metaclass.asObject() ), call7.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_str_plain_CursorDebugWrapper, call7.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__backends__util, (Nuitka_StringObject *)_python_str_plain_CursorDebugWrapper, _python_tmp_class.asObject() );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__db__backends__util)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__db__backends__util, (Nuitka_StringObject *)_python_str_plain_typecast_date, MAKE_FUNCTION_function_3_typecast_date_of_module_django__db__backends__util(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__db__backends__util, (Nuitka_StringObject *)_python_str_plain_typecast_time, MAKE_FUNCTION_function_4_typecast_time_of_module_django__db__backends__util(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__db__backends__util, (Nuitka_StringObject *)_python_str_plain_typecast_timestamp, MAKE_FUNCTION_function_5_typecast_timestamp_of_module_django__db__backends__util(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__db__backends__util, (Nuitka_StringObject *)_python_str_plain_typecast_decimal, MAKE_FUNCTION_function_6_typecast_decimal_of_module_django__db__backends__util(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__db__backends__util, (Nuitka_StringObject *)_python_str_plain_rev_typecast_decimal, MAKE_FUNCTION_function_7_rev_typecast_decimal_of_module_django__db__backends__util(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__db__backends__util, (Nuitka_StringObject *)_python_str_plain_truncate_name, MAKE_FUNCTION_function_8_truncate_name_of_module_django__db__backends__util(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__db__backends__util, (Nuitka_StringObject *)_python_str_plain_format_number, MAKE_FUNCTION_function_9_format_number_of_module_django__db__backends__util(  ) );

   return MOD_RETURN_VALUE( _module_django__db__backends__util );
}
