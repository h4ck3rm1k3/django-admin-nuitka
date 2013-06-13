// Generated code for Python source for module 'django.core.servers.fastcgi'
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

// The _module_django__core__servers__fastcgi is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__core__servers__fastcgi;
PyDictObject *_moduledict_django__core__servers__fastcgi;

// The module level variables.
static PyObjectGlobalVariable_django__core__servers__fastcgi _mvar_django__core__servers__fastcgi_FASTCGI_HELP( &_module_django__core__servers__fastcgi, &_python_str_plain_FASTCGI_HELP );
static PyObjectGlobalVariable_django__core__servers__fastcgi _mvar_django__core__servers__fastcgi_FASTCGI_OPTIONS( &_module_django__core__servers__fastcgi, &_python_str_plain_FASTCGI_OPTIONS );
static PyObjectGlobalVariable_django__core__servers__fastcgi _mvar_django__core__servers__fastcgi_fastcgi_help( &_module_django__core__servers__fastcgi, &_python_str_plain_fastcgi_help );
static PyObjectGlobalVariable_django__core__servers__fastcgi _mvar_django__core__servers__fastcgi_importlib( &_module_django__core__servers__fastcgi, &_python_str_plain_importlib );
static PyObjectGlobalVariable_django__core__servers__fastcgi _mvar_django__core__servers__fastcgi_os( &_module_django__core__servers__fastcgi, &_python_str_plain_os );
static PyObjectGlobalVariable_django__core__servers__fastcgi _mvar_django__core__servers__fastcgi_sys( &_module_django__core__servers__fastcgi, &_python_str_plain_sys );

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_fastcgi_help_of_module_django__core__servers__fastcgi(  );


static PyObject *MAKE_FUNCTION_function_2_runfastcgi_of_module_django__core__servers__fastcgi( PyObject *defaults );


// The module function definitions.
static PyObject *impl_function_1_fastcgi_help_of_module_django__core__servers__fastcgi( Nuitka_FunctionObject *self, PyObject *_python_par_message )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_message( _python_str_plain_message, _python_par_message );

    // Actual function code.
    static PyFrameObject *frame_function_1_fastcgi_help_of_module_django__core__servers__fastcgi = NULL;

    if ( isFrameUnusable( frame_function_1_fastcgi_help_of_module_django__core__servers__fastcgi ) )
    {
        if ( frame_function_1_fastcgi_help_of_module_django__core__servers__fastcgi )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_fastcgi_help_of_module_django__core__servers__fastcgi" );
#endif
            Py_DECREF( frame_function_1_fastcgi_help_of_module_django__core__servers__fastcgi );
        }

        frame_function_1_fastcgi_help_of_module_django__core__servers__fastcgi = MAKE_FRAME( _codeobj_5ab76f09c1eb1746a72cf199007a634e, _module_django__core__servers__fastcgi );
    }

    FrameGuard frame_guard( frame_function_1_fastcgi_help_of_module_django__core__servers__fastcgi );
    try
    {
        assert( Py_REFCNT( frame_function_1_fastcgi_help_of_module_django__core__servers__fastcgi ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 85 );
        PRINT_ITEM_TO( NULL, PyObjectTemporary( TO_STR( _mvar_django__core__servers__fastcgi_FASTCGI_HELP.asObject0() ) ).asObject() );
        PRINT_NEW_LINE_TO( NULL );
        frame_guard.setLineNumber( 86 );
        if ( CHECK_IF_TRUE( _python_var_message.asObject() ) )
        {
            frame_guard.setLineNumber( 87 );
            PRINT_ITEM_TO( NULL, PyObjectTemporary( TO_STR( _python_var_message.asObject() ) ).asObject() );
            PRINT_NEW_LINE_TO( NULL );
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
        frame_guard.getFrame0()->f_locals = _python_var_message.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_1_fastcgi_help_of_module_django__core__servers__fastcgi )
        {
           Py_DECREF( frame_function_1_fastcgi_help_of_module_django__core__servers__fastcgi );
           frame_function_1_fastcgi_help_of_module_django__core__servers__fastcgi = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_False );
}
static PyObject *fparse_function_1_fastcgi_help_of_module_django__core__servers__fastcgi( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_message = NULL;
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
                PyErr_Format( PyExc_TypeError, "fastcgi_help() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_message == key )
            {
                if (unlikely( _python_par_message ))
                {
                    PyErr_Format( PyExc_TypeError, "fastcgi_help() got multiple values for keyword argument 'message'" );
                    goto error_exit;
                }

                _python_par_message = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_message, key ) )
            {
                if (unlikely( _python_par_message ))
                {
                    PyErr_Format( PyExc_TypeError, "fastcgi_help() got multiple values for keyword argument 'message'" );
                    goto error_exit;
                }

                _python_par_message = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "fastcgi_help() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "fastcgi_help() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "fastcgi_help() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "fastcgi_help() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "fastcgi_help() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "fastcgi_help() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "fastcgi_help() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "fastcgi_help() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "fastcgi_help() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "fastcgi_help() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "fastcgi_help() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "fastcgi_help() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "fastcgi_help() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_message != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "fastcgi_help() got multiple values for keyword argument 'message'" );
             goto error_exit;
         }

        _python_par_message = INCREASE_REFCOUNT( args[ 0 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_message == NULL )
    {
        _python_par_message = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_message );
    }


    return impl_function_1_fastcgi_help_of_module_django__core__servers__fastcgi( self, _python_par_message );

error_exit:;

    Py_XDECREF( _python_par_message );

    return NULL;
}

static PyObject *dparse_function_1_fastcgi_help_of_module_django__core__servers__fastcgi( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_1_fastcgi_help_of_module_django__core__servers__fastcgi( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_fastcgi_help_of_module_django__core__servers__fastcgi( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_runfastcgi_of_module_django__core__servers__fastcgi( Nuitka_FunctionObject *self, PyObject *_python_par_argset, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_argset( _python_str_plain_argset, _python_par_argset );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );
    PyObjectLocalVariable _python_var_options( _python_str_plain_options );
    PyObjectLocalVariable _python_var_x( _python_str_plain_x );
    PyObjectLocalVariable _python_var_k( _python_str_plain_k );
    PyObjectLocalVariable _python_var_v( _python_str_plain_v );
    PyObjectLocalVariable _python_var_flup( _python_str_plain_flup );
    PyObjectLocalVariable _python_var_e( _python_str_plain_e );
    PyObjectLocalVariable _python_var_flup_module( _python_str_plain_flup_module );
    PyObjectLocalVariable _python_var_wsgi_opts( _python_str_plain_wsgi_opts );
    PyObjectLocalVariable _python_var_module( _python_str_plain_module );
    PyObjectLocalVariable _python_var_WSGIServer( _python_str_plain_WSGIServer );
    PyObjectLocalVariable _python_var_get_internal_wsgi_application( _python_str_plain_get_internal_wsgi_application );
    PyObjectLocalVariable _python_var_daemonize( _python_str_plain_daemonize );
    PyObjectLocalVariable _python_var_daemon_kwargs( _python_str_plain_daemon_kwargs );
    PyObjectLocalVariable _python_var_become_daemon( _python_str_plain_become_daemon );
    PyObjectLocalVariable _python_var_fp( _python_str_plain_fp );

    // Actual function code.
    static PyFrameObject *frame_function_2_runfastcgi_of_module_django__core__servers__fastcgi = NULL;

    if ( isFrameUnusable( frame_function_2_runfastcgi_of_module_django__core__servers__fastcgi ) )
    {
        if ( frame_function_2_runfastcgi_of_module_django__core__servers__fastcgi )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_runfastcgi_of_module_django__core__servers__fastcgi" );
#endif
            Py_DECREF( frame_function_2_runfastcgi_of_module_django__core__servers__fastcgi );
        }

        frame_function_2_runfastcgi_of_module_django__core__servers__fastcgi = MAKE_FRAME( _codeobj_999c0b236965b8e5f6e60dd05d7a56f3, _module_django__core__servers__fastcgi );
    }

    FrameGuard frame_guard( frame_function_2_runfastcgi_of_module_django__core__servers__fastcgi );
    try
    {
        assert( Py_REFCNT( frame_function_2_runfastcgi_of_module_django__core__servers__fastcgi ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 91 );
        _python_var_options.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__servers__fastcgi_FASTCGI_OPTIONS.asObject0(), _python_str_plain_copy ) ).asObject() ) );
        frame_guard.setLineNumber( 92 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_options.asObject(), _python_str_plain_update ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_kwargs.asObject() ) ) );
        }
        {
            frame_guard.setLineNumber( 93 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_argset.asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 93 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_x.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 94 );
                if ( SEQUENCE_CONTAINS_BOOL( _python_str_chr_61, _python_var_x.asObject() ) )
                {
                    {
                        frame_guard.setLineNumber( 95 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_x.asObject(), _python_str_plain_split ) ).asObject(), _python_str_chr_61, _python_int_pos_1 ) ).asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_k.assign0( _python_tmp_element_1.asObject() );
                        _python_var_v.assign0( _python_tmp_element_2.asObject() );
                    }
                }
                else
                {
                    {
                        frame_guard.setLineNumber( 97 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( MAKE_TUPLE2( _python_var_x.asObject(), Py_True ) ).asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_k.assign0( _python_tmp_element_1.asObject() );
                        _python_var_v.assign0( _python_tmp_element_2.asObject() );
                    }
                }
                frame_guard.setLineNumber( 98 );
                {
                        PyObject *tmp_identifier = _python_var_v.asObject();
                        PyObject *tmp_subscribed = _python_var_options.asObject();
                        SET_SUBSCRIPT( tmp_identifier, tmp_subscribed, PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_k.asObject(), _python_str_plain_lower ) ).asObject() ) ).asObject() );
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 100 );
        if ( SEQUENCE_CONTAINS_BOOL( _python_str_plain_help, _python_var_options.asObject() ) )
        {
            frame_guard.setLineNumber( 101 );
            return CALL_FUNCTION_NO_ARGS( _mvar_django__core__servers__fastcgi_fastcgi_help.asObject0() );
        }
        frame_guard.setLineNumber( 103 );
        try
        {
            frame_guard.setLineNumber( 104 );
            _python_var_flup.assign1( IMPORT_MODULE( _python_str_plain_flup, ((PyModuleObject *)_module_django__core__servers__fastcgi)->md_dict, PyObjectTemporary( _python_var_kwargs.updateLocalsDict( _python_var_argset.updateLocalsDict( _python_var_fp.updateLocalsDict( _python_var_become_daemon.updateLocalsDict( _python_var_daemon_kwargs.updateLocalsDict( _python_var_daemonize.updateLocalsDict( _python_var_get_internal_wsgi_application.updateLocalsDict( _python_var_WSGIServer.updateLocalsDict( _python_var_module.updateLocalsDict( _python_var_wsgi_opts.updateLocalsDict( _python_var_flup_module.updateLocalsDict( _python_var_e.updateLocalsDict( _python_var_flup.updateLocalsDict( _python_var_v.updateLocalsDict( _python_var_k.updateLocalsDict( _python_var_x.updateLocalsDict( _python_var_options.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ).asObject(), Py_None, _python_int_neg_1 ) );
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
                _python_var_e.assign0( _exception.getValue() );
                frame_guard.setLineNumber( 106 );
                {
                    PyObjectTempKeeper1 call3;
                    DECREASE_REFCOUNT( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__servers__fastcgi_sys.asObject0(), _python_str_plain_stderr ) ).asObject(), _python_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_8a5e78ef3f292b0428cafbac62cdf288, _python_var_e.asObject() ) ).asObject() ) ) );
                }
                frame_guard.setLineNumber( 107 );
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__servers__fastcgi_sys.asObject0(), _python_str_plain_stderr ) ).asObject(), _python_str_plain_write ) ).asObject(), _python_str_digest_20e9d2b7d6d48e23553aceb5e35ba065 ) );
                frame_guard.setLineNumber( 108 );
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__servers__fastcgi_sys.asObject0(), _python_str_plain_stderr ) ).asObject(), _python_str_plain_write ) ).asObject(), _python_str_digest_7fbe5ab33a8b50d4dbc08f43e1b4caa9 ) );
                frame_guard.setLineNumber( 109 );
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__servers__fastcgi_sys.asObject0(), _python_str_plain_stderr ) ).asObject(), _python_str_plain_write ) ).asObject(), _python_str_digest_09a9e7fdbb3e6ce7aeab3198ae81d24a ) );
                frame_guard.setLineNumber( 110 );
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__servers__fastcgi_sys.asObject0(), _python_str_plain_stderr ) ).asObject(), _python_str_plain_write ) ).asObject(), _python_str_digest_ebfd1f6f81d7fed4f04bda3a387f3867 ) );
                return INCREASE_REFCOUNT( Py_False );
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
        frame_guard.setLineNumber( 113 );
        _python_var_flup_module.assign1( BINARY_OPERATION_ADD( _python_str_digest_37efe3b1e066aa9fdf33a4c778bff25a, PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_options.asObject(), _python_str_plain_protocol ) ).asObject() ) );
        frame_guard.setLineNumber( 115 );
        if ( SEQUENCE_CONTAINS_BOOL( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_options.asObject(), _python_str_plain_method ) ).asObject(), _python_tuple_str_plain_prefork_str_plain_fork_tuple ) )
        {
            frame_guard.setLineNumber( 116 );
            {
                PyObjectTempKeeper1 make_dict5;
                PyObjectTempKeeper1 make_dict7;
                PyObjectTempKeeper1 make_dict9;
                _python_var_wsgi_opts.assign1( ( make_dict5.assign( TO_INT( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_options.asObject(), _python_str_plain_maxspare ) ).asObject() ) ), make_dict7.assign( TO_INT( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_options.asObject(), _python_str_plain_minspare ) ).asObject() ) ), make_dict9.assign( TO_INT( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_options.asObject(), _python_str_plain_maxchildren ) ).asObject() ) ), MAKE_DICT4( make_dict5.asObject0(), _python_str_plain_maxSpare, make_dict7.asObject0(), _python_str_plain_minSpare, make_dict9.asObject0(), _python_str_plain_maxChildren, PyObjectTemporary( TO_INT( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_options.asObject(), _python_str_plain_maxrequests ) ).asObject() ) ).asObject(), _python_str_plain_maxRequests ) ) );
            }
            {
                frame_guard.setLineNumber( 122 );
                PyObject *_python_tmp_inplace_start = _python_var_flup_module.asObject();
                PyObjectTemporary _python_tmp_inplace_end( BINARY_OPERATION( PyNumber_InPlaceAdd, _python_tmp_inplace_start, _python_str_plain__fork ) );
                if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
                {
                    _python_var_flup_module.assign0( _python_tmp_inplace_end.asObject() );
                }
            }
        }
        else
        {
            frame_guard.setLineNumber( 123 );
            if ( SEQUENCE_CONTAINS_BOOL( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_options.asObject(), _python_str_plain_method ) ).asObject(), _python_tuple_str_plain_thread_str_plain_threaded_tuple ) )
            {
                frame_guard.setLineNumber( 124 );
                {
                    PyObjectTempKeeper1 make_dict13;
                    PyObjectTempKeeper1 make_dict15;
                    _python_var_wsgi_opts.assign1( ( make_dict13.assign( TO_INT( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_options.asObject(), _python_str_plain_maxspare ) ).asObject() ) ), make_dict15.assign( TO_INT( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_options.asObject(), _python_str_plain_minspare ) ).asObject() ) ), MAKE_DICT3( make_dict13.asObject0(), _python_str_plain_maxSpare, make_dict15.asObject0(), _python_str_plain_minSpare, PyObjectTemporary( TO_INT( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_options.asObject(), _python_str_plain_maxchildren ) ).asObject() ) ).asObject(), _python_str_plain_maxThreads ) ) );
                }
            }
            else
            {
                frame_guard.setLineNumber( 130 );
                return CALL_FUNCTION_WITH_ARGS( _mvar_django__core__servers__fastcgi_fastcgi_help.asObject0(), _python_str_digest_9a44c40ab54e6f0bf9e8781f55b9c2e0 );
            }
        }
        frame_guard.setLineNumber( 133 );
        {
                PyObject *tmp_identifier = BOOL_FROM( ( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_options.asObject(), _python_str_plain_debug ) ).asObject() != Py_None ) );
                SET_SUBSCRIPT( tmp_identifier, _python_var_wsgi_opts.asObject(), _python_str_plain_debug );
        }
        frame_guard.setLineNumber( 135 );
        try
        {
            frame_guard.setLineNumber( 136 );
            {
                PyObjectTempKeeper1 call19;
                _python_var_module.assign1( ( call19.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__servers__fastcgi_importlib.asObject0(), _python_str_plain_import_module ) ), CALL_FUNCTION_WITH_ARGS( call19.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_925e52aa1cdd9e2c1f41328578b5d79e, _python_var_flup_module.asObject() ) ).asObject(), _python_str_plain_flup ) ) );
            }
            frame_guard.setLineNumber( 137 );
            _python_var_WSGIServer.assign1( LOOKUP_ATTRIBUTE( _python_var_module.asObject(), _python_str_plain_WSGIServer ) );
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
                frame_guard.setLineNumber( 139 );
                PRINT_ITEM_TO( NULL, PyObjectTemporary( TO_STR( PyObjectTemporary( BINARY_OPERATION_ADD( _python_str_digest_e2c35bbf741c2e1991bdbb7ef29b4787, _python_var_flup_module.asObject() ) ).asObject() ) ).asObject() );
                PRINT_NEW_LINE_TO( NULL );
                return INCREASE_REFCOUNT( Py_False );
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
        frame_guard.setLineNumber( 143 );
        _python_var_get_internal_wsgi_application.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_0bed9571c4e1bb1a804ee0b60fd8af70, ((PyModuleObject *)_module_django__core__servers__fastcgi)->md_dict, PyObjectTemporary( _python_var_kwargs.updateLocalsDict( _python_var_argset.updateLocalsDict( _python_var_fp.updateLocalsDict( _python_var_become_daemon.updateLocalsDict( _python_var_daemon_kwargs.updateLocalsDict( _python_var_daemonize.updateLocalsDict( _python_var_get_internal_wsgi_application.updateLocalsDict( _python_var_WSGIServer.updateLocalsDict( _python_var_module.updateLocalsDict( _python_var_wsgi_opts.updateLocalsDict( _python_var_flup_module.updateLocalsDict( _python_var_e.updateLocalsDict( _python_var_flup.updateLocalsDict( _python_var_v.updateLocalsDict( _python_var_k.updateLocalsDict( _python_var_x.updateLocalsDict( _python_var_options.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ).asObject(), _python_list_str_plain_get_internal_wsgi_application_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_get_internal_wsgi_application ) );
        frame_guard.setLineNumber( 145 );
        if ( ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_options.asObject(), _python_str_plain_host ) ).asObject() ) && ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_options.asObject(), _python_str_plain_port ) ).asObject() ) && (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_options.asObject(), _python_str_plain_socket ) ).asObject() ) )) ) ) )
        {
            frame_guard.setLineNumber( 146 );
            {
                PyObjectTempKeeper1 make_tuple22;
                {
                    PyObjectTemporary tmp_identifier( ( make_tuple22.assign( LOOKUP_SUBSCRIPT( _python_var_options.asObject(), _python_str_plain_host ) ), MAKE_TUPLE2( make_tuple22.asObject0(), PyObjectTemporary( TO_INT( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_options.asObject(), _python_str_plain_port ) ).asObject() ) ).asObject() ) ) );
                    SET_SUBSCRIPT( tmp_identifier.asObject(), _python_var_wsgi_opts.asObject(), _python_str_plain_bindAddress );
            }
            }
        }
        else
        {
            frame_guard.setLineNumber( 147 );
            if ( ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_options.asObject(), _python_str_plain_socket ) ).asObject() ) && ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_options.asObject(), _python_str_plain_host ) ).asObject() ) )) && (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_options.asObject(), _python_str_plain_port ) ).asObject() ) )) ) ) )
            {
                frame_guard.setLineNumber( 148 );
                {
                        PyObjectTemporary tmp_identifier( LOOKUP_SUBSCRIPT( _python_var_options.asObject(), _python_str_plain_socket ) );
                        SET_SUBSCRIPT( tmp_identifier.asObject(), _python_var_wsgi_opts.asObject(), _python_str_plain_bindAddress );
                }
            }
            else
            {
                frame_guard.setLineNumber( 149 );
                if ( ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_options.asObject(), _python_str_plain_socket ) ).asObject() ) )) && ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_options.asObject(), _python_str_plain_host ) ).asObject() ) )) && (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_options.asObject(), _python_str_plain_port ) ).asObject() ) )) ) ) )
                {
                    frame_guard.setLineNumber( 150 );
                    SET_SUBSCRIPT( Py_None, _python_var_wsgi_opts.asObject(), _python_str_plain_bindAddress );
                }
                else
                {
                    frame_guard.setLineNumber( 152 );
                    return CALL_FUNCTION_WITH_ARGS( _mvar_django__core__servers__fastcgi_fastcgi_help.asObject0(), _python_str_digest_bec07dd609cc499e3d94d6eacc3b666b );
                }
            }
        }
        frame_guard.setLineNumber( 154 );
        if ( ( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_options.asObject(), _python_str_plain_daemonize ) ).asObject() == Py_None ) )
        {
            frame_guard.setLineNumber( 156 );
            _python_var_daemonize.assign0( BOOL_FROM( ( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_wsgi_opts.asObject(), _python_str_plain_bindAddress ) ).asObject() != Py_None ) ) );
        }
        else
        {
            frame_guard.setLineNumber( 158 );
            if ( SEQUENCE_CONTAINS_BOOL( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_options.asObject(), _python_str_plain_daemonize ) ).asObject(), _python_str_plain_lower ) ).asObject() ) ).asObject(), _python_tuple_str_plain_true_str_plain_yes_str_plain_t_tuple ) )
            {
                _python_var_daemonize.assign0( Py_True );
            }
            else
            {
                frame_guard.setLineNumber( 160 );
                if ( SEQUENCE_CONTAINS_BOOL( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_options.asObject(), _python_str_plain_daemonize ) ).asObject(), _python_str_plain_lower ) ).asObject() ) ).asObject(), _python_tuple_str_plain_false_str_plain_no_str_plain_f_tuple ) )
                {
                    _python_var_daemonize.assign0( Py_False );
                }
                else
                {
                    frame_guard.setLineNumber( 163 );
                    return CALL_FUNCTION_WITH_ARGS( _mvar_django__core__servers__fastcgi_fastcgi_help.asObject0(), _python_str_digest_e60c9c966a5d1d01dbbefa4a063e7031 );
                }
            }
        }
        _python_var_daemon_kwargs.assign1( PyDict_New() );
        frame_guard.setLineNumber( 167 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_options.asObject(), _python_str_plain_outlog ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 168 );
            {
                    PyObjectTemporary tmp_identifier( LOOKUP_SUBSCRIPT( _python_var_options.asObject(), _python_str_plain_outlog ) );
                    SET_SUBSCRIPT( tmp_identifier.asObject(), _python_var_daemon_kwargs.asObject(), _python_str_plain_out_log );
            }
        }
        frame_guard.setLineNumber( 169 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_options.asObject(), _python_str_plain_errlog ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 170 );
            {
                    PyObjectTemporary tmp_identifier( LOOKUP_SUBSCRIPT( _python_var_options.asObject(), _python_str_plain_errlog ) );
                    SET_SUBSCRIPT( tmp_identifier.asObject(), _python_var_daemon_kwargs.asObject(), _python_str_plain_err_log );
            }
        }
        frame_guard.setLineNumber( 171 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_options.asObject(), _python_str_plain_umask ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 172 );
            {
                    PyObjectTemporary tmp_identifier( TO_INT2( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_options.asObject(), _python_str_plain_umask ) ).asObject(), _python_int_pos_8 ) );
                    SET_SUBSCRIPT( tmp_identifier.asObject(), _python_var_daemon_kwargs.asObject(), _python_str_plain_umask );
            }
        }
        frame_guard.setLineNumber( 174 );
        if ( CHECK_IF_TRUE( _python_var_daemonize.asObject() ) )
        {
            frame_guard.setLineNumber( 175 );
            _python_var_become_daemon.assign1( IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_80bfe265d1985d62882789aea3dbf320, ((PyModuleObject *)_module_django__core__servers__fastcgi)->md_dict, PyObjectTemporary( _python_var_kwargs.updateLocalsDict( _python_var_argset.updateLocalsDict( _python_var_fp.updateLocalsDict( _python_var_become_daemon.updateLocalsDict( _python_var_daemon_kwargs.updateLocalsDict( _python_var_daemonize.updateLocalsDict( _python_var_get_internal_wsgi_application.updateLocalsDict( _python_var_WSGIServer.updateLocalsDict( _python_var_module.updateLocalsDict( _python_var_wsgi_opts.updateLocalsDict( _python_var_flup_module.updateLocalsDict( _python_var_e.updateLocalsDict( _python_var_flup.updateLocalsDict( _python_var_v.updateLocalsDict( _python_var_k.updateLocalsDict( _python_var_x.updateLocalsDict( _python_var_options.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ).asObject(), _python_list_str_plain_become_daemon_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_become_daemon ) );
            frame_guard.setLineNumber( 176 );
            {
                PyObjectTempKeeper0 call_tmp24;
                PyObjectTempKeeper1 call_tmp25;
                DECREASE_REFCOUNT( ( call_tmp24.assign( _python_var_become_daemon.asObject() ), call_tmp25.assign( MAKE_DICT1( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_options.asObject(), _python_str_plain_workdir ) ).asObject(), _python_str_plain_our_home_dir ) ), impl_function_6_complex_call_helper_keywords_star_dict_of_module___internal__( call_tmp24.asObject(), call_tmp25.asObject(), _python_var_daemon_kwargs.asObject1() ) ) );
            }
        }
        frame_guard.setLineNumber( 178 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_options.asObject(), _python_str_plain_pidfile ) ).asObject() ) )
        {
            {
                frame_guard.setLineNumber( 179 );
                PyObjectTemporary _python_tmp_with_source( OPEN_FILE( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_options.asObject(), _python_str_plain_pidfile ) ).asObject(), _python_str_plain_w, NULL ) );
                PyObjectTemporary _python_tmp_with_exit( LOOKUP_SPECIAL( _python_tmp_with_source.asObject(), _python_str_plain___exit__ ) );
                PyObjectTemporary _python_tmp_with_enter( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_SPECIAL( _python_tmp_with_source.asObject(), _python_str_plain___enter__ ) ).asObject() ) );
                PyObject *_python_tmp_indicator = Py_True;
                PythonExceptionKeeper _caught_2;


                try
                {
                    try
                    {
                        _python_var_fp.assign0( _python_tmp_with_enter.asObject() );
                        frame_guard.setLineNumber( 180 );
                        {
                            PyObjectTempKeeper1 call27;
                            DECREASE_REFCOUNT( ( call27.assign( LOOKUP_ATTRIBUTE( _python_var_fp.asObject(), _python_str_plain_write ) ), CALL_FUNCTION_WITH_ARGS( call27.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_3055b1f386b7c6d0817034102bb6f0df, PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__servers__fastcgi_os.asObject0(), _python_str_plain_getpid ) ).asObject() ) ).asObject() ) ).asObject() ) ) );
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

                // Final code:
                if ( ( _python_tmp_indicator == Py_True ) )
                {
                    DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( _python_tmp_with_exit.asObject(), Py_None, Py_None, Py_None ) );
                }
                _caught_2.rethrow();
            }
        }
        frame_guard.setLineNumber( 182 );
        {
            PyObjectTempKeeper0 call_tmp29;
            PyObjectTempKeeper1 call_tmp30;
            DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call_tmp29.assign( _python_var_WSGIServer.asObject() ), call_tmp30.assign( MAKE_TUPLE1( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( _python_var_get_internal_wsgi_application.asObject() ) ).asObject() ) ), impl_function_3_complex_call_helper_pos_star_dict_of_module___internal__( call_tmp29.asObject(), call_tmp30.asObject(), _python_var_wsgi_opts.asObject1() ) ) ).asObject(), _python_str_plain_run ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_argset.updateLocalsDict( _python_var_fp.updateLocalsDict( _python_var_become_daemon.updateLocalsDict( _python_var_daemon_kwargs.updateLocalsDict( _python_var_daemonize.updateLocalsDict( _python_var_get_internal_wsgi_application.updateLocalsDict( _python_var_WSGIServer.updateLocalsDict( _python_var_module.updateLocalsDict( _python_var_wsgi_opts.updateLocalsDict( _python_var_flup_module.updateLocalsDict( _python_var_e.updateLocalsDict( _python_var_flup.updateLocalsDict( _python_var_v.updateLocalsDict( _python_var_k.updateLocalsDict( _python_var_x.updateLocalsDict( _python_var_options.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_runfastcgi_of_module_django__core__servers__fastcgi )
        {
           Py_DECREF( frame_function_2_runfastcgi_of_module_django__core__servers__fastcgi );
           frame_function_2_runfastcgi_of_module_django__core__servers__fastcgi = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2_runfastcgi_of_module_django__core__servers__fastcgi( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_argset = NULL;
    PyObject *_python_par_kwargs = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:

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
                        PyErr_Format( PyExc_TypeError, "runfastcgi() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "runfastcgi() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "runfastcgi() keywords must be strings" );
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

    // Check if argument argset was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_argset );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_argset == NULL );

            _python_par_argset = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_argset );

            kw_found += 1;
        }
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
        if ( 1 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "runfastcgi() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "runfastcgi() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "runfastcgi() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "runfastcgi() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "runfastcgi() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "runfastcgi() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 0 )
            {
                PyErr_Format( PyExc_TypeError, "runfastcgi() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "runfastcgi() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "runfastcgi() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "runfastcgi() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 0 )
                {
                    PyErr_Format( PyExc_TypeError, "runfastcgi() takes exactly %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "runfastcgi() takes at least %d arguments (%zd given)", 0, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_argset != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "runfastcgi() got multiple values for keyword argument 'argset'" );
             goto error_exit;
         }

        _python_par_argset = INCREASE_REFCOUNT( args[ 0 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_argset == NULL )
    {
        _python_par_argset = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_argset );
    }


    return impl_function_2_runfastcgi_of_module_django__core__servers__fastcgi( self, _python_par_argset, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_argset );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_2_runfastcgi_of_module_django__core__servers__fastcgi( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2_runfastcgi_of_module_django__core__servers__fastcgi( self, INCREASE_REFCOUNT( args[ 0 ] ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_2_runfastcgi_of_module_django__core__servers__fastcgi( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_fastcgi_help_of_module_django__core__servers__fastcgi(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_fastcgi_help_of_module_django__core__servers__fastcgi,
        dparse_function_1_fastcgi_help_of_module_django__core__servers__fastcgi,
        _python_str_plain_fastcgi_help,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_5ab76f09c1eb1746a72cf199007a634e,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__servers__fastcgi,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_runfastcgi_of_module_django__core__servers__fastcgi( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_runfastcgi_of_module_django__core__servers__fastcgi,
        dparse_function_2_runfastcgi_of_module_django__core__servers__fastcgi,
        _python_str_plain_runfastcgi,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_999c0b236965b8e5f6e60dd05d7a56f3,
        defaults,
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__servers__fastcgi,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.core.servers.fastcgi",   /* m_name */
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

MOD_INIT_DECL( django__core__servers__fastcgi )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__core__servers__fastcgi );
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

    // puts( "in initdjango__core__servers__fastcgi" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__core__servers__fastcgi = Py_InitModule4(
        "django.core.servers.fastcgi",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__core__servers__fastcgi = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__core__servers__fastcgi = (PyDictObject *)((PyModuleObject *)_module_django__core__servers__fastcgi)->md_dict;

    assertObject( _module_django__core__servers__fastcgi );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_0470c177015643176be7f5a7ff975e2b, _module_django__core__servers__fastcgi );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__core__servers__fastcgi );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__core__servers__fastcgi != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__core__servers__fastcgi, (Nuitka_StringObject *)_python_str_plain___doc__, _python_str_digest_0209373bd359dbc8794b089992bf5ab2 );
    UPDATE_STRING_DICT0( _moduledict_django__core__servers__fastcgi, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_c0cc6cee6266d23c8c125b032ca89ada );
    PyFrameObject *frame_module_django__core__servers__fastcgi = MAKE_FRAME( _codeobj_16db81d07c4cc80e804f6c499ec072ed, _module_django__core__servers__fastcgi );

    FrameGuard frame_guard( frame_module_django__core__servers__fastcgi );
    try
    {
        assert( Py_REFCNT( frame_module_django__core__servers__fastcgi ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 15 );
        UPDATE_STRING_DICT1( _moduledict_django__core__servers__fastcgi, (Nuitka_StringObject *)_python_str_plain_os, IMPORT_MODULE( _python_str_plain_os, ((PyModuleObject *)_module_django__core__servers__fastcgi)->md_dict, ((PyModuleObject *)_module_django__core__servers__fastcgi)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 16 );
        UPDATE_STRING_DICT1( _moduledict_django__core__servers__fastcgi, (Nuitka_StringObject *)_python_str_plain_sys, IMPORT_MODULE( _python_str_plain_sys, ((PyModuleObject *)_module_django__core__servers__fastcgi)->md_dict, ((PyModuleObject *)_module_django__core__servers__fastcgi)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 17 );
        UPDATE_STRING_DICT1( _moduledict_django__core__servers__fastcgi, (Nuitka_StringObject *)_python_str_plain_importlib, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__core__servers__fastcgi)->md_dict, ((PyModuleObject *)_module_django__core__servers__fastcgi)->md_dict, _python_list_str_plain_importlib_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_importlib ) );
        UPDATE_STRING_DICT0( _moduledict_django__core__servers__fastcgi, (Nuitka_StringObject *)_python_str_plain___version__, _python_str_digest_cb5ae17636e975f9bf71ddf5bc542075 );
        UPDATE_STRING_DICT1( _moduledict_django__core__servers__fastcgi, (Nuitka_StringObject *)_python_str_plain___all__, LIST_COPY( _python_list_str_plain_runfastcgi_list ) );
        UPDATE_STRING_DICT1( _moduledict_django__core__servers__fastcgi, (Nuitka_StringObject *)_python_str_plain_FASTCGI_OPTIONS, PyDict_Copy( _python_dict_7e1707293b6ac5ea7beef6f79cc5c53b ) );
        frame_guard.setLineNumber( 41 );
        UPDATE_STRING_DICT1( _moduledict_django__core__servers__fastcgi, (Nuitka_StringObject *)_python_str_plain_FASTCGI_HELP, BINARY_OPERATION_REMAINDER( _python_str_digest_7d2f6feb315e1a2b538069c92545ba6a, _mvar_django__core__servers__fastcgi_FASTCGI_OPTIONS.asObject0() ) );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__core__servers__fastcgi)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__core__servers__fastcgi, (Nuitka_StringObject *)_python_str_plain_fastcgi_help, MAKE_FUNCTION_function_1_fastcgi_help_of_module_django__core__servers__fastcgi(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__core__servers__fastcgi, (Nuitka_StringObject *)_python_str_plain_runfastcgi, MAKE_FUNCTION_function_2_runfastcgi_of_module_django__core__servers__fastcgi( MAKE_TUPLE1( PyObjectTemporary( PyList_New( 0 ) ).asObject() ) ) );

   return MOD_RETURN_VALUE( _module_django__core__servers__fastcgi );
}
