// Generated code for Python source for module 'django.core.files.locks'
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

// The _module_django__core__files__locks is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__core__files__locks;
PyDictObject *_moduledict_django__core__files__locks;

// The module level variables.
static PyObjectGlobalVariable_django__core__files__locks _mvar_django__core__files__locks___overlapped( &_module_django__core__files__locks, &_python_str_plain___overlapped );
static PyObjectGlobalVariable_django__core__files__locks _mvar_django__core__files__locks_fcntl( &_module_django__core__files__locks, &_python_str_plain_fcntl );
static PyObjectGlobalVariable_django__core__files__locks _mvar_django__core__files__locks_fd( &_module_django__core__files__locks, &_python_str_plain_fd );
static PyObjectGlobalVariable_django__core__files__locks _mvar_django__core__files__locks_pywintypes( &_module_django__core__files__locks, &_python_str_plain_pywintypes );
static PyObjectGlobalVariable_django__core__files__locks _mvar_django__core__files__locks_system_type( &_module_django__core__files__locks, &_python_str_plain_system_type );
static PyObjectGlobalVariable_django__core__files__locks _mvar_django__core__files__locks_win32con( &_module_django__core__files__locks, &_python_str_plain_win32con );
static PyObjectGlobalVariable_django__core__files__locks _mvar_django__core__files__locks_win32file( &_module_django__core__files__locks, &_python_str_plain_win32file );

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_fd_of_module_django__core__files__locks(  );


static PyObject *MAKE_FUNCTION_function_2_lock_of_module_django__core__files__locks(  );


static PyObject *MAKE_FUNCTION_function_3_unlock_of_module_django__core__files__locks(  );


static PyObject *MAKE_FUNCTION_function_4_lock_of_module_django__core__files__locks(  );


static PyObject *MAKE_FUNCTION_function_5_unlock_of_module_django__core__files__locks(  );


static PyObject *MAKE_FUNCTION_function_6_lock_of_module_django__core__files__locks(  );


static PyObject *MAKE_FUNCTION_function_7_unlock_of_module_django__core__files__locks(  );


// The module function definitions.
static PyObject *impl_function_1_fd_of_module_django__core__files__locks( Nuitka_FunctionObject *self, PyObject *_python_par_f )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_f( _python_str_plain_f, _python_par_f );

    // Actual function code.
    static PyFrameObject *frame_function_1_fd_of_module_django__core__files__locks = NULL;

    if ( isFrameUnusable( frame_function_1_fd_of_module_django__core__files__locks ) )
    {
        if ( frame_function_1_fd_of_module_django__core__files__locks )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_fd_of_module_django__core__files__locks" );
#endif
            Py_DECREF( frame_function_1_fd_of_module_django__core__files__locks );
        }

        frame_function_1_fd_of_module_django__core__files__locks = MAKE_FRAME( _codeobj_45dec03bc130eb643810ba6cbe9d3e04, _module_django__core__files__locks );
    }

    FrameGuard frame_guard( frame_function_1_fd_of_module_django__core__files__locks );
    try
    {
        assert( Py_REFCNT( frame_function_1_fd_of_module_django__core__files__locks ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 44 );
        return ( HAS_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_fileno ) ? CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_fileno ) ).asObject() ) : _python_var_f.asObject1() );
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
        frame_guard.getFrame0()->f_locals = _python_var_f.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_1_fd_of_module_django__core__files__locks )
        {
           Py_DECREF( frame_function_1_fd_of_module_django__core__files__locks );
           frame_function_1_fd_of_module_django__core__files__locks = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1_fd_of_module_django__core__files__locks( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_f = NULL;
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
                PyErr_Format( PyExc_TypeError, "fd() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_f == key )
            {
                if (unlikely( _python_par_f ))
                {
                    PyErr_Format( PyExc_TypeError, "fd() got multiple values for keyword argument 'f'" );
                    goto error_exit;
                }

                _python_par_f = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_f, key ) )
            {
                if (unlikely( _python_par_f ))
                {
                    PyErr_Format( PyExc_TypeError, "fd() got multiple values for keyword argument 'f'" );
                    goto error_exit;
                }

                _python_par_f = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "fd() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "fd() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "fd() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "fd() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "fd() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "fd() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "fd() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "fd() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "fd() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "fd() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "fd() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "fd() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "fd() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_f != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "fd() got multiple values for keyword argument 'f'" );
             goto error_exit;
         }

        _python_par_f = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_1_fd_of_module_django__core__files__locks( self, _python_par_f );

error_exit:;

    Py_XDECREF( _python_par_f );

    return NULL;
}

static PyObject *dparse_function_1_fd_of_module_django__core__files__locks( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_1_fd_of_module_django__core__files__locks( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_fd_of_module_django__core__files__locks( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_lock_of_module_django__core__files__locks( Nuitka_FunctionObject *self, PyObject *_python_par_file, PyObject *_python_par_flags )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_file( _python_str_plain_file, _python_par_file );
    PyObjectLocalParameterVariableNoDel _python_var_flags( _python_str_plain_flags, _python_par_flags );
    PyObjectLocalVariable _python_var_hfile( _python_str_plain_hfile );

    // Actual function code.
    static PyFrameObject *frame_function_2_lock_of_module_django__core__files__locks = NULL;

    if ( isFrameUnusable( frame_function_2_lock_of_module_django__core__files__locks ) )
    {
        if ( frame_function_2_lock_of_module_django__core__files__locks )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_lock_of_module_django__core__files__locks" );
#endif
            Py_DECREF( frame_function_2_lock_of_module_django__core__files__locks );
        }

        frame_function_2_lock_of_module_django__core__files__locks = MAKE_FRAME( _codeobj_4b8d1dfe29016f1735d65bb1d78a87bb, _module_django__core__files__locks );
    }

    FrameGuard frame_guard( frame_function_2_lock_of_module_django__core__files__locks );
    try
    {
        assert( Py_REFCNT( frame_function_2_lock_of_module_django__core__files__locks ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 48 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper1 call3;
            _python_var_hfile.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__files__locks_win32file.asObject0(), _python_str_plain__get_osfhandle ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( ( call1.assign( _mvar_django__core__files__locks_fd.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_file.asObject() ) ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 49 );
        {
            PyObjectTempKeeper1 call5;
            PyObjectTempKeeper0 call6;
            PyObjectTempKeeper0 call7;
            DECREASE_REFCOUNT( ( call5.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__files__locks_win32file.asObject0(), _python_str_plain_LockFileEx ) ), call6.assign( _python_var_hfile.asObject() ), call7.assign( _python_var_flags.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), call6.asObject0(), call7.asObject0(), _python_int_0, _python_int_neg_65536, _mvar_django__core__files__locks___overlapped.asObject0() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_flags.updateLocalsDict( _python_var_file.updateLocalsDict( _python_var_hfile.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_lock_of_module_django__core__files__locks )
        {
           Py_DECREF( frame_function_2_lock_of_module_django__core__files__locks );
           frame_function_2_lock_of_module_django__core__files__locks = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2_lock_of_module_django__core__files__locks( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_file = NULL;
    PyObject *_python_par_flags = NULL;
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
                PyErr_Format( PyExc_TypeError, "lock() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_file == key )
            {
                if (unlikely( _python_par_file ))
                {
                    PyErr_Format( PyExc_TypeError, "lock() got multiple values for keyword argument 'file'" );
                    goto error_exit;
                }

                _python_par_file = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_flags == key )
            {
                if (unlikely( _python_par_flags ))
                {
                    PyErr_Format( PyExc_TypeError, "lock() got multiple values for keyword argument 'flags'" );
                    goto error_exit;
                }

                _python_par_flags = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_file, key ) )
            {
                if (unlikely( _python_par_file ))
                {
                    PyErr_Format( PyExc_TypeError, "lock() got multiple values for keyword argument 'file'" );
                    goto error_exit;
                }

                _python_par_file = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_flags, key ) )
            {
                if (unlikely( _python_par_flags ))
                {
                    PyErr_Format( PyExc_TypeError, "lock() got multiple values for keyword argument 'flags'" );
                    goto error_exit;
                }

                _python_par_flags = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "lock() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "lock() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "lock() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "lock() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "lock() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "lock() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "lock() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "lock() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "lock() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "lock() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "lock() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "lock() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "lock() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_file != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "lock() got multiple values for keyword argument 'file'" );
             goto error_exit;
         }

        _python_par_file = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_flags != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "lock() got multiple values for keyword argument 'flags'" );
             goto error_exit;
         }

        _python_par_flags = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_2_lock_of_module_django__core__files__locks( self, _python_par_file, _python_par_flags );

error_exit:;

    Py_XDECREF( _python_par_file );
    Py_XDECREF( _python_par_flags );

    return NULL;
}

static PyObject *dparse_function_2_lock_of_module_django__core__files__locks( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2_lock_of_module_django__core__files__locks( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_lock_of_module_django__core__files__locks( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_unlock_of_module_django__core__files__locks( Nuitka_FunctionObject *self, PyObject *_python_par_file )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_file( _python_str_plain_file, _python_par_file );
    PyObjectLocalVariable _python_var_hfile( _python_str_plain_hfile );

    // Actual function code.
    static PyFrameObject *frame_function_3_unlock_of_module_django__core__files__locks = NULL;

    if ( isFrameUnusable( frame_function_3_unlock_of_module_django__core__files__locks ) )
    {
        if ( frame_function_3_unlock_of_module_django__core__files__locks )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_unlock_of_module_django__core__files__locks" );
#endif
            Py_DECREF( frame_function_3_unlock_of_module_django__core__files__locks );
        }

        frame_function_3_unlock_of_module_django__core__files__locks = MAKE_FRAME( _codeobj_5d785b1fc9f0feb7ca4e56d346eb202b, _module_django__core__files__locks );
    }

    FrameGuard frame_guard( frame_function_3_unlock_of_module_django__core__files__locks );
    try
    {
        assert( Py_REFCNT( frame_function_3_unlock_of_module_django__core__files__locks ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 52 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper1 call3;
            _python_var_hfile.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__files__locks_win32file.asObject0(), _python_str_plain__get_osfhandle ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( ( call1.assign( _mvar_django__core__files__locks_fd.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_file.asObject() ) ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 53 );
        {
            PyObjectTempKeeper1 call5;
            PyObjectTempKeeper0 call6;
            DECREASE_REFCOUNT( ( call5.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__files__locks_win32file.asObject0(), _python_str_plain_UnlockFileEx ) ), call6.assign( _python_var_hfile.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), call6.asObject0(), _python_int_0, _python_int_neg_65536, _mvar_django__core__files__locks___overlapped.asObject0() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_file.updateLocalsDict( _python_var_hfile.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_3_unlock_of_module_django__core__files__locks )
        {
           Py_DECREF( frame_function_3_unlock_of_module_django__core__files__locks );
           frame_function_3_unlock_of_module_django__core__files__locks = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_3_unlock_of_module_django__core__files__locks( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_file = NULL;
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
                PyErr_Format( PyExc_TypeError, "unlock() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_file == key )
            {
                if (unlikely( _python_par_file ))
                {
                    PyErr_Format( PyExc_TypeError, "unlock() got multiple values for keyword argument 'file'" );
                    goto error_exit;
                }

                _python_par_file = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_file, key ) )
            {
                if (unlikely( _python_par_file ))
                {
                    PyErr_Format( PyExc_TypeError, "unlock() got multiple values for keyword argument 'file'" );
                    goto error_exit;
                }

                _python_par_file = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "unlock() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "unlock() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "unlock() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "unlock() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "unlock() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "unlock() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "unlock() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "unlock() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "unlock() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "unlock() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "unlock() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "unlock() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "unlock() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_file != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "unlock() got multiple values for keyword argument 'file'" );
             goto error_exit;
         }

        _python_par_file = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_3_unlock_of_module_django__core__files__locks( self, _python_par_file );

error_exit:;

    Py_XDECREF( _python_par_file );

    return NULL;
}

static PyObject *dparse_function_3_unlock_of_module_django__core__files__locks( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3_unlock_of_module_django__core__files__locks( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_unlock_of_module_django__core__files__locks( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_lock_of_module_django__core__files__locks( Nuitka_FunctionObject *self, PyObject *_python_par_file, PyObject *_python_par_flags )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_file( _python_str_plain_file, _python_par_file );
    PyObjectLocalParameterVariableNoDel _python_var_flags( _python_str_plain_flags, _python_par_flags );

    // Actual function code.
    static PyFrameObject *frame_function_4_lock_of_module_django__core__files__locks = NULL;

    if ( isFrameUnusable( frame_function_4_lock_of_module_django__core__files__locks ) )
    {
        if ( frame_function_4_lock_of_module_django__core__files__locks )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_lock_of_module_django__core__files__locks" );
#endif
            Py_DECREF( frame_function_4_lock_of_module_django__core__files__locks );
        }

        frame_function_4_lock_of_module_django__core__files__locks = MAKE_FRAME( _codeobj_c8a1e1ef3e1975db57c0dfa030e3520b, _module_django__core__files__locks );
    }

    FrameGuard frame_guard( frame_function_4_lock_of_module_django__core__files__locks );
    try
    {
        assert( Py_REFCNT( frame_function_4_lock_of_module_django__core__files__locks ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 56 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper1 call4;
            DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__files__locks_fcntl.asObject0(), _python_str_plain_lockf ) ), call4.assign( ( call1.assign( _mvar_django__core__files__locks_fd.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_file.asObject() ) ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), call4.asObject0(), _python_var_flags.asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_flags.updateLocalsDict( _python_var_file.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_4_lock_of_module_django__core__files__locks )
        {
           Py_DECREF( frame_function_4_lock_of_module_django__core__files__locks );
           frame_function_4_lock_of_module_django__core__files__locks = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_4_lock_of_module_django__core__files__locks( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_file = NULL;
    PyObject *_python_par_flags = NULL;
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
                PyErr_Format( PyExc_TypeError, "lock() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_file == key )
            {
                if (unlikely( _python_par_file ))
                {
                    PyErr_Format( PyExc_TypeError, "lock() got multiple values for keyword argument 'file'" );
                    goto error_exit;
                }

                _python_par_file = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_flags == key )
            {
                if (unlikely( _python_par_flags ))
                {
                    PyErr_Format( PyExc_TypeError, "lock() got multiple values for keyword argument 'flags'" );
                    goto error_exit;
                }

                _python_par_flags = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_file, key ) )
            {
                if (unlikely( _python_par_file ))
                {
                    PyErr_Format( PyExc_TypeError, "lock() got multiple values for keyword argument 'file'" );
                    goto error_exit;
                }

                _python_par_file = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_flags, key ) )
            {
                if (unlikely( _python_par_flags ))
                {
                    PyErr_Format( PyExc_TypeError, "lock() got multiple values for keyword argument 'flags'" );
                    goto error_exit;
                }

                _python_par_flags = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "lock() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "lock() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "lock() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "lock() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "lock() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "lock() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "lock() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "lock() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "lock() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "lock() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "lock() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "lock() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "lock() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_file != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "lock() got multiple values for keyword argument 'file'" );
             goto error_exit;
         }

        _python_par_file = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_flags != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "lock() got multiple values for keyword argument 'flags'" );
             goto error_exit;
         }

        _python_par_flags = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_4_lock_of_module_django__core__files__locks( self, _python_par_file, _python_par_flags );

error_exit:;

    Py_XDECREF( _python_par_file );
    Py_XDECREF( _python_par_flags );

    return NULL;
}

static PyObject *dparse_function_4_lock_of_module_django__core__files__locks( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_4_lock_of_module_django__core__files__locks( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_lock_of_module_django__core__files__locks( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_unlock_of_module_django__core__files__locks( Nuitka_FunctionObject *self, PyObject *_python_par_file )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_file( _python_str_plain_file, _python_par_file );

    // Actual function code.
    static PyFrameObject *frame_function_5_unlock_of_module_django__core__files__locks = NULL;

    if ( isFrameUnusable( frame_function_5_unlock_of_module_django__core__files__locks ) )
    {
        if ( frame_function_5_unlock_of_module_django__core__files__locks )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_unlock_of_module_django__core__files__locks" );
#endif
            Py_DECREF( frame_function_5_unlock_of_module_django__core__files__locks );
        }

        frame_function_5_unlock_of_module_django__core__files__locks = MAKE_FRAME( _codeobj_a205b145614f9c50154cc9eaa4a15368, _module_django__core__files__locks );
    }

    FrameGuard frame_guard( frame_function_5_unlock_of_module_django__core__files__locks );
    try
    {
        assert( Py_REFCNT( frame_function_5_unlock_of_module_django__core__files__locks ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 59 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper1 call4;
            DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__files__locks_fcntl.asObject0(), _python_str_plain_lockf ) ), call4.assign( ( call1.assign( _mvar_django__core__files__locks_fd.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_file.asObject() ) ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), call4.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__locks_fcntl.asObject0(), _python_str_plain_LOCK_UN ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_file.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_5_unlock_of_module_django__core__files__locks )
        {
           Py_DECREF( frame_function_5_unlock_of_module_django__core__files__locks );
           frame_function_5_unlock_of_module_django__core__files__locks = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_5_unlock_of_module_django__core__files__locks( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_file = NULL;
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
                PyErr_Format( PyExc_TypeError, "unlock() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_file == key )
            {
                if (unlikely( _python_par_file ))
                {
                    PyErr_Format( PyExc_TypeError, "unlock() got multiple values for keyword argument 'file'" );
                    goto error_exit;
                }

                _python_par_file = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_file, key ) )
            {
                if (unlikely( _python_par_file ))
                {
                    PyErr_Format( PyExc_TypeError, "unlock() got multiple values for keyword argument 'file'" );
                    goto error_exit;
                }

                _python_par_file = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "unlock() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "unlock() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "unlock() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "unlock() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "unlock() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "unlock() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "unlock() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "unlock() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "unlock() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "unlock() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "unlock() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "unlock() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "unlock() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_file != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "unlock() got multiple values for keyword argument 'file'" );
             goto error_exit;
         }

        _python_par_file = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_5_unlock_of_module_django__core__files__locks( self, _python_par_file );

error_exit:;

    Py_XDECREF( _python_par_file );

    return NULL;
}

static PyObject *dparse_function_5_unlock_of_module_django__core__files__locks( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_5_unlock_of_module_django__core__files__locks( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_unlock_of_module_django__core__files__locks( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_6_lock_of_module_django__core__files__locks( Nuitka_FunctionObject *self, PyObject *_python_par_file, PyObject *_python_par_flags )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_file( _python_str_plain_file, _python_par_file );
    PyObjectLocalParameterVariableNoDel _python_var_flags( _python_str_plain_flags, _python_par_flags );

    // Actual function code.
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_6_lock_of_module_django__core__files__locks( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_file = NULL;
    PyObject *_python_par_flags = NULL;
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
                PyErr_Format( PyExc_TypeError, "lock() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_file == key )
            {
                if (unlikely( _python_par_file ))
                {
                    PyErr_Format( PyExc_TypeError, "lock() got multiple values for keyword argument 'file'" );
                    goto error_exit;
                }

                _python_par_file = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_flags == key )
            {
                if (unlikely( _python_par_flags ))
                {
                    PyErr_Format( PyExc_TypeError, "lock() got multiple values for keyword argument 'flags'" );
                    goto error_exit;
                }

                _python_par_flags = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_file, key ) )
            {
                if (unlikely( _python_par_file ))
                {
                    PyErr_Format( PyExc_TypeError, "lock() got multiple values for keyword argument 'file'" );
                    goto error_exit;
                }

                _python_par_file = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_flags, key ) )
            {
                if (unlikely( _python_par_flags ))
                {
                    PyErr_Format( PyExc_TypeError, "lock() got multiple values for keyword argument 'flags'" );
                    goto error_exit;
                }

                _python_par_flags = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "lock() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "lock() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "lock() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "lock() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "lock() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "lock() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "lock() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "lock() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "lock() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "lock() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "lock() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "lock() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "lock() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_file != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "lock() got multiple values for keyword argument 'file'" );
             goto error_exit;
         }

        _python_par_file = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_flags != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "lock() got multiple values for keyword argument 'flags'" );
             goto error_exit;
         }

        _python_par_flags = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_6_lock_of_module_django__core__files__locks( self, _python_par_file, _python_par_flags );

error_exit:;

    Py_XDECREF( _python_par_file );
    Py_XDECREF( _python_par_flags );

    return NULL;
}

static PyObject *dparse_function_6_lock_of_module_django__core__files__locks( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_6_lock_of_module_django__core__files__locks( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_lock_of_module_django__core__files__locks( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7_unlock_of_module_django__core__files__locks( Nuitka_FunctionObject *self, PyObject *_python_par_file )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_file( _python_str_plain_file, _python_par_file );

    // Actual function code.
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_7_unlock_of_module_django__core__files__locks( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_file = NULL;
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
                PyErr_Format( PyExc_TypeError, "unlock() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_file == key )
            {
                if (unlikely( _python_par_file ))
                {
                    PyErr_Format( PyExc_TypeError, "unlock() got multiple values for keyword argument 'file'" );
                    goto error_exit;
                }

                _python_par_file = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_file, key ) )
            {
                if (unlikely( _python_par_file ))
                {
                    PyErr_Format( PyExc_TypeError, "unlock() got multiple values for keyword argument 'file'" );
                    goto error_exit;
                }

                _python_par_file = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "unlock() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "unlock() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "unlock() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "unlock() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "unlock() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "unlock() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "unlock() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "unlock() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "unlock() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "unlock() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "unlock() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "unlock() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "unlock() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_file != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "unlock() got multiple values for keyword argument 'file'" );
             goto error_exit;
         }

        _python_par_file = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_7_unlock_of_module_django__core__files__locks( self, _python_par_file );

error_exit:;

    Py_XDECREF( _python_par_file );

    return NULL;
}

static PyObject *dparse_function_7_unlock_of_module_django__core__files__locks( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_7_unlock_of_module_django__core__files__locks( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7_unlock_of_module_django__core__files__locks( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_fd_of_module_django__core__files__locks(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_fd_of_module_django__core__files__locks,
        dparse_function_1_fd_of_module_django__core__files__locks,
        _python_str_plain_fd,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_45dec03bc130eb643810ba6cbe9d3e04,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__locks,
        _python_str_digest_a216f3840269c4683783fa21a3fcad66
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_lock_of_module_django__core__files__locks(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_lock_of_module_django__core__files__locks,
        dparse_function_2_lock_of_module_django__core__files__locks,
        _python_str_plain_lock,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_4b8d1dfe29016f1735d65bb1d78a87bb,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__locks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_unlock_of_module_django__core__files__locks(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_unlock_of_module_django__core__files__locks,
        dparse_function_3_unlock_of_module_django__core__files__locks,
        _python_str_plain_unlock,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_5d785b1fc9f0feb7ca4e56d346eb202b,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__locks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_lock_of_module_django__core__files__locks(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_lock_of_module_django__core__files__locks,
        dparse_function_4_lock_of_module_django__core__files__locks,
        _python_str_plain_lock,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_c8a1e1ef3e1975db57c0dfa030e3520b,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__locks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_unlock_of_module_django__core__files__locks(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_unlock_of_module_django__core__files__locks,
        dparse_function_5_unlock_of_module_django__core__files__locks,
        _python_str_plain_unlock,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_a205b145614f9c50154cc9eaa4a15368,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__locks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_lock_of_module_django__core__files__locks(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_lock_of_module_django__core__files__locks,
        dparse_function_6_lock_of_module_django__core__files__locks,
        _python_str_plain_lock,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_df0be5641d76b56fb32cc90767340328,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__locks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_unlock_of_module_django__core__files__locks(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_unlock_of_module_django__core__files__locks,
        dparse_function_7_unlock_of_module_django__core__files__locks,
        _python_str_plain_unlock,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d52680c26eaafd45614cabd7a50d8598,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__locks,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.core.files.locks",   /* m_name */
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

MOD_INIT_DECL( django__core__files__locks )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__core__files__locks );
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

    // puts( "in initdjango__core__files__locks" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__core__files__locks = Py_InitModule4(
        "django.core.files.locks",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__core__files__locks = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__core__files__locks = (PyDictObject *)((PyModuleObject *)_module_django__core__files__locks)->md_dict;

    assertObject( _module_django__core__files__locks );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_47a675a1c3ff7e2443ff8fce67a9852c, _module_django__core__files__locks );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__core__files__locks );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__core__files__locks != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__core__files__locks, (Nuitka_StringObject *)_python_str_plain___doc__, _python_str_digest_9eabead5a2e53511b086a2be009c55ed );
    UPDATE_STRING_DICT0( _moduledict_django__core__files__locks, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_6c0c38db6d8a0421b59e341bc7afe694 );
    UPDATE_STRING_DICT0( _moduledict_django__core__files__locks, (Nuitka_StringObject *)_python_str_plain___all__, _python_tuple_52efd9af79eca0221b667c7ca2a6ec34_tuple );
    UPDATE_STRING_DICT0( _moduledict_django__core__files__locks, (Nuitka_StringObject *)_python_str_plain_system_type, Py_None );
    PyFrameObject *frame_module_django__core__files__locks = MAKE_FRAME( _codeobj_551af0450c07c4b7034441932ebb3604, _module_django__core__files__locks );

    FrameGuard frame_guard( frame_module_django__core__files__locks );
    try
    {
        assert( Py_REFCNT( frame_module_django__core__files__locks ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 21 );
        try
        {
            frame_guard.setLineNumber( 22 );
            UPDATE_STRING_DICT1( _moduledict_django__core__files__locks, (Nuitka_StringObject *)_python_str_plain_win32con, IMPORT_MODULE( _python_str_plain_win32con, ((PyModuleObject *)_module_django__core__files__locks)->md_dict, ((PyModuleObject *)_module_django__core__files__locks)->md_dict, Py_None, _python_int_neg_1 ) );
            frame_guard.setLineNumber( 23 );
            UPDATE_STRING_DICT1( _moduledict_django__core__files__locks, (Nuitka_StringObject *)_python_str_plain_win32file, IMPORT_MODULE( _python_str_plain_win32file, ((PyModuleObject *)_module_django__core__files__locks)->md_dict, ((PyModuleObject *)_module_django__core__files__locks)->md_dict, Py_None, _python_int_neg_1 ) );
            frame_guard.setLineNumber( 24 );
            UPDATE_STRING_DICT1( _moduledict_django__core__files__locks, (Nuitka_StringObject *)_python_str_plain_pywintypes, IMPORT_MODULE( _python_str_plain_pywintypes, ((PyModuleObject *)_module_django__core__files__locks)->md_dict, ((PyModuleObject *)_module_django__core__files__locks)->md_dict, Py_None, _python_int_neg_1 ) );
            frame_guard.setLineNumber( 25 );
            UPDATE_STRING_DICT1( _moduledict_django__core__files__locks, (Nuitka_StringObject *)_python_str_plain_LOCK_EX, LOOKUP_ATTRIBUTE( _mvar_django__core__files__locks_win32con.asObject0(), _python_str_plain_LOCKFILE_EXCLUSIVE_LOCK ) );
            UPDATE_STRING_DICT0( _moduledict_django__core__files__locks, (Nuitka_StringObject *)_python_str_plain_LOCK_SH, _python_int_0 );
            frame_guard.setLineNumber( 27 );
            UPDATE_STRING_DICT1( _moduledict_django__core__files__locks, (Nuitka_StringObject *)_python_str_plain_LOCK_NB, LOOKUP_ATTRIBUTE( _mvar_django__core__files__locks_win32con.asObject0(), _python_str_plain_LOCKFILE_FAIL_IMMEDIATELY ) );
            frame_guard.setLineNumber( 28 );
            UPDATE_STRING_DICT1( _moduledict_django__core__files__locks, (Nuitka_StringObject *)_python_str_plain___overlapped, CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__locks_pywintypes.asObject0(), _python_str_plain_OVERLAPPED ) ).asObject() ) );
            UPDATE_STRING_DICT0( _moduledict_django__core__files__locks, (Nuitka_StringObject *)_python_str_plain_system_type, _python_str_plain_nt );
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

            if ( _exception.matches( PyExc_ImportError ) || _exception.matches( PyExc_AttributeError ) )
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
        frame_guard.setLineNumber( 33 );
        try
        {
            frame_guard.setLineNumber( 34 );
            UPDATE_STRING_DICT1( _moduledict_django__core__files__locks, (Nuitka_StringObject *)_python_str_plain_fcntl, IMPORT_MODULE( _python_str_plain_fcntl, ((PyModuleObject *)_module_django__core__files__locks)->md_dict, ((PyModuleObject *)_module_django__core__files__locks)->md_dict, Py_None, _python_int_neg_1 ) );
            frame_guard.setLineNumber( 35 );
            UPDATE_STRING_DICT1( _moduledict_django__core__files__locks, (Nuitka_StringObject *)_python_str_plain_LOCK_EX, LOOKUP_ATTRIBUTE( _mvar_django__core__files__locks_fcntl.asObject0(), _python_str_plain_LOCK_EX ) );
            frame_guard.setLineNumber( 36 );
            UPDATE_STRING_DICT1( _moduledict_django__core__files__locks, (Nuitka_StringObject *)_python_str_plain_LOCK_SH, LOOKUP_ATTRIBUTE( _mvar_django__core__files__locks_fcntl.asObject0(), _python_str_plain_LOCK_SH ) );
            frame_guard.setLineNumber( 37 );
            UPDATE_STRING_DICT1( _moduledict_django__core__files__locks, (Nuitka_StringObject *)_python_str_plain_LOCK_NB, LOOKUP_ATTRIBUTE( _mvar_django__core__files__locks_fcntl.asObject0(), _python_str_plain_LOCK_NB ) );
            UPDATE_STRING_DICT0( _moduledict_django__core__files__locks, (Nuitka_StringObject *)_python_str_plain_system_type, _python_str_plain_posix );
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

            if ( _exception.matches( PyExc_ImportError ) || _exception.matches( PyExc_AttributeError ) )
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
        UPDATE_STRING_DICT1( _moduledict_django__core__files__locks, (Nuitka_StringObject *)_python_str_plain_fd, MAKE_FUNCTION_function_1_fd_of_module_django__core__files__locks(  ) );
        frame_guard.setLineNumber( 46 );
        if ( RICH_COMPARE_BOOL_EQ( _mvar_django__core__files__locks_system_type.asObject0(), _python_str_plain_nt ) )
        {
            UPDATE_STRING_DICT1( _moduledict_django__core__files__locks, (Nuitka_StringObject *)_python_str_plain_lock, MAKE_FUNCTION_function_2_lock_of_module_django__core__files__locks(  ) );
            UPDATE_STRING_DICT1( _moduledict_django__core__files__locks, (Nuitka_StringObject *)_python_str_plain_unlock, MAKE_FUNCTION_function_3_unlock_of_module_django__core__files__locks(  ) );
        }
        else
        {
            frame_guard.setLineNumber( 54 );
            if ( RICH_COMPARE_BOOL_EQ( _mvar_django__core__files__locks_system_type.asObject0(), _python_str_plain_posix ) )
            {
                UPDATE_STRING_DICT1( _moduledict_django__core__files__locks, (Nuitka_StringObject *)_python_str_plain_lock, MAKE_FUNCTION_function_4_lock_of_module_django__core__files__locks(  ) );
                UPDATE_STRING_DICT1( _moduledict_django__core__files__locks, (Nuitka_StringObject *)_python_str_plain_unlock, MAKE_FUNCTION_function_5_unlock_of_module_django__core__files__locks(  ) );
            }
            else
            {
                {
                    PyObject *_python_tmp_assign_source = Py_None;
                    UPDATE_STRING_DICT0( _moduledict_django__core__files__locks, (Nuitka_StringObject *)_python_str_plain_LOCK_EX, _python_tmp_assign_source );
                    UPDATE_STRING_DICT0( _moduledict_django__core__files__locks, (Nuitka_StringObject *)_python_str_plain_LOCK_SH, _python_tmp_assign_source );
                    UPDATE_STRING_DICT0( _moduledict_django__core__files__locks, (Nuitka_StringObject *)_python_str_plain_LOCK_NB, _python_tmp_assign_source );
                }
                UPDATE_STRING_DICT1( _moduledict_django__core__files__locks, (Nuitka_StringObject *)_python_str_plain_lock, MAKE_FUNCTION_function_6_lock_of_module_django__core__files__locks(  ) );
                UPDATE_STRING_DICT1( _moduledict_django__core__files__locks, (Nuitka_StringObject *)_python_str_plain_unlock, MAKE_FUNCTION_function_7_unlock_of_module_django__core__files__locks(  ) );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__core__files__locks)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }

   return MOD_RETURN_VALUE( _module_django__core__files__locks );
}
