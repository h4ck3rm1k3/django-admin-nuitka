// Generated code for Python source for module 'django.db.transaction'
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

// The _module_django__db__transaction is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__db__transaction;
PyDictObject *_moduledict_django__db__transaction;

// The module level variables.
static PyObjectGlobalVariable_django__db__transaction _mvar_django__db__transaction_Atomic( &_module_django__db__transaction, &_python_str_plain_Atomic );
static PyObjectGlobalVariable_django__db__transaction _mvar_django__db__transaction_DEFAULT_DB_ALIAS( &_module_django__db__transaction, &_python_str_plain_DEFAULT_DB_ALIAS );
static PyObjectGlobalVariable_django__db__transaction _mvar_django__db__transaction_DatabaseError( &_module_django__db__transaction, &_python_str_plain_DatabaseError );
static PyObjectGlobalVariable_django__db__transaction _mvar_django__db__transaction_PendingDeprecationWarning( &_module_django__db__transaction, &_python_str_plain_PendingDeprecationWarning );
static PyObjectGlobalVariable_django__db__transaction _mvar_django__db__transaction_Transaction( &_module_django__db__transaction, &_python_str_plain_Transaction );
static PyObjectGlobalVariable_django__db__transaction _mvar_django__db__transaction_TransactionManagementError( &_module_django__db__transaction, &_python_str_plain_TransactionManagementError );
static PyObjectGlobalVariable_django__db__transaction _mvar_django__db__transaction___metaclass__( &_module_django__db__transaction, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__db__transaction _mvar_django__db__transaction__non_atomic_requests( &_module_django__db__transaction, &_python_str_plain__non_atomic_requests );
static PyObjectGlobalVariable_django__db__transaction _mvar_django__db__transaction__transaction_func( &_module_django__db__transaction, &_python_str_plain__transaction_func );
static PyObjectGlobalVariable_django__db__transaction _mvar_django__db__transaction_atomic( &_module_django__db__transaction, &_python_str_plain_atomic );
static PyObjectGlobalVariable_django__db__transaction _mvar_django__db__transaction_available_attrs( &_module_django__db__transaction, &_python_str_plain_available_attrs );
static PyObjectGlobalVariable_django__db__transaction _mvar_django__db__transaction_commit( &_module_django__db__transaction, &_python_str_plain_commit );
static PyObjectGlobalVariable_django__db__transaction _mvar_django__db__transaction_connections( &_module_django__db__transaction, &_python_str_plain_connections );
static PyObjectGlobalVariable_django__db__transaction _mvar_django__db__transaction_enter_transaction_management( &_module_django__db__transaction, &_python_str_plain_enter_transaction_management );
static PyObjectGlobalVariable_django__db__transaction _mvar_django__db__transaction_get_connection( &_module_django__db__transaction, &_python_str_plain_get_connection );
static PyObjectGlobalVariable_django__db__transaction _mvar_django__db__transaction_is_dirty( &_module_django__db__transaction, &_python_str_plain_is_dirty );
static PyObjectGlobalVariable_django__db__transaction _mvar_django__db__transaction_leave_transaction_management( &_module_django__db__transaction, &_python_str_plain_leave_transaction_management );
static PyObjectGlobalVariable_django__db__transaction _mvar_django__db__transaction_rollback( &_module_django__db__transaction, &_python_str_plain_rollback );
static PyObjectGlobalVariable_django__db__transaction _mvar_django__db__transaction_set_dirty( &_module_django__db__transaction, &_python_str_plain_set_dirty );
static PyObjectGlobalVariable_django__db__transaction _mvar_django__db__transaction_warnings( &_module_django__db__transaction, &_python_str_plain_warnings );
static PyObjectGlobalVariable_django__db__transaction _mvar_django__db__transaction_wraps( &_module_django__db__transaction, &_python_str_plain_wraps );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_TransactionManagementError_of_module_django__db__transaction(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_21_Atomic_of_module_django__db__transaction(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_25_Transaction_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_10_managed_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_11_commit_unless_managed_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_12_rollback_unless_managed_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_13_get_autocommit_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_14_set_autocommit_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_15_commit_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_16_rollback_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_17_savepoint_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_18_savepoint_rollback_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_19_savepoint_commit_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_21_Atomic_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_25_Transaction_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_1_entering_of_function_27_autocommit_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_1_entering_of_function_28_commit_on_success_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_1_entering_of_function_29_commit_manually_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_1_entering_of_function_30_commit_on_success_unless_managed_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_1_inner_of_function_4___call___of_class_21_Atomic_of_module_django__db__transaction( PyObjectSharedLocalVariable &python_closure_func, PyObjectSharedLocalVariable &python_closure_self );


// This structure is for attachment as self of function_1_inner_of_function_4___call___of_class_21_Atomic_of_module_django__db__transaction.
// It is allocated at the time the function object is created.
struct _context_function_1_inner_of_function_4___call___of_class_21_Atomic_of_module_django__db__transaction_t
{
    // The function can access a read-only closure of the creator.
    PyObjectClosureVariable python_closure_func;
    PyObjectClosureVariable python_closure_self;
};

static void _context_function_1_inner_of_function_4___call___of_class_21_Atomic_of_module_django__db__transaction_destructor( void *context_voidptr )
{
    _context_function_1_inner_of_function_4___call___of_class_21_Atomic_of_module_django__db__transaction_t *_python_context = (_context_function_1_inner_of_function_4___call___of_class_21_Atomic_of_module_django__db__transaction_t *)context_voidptr;



    delete _python_context;
}


static PyObject *MAKE_FUNCTION_function_1_inner_of_function_4___call___of_class_25_Transaction_of_module_django__db__transaction( PyObjectSharedLocalVariable &python_closure_func, PyObjectSharedLocalVariable &python_closure_self );


// This structure is for attachment as self of function_1_inner_of_function_4___call___of_class_25_Transaction_of_module_django__db__transaction.
// It is allocated at the time the function object is created.
struct _context_function_1_inner_of_function_4___call___of_class_25_Transaction_of_module_django__db__transaction_t
{
    // The function can access a read-only closure of the creator.
    PyObjectClosureVariable python_closure_func;
    PyObjectClosureVariable python_closure_self;
};

static void _context_function_1_inner_of_function_4___call___of_class_25_Transaction_of_module_django__db__transaction_destructor( void *context_voidptr )
{
    _context_function_1_inner_of_function_4___call___of_class_25_Transaction_of_module_django__db__transaction_t *_python_context = (_context_function_1_inner_of_function_4___call___of_class_25_Transaction_of_module_django__db__transaction_t *)context_voidptr;



    delete _python_context;
}


static PyObject *MAKE_FUNCTION_function_20_clean_savepoints_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_22_atomic_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_23__non_atomic_requests_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_24_non_atomic_requests_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_26__transaction_func_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_27_autocommit_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_28_commit_on_success_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_29_commit_manually_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_2___enter___of_class_21_Atomic_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_2___enter___of_class_25_Transaction_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_2_exiting_of_function_27_autocommit_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_2_exiting_of_function_28_commit_on_success_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_2_exiting_of_function_29_commit_manually_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_2_exiting_of_function_30_commit_on_success_unless_managed_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_2_get_connection_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_30_commit_on_success_unless_managed_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_3___exit___of_class_21_Atomic_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_3___exit___of_class_25_Transaction_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_3_abort_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_4___call___of_class_21_Atomic_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_4___call___of_class_25_Transaction_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_4_enter_transaction_management_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_5_leave_transaction_management_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_6_is_dirty_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_7_set_dirty_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_8_set_clean_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_function_9_is_managed_of_module_django__db__transaction(  );


static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_function_24_non_atomic_requests_of_module_django__db__transaction( PyObjectSharedLocalVariable &python_closure_using );


// This structure is for attachment as self of lambda_1_lambda_of_function_24_non_atomic_requests_of_module_django__db__transaction.
// It is allocated at the time the function object is created.
struct _context_lambda_1_lambda_of_function_24_non_atomic_requests_of_module_django__db__transaction_t
{
    // The function can access a read-only closure of the creator.
    PyObjectClosureVariable python_closure_using;
};

static void _context_lambda_1_lambda_of_function_24_non_atomic_requests_of_module_django__db__transaction_destructor( void *context_voidptr )
{
    _context_lambda_1_lambda_of_function_24_non_atomic_requests_of_module_django__db__transaction_t *_python_context = (_context_lambda_1_lambda_of_function_24_non_atomic_requests_of_module_django__db__transaction_t *)context_voidptr;



    delete _python_context;
}


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_TransactionManagementError_of_module_django__db__transaction(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_transaction );
    _python_var___doc__.assign0( _python_str_digest_2c831671c436c1f80002fb98aebdd472 );
    return _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) );
}


static PyObject *impl_function_2_get_connection_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_using )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );

    // Actual function code.
    static PyFrameObject *frame_function_2_get_connection_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_2_get_connection_of_module_django__db__transaction ) )
    {
        if ( frame_function_2_get_connection_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_get_connection_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_2_get_connection_of_module_django__db__transaction );
        }

        frame_function_2_get_connection_of_module_django__db__transaction = MAKE_FRAME( _codeobj_02759f0576d7ed969d75b6dda0074cbb, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_2_get_connection_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_2_get_connection_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 39 );
        if ( ( _python_var_using.asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 40 );
            _python_var_using.assign0( _mvar_django__db__transaction_DEFAULT_DB_ALIAS.asObject0() );
        }
        frame_guard.setLineNumber( 41 );
        {
            PyObjectTempKeeper0 subscr1;
            return ( subscr1.assign( _mvar_django__db__transaction_connections.asObject0() ), LOOKUP_SUBSCRIPT( subscr1.asObject0(), _python_var_using.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_using.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_2_get_connection_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_2_get_connection_of_module_django__db__transaction );
           frame_function_2_get_connection_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_get_connection_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_using = NULL;
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
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "get_connection() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "get_connection() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

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
    if (unlikely( args_given > 1 ))
    {
        if ( 1 == 1 )
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
            PyErr_Format( PyExc_TypeError, "get_connection() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_connection() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_connection() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_connection() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_connection() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_connection() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_connection() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "get_connection() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_connection() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_connection() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 0 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_using == NULL )
    {
        _python_par_using = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_using );
    }


    return impl_function_2_get_connection_of_module_django__db__transaction( self, _python_par_using );

error_exit:;

    Py_XDECREF( _python_par_using );

    return NULL;
}

static PyObject *dparse_function_2_get_connection_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2_get_connection_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_get_connection_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_abort_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_using )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );

    // Actual function code.
    static PyFrameObject *frame_function_3_abort_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_3_abort_of_module_django__db__transaction ) )
    {
        if ( frame_function_3_abort_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_abort_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_3_abort_of_module_django__db__transaction );
        }

        frame_function_3_abort_of_module_django__db__transaction = MAKE_FRAME( _codeobj_c07df686a2ae9a8e55e1fa20fe763d90, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_3_abort_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_3_abort_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 57 );
        {
            PyObjectTempKeeper0 call1;
            DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( _mvar_django__db__transaction_get_connection.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_using.asObject() ) ) ).asObject(), _python_str_plain_abort ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_using.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_3_abort_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_3_abort_of_module_django__db__transaction );
           frame_function_3_abort_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_3_abort_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_using = NULL;
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
                PyErr_Format( PyExc_TypeError, "abort() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "abort() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "abort() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "abort() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "abort() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "abort() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "abort() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "abort() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "abort() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "abort() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "abort() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "abort() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "abort() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "abort() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "abort() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "abort() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "abort() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 0 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_using == NULL )
    {
        _python_par_using = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_using );
    }


    return impl_function_3_abort_of_module_django__db__transaction( self, _python_par_using );

error_exit:;

    Py_XDECREF( _python_par_using );

    return NULL;
}

static PyObject *dparse_function_3_abort_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3_abort_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_abort_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_enter_transaction_management_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_managed, PyObject *_python_par_using, PyObject *_python_par_forced )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_managed( _python_str_plain_managed, _python_par_managed );
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );
    PyObjectLocalParameterVariableNoDel _python_var_forced( _python_str_plain_forced, _python_par_forced );

    // Actual function code.
    static PyFrameObject *frame_function_4_enter_transaction_management_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_4_enter_transaction_management_of_module_django__db__transaction ) )
    {
        if ( frame_function_4_enter_transaction_management_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_enter_transaction_management_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_4_enter_transaction_management_of_module_django__db__transaction );
        }

        frame_function_4_enter_transaction_management_of_module_django__db__transaction = MAKE_FRAME( _codeobj_2fff357819847679a9a7bf7fc8d84803, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_4_enter_transaction_management_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_4_enter_transaction_management_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 69 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper0 call4;
            DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( _mvar_django__db__transaction_get_connection.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_using.asObject() ) ) ).asObject(), _python_str_plain_enter_transaction_management ) ), call4.assign( _python_var_managed.asObject() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), call4.asObject0(), _python_var_forced.asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_forced.updateLocalsDict( _python_var_using.updateLocalsDict( _python_var_managed.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_4_enter_transaction_management_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_4_enter_transaction_management_of_module_django__db__transaction );
           frame_function_4_enter_transaction_management_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_4_enter_transaction_management_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_managed = NULL;
    PyObject *_python_par_using = NULL;
    PyObject *_python_par_forced = NULL;
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
                PyErr_Format( PyExc_TypeError, "enter_transaction_management() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_managed == key )
            {
                if (unlikely( _python_par_managed ))
                {
                    PyErr_Format( PyExc_TypeError, "enter_transaction_management() got multiple values for keyword argument 'managed'" );
                    goto error_exit;
                }

                _python_par_managed = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "enter_transaction_management() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_forced == key )
            {
                if (unlikely( _python_par_forced ))
                {
                    PyErr_Format( PyExc_TypeError, "enter_transaction_management() got multiple values for keyword argument 'forced'" );
                    goto error_exit;
                }

                _python_par_forced = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_managed, key ) )
            {
                if (unlikely( _python_par_managed ))
                {
                    PyErr_Format( PyExc_TypeError, "enter_transaction_management() got multiple values for keyword argument 'managed'" );
                    goto error_exit;
                }

                _python_par_managed = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "enter_transaction_management() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_forced, key ) )
            {
                if (unlikely( _python_par_forced ))
                {
                    PyErr_Format( PyExc_TypeError, "enter_transaction_management() got multiple values for keyword argument 'forced'" );
                    goto error_exit;
                }

                _python_par_forced = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "enter_transaction_management() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "enter_transaction_management() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "enter_transaction_management() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "enter_transaction_management() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "enter_transaction_management() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "enter_transaction_management() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "enter_transaction_management() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "enter_transaction_management() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "enter_transaction_management() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 0 ))
    {
        if ( 3 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "enter_transaction_management() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "enter_transaction_management() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "enter_transaction_management() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "enter_transaction_management() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 3 ? args_given : 3;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_managed != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "enter_transaction_management() got multiple values for keyword argument 'managed'" );
             goto error_exit;
         }

        _python_par_managed = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "enter_transaction_management() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_forced != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "enter_transaction_management() got multiple values for keyword argument 'forced'" );
             goto error_exit;
         }

        _python_par_forced = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_managed == NULL )
    {
        _python_par_managed = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_managed );
    }
    if ( _python_par_using == NULL )
    {
        _python_par_using = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_using );
    }
    if ( _python_par_forced == NULL )
    {
        _python_par_forced = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 2 ) );
        assertObject( _python_par_forced );
    }


    return impl_function_4_enter_transaction_management_of_module_django__db__transaction( self, _python_par_managed, _python_par_using, _python_par_forced );

error_exit:;

    Py_XDECREF( _python_par_managed );
    Py_XDECREF( _python_par_using );
    Py_XDECREF( _python_par_forced );

    return NULL;
}

static PyObject *dparse_function_4_enter_transaction_management_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_4_enter_transaction_management_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_enter_transaction_management_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_leave_transaction_management_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_using )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );

    // Actual function code.
    static PyFrameObject *frame_function_5_leave_transaction_management_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_5_leave_transaction_management_of_module_django__db__transaction ) )
    {
        if ( frame_function_5_leave_transaction_management_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_leave_transaction_management_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_5_leave_transaction_management_of_module_django__db__transaction );
        }

        frame_function_5_leave_transaction_management_of_module_django__db__transaction = MAKE_FRAME( _codeobj_05f13c15beedded58c09e2aed287cf2c, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_5_leave_transaction_management_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_5_leave_transaction_management_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 77 );
        {
            PyObjectTempKeeper0 call1;
            DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( _mvar_django__db__transaction_get_connection.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_using.asObject() ) ) ).asObject(), _python_str_plain_leave_transaction_management ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_using.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_5_leave_transaction_management_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_5_leave_transaction_management_of_module_django__db__transaction );
           frame_function_5_leave_transaction_management_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_5_leave_transaction_management_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_using = NULL;
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
                PyErr_Format( PyExc_TypeError, "leave_transaction_management() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "leave_transaction_management() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "leave_transaction_management() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "leave_transaction_management() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "leave_transaction_management() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "leave_transaction_management() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "leave_transaction_management() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "leave_transaction_management() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "leave_transaction_management() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "leave_transaction_management() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "leave_transaction_management() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "leave_transaction_management() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "leave_transaction_management() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "leave_transaction_management() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "leave_transaction_management() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "leave_transaction_management() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "leave_transaction_management() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 0 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_using == NULL )
    {
        _python_par_using = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_using );
    }


    return impl_function_5_leave_transaction_management_of_module_django__db__transaction( self, _python_par_using );

error_exit:;

    Py_XDECREF( _python_par_using );

    return NULL;
}

static PyObject *dparse_function_5_leave_transaction_management_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_5_leave_transaction_management_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_leave_transaction_management_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_is_dirty_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_using )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );

    // Actual function code.
    static PyFrameObject *frame_function_6_is_dirty_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_6_is_dirty_of_module_django__db__transaction ) )
    {
        if ( frame_function_6_is_dirty_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6_is_dirty_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_6_is_dirty_of_module_django__db__transaction );
        }

        frame_function_6_is_dirty_of_module_django__db__transaction = MAKE_FRAME( _codeobj_bb4e7eef8fbd68799b66cdfa56111b65, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_6_is_dirty_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_6_is_dirty_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 84 );
        {
            PyObjectTempKeeper0 call1;
            return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( _mvar_django__db__transaction_get_connection.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_using.asObject() ) ) ).asObject(), _python_str_plain_is_dirty ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_using.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_6_is_dirty_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_6_is_dirty_of_module_django__db__transaction );
           frame_function_6_is_dirty_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_6_is_dirty_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_using = NULL;
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
                PyErr_Format( PyExc_TypeError, "is_dirty() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "is_dirty() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "is_dirty() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "is_dirty() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "is_dirty() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "is_dirty() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "is_dirty() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "is_dirty() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "is_dirty() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "is_dirty() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "is_dirty() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "is_dirty() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "is_dirty() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "is_dirty() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "is_dirty() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "is_dirty() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "is_dirty() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 0 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_using == NULL )
    {
        _python_par_using = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_using );
    }


    return impl_function_6_is_dirty_of_module_django__db__transaction( self, _python_par_using );

error_exit:;

    Py_XDECREF( _python_par_using );

    return NULL;
}

static PyObject *dparse_function_6_is_dirty_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_6_is_dirty_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_is_dirty_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7_set_dirty_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_using )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );

    // Actual function code.
    static PyFrameObject *frame_function_7_set_dirty_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_7_set_dirty_of_module_django__db__transaction ) )
    {
        if ( frame_function_7_set_dirty_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_7_set_dirty_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_7_set_dirty_of_module_django__db__transaction );
        }

        frame_function_7_set_dirty_of_module_django__db__transaction = MAKE_FRAME( _codeobj_0675021933ec3016fcd9ed3ad583926c, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_7_set_dirty_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_7_set_dirty_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 92 );
        {
            PyObjectTempKeeper0 call1;
            DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( _mvar_django__db__transaction_get_connection.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_using.asObject() ) ) ).asObject(), _python_str_plain_set_dirty ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_using.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_7_set_dirty_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_7_set_dirty_of_module_django__db__transaction );
           frame_function_7_set_dirty_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_7_set_dirty_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_using = NULL;
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
                PyErr_Format( PyExc_TypeError, "set_dirty() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "set_dirty() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "set_dirty() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "set_dirty() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "set_dirty() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "set_dirty() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "set_dirty() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "set_dirty() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "set_dirty() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "set_dirty() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "set_dirty() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "set_dirty() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "set_dirty() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "set_dirty() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "set_dirty() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "set_dirty() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "set_dirty() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 0 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_using == NULL )
    {
        _python_par_using = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_using );
    }


    return impl_function_7_set_dirty_of_module_django__db__transaction( self, _python_par_using );

error_exit:;

    Py_XDECREF( _python_par_using );

    return NULL;
}

static PyObject *dparse_function_7_set_dirty_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_7_set_dirty_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7_set_dirty_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8_set_clean_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_using )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );

    // Actual function code.
    static PyFrameObject *frame_function_8_set_clean_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_8_set_clean_of_module_django__db__transaction ) )
    {
        if ( frame_function_8_set_clean_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_8_set_clean_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_8_set_clean_of_module_django__db__transaction );
        }

        frame_function_8_set_clean_of_module_django__db__transaction = MAKE_FRAME( _codeobj_e900c18b187891a6ce02df9d3942cd65, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_8_set_clean_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_8_set_clean_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 100 );
        {
            PyObjectTempKeeper0 call1;
            DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( _mvar_django__db__transaction_get_connection.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_using.asObject() ) ) ).asObject(), _python_str_plain_set_clean ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_using.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_8_set_clean_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_8_set_clean_of_module_django__db__transaction );
           frame_function_8_set_clean_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_8_set_clean_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_using = NULL;
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
                PyErr_Format( PyExc_TypeError, "set_clean() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "set_clean() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "set_clean() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "set_clean() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "set_clean() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "set_clean() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "set_clean() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "set_clean() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "set_clean() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "set_clean() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "set_clean() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "set_clean() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "set_clean() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "set_clean() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "set_clean() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "set_clean() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "set_clean() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 0 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_using == NULL )
    {
        _python_par_using = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_using );
    }


    return impl_function_8_set_clean_of_module_django__db__transaction( self, _python_par_using );

error_exit:;

    Py_XDECREF( _python_par_using );

    return NULL;
}

static PyObject *dparse_function_8_set_clean_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_8_set_clean_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_set_clean_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_9_is_managed_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_using )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );

    // Actual function code.
    static PyFrameObject *frame_function_9_is_managed_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_9_is_managed_of_module_django__db__transaction ) )
    {
        if ( frame_function_9_is_managed_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_9_is_managed_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_9_is_managed_of_module_django__db__transaction );
        }

        frame_function_9_is_managed_of_module_django__db__transaction = MAKE_FRAME( _codeobj_82e79c939fd345e5d331e9edc510ec5c, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_9_is_managed_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_9_is_managed_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 103 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__transaction_warnings.asObject0(), _python_str_plain_warn ) ), CALL_FUNCTION( call1.asObject0(), PyObjectTemporary( MAKE_TUPLE2( _python_str_digest_f29f95fb72fedc342623ec648233d629, _mvar_django__db__transaction_PendingDeprecationWarning.asObject0() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_f154c9a58c9419d7e391901d7b7fe49e ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_using.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_9_is_managed_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_9_is_managed_of_module_django__db__transaction );
           frame_function_9_is_managed_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_9_is_managed_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_using = NULL;
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
                PyErr_Format( PyExc_TypeError, "is_managed() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "is_managed() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "is_managed() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "is_managed() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "is_managed() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "is_managed() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "is_managed() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "is_managed() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "is_managed() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "is_managed() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "is_managed() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "is_managed() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "is_managed() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "is_managed() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "is_managed() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "is_managed() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "is_managed() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 0 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_using == NULL )
    {
        _python_par_using = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_using );
    }


    return impl_function_9_is_managed_of_module_django__db__transaction( self, _python_par_using );

error_exit:;

    Py_XDECREF( _python_par_using );

    return NULL;
}

static PyObject *dparse_function_9_is_managed_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_9_is_managed_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_9_is_managed_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_10_managed_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_flag, PyObject *_python_par_using )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_flag( _python_str_plain_flag, _python_par_flag );
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );

    // Actual function code.
    static PyFrameObject *frame_function_10_managed_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_10_managed_of_module_django__db__transaction ) )
    {
        if ( frame_function_10_managed_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_10_managed_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_10_managed_of_module_django__db__transaction );
        }

        frame_function_10_managed_of_module_django__db__transaction = MAKE_FRAME( _codeobj_61dc355ad8d25cae356ecb0bc92cb474, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_10_managed_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_10_managed_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 107 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__transaction_warnings.asObject0(), _python_str_plain_warn ) ), CALL_FUNCTION( call1.asObject0(), PyObjectTemporary( MAKE_TUPLE2( _python_str_digest_eefad32e4779060d19fff0a908ce1a77, _mvar_django__db__transaction_PendingDeprecationWarning.asObject0() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_f154c9a58c9419d7e391901d7b7fe49e ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_using.updateLocalsDict( _python_var_flag.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_10_managed_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_10_managed_of_module_django__db__transaction );
           frame_function_10_managed_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_10_managed_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_flag = NULL;
    PyObject *_python_par_using = NULL;
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
                PyErr_Format( PyExc_TypeError, "managed() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_flag == key )
            {
                if (unlikely( _python_par_flag ))
                {
                    PyErr_Format( PyExc_TypeError, "managed() got multiple values for keyword argument 'flag'" );
                    goto error_exit;
                }

                _python_par_flag = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "managed() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_flag, key ) )
            {
                if (unlikely( _python_par_flag ))
                {
                    PyErr_Format( PyExc_TypeError, "managed() got multiple values for keyword argument 'flag'" );
                    goto error_exit;
                }

                _python_par_flag = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "managed() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "managed() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "managed() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "managed() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "managed() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "managed() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "managed() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "managed() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "managed() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "managed() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "managed() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "managed() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "managed() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "managed() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_flag != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "managed() got multiple values for keyword argument 'flag'" );
             goto error_exit;
         }

        _python_par_flag = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "managed() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_flag == NULL )
    {
        _python_par_flag = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_flag );
    }
    if ( _python_par_using == NULL )
    {
        _python_par_using = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_using );
    }


    return impl_function_10_managed_of_module_django__db__transaction( self, _python_par_flag, _python_par_using );

error_exit:;

    Py_XDECREF( _python_par_flag );
    Py_XDECREF( _python_par_using );

    return NULL;
}

static PyObject *dparse_function_10_managed_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_10_managed_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_10_managed_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_11_commit_unless_managed_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_using )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );

    // Actual function code.
    static PyFrameObject *frame_function_11_commit_unless_managed_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_11_commit_unless_managed_of_module_django__db__transaction ) )
    {
        if ( frame_function_11_commit_unless_managed_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_11_commit_unless_managed_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_11_commit_unless_managed_of_module_django__db__transaction );
        }

        frame_function_11_commit_unless_managed_of_module_django__db__transaction = MAKE_FRAME( _codeobj_88e20ab4cf5e7e57921739b721b79711, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_11_commit_unless_managed_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_11_commit_unless_managed_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 111 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__transaction_warnings.asObject0(), _python_str_plain_warn ) ), CALL_FUNCTION( call1.asObject0(), PyObjectTemporary( MAKE_TUPLE2( _python_str_digest_3e4f7048cbfb4a86d7d4a9aecdbdf2c8, _mvar_django__db__transaction_PendingDeprecationWarning.asObject0() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_f154c9a58c9419d7e391901d7b7fe49e ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_using.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_11_commit_unless_managed_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_11_commit_unless_managed_of_module_django__db__transaction );
           frame_function_11_commit_unless_managed_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_11_commit_unless_managed_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_using = NULL;
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
                PyErr_Format( PyExc_TypeError, "commit_unless_managed() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "commit_unless_managed() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "commit_unless_managed() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "commit_unless_managed() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "commit_unless_managed() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "commit_unless_managed() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "commit_unless_managed() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "commit_unless_managed() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "commit_unless_managed() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "commit_unless_managed() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "commit_unless_managed() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "commit_unless_managed() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "commit_unless_managed() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "commit_unless_managed() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "commit_unless_managed() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "commit_unless_managed() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "commit_unless_managed() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 0 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_using == NULL )
    {
        _python_par_using = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_using );
    }


    return impl_function_11_commit_unless_managed_of_module_django__db__transaction( self, _python_par_using );

error_exit:;

    Py_XDECREF( _python_par_using );

    return NULL;
}

static PyObject *dparse_function_11_commit_unless_managed_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_11_commit_unless_managed_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_11_commit_unless_managed_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_12_rollback_unless_managed_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_using )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );

    // Actual function code.
    static PyFrameObject *frame_function_12_rollback_unless_managed_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_12_rollback_unless_managed_of_module_django__db__transaction ) )
    {
        if ( frame_function_12_rollback_unless_managed_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_12_rollback_unless_managed_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_12_rollback_unless_managed_of_module_django__db__transaction );
        }

        frame_function_12_rollback_unless_managed_of_module_django__db__transaction = MAKE_FRAME( _codeobj_71cc77e12f0d4a15c3a8545a0c5922ea, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_12_rollback_unless_managed_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_12_rollback_unless_managed_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 115 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__transaction_warnings.asObject0(), _python_str_plain_warn ) ), CALL_FUNCTION( call1.asObject0(), PyObjectTemporary( MAKE_TUPLE2( _python_str_digest_627cb0748dc27abf29a53d81dbbd83a7, _mvar_django__db__transaction_PendingDeprecationWarning.asObject0() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_f154c9a58c9419d7e391901d7b7fe49e ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_using.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_12_rollback_unless_managed_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_12_rollback_unless_managed_of_module_django__db__transaction );
           frame_function_12_rollback_unless_managed_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_12_rollback_unless_managed_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_using = NULL;
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
                PyErr_Format( PyExc_TypeError, "rollback_unless_managed() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "rollback_unless_managed() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "rollback_unless_managed() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "rollback_unless_managed() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "rollback_unless_managed() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "rollback_unless_managed() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "rollback_unless_managed() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "rollback_unless_managed() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "rollback_unless_managed() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "rollback_unless_managed() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "rollback_unless_managed() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "rollback_unless_managed() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "rollback_unless_managed() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "rollback_unless_managed() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "rollback_unless_managed() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "rollback_unless_managed() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "rollback_unless_managed() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 0 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_using == NULL )
    {
        _python_par_using = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_using );
    }


    return impl_function_12_rollback_unless_managed_of_module_django__db__transaction( self, _python_par_using );

error_exit:;

    Py_XDECREF( _python_par_using );

    return NULL;
}

static PyObject *dparse_function_12_rollback_unless_managed_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_12_rollback_unless_managed_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_12_rollback_unless_managed_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_13_get_autocommit_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_using )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );

    // Actual function code.
    static PyFrameObject *frame_function_13_get_autocommit_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_13_get_autocommit_of_module_django__db__transaction ) )
    {
        if ( frame_function_13_get_autocommit_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_13_get_autocommit_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_13_get_autocommit_of_module_django__db__transaction );
        }

        frame_function_13_get_autocommit_of_module_django__db__transaction = MAKE_FRAME( _codeobj_fbcf193221d8863efe11b92bac81def8, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_13_get_autocommit_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_13_get_autocommit_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 126 );
        {
            PyObjectTempKeeper0 call1;
            return LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( _mvar_django__db__transaction_get_connection.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_using.asObject() ) ) ).asObject(), _python_str_plain_autocommit );
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
        frame_guard.getFrame0()->f_locals = _python_var_using.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_13_get_autocommit_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_13_get_autocommit_of_module_django__db__transaction );
           frame_function_13_get_autocommit_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_13_get_autocommit_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_using = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_autocommit() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "get_autocommit() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "get_autocommit() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_autocommit() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_autocommit() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_autocommit() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_autocommit() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_autocommit() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_autocommit() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_autocommit() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_autocommit() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_autocommit() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_autocommit() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_autocommit() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "get_autocommit() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_autocommit() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_autocommit() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 0 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_using == NULL )
    {
        _python_par_using = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_using );
    }


    return impl_function_13_get_autocommit_of_module_django__db__transaction( self, _python_par_using );

error_exit:;

    Py_XDECREF( _python_par_using );

    return NULL;
}

static PyObject *dparse_function_13_get_autocommit_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_13_get_autocommit_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_13_get_autocommit_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_14_set_autocommit_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_autocommit, PyObject *_python_par_using )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_autocommit( _python_str_plain_autocommit, _python_par_autocommit );
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );

    // Actual function code.
    static PyFrameObject *frame_function_14_set_autocommit_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_14_set_autocommit_of_module_django__db__transaction ) )
    {
        if ( frame_function_14_set_autocommit_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_14_set_autocommit_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_14_set_autocommit_of_module_django__db__transaction );
        }

        frame_function_14_set_autocommit_of_module_django__db__transaction = MAKE_FRAME( _codeobj_cd6c822141084337a4b8ae561f056993, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_14_set_autocommit_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_14_set_autocommit_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 132 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper1 call3;
            return ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( _mvar_django__db__transaction_get_connection.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_using.asObject() ) ) ).asObject(), _python_str_plain_set_autocommit ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_autocommit.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_using.updateLocalsDict( _python_var_autocommit.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_14_set_autocommit_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_14_set_autocommit_of_module_django__db__transaction );
           frame_function_14_set_autocommit_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_14_set_autocommit_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_autocommit = NULL;
    PyObject *_python_par_using = NULL;
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
                PyErr_Format( PyExc_TypeError, "set_autocommit() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_autocommit == key )
            {
                if (unlikely( _python_par_autocommit ))
                {
                    PyErr_Format( PyExc_TypeError, "set_autocommit() got multiple values for keyword argument 'autocommit'" );
                    goto error_exit;
                }

                _python_par_autocommit = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "set_autocommit() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_autocommit, key ) )
            {
                if (unlikely( _python_par_autocommit ))
                {
                    PyErr_Format( PyExc_TypeError, "set_autocommit() got multiple values for keyword argument 'autocommit'" );
                    goto error_exit;
                }

                _python_par_autocommit = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "set_autocommit() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "set_autocommit() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "set_autocommit() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "set_autocommit() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "set_autocommit() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "set_autocommit() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "set_autocommit() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "set_autocommit() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "set_autocommit() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "set_autocommit() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "set_autocommit() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "set_autocommit() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "set_autocommit() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "set_autocommit() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_autocommit != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "set_autocommit() got multiple values for keyword argument 'autocommit'" );
             goto error_exit;
         }

        _python_par_autocommit = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "set_autocommit() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_using == NULL )
    {
        _python_par_using = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_using );
    }


    return impl_function_14_set_autocommit_of_module_django__db__transaction( self, _python_par_autocommit, _python_par_using );

error_exit:;

    Py_XDECREF( _python_par_autocommit );
    Py_XDECREF( _python_par_using );

    return NULL;
}

static PyObject *dparse_function_14_set_autocommit_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_14_set_autocommit_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_14_set_autocommit_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_15_commit_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_using )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );

    // Actual function code.
    static PyFrameObject *frame_function_15_commit_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_15_commit_of_module_django__db__transaction ) )
    {
        if ( frame_function_15_commit_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_15_commit_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_15_commit_of_module_django__db__transaction );
        }

        frame_function_15_commit_of_module_django__db__transaction = MAKE_FRAME( _codeobj_271c41710f2f28e7d1db96d2326e11cb, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_15_commit_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_15_commit_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 138 );
        {
            PyObjectTempKeeper0 call1;
            DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( _mvar_django__db__transaction_get_connection.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_using.asObject() ) ) ).asObject(), _python_str_plain_commit ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_using.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_15_commit_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_15_commit_of_module_django__db__transaction );
           frame_function_15_commit_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_15_commit_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_using = NULL;
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
                PyErr_Format( PyExc_TypeError, "commit() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "commit() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "commit() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "commit() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "commit() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "commit() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "commit() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "commit() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "commit() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "commit() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "commit() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "commit() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "commit() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "commit() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "commit() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "commit() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "commit() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 0 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_using == NULL )
    {
        _python_par_using = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_using );
    }


    return impl_function_15_commit_of_module_django__db__transaction( self, _python_par_using );

error_exit:;

    Py_XDECREF( _python_par_using );

    return NULL;
}

static PyObject *dparse_function_15_commit_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_15_commit_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_15_commit_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_16_rollback_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_using )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );

    // Actual function code.
    static PyFrameObject *frame_function_16_rollback_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_16_rollback_of_module_django__db__transaction ) )
    {
        if ( frame_function_16_rollback_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_16_rollback_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_16_rollback_of_module_django__db__transaction );
        }

        frame_function_16_rollback_of_module_django__db__transaction = MAKE_FRAME( _codeobj_1bec85e82650d1ccd5396ce345fccc70, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_16_rollback_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_16_rollback_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 144 );
        {
            PyObjectTempKeeper0 call1;
            DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( _mvar_django__db__transaction_get_connection.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_using.asObject() ) ) ).asObject(), _python_str_plain_rollback ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_using.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_16_rollback_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_16_rollback_of_module_django__db__transaction );
           frame_function_16_rollback_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_16_rollback_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_using = NULL;
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
                PyErr_Format( PyExc_TypeError, "rollback() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "rollback() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "rollback() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "rollback() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "rollback() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "rollback() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "rollback() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "rollback() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "rollback() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "rollback() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "rollback() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "rollback() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "rollback() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "rollback() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "rollback() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "rollback() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "rollback() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 0 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_using == NULL )
    {
        _python_par_using = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_using );
    }


    return impl_function_16_rollback_of_module_django__db__transaction( self, _python_par_using );

error_exit:;

    Py_XDECREF( _python_par_using );

    return NULL;
}

static PyObject *dparse_function_16_rollback_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_16_rollback_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_16_rollback_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_17_savepoint_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_using )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );

    // Actual function code.
    static PyFrameObject *frame_function_17_savepoint_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_17_savepoint_of_module_django__db__transaction ) )
    {
        if ( frame_function_17_savepoint_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_17_savepoint_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_17_savepoint_of_module_django__db__transaction );
        }

        frame_function_17_savepoint_of_module_django__db__transaction = MAKE_FRAME( _codeobj_8782bb54c6fdcb3209b3bafcd27cfee9, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_17_savepoint_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_17_savepoint_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 152 );
        {
            PyObjectTempKeeper0 call1;
            return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( _mvar_django__db__transaction_get_connection.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_using.asObject() ) ) ).asObject(), _python_str_plain_savepoint ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_using.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_17_savepoint_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_17_savepoint_of_module_django__db__transaction );
           frame_function_17_savepoint_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_17_savepoint_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_using = NULL;
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
                PyErr_Format( PyExc_TypeError, "savepoint() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "savepoint() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "savepoint() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "savepoint() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "savepoint() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "savepoint() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "savepoint() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "savepoint() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "savepoint() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "savepoint() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "savepoint() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "savepoint() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "savepoint() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "savepoint() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "savepoint() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "savepoint() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "savepoint() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 0 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_using == NULL )
    {
        _python_par_using = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_using );
    }


    return impl_function_17_savepoint_of_module_django__db__transaction( self, _python_par_using );

error_exit:;

    Py_XDECREF( _python_par_using );

    return NULL;
}

static PyObject *dparse_function_17_savepoint_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_17_savepoint_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_17_savepoint_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_18_savepoint_rollback_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_sid, PyObject *_python_par_using )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_sid( _python_str_plain_sid, _python_par_sid );
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );

    // Actual function code.
    static PyFrameObject *frame_function_18_savepoint_rollback_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_18_savepoint_rollback_of_module_django__db__transaction ) )
    {
        if ( frame_function_18_savepoint_rollback_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_18_savepoint_rollback_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_18_savepoint_rollback_of_module_django__db__transaction );
        }

        frame_function_18_savepoint_rollback_of_module_django__db__transaction = MAKE_FRAME( _codeobj_e2914acb0a1aa5410133918c1444c85e, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_18_savepoint_rollback_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_18_savepoint_rollback_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 159 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper1 call3;
            DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( _mvar_django__db__transaction_get_connection.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_using.asObject() ) ) ).asObject(), _python_str_plain_savepoint_rollback ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_sid.asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_using.updateLocalsDict( _python_var_sid.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_18_savepoint_rollback_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_18_savepoint_rollback_of_module_django__db__transaction );
           frame_function_18_savepoint_rollback_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_18_savepoint_rollback_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_sid = NULL;
    PyObject *_python_par_using = NULL;
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
                PyErr_Format( PyExc_TypeError, "savepoint_rollback() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_sid == key )
            {
                if (unlikely( _python_par_sid ))
                {
                    PyErr_Format( PyExc_TypeError, "savepoint_rollback() got multiple values for keyword argument 'sid'" );
                    goto error_exit;
                }

                _python_par_sid = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "savepoint_rollback() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_sid, key ) )
            {
                if (unlikely( _python_par_sid ))
                {
                    PyErr_Format( PyExc_TypeError, "savepoint_rollback() got multiple values for keyword argument 'sid'" );
                    goto error_exit;
                }

                _python_par_sid = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "savepoint_rollback() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "savepoint_rollback() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "savepoint_rollback() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "savepoint_rollback() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "savepoint_rollback() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "savepoint_rollback() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "savepoint_rollback() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "savepoint_rollback() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "savepoint_rollback() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "savepoint_rollback() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "savepoint_rollback() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "savepoint_rollback() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "savepoint_rollback() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "savepoint_rollback() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_sid != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "savepoint_rollback() got multiple values for keyword argument 'sid'" );
             goto error_exit;
         }

        _python_par_sid = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "savepoint_rollback() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_using == NULL )
    {
        _python_par_using = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_using );
    }


    return impl_function_18_savepoint_rollback_of_module_django__db__transaction( self, _python_par_sid, _python_par_using );

error_exit:;

    Py_XDECREF( _python_par_sid );
    Py_XDECREF( _python_par_using );

    return NULL;
}

static PyObject *dparse_function_18_savepoint_rollback_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_18_savepoint_rollback_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_18_savepoint_rollback_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_19_savepoint_commit_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_sid, PyObject *_python_par_using )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_sid( _python_str_plain_sid, _python_par_sid );
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );

    // Actual function code.
    static PyFrameObject *frame_function_19_savepoint_commit_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_19_savepoint_commit_of_module_django__db__transaction ) )
    {
        if ( frame_function_19_savepoint_commit_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_19_savepoint_commit_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_19_savepoint_commit_of_module_django__db__transaction );
        }

        frame_function_19_savepoint_commit_of_module_django__db__transaction = MAKE_FRAME( _codeobj_7ac6f41e7b9381da1256f69536f23471, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_19_savepoint_commit_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_19_savepoint_commit_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 166 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper1 call3;
            DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( _mvar_django__db__transaction_get_connection.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_using.asObject() ) ) ).asObject(), _python_str_plain_savepoint_commit ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_sid.asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_using.updateLocalsDict( _python_var_sid.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_19_savepoint_commit_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_19_savepoint_commit_of_module_django__db__transaction );
           frame_function_19_savepoint_commit_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_19_savepoint_commit_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_sid = NULL;
    PyObject *_python_par_using = NULL;
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
                PyErr_Format( PyExc_TypeError, "savepoint_commit() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_sid == key )
            {
                if (unlikely( _python_par_sid ))
                {
                    PyErr_Format( PyExc_TypeError, "savepoint_commit() got multiple values for keyword argument 'sid'" );
                    goto error_exit;
                }

                _python_par_sid = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "savepoint_commit() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_sid, key ) )
            {
                if (unlikely( _python_par_sid ))
                {
                    PyErr_Format( PyExc_TypeError, "savepoint_commit() got multiple values for keyword argument 'sid'" );
                    goto error_exit;
                }

                _python_par_sid = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "savepoint_commit() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "savepoint_commit() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "savepoint_commit() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "savepoint_commit() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "savepoint_commit() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "savepoint_commit() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "savepoint_commit() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "savepoint_commit() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "savepoint_commit() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "savepoint_commit() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "savepoint_commit() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "savepoint_commit() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "savepoint_commit() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "savepoint_commit() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_sid != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "savepoint_commit() got multiple values for keyword argument 'sid'" );
             goto error_exit;
         }

        _python_par_sid = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "savepoint_commit() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_using == NULL )
    {
        _python_par_using = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_using );
    }


    return impl_function_19_savepoint_commit_of_module_django__db__transaction( self, _python_par_sid, _python_par_using );

error_exit:;

    Py_XDECREF( _python_par_sid );
    Py_XDECREF( _python_par_using );

    return NULL;
}

static PyObject *dparse_function_19_savepoint_commit_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_19_savepoint_commit_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_19_savepoint_commit_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_20_clean_savepoints_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_using )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );

    // Actual function code.
    static PyFrameObject *frame_function_20_clean_savepoints_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_20_clean_savepoints_of_module_django__db__transaction ) )
    {
        if ( frame_function_20_clean_savepoints_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_20_clean_savepoints_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_20_clean_savepoints_of_module_django__db__transaction );
        }

        frame_function_20_clean_savepoints_of_module_django__db__transaction = MAKE_FRAME( _codeobj_fc54fb88b7c6587b8a3c36892cc668e2, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_20_clean_savepoints_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_20_clean_savepoints_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 172 );
        {
            PyObjectTempKeeper0 call1;
            DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( _mvar_django__db__transaction_get_connection.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_using.asObject() ) ) ).asObject(), _python_str_plain_clean_savepoints ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_using.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_20_clean_savepoints_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_20_clean_savepoints_of_module_django__db__transaction );
           frame_function_20_clean_savepoints_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_20_clean_savepoints_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_using = NULL;
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
                PyErr_Format( PyExc_TypeError, "clean_savepoints() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "clean_savepoints() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "clean_savepoints() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "clean_savepoints() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "clean_savepoints() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "clean_savepoints() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "clean_savepoints() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "clean_savepoints() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "clean_savepoints() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "clean_savepoints() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "clean_savepoints() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "clean_savepoints() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "clean_savepoints() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "clean_savepoints() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "clean_savepoints() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "clean_savepoints() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "clean_savepoints() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 0 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_using == NULL )
    {
        _python_par_using = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_using );
    }


    return impl_function_20_clean_savepoints_of_module_django__db__transaction( self, _python_par_using );

error_exit:;

    Py_XDECREF( _python_par_using );

    return NULL;
}

static PyObject *dparse_function_20_clean_savepoints_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_20_clean_savepoints_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_20_clean_savepoints_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_21_Atomic_of_module_django__db__transaction(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var___enter__( _python_str_plain___enter__ );
    PyObjectLocalVariable _python_var___exit__( _python_str_plain___exit__ );
    PyObjectLocalVariable _python_var___call__( _python_str_plain___call__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_transaction );
    _python_var___doc__.assign0( _python_str_digest_e0ac33c750bc36066eaa4d300de655ea );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_21_Atomic_of_module_django__db__transaction(  ) );
    _python_var___enter__.assign1( MAKE_FUNCTION_function_2___enter___of_class_21_Atomic_of_module_django__db__transaction(  ) );
    _python_var___exit__.assign1( MAKE_FUNCTION_function_3___exit___of_class_21_Atomic_of_module_django__db__transaction(  ) );
    _python_var___call__.assign1( MAKE_FUNCTION_function_4___call___of_class_21_Atomic_of_module_django__db__transaction(  ) );
    return _python_var___call__.updateLocalsDict( _python_var___exit__.updateLocalsDict( _python_var___enter__.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_21_Atomic_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_using, PyObject *_python_par_savepoint )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );
    PyObjectLocalParameterVariableNoDel _python_var_savepoint( _python_str_plain_savepoint, _python_par_savepoint );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_21_Atomic_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_21_Atomic_of_module_django__db__transaction ) )
    {
        if ( frame_function_1___init___of_class_21_Atomic_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_21_Atomic_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_1___init___of_class_21_Atomic_of_module_django__db__transaction );
        }

        frame_function_1___init___of_class_21_Atomic_of_module_django__db__transaction = MAKE_FRAME( _codeobj_d027f857bbca23681819e01e25d5e617, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_21_Atomic_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_21_Atomic_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 206 );
        {
                PyObject *tmp_identifier = _python_var_using.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_using );
        }
        frame_guard.setLineNumber( 207 );
        {
                PyObject *tmp_identifier = _python_var_savepoint.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_savepoint );
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
        frame_guard.getFrame0()->f_locals = _python_var_savepoint.updateLocalsDict( _python_var_using.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_21_Atomic_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_1___init___of_class_21_Atomic_of_module_django__db__transaction );
           frame_function_1___init___of_class_21_Atomic_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_21_Atomic_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_using = NULL;
    PyObject *_python_par_savepoint = NULL;
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
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_savepoint == key )
            {
                if (unlikely( _python_par_savepoint ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'savepoint'" );
                    goto error_exit;
                }

                _python_par_savepoint = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_savepoint, key ) )
            {
                if (unlikely( _python_par_savepoint ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'savepoint'" );
                    goto error_exit;
                }

                _python_par_savepoint = value;

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
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_savepoint != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'savepoint'" );
             goto error_exit;
         }

        _python_par_savepoint = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_1___init___of_class_21_Atomic_of_module_django__db__transaction( self, _python_par_self, _python_par_using, _python_par_savepoint );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_using );
    Py_XDECREF( _python_par_savepoint );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_21_Atomic_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_1___init___of_class_21_Atomic_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_21_Atomic_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___enter___of_class_21_Atomic_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalVariable _python_var_connection( _python_str_plain_connection );
    PyObjectLocalVariable _python_var_sid( _python_str_plain_sid );

    // Actual function code.
    static PyFrameObject *frame_function_2___enter___of_class_21_Atomic_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_2___enter___of_class_21_Atomic_of_module_django__db__transaction ) )
    {
        if ( frame_function_2___enter___of_class_21_Atomic_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2___enter___of_class_21_Atomic_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_2___enter___of_class_21_Atomic_of_module_django__db__transaction );
        }

        frame_function_2___enter___of_class_21_Atomic_of_module_django__db__transaction = MAKE_FRAME( _codeobj_406f75fde706034b6066107745879aae, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_2___enter___of_class_21_Atomic_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_2___enter___of_class_21_Atomic_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 210 );
        {
            PyObjectTempKeeper0 call1;
            _python_var_connection.assign1( ( call1.assign( _mvar_django__db__transaction_get_connection.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_using ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 214 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_connection.asObject(), _python_str_plain_ensure_connection ) ).asObject() ) );
        frame_guard.setLineNumber( 216 );
        if ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_connection.asObject(), _python_str_plain_in_atomic_block ) ).asObject() ) )) )
        {
            frame_guard.setLineNumber( 218 );
            SET_ATTRIBUTE( Py_True, _python_var_connection.asObject(), _python_str_plain_commit_on_exit );
            frame_guard.setLineNumber( 219 );
            SET_ATTRIBUTE( Py_False, _python_var_connection.asObject(), _python_str_plain_needs_rollback );
            frame_guard.setLineNumber( 220 );
            if ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_connection.asObject(), _python_str_plain_autocommit ) ).asObject() ) )) )
            {
                frame_guard.setLineNumber( 225 );
                if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_connection.asObject(), _python_str_plain_features ) ).asObject(), _python_str_plain_autocommits_when_autocommit_is_off ) ).asObject() ) )
                {
                    frame_guard.setLineNumber( 226 );
                    {
                            PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_ARGS( _mvar_django__db__transaction_TransactionManagementError.asObject0(), _python_str_digest_6b96323c8ff29013c1e374978994e325 ) );
                            RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                    }
                }
                frame_guard.setLineNumber( 232 );
                if ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_savepoint ) ).asObject() ) )) )
                {
                    frame_guard.setLineNumber( 233 );
                    {
                            PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_ARGS( _mvar_django__db__transaction_TransactionManagementError.asObject0(), _python_str_digest_677e6cd15ad08dd076a50993b2192371 ) );
                            RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                    }
                }
                frame_guard.setLineNumber( 239 );
                SET_ATTRIBUTE( Py_True, _python_var_connection.asObject(), _python_str_plain_in_atomic_block );
                frame_guard.setLineNumber( 240 );
                SET_ATTRIBUTE( Py_False, _python_var_connection.asObject(), _python_str_plain_commit_on_exit );
            }
        }
        frame_guard.setLineNumber( 242 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_connection.asObject(), _python_str_plain_in_atomic_block ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 247 );
            if ( ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_savepoint ) ).asObject() ) && (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_connection.asObject(), _python_str_plain_needs_rollback ) ).asObject() ) )) ) )
            {
                frame_guard.setLineNumber( 248 );
                _python_var_sid.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_connection.asObject(), _python_str_plain_savepoint ) ).asObject() ) );
                frame_guard.setLineNumber( 249 );
                {
                    PyObjectTempKeeper1 call3;
                    DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_connection.asObject(), _python_str_plain_savepoint_ids ) ).asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_sid.asObject() ) ) );
                }
            }
            else
            {
                frame_guard.setLineNumber( 251 );
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_connection.asObject(), _python_str_plain_savepoint_ids ) ).asObject(), _python_str_plain_append ) ).asObject(), Py_None ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 259 );
            if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_connection.asObject(), _python_str_plain_features ) ).asObject(), _python_str_plain_autocommits_when_autocommit_is_off ) ).asObject() ) )
            {
                frame_guard.setLineNumber( 260 );
                DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_connection.asObject(), _python_str_plain__start_transaction_under_autocommit ) ).asObject() ) );
                frame_guard.setLineNumber( 261 );
                SET_ATTRIBUTE( Py_False, _python_var_connection.asObject(), _python_str_plain_autocommit );
            }
            else
            {
                frame_guard.setLineNumber( 263 );
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_connection.asObject(), _python_str_plain_set_autocommit ) ).asObject(), Py_False ) );
            }
            frame_guard.setLineNumber( 264 );
            SET_ATTRIBUTE( Py_True, _python_var_connection.asObject(), _python_str_plain_in_atomic_block );
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
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( _python_var_sid.updateLocalsDict( _python_var_connection.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_2___enter___of_class_21_Atomic_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_2___enter___of_class_21_Atomic_of_module_django__db__transaction );
           frame_function_2___enter___of_class_21_Atomic_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2___enter___of_class_21_Atomic_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_2___enter___of_class_21_Atomic_of_module_django__db__transaction( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2___enter___of_class_21_Atomic_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2___enter___of_class_21_Atomic_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___enter___of_class_21_Atomic_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3___exit___of_class_21_Atomic_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_exc_type, PyObject *_python_par_exc_value, PyObject *_python_par_traceback )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_exc_type( _python_str_plain_exc_type, _python_par_exc_type );
    PyObjectLocalParameterVariableNoDel _python_var_exc_value( _python_str_plain_exc_value, _python_par_exc_value );
    PyObjectLocalParameterVariableNoDel _python_var_traceback( _python_str_plain_traceback, _python_par_traceback );
    PyObjectLocalVariable _python_var_connection( _python_str_plain_connection );
    PyObjectLocalVariable _python_var_sid( _python_str_plain_sid );

    // Actual function code.
    static PyFrameObject *frame_function_3___exit___of_class_21_Atomic_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_3___exit___of_class_21_Atomic_of_module_django__db__transaction ) )
    {
        if ( frame_function_3___exit___of_class_21_Atomic_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3___exit___of_class_21_Atomic_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_3___exit___of_class_21_Atomic_of_module_django__db__transaction );
        }

        frame_function_3___exit___of_class_21_Atomic_of_module_django__db__transaction = MAKE_FRAME( _codeobj_8cbf1ddc02da17376bfb39d5775e0b5b, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_3___exit___of_class_21_Atomic_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_3___exit___of_class_21_Atomic_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 267 );
        {
            PyObjectTempKeeper0 call1;
            _python_var_connection.assign1( ( call1.assign( _mvar_django__db__transaction_get_connection.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_using ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 269 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_connection.asObject(), _python_str_plain_savepoint_ids ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 270 );
            _python_var_sid.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_connection.asObject(), _python_str_plain_savepoint_ids ) ).asObject(), _python_str_plain_pop ) ).asObject() ) );
        }
        else
        {
            frame_guard.setLineNumber( 273 );
            SET_ATTRIBUTE( Py_False, _python_var_connection.asObject(), _python_str_plain_in_atomic_block );
        }
        frame_guard.setLineNumber( 275 );
        PythonExceptionKeeper _caught_1;


        try
        {
            frame_guard.setLineNumber( 276 );
            if ( ( ( _python_var_exc_value.asObject() == Py_None ) && (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_connection.asObject(), _python_str_plain_needs_rollback ) ).asObject() ) )) ) )
            {
                frame_guard.setLineNumber( 277 );
                if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_connection.asObject(), _python_str_plain_in_atomic_block ) ).asObject() ) )
                {
                    frame_guard.setLineNumber( 279 );
                    if ( ( _python_var_sid.asObject() != Py_None ) )
                    {
                        frame_guard.setLineNumber( 280 );
                        try
                        {
                            frame_guard.setLineNumber( 281 );
                            {
                                PyObjectTempKeeper1 call5;
                                DECREASE_REFCOUNT( ( call5.assign( LOOKUP_ATTRIBUTE( _python_var_connection.asObject(), _python_str_plain_savepoint_commit ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_sid.asObject() ) ) );
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

                            if ( _exception.matches( _mvar_django__db__transaction_DatabaseError.asObject0() ) )
                            {
                                frame_guard.detachFrame();
                                frame_guard.setLineNumber( 283 );
                                {
                                    PyObjectTempKeeper1 call3;
                                    DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( _python_var_connection.asObject(), _python_str_plain_savepoint_rollback ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_sid.asObject() ) ) );
                                }
                                {
                                    PyTracebackObject *tb = _exception.getTraceback();
                                    frame_guard.setLineNumber( tb->tb_lineno );
                                    _exception.setTraceback( tb->tb_next );
                                    tb->tb_next = NULL;

                                    throw;
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
                }
                else
                {
                    frame_guard.setLineNumber( 287 );
                    try
                    {
                        frame_guard.setLineNumber( 288 );
                        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_connection.asObject(), _python_str_plain_commit ) ).asObject() ) );
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

                        if ( _exception.matches( _mvar_django__db__transaction_DatabaseError.asObject0() ) )
                        {
                            frame_guard.detachFrame();
                            frame_guard.setLineNumber( 290 );
                            DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_connection.asObject(), _python_str_plain_rollback ) ).asObject() ) );
                            {
                                PyTracebackObject *tb = _exception.getTraceback();
                                frame_guard.setLineNumber( tb->tb_lineno );
                                _exception.setTraceback( tb->tb_next );
                                tb->tb_next = NULL;

                                throw;
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
            }
            else
            {
                frame_guard.setLineNumber( 295 );
                SET_ATTRIBUTE( Py_False, _python_var_connection.asObject(), _python_str_plain_needs_rollback );
                frame_guard.setLineNumber( 296 );
                if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_connection.asObject(), _python_str_plain_in_atomic_block ) ).asObject() ) )
                {
                    frame_guard.setLineNumber( 299 );
                    if ( ( _python_var_sid.asObject() == Py_None ) )
                    {
                        frame_guard.setLineNumber( 300 );
                        SET_ATTRIBUTE( Py_True, _python_var_connection.asObject(), _python_str_plain_needs_rollback );
                    }
                    else
                    {
                        frame_guard.setLineNumber( 302 );
                        {
                            PyObjectTempKeeper1 call7;
                            DECREASE_REFCOUNT( ( call7.assign( LOOKUP_ATTRIBUTE( _python_var_connection.asObject(), _python_str_plain_savepoint_rollback ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _python_var_sid.asObject() ) ) );
                        }
                    }
                }
                else
                {
                    frame_guard.setLineNumber( 305 );
                    DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_connection.asObject(), _python_str_plain_rollback ) ).asObject() ) );
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
        frame_guard.setLineNumber( 309 );
        if ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_connection.asObject(), _python_str_plain_in_atomic_block ) ).asObject() ) )) )
        {
            frame_guard.setLineNumber( 310 );
            if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_connection.asObject(), _python_str_plain_features ) ).asObject(), _python_str_plain_autocommits_when_autocommit_is_off ) ).asObject() ) )
            {
                frame_guard.setLineNumber( 311 );
                SET_ATTRIBUTE( Py_True, _python_var_connection.asObject(), _python_str_plain_autocommit );
            }
            else
            {
                frame_guard.setLineNumber( 313 );
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_connection.asObject(), _python_str_plain_set_autocommit ) ).asObject(), Py_True ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 315 );
            if ( ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_connection.asObject(), _python_str_plain_savepoint_ids ) ).asObject() ) )) && (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_connection.asObject(), _python_str_plain_commit_on_exit ) ).asObject() ) )) ) )
            {
                frame_guard.setLineNumber( 316 );
                SET_ATTRIBUTE( Py_False, _python_var_connection.asObject(), _python_str_plain_in_atomic_block );
            }
        }
        _caught_1.rethrow();
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
        frame_guard.getFrame0()->f_locals = _python_var_traceback.updateLocalsDict( _python_var_exc_value.updateLocalsDict( _python_var_exc_type.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_sid.updateLocalsDict( _python_var_connection.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3___exit___of_class_21_Atomic_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_3___exit___of_class_21_Atomic_of_module_django__db__transaction );
           frame_function_3___exit___of_class_21_Atomic_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_3___exit___of_class_21_Atomic_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_3___exit___of_class_21_Atomic_of_module_django__db__transaction( self, _python_par_self, _python_par_exc_type, _python_par_exc_value, _python_par_traceback );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_exc_type );
    Py_XDECREF( _python_par_exc_value );
    Py_XDECREF( _python_par_traceback );

    return NULL;
}

static PyObject *dparse_function_3___exit___of_class_21_Atomic_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_3___exit___of_class_21_Atomic_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3___exit___of_class_21_Atomic_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4___call___of_class_21_Atomic_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_func )
{
    // No context is used.

    // Local variable declarations.
    PyObjectSharedLocalVariable _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectSharedLocalVariable _python_var_func( _python_str_plain_func, _python_par_func );
    PyObjectLocalVariable _python_var_inner( _python_str_plain_inner );

    // Actual function code.
    static PyFrameObject *frame_function_4___call___of_class_21_Atomic_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_4___call___of_class_21_Atomic_of_module_django__db__transaction ) )
    {
        if ( frame_function_4___call___of_class_21_Atomic_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4___call___of_class_21_Atomic_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_4___call___of_class_21_Atomic_of_module_django__db__transaction );
        }

        frame_function_4___call___of_class_21_Atomic_of_module_django__db__transaction = MAKE_FRAME( _codeobj_9e1deb10e35ddb407cc21c695a073453, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_4___call___of_class_21_Atomic_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_4___call___of_class_21_Atomic_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 319 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper0 call3;
            PyObjectTempKeeper1 call4;
            _python_var_inner.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( ( call3.assign( _mvar_django__db__transaction_wraps.asObject0() ), call4.assign( MAKE_TUPLE1( _python_var_func.asObject() ) ), CALL_FUNCTION( call3.asObject0(), call4.asObject0(), PyObjectTemporary( MAKE_DICT1( PyObjectTemporary( ( call1.assign( _mvar_django__db__transaction_available_attrs.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_func.asObject() ) ) ).asObject(), _python_str_plain_assigned ) ).asObject() ) ) ).asObject(), PyObjectTemporary( MAKE_FUNCTION_function_1_inner_of_function_4___call___of_class_21_Atomic_of_module_django__db__transaction( _python_var_func, _python_var_self ) ).asObject() ) );
        }
        frame_guard.setLineNumber( 323 );
        return _python_var_inner.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_func.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_inner.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_4___call___of_class_21_Atomic_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_4___call___of_class_21_Atomic_of_module_django__db__transaction );
           frame_function_4___call___of_class_21_Atomic_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4___call___of_class_21_Atomic_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_func = NULL;
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
                PyErr_Format( PyExc_TypeError, "__call__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__call__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_func == key )
            {
                if (unlikely( _python_par_func ))
                {
                    PyErr_Format( PyExc_TypeError, "__call__() got multiple values for keyword argument 'func'" );
                    goto error_exit;
                }

                _python_par_func = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "__call__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_func, key ) )
            {
                if (unlikely( _python_par_func ))
                {
                    PyErr_Format( PyExc_TypeError, "__call__() got multiple values for keyword argument 'func'" );
                    goto error_exit;
                }

                _python_par_func = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__call__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__call__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__call__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__call__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__call__() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__call__() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__call__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__call__() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__call__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__call__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__call__() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "__call__() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__call__() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__call__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_func != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__call__() got multiple values for keyword argument 'func'" );
             goto error_exit;
         }

        _python_par_func = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_4___call___of_class_21_Atomic_of_module_django__db__transaction( self, _python_par_self, _python_par_func );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_func );

    return NULL;
}

static PyObject *dparse_function_4___call___of_class_21_Atomic_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_4___call___of_class_21_Atomic_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4___call___of_class_21_Atomic_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_1_inner_of_function_4___call___of_class_21_Atomic_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // The context of the function.
    struct _context_function_1_inner_of_function_4___call___of_class_21_Atomic_of_module_django__db__transaction_t *_python_context = (struct _context_function_1_inner_of_function_4___call___of_class_21_Atomic_of_module_django__db__transaction_t *)self->m_context;

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_1_inner_of_function_4___call___of_class_21_Atomic_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_1_inner_of_function_4___call___of_class_21_Atomic_of_module_django__db__transaction ) )
    {
        if ( frame_function_1_inner_of_function_4___call___of_class_21_Atomic_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_inner_of_function_4___call___of_class_21_Atomic_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_1_inner_of_function_4___call___of_class_21_Atomic_of_module_django__db__transaction );
        }

        frame_function_1_inner_of_function_4___call___of_class_21_Atomic_of_module_django__db__transaction = MAKE_FRAME( _codeobj_84aacf7ac6846a3dd078af3bd1a008b7, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_1_inner_of_function_4___call___of_class_21_Atomic_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_1_inner_of_function_4___call___of_class_21_Atomic_of_module_django__db__transaction ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 321 );
            PyObject *_python_tmp_with_source = _python_context->python_closure_self.asObject();
            PyObjectTemporary _python_tmp_with_exit( LOOKUP_SPECIAL( _python_tmp_with_source, _python_str_plain___exit__ ) );
            PyObjectTemporary _python_tmp_with_enter( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_SPECIAL( _python_tmp_with_source, _python_str_plain___enter__ ) ).asObject() ) );
            PyObject *_python_tmp_indicator = Py_True;
            PythonExceptionKeeper _caught_1;

            PyObjectTempKeeper1 _return_value_1;

            try
            {
                try
                {
                    frame_guard.setLineNumber( 322 );
                    {
                        PyObjectTempKeeper0 call_tmp1;
                        PyObjectTempKeeper0 call_tmp2;
                        throw ReturnValueException( ( call_tmp1.assign( _python_context->python_closure_func.asObject() ), call_tmp2.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), _python_var_kwargs.asObject1() ) ) );
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
            if ( ( _python_tmp_indicator == Py_True ) )
            {
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( _python_tmp_with_exit.asObject(), Py_None, Py_None, Py_None ) );
            }
            _caught_1.rethrow();
            if ( _return_value_1.isKeeping() )
            {
                return _return_value_1.asObject();
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_context->python_closure_func.updateLocalsDict( _python_context->python_closure_self.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_inner_of_function_4___call___of_class_21_Atomic_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_1_inner_of_function_4___call___of_class_21_Atomic_of_module_django__db__transaction );
           frame_function_1_inner_of_function_4___call___of_class_21_Atomic_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1_inner_of_function_4___call___of_class_21_Atomic_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_args = NULL;
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
                        PyErr_Format( PyExc_TypeError, "inner() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "inner() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "inner() keywords must be strings" );
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

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 0 ))
    {
        if ( 0 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "inner() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "inner() takes at least %d non-keyword arguments (%zd given)", 0, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "inner() takes at least %d arguments (%zd given)", 0, args_given + kw_found );
            }
        }

        goto error_exit;
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 0 )
    {
        _python_par_args = PyTuple_New( args_size - 0 );

        for( Py_ssize_t i = 0; i < args_size - 0; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[0+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_1_inner_of_function_4___call___of_class_21_Atomic_of_module_django__db__transaction( self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_1_inner_of_function_4___call___of_class_21_Atomic_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1_inner_of_function_4___call___of_class_21_Atomic_of_module_django__db__transaction( self, MAKE_TUPLE( &args[ 0 ], size > 0 ? size-0 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_1_inner_of_function_4___call___of_class_21_Atomic_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_22_atomic_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_using, PyObject *_python_par_savepoint )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );
    PyObjectLocalParameterVariableNoDel _python_var_savepoint( _python_str_plain_savepoint, _python_par_savepoint );

    // Actual function code.
    static PyFrameObject *frame_function_22_atomic_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_22_atomic_of_module_django__db__transaction ) )
    {
        if ( frame_function_22_atomic_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_22_atomic_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_22_atomic_of_module_django__db__transaction );
        }

        frame_function_22_atomic_of_module_django__db__transaction = MAKE_FRAME( _codeobj_2cbc45661912e321c72e277454e37be3, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_22_atomic_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_22_atomic_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 329 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_callable ), _python_var_using.asObject() ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 330 );
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call2;
                PyObjectTempKeeper1 call4;
                return ( call4.assign( ( call1.assign( _mvar_django__db__transaction_Atomic.asObject0() ), call2.assign( _mvar_django__db__transaction_DEFAULT_DB_ALIAS.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _python_var_savepoint.asObject() ) ) ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), _python_var_using.asObject() ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 333 );
            {
                PyObjectTempKeeper0 call6;
                PyObjectTempKeeper0 call7;
                return ( call6.assign( _mvar_django__db__transaction_Atomic.asObject0() ), call7.assign( _python_var_using.asObject() ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), call7.asObject0(), _python_var_savepoint.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_savepoint.updateLocalsDict( _python_var_using.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_22_atomic_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_22_atomic_of_module_django__db__transaction );
           frame_function_22_atomic_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_22_atomic_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_using = NULL;
    PyObject *_python_par_savepoint = NULL;
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
                PyErr_Format( PyExc_TypeError, "atomic() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "atomic() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_savepoint == key )
            {
                if (unlikely( _python_par_savepoint ))
                {
                    PyErr_Format( PyExc_TypeError, "atomic() got multiple values for keyword argument 'savepoint'" );
                    goto error_exit;
                }

                _python_par_savepoint = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "atomic() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_savepoint, key ) )
            {
                if (unlikely( _python_par_savepoint ))
                {
                    PyErr_Format( PyExc_TypeError, "atomic() got multiple values for keyword argument 'savepoint'" );
                    goto error_exit;
                }

                _python_par_savepoint = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "atomic() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "atomic() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "atomic() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "atomic() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "atomic() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "atomic() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "atomic() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "atomic() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "atomic() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "atomic() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "atomic() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "atomic() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "atomic() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "atomic() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_savepoint != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "atomic() got multiple values for keyword argument 'savepoint'" );
             goto error_exit;
         }

        _python_par_savepoint = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_using == NULL )
    {
        _python_par_using = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_using );
    }
    if ( _python_par_savepoint == NULL )
    {
        _python_par_savepoint = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_savepoint );
    }


    return impl_function_22_atomic_of_module_django__db__transaction( self, _python_par_using, _python_par_savepoint );

error_exit:;

    Py_XDECREF( _python_par_using );
    Py_XDECREF( _python_par_savepoint );

    return NULL;
}

static PyObject *dparse_function_22_atomic_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_22_atomic_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_22_atomic_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_23__non_atomic_requests_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_view, PyObject *_python_par_using )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_view( _python_str_plain_view, _python_par_view );
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );

    // Actual function code.
    static PyFrameObject *frame_function_23__non_atomic_requests_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_23__non_atomic_requests_of_module_django__db__transaction ) )
    {
        if ( frame_function_23__non_atomic_requests_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_23__non_atomic_requests_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_23__non_atomic_requests_of_module_django__db__transaction );
        }

        frame_function_23__non_atomic_requests_of_module_django__db__transaction = MAKE_FRAME( _codeobj_a785f8fe7400e1dbbca03be345e1cef0, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_23__non_atomic_requests_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_23__non_atomic_requests_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 337 );
        try
        {
            frame_guard.setLineNumber( 338 );
            {
                PyObjectTempKeeper1 call1;
                DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_view.asObject(), _python_str_plain__non_atomic_requests ) ).asObject(), _python_str_plain_add ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_using.asObject() ) ) );
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

            if ( _exception.matches( PyExc_AttributeError ) )
            {
                frame_guard.detachFrame();
                frame_guard.setLineNumber( 340 );
                {
                        PyObjectTemporary tmp_identifier( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_set ), PyObjectTemporary( MAKE_LIST1( _python_var_using.asObject1() ) ).asObject() ) );
                        SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_view.asObject(), _python_str_plain__non_atomic_requests );
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
        frame_guard.setLineNumber( 341 );
        return _python_var_view.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_using.updateLocalsDict( _python_var_view.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_23__non_atomic_requests_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_23__non_atomic_requests_of_module_django__db__transaction );
           frame_function_23__non_atomic_requests_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_23__non_atomic_requests_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_view = NULL;
    PyObject *_python_par_using = NULL;
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
                PyErr_Format( PyExc_TypeError, "_non_atomic_requests() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_view == key )
            {
                if (unlikely( _python_par_view ))
                {
                    PyErr_Format( PyExc_TypeError, "_non_atomic_requests() got multiple values for keyword argument 'view'" );
                    goto error_exit;
                }

                _python_par_view = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "_non_atomic_requests() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_view, key ) )
            {
                if (unlikely( _python_par_view ))
                {
                    PyErr_Format( PyExc_TypeError, "_non_atomic_requests() got multiple values for keyword argument 'view'" );
                    goto error_exit;
                }

                _python_par_view = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "_non_atomic_requests() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_non_atomic_requests() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_non_atomic_requests() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_non_atomic_requests() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_non_atomic_requests() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_non_atomic_requests() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_non_atomic_requests() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_non_atomic_requests() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_non_atomic_requests() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_non_atomic_requests() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_non_atomic_requests() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_non_atomic_requests() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "_non_atomic_requests() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_non_atomic_requests() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_view != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_non_atomic_requests() got multiple values for keyword argument 'view'" );
             goto error_exit;
         }

        _python_par_view = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_non_atomic_requests() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_23__non_atomic_requests_of_module_django__db__transaction( self, _python_par_view, _python_par_using );

error_exit:;

    Py_XDECREF( _python_par_view );
    Py_XDECREF( _python_par_using );

    return NULL;
}

static PyObject *dparse_function_23__non_atomic_requests_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_23__non_atomic_requests_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_23__non_atomic_requests_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_24_non_atomic_requests_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_using )
{
    // No context is used.

    // Local variable declarations.
    PyObjectSharedLocalVariable _python_var_using( _python_str_plain_using, _python_par_using );

    // Actual function code.
    static PyFrameObject *frame_function_24_non_atomic_requests_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_24_non_atomic_requests_of_module_django__db__transaction ) )
    {
        if ( frame_function_24_non_atomic_requests_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_24_non_atomic_requests_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_24_non_atomic_requests_of_module_django__db__transaction );
        }

        frame_function_24_non_atomic_requests_of_module_django__db__transaction = MAKE_FRAME( _codeobj_9dfa720a3372cdc6aa7762ec2c17e488, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_24_non_atomic_requests_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_24_non_atomic_requests_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 345 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_callable ), _python_var_using.asObject() ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 346 );
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call2;
                return ( call1.assign( _mvar_django__db__transaction__non_atomic_requests.asObject0() ), call2.assign( _python_var_using.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _mvar_django__db__transaction_DEFAULT_DB_ALIAS.asObject0() ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 348 );
            if ( ( _python_var_using.asObject() == Py_None ) )
            {
                frame_guard.setLineNumber( 349 );
                _python_var_using.assign0( _mvar_django__db__transaction_DEFAULT_DB_ALIAS.asObject0() );
            }
            return MAKE_FUNCTION_lambda_1_lambda_of_function_24_non_atomic_requests_of_module_django__db__transaction( _python_var_using );
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
        frame_guard.getFrame0()->f_locals = _python_var_using.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_24_non_atomic_requests_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_24_non_atomic_requests_of_module_django__db__transaction );
           frame_function_24_non_atomic_requests_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_24_non_atomic_requests_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_using = NULL;
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
                PyErr_Format( PyExc_TypeError, "non_atomic_requests() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "non_atomic_requests() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "non_atomic_requests() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "non_atomic_requests() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "non_atomic_requests() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "non_atomic_requests() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "non_atomic_requests() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "non_atomic_requests() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "non_atomic_requests() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "non_atomic_requests() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "non_atomic_requests() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "non_atomic_requests() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "non_atomic_requests() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "non_atomic_requests() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "non_atomic_requests() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "non_atomic_requests() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "non_atomic_requests() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 0 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_using == NULL )
    {
        _python_par_using = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_using );
    }


    return impl_function_24_non_atomic_requests_of_module_django__db__transaction( self, _python_par_using );

error_exit:;

    Py_XDECREF( _python_par_using );

    return NULL;
}

static PyObject *dparse_function_24_non_atomic_requests_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_24_non_atomic_requests_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_24_non_atomic_requests_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_lambda_1_lambda_of_function_24_non_atomic_requests_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_view )
{
    // The context of the function.
    struct _context_lambda_1_lambda_of_function_24_non_atomic_requests_of_module_django__db__transaction_t *_python_context = (struct _context_lambda_1_lambda_of_function_24_non_atomic_requests_of_module_django__db__transaction_t *)self->m_context;

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_view( _python_str_plain_view, _python_par_view );

    // Actual function code.
    static PyFrameObject *frame_lambda_1_lambda_of_function_24_non_atomic_requests_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_lambda_1_lambda_of_function_24_non_atomic_requests_of_module_django__db__transaction ) )
    {
        if ( frame_lambda_1_lambda_of_function_24_non_atomic_requests_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for lambda_1_lambda_of_function_24_non_atomic_requests_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_lambda_1_lambda_of_function_24_non_atomic_requests_of_module_django__db__transaction );
        }

        frame_lambda_1_lambda_of_function_24_non_atomic_requests_of_module_django__db__transaction = MAKE_FRAME( _codeobj_bd1eb56cfdf5e2329189bda2644462e4, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_lambda_1_lambda_of_function_24_non_atomic_requests_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_lambda_1_lambda_of_function_24_non_atomic_requests_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 350 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper0 call2;
            return ( call1.assign( _mvar_django__db__transaction__non_atomic_requests.asObject0() ), call2.assign( _python_var_view.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _python_context->python_closure_using.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_view.updateLocalsDict( _python_context->python_closure_using.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_lambda_1_lambda_of_function_24_non_atomic_requests_of_module_django__db__transaction )
        {
           Py_DECREF( frame_lambda_1_lambda_of_function_24_non_atomic_requests_of_module_django__db__transaction );
           frame_lambda_1_lambda_of_function_24_non_atomic_requests_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_lambda_1_lambda_of_function_24_non_atomic_requests_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_view = NULL;
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
                PyErr_Format( PyExc_TypeError, "<lambda>() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_view == key )
            {
                if (unlikely( _python_par_view ))
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'view'" );
                    goto error_exit;
                }

                _python_par_view = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_view, key ) )
            {
                if (unlikely( _python_par_view ))
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'view'" );
                    goto error_exit;
                }

                _python_par_view = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "<lambda>() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "<lambda>() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_view != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'view'" );
             goto error_exit;
         }

        _python_par_view = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_lambda_1_lambda_of_function_24_non_atomic_requests_of_module_django__db__transaction( self, _python_par_view );

error_exit:;

    Py_XDECREF( _python_par_view );

    return NULL;
}

static PyObject *dparse_lambda_1_lambda_of_function_24_non_atomic_requests_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_lambda_1_lambda_of_function_24_non_atomic_requests_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_lambda_1_lambda_of_function_24_non_atomic_requests_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_25_Transaction_of_module_django__db__transaction(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var___enter__( _python_str_plain___enter__ );
    PyObjectLocalVariable _python_var___exit__( _python_str_plain___exit__ );
    PyObjectLocalVariable _python_var___call__( _python_str_plain___call__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_transaction );
    _python_var___doc__.assign0( _python_str_digest_d9af03faeb5d34fd67ac1169f48ab0f7 );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_25_Transaction_of_module_django__db__transaction(  ) );
    _python_var___enter__.assign1( MAKE_FUNCTION_function_2___enter___of_class_25_Transaction_of_module_django__db__transaction(  ) );
    _python_var___exit__.assign1( MAKE_FUNCTION_function_3___exit___of_class_25_Transaction_of_module_django__db__transaction(  ) );
    _python_var___call__.assign1( MAKE_FUNCTION_function_4___call___of_class_25_Transaction_of_module_django__db__transaction(  ) );
    return _python_var___call__.updateLocalsDict( _python_var___exit__.updateLocalsDict( _python_var___enter__.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_25_Transaction_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_entering, PyObject *_python_par_exiting, PyObject *_python_par_using )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_entering( _python_str_plain_entering, _python_par_entering );
    PyObjectLocalParameterVariableNoDel _python_var_exiting( _python_str_plain_exiting, _python_par_exiting );
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_25_Transaction_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_25_Transaction_of_module_django__db__transaction ) )
    {
        if ( frame_function_1___init___of_class_25_Transaction_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_25_Transaction_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_1___init___of_class_25_Transaction_of_module_django__db__transaction );
        }

        frame_function_1___init___of_class_25_Transaction_of_module_django__db__transaction = MAKE_FRAME( _codeobj_723d17625401556c243612ecdbcd6656, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_25_Transaction_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_25_Transaction_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 368 );
        {
                PyObject *tmp_identifier = _python_var_entering.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_entering );
        }
        frame_guard.setLineNumber( 369 );
        {
                PyObject *tmp_identifier = _python_var_exiting.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_exiting );
        }
        frame_guard.setLineNumber( 370 );
        {
                PyObject *tmp_identifier = _python_var_using.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_using );
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
        frame_guard.getFrame0()->f_locals = _python_var_using.updateLocalsDict( _python_var_exiting.updateLocalsDict( _python_var_entering.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_25_Transaction_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_1___init___of_class_25_Transaction_of_module_django__db__transaction );
           frame_function_1___init___of_class_25_Transaction_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_25_Transaction_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_entering = NULL;
    PyObject *_python_par_exiting = NULL;
    PyObject *_python_par_using = NULL;
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
            if ( found == false && _python_str_plain_entering == key )
            {
                if (unlikely( _python_par_entering ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'entering'" );
                    goto error_exit;
                }

                _python_par_entering = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_exiting == key )
            {
                if (unlikely( _python_par_exiting ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'exiting'" );
                    goto error_exit;
                }

                _python_par_exiting = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_entering, key ) )
            {
                if (unlikely( _python_par_entering ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'entering'" );
                    goto error_exit;
                }

                _python_par_entering = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_exiting, key ) )
            {
                if (unlikely( _python_par_exiting ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'exiting'" );
                    goto error_exit;
                }

                _python_par_exiting = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

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
         if (unlikely( _python_par_entering != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'entering'" );
             goto error_exit;
         }

        _python_par_entering = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_exiting != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'exiting'" );
             goto error_exit;
         }

        _python_par_exiting = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 3 ] );
    }


    return impl_function_1___init___of_class_25_Transaction_of_module_django__db__transaction( self, _python_par_self, _python_par_entering, _python_par_exiting, _python_par_using );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_entering );
    Py_XDECREF( _python_par_exiting );
    Py_XDECREF( _python_par_using );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_25_Transaction_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_1___init___of_class_25_Transaction_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_25_Transaction_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___enter___of_class_25_Transaction_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_2___enter___of_class_25_Transaction_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_2___enter___of_class_25_Transaction_of_module_django__db__transaction ) )
    {
        if ( frame_function_2___enter___of_class_25_Transaction_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2___enter___of_class_25_Transaction_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_2___enter___of_class_25_Transaction_of_module_django__db__transaction );
        }

        frame_function_2___enter___of_class_25_Transaction_of_module_django__db__transaction = MAKE_FRAME( _codeobj_0361f81798fd8fdd46f1e68bb3494fa7, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_2___enter___of_class_25_Transaction_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_2___enter___of_class_25_Transaction_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 373 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_entering ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_using ) ).asObject() ) ) );
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

        if ( frame_guard.getFrame0() == frame_function_2___enter___of_class_25_Transaction_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_2___enter___of_class_25_Transaction_of_module_django__db__transaction );
           frame_function_2___enter___of_class_25_Transaction_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2___enter___of_class_25_Transaction_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_2___enter___of_class_25_Transaction_of_module_django__db__transaction( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2___enter___of_class_25_Transaction_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2___enter___of_class_25_Transaction_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___enter___of_class_25_Transaction_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3___exit___of_class_25_Transaction_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_exc_type, PyObject *_python_par_exc_value, PyObject *_python_par_traceback )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_exc_type( _python_str_plain_exc_type, _python_par_exc_type );
    PyObjectLocalParameterVariableNoDel _python_var_exc_value( _python_str_plain_exc_value, _python_par_exc_value );
    PyObjectLocalParameterVariableNoDel _python_var_traceback( _python_str_plain_traceback, _python_par_traceback );

    // Actual function code.
    static PyFrameObject *frame_function_3___exit___of_class_25_Transaction_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_3___exit___of_class_25_Transaction_of_module_django__db__transaction ) )
    {
        if ( frame_function_3___exit___of_class_25_Transaction_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3___exit___of_class_25_Transaction_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_3___exit___of_class_25_Transaction_of_module_django__db__transaction );
        }

        frame_function_3___exit___of_class_25_Transaction_of_module_django__db__transaction = MAKE_FRAME( _codeobj_1f6cfbdda74590d799cd1c3ff82df3b5, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_3___exit___of_class_25_Transaction_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_3___exit___of_class_25_Transaction_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 376 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper0 call2;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_exiting ) ), call2.assign( _python_var_exc_value.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_using ) ).asObject() ) ) );
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

        if ( frame_guard.getFrame0() == frame_function_3___exit___of_class_25_Transaction_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_3___exit___of_class_25_Transaction_of_module_django__db__transaction );
           frame_function_3___exit___of_class_25_Transaction_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_3___exit___of_class_25_Transaction_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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


    return impl_function_3___exit___of_class_25_Transaction_of_module_django__db__transaction( self, _python_par_self, _python_par_exc_type, _python_par_exc_value, _python_par_traceback );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_exc_type );
    Py_XDECREF( _python_par_exc_value );
    Py_XDECREF( _python_par_traceback );

    return NULL;
}

static PyObject *dparse_function_3___exit___of_class_25_Transaction_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_3___exit___of_class_25_Transaction_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3___exit___of_class_25_Transaction_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4___call___of_class_25_Transaction_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_func )
{
    // No context is used.

    // Local variable declarations.
    PyObjectSharedLocalVariable _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectSharedLocalVariable _python_var_func( _python_str_plain_func, _python_par_func );
    PyObjectLocalVariable _python_var_inner( _python_str_plain_inner );

    // Actual function code.
    static PyFrameObject *frame_function_4___call___of_class_25_Transaction_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_4___call___of_class_25_Transaction_of_module_django__db__transaction ) )
    {
        if ( frame_function_4___call___of_class_25_Transaction_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4___call___of_class_25_Transaction_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_4___call___of_class_25_Transaction_of_module_django__db__transaction );
        }

        frame_function_4___call___of_class_25_Transaction_of_module_django__db__transaction = MAKE_FRAME( _codeobj_8df079b8f975f4fedd9a4af96f5ff20e, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_4___call___of_class_25_Transaction_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_4___call___of_class_25_Transaction_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 379 );
        {
            PyObjectTempKeeper0 call1;
            _python_var_inner.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( ( call1.assign( _mvar_django__db__transaction_wraps.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_func.asObject() ) ) ).asObject(), PyObjectTemporary( MAKE_FUNCTION_function_1_inner_of_function_4___call___of_class_25_Transaction_of_module_django__db__transaction( _python_var_func, _python_var_self ) ).asObject() ) );
        }
        frame_guard.setLineNumber( 383 );
        return _python_var_inner.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_func.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_inner.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_4___call___of_class_25_Transaction_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_4___call___of_class_25_Transaction_of_module_django__db__transaction );
           frame_function_4___call___of_class_25_Transaction_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4___call___of_class_25_Transaction_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_func = NULL;
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
                PyErr_Format( PyExc_TypeError, "__call__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__call__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_func == key )
            {
                if (unlikely( _python_par_func ))
                {
                    PyErr_Format( PyExc_TypeError, "__call__() got multiple values for keyword argument 'func'" );
                    goto error_exit;
                }

                _python_par_func = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "__call__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_func, key ) )
            {
                if (unlikely( _python_par_func ))
                {
                    PyErr_Format( PyExc_TypeError, "__call__() got multiple values for keyword argument 'func'" );
                    goto error_exit;
                }

                _python_par_func = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__call__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__call__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__call__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__call__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__call__() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__call__() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__call__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__call__() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__call__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__call__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__call__() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "__call__() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__call__() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__call__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_func != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__call__() got multiple values for keyword argument 'func'" );
             goto error_exit;
         }

        _python_par_func = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_4___call___of_class_25_Transaction_of_module_django__db__transaction( self, _python_par_self, _python_par_func );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_func );

    return NULL;
}

static PyObject *dparse_function_4___call___of_class_25_Transaction_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_4___call___of_class_25_Transaction_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4___call___of_class_25_Transaction_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_1_inner_of_function_4___call___of_class_25_Transaction_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // The context of the function.
    struct _context_function_1_inner_of_function_4___call___of_class_25_Transaction_of_module_django__db__transaction_t *_python_context = (struct _context_function_1_inner_of_function_4___call___of_class_25_Transaction_of_module_django__db__transaction_t *)self->m_context;

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );

    // Actual function code.
    static PyFrameObject *frame_function_1_inner_of_function_4___call___of_class_25_Transaction_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_1_inner_of_function_4___call___of_class_25_Transaction_of_module_django__db__transaction ) )
    {
        if ( frame_function_1_inner_of_function_4___call___of_class_25_Transaction_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_inner_of_function_4___call___of_class_25_Transaction_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_1_inner_of_function_4___call___of_class_25_Transaction_of_module_django__db__transaction );
        }

        frame_function_1_inner_of_function_4___call___of_class_25_Transaction_of_module_django__db__transaction = MAKE_FRAME( _codeobj_fd924252fcb3324913fa77491534376b, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_1_inner_of_function_4___call___of_class_25_Transaction_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_1_inner_of_function_4___call___of_class_25_Transaction_of_module_django__db__transaction ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 381 );
            PyObject *_python_tmp_with_source = _python_context->python_closure_self.asObject();
            PyObjectTemporary _python_tmp_with_exit( LOOKUP_SPECIAL( _python_tmp_with_source, _python_str_plain___exit__ ) );
            PyObjectTemporary _python_tmp_with_enter( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_SPECIAL( _python_tmp_with_source, _python_str_plain___enter__ ) ).asObject() ) );
            PyObject *_python_tmp_indicator = Py_True;
            PythonExceptionKeeper _caught_1;

            PyObjectTempKeeper1 _return_value_1;

            try
            {
                try
                {
                    frame_guard.setLineNumber( 382 );
                    {
                        PyObjectTempKeeper0 call_tmp1;
                        PyObjectTempKeeper0 call_tmp2;
                        throw ReturnValueException( ( call_tmp1.assign( _python_context->python_closure_func.asObject() ), call_tmp2.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), _python_var_kwargs.asObject1() ) ) );
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
            if ( ( _python_tmp_indicator == Py_True ) )
            {
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( _python_tmp_with_exit.asObject(), Py_None, Py_None, Py_None ) );
            }
            _caught_1.rethrow();
            if ( _return_value_1.isKeeping() )
            {
                return _return_value_1.asObject();
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_context->python_closure_func.updateLocalsDict( _python_context->python_closure_self.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_inner_of_function_4___call___of_class_25_Transaction_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_1_inner_of_function_4___call___of_class_25_Transaction_of_module_django__db__transaction );
           frame_function_1_inner_of_function_4___call___of_class_25_Transaction_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1_inner_of_function_4___call___of_class_25_Transaction_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_args = NULL;
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
                        PyErr_Format( PyExc_TypeError, "inner() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "inner() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "inner() keywords must be strings" );
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

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 0 ))
    {
        if ( 0 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "inner() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "inner() takes at least %d non-keyword arguments (%zd given)", 0, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "inner() takes at least %d arguments (%zd given)", 0, args_given + kw_found );
            }
        }

        goto error_exit;
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 0 )
    {
        _python_par_args = PyTuple_New( args_size - 0 );

        for( Py_ssize_t i = 0; i < args_size - 0; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[0+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_1_inner_of_function_4___call___of_class_25_Transaction_of_module_django__db__transaction( self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_1_inner_of_function_4___call___of_class_25_Transaction_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1_inner_of_function_4___call___of_class_25_Transaction_of_module_django__db__transaction( self, MAKE_TUPLE( &args[ 0 ], size > 0 ? size-0 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_1_inner_of_function_4___call___of_class_25_Transaction_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_26__transaction_func_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_entering, PyObject *_python_par_exiting, PyObject *_python_par_using )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_entering( _python_str_plain_entering, _python_par_entering );
    PyObjectLocalParameterVariableNoDel _python_var_exiting( _python_str_plain_exiting, _python_par_exiting );
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );

    // Actual function code.
    static PyFrameObject *frame_function_26__transaction_func_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_26__transaction_func_of_module_django__db__transaction ) )
    {
        if ( frame_function_26__transaction_func_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_26__transaction_func_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_26__transaction_func_of_module_django__db__transaction );
        }

        frame_function_26__transaction_func_of_module_django__db__transaction = MAKE_FRAME( _codeobj_6f21b2a986d8f0b34f7f1c42524b034e, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_26__transaction_func_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_26__transaction_func_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 399 );
        if ( ( _python_var_using.asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 400 );
            _python_var_using.assign0( _mvar_django__db__transaction_DEFAULT_DB_ALIAS.asObject0() );
        }
        frame_guard.setLineNumber( 401 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_callable ), _python_var_using.asObject() ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 402 );
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call2;
                PyObjectTempKeeper0 call3;
                PyObjectTempKeeper1 call5;
                return ( call5.assign( ( call1.assign( _mvar_django__db__transaction_Transaction.asObject0() ), call2.assign( _python_var_entering.asObject() ), call3.assign( _python_var_exiting.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), call3.asObject0(), _mvar_django__db__transaction_DEFAULT_DB_ALIAS.asObject0() ) ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_using.asObject() ) );
            }
        }
        frame_guard.setLineNumber( 403 );
        {
            PyObjectTempKeeper0 call7;
            PyObjectTempKeeper0 call8;
            PyObjectTempKeeper0 call9;
            return ( call7.assign( _mvar_django__db__transaction_Transaction.asObject0() ), call8.assign( _python_var_entering.asObject() ), call9.assign( _python_var_exiting.asObject() ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), call8.asObject0(), call9.asObject0(), _python_var_using.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_using.updateLocalsDict( _python_var_exiting.updateLocalsDict( _python_var_entering.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_26__transaction_func_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_26__transaction_func_of_module_django__db__transaction );
           frame_function_26__transaction_func_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_26__transaction_func_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_entering = NULL;
    PyObject *_python_par_exiting = NULL;
    PyObject *_python_par_using = NULL;
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
                PyErr_Format( PyExc_TypeError, "_transaction_func() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_entering == key )
            {
                if (unlikely( _python_par_entering ))
                {
                    PyErr_Format( PyExc_TypeError, "_transaction_func() got multiple values for keyword argument 'entering'" );
                    goto error_exit;
                }

                _python_par_entering = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_exiting == key )
            {
                if (unlikely( _python_par_exiting ))
                {
                    PyErr_Format( PyExc_TypeError, "_transaction_func() got multiple values for keyword argument 'exiting'" );
                    goto error_exit;
                }

                _python_par_exiting = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "_transaction_func() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_entering, key ) )
            {
                if (unlikely( _python_par_entering ))
                {
                    PyErr_Format( PyExc_TypeError, "_transaction_func() got multiple values for keyword argument 'entering'" );
                    goto error_exit;
                }

                _python_par_entering = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_exiting, key ) )
            {
                if (unlikely( _python_par_exiting ))
                {
                    PyErr_Format( PyExc_TypeError, "_transaction_func() got multiple values for keyword argument 'exiting'" );
                    goto error_exit;
                }

                _python_par_exiting = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "_transaction_func() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_transaction_func() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_transaction_func() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_transaction_func() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_transaction_func() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_transaction_func() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "_transaction_func() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_transaction_func() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "_transaction_func() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_transaction_func() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_transaction_func() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_transaction_func() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "_transaction_func() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_transaction_func() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 3 ? args_given : 3;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_entering != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_transaction_func() got multiple values for keyword argument 'entering'" );
             goto error_exit;
         }

        _python_par_entering = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_exiting != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_transaction_func() got multiple values for keyword argument 'exiting'" );
             goto error_exit;
         }

        _python_par_exiting = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_transaction_func() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_26__transaction_func_of_module_django__db__transaction( self, _python_par_entering, _python_par_exiting, _python_par_using );

error_exit:;

    Py_XDECREF( _python_par_entering );
    Py_XDECREF( _python_par_exiting );
    Py_XDECREF( _python_par_using );

    return NULL;
}

static PyObject *dparse_function_26__transaction_func_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_26__transaction_func_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_26__transaction_func_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_27_autocommit_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_using )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );
    PyObjectLocalVariable _python_var_entering( _python_str_plain_entering );
    PyObjectLocalVariable _python_var_exiting( _python_str_plain_exiting );

    // Actual function code.
    static PyFrameObject *frame_function_27_autocommit_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_27_autocommit_of_module_django__db__transaction ) )
    {
        if ( frame_function_27_autocommit_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_27_autocommit_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_27_autocommit_of_module_django__db__transaction );
        }

        frame_function_27_autocommit_of_module_django__db__transaction = MAKE_FRAME( _codeobj_1bc541ccf35aa16718c6f139fe703927, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_27_autocommit_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_27_autocommit_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 412 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__transaction_warnings.asObject0(), _python_str_plain_warn ) ), CALL_FUNCTION( call1.asObject0(), PyObjectTemporary( MAKE_TUPLE2( _python_str_digest_b13bd64a30cd5c59247f2b4e7ec77b58, _mvar_django__db__transaction_PendingDeprecationWarning.asObject0() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_f154c9a58c9419d7e391901d7b7fe49e ) ).asObject() ) ) );
        }
        _python_var_entering.assign1( MAKE_FUNCTION_function_1_entering_of_function_27_autocommit_of_module_django__db__transaction(  ) );
        _python_var_exiting.assign1( MAKE_FUNCTION_function_2_exiting_of_function_27_autocommit_of_module_django__db__transaction(  ) );
        frame_guard.setLineNumber( 421 );
        {
            PyObjectTempKeeper0 call4;
            PyObjectTempKeeper0 call5;
            PyObjectTempKeeper0 call6;
            return ( call4.assign( _mvar_django__db__transaction__transaction_func.asObject0() ), call5.assign( _python_var_entering.asObject() ), call6.assign( _python_var_exiting.asObject() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), call5.asObject0(), call6.asObject0(), _python_var_using.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_using.updateLocalsDict( _python_var_exiting.updateLocalsDict( _python_var_entering.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_27_autocommit_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_27_autocommit_of_module_django__db__transaction );
           frame_function_27_autocommit_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_27_autocommit_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_using = NULL;
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
                PyErr_Format( PyExc_TypeError, "autocommit() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "autocommit() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "autocommit() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "autocommit() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "autocommit() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "autocommit() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "autocommit() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "autocommit() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "autocommit() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "autocommit() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "autocommit() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "autocommit() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "autocommit() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "autocommit() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "autocommit() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "autocommit() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "autocommit() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 0 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_using == NULL )
    {
        _python_par_using = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_using );
    }


    return impl_function_27_autocommit_of_module_django__db__transaction( self, _python_par_using );

error_exit:;

    Py_XDECREF( _python_par_using );

    return NULL;
}

static PyObject *dparse_function_27_autocommit_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_27_autocommit_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_27_autocommit_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_1_entering_of_function_27_autocommit_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_using )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );

    // Actual function code.
    static PyFrameObject *frame_function_1_entering_of_function_27_autocommit_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_1_entering_of_function_27_autocommit_of_module_django__db__transaction ) )
    {
        if ( frame_function_1_entering_of_function_27_autocommit_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_entering_of_function_27_autocommit_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_1_entering_of_function_27_autocommit_of_module_django__db__transaction );
        }

        frame_function_1_entering_of_function_27_autocommit_of_module_django__db__transaction = MAKE_FRAME( _codeobj_026cce58b93aff68b405c8e96079c6e8, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_1_entering_of_function_27_autocommit_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_1_entering_of_function_27_autocommit_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 416 );
        {
            PyObjectTempKeeper0 call1;
            DECREASE_REFCOUNT( ( call1.assign( _mvar_django__db__transaction_enter_transaction_management.asObject0() ), CALL_FUNCTION( call1.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT2( Py_False, _python_str_plain_managed, _python_var_using.asObject(), _python_str_plain_using ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_using.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_1_entering_of_function_27_autocommit_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_1_entering_of_function_27_autocommit_of_module_django__db__transaction );
           frame_function_1_entering_of_function_27_autocommit_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1_entering_of_function_27_autocommit_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_using = NULL;
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
                PyErr_Format( PyExc_TypeError, "entering() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "entering() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "entering() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "entering() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "entering() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "entering() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "entering() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "entering() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "entering() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "entering() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "entering() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "entering() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "entering() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "entering() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "entering() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "entering() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "entering() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_1_entering_of_function_27_autocommit_of_module_django__db__transaction( self, _python_par_using );

error_exit:;

    Py_XDECREF( _python_par_using );

    return NULL;
}

static PyObject *dparse_function_1_entering_of_function_27_autocommit_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_1_entering_of_function_27_autocommit_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_entering_of_function_27_autocommit_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_exiting_of_function_27_autocommit_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_exc_value, PyObject *_python_par_using )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_exc_value( _python_str_plain_exc_value, _python_par_exc_value );
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );

    // Actual function code.
    static PyFrameObject *frame_function_2_exiting_of_function_27_autocommit_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_2_exiting_of_function_27_autocommit_of_module_django__db__transaction ) )
    {
        if ( frame_function_2_exiting_of_function_27_autocommit_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_exiting_of_function_27_autocommit_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_2_exiting_of_function_27_autocommit_of_module_django__db__transaction );
        }

        frame_function_2_exiting_of_function_27_autocommit_of_module_django__db__transaction = MAKE_FRAME( _codeobj_c3b4d20ed69569882fbb3cb9e08c272e, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_2_exiting_of_function_27_autocommit_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_2_exiting_of_function_27_autocommit_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 419 );
        {
            PyObjectTempKeeper0 call1;
            DECREASE_REFCOUNT( ( call1.assign( _mvar_django__db__transaction_leave_transaction_management.asObject0() ), CALL_FUNCTION( call1.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT1( _python_var_using.asObject(), _python_str_plain_using ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_using.updateLocalsDict( _python_var_exc_value.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_2_exiting_of_function_27_autocommit_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_2_exiting_of_function_27_autocommit_of_module_django__db__transaction );
           frame_function_2_exiting_of_function_27_autocommit_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2_exiting_of_function_27_autocommit_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_exc_value = NULL;
    PyObject *_python_par_using = NULL;
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
                PyErr_Format( PyExc_TypeError, "exiting() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_exc_value == key )
            {
                if (unlikely( _python_par_exc_value ))
                {
                    PyErr_Format( PyExc_TypeError, "exiting() got multiple values for keyword argument 'exc_value'" );
                    goto error_exit;
                }

                _python_par_exc_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "exiting() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_exc_value, key ) )
            {
                if (unlikely( _python_par_exc_value ))
                {
                    PyErr_Format( PyExc_TypeError, "exiting() got multiple values for keyword argument 'exc_value'" );
                    goto error_exit;
                }

                _python_par_exc_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "exiting() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "exiting() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "exiting() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "exiting() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "exiting() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "exiting() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "exiting() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "exiting() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "exiting() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "exiting() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "exiting() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "exiting() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "exiting() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "exiting() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_exc_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "exiting() got multiple values for keyword argument 'exc_value'" );
             goto error_exit;
         }

        _python_par_exc_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "exiting() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_2_exiting_of_function_27_autocommit_of_module_django__db__transaction( self, _python_par_exc_value, _python_par_using );

error_exit:;

    Py_XDECREF( _python_par_exc_value );
    Py_XDECREF( _python_par_using );

    return NULL;
}

static PyObject *dparse_function_2_exiting_of_function_27_autocommit_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2_exiting_of_function_27_autocommit_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_exiting_of_function_27_autocommit_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_28_commit_on_success_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_using )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );
    PyObjectLocalVariable _python_var_entering( _python_str_plain_entering );
    PyObjectLocalVariable _python_var_exiting( _python_str_plain_exiting );

    // Actual function code.
    static PyFrameObject *frame_function_28_commit_on_success_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_28_commit_on_success_of_module_django__db__transaction ) )
    {
        if ( frame_function_28_commit_on_success_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_28_commit_on_success_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_28_commit_on_success_of_module_django__db__transaction );
        }

        frame_function_28_commit_on_success_of_module_django__db__transaction = MAKE_FRAME( _codeobj_26c316d69ae8a7a01d1ea394affb9267, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_28_commit_on_success_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_28_commit_on_success_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 430 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__transaction_warnings.asObject0(), _python_str_plain_warn ) ), CALL_FUNCTION( call1.asObject0(), PyObjectTemporary( MAKE_TUPLE2( _python_str_digest_d76822fb9c5a1cb5302df0f5d158f33c, _mvar_django__db__transaction_PendingDeprecationWarning.asObject0() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_f154c9a58c9419d7e391901d7b7fe49e ) ).asObject() ) ) );
        }
        _python_var_entering.assign1( MAKE_FUNCTION_function_1_entering_of_function_28_commit_on_success_of_module_django__db__transaction(  ) );
        _python_var_exiting.assign1( MAKE_FUNCTION_function_2_exiting_of_function_28_commit_on_success_of_module_django__db__transaction(  ) );
        frame_guard.setLineNumber( 451 );
        {
            PyObjectTempKeeper0 call4;
            PyObjectTempKeeper0 call5;
            PyObjectTempKeeper0 call6;
            return ( call4.assign( _mvar_django__db__transaction__transaction_func.asObject0() ), call5.assign( _python_var_entering.asObject() ), call6.assign( _python_var_exiting.asObject() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), call5.asObject0(), call6.asObject0(), _python_var_using.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_using.updateLocalsDict( _python_var_exiting.updateLocalsDict( _python_var_entering.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_28_commit_on_success_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_28_commit_on_success_of_module_django__db__transaction );
           frame_function_28_commit_on_success_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_28_commit_on_success_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_using = NULL;
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
                PyErr_Format( PyExc_TypeError, "commit_on_success() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "commit_on_success() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "commit_on_success() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "commit_on_success() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "commit_on_success() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "commit_on_success() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "commit_on_success() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "commit_on_success() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "commit_on_success() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "commit_on_success() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "commit_on_success() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "commit_on_success() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "commit_on_success() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "commit_on_success() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "commit_on_success() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "commit_on_success() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "commit_on_success() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 0 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_using == NULL )
    {
        _python_par_using = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_using );
    }


    return impl_function_28_commit_on_success_of_module_django__db__transaction( self, _python_par_using );

error_exit:;

    Py_XDECREF( _python_par_using );

    return NULL;
}

static PyObject *dparse_function_28_commit_on_success_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_28_commit_on_success_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_28_commit_on_success_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_1_entering_of_function_28_commit_on_success_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_using )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );

    // Actual function code.
    static PyFrameObject *frame_function_1_entering_of_function_28_commit_on_success_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_1_entering_of_function_28_commit_on_success_of_module_django__db__transaction ) )
    {
        if ( frame_function_1_entering_of_function_28_commit_on_success_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_entering_of_function_28_commit_on_success_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_1_entering_of_function_28_commit_on_success_of_module_django__db__transaction );
        }

        frame_function_1_entering_of_function_28_commit_on_success_of_module_django__db__transaction = MAKE_FRAME( _codeobj_8a410f0ef0fec487cd2bdc99515f2092, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_1_entering_of_function_28_commit_on_success_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_1_entering_of_function_28_commit_on_success_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 434 );
        {
            PyObjectTempKeeper0 call1;
            DECREASE_REFCOUNT( ( call1.assign( _mvar_django__db__transaction_enter_transaction_management.asObject0() ), CALL_FUNCTION( call1.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT1( _python_var_using.asObject(), _python_str_plain_using ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_using.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_1_entering_of_function_28_commit_on_success_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_1_entering_of_function_28_commit_on_success_of_module_django__db__transaction );
           frame_function_1_entering_of_function_28_commit_on_success_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1_entering_of_function_28_commit_on_success_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_using = NULL;
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
                PyErr_Format( PyExc_TypeError, "entering() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "entering() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "entering() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "entering() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "entering() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "entering() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "entering() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "entering() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "entering() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "entering() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "entering() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "entering() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "entering() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "entering() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "entering() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "entering() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "entering() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_1_entering_of_function_28_commit_on_success_of_module_django__db__transaction( self, _python_par_using );

error_exit:;

    Py_XDECREF( _python_par_using );

    return NULL;
}

static PyObject *dparse_function_1_entering_of_function_28_commit_on_success_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_1_entering_of_function_28_commit_on_success_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_entering_of_function_28_commit_on_success_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_exiting_of_function_28_commit_on_success_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_exc_value, PyObject *_python_par_using )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_exc_value( _python_str_plain_exc_value, _python_par_exc_value );
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );

    // Actual function code.
    static PyFrameObject *frame_function_2_exiting_of_function_28_commit_on_success_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_2_exiting_of_function_28_commit_on_success_of_module_django__db__transaction ) )
    {
        if ( frame_function_2_exiting_of_function_28_commit_on_success_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_exiting_of_function_28_commit_on_success_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_2_exiting_of_function_28_commit_on_success_of_module_django__db__transaction );
        }

        frame_function_2_exiting_of_function_28_commit_on_success_of_module_django__db__transaction = MAKE_FRAME( _codeobj_6ba77c0490adae22b5465fc8a9efd59b, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_2_exiting_of_function_28_commit_on_success_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_2_exiting_of_function_28_commit_on_success_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 437 );
        PythonExceptionKeeper _caught_1;


        try
        {
            frame_guard.setLineNumber( 438 );
            if ( ( _python_var_exc_value.asObject() != Py_None ) )
            {
                frame_guard.setLineNumber( 439 );
                {
                    PyObjectTempKeeper0 call7;
                    if ( CHECK_IF_TRUE( PyObjectTemporary( ( call7.assign( _mvar_django__db__transaction_is_dirty.asObject0() ), CALL_FUNCTION( call7.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT1( _python_var_using.asObject(), _python_str_plain_using ) ).asObject() ) ) ).asObject() ) )
                {
                    frame_guard.setLineNumber( 440 );
                    {
                        PyObjectTempKeeper0 call4;
                        DECREASE_REFCOUNT( ( call4.assign( _mvar_django__db__transaction_rollback.asObject0() ), CALL_FUNCTION( call4.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT1( _python_var_using.asObject(), _python_str_plain_using ) ).asObject() ) ) );
                    }
                }
                }
            }
            else
            {
                frame_guard.setLineNumber( 442 );
                {
                    PyObjectTempKeeper0 call16;
                    if ( CHECK_IF_TRUE( PyObjectTemporary( ( call16.assign( _mvar_django__db__transaction_is_dirty.asObject0() ), CALL_FUNCTION( call16.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT1( _python_var_using.asObject(), _python_str_plain_using ) ).asObject() ) ) ).asObject() ) )
                {
                    frame_guard.setLineNumber( 443 );
                    try
                    {
                        frame_guard.setLineNumber( 444 );
                        {
                            PyObjectTempKeeper0 call13;
                            DECREASE_REFCOUNT( ( call13.assign( _mvar_django__db__transaction_commit.asObject0() ), CALL_FUNCTION( call13.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT1( _python_var_using.asObject(), _python_str_plain_using ) ).asObject() ) ) );
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

                        if (true)
                        {
                            frame_guard.detachFrame();
                            frame_guard.setLineNumber( 446 );
                            {
                                PyObjectTempKeeper0 call10;
                                DECREASE_REFCOUNT( ( call10.assign( _mvar_django__db__transaction_rollback.asObject0() ), CALL_FUNCTION( call10.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT1( _python_var_using.asObject(), _python_str_plain_using ) ).asObject() ) ) );
                            }
                            {
                                PyTracebackObject *tb = _exception.getTraceback();
                                frame_guard.setLineNumber( tb->tb_lineno );
                                _exception.setTraceback( tb->tb_next );
                                tb->tb_next = NULL;

                                throw;
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
        frame_guard.setLineNumber( 449 );
        {
            PyObjectTempKeeper0 call1;
            DECREASE_REFCOUNT( ( call1.assign( _mvar_django__db__transaction_leave_transaction_management.asObject0() ), CALL_FUNCTION( call1.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT1( _python_var_using.asObject(), _python_str_plain_using ) ).asObject() ) ) );
        }
        _caught_1.rethrow();
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
        frame_guard.getFrame0()->f_locals = _python_var_using.updateLocalsDict( _python_var_exc_value.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_2_exiting_of_function_28_commit_on_success_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_2_exiting_of_function_28_commit_on_success_of_module_django__db__transaction );
           frame_function_2_exiting_of_function_28_commit_on_success_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2_exiting_of_function_28_commit_on_success_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_exc_value = NULL;
    PyObject *_python_par_using = NULL;
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
                PyErr_Format( PyExc_TypeError, "exiting() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_exc_value == key )
            {
                if (unlikely( _python_par_exc_value ))
                {
                    PyErr_Format( PyExc_TypeError, "exiting() got multiple values for keyword argument 'exc_value'" );
                    goto error_exit;
                }

                _python_par_exc_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "exiting() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_exc_value, key ) )
            {
                if (unlikely( _python_par_exc_value ))
                {
                    PyErr_Format( PyExc_TypeError, "exiting() got multiple values for keyword argument 'exc_value'" );
                    goto error_exit;
                }

                _python_par_exc_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "exiting() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "exiting() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "exiting() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "exiting() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "exiting() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "exiting() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "exiting() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "exiting() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "exiting() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "exiting() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "exiting() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "exiting() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "exiting() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "exiting() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_exc_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "exiting() got multiple values for keyword argument 'exc_value'" );
             goto error_exit;
         }

        _python_par_exc_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "exiting() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_2_exiting_of_function_28_commit_on_success_of_module_django__db__transaction( self, _python_par_exc_value, _python_par_using );

error_exit:;

    Py_XDECREF( _python_par_exc_value );
    Py_XDECREF( _python_par_using );

    return NULL;
}

static PyObject *dparse_function_2_exiting_of_function_28_commit_on_success_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2_exiting_of_function_28_commit_on_success_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_exiting_of_function_28_commit_on_success_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_29_commit_manually_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_using )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );
    PyObjectLocalVariable _python_var_entering( _python_str_plain_entering );
    PyObjectLocalVariable _python_var_exiting( _python_str_plain_exiting );

    // Actual function code.
    static PyFrameObject *frame_function_29_commit_manually_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_29_commit_manually_of_module_django__db__transaction ) )
    {
        if ( frame_function_29_commit_manually_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_29_commit_manually_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_29_commit_manually_of_module_django__db__transaction );
        }

        frame_function_29_commit_manually_of_module_django__db__transaction = MAKE_FRAME( _codeobj_9c0d2f9ae5016872938b2772b8d3545f, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_29_commit_manually_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_29_commit_manually_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 460 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__db__transaction_warnings.asObject0(), _python_str_plain_warn ) ), CALL_FUNCTION( call1.asObject0(), PyObjectTemporary( MAKE_TUPLE2( _python_str_digest_ff710e40ec8cc77f1441e80b68ee5aca, _mvar_django__db__transaction_PendingDeprecationWarning.asObject0() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_f154c9a58c9419d7e391901d7b7fe49e ) ).asObject() ) ) );
        }
        _python_var_entering.assign1( MAKE_FUNCTION_function_1_entering_of_function_29_commit_manually_of_module_django__db__transaction(  ) );
        _python_var_exiting.assign1( MAKE_FUNCTION_function_2_exiting_of_function_29_commit_manually_of_module_django__db__transaction(  ) );
        frame_guard.setLineNumber( 469 );
        {
            PyObjectTempKeeper0 call4;
            PyObjectTempKeeper0 call5;
            PyObjectTempKeeper0 call6;
            return ( call4.assign( _mvar_django__db__transaction__transaction_func.asObject0() ), call5.assign( _python_var_entering.asObject() ), call6.assign( _python_var_exiting.asObject() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), call5.asObject0(), call6.asObject0(), _python_var_using.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_using.updateLocalsDict( _python_var_exiting.updateLocalsDict( _python_var_entering.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_29_commit_manually_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_29_commit_manually_of_module_django__db__transaction );
           frame_function_29_commit_manually_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_29_commit_manually_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_using = NULL;
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
                PyErr_Format( PyExc_TypeError, "commit_manually() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "commit_manually() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "commit_manually() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "commit_manually() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "commit_manually() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "commit_manually() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "commit_manually() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "commit_manually() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "commit_manually() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "commit_manually() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "commit_manually() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "commit_manually() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "commit_manually() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "commit_manually() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "commit_manually() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "commit_manually() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "commit_manually() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 0 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_using == NULL )
    {
        _python_par_using = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_using );
    }


    return impl_function_29_commit_manually_of_module_django__db__transaction( self, _python_par_using );

error_exit:;

    Py_XDECREF( _python_par_using );

    return NULL;
}

static PyObject *dparse_function_29_commit_manually_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_29_commit_manually_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_29_commit_manually_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_1_entering_of_function_29_commit_manually_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_using )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );

    // Actual function code.
    static PyFrameObject *frame_function_1_entering_of_function_29_commit_manually_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_1_entering_of_function_29_commit_manually_of_module_django__db__transaction ) )
    {
        if ( frame_function_1_entering_of_function_29_commit_manually_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_entering_of_function_29_commit_manually_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_1_entering_of_function_29_commit_manually_of_module_django__db__transaction );
        }

        frame_function_1_entering_of_function_29_commit_manually_of_module_django__db__transaction = MAKE_FRAME( _codeobj_b9c892115003a7ba074c55d47f1fd5ed, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_1_entering_of_function_29_commit_manually_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_1_entering_of_function_29_commit_manually_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 464 );
        {
            PyObjectTempKeeper0 call1;
            DECREASE_REFCOUNT( ( call1.assign( _mvar_django__db__transaction_enter_transaction_management.asObject0() ), CALL_FUNCTION( call1.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT1( _python_var_using.asObject(), _python_str_plain_using ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_using.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_1_entering_of_function_29_commit_manually_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_1_entering_of_function_29_commit_manually_of_module_django__db__transaction );
           frame_function_1_entering_of_function_29_commit_manually_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1_entering_of_function_29_commit_manually_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_using = NULL;
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
                PyErr_Format( PyExc_TypeError, "entering() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "entering() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "entering() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "entering() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "entering() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "entering() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "entering() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "entering() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "entering() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "entering() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "entering() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "entering() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "entering() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "entering() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "entering() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "entering() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "entering() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_1_entering_of_function_29_commit_manually_of_module_django__db__transaction( self, _python_par_using );

error_exit:;

    Py_XDECREF( _python_par_using );

    return NULL;
}

static PyObject *dparse_function_1_entering_of_function_29_commit_manually_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_1_entering_of_function_29_commit_manually_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_entering_of_function_29_commit_manually_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_exiting_of_function_29_commit_manually_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_exc_value, PyObject *_python_par_using )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_exc_value( _python_str_plain_exc_value, _python_par_exc_value );
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );

    // Actual function code.
    static PyFrameObject *frame_function_2_exiting_of_function_29_commit_manually_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_2_exiting_of_function_29_commit_manually_of_module_django__db__transaction ) )
    {
        if ( frame_function_2_exiting_of_function_29_commit_manually_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_exiting_of_function_29_commit_manually_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_2_exiting_of_function_29_commit_manually_of_module_django__db__transaction );
        }

        frame_function_2_exiting_of_function_29_commit_manually_of_module_django__db__transaction = MAKE_FRAME( _codeobj_aeaee4dd2c1f74236646d744cc5d7e25, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_2_exiting_of_function_29_commit_manually_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_2_exiting_of_function_29_commit_manually_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 467 );
        {
            PyObjectTempKeeper0 call1;
            DECREASE_REFCOUNT( ( call1.assign( _mvar_django__db__transaction_leave_transaction_management.asObject0() ), CALL_FUNCTION( call1.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT1( _python_var_using.asObject(), _python_str_plain_using ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_using.updateLocalsDict( _python_var_exc_value.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_2_exiting_of_function_29_commit_manually_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_2_exiting_of_function_29_commit_manually_of_module_django__db__transaction );
           frame_function_2_exiting_of_function_29_commit_manually_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2_exiting_of_function_29_commit_manually_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_exc_value = NULL;
    PyObject *_python_par_using = NULL;
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
                PyErr_Format( PyExc_TypeError, "exiting() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_exc_value == key )
            {
                if (unlikely( _python_par_exc_value ))
                {
                    PyErr_Format( PyExc_TypeError, "exiting() got multiple values for keyword argument 'exc_value'" );
                    goto error_exit;
                }

                _python_par_exc_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "exiting() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_exc_value, key ) )
            {
                if (unlikely( _python_par_exc_value ))
                {
                    PyErr_Format( PyExc_TypeError, "exiting() got multiple values for keyword argument 'exc_value'" );
                    goto error_exit;
                }

                _python_par_exc_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "exiting() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "exiting() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "exiting() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "exiting() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "exiting() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "exiting() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "exiting() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "exiting() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "exiting() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "exiting() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "exiting() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "exiting() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "exiting() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "exiting() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_exc_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "exiting() got multiple values for keyword argument 'exc_value'" );
             goto error_exit;
         }

        _python_par_exc_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "exiting() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_2_exiting_of_function_29_commit_manually_of_module_django__db__transaction( self, _python_par_exc_value, _python_par_using );

error_exit:;

    Py_XDECREF( _python_par_exc_value );
    Py_XDECREF( _python_par_using );

    return NULL;
}

static PyObject *dparse_function_2_exiting_of_function_29_commit_manually_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2_exiting_of_function_29_commit_manually_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_exiting_of_function_29_commit_manually_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_30_commit_on_success_unless_managed_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_using, PyObject *_python_par_savepoint )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );
    PyObjectLocalParameterVariableNoDel _python_var_savepoint( _python_str_plain_savepoint, _python_par_savepoint );
    PyObjectLocalVariable _python_var_connection( _python_str_plain_connection );
    PyObjectLocalVariable _python_var_entering( _python_str_plain_entering );
    PyObjectLocalVariable _python_var_exiting( _python_str_plain_exiting );

    // Actual function code.
    static PyFrameObject *frame_function_30_commit_on_success_unless_managed_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_30_commit_on_success_unless_managed_of_module_django__db__transaction ) )
    {
        if ( frame_function_30_commit_on_success_unless_managed_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_30_commit_on_success_unless_managed_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_30_commit_on_success_unless_managed_of_module_django__db__transaction );
        }

        frame_function_30_commit_on_success_unless_managed_of_module_django__db__transaction = MAKE_FRAME( _codeobj_b6efdc648755bff7f5ef0caaee1509d0, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_30_commit_on_success_unless_managed_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_30_commit_on_success_unless_managed_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 482 );
        {
            PyObjectTempKeeper0 call1;
            _python_var_connection.assign1( ( call1.assign( _mvar_django__db__transaction_get_connection.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_using.asObject() ) ) );
        }
        frame_guard.setLineNumber( 483 );
        if ( ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_connection.asObject(), _python_str_plain_autocommit ) ).asObject() ) || CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_connection.asObject(), _python_str_plain_in_atomic_block ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 484 );
            {
                PyObjectTempKeeper0 call3;
                PyObjectTempKeeper0 call4;
                return ( call3.assign( _mvar_django__db__transaction_atomic.asObject0() ), call4.assign( _python_var_using.asObject() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), call4.asObject0(), _python_var_savepoint.asObject() ) );
            }
        }
        else
        {
            _python_var_entering.assign1( MAKE_FUNCTION_function_1_entering_of_function_30_commit_on_success_unless_managed_of_module_django__db__transaction(  ) );
            _python_var_exiting.assign1( MAKE_FUNCTION_function_2_exiting_of_function_30_commit_on_success_unless_managed_of_module_django__db__transaction(  ) );
            frame_guard.setLineNumber( 492 );
            {
                PyObjectTempKeeper0 call6;
                PyObjectTempKeeper0 call7;
                PyObjectTempKeeper0 call8;
                return ( call6.assign( _mvar_django__db__transaction__transaction_func.asObject0() ), call7.assign( _python_var_entering.asObject() ), call8.assign( _python_var_exiting.asObject() ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), call7.asObject0(), call8.asObject0(), _python_var_using.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_savepoint.updateLocalsDict( _python_var_using.updateLocalsDict( _python_var_exiting.updateLocalsDict( _python_var_entering.updateLocalsDict( _python_var_connection.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_30_commit_on_success_unless_managed_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_30_commit_on_success_unless_managed_of_module_django__db__transaction );
           frame_function_30_commit_on_success_unless_managed_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_30_commit_on_success_unless_managed_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_using = NULL;
    PyObject *_python_par_savepoint = NULL;
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
                PyErr_Format( PyExc_TypeError, "commit_on_success_unless_managed() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "commit_on_success_unless_managed() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_savepoint == key )
            {
                if (unlikely( _python_par_savepoint ))
                {
                    PyErr_Format( PyExc_TypeError, "commit_on_success_unless_managed() got multiple values for keyword argument 'savepoint'" );
                    goto error_exit;
                }

                _python_par_savepoint = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "commit_on_success_unless_managed() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_savepoint, key ) )
            {
                if (unlikely( _python_par_savepoint ))
                {
                    PyErr_Format( PyExc_TypeError, "commit_on_success_unless_managed() got multiple values for keyword argument 'savepoint'" );
                    goto error_exit;
                }

                _python_par_savepoint = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "commit_on_success_unless_managed() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "commit_on_success_unless_managed() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "commit_on_success_unless_managed() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "commit_on_success_unless_managed() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "commit_on_success_unless_managed() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "commit_on_success_unless_managed() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "commit_on_success_unless_managed() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "commit_on_success_unless_managed() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "commit_on_success_unless_managed() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "commit_on_success_unless_managed() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "commit_on_success_unless_managed() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "commit_on_success_unless_managed() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "commit_on_success_unless_managed() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "commit_on_success_unless_managed() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_savepoint != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "commit_on_success_unless_managed() got multiple values for keyword argument 'savepoint'" );
             goto error_exit;
         }

        _python_par_savepoint = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_using == NULL )
    {
        _python_par_using = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_using );
    }
    if ( _python_par_savepoint == NULL )
    {
        _python_par_savepoint = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_savepoint );
    }


    return impl_function_30_commit_on_success_unless_managed_of_module_django__db__transaction( self, _python_par_using, _python_par_savepoint );

error_exit:;

    Py_XDECREF( _python_par_using );
    Py_XDECREF( _python_par_savepoint );

    return NULL;
}

static PyObject *dparse_function_30_commit_on_success_unless_managed_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_30_commit_on_success_unless_managed_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_30_commit_on_success_unless_managed_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_1_entering_of_function_30_commit_on_success_unless_managed_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_using )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );

    // Actual function code.
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1_entering_of_function_30_commit_on_success_unless_managed_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_using = NULL;
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
                PyErr_Format( PyExc_TypeError, "entering() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "entering() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "entering() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "entering() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "entering() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "entering() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "entering() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "entering() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "entering() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "entering() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "entering() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "entering() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "entering() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "entering() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "entering() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "entering() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "entering() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_1_entering_of_function_30_commit_on_success_unless_managed_of_module_django__db__transaction( self, _python_par_using );

error_exit:;

    Py_XDECREF( _python_par_using );

    return NULL;
}

static PyObject *dparse_function_1_entering_of_function_30_commit_on_success_unless_managed_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_1_entering_of_function_30_commit_on_success_unless_managed_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_entering_of_function_30_commit_on_success_unless_managed_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_exiting_of_function_30_commit_on_success_unless_managed_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject *_python_par_exc_value, PyObject *_python_par_using )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_exc_value( _python_str_plain_exc_value, _python_par_exc_value );
    PyObjectLocalParameterVariableNoDel _python_var_using( _python_str_plain_using, _python_par_using );

    // Actual function code.
    static PyFrameObject *frame_function_2_exiting_of_function_30_commit_on_success_unless_managed_of_module_django__db__transaction = NULL;

    if ( isFrameUnusable( frame_function_2_exiting_of_function_30_commit_on_success_unless_managed_of_module_django__db__transaction ) )
    {
        if ( frame_function_2_exiting_of_function_30_commit_on_success_unless_managed_of_module_django__db__transaction )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_exiting_of_function_30_commit_on_success_unless_managed_of_module_django__db__transaction" );
#endif
            Py_DECREF( frame_function_2_exiting_of_function_30_commit_on_success_unless_managed_of_module_django__db__transaction );
        }

        frame_function_2_exiting_of_function_30_commit_on_success_unless_managed_of_module_django__db__transaction = MAKE_FRAME( _codeobj_b76f68230cb9b470dd856c970cb35129, _module_django__db__transaction );
    }

    FrameGuard frame_guard( frame_function_2_exiting_of_function_30_commit_on_success_unless_managed_of_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_function_2_exiting_of_function_30_commit_on_success_unless_managed_of_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 490 );
        {
            PyObjectTempKeeper0 call1;
            DECREASE_REFCOUNT( ( call1.assign( _mvar_django__db__transaction_set_dirty.asObject0() ), CALL_FUNCTION( call1.asObject0(), _python_tuple_empty, PyObjectTemporary( MAKE_DICT1( _python_var_using.asObject(), _python_str_plain_using ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_using.updateLocalsDict( _python_var_exc_value.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_2_exiting_of_function_30_commit_on_success_unless_managed_of_module_django__db__transaction )
        {
           Py_DECREF( frame_function_2_exiting_of_function_30_commit_on_success_unless_managed_of_module_django__db__transaction );
           frame_function_2_exiting_of_function_30_commit_on_success_unless_managed_of_module_django__db__transaction = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2_exiting_of_function_30_commit_on_success_unless_managed_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_exc_value = NULL;
    PyObject *_python_par_using = NULL;
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
                PyErr_Format( PyExc_TypeError, "exiting() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_exc_value == key )
            {
                if (unlikely( _python_par_exc_value ))
                {
                    PyErr_Format( PyExc_TypeError, "exiting() got multiple values for keyword argument 'exc_value'" );
                    goto error_exit;
                }

                _python_par_exc_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_using == key )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "exiting() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_exc_value, key ) )
            {
                if (unlikely( _python_par_exc_value ))
                {
                    PyErr_Format( PyExc_TypeError, "exiting() got multiple values for keyword argument 'exc_value'" );
                    goto error_exit;
                }

                _python_par_exc_value = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_using, key ) )
            {
                if (unlikely( _python_par_using ))
                {
                    PyErr_Format( PyExc_TypeError, "exiting() got multiple values for keyword argument 'using'" );
                    goto error_exit;
                }

                _python_par_using = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "exiting() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "exiting() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "exiting() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "exiting() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "exiting() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "exiting() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "exiting() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "exiting() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "exiting() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "exiting() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "exiting() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "exiting() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "exiting() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_exc_value != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "exiting() got multiple values for keyword argument 'exc_value'" );
             goto error_exit;
         }

        _python_par_exc_value = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_using != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "exiting() got multiple values for keyword argument 'using'" );
             goto error_exit;
         }

        _python_par_using = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_2_exiting_of_function_30_commit_on_success_unless_managed_of_module_django__db__transaction( self, _python_par_exc_value, _python_par_using );

error_exit:;

    Py_XDECREF( _python_par_exc_value );
    Py_XDECREF( _python_par_using );

    return NULL;
}

static PyObject *dparse_function_2_exiting_of_function_30_commit_on_success_unless_managed_of_module_django__db__transaction( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2_exiting_of_function_30_commit_on_success_unless_managed_of_module_django__db__transaction( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_exiting_of_function_30_commit_on_success_unless_managed_of_module_django__db__transaction( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_10_managed_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_10_managed_of_module_django__db__transaction,
        dparse_function_10_managed_of_module_django__db__transaction,
        _python_str_plain_managed,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_61dc355ad8d25cae356ecb0bc92cb474,
        INCREASE_REFCOUNT( _python_tuple_true_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_11_commit_unless_managed_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_11_commit_unless_managed_of_module_django__db__transaction,
        dparse_function_11_commit_unless_managed_of_module_django__db__transaction,
        _python_str_plain_commit_unless_managed,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_88e20ab4cf5e7e57921739b721b79711,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_12_rollback_unless_managed_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_12_rollback_unless_managed_of_module_django__db__transaction,
        dparse_function_12_rollback_unless_managed_of_module_django__db__transaction,
        _python_str_plain_rollback_unless_managed,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_71cc77e12f0d4a15c3a8545a0c5922ea,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_13_get_autocommit_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_13_get_autocommit_of_module_django__db__transaction,
        dparse_function_13_get_autocommit_of_module_django__db__transaction,
        _python_str_plain_get_autocommit,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_fbcf193221d8863efe11b92bac81def8,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        _python_str_digest_8ceaa2f1247a13e2c4c57f8a50c83ca6
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_14_set_autocommit_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_14_set_autocommit_of_module_django__db__transaction,
        dparse_function_14_set_autocommit_of_module_django__db__transaction,
        _python_str_plain_set_autocommit,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_cd6c822141084337a4b8ae561f056993,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        _python_str_digest_8ba08ee0dca008b9085b247208bb14f6
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_15_commit_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_15_commit_of_module_django__db__transaction,
        dparse_function_15_commit_of_module_django__db__transaction,
        _python_str_plain_commit,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_271c41710f2f28e7d1db96d2326e11cb,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        _python_str_digest_49ff12c11be8a9a83acc5ebe145b10dc
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_16_rollback_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_16_rollback_of_module_django__db__transaction,
        dparse_function_16_rollback_of_module_django__db__transaction,
        _python_str_plain_rollback,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_1bec85e82650d1ccd5396ce345fccc70,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        _python_str_digest_4a6898338d5826baa662f7d811459b58
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_17_savepoint_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_17_savepoint_of_module_django__db__transaction,
        dparse_function_17_savepoint_of_module_django__db__transaction,
        _python_str_plain_savepoint,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_8782bb54c6fdcb3209b3bafcd27cfee9,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        _python_str_digest_cbf199cdd96f148438cf7cd6abd10a6c
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_18_savepoint_rollback_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_18_savepoint_rollback_of_module_django__db__transaction,
        dparse_function_18_savepoint_rollback_of_module_django__db__transaction,
        _python_str_plain_savepoint_rollback,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e2914acb0a1aa5410133918c1444c85e,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        _python_str_digest_da43ef25585badc2260cd4204b2c2ac0
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_19_savepoint_commit_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_19_savepoint_commit_of_module_django__db__transaction,
        dparse_function_19_savepoint_commit_of_module_django__db__transaction,
        _python_str_plain_savepoint_commit,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_7ac6f41e7b9381da1256f69536f23471,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        _python_str_digest_f0734a7885c6ec0aa949a0f7f467983a
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_21_Atomic_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_21_Atomic_of_module_django__db__transaction,
        dparse_function_1___init___of_class_21_Atomic_of_module_django__db__transaction,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d027f857bbca23681819e01e25d5e617,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_25_Transaction_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_25_Transaction_of_module_django__db__transaction,
        dparse_function_1___init___of_class_25_Transaction_of_module_django__db__transaction,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_723d17625401556c243612ecdbcd6656,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_entering_of_function_27_autocommit_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_entering_of_function_27_autocommit_of_module_django__db__transaction,
        dparse_function_1_entering_of_function_27_autocommit_of_module_django__db__transaction,
        _python_str_plain_entering,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_026cce58b93aff68b405c8e96079c6e8,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_entering_of_function_28_commit_on_success_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_entering_of_function_28_commit_on_success_of_module_django__db__transaction,
        dparse_function_1_entering_of_function_28_commit_on_success_of_module_django__db__transaction,
        _python_str_plain_entering,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_8a410f0ef0fec487cd2bdc99515f2092,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_entering_of_function_29_commit_manually_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_entering_of_function_29_commit_manually_of_module_django__db__transaction,
        dparse_function_1_entering_of_function_29_commit_manually_of_module_django__db__transaction,
        _python_str_plain_entering,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b9c892115003a7ba074c55d47f1fd5ed,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_entering_of_function_30_commit_on_success_unless_managed_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_entering_of_function_30_commit_on_success_unless_managed_of_module_django__db__transaction,
        dparse_function_1_entering_of_function_30_commit_on_success_unless_managed_of_module_django__db__transaction,
        _python_str_plain_entering,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_c28ad52d7ae15ac99bc4116c4ad6ddfe,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_inner_of_function_4___call___of_class_21_Atomic_of_module_django__db__transaction( PyObjectSharedLocalVariable &python_closure_func, PyObjectSharedLocalVariable &python_closure_self )
{
    struct _context_function_1_inner_of_function_4___call___of_class_21_Atomic_of_module_django__db__transaction_t *_python_context = new _context_function_1_inner_of_function_4___call___of_class_21_Atomic_of_module_django__db__transaction_t;

    // Copy the parameter default values and closure values over.
    _python_context->python_closure_func.shareWith( python_closure_func );
    _python_context->python_closure_self.shareWith( python_closure_self );

    PyObject *result = Nuitka_Function_New(
        fparse_function_1_inner_of_function_4___call___of_class_21_Atomic_of_module_django__db__transaction,
        dparse_function_1_inner_of_function_4___call___of_class_21_Atomic_of_module_django__db__transaction,
        _python_str_plain_inner,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_84aacf7ac6846a3dd078af3bd1a008b7,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        Py_None,
        _python_context,
        _context_function_1_inner_of_function_4___call___of_class_21_Atomic_of_module_django__db__transaction_destructor
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_inner_of_function_4___call___of_class_25_Transaction_of_module_django__db__transaction( PyObjectSharedLocalVariable &python_closure_func, PyObjectSharedLocalVariable &python_closure_self )
{
    struct _context_function_1_inner_of_function_4___call___of_class_25_Transaction_of_module_django__db__transaction_t *_python_context = new _context_function_1_inner_of_function_4___call___of_class_25_Transaction_of_module_django__db__transaction_t;

    // Copy the parameter default values and closure values over.
    _python_context->python_closure_func.shareWith( python_closure_func );
    _python_context->python_closure_self.shareWith( python_closure_self );

    PyObject *result = Nuitka_Function_New(
        fparse_function_1_inner_of_function_4___call___of_class_25_Transaction_of_module_django__db__transaction,
        dparse_function_1_inner_of_function_4___call___of_class_25_Transaction_of_module_django__db__transaction,
        _python_str_plain_inner,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_fd924252fcb3324913fa77491534376b,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        Py_None,
        _python_context,
        _context_function_1_inner_of_function_4___call___of_class_25_Transaction_of_module_django__db__transaction_destructor
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_20_clean_savepoints_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_20_clean_savepoints_of_module_django__db__transaction,
        dparse_function_20_clean_savepoints_of_module_django__db__transaction,
        _python_str_plain_clean_savepoints,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_fc54fb88b7c6587b8a3c36892cc668e2,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        _python_str_digest_c9ffd95376751493568204f5369f65ef
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_22_atomic_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_22_atomic_of_module_django__db__transaction,
        dparse_function_22_atomic_of_module_django__db__transaction,
        _python_str_plain_atomic,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_2cbc45661912e321c72e277454e37be3,
        INCREASE_REFCOUNT( _python_tuple_none_true_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_23__non_atomic_requests_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_23__non_atomic_requests_of_module_django__db__transaction,
        dparse_function_23__non_atomic_requests_of_module_django__db__transaction,
        _python_str_plain__non_atomic_requests,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_a785f8fe7400e1dbbca03be345e1cef0,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_24_non_atomic_requests_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_24_non_atomic_requests_of_module_django__db__transaction,
        dparse_function_24_non_atomic_requests_of_module_django__db__transaction,
        _python_str_plain_non_atomic_requests,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_9dfa720a3372cdc6aa7762ec2c17e488,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_26__transaction_func_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_26__transaction_func_of_module_django__db__transaction,
        dparse_function_26__transaction_func_of_module_django__db__transaction,
        _python_str_plain__transaction_func,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_6f21b2a986d8f0b34f7f1c42524b034e,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        _python_str_digest_b84fe9a73e1c03838a95f16dc27d1c31
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_27_autocommit_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_27_autocommit_of_module_django__db__transaction,
        dparse_function_27_autocommit_of_module_django__db__transaction,
        _python_str_plain_autocommit,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_1bc541ccf35aa16718c6f139fe703927,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        _python_str_digest_2ce3aad7f3049aaa59bbb62b6028c964
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_28_commit_on_success_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_28_commit_on_success_of_module_django__db__transaction,
        dparse_function_28_commit_on_success_of_module_django__db__transaction,
        _python_str_plain_commit_on_success,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_26c316d69ae8a7a01d1ea394affb9267,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        _python_str_digest_1f181cb0b28a3dd99e20cede1d791a8a
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_29_commit_manually_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_29_commit_manually_of_module_django__db__transaction,
        dparse_function_29_commit_manually_of_module_django__db__transaction,
        _python_str_plain_commit_manually,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_9c0d2f9ae5016872938b2772b8d3545f,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        _python_str_digest_975bdca03552d8c6caf6f6b8c38cb25b
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___enter___of_class_21_Atomic_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___enter___of_class_21_Atomic_of_module_django__db__transaction,
        dparse_function_2___enter___of_class_21_Atomic_of_module_django__db__transaction,
        _python_str_plain___enter__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_406f75fde706034b6066107745879aae,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___enter___of_class_25_Transaction_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___enter___of_class_25_Transaction_of_module_django__db__transaction,
        dparse_function_2___enter___of_class_25_Transaction_of_module_django__db__transaction,
        _python_str_plain___enter__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_0361f81798fd8fdd46f1e68bb3494fa7,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_exiting_of_function_27_autocommit_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_exiting_of_function_27_autocommit_of_module_django__db__transaction,
        dparse_function_2_exiting_of_function_27_autocommit_of_module_django__db__transaction,
        _python_str_plain_exiting,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_c3b4d20ed69569882fbb3cb9e08c272e,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_exiting_of_function_28_commit_on_success_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_exiting_of_function_28_commit_on_success_of_module_django__db__transaction,
        dparse_function_2_exiting_of_function_28_commit_on_success_of_module_django__db__transaction,
        _python_str_plain_exiting,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_6ba77c0490adae22b5465fc8a9efd59b,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_exiting_of_function_29_commit_manually_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_exiting_of_function_29_commit_manually_of_module_django__db__transaction,
        dparse_function_2_exiting_of_function_29_commit_manually_of_module_django__db__transaction,
        _python_str_plain_exiting,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_aeaee4dd2c1f74236646d744cc5d7e25,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_exiting_of_function_30_commit_on_success_unless_managed_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_exiting_of_function_30_commit_on_success_unless_managed_of_module_django__db__transaction,
        dparse_function_2_exiting_of_function_30_commit_on_success_unless_managed_of_module_django__db__transaction,
        _python_str_plain_exiting,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b76f68230cb9b470dd856c970cb35129,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_get_connection_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_get_connection_of_module_django__db__transaction,
        dparse_function_2_get_connection_of_module_django__db__transaction,
        _python_str_plain_get_connection,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_02759f0576d7ed969d75b6dda0074cbb,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        _python_str_digest_0936087dc29cba67a6df62f8f3e61da3
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_30_commit_on_success_unless_managed_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_30_commit_on_success_unless_managed_of_module_django__db__transaction,
        dparse_function_30_commit_on_success_unless_managed_of_module_django__db__transaction,
        _python_str_plain_commit_on_success_unless_managed,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b6efdc648755bff7f5ef0caaee1509d0,
        INCREASE_REFCOUNT( _python_tuple_none_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        _python_str_digest_c494b921fe82b306a3b6aff5560026b2
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3___exit___of_class_21_Atomic_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3___exit___of_class_21_Atomic_of_module_django__db__transaction,
        dparse_function_3___exit___of_class_21_Atomic_of_module_django__db__transaction,
        _python_str_plain___exit__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_8cbf1ddc02da17376bfb39d5775e0b5b,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3___exit___of_class_25_Transaction_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3___exit___of_class_25_Transaction_of_module_django__db__transaction,
        dparse_function_3___exit___of_class_25_Transaction_of_module_django__db__transaction,
        _python_str_plain___exit__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_1f6cfbdda74590d799cd1c3ff82df3b5,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_abort_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_abort_of_module_django__db__transaction,
        dparse_function_3_abort_of_module_django__db__transaction,
        _python_str_plain_abort,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_c07df686a2ae9a8e55e1fa20fe763d90,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        _python_str_digest_56d9ef499426143b9633ada911657c78
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4___call___of_class_21_Atomic_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4___call___of_class_21_Atomic_of_module_django__db__transaction,
        dparse_function_4___call___of_class_21_Atomic_of_module_django__db__transaction,
        _python_str_plain___call__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_9e1deb10e35ddb407cc21c695a073453,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4___call___of_class_25_Transaction_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4___call___of_class_25_Transaction_of_module_django__db__transaction,
        dparse_function_4___call___of_class_25_Transaction_of_module_django__db__transaction,
        _python_str_plain___call__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_8df079b8f975f4fedd9a4af96f5ff20e,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_enter_transaction_management_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_enter_transaction_management_of_module_django__db__transaction,
        dparse_function_4_enter_transaction_management_of_module_django__db__transaction,
        _python_str_plain_enter_transaction_management,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_2fff357819847679a9a7bf7fc8d84803,
        INCREASE_REFCOUNT( _python_tuple_true_none_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        _python_str_digest_7aef50bb49cfde211afe1b845ecf9770
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_leave_transaction_management_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_leave_transaction_management_of_module_django__db__transaction,
        dparse_function_5_leave_transaction_management_of_module_django__db__transaction,
        _python_str_plain_leave_transaction_management,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_05f13c15beedded58c09e2aed287cf2c,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        _python_str_digest_28f9ce9224c8e7d897f07862f8f78a37
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_is_dirty_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_is_dirty_of_module_django__db__transaction,
        dparse_function_6_is_dirty_of_module_django__db__transaction,
        _python_str_plain_is_dirty,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_bb4e7eef8fbd68799b66cdfa56111b65,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        _python_str_digest_c22ab20c0475973c717949e155706575
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_set_dirty_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_set_dirty_of_module_django__db__transaction,
        dparse_function_7_set_dirty_of_module_django__db__transaction,
        _python_str_plain_set_dirty,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_0675021933ec3016fcd9ed3ad583926c,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        _python_str_digest_fde3afcf71ac70c13fb570e68b94fc0d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_set_clean_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_set_clean_of_module_django__db__transaction,
        dparse_function_8_set_clean_of_module_django__db__transaction,
        _python_str_plain_set_clean,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_e900c18b187891a6ce02df9d3942cd65,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        _python_str_digest_589dc79f4f76dc1c306b39db0dc6698c
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_is_managed_of_module_django__db__transaction(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_9_is_managed_of_module_django__db__transaction,
        dparse_function_9_is_managed_of_module_django__db__transaction,
        _python_str_plain_is_managed,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_82e79c939fd345e5d331e9edc510ec5c,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_function_24_non_atomic_requests_of_module_django__db__transaction( PyObjectSharedLocalVariable &python_closure_using )
{
    struct _context_lambda_1_lambda_of_function_24_non_atomic_requests_of_module_django__db__transaction_t *_python_context = new _context_lambda_1_lambda_of_function_24_non_atomic_requests_of_module_django__db__transaction_t;

    // Copy the parameter default values and closure values over.
    _python_context->python_closure_using.shareWith( python_closure_using );

    PyObject *result = Nuitka_Function_New(
        fparse_lambda_1_lambda_of_function_24_non_atomic_requests_of_module_django__db__transaction,
        dparse_lambda_1_lambda_of_function_24_non_atomic_requests_of_module_django__db__transaction,
        _python_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_bd1eb56cfdf5e2329189bda2644462e4,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__db__transaction,
        Py_None,
        _python_context,
        _context_lambda_1_lambda_of_function_24_non_atomic_requests_of_module_django__db__transaction_destructor
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.db.transaction",   /* m_name */
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

MOD_INIT_DECL( django__db__transaction )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__db__transaction );
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

    // puts( "in initdjango__db__transaction" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__db__transaction = Py_InitModule4(
        "django.db.transaction",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__db__transaction = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__db__transaction = (PyDictObject *)((PyModuleObject *)_module_django__db__transaction)->md_dict;

    assertObject( _module_django__db__transaction );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_cf8e94c0a68dd5fab8d5a5ad609e11e4, _module_django__db__transaction );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__db__transaction );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__db__transaction != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__db__transaction, (Nuitka_StringObject *)_python_str_plain___doc__, _python_str_digest_c4a3a597ac57287a4de950e47e8e71ef );
    UPDATE_STRING_DICT0( _moduledict_django__db__transaction, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_49244f23d9981b4e5004b1264fde5490 );
    PyFrameObject *frame_module_django__db__transaction = MAKE_FRAME( _codeobj_848e719fde9d3fce2dd7dc024dd14602, _module_django__db__transaction );

    FrameGuard frame_guard( frame_module_django__db__transaction );
    try
    {
        assert( Py_REFCNT( frame_module_django__db__transaction ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 15 );
        UPDATE_STRING_DICT1( _moduledict_django__db__transaction, (Nuitka_StringObject *)_python_str_plain_warnings, IMPORT_MODULE( _python_str_plain_warnings, ((PyModuleObject *)_module_django__db__transaction)->md_dict, ((PyModuleObject *)_module_django__db__transaction)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 17 );
        UPDATE_STRING_DICT1( _moduledict_django__db__transaction, (Nuitka_StringObject *)_python_str_plain_wraps, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_functools, ((PyModuleObject *)_module_django__db__transaction)->md_dict, ((PyModuleObject *)_module_django__db__transaction)->md_dict, _python_list_str_plain_wraps_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_wraps ) );
        frame_guard.setLineNumber( 19 );
        UPDATE_STRING_DICT1( _moduledict_django__db__transaction, (Nuitka_StringObject *)_python_str_plain_connections, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_391c2f4b507ae374cc9606a76384636e, ((PyModuleObject *)_module_django__db__transaction)->md_dict, ((PyModuleObject *)_module_django__db__transaction)->md_dict, _python_list_9a791567b0952ae284652d5858f0a525_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_connections ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__transaction, (Nuitka_StringObject *)_python_str_plain_DatabaseError, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_391c2f4b507ae374cc9606a76384636e, ((PyModuleObject *)_module_django__db__transaction)->md_dict, ((PyModuleObject *)_module_django__db__transaction)->md_dict, _python_list_9a791567b0952ae284652d5858f0a525_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_DatabaseError ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__transaction, (Nuitka_StringObject *)_python_str_plain_DEFAULT_DB_ALIAS, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_391c2f4b507ae374cc9606a76384636e, ((PyModuleObject *)_module_django__db__transaction)->md_dict, ((PyModuleObject *)_module_django__db__transaction)->md_dict, _python_list_9a791567b0952ae284652d5858f0a525_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_DEFAULT_DB_ALIAS ) );
        frame_guard.setLineNumber( 20 );
        UPDATE_STRING_DICT1( _moduledict_django__db__transaction, (Nuitka_StringObject *)_python_str_plain_available_attrs, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_256ea6064478e2424bbacdde15f9d891, ((PyModuleObject *)_module_django__db__transaction)->md_dict, ((PyModuleObject *)_module_django__db__transaction)->md_dict, _python_list_str_plain_available_attrs_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_available_attrs ) );
        {
            frame_guard.setLineNumber( 23 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( PyExc_Exception ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_1_TransactionManagementError_of_module_django__db__transaction(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__transaction___metaclass__.isInitialized( false ) ? _mvar_django__db__transaction___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_TransactionManagementError, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__transaction, (Nuitka_StringObject *)_python_str_plain_TransactionManagementError, _python_tmp_class.asObject() );
        }
        UPDATE_STRING_DICT1( _moduledict_django__db__transaction, (Nuitka_StringObject *)_python_str_plain_get_connection, MAKE_FUNCTION_function_2_get_connection_of_module_django__db__transaction(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__transaction, (Nuitka_StringObject *)_python_str_plain_abort, MAKE_FUNCTION_function_3_abort_of_module_django__db__transaction(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__transaction, (Nuitka_StringObject *)_python_str_plain_enter_transaction_management, MAKE_FUNCTION_function_4_enter_transaction_management_of_module_django__db__transaction(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__transaction, (Nuitka_StringObject *)_python_str_plain_leave_transaction_management, MAKE_FUNCTION_function_5_leave_transaction_management_of_module_django__db__transaction(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__transaction, (Nuitka_StringObject *)_python_str_plain_is_dirty, MAKE_FUNCTION_function_6_is_dirty_of_module_django__db__transaction(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__transaction, (Nuitka_StringObject *)_python_str_plain_set_dirty, MAKE_FUNCTION_function_7_set_dirty_of_module_django__db__transaction(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__transaction, (Nuitka_StringObject *)_python_str_plain_set_clean, MAKE_FUNCTION_function_8_set_clean_of_module_django__db__transaction(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__transaction, (Nuitka_StringObject *)_python_str_plain_is_managed, MAKE_FUNCTION_function_9_is_managed_of_module_django__db__transaction(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__transaction, (Nuitka_StringObject *)_python_str_plain_managed, MAKE_FUNCTION_function_10_managed_of_module_django__db__transaction(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__transaction, (Nuitka_StringObject *)_python_str_plain_commit_unless_managed, MAKE_FUNCTION_function_11_commit_unless_managed_of_module_django__db__transaction(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__transaction, (Nuitka_StringObject *)_python_str_plain_rollback_unless_managed, MAKE_FUNCTION_function_12_rollback_unless_managed_of_module_django__db__transaction(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__transaction, (Nuitka_StringObject *)_python_str_plain_get_autocommit, MAKE_FUNCTION_function_13_get_autocommit_of_module_django__db__transaction(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__transaction, (Nuitka_StringObject *)_python_str_plain_set_autocommit, MAKE_FUNCTION_function_14_set_autocommit_of_module_django__db__transaction(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__transaction, (Nuitka_StringObject *)_python_str_plain_commit, MAKE_FUNCTION_function_15_commit_of_module_django__db__transaction(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__transaction, (Nuitka_StringObject *)_python_str_plain_rollback, MAKE_FUNCTION_function_16_rollback_of_module_django__db__transaction(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__transaction, (Nuitka_StringObject *)_python_str_plain_savepoint, MAKE_FUNCTION_function_17_savepoint_of_module_django__db__transaction(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__transaction, (Nuitka_StringObject *)_python_str_plain_savepoint_rollback, MAKE_FUNCTION_function_18_savepoint_rollback_of_module_django__db__transaction(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__transaction, (Nuitka_StringObject *)_python_str_plain_savepoint_commit, MAKE_FUNCTION_function_19_savepoint_commit_of_module_django__db__transaction(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__transaction, (Nuitka_StringObject *)_python_str_plain_clean_savepoints, MAKE_FUNCTION_function_20_clean_savepoints_of_module_django__db__transaction(  ) );
        {
            frame_guard.setLineNumber( 178 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_21_Atomic_of_module_django__db__transaction(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__transaction___metaclass__.isInitialized( false ) ? _mvar_django__db__transaction___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper0 call7;
                _tmp_python_tmp_class = ( call5.assign( _python_tmp_metaclass.asObject() ), call7.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_str_plain_Atomic, call7.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__transaction, (Nuitka_StringObject *)_python_str_plain_Atomic, _python_tmp_class.asObject() );
        }
        UPDATE_STRING_DICT1( _moduledict_django__db__transaction, (Nuitka_StringObject *)_python_str_plain_atomic, MAKE_FUNCTION_function_22_atomic_of_module_django__db__transaction(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__transaction, (Nuitka_StringObject *)_python_str_plain__non_atomic_requests, MAKE_FUNCTION_function_23__non_atomic_requests_of_module_django__db__transaction(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__db__transaction, (Nuitka_StringObject *)_python_str_plain_non_atomic_requests, MAKE_FUNCTION_function_24_non_atomic_requests_of_module_django__db__transaction(  ) );
        {
            frame_guard.setLineNumber( 357 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_25_Transaction_of_module_django__db__transaction(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__db__transaction___metaclass__.isInitialized( false ) ? _mvar_django__db__transaction___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call11;
                PyObjectTempKeeper0 call9;
                _tmp_python_tmp_class = ( call9.assign( _python_tmp_metaclass.asObject() ), call11.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_str_plain_Transaction, call11.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__db__transaction, (Nuitka_StringObject *)_python_str_plain_Transaction, _python_tmp_class.asObject() );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__db__transaction)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__db__transaction, (Nuitka_StringObject *)_python_str_plain__transaction_func, MAKE_FUNCTION_function_26__transaction_func_of_module_django__db__transaction(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__db__transaction, (Nuitka_StringObject *)_python_str_plain_autocommit, MAKE_FUNCTION_function_27_autocommit_of_module_django__db__transaction(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__db__transaction, (Nuitka_StringObject *)_python_str_plain_commit_on_success, MAKE_FUNCTION_function_28_commit_on_success_of_module_django__db__transaction(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__db__transaction, (Nuitka_StringObject *)_python_str_plain_commit_manually, MAKE_FUNCTION_function_29_commit_manually_of_module_django__db__transaction(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__db__transaction, (Nuitka_StringObject *)_python_str_plain_commit_on_success_unless_managed, MAKE_FUNCTION_function_30_commit_on_success_unless_managed_of_module_django__db__transaction(  ) );

   return MOD_RETURN_VALUE( _module_django__db__transaction );
}
