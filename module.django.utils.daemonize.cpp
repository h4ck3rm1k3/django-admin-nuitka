// Generated code for Python source for module 'django.utils.daemonize'
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

// The _module_django__utils__daemonize is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__utils__daemonize;
PyDictObject *_moduledict_django__utils__daemonize;

// The module level variables.
static PyObjectGlobalVariable_django__utils__daemonize _mvar_django__utils__daemonize_NullDevice( &_module_django__utils__daemonize, &_python_str_plain_NullDevice );
static PyObjectGlobalVariable_django__utils__daemonize _mvar_django__utils__daemonize___metaclass__( &_module_django__utils__daemonize, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__utils__daemonize _mvar_django__utils__daemonize_os( &_module_django__utils__daemonize, &_python_str_plain_os );
static PyObjectGlobalVariable_django__utils__daemonize _mvar_django__utils__daemonize_sys( &_module_django__utils__daemonize, &_python_str_plain_sys );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_3_NullDevice_of_module_django__utils__daemonize(  );


static PyObject *MAKE_FUNCTION_function_1_become_daemon_of_module_django__utils__daemonize(  );


static PyObject *MAKE_FUNCTION_function_1_write_of_class_3_NullDevice_of_module_django__utils__daemonize(  );


static PyObject *MAKE_FUNCTION_function_2_become_daemon_of_module_django__utils__daemonize(  );


// The module function definitions.
static PyObject *impl_function_1_become_daemon_of_module_django__utils__daemonize( Nuitka_FunctionObject *self, PyObject *_python_par_our_home_dir, PyObject *_python_par_out_log, PyObject *_python_par_err_log, PyObject *_python_par_umask )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_our_home_dir( _python_str_plain_our_home_dir, _python_par_our_home_dir );
    PyObjectLocalParameterVariableNoDel _python_var_out_log( _python_str_plain_out_log, _python_par_out_log );
    PyObjectLocalParameterVariableNoDel _python_var_err_log( _python_str_plain_err_log, _python_par_err_log );
    PyObjectLocalParameterVariableNoDel _python_var_umask( _python_str_plain_umask, _python_par_umask );
    PyObjectLocalVariable _python_var_e( _python_str_plain_e );
    PyObjectLocalVariable _python_var_si( _python_str_plain_si );
    PyObjectLocalVariable _python_var_so( _python_str_plain_so );
    PyObjectLocalVariable _python_var_se( _python_str_plain_se );

    // Actual function code.
    static PyFrameObject *frame_function_1_become_daemon_of_module_django__utils__daemonize = NULL;

    if ( isFrameUnusable( frame_function_1_become_daemon_of_module_django__utils__daemonize ) )
    {
        if ( frame_function_1_become_daemon_of_module_django__utils__daemonize )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_become_daemon_of_module_django__utils__daemonize" );
#endif
            Py_DECREF( frame_function_1_become_daemon_of_module_django__utils__daemonize );
        }

        frame_function_1_become_daemon_of_module_django__utils__daemonize = MAKE_FRAME( _codeobj_3bad4923fc9e5d8c2ce426b517f15089, _module_django__utils__daemonize );
    }

    FrameGuard frame_guard( frame_function_1_become_daemon_of_module_django__utils__daemonize );
    try
    {
        assert( Py_REFCNT( frame_function_1_become_daemon_of_module_django__utils__daemonize ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 9 );
        try
        {
            frame_guard.setLineNumber( 10 );
            if ( RICH_COMPARE_BOOL_GT( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__daemonize_os.asObject0(), _python_str_plain_fork ) ).asObject() ) ).asObject(), _python_int_0 ) )
            {
                frame_guard.setLineNumber( 11 );
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__daemonize_sys.asObject0(), _python_str_plain_exit ) ).asObject(), _python_int_0 ) );
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

            if ( _exception.matches( PyExc_OSError ) )
            {
                frame_guard.detachFrame();
                _python_var_e.assign0( _exception.getValue() );
                frame_guard.setLineNumber( 13 );
                {
                    PyObjectTempKeeper1 call3;
                    PyObjectTempKeeper1 make_tuple1;
                    DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__daemonize_sys.asObject0(), _python_str_plain_stderr ) ).asObject(), _python_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_814895ff19a0237d28c42a6b8a9196ce, PyObjectTemporary( ( make_tuple1.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_errno ) ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_strerror ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                }
                frame_guard.setLineNumber( 14 );
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__daemonize_sys.asObject0(), _python_str_plain_exit ) ).asObject(), _python_int_pos_1 ) );
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
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__daemonize_os.asObject0(), _python_str_plain_setsid ) ).asObject() ) );
        frame_guard.setLineNumber( 16 );
        {
            PyObjectTempKeeper1 call5;
            DECREASE_REFCOUNT( ( call5.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__daemonize_os.asObject0(), _python_str_plain_chdir ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_our_home_dir.asObject() ) ) );
        }
        frame_guard.setLineNumber( 17 );
        {
            PyObjectTempKeeper1 call7;
            DECREASE_REFCOUNT( ( call7.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__daemonize_os.asObject0(), _python_str_plain_umask ) ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _python_var_umask.asObject() ) ) );
        }
        frame_guard.setLineNumber( 20 );
        try
        {
            frame_guard.setLineNumber( 21 );
            if ( RICH_COMPARE_BOOL_GT( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__daemonize_os.asObject0(), _python_str_plain_fork ) ).asObject() ) ).asObject(), _python_int_0 ) )
            {
                frame_guard.setLineNumber( 22 );
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__daemonize_os.asObject0(), _python_str_plain__exit ) ).asObject(), _python_int_0 ) );
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

            if ( _exception.matches( PyExc_OSError ) )
            {
                frame_guard.detachFrame();
                _python_var_e.assign0( _exception.getValue() );
                frame_guard.setLineNumber( 24 );
                {
                    PyObjectTempKeeper1 call11;
                    PyObjectTempKeeper1 make_tuple9;
                    DECREASE_REFCOUNT( ( call11.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__daemonize_sys.asObject0(), _python_str_plain_stderr ) ).asObject(), _python_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_7401b6dba2fba9f5813244956c5c4d83, PyObjectTemporary( ( make_tuple9.assign( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_errno ) ), MAKE_TUPLE2( make_tuple9.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_e.asObject(), _python_str_plain_strerror ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                }
                frame_guard.setLineNumber( 25 );
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__daemonize_os.asObject0(), _python_str_plain__exit ) ).asObject(), _python_int_pos_1 ) );
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
        frame_guard.setLineNumber( 27 );
        _python_var_si.assign1( OPEN_FILE( _python_str_digest_ee35e7c782791419f29316f183d5d6d3, _python_str_plain_r, NULL ) );
        frame_guard.setLineNumber( 28 );
        _python_var_so.assign1( OPEN_FILE( _python_var_out_log.asObject(), _python_str_digest_c8948c20094f64200c2b8fba047bdb83, _python_int_0 ) );
        frame_guard.setLineNumber( 29 );
        _python_var_se.assign1( OPEN_FILE( _python_var_err_log.asObject(), _python_str_digest_c8948c20094f64200c2b8fba047bdb83, _python_int_0 ) );
        frame_guard.setLineNumber( 30 );
        {
            PyObjectTempKeeper1 call13;
            PyObjectTempKeeper1 call14;
            DECREASE_REFCOUNT( ( call13.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__daemonize_os.asObject0(), _python_str_plain_dup2 ) ), call14.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_si.asObject(), _python_str_plain_fileno ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), call14.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__daemonize_sys.asObject0(), _python_str_plain_stdin ) ).asObject(), _python_str_plain_fileno ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 31 );
        {
            PyObjectTempKeeper1 call16;
            PyObjectTempKeeper1 call17;
            DECREASE_REFCOUNT( ( call16.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__daemonize_os.asObject0(), _python_str_plain_dup2 ) ), call17.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_so.asObject(), _python_str_plain_fileno ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call16.asObject0(), call17.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__daemonize_sys.asObject0(), _python_str_plain_stdout ) ).asObject(), _python_str_plain_fileno ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 32 );
        {
            PyObjectTempKeeper1 call19;
            PyObjectTempKeeper1 call20;
            DECREASE_REFCOUNT( ( call19.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__daemonize_os.asObject0(), _python_str_plain_dup2 ) ), call20.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_se.asObject(), _python_str_plain_fileno ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call19.asObject0(), call20.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__daemonize_sys.asObject0(), _python_str_plain_stderr ) ).asObject(), _python_str_plain_fileno ) ).asObject() ) ).asObject() ) ) );
        }
        {
            frame_guard.setLineNumber( 34 );
            PyObject *_tmp_python_tmp_source_iter;
            {
                PyObjectTempKeeper0 make_tuple22;
                _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( make_tuple22.assign( _python_var_so.asObject() ), MAKE_TUPLE2( make_tuple22.asObject0(), _python_var_se.asObject() ) ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
            {
                    PyObject *tmp_identifier = _python_tmp_element_1.asObject();
                    SET_ATTRIBUTE( tmp_identifier, _mvar_django__utils__daemonize_sys.asObject0(), _python_str_plain_stdout );
            }
            {
                    PyObject *tmp_identifier = _python_tmp_element_2.asObject();
                    SET_ATTRIBUTE( tmp_identifier, _mvar_django__utils__daemonize_sys.asObject0(), _python_str_plain_stderr );
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
        frame_guard.getFrame0()->f_locals = _python_var_umask.updateLocalsDict( _python_var_err_log.updateLocalsDict( _python_var_out_log.updateLocalsDict( _python_var_our_home_dir.updateLocalsDict( _python_var_se.updateLocalsDict( _python_var_so.updateLocalsDict( _python_var_si.updateLocalsDict( _python_var_e.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_become_daemon_of_module_django__utils__daemonize )
        {
           Py_DECREF( frame_function_1_become_daemon_of_module_django__utils__daemonize );
           frame_function_1_become_daemon_of_module_django__utils__daemonize = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1_become_daemon_of_module_django__utils__daemonize( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_our_home_dir = NULL;
    PyObject *_python_par_out_log = NULL;
    PyObject *_python_par_err_log = NULL;
    PyObject *_python_par_umask = NULL;
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
                PyErr_Format( PyExc_TypeError, "become_daemon() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_our_home_dir == key )
            {
                if (unlikely( _python_par_our_home_dir ))
                {
                    PyErr_Format( PyExc_TypeError, "become_daemon() got multiple values for keyword argument 'our_home_dir'" );
                    goto error_exit;
                }

                _python_par_our_home_dir = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_out_log == key )
            {
                if (unlikely( _python_par_out_log ))
                {
                    PyErr_Format( PyExc_TypeError, "become_daemon() got multiple values for keyword argument 'out_log'" );
                    goto error_exit;
                }

                _python_par_out_log = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_err_log == key )
            {
                if (unlikely( _python_par_err_log ))
                {
                    PyErr_Format( PyExc_TypeError, "become_daemon() got multiple values for keyword argument 'err_log'" );
                    goto error_exit;
                }

                _python_par_err_log = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_umask == key )
            {
                if (unlikely( _python_par_umask ))
                {
                    PyErr_Format( PyExc_TypeError, "become_daemon() got multiple values for keyword argument 'umask'" );
                    goto error_exit;
                }

                _python_par_umask = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_our_home_dir, key ) )
            {
                if (unlikely( _python_par_our_home_dir ))
                {
                    PyErr_Format( PyExc_TypeError, "become_daemon() got multiple values for keyword argument 'our_home_dir'" );
                    goto error_exit;
                }

                _python_par_our_home_dir = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_out_log, key ) )
            {
                if (unlikely( _python_par_out_log ))
                {
                    PyErr_Format( PyExc_TypeError, "become_daemon() got multiple values for keyword argument 'out_log'" );
                    goto error_exit;
                }

                _python_par_out_log = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_err_log, key ) )
            {
                if (unlikely( _python_par_err_log ))
                {
                    PyErr_Format( PyExc_TypeError, "become_daemon() got multiple values for keyword argument 'err_log'" );
                    goto error_exit;
                }

                _python_par_err_log = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_umask, key ) )
            {
                if (unlikely( _python_par_umask ))
                {
                    PyErr_Format( PyExc_TypeError, "become_daemon() got multiple values for keyword argument 'umask'" );
                    goto error_exit;
                }

                _python_par_umask = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "become_daemon() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "become_daemon() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "become_daemon() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "become_daemon() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "become_daemon() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "become_daemon() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "become_daemon() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "become_daemon() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "become_daemon() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 0 ))
    {
        if ( 4 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "become_daemon() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "become_daemon() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "become_daemon() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "become_daemon() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 4 ? args_given : 4;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_our_home_dir != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "become_daemon() got multiple values for keyword argument 'our_home_dir'" );
             goto error_exit;
         }

        _python_par_our_home_dir = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_out_log != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "become_daemon() got multiple values for keyword argument 'out_log'" );
             goto error_exit;
         }

        _python_par_out_log = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_err_log != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "become_daemon() got multiple values for keyword argument 'err_log'" );
             goto error_exit;
         }

        _python_par_err_log = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_umask != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "become_daemon() got multiple values for keyword argument 'umask'" );
             goto error_exit;
         }

        _python_par_umask = INCREASE_REFCOUNT( args[ 3 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_our_home_dir == NULL )
    {
        _python_par_our_home_dir = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_our_home_dir );
    }
    if ( _python_par_out_log == NULL )
    {
        _python_par_out_log = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_out_log );
    }
    if ( _python_par_err_log == NULL )
    {
        _python_par_err_log = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 2 ) );
        assertObject( _python_par_err_log );
    }
    if ( _python_par_umask == NULL )
    {
        _python_par_umask = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 3 ) );
        assertObject( _python_par_umask );
    }


    return impl_function_1_become_daemon_of_module_django__utils__daemonize( self, _python_par_our_home_dir, _python_par_out_log, _python_par_err_log, _python_par_umask );

error_exit:;

    Py_XDECREF( _python_par_our_home_dir );
    Py_XDECREF( _python_par_out_log );
    Py_XDECREF( _python_par_err_log );
    Py_XDECREF( _python_par_umask );

    return NULL;
}

static PyObject *dparse_function_1_become_daemon_of_module_django__utils__daemonize( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_1_become_daemon_of_module_django__utils__daemonize( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_become_daemon_of_module_django__utils__daemonize( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_become_daemon_of_module_django__utils__daemonize( Nuitka_FunctionObject *self, PyObject *_python_par_our_home_dir, PyObject *_python_par_out_log, PyObject *_python_par_err_log, PyObject *_python_par_umask )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_our_home_dir( _python_str_plain_our_home_dir, _python_par_our_home_dir );
    PyObjectLocalParameterVariableNoDel _python_var_out_log( _python_str_plain_out_log, _python_par_out_log );
    PyObjectLocalParameterVariableNoDel _python_var_err_log( _python_str_plain_err_log, _python_par_err_log );
    PyObjectLocalParameterVariableNoDel _python_var_umask( _python_str_plain_umask, _python_par_umask );

    // Actual function code.
    static PyFrameObject *frame_function_2_become_daemon_of_module_django__utils__daemonize = NULL;

    if ( isFrameUnusable( frame_function_2_become_daemon_of_module_django__utils__daemonize ) )
    {
        if ( frame_function_2_become_daemon_of_module_django__utils__daemonize )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_become_daemon_of_module_django__utils__daemonize" );
#endif
            Py_DECREF( frame_function_2_become_daemon_of_module_django__utils__daemonize );
        }

        frame_function_2_become_daemon_of_module_django__utils__daemonize = MAKE_FRAME( _codeobj_0c2fbcfd3726277578f420bfe616e5d2, _module_django__utils__daemonize );
    }

    FrameGuard frame_guard( frame_function_2_become_daemon_of_module_django__utils__daemonize );
    try
    {
        assert( Py_REFCNT( frame_function_2_become_daemon_of_module_django__utils__daemonize ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 41 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__daemonize_os.asObject0(), _python_str_plain_chdir ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_our_home_dir.asObject() ) ) );
        }
        frame_guard.setLineNumber( 42 );
        {
            PyObjectTempKeeper1 call3;
            DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__daemonize_os.asObject0(), _python_str_plain_umask ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_umask.asObject() ) ) );
        }
        frame_guard.setLineNumber( 43 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__daemonize_sys.asObject0(), _python_str_plain_stdin ) ).asObject(), _python_str_plain_close ) ).asObject() ) );
        frame_guard.setLineNumber( 44 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__daemonize_sys.asObject0(), _python_str_plain_stdout ) ).asObject(), _python_str_plain_close ) ).asObject() ) );
        frame_guard.setLineNumber( 45 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__daemonize_sys.asObject0(), _python_str_plain_stderr ) ).asObject(), _python_str_plain_close ) ).asObject() ) );
        frame_guard.setLineNumber( 46 );
        if ( CHECK_IF_TRUE( _python_var_err_log.asObject() ) )
        {
            frame_guard.setLineNumber( 47 );
            {
                    PyObjectTemporary tmp_identifier( OPEN_FILE( _python_var_err_log.asObject(), _python_str_plain_a, _python_int_0 ) );
                    SET_ATTRIBUTE( tmp_identifier.asObject(), _mvar_django__utils__daemonize_sys.asObject0(), _python_str_plain_stderr );
            }
        }
        else
        {
            frame_guard.setLineNumber( 49 );
            {
                    PyObjectTemporary tmp_identifier( CALL_FUNCTION_NO_ARGS( _mvar_django__utils__daemonize_NullDevice.asObject0() ) );
                    SET_ATTRIBUTE( tmp_identifier.asObject(), _mvar_django__utils__daemonize_sys.asObject0(), _python_str_plain_stderr );
            }
        }
        frame_guard.setLineNumber( 50 );
        if ( CHECK_IF_TRUE( _python_var_out_log.asObject() ) )
        {
            frame_guard.setLineNumber( 51 );
            {
                    PyObjectTemporary tmp_identifier( OPEN_FILE( _python_var_out_log.asObject(), _python_str_plain_a, _python_int_0 ) );
                    SET_ATTRIBUTE( tmp_identifier.asObject(), _mvar_django__utils__daemonize_sys.asObject0(), _python_str_plain_stdout );
            }
        }
        else
        {
            frame_guard.setLineNumber( 53 );
            {
                    PyObjectTemporary tmp_identifier( CALL_FUNCTION_NO_ARGS( _mvar_django__utils__daemonize_NullDevice.asObject0() ) );
                    SET_ATTRIBUTE( tmp_identifier.asObject(), _mvar_django__utils__daemonize_sys.asObject0(), _python_str_plain_stdout );
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
        frame_guard.getFrame0()->f_locals = _python_var_umask.updateLocalsDict( _python_var_err_log.updateLocalsDict( _python_var_out_log.updateLocalsDict( _python_var_our_home_dir.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_become_daemon_of_module_django__utils__daemonize )
        {
           Py_DECREF( frame_function_2_become_daemon_of_module_django__utils__daemonize );
           frame_function_2_become_daemon_of_module_django__utils__daemonize = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2_become_daemon_of_module_django__utils__daemonize( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_our_home_dir = NULL;
    PyObject *_python_par_out_log = NULL;
    PyObject *_python_par_err_log = NULL;
    PyObject *_python_par_umask = NULL;
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
                PyErr_Format( PyExc_TypeError, "become_daemon() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_our_home_dir == key )
            {
                if (unlikely( _python_par_our_home_dir ))
                {
                    PyErr_Format( PyExc_TypeError, "become_daemon() got multiple values for keyword argument 'our_home_dir'" );
                    goto error_exit;
                }

                _python_par_our_home_dir = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_out_log == key )
            {
                if (unlikely( _python_par_out_log ))
                {
                    PyErr_Format( PyExc_TypeError, "become_daemon() got multiple values for keyword argument 'out_log'" );
                    goto error_exit;
                }

                _python_par_out_log = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_err_log == key )
            {
                if (unlikely( _python_par_err_log ))
                {
                    PyErr_Format( PyExc_TypeError, "become_daemon() got multiple values for keyword argument 'err_log'" );
                    goto error_exit;
                }

                _python_par_err_log = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_umask == key )
            {
                if (unlikely( _python_par_umask ))
                {
                    PyErr_Format( PyExc_TypeError, "become_daemon() got multiple values for keyword argument 'umask'" );
                    goto error_exit;
                }

                _python_par_umask = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_our_home_dir, key ) )
            {
                if (unlikely( _python_par_our_home_dir ))
                {
                    PyErr_Format( PyExc_TypeError, "become_daemon() got multiple values for keyword argument 'our_home_dir'" );
                    goto error_exit;
                }

                _python_par_our_home_dir = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_out_log, key ) )
            {
                if (unlikely( _python_par_out_log ))
                {
                    PyErr_Format( PyExc_TypeError, "become_daemon() got multiple values for keyword argument 'out_log'" );
                    goto error_exit;
                }

                _python_par_out_log = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_err_log, key ) )
            {
                if (unlikely( _python_par_err_log ))
                {
                    PyErr_Format( PyExc_TypeError, "become_daemon() got multiple values for keyword argument 'err_log'" );
                    goto error_exit;
                }

                _python_par_err_log = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_umask, key ) )
            {
                if (unlikely( _python_par_umask ))
                {
                    PyErr_Format( PyExc_TypeError, "become_daemon() got multiple values for keyword argument 'umask'" );
                    goto error_exit;
                }

                _python_par_umask = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "become_daemon() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "become_daemon() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "become_daemon() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "become_daemon() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "become_daemon() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "become_daemon() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "become_daemon() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "become_daemon() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "become_daemon() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 0 ))
    {
        if ( 4 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "become_daemon() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "become_daemon() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "become_daemon() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "become_daemon() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 4 ? args_given : 4;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_our_home_dir != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "become_daemon() got multiple values for keyword argument 'our_home_dir'" );
             goto error_exit;
         }

        _python_par_our_home_dir = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_out_log != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "become_daemon() got multiple values for keyword argument 'out_log'" );
             goto error_exit;
         }

        _python_par_out_log = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_err_log != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "become_daemon() got multiple values for keyword argument 'err_log'" );
             goto error_exit;
         }

        _python_par_err_log = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_umask != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "become_daemon() got multiple values for keyword argument 'umask'" );
             goto error_exit;
         }

        _python_par_umask = INCREASE_REFCOUNT( args[ 3 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_our_home_dir == NULL )
    {
        _python_par_our_home_dir = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_our_home_dir );
    }
    if ( _python_par_out_log == NULL )
    {
        _python_par_out_log = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_out_log );
    }
    if ( _python_par_err_log == NULL )
    {
        _python_par_err_log = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 2 ) );
        assertObject( _python_par_err_log );
    }
    if ( _python_par_umask == NULL )
    {
        _python_par_umask = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 3 ) );
        assertObject( _python_par_umask );
    }


    return impl_function_2_become_daemon_of_module_django__utils__daemonize( self, _python_par_our_home_dir, _python_par_out_log, _python_par_err_log, _python_par_umask );

error_exit:;

    Py_XDECREF( _python_par_our_home_dir );
    Py_XDECREF( _python_par_out_log );
    Py_XDECREF( _python_par_err_log );
    Py_XDECREF( _python_par_umask );

    return NULL;
}

static PyObject *dparse_function_2_become_daemon_of_module_django__utils__daemonize( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_2_become_daemon_of_module_django__utils__daemonize( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_become_daemon_of_module_django__utils__daemonize( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_3_NullDevice_of_module_django__utils__daemonize(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var_write( _python_str_plain_write );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_daemonize );
    _python_var___doc__.assign0( _python_str_digest_ef4f8244c1ce04215a12efdfdb18858d );
    _python_var_write.assign1( MAKE_FUNCTION_function_1_write_of_class_3_NullDevice_of_module_django__utils__daemonize(  ) );
    return _python_var_write.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) );
}


static PyObject *impl_function_1_write_of_class_3_NullDevice_of_module_django__utils__daemonize( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_s )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_s( _python_str_plain_s, _python_par_s );

    // Actual function code.
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1_write_of_class_3_NullDevice_of_module_django__utils__daemonize( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
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
                PyErr_Format( PyExc_TypeError, "write() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "write() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_s == key )
            {
                if (unlikely( _python_par_s ))
                {
                    PyErr_Format( PyExc_TypeError, "write() got multiple values for keyword argument 's'" );
                    goto error_exit;
                }

                _python_par_s = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "write() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_s, key ) )
            {
                if (unlikely( _python_par_s ))
                {
                    PyErr_Format( PyExc_TypeError, "write() got multiple values for keyword argument 's'" );
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
                   "write() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "write() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "write() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "write() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "write() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "write() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "write() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "write() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "write() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "write() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "write() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "write() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "write() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "write() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_s != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "write() got multiple values for keyword argument 's'" );
             goto error_exit;
         }

        _python_par_s = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_1_write_of_class_3_NullDevice_of_module_django__utils__daemonize( self, _python_par_self, _python_par_s );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_s );

    return NULL;
}

static PyObject *dparse_function_1_write_of_class_3_NullDevice_of_module_django__utils__daemonize( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1_write_of_class_3_NullDevice_of_module_django__utils__daemonize( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_write_of_class_3_NullDevice_of_module_django__utils__daemonize( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_become_daemon_of_module_django__utils__daemonize(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_become_daemon_of_module_django__utils__daemonize,
        dparse_function_1_become_daemon_of_module_django__utils__daemonize,
        _python_str_plain_become_daemon,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_3bad4923fc9e5d8c2ce426b517f15089,
        INCREASE_REFCOUNT( _python_tuple_b5090591db5ed2dbfed0db4181386d40_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__daemonize,
        _python_str_digest_5e525b073ef8b4ac8f5a95e83d2875a0
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_write_of_class_3_NullDevice_of_module_django__utils__daemonize(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_write_of_class_3_NullDevice_of_module_django__utils__daemonize,
        dparse_function_1_write_of_class_3_NullDevice_of_module_django__utils__daemonize,
        _python_str_plain_write,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_0df371af9b4d2897ceb8e09a50c78911,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__daemonize,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_become_daemon_of_module_django__utils__daemonize(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_become_daemon_of_module_django__utils__daemonize,
        dparse_function_2_become_daemon_of_module_django__utils__daemonize,
        _python_str_plain_become_daemon,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_0c2fbcfd3726277578f420bfe616e5d2,
        INCREASE_REFCOUNT( _python_tuple_str_dot_none_none_int_pos_18_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__daemonize,
        _python_str_digest_e55c2dc5f486f593a0f3f206cc1b306b
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.utils.daemonize",   /* m_name */
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

MOD_INIT_DECL( django__utils__daemonize )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__utils__daemonize );
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

    // puts( "in initdjango__utils__daemonize" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__utils__daemonize = Py_InitModule4(
        "django.utils.daemonize",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__utils__daemonize = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__utils__daemonize = (PyDictObject *)((PyModuleObject *)_module_django__utils__daemonize)->md_dict;

    assertObject( _module_django__utils__daemonize );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_80bfe265d1985d62882789aea3dbf320, _module_django__utils__daemonize );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__utils__daemonize );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__utils__daemonize != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__utils__daemonize, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django__utils__daemonize, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_a7299e40a1966ee35baee71c5dbedf4a );
    PyFrameObject *frame_module_django__utils__daemonize = MAKE_FRAME( _codeobj_f503ccd23f488fd254a4ab1ac2cb5d15, _module_django__utils__daemonize );

    FrameGuard frame_guard( frame_module_django__utils__daemonize );
    try
    {
        assert( Py_REFCNT( frame_module_django__utils__daemonize ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 1 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__daemonize, (Nuitka_StringObject *)_python_str_plain_os, IMPORT_MODULE( _python_str_plain_os, ((PyModuleObject *)_module_django__utils__daemonize)->md_dict, ((PyModuleObject *)_module_django__utils__daemonize)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 2 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__daemonize, (Nuitka_StringObject *)_python_str_plain_sys, IMPORT_MODULE( _python_str_plain_sys, ((PyModuleObject *)_module_django__utils__daemonize)->md_dict, ((PyModuleObject *)_module_django__utils__daemonize)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 4 );
        if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__daemonize_os.asObject0(), _python_str_plain_name ) ).asObject(), _python_str_plain_posix ) )
        {
            UPDATE_STRING_DICT1( _moduledict_django__utils__daemonize, (Nuitka_StringObject *)_python_str_plain_become_daemon, MAKE_FUNCTION_function_1_become_daemon_of_module_django__utils__daemonize(  ) );
        }
        else
        {
            UPDATE_STRING_DICT1( _moduledict_django__utils__daemonize, (Nuitka_StringObject *)_python_str_plain_become_daemon, MAKE_FUNCTION_function_2_become_daemon_of_module_django__utils__daemonize(  ) );
            {
                PyObject *_python_tmp_bases = _python_tuple_empty;
                frame_guard.setLineNumber( 55 );
                PyObjectTemporary _python_tmp_class_dict( impl_class_3_NullDevice_of_module_django__utils__daemonize(  ) );
                PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases, ( _mvar_django__utils__daemonize___metaclass__.isInitialized( false ) ? _mvar_django__utils__daemonize___metaclass__.asObject0() : NULL ) ) ) );
                PyObject *_tmp_python_tmp_class;
                {
                    PyObjectTempKeeper0 call1;
                    PyObjectTempKeeper0 call3;
                    _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_NullDevice, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
                }
                PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
                UPDATE_STRING_DICT0( _moduledict_django__utils__daemonize, (Nuitka_StringObject *)_python_str_plain_NullDevice, _python_tmp_class.asObject() );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__utils__daemonize)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }

   return MOD_RETURN_VALUE( _module_django__utils__daemonize );
}
