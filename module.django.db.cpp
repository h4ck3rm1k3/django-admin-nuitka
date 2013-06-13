// Generated code for Python source for module 'django.db'
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

// The _module_django__db is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__db;
PyDictObject *_moduledict_django__db;

// The module level variables.
static PyObjectGlobalVariable_django__db _mvar_django__db_ConnectionHandler( &_module_django__db, &_python_str_plain_ConnectionHandler );
static PyObjectGlobalVariable_django__db _mvar_django__db_ConnectionRouter( &_module_django__db, &_python_str_plain_ConnectionRouter );
static PyObjectGlobalVariable_django__db _mvar_django__db_DEFAULT_DB_ALIAS( &_module_django__db, &_python_str_plain_DEFAULT_DB_ALIAS );
static PyObjectGlobalVariable_django__db _mvar_django__db_DatabaseError( &_module_django__db, &_python_str_plain_DatabaseError );
static PyObjectGlobalVariable_django__db _mvar_django__db_DefaultBackendProxy( &_module_django__db, &_python_str_plain_DefaultBackendProxy );
static PyObjectGlobalVariable_django__db _mvar_django__db_DefaultConnectionProxy( &_module_django__db, &_python_str_plain_DefaultConnectionProxy );
static PyObjectGlobalVariable_django__db _mvar_django__db_PendingDeprecationWarning( &_module_django__db, &_python_str_plain_PendingDeprecationWarning );
static PyObjectGlobalVariable_django__db _mvar_django__db___metaclass__( &_module_django__db, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__db _mvar_django__db_cached_property( &_module_django__db, &_python_str_plain_cached_property );
static PyObjectGlobalVariable_django__db _mvar_django__db_close_old_connections( &_module_django__db, &_python_str_plain_close_old_connections );
static PyObjectGlobalVariable_django__db _mvar_django__db_connections( &_module_django__db, &_python_str_plain_connections );
static PyObjectGlobalVariable_django__db _mvar_django__db_load_backend( &_module_django__db, &_python_str_plain_load_backend );
static PyObjectGlobalVariable_django__db _mvar_django__db_reset_queries( &_module_django__db, &_python_str_plain_reset_queries );
static PyObjectGlobalVariable_django__db _mvar_django__db_signals( &_module_django__db, &_python_str_plain_signals );
static PyObjectGlobalVariable_django__db _mvar_django__db_warnings( &_module_django__db, &_python_str_plain_warnings );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_DefaultConnectionProxy_of_module_django__db(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_2_DefaultBackendProxy_of_module_django__db(  );


static PyObject *MAKE_FUNCTION_function_1___getattr___of_class_1_DefaultConnectionProxy_of_module_django__db(  );


static PyObject *MAKE_FUNCTION_function_1__backend_of_class_2_DefaultBackendProxy_of_module_django__db(  );


static PyObject *MAKE_FUNCTION_function_2___getattr___of_class_2_DefaultBackendProxy_of_module_django__db(  );


static PyObject *MAKE_FUNCTION_function_2___setattr___of_class_1_DefaultConnectionProxy_of_module_django__db(  );


static PyObject *MAKE_FUNCTION_function_3___delattr___of_class_1_DefaultConnectionProxy_of_module_django__db(  );


static PyObject *MAKE_FUNCTION_function_3___setattr___of_class_2_DefaultBackendProxy_of_module_django__db(  );


static PyObject *MAKE_FUNCTION_function_3_close_connection_of_module_django__db(  );


static PyObject *MAKE_FUNCTION_function_4___delattr___of_class_2_DefaultBackendProxy_of_module_django__db(  );


static PyObject *MAKE_FUNCTION_function_4_reset_queries_of_module_django__db(  );


static PyObject *MAKE_FUNCTION_function_5_close_old_connections_of_module_django__db(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_DefaultConnectionProxy_of_module_django__db(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___getattr__( _python_str_plain___getattr__ );
    PyObjectLocalVariable _python_var___setattr__( _python_str_plain___setattr__ );
    PyObjectLocalVariable _python_var___delattr__( _python_str_plain___delattr__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_db );
    _python_var___doc__.assign0( _python_str_digest_d57fbaeffdf203412e833ffe0eecf680 );
    _python_var___getattr__.assign1( MAKE_FUNCTION_function_1___getattr___of_class_1_DefaultConnectionProxy_of_module_django__db(  ) );
    _python_var___setattr__.assign1( MAKE_FUNCTION_function_2___setattr___of_class_1_DefaultConnectionProxy_of_module_django__db(  ) );
    _python_var___delattr__.assign1( MAKE_FUNCTION_function_3___delattr___of_class_1_DefaultConnectionProxy_of_module_django__db(  ) );
    return _python_var___delattr__.updateLocalsDict( _python_var___setattr__.updateLocalsDict( _python_var___getattr__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) );
}


static PyObject *impl_function_1___getattr___of_class_1_DefaultConnectionProxy_of_module_django__db( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_item )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_item( _python_str_plain_item, _python_par_item );

    // Actual function code.
    static PyFrameObject *frame_function_1___getattr___of_class_1_DefaultConnectionProxy_of_module_django__db = NULL;

    if ( isFrameUnusable( frame_function_1___getattr___of_class_1_DefaultConnectionProxy_of_module_django__db ) )
    {
        if ( frame_function_1___getattr___of_class_1_DefaultConnectionProxy_of_module_django__db )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___getattr___of_class_1_DefaultConnectionProxy_of_module_django__db" );
#endif
            Py_DECREF( frame_function_1___getattr___of_class_1_DefaultConnectionProxy_of_module_django__db );
        }

        frame_function_1___getattr___of_class_1_DefaultConnectionProxy_of_module_django__db = MAKE_FRAME( _codeobj_e6a23e8b55e6548398cb1e884f78286a, _module_django__db );
    }

    FrameGuard frame_guard( frame_function_1___getattr___of_class_1_DefaultConnectionProxy_of_module_django__db );
    try
    {
        assert( Py_REFCNT( frame_function_1___getattr___of_class_1_DefaultConnectionProxy_of_module_django__db ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 34 );
        {
            PyObjectTempKeeper1 getattr3;
            PyObjectTempKeeper0 subscr1;
            return ( getattr3.assign( ( subscr1.assign( _mvar_django__db_connections.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), _mvar_django__db_DEFAULT_DB_ALIAS.asObject0() ) ) ), BUILTIN_GETATTR( getattr3.asObject0(), _python_var_item.asObject(), NULL ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_item.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_1___getattr___of_class_1_DefaultConnectionProxy_of_module_django__db )
        {
           Py_DECREF( frame_function_1___getattr___of_class_1_DefaultConnectionProxy_of_module_django__db );
           frame_function_1___getattr___of_class_1_DefaultConnectionProxy_of_module_django__db = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1___getattr___of_class_1_DefaultConnectionProxy_of_module_django__db( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_item = NULL;
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
            if ( found == false && _python_str_plain_item == key )
            {
                if (unlikely( _python_par_item ))
                {
                    PyErr_Format( PyExc_TypeError, "__getattr__() got multiple values for keyword argument 'item'" );
                    goto error_exit;
                }

                _python_par_item = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_item, key ) )
            {
                if (unlikely( _python_par_item ))
                {
                    PyErr_Format( PyExc_TypeError, "__getattr__() got multiple values for keyword argument 'item'" );
                    goto error_exit;
                }

                _python_par_item = value;

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
         if (unlikely( _python_par_item != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__getattr__() got multiple values for keyword argument 'item'" );
             goto error_exit;
         }

        _python_par_item = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_1___getattr___of_class_1_DefaultConnectionProxy_of_module_django__db( self, _python_par_self, _python_par_item );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_item );

    return NULL;
}

static PyObject *dparse_function_1___getattr___of_class_1_DefaultConnectionProxy_of_module_django__db( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1___getattr___of_class_1_DefaultConnectionProxy_of_module_django__db( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___getattr___of_class_1_DefaultConnectionProxy_of_module_django__db( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___setattr___of_class_1_DefaultConnectionProxy_of_module_django__db( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_2___setattr___of_class_1_DefaultConnectionProxy_of_module_django__db = NULL;

    if ( isFrameUnusable( frame_function_2___setattr___of_class_1_DefaultConnectionProxy_of_module_django__db ) )
    {
        if ( frame_function_2___setattr___of_class_1_DefaultConnectionProxy_of_module_django__db )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2___setattr___of_class_1_DefaultConnectionProxy_of_module_django__db" );
#endif
            Py_DECREF( frame_function_2___setattr___of_class_1_DefaultConnectionProxy_of_module_django__db );
        }

        frame_function_2___setattr___of_class_1_DefaultConnectionProxy_of_module_django__db = MAKE_FRAME( _codeobj_57f8ccf3623b64060cb9745076ef2f74, _module_django__db );
    }

    FrameGuard frame_guard( frame_function_2___setattr___of_class_1_DefaultConnectionProxy_of_module_django__db );
    try
    {
        assert( Py_REFCNT( frame_function_2___setattr___of_class_1_DefaultConnectionProxy_of_module_django__db ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 37 );
        {
            PyObjectTempKeeper1 setattr3;
            PyObjectTempKeeper0 setattr4;
            PyObjectTempKeeper0 subscr1;
            return INCREASE_REFCOUNT( ( ( setattr3.assign( ( subscr1.assign( _mvar_django__db_connections.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), _mvar_django__db_DEFAULT_DB_ALIAS.asObject0() ) ) ), setattr4.assign( _python_var_name.asObject() ), BUILTIN_SETATTR( setattr3.asObject0(), setattr4.asObject0(), _python_var_value.asObject() ) ), Py_None ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_value.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_2___setattr___of_class_1_DefaultConnectionProxy_of_module_django__db )
        {
           Py_DECREF( frame_function_2___setattr___of_class_1_DefaultConnectionProxy_of_module_django__db );
           frame_function_2___setattr___of_class_1_DefaultConnectionProxy_of_module_django__db = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2___setattr___of_class_1_DefaultConnectionProxy_of_module_django__db( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_name = NULL;
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
                PyErr_Format( PyExc_TypeError, "__setattr__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__setattr__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__setattr__() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_value == key )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "__setattr__() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "__setattr__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__setattr__() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "__setattr__() got multiple values for keyword argument 'value'" );
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
                   "__setattr__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__setattr__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__setattr__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__setattr__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__setattr__() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "__setattr__() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__setattr__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "__setattr__() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__setattr__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__setattr__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__setattr__() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "__setattr__() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__setattr__() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__setattr__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__setattr__() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__setattr__() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_2___setattr___of_class_1_DefaultConnectionProxy_of_module_django__db( self, _python_par_self, _python_par_name, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );
    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_2___setattr___of_class_1_DefaultConnectionProxy_of_module_django__db( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_2___setattr___of_class_1_DefaultConnectionProxy_of_module_django__db( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___setattr___of_class_1_DefaultConnectionProxy_of_module_django__db( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3___delattr___of_class_1_DefaultConnectionProxy_of_module_django__db( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );

    // Actual function code.
    static PyFrameObject *frame_function_3___delattr___of_class_1_DefaultConnectionProxy_of_module_django__db = NULL;

    if ( isFrameUnusable( frame_function_3___delattr___of_class_1_DefaultConnectionProxy_of_module_django__db ) )
    {
        if ( frame_function_3___delattr___of_class_1_DefaultConnectionProxy_of_module_django__db )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3___delattr___of_class_1_DefaultConnectionProxy_of_module_django__db" );
#endif
            Py_DECREF( frame_function_3___delattr___of_class_1_DefaultConnectionProxy_of_module_django__db );
        }

        frame_function_3___delattr___of_class_1_DefaultConnectionProxy_of_module_django__db = MAKE_FRAME( _codeobj_51ea0e8b0d6fa563a838f0c4be35dc08, _module_django__db );
    }

    FrameGuard frame_guard( frame_function_3___delattr___of_class_1_DefaultConnectionProxy_of_module_django__db );
    try
    {
        assert( Py_REFCNT( frame_function_3___delattr___of_class_1_DefaultConnectionProxy_of_module_django__db ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 40 );
        {
            PyObjectTempKeeper1 call4;
            PyObjectTempKeeper0 subscr1;
            return ( call4.assign( ( subscr1.assign( _mvar_django__db_connections.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), _mvar_django__db_DEFAULT_DB_ALIAS.asObject0() ) ) ), CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_delattr ), call4.asObject0(), _python_var_name.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_name.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_3___delattr___of_class_1_DefaultConnectionProxy_of_module_django__db )
        {
           Py_DECREF( frame_function_3___delattr___of_class_1_DefaultConnectionProxy_of_module_django__db );
           frame_function_3___delattr___of_class_1_DefaultConnectionProxy_of_module_django__db = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3___delattr___of_class_1_DefaultConnectionProxy_of_module_django__db( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_name = NULL;
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
                PyErr_Format( PyExc_TypeError, "__delattr__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__delattr__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__delattr__() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "__delattr__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__delattr__() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__delattr__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__delattr__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__delattr__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__delattr__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__delattr__() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__delattr__() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__delattr__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__delattr__() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__delattr__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__delattr__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__delattr__() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "__delattr__() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__delattr__() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__delattr__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__delattr__() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_3___delattr___of_class_1_DefaultConnectionProxy_of_module_django__db( self, _python_par_self, _python_par_name );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );

    return NULL;
}

static PyObject *dparse_function_3___delattr___of_class_1_DefaultConnectionProxy_of_module_django__db( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_3___delattr___of_class_1_DefaultConnectionProxy_of_module_django__db( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3___delattr___of_class_1_DefaultConnectionProxy_of_module_django__db( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_2_DefaultBackendProxy_of_module_django__db(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var__backend( _python_str_plain__backend );
    PyObjectLocalVariable _python_var___getattr__( _python_str_plain___getattr__ );
    PyObjectLocalVariable _python_var___setattr__( _python_str_plain___setattr__ );
    PyObjectLocalVariable _python_var___delattr__( _python_str_plain___delattr__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_db );
    _python_var___doc__.assign0( _python_str_digest_b88b781948b0ca384e5b19a7bb8ff0dc );
    static PyFrameObject *frame_class_2_DefaultBackendProxy_of_module_django__db = NULL;

    if ( isFrameUnusable( frame_class_2_DefaultBackendProxy_of_module_django__db ) )
    {
        if ( frame_class_2_DefaultBackendProxy_of_module_django__db )
        {
#if _DEBUG_REFRAME
            puts( "reframe for class_2_DefaultBackendProxy_of_module_django__db" );
#endif
            Py_DECREF( frame_class_2_DefaultBackendProxy_of_module_django__db );
        }

        frame_class_2_DefaultBackendProxy_of_module_django__db = MAKE_FRAME( _codeobj_00d4b58eb73b1f8b17f4a1c855663894, _module_django__db );
    }

    FrameGuard frame_guard( frame_class_2_DefaultBackendProxy_of_module_django__db );
    try
    {
        assert( Py_REFCNT( frame_class_2_DefaultBackendProxy_of_module_django__db ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 49 );
        _python_var__backend.assign1( CALL_FUNCTION_WITH_ARGS( _mvar_django__db_cached_property.asObject0(), PyObjectTemporary( MAKE_FUNCTION_function_1__backend_of_class_2_DefaultBackendProxy_of_module_django__db(  ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var___delattr__.updateLocalsDict( _python_var___setattr__.updateLocalsDict( _python_var___getattr__.updateLocalsDict( _python_var__backend.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_class_2_DefaultBackendProxy_of_module_django__db )
        {
           Py_DECREF( frame_class_2_DefaultBackendProxy_of_module_django__db );
           frame_class_2_DefaultBackendProxy_of_module_django__db = NULL;
        }

        throw;
    }
    _python_var___getattr__.assign1( MAKE_FUNCTION_function_2___getattr___of_class_2_DefaultBackendProxy_of_module_django__db(  ) );
    _python_var___setattr__.assign1( MAKE_FUNCTION_function_3___setattr___of_class_2_DefaultBackendProxy_of_module_django__db(  ) );
    _python_var___delattr__.assign1( MAKE_FUNCTION_function_4___delattr___of_class_2_DefaultBackendProxy_of_module_django__db(  ) );
    return _python_var___delattr__.updateLocalsDict( _python_var___setattr__.updateLocalsDict( _python_var___getattr__.updateLocalsDict( _python_var__backend.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) );
}


static PyObject *impl_function_1__backend_of_class_2_DefaultBackendProxy_of_module_django__db( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_1__backend_of_class_2_DefaultBackendProxy_of_module_django__db = NULL;

    if ( isFrameUnusable( frame_function_1__backend_of_class_2_DefaultBackendProxy_of_module_django__db ) )
    {
        if ( frame_function_1__backend_of_class_2_DefaultBackendProxy_of_module_django__db )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1__backend_of_class_2_DefaultBackendProxy_of_module_django__db" );
#endif
            Py_DECREF( frame_function_1__backend_of_class_2_DefaultBackendProxy_of_module_django__db );
        }

        frame_function_1__backend_of_class_2_DefaultBackendProxy_of_module_django__db = MAKE_FRAME( _codeobj_ade642beb9cbed7858a38b8242f5de27, _module_django__db );
    }

    FrameGuard frame_guard( frame_function_1__backend_of_class_2_DefaultBackendProxy_of_module_django__db );
    try
    {
        assert( Py_REFCNT( frame_function_1__backend_of_class_2_DefaultBackendProxy_of_module_django__db ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 51 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__db_warnings.asObject0(), _python_str_plain_warn ) ), CALL_FUNCTION( call1.asObject0(), PyObjectTemporary( MAKE_TUPLE2( _python_str_digest_43bbb0958f62e25a5c2d1983d98c1b8e, _mvar_django__db_PendingDeprecationWarning.asObject0() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_f154c9a58c9419d7e391901d7b7fe49e ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 53 );
        {
            PyObjectTempKeeper0 call6;
            PyObjectTempKeeper0 subscr4;
            return ( call6.assign( _mvar_django__db_load_backend.asObject0() ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( subscr4.assign( _mvar_django__db_connections.asObject0() ), LOOKUP_SUBSCRIPT( subscr4.asObject0(), _mvar_django__db_DEFAULT_DB_ALIAS.asObject0() ) ) ).asObject(), _python_str_plain_settings_dict ) ).asObject(), _python_str_plain_ENGINE ) ).asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_1__backend_of_class_2_DefaultBackendProxy_of_module_django__db )
        {
           Py_DECREF( frame_function_1__backend_of_class_2_DefaultBackendProxy_of_module_django__db );
           frame_function_1__backend_of_class_2_DefaultBackendProxy_of_module_django__db = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1__backend_of_class_2_DefaultBackendProxy_of_module_django__db( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "_backend() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_backend() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "_backend() got multiple values for keyword argument 'self'" );
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
                   "_backend() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_backend() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_backend() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_backend() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_backend() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_backend() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_backend() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "_backend() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_backend() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_backend() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_backend() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "_backend() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_backend() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_backend() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_1__backend_of_class_2_DefaultBackendProxy_of_module_django__db( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_1__backend_of_class_2_DefaultBackendProxy_of_module_django__db( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_1__backend_of_class_2_DefaultBackendProxy_of_module_django__db( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1__backend_of_class_2_DefaultBackendProxy_of_module_django__db( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___getattr___of_class_2_DefaultBackendProxy_of_module_django__db( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_item )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_item( _python_str_plain_item, _python_par_item );

    // Actual function code.
    static PyFrameObject *frame_function_2___getattr___of_class_2_DefaultBackendProxy_of_module_django__db = NULL;

    if ( isFrameUnusable( frame_function_2___getattr___of_class_2_DefaultBackendProxy_of_module_django__db ) )
    {
        if ( frame_function_2___getattr___of_class_2_DefaultBackendProxy_of_module_django__db )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2___getattr___of_class_2_DefaultBackendProxy_of_module_django__db" );
#endif
            Py_DECREF( frame_function_2___getattr___of_class_2_DefaultBackendProxy_of_module_django__db );
        }

        frame_function_2___getattr___of_class_2_DefaultBackendProxy_of_module_django__db = MAKE_FRAME( _codeobj_6ed59bbedffbff4ad77e436f9c1d6cdf, _module_django__db );
    }

    FrameGuard frame_guard( frame_function_2___getattr___of_class_2_DefaultBackendProxy_of_module_django__db );
    try
    {
        assert( Py_REFCNT( frame_function_2___getattr___of_class_2_DefaultBackendProxy_of_module_django__db ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 56 );
        {
            PyObjectTempKeeper1 getattr1;
            return ( getattr1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__backend ) ), BUILTIN_GETATTR( getattr1.asObject0(), _python_var_item.asObject(), NULL ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_item.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_2___getattr___of_class_2_DefaultBackendProxy_of_module_django__db )
        {
           Py_DECREF( frame_function_2___getattr___of_class_2_DefaultBackendProxy_of_module_django__db );
           frame_function_2___getattr___of_class_2_DefaultBackendProxy_of_module_django__db = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2___getattr___of_class_2_DefaultBackendProxy_of_module_django__db( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_item = NULL;
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
            if ( found == false && _python_str_plain_item == key )
            {
                if (unlikely( _python_par_item ))
                {
                    PyErr_Format( PyExc_TypeError, "__getattr__() got multiple values for keyword argument 'item'" );
                    goto error_exit;
                }

                _python_par_item = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_item, key ) )
            {
                if (unlikely( _python_par_item ))
                {
                    PyErr_Format( PyExc_TypeError, "__getattr__() got multiple values for keyword argument 'item'" );
                    goto error_exit;
                }

                _python_par_item = value;

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
         if (unlikely( _python_par_item != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__getattr__() got multiple values for keyword argument 'item'" );
             goto error_exit;
         }

        _python_par_item = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_2___getattr___of_class_2_DefaultBackendProxy_of_module_django__db( self, _python_par_self, _python_par_item );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_item );

    return NULL;
}

static PyObject *dparse_function_2___getattr___of_class_2_DefaultBackendProxy_of_module_django__db( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2___getattr___of_class_2_DefaultBackendProxy_of_module_django__db( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___getattr___of_class_2_DefaultBackendProxy_of_module_django__db( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3___setattr___of_class_2_DefaultBackendProxy_of_module_django__db( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name, PyObject *_python_par_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );
    PyObjectLocalParameterVariableNoDel _python_var_value( _python_str_plain_value, _python_par_value );

    // Actual function code.
    static PyFrameObject *frame_function_3___setattr___of_class_2_DefaultBackendProxy_of_module_django__db = NULL;

    if ( isFrameUnusable( frame_function_3___setattr___of_class_2_DefaultBackendProxy_of_module_django__db ) )
    {
        if ( frame_function_3___setattr___of_class_2_DefaultBackendProxy_of_module_django__db )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3___setattr___of_class_2_DefaultBackendProxy_of_module_django__db" );
#endif
            Py_DECREF( frame_function_3___setattr___of_class_2_DefaultBackendProxy_of_module_django__db );
        }

        frame_function_3___setattr___of_class_2_DefaultBackendProxy_of_module_django__db = MAKE_FRAME( _codeobj_6e2d43dca8afd6e7ed2c8fd61e6fdf68, _module_django__db );
    }

    FrameGuard frame_guard( frame_function_3___setattr___of_class_2_DefaultBackendProxy_of_module_django__db );
    try
    {
        assert( Py_REFCNT( frame_function_3___setattr___of_class_2_DefaultBackendProxy_of_module_django__db ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 59 );
        {
            PyObjectTempKeeper1 setattr1;
            PyObjectTempKeeper0 setattr2;
            return INCREASE_REFCOUNT( ( ( setattr1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__backend ) ), setattr2.assign( _python_var_name.asObject() ), BUILTIN_SETATTR( setattr1.asObject0(), setattr2.asObject0(), _python_var_value.asObject() ) ), Py_None ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_value.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_3___setattr___of_class_2_DefaultBackendProxy_of_module_django__db )
        {
           Py_DECREF( frame_function_3___setattr___of_class_2_DefaultBackendProxy_of_module_django__db );
           frame_function_3___setattr___of_class_2_DefaultBackendProxy_of_module_django__db = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3___setattr___of_class_2_DefaultBackendProxy_of_module_django__db( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_name = NULL;
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
                PyErr_Format( PyExc_TypeError, "__setattr__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__setattr__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__setattr__() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_value == key )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "__setattr__() got multiple values for keyword argument 'value'" );
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
                    PyErr_Format( PyExc_TypeError, "__setattr__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__setattr__() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_value, key ) )
            {
                if (unlikely( _python_par_value ))
                {
                    PyErr_Format( PyExc_TypeError, "__setattr__() got multiple values for keyword argument 'value'" );
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
                   "__setattr__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__setattr__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__setattr__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__setattr__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__setattr__() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "__setattr__() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__setattr__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "__setattr__() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__setattr__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__setattr__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__setattr__() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "__setattr__() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__setattr__() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__setattr__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__setattr__() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__setattr__() got multiple values for keyword argument 'value'" );
             goto error_exit;
         }

        _python_par_value = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_3___setattr___of_class_2_DefaultBackendProxy_of_module_django__db( self, _python_par_self, _python_par_name, _python_par_value );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );
    Py_XDECREF( _python_par_value );

    return NULL;
}

static PyObject *dparse_function_3___setattr___of_class_2_DefaultBackendProxy_of_module_django__db( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_3___setattr___of_class_2_DefaultBackendProxy_of_module_django__db( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3___setattr___of_class_2_DefaultBackendProxy_of_module_django__db( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4___delattr___of_class_2_DefaultBackendProxy_of_module_django__db( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );

    // Actual function code.
    static PyFrameObject *frame_function_4___delattr___of_class_2_DefaultBackendProxy_of_module_django__db = NULL;

    if ( isFrameUnusable( frame_function_4___delattr___of_class_2_DefaultBackendProxy_of_module_django__db ) )
    {
        if ( frame_function_4___delattr___of_class_2_DefaultBackendProxy_of_module_django__db )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4___delattr___of_class_2_DefaultBackendProxy_of_module_django__db" );
#endif
            Py_DECREF( frame_function_4___delattr___of_class_2_DefaultBackendProxy_of_module_django__db );
        }

        frame_function_4___delattr___of_class_2_DefaultBackendProxy_of_module_django__db = MAKE_FRAME( _codeobj_0eede137e2285300da7204b9fb74106c, _module_django__db );
    }

    FrameGuard frame_guard( frame_function_4___delattr___of_class_2_DefaultBackendProxy_of_module_django__db );
    try
    {
        assert( Py_REFCNT( frame_function_4___delattr___of_class_2_DefaultBackendProxy_of_module_django__db ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 62 );
        {
            PyObjectTempKeeper1 call2;
            return ( call2.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__backend ) ), CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_delattr ), call2.asObject0(), _python_var_name.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_name.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_4___delattr___of_class_2_DefaultBackendProxy_of_module_django__db )
        {
           Py_DECREF( frame_function_4___delattr___of_class_2_DefaultBackendProxy_of_module_django__db );
           frame_function_4___delattr___of_class_2_DefaultBackendProxy_of_module_django__db = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4___delattr___of_class_2_DefaultBackendProxy_of_module_django__db( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_name = NULL;
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
                PyErr_Format( PyExc_TypeError, "__delattr__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__delattr__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__delattr__() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "__delattr__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__delattr__() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__delattr__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__delattr__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__delattr__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__delattr__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__delattr__() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__delattr__() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__delattr__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__delattr__() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__delattr__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__delattr__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__delattr__() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "__delattr__() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__delattr__() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__delattr__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__delattr__() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_4___delattr___of_class_2_DefaultBackendProxy_of_module_django__db( self, _python_par_self, _python_par_name );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_name );

    return NULL;
}

static PyObject *dparse_function_4___delattr___of_class_2_DefaultBackendProxy_of_module_django__db( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_4___delattr___of_class_2_DefaultBackendProxy_of_module_django__db( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4___delattr___of_class_2_DefaultBackendProxy_of_module_django__db( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_close_connection_of_module_django__db( Nuitka_FunctionObject *self, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );
    PyObjectLocalVariable _python_var_transaction( _python_str_plain_transaction );
    PyObjectLocalVariable _python_var_conn( _python_str_plain_conn );

    // Actual function code.
    static PyFrameObject *frame_function_3_close_connection_of_module_django__db = NULL;

    if ( isFrameUnusable( frame_function_3_close_connection_of_module_django__db ) )
    {
        if ( frame_function_3_close_connection_of_module_django__db )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_close_connection_of_module_django__db" );
#endif
            Py_DECREF( frame_function_3_close_connection_of_module_django__db );
        }

        frame_function_3_close_connection_of_module_django__db = MAKE_FRAME( _codeobj_82ef3a0d1631113b03c78d5266188360, _module_django__db );
    }

    FrameGuard frame_guard( frame_function_3_close_connection_of_module_django__db );
    try
    {
        assert( Py_REFCNT( frame_function_3_close_connection_of_module_django__db ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 67 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__db_warnings.asObject0(), _python_str_plain_warn ) ), CALL_FUNCTION( call1.asObject0(), PyObjectTemporary( MAKE_TUPLE2( _python_str_digest_6b6d48373dac060d56a9744d661d3775, _mvar_django__db_PendingDeprecationWarning.asObject0() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_f154c9a58c9419d7e391901d7b7fe49e ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 71 );
        _python_var_transaction.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_391c2f4b507ae374cc9606a76384636e, ((PyModuleObject *)_module_django__db)->md_dict, PyObjectTemporary( _python_var_kwargs.updateLocalsDict( _python_var_conn.updateLocalsDict( _python_var_transaction.updateLocalsDict( PyDict_New() ) ) ) ).asObject(), _python_list_str_plain_transaction_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_transaction ) );
        {
            frame_guard.setLineNumber( 72 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _mvar_django__db_connections.asObject0() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 72 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_conn.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 76 );
                {
                    PyObjectTempKeeper1 call4;
                    DECREASE_REFCOUNT( ( call4.assign( LOOKUP_ATTRIBUTE( _python_var_transaction.asObject(), _python_str_plain_abort ) ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), _python_var_conn.asObject() ) ) );
                }
                frame_guard.setLineNumber( 77 );
                {
                    PyObjectTempKeeper0 subscr6;
                    DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( subscr6.assign( _mvar_django__db_connections.asObject0() ), LOOKUP_SUBSCRIPT( subscr6.asObject0(), _python_var_conn.asObject() ) ) ).asObject(), _python_str_plain_close ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_conn.updateLocalsDict( _python_var_transaction.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_close_connection_of_module_django__db )
        {
           Py_DECREF( frame_function_3_close_connection_of_module_django__db );
           frame_function_3_close_connection_of_module_django__db = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_3_close_connection_of_module_django__db( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_kwargs = NULL;

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
                        PyErr_Format( PyExc_TypeError, "close_connection() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "close_connection() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "close_connection() keywords must be strings" );
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

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 0 ))
    {
        if ( 0 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "close_connection() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "close_connection() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "close_connection() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "close_connection() takes exactly %d arguments (%zd given)", 0, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 0 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "close_connection() takes exactly %d positional arguments (%zd given)", 0, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "close_connection() takes at most %d positional arguments (%zd given)", 0, args_given + kw_only_found );
            }
#else
            if ( 0 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "close_connection() takes %d positional arguments but %zd were given", 0, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "close_connection() takes at most %d positional arguments (%zd given)", 0, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 0 ))
    {
        if ( 0 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "close_connection() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "close_connection() takes exactly %d non-keyword arguments (%zd given)", 0, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 0 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "close_connection() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "close_connection() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }


    return impl_function_3_close_connection_of_module_django__db( self, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_3_close_connection_of_module_django__db( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3_close_connection_of_module_django__db( self, PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_3_close_connection_of_module_django__db( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_reset_queries_of_module_django__db( Nuitka_FunctionObject *self, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );
    PyObjectLocalVariable _python_var_conn( _python_str_plain_conn );

    // Actual function code.
    static PyFrameObject *frame_function_4_reset_queries_of_module_django__db = NULL;

    if ( isFrameUnusable( frame_function_4_reset_queries_of_module_django__db ) )
    {
        if ( frame_function_4_reset_queries_of_module_django__db )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_reset_queries_of_module_django__db" );
#endif
            Py_DECREF( frame_function_4_reset_queries_of_module_django__db );
        }

        frame_function_4_reset_queries_of_module_django__db = MAKE_FRAME( _codeobj_ec35fe9bd215dd54637ce068964101d0, _module_django__db );
    }

    FrameGuard frame_guard( frame_function_4_reset_queries_of_module_django__db );
    try
    {
        assert( Py_REFCNT( frame_function_4_reset_queries_of_module_django__db ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 81 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__db_connections.asObject0(), _python_str_plain_all ) ).asObject() ) ).asObject() ) );
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
                    _python_var_conn.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 82 );
                SET_ATTRIBUTE( PyObjectTemporary( PyList_New( 0 ) ).asObject(), _python_var_conn.asObject(), _python_str_plain_queries );

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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_conn.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_4_reset_queries_of_module_django__db )
        {
           Py_DECREF( frame_function_4_reset_queries_of_module_django__db );
           frame_function_4_reset_queries_of_module_django__db = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_4_reset_queries_of_module_django__db( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_kwargs = NULL;

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
                        PyErr_Format( PyExc_TypeError, "reset_queries() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "reset_queries() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "reset_queries() keywords must be strings" );
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

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 0 ))
    {
        if ( 0 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "reset_queries() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "reset_queries() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "reset_queries() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "reset_queries() takes exactly %d arguments (%zd given)", 0, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 0 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "reset_queries() takes exactly %d positional arguments (%zd given)", 0, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "reset_queries() takes at most %d positional arguments (%zd given)", 0, args_given + kw_only_found );
            }
#else
            if ( 0 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "reset_queries() takes %d positional arguments but %zd were given", 0, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "reset_queries() takes at most %d positional arguments (%zd given)", 0, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 0 ))
    {
        if ( 0 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "reset_queries() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "reset_queries() takes exactly %d non-keyword arguments (%zd given)", 0, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 0 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "reset_queries() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "reset_queries() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }


    return impl_function_4_reset_queries_of_module_django__db( self, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_4_reset_queries_of_module_django__db( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_4_reset_queries_of_module_django__db( self, PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_4_reset_queries_of_module_django__db( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_close_old_connections_of_module_django__db( Nuitka_FunctionObject *self, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );
    PyObjectLocalVariable _python_var_conn( _python_str_plain_conn );

    // Actual function code.
    static PyFrameObject *frame_function_5_close_old_connections_of_module_django__db = NULL;

    if ( isFrameUnusable( frame_function_5_close_old_connections_of_module_django__db ) )
    {
        if ( frame_function_5_close_old_connections_of_module_django__db )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_close_old_connections_of_module_django__db" );
#endif
            Py_DECREF( frame_function_5_close_old_connections_of_module_django__db );
        }

        frame_function_5_close_old_connections_of_module_django__db = MAKE_FRAME( _codeobj_74c8ac8f508b724a5842ad061fe875bd, _module_django__db );
    }

    FrameGuard frame_guard( frame_function_5_close_old_connections_of_module_django__db );
    try
    {
        assert( Py_REFCNT( frame_function_5_close_old_connections_of_module_django__db ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 88 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__db_connections.asObject0(), _python_str_plain_all ) ).asObject() ) ).asObject() ) );
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
                    _python_var_conn.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 90 );
                try
                {
                    frame_guard.setLineNumber( 91 );
                    DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_conn.asObject(), _python_str_plain_abort ) ).asObject() ) );
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

                    if ( _exception.matches( _mvar_django__db_DatabaseError.asObject0() ) )
                    {

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
                frame_guard.setLineNumber( 94 );
                DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_conn.asObject(), _python_str_plain_close_if_unusable_or_obsolete ) ).asObject() ) );

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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_conn.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_5_close_old_connections_of_module_django__db )
        {
           Py_DECREF( frame_function_5_close_old_connections_of_module_django__db );
           frame_function_5_close_old_connections_of_module_django__db = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_5_close_old_connections_of_module_django__db( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_kwargs = NULL;

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
                        PyErr_Format( PyExc_TypeError, "close_old_connections() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "close_old_connections() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "close_old_connections() keywords must be strings" );
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

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 0 ))
    {
        if ( 0 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "close_old_connections() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "close_old_connections() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "close_old_connections() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "close_old_connections() takes exactly %d arguments (%zd given)", 0, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 0 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "close_old_connections() takes exactly %d positional arguments (%zd given)", 0, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "close_old_connections() takes at most %d positional arguments (%zd given)", 0, args_given + kw_only_found );
            }
#else
            if ( 0 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "close_old_connections() takes %d positional arguments but %zd were given", 0, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "close_old_connections() takes at most %d positional arguments (%zd given)", 0, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 0 ))
    {
        if ( 0 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "close_old_connections() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "close_old_connections() takes exactly %d non-keyword arguments (%zd given)", 0, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 0 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "close_old_connections() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "close_old_connections() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }


    return impl_function_5_close_old_connections_of_module_django__db( self, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_5_close_old_connections_of_module_django__db( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_5_close_old_connections_of_module_django__db( self, PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_5_close_old_connections_of_module_django__db( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1___getattr___of_class_1_DefaultConnectionProxy_of_module_django__db(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___getattr___of_class_1_DefaultConnectionProxy_of_module_django__db,
        dparse_function_1___getattr___of_class_1_DefaultConnectionProxy_of_module_django__db,
        _python_str_plain___getattr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e6a23e8b55e6548398cb1e884f78286a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1__backend_of_class_2_DefaultBackendProxy_of_module_django__db(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1__backend_of_class_2_DefaultBackendProxy_of_module_django__db,
        dparse_function_1__backend_of_class_2_DefaultBackendProxy_of_module_django__db,
        _python_str_plain__backend,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ade642beb9cbed7858a38b8242f5de27,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___getattr___of_class_2_DefaultBackendProxy_of_module_django__db(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___getattr___of_class_2_DefaultBackendProxy_of_module_django__db,
        dparse_function_2___getattr___of_class_2_DefaultBackendProxy_of_module_django__db,
        _python_str_plain___getattr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_6ed59bbedffbff4ad77e436f9c1d6cdf,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___setattr___of_class_1_DefaultConnectionProxy_of_module_django__db(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___setattr___of_class_1_DefaultConnectionProxy_of_module_django__db,
        dparse_function_2___setattr___of_class_1_DefaultConnectionProxy_of_module_django__db,
        _python_str_plain___setattr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_57f8ccf3623b64060cb9745076ef2f74,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3___delattr___of_class_1_DefaultConnectionProxy_of_module_django__db(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3___delattr___of_class_1_DefaultConnectionProxy_of_module_django__db,
        dparse_function_3___delattr___of_class_1_DefaultConnectionProxy_of_module_django__db,
        _python_str_plain___delattr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_51ea0e8b0d6fa563a838f0c4be35dc08,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3___setattr___of_class_2_DefaultBackendProxy_of_module_django__db(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3___setattr___of_class_2_DefaultBackendProxy_of_module_django__db,
        dparse_function_3___setattr___of_class_2_DefaultBackendProxy_of_module_django__db,
        _python_str_plain___setattr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_6e2d43dca8afd6e7ed2c8fd61e6fdf68,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_close_connection_of_module_django__db(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_close_connection_of_module_django__db,
        dparse_function_3_close_connection_of_module_django__db,
        _python_str_plain_close_connection,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_82ef3a0d1631113b03c78d5266188360,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4___delattr___of_class_2_DefaultBackendProxy_of_module_django__db(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4___delattr___of_class_2_DefaultBackendProxy_of_module_django__db,
        dparse_function_4___delattr___of_class_2_DefaultBackendProxy_of_module_django__db,
        _python_str_plain___delattr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_0eede137e2285300da7204b9fb74106c,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_reset_queries_of_module_django__db(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_reset_queries_of_module_django__db,
        dparse_function_4_reset_queries_of_module_django__db,
        _python_str_plain_reset_queries,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ec35fe9bd215dd54637ce068964101d0,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_close_old_connections_of_module_django__db(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_close_old_connections_of_module_django__db,
        dparse_function_5_close_old_connections_of_module_django__db,
        _python_str_plain_close_old_connections,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_74c8ac8f508b724a5842ad061fe875bd,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.db",   /* m_name */
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

MOD_INIT_DECL( django__db )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__db );
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

    // puts( "in initdjango__db" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__db = Py_InitModule4(
        "django.db",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__db = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__db = (PyDictObject *)((PyModuleObject *)_module_django__db)->md_dict;

    assertObject( _module_django__db );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_391c2f4b507ae374cc9606a76384636e, _module_django__db );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__db );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__db != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__db, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django__db, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_da060ea1145b747e8415a169392b4f27 );
    UPDATE_STRING_DICT1( _moduledict_django__db, (Nuitka_StringObject *)_python_str_plain___path__, LIST_COPY( _python_list_str_digest_34c72f01e6ced33256f376ced7aaf5e3_list ) );
    PyFrameObject *frame_module_django__db = MAKE_FRAME( _codeobj_9e17c024fe932d666ac3d9d7741d6813, _module_django__db );

    FrameGuard frame_guard( frame_module_django__db );
    try
    {
        assert( Py_REFCNT( frame_module_django__db ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 1 );
        UPDATE_STRING_DICT1( _moduledict_django__db, (Nuitka_StringObject *)_python_str_plain_warnings, IMPORT_MODULE( _python_str_plain_warnings, ((PyModuleObject *)_module_django__db)->md_dict, ((PyModuleObject *)_module_django__db)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 3 );
        UPDATE_STRING_DICT1( _moduledict_django__db, (Nuitka_StringObject *)_python_str_plain_signals, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_7fde38a6b8ad78c8ebb1bdff593c9e48, ((PyModuleObject *)_module_django__db)->md_dict, ((PyModuleObject *)_module_django__db)->md_dict, _python_list_str_plain_signals_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_signals ) );
        frame_guard.setLineNumber( 4 );
        UPDATE_STRING_DICT1( _moduledict_django__db, (Nuitka_StringObject *)_python_str_plain_DEFAULT_DB_ALIAS, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_3d07a776757bf1a03cf12370baf54363, ((PyModuleObject *)_module_django__db)->md_dict, ((PyModuleObject *)_module_django__db)->md_dict, _python_list_6527ae48ded1d43f68cd129858ccadb6_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_DEFAULT_DB_ALIAS ) );
        UPDATE_STRING_DICT1( _moduledict_django__db, (Nuitka_StringObject *)_python_str_plain_DataError, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_3d07a776757bf1a03cf12370baf54363, ((PyModuleObject *)_module_django__db)->md_dict, ((PyModuleObject *)_module_django__db)->md_dict, _python_list_6527ae48ded1d43f68cd129858ccadb6_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_DataError ) );
        UPDATE_STRING_DICT1( _moduledict_django__db, (Nuitka_StringObject *)_python_str_plain_OperationalError, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_3d07a776757bf1a03cf12370baf54363, ((PyModuleObject *)_module_django__db)->md_dict, ((PyModuleObject *)_module_django__db)->md_dict, _python_list_6527ae48ded1d43f68cd129858ccadb6_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_OperationalError ) );
        UPDATE_STRING_DICT1( _moduledict_django__db, (Nuitka_StringObject *)_python_str_plain_IntegrityError, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_3d07a776757bf1a03cf12370baf54363, ((PyModuleObject *)_module_django__db)->md_dict, ((PyModuleObject *)_module_django__db)->md_dict, _python_list_6527ae48ded1d43f68cd129858ccadb6_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_IntegrityError ) );
        UPDATE_STRING_DICT1( _moduledict_django__db, (Nuitka_StringObject *)_python_str_plain_InternalError, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_3d07a776757bf1a03cf12370baf54363, ((PyModuleObject *)_module_django__db)->md_dict, ((PyModuleObject *)_module_django__db)->md_dict, _python_list_6527ae48ded1d43f68cd129858ccadb6_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_InternalError ) );
        UPDATE_STRING_DICT1( _moduledict_django__db, (Nuitka_StringObject *)_python_str_plain_ProgrammingError, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_3d07a776757bf1a03cf12370baf54363, ((PyModuleObject *)_module_django__db)->md_dict, ((PyModuleObject *)_module_django__db)->md_dict, _python_list_6527ae48ded1d43f68cd129858ccadb6_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ProgrammingError ) );
        UPDATE_STRING_DICT1( _moduledict_django__db, (Nuitka_StringObject *)_python_str_plain_NotSupportedError, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_3d07a776757bf1a03cf12370baf54363, ((PyModuleObject *)_module_django__db)->md_dict, ((PyModuleObject *)_module_django__db)->md_dict, _python_list_6527ae48ded1d43f68cd129858ccadb6_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_NotSupportedError ) );
        UPDATE_STRING_DICT1( _moduledict_django__db, (Nuitka_StringObject *)_python_str_plain_DatabaseError, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_3d07a776757bf1a03cf12370baf54363, ((PyModuleObject *)_module_django__db)->md_dict, ((PyModuleObject *)_module_django__db)->md_dict, _python_list_6527ae48ded1d43f68cd129858ccadb6_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_DatabaseError ) );
        UPDATE_STRING_DICT1( _moduledict_django__db, (Nuitka_StringObject *)_python_str_plain_InterfaceError, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_3d07a776757bf1a03cf12370baf54363, ((PyModuleObject *)_module_django__db)->md_dict, ((PyModuleObject *)_module_django__db)->md_dict, _python_list_6527ae48ded1d43f68cd129858ccadb6_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_InterfaceError ) );
        UPDATE_STRING_DICT1( _moduledict_django__db, (Nuitka_StringObject *)_python_str_plain_Error, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_3d07a776757bf1a03cf12370baf54363, ((PyModuleObject *)_module_django__db)->md_dict, ((PyModuleObject *)_module_django__db)->md_dict, _python_list_6527ae48ded1d43f68cd129858ccadb6_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_Error ) );
        UPDATE_STRING_DICT1( _moduledict_django__db, (Nuitka_StringObject *)_python_str_plain_load_backend, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_3d07a776757bf1a03cf12370baf54363, ((PyModuleObject *)_module_django__db)->md_dict, ((PyModuleObject *)_module_django__db)->md_dict, _python_list_6527ae48ded1d43f68cd129858ccadb6_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_load_backend ) );
        UPDATE_STRING_DICT1( _moduledict_django__db, (Nuitka_StringObject *)_python_str_plain_ConnectionHandler, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_3d07a776757bf1a03cf12370baf54363, ((PyModuleObject *)_module_django__db)->md_dict, ((PyModuleObject *)_module_django__db)->md_dict, _python_list_6527ae48ded1d43f68cd129858ccadb6_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ConnectionHandler ) );
        UPDATE_STRING_DICT1( _moduledict_django__db, (Nuitka_StringObject *)_python_str_plain_ConnectionRouter, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_3d07a776757bf1a03cf12370baf54363, ((PyModuleObject *)_module_django__db)->md_dict, ((PyModuleObject *)_module_django__db)->md_dict, _python_list_6527ae48ded1d43f68cd129858ccadb6_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ConnectionRouter ) );
        frame_guard.setLineNumber( 9 );
        UPDATE_STRING_DICT1( _moduledict_django__db, (Nuitka_StringObject *)_python_str_plain_cached_property, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_17c58b9ed63e22a2fe75ba31286ba1f7, ((PyModuleObject *)_module_django__db)->md_dict, ((PyModuleObject *)_module_django__db)->md_dict, _python_list_str_plain_cached_property_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_cached_property ) );
        UPDATE_STRING_DICT0( _moduledict_django__db, (Nuitka_StringObject *)_python_str_plain___all__, _python_tuple_02cea3fb956e8d8ac745bb015e7bce63_tuple );
        frame_guard.setLineNumber( 14 );
        UPDATE_STRING_DICT1( _moduledict_django__db, (Nuitka_StringObject *)_python_str_plain_connections, CALL_FUNCTION_NO_ARGS( _mvar_django__db_ConnectionHandler.asObject0() ) );
        frame_guard.setLineNumber( 16 );
        UPDATE_STRING_DICT1( _moduledict_django__db, (Nuitka_StringObject *)_python_str_plain_router, CALL_FUNCTION_NO_ARGS( _mvar_django__db_ConnectionRouter.asObject0() ) );
        {
            frame_guard.setLineNumber( 27 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_1_DefaultConnectionProxy_of_module_django__db(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db___metaclass__.isInitialized( false ) ? _mvar_django__db___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_DefaultConnectionProxy, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db, (Nuitka_StringObject *)_python_str_plain_DefaultConnectionProxy, _python_tmp_class.asObject() );
        }
        frame_guard.setLineNumber( 42 );
        UPDATE_STRING_DICT1( _moduledict_django__db, (Nuitka_StringObject *)_python_str_plain_connection, CALL_FUNCTION_NO_ARGS( _mvar_django__db_DefaultConnectionProxy.asObject0() ) );
        {
            frame_guard.setLineNumber( 44 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_2_DefaultBackendProxy_of_module_django__db(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db___metaclass__.isInitialized( false ) ? _mvar_django__db___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper0 call7;
                _tmp_python_tmp_class = ( call5.assign( _python_tmp_metaclass.asObject() ), call7.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_str_plain_DefaultBackendProxy, call7.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db, (Nuitka_StringObject *)_python_str_plain_DefaultBackendProxy, _python_tmp_class.asObject() );
        }
        frame_guard.setLineNumber( 64 );
        UPDATE_STRING_DICT1( _moduledict_django__db, (Nuitka_StringObject *)_python_str_plain_backend, CALL_FUNCTION_NO_ARGS( _mvar_django__db_DefaultBackendProxy.asObject0() ) );
        UPDATE_STRING_DICT1( _moduledict_django__db, (Nuitka_StringObject *)_python_str_plain_close_connection, MAKE_FUNCTION_function_3_close_connection_of_module_django__db(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__db, (Nuitka_StringObject *)_python_str_plain_reset_queries, MAKE_FUNCTION_function_4_reset_queries_of_module_django__db(  ) );
        frame_guard.setLineNumber( 83 );
        {
            PyObjectTempKeeper1 call9;
            DECREASE_REFCOUNT( ( call9.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__db_signals.asObject0(), _python_str_plain_request_started ) ).asObject(), _python_str_plain_connect ) ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _mvar_django__db_reset_queries.asObject0() ) ) );
        }
        UPDATE_STRING_DICT1( _moduledict_django__db, (Nuitka_StringObject *)_python_str_plain_close_old_connections, MAKE_FUNCTION_function_5_close_old_connections_of_module_django__db(  ) );
        frame_guard.setLineNumber( 95 );
        {
            PyObjectTempKeeper1 call11;
            DECREASE_REFCOUNT( ( call11.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__db_signals.asObject0(), _python_str_plain_request_started ) ).asObject(), _python_str_plain_connect ) ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), _mvar_django__db_close_old_connections.asObject0() ) ) );
        }
        frame_guard.setLineNumber( 96 );
        {
            PyObjectTempKeeper1 call13;
            DECREASE_REFCOUNT( ( call13.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__db_signals.asObject0(), _python_str_plain_request_finished ) ).asObject(), _python_str_plain_connect ) ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), _mvar_django__db_close_old_connections.asObject0() ) ) );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__db)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }

   return MOD_RETURN_VALUE( _module_django__db );
}
