// Generated code for Python source for module 'django.utils.module_loading'
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

// The _module_django__utils__module_loading is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__utils__module_loading;
PyDictObject *_moduledict_django__utils__module_loading;

// The module level variables.
static PyObjectGlobalVariable_django__utils__module_loading _mvar_django__utils__module_loading_ImproperlyConfigured( &_module_django__utils__module_loading, &_python_str_plain_ImproperlyConfigured );
static PyObjectGlobalVariable_django__utils__module_loading _mvar_django__utils__module_loading_imp( &_module_django__utils__module_loading, &_python_str_plain_imp );
static PyObjectGlobalVariable_django__utils__module_loading _mvar_django__utils__module_loading_import_module( &_module_django__utils__module_loading, &_python_str_plain_import_module );
static PyObjectGlobalVariable_django__utils__module_loading _mvar_django__utils__module_loading_os( &_module_django__utils__module_loading, &_python_str_plain_os );
static PyObjectGlobalVariable_django__utils__module_loading _mvar_django__utils__module_loading_six( &_module_django__utils__module_loading, &_python_str_plain_six );
static PyObjectGlobalVariable_django__utils__module_loading _mvar_django__utils__module_loading_sys( &_module_django__utils__module_loading, &_python_str_plain_sys );

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_import_by_path_of_module_django__utils__module_loading(  );


static PyObject *MAKE_FUNCTION_function_2_module_has_submodule_of_module_django__utils__module_loading(  );


// The module function definitions.
static PyObject *impl_function_1_import_by_path_of_module_django__utils__module_loading( Nuitka_FunctionObject *self, PyObject *_python_par_dotted_path, PyObject *_python_par_error_prefix )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_dotted_path( _python_str_plain_dotted_path, _python_par_dotted_path );
    PyObjectLocalParameterVariableNoDel _python_var_error_prefix( _python_str_plain_error_prefix, _python_par_error_prefix );
    PyObjectLocalVariable _python_var_module_path( _python_str_plain_module_path );
    PyObjectLocalVariable _python_var_class_name( _python_str_plain_class_name );
    PyObjectLocalVariable _python_var_module( _python_str_plain_module );
    PyObjectLocalVariable _python_var_e( _python_str_plain_e );
    PyObjectLocalVariable _python_var_msg( _python_str_plain_msg );
    PyObjectLocalVariable _python_var_attr( _python_str_plain_attr );

    // Actual function code.
    static PyFrameObject *frame_function_1_import_by_path_of_module_django__utils__module_loading = NULL;

    if ( isFrameUnusable( frame_function_1_import_by_path_of_module_django__utils__module_loading ) )
    {
        if ( frame_function_1_import_by_path_of_module_django__utils__module_loading )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_import_by_path_of_module_django__utils__module_loading" );
#endif
            Py_DECREF( frame_function_1_import_by_path_of_module_django__utils__module_loading );
        }

        frame_function_1_import_by_path_of_module_django__utils__module_loading = MAKE_FRAME( _codeobj_0f51de36e8d39fb0fc5f21087399c4d8, _module_django__utils__module_loading );
    }

    FrameGuard frame_guard( frame_function_1_import_by_path_of_module_django__utils__module_loading );
    try
    {
        assert( Py_REFCNT( frame_function_1_import_by_path_of_module_django__utils__module_loading ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 15 );
        try
        {
            {
                frame_guard.setLineNumber( 16 );
                PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_dotted_path.asObject(), _python_str_plain_rsplit ) ).asObject(), _python_str_dot, _python_int_pos_1 ) ).asObject() ) );
                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                _python_var_module_path.assign0( _python_tmp_element_1.asObject() );
                _python_var_class_name.assign0( _python_tmp_element_2.asObject() );
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

            if ( _exception.matches( PyExc_ValueError ) )
            {
                frame_guard.detachFrame();
                frame_guard.setLineNumber( 18 );
                {
                    PyObjectTempKeeper0 call3;
                    PyObjectTempKeeper0 make_tuple1;
                    {
                        PyObjectTemporary tmp_exception_type( ( call3.assign( _mvar_django__utils__module_loading_ImproperlyConfigured.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_f35722a5e5eb3d30934d7eda3df79a19, PyObjectTemporary( ( make_tuple1.assign( _python_var_error_prefix.asObject() ), MAKE_TUPLE2( make_tuple1.asObject0(), _python_var_dotted_path.asObject() ) ) ).asObject() ) ).asObject() ) ) );
                        RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
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
        frame_guard.setLineNumber( 20 );
        try
        {
            frame_guard.setLineNumber( 21 );
            {
                PyObjectTempKeeper0 call14;
                _python_var_module.assign1( ( call14.assign( _mvar_django__utils__module_loading_import_module.asObject0() ), CALL_FUNCTION_WITH_ARGS( call14.asObject0(), _python_var_module_path.asObject() ) ) );
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

            if ( _exception.matches( PyExc_ImportError ) )
            {
                frame_guard.detachFrame();
                _python_var_e.assign0( _exception.getValue() );
                frame_guard.setLineNumber( 23 );
                {
                    PyObjectTempKeeper0 make_tuple5;
                    PyObjectTempKeeper0 make_tuple6;
                    _python_var_msg.assign1( BINARY_OPERATION_REMAINDER( _python_str_digest_50cb812e102c717f73e21fc8ab00752e, PyObjectTemporary( ( make_tuple5.assign( _python_var_error_prefix.asObject() ), make_tuple6.assign( _python_var_module_path.asObject() ), MAKE_TUPLE3( make_tuple5.asObject0(), make_tuple6.asObject0(), _python_var_e.asObject() ) ) ).asObject() ) );
                }
                frame_guard.setLineNumber( 25 );
                {
                    PyObjectTempKeeper1 call10;
                    PyObjectTempKeeper0 call11;
                    PyObjectTempKeeper1 call12;
                    PyObjectTempKeeper0 call8;
                    DECREASE_REFCOUNT( ( call10.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__module_loading_six.asObject0(), _python_str_plain_reraise ) ), call11.assign( _mvar_django__utils__module_loading_ImproperlyConfigured.asObject0() ), call12.assign( ( call8.assign( _mvar_django__utils__module_loading_ImproperlyConfigured.asObject0() ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), _python_var_msg.asObject() ) ) ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), call11.asObject0(), call12.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__module_loading_sys.asObject0(), _python_str_plain_exc_info ) ).asObject() ) ).asObject(), _python_int_pos_2, 2 ) ).asObject() ) ) );
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
        frame_guard.setLineNumber( 27 );
        try
        {
            frame_guard.setLineNumber( 28 );
            {
                PyObjectTempKeeper0 getattr21;
                _python_var_attr.assign1( ( getattr21.assign( _python_var_module.asObject() ), BUILTIN_GETATTR( getattr21.asObject0(), _python_var_class_name.asObject(), NULL ) ) );
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
                frame_guard.setLineNumber( 30 );
                {
                    PyObjectTempKeeper0 call19;
                    PyObjectTempKeeper0 make_tuple16;
                    PyObjectTempKeeper0 make_tuple17;
                    {
                        PyObjectTemporary tmp_exception_type( ( call19.assign( _mvar_django__utils__module_loading_ImproperlyConfigured.asObject0() ), CALL_FUNCTION_WITH_ARGS( call19.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_bfcf917e7cd70f157cde6359bf8523ab, PyObjectTemporary( ( make_tuple16.assign( _python_var_error_prefix.asObject() ), make_tuple17.assign( _python_var_module_path.asObject() ), MAKE_TUPLE3( make_tuple16.asObject0(), make_tuple17.asObject0(), _python_var_class_name.asObject() ) ) ).asObject() ) ).asObject() ) ) );
                        RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
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
        frame_guard.setLineNumber( 32 );
        return _python_var_attr.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_error_prefix.updateLocalsDict( _python_var_dotted_path.updateLocalsDict( _python_var_attr.updateLocalsDict( _python_var_msg.updateLocalsDict( _python_var_e.updateLocalsDict( _python_var_module.updateLocalsDict( _python_var_class_name.updateLocalsDict( _python_var_module_path.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_import_by_path_of_module_django__utils__module_loading )
        {
           Py_DECREF( frame_function_1_import_by_path_of_module_django__utils__module_loading );
           frame_function_1_import_by_path_of_module_django__utils__module_loading = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1_import_by_path_of_module_django__utils__module_loading( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_dotted_path = NULL;
    PyObject *_python_par_error_prefix = NULL;
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
                PyErr_Format( PyExc_TypeError, "import_by_path() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_dotted_path == key )
            {
                if (unlikely( _python_par_dotted_path ))
                {
                    PyErr_Format( PyExc_TypeError, "import_by_path() got multiple values for keyword argument 'dotted_path'" );
                    goto error_exit;
                }

                _python_par_dotted_path = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_error_prefix == key )
            {
                if (unlikely( _python_par_error_prefix ))
                {
                    PyErr_Format( PyExc_TypeError, "import_by_path() got multiple values for keyword argument 'error_prefix'" );
                    goto error_exit;
                }

                _python_par_error_prefix = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_dotted_path, key ) )
            {
                if (unlikely( _python_par_dotted_path ))
                {
                    PyErr_Format( PyExc_TypeError, "import_by_path() got multiple values for keyword argument 'dotted_path'" );
                    goto error_exit;
                }

                _python_par_dotted_path = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_error_prefix, key ) )
            {
                if (unlikely( _python_par_error_prefix ))
                {
                    PyErr_Format( PyExc_TypeError, "import_by_path() got multiple values for keyword argument 'error_prefix'" );
                    goto error_exit;
                }

                _python_par_error_prefix = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "import_by_path() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "import_by_path() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "import_by_path() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "import_by_path() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "import_by_path() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "import_by_path() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "import_by_path() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "import_by_path() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "import_by_path() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "import_by_path() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "import_by_path() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "import_by_path() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "import_by_path() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_dotted_path != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "import_by_path() got multiple values for keyword argument 'dotted_path'" );
             goto error_exit;
         }

        _python_par_dotted_path = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_error_prefix != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "import_by_path() got multiple values for keyword argument 'error_prefix'" );
             goto error_exit;
         }

        _python_par_error_prefix = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_error_prefix == NULL )
    {
        _python_par_error_prefix = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_error_prefix );
    }


    return impl_function_1_import_by_path_of_module_django__utils__module_loading( self, _python_par_dotted_path, _python_par_error_prefix );

error_exit:;

    Py_XDECREF( _python_par_dotted_path );
    Py_XDECREF( _python_par_error_prefix );

    return NULL;
}

static PyObject *dparse_function_1_import_by_path_of_module_django__utils__module_loading( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1_import_by_path_of_module_django__utils__module_loading( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_import_by_path_of_module_django__utils__module_loading( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_module_has_submodule_of_module_django__utils__module_loading( Nuitka_FunctionObject *self, PyObject *_python_par_package, PyObject *_python_par_module_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_package( _python_str_plain_package, _python_par_package );
    PyObjectLocalParameterVariableNoDel _python_var_module_name( _python_str_plain_module_name, _python_par_module_name );
    PyObjectLocalVariable _python_var_name( _python_str_plain_name );
    PyObjectLocalVariable _python_var_package_path( _python_str_plain_package_path );
    PyObjectLocalVariable _python_var_finder( _python_str_plain_finder );
    PyObjectLocalVariable _python_var_entry( _python_str_plain_entry );
    PyObjectLocalVariable _python_var_file_( _python_str_plain_file_ );
    PyObjectLocalVariable _python_var__( _python_str_plain__ );
    PyObjectLocalVariable _python_var_hook( _python_str_plain_hook );

    // Actual function code.
    static PyFrameObject *frame_function_2_module_has_submodule_of_module_django__utils__module_loading = NULL;

    if ( isFrameUnusable( frame_function_2_module_has_submodule_of_module_django__utils__module_loading ) )
    {
        if ( frame_function_2_module_has_submodule_of_module_django__utils__module_loading )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_module_has_submodule_of_module_django__utils__module_loading" );
#endif
            Py_DECREF( frame_function_2_module_has_submodule_of_module_django__utils__module_loading );
        }

        frame_function_2_module_has_submodule_of_module_django__utils__module_loading = MAKE_FRAME( _codeobj_4a1c2809adeb82ba823e31d2f42bceb7, _module_django__utils__module_loading );
    }

    FrameGuard frame_guard( frame_function_2_module_has_submodule_of_module_django__utils__module_loading );
    try
    {
        assert( Py_REFCNT( frame_function_2_module_has_submodule_of_module_django__utils__module_loading ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 37 );
        {
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper1 make_list1;
            _python_var_name.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( _python_str_dot, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( ( make_list1.assign( LOOKUP_ATTRIBUTE( _python_var_package.asObject(), _python_str_plain___name__ ) ), MAKE_LIST2( make_list1.asObject(), _python_var_module_name.asObject1() ) ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 38 );
        try
        {
            frame_guard.setLineNumber( 40 );
            {
                PyObjectTempKeeper1 subscr5;
                return INCREASE_REFCOUNT( BOOL_FROM( ( PyObjectTemporary( ( subscr5.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__module_loading_sys.asObject0(), _python_str_plain_modules ) ), LOOKUP_SUBSCRIPT( subscr5.asObject0(), _python_var_name.asObject() ) ) ).asObject() != Py_None ) ) );
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

            if ( _exception.matches( PyExc_KeyError ) )
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
        frame_guard.setLineNumber( 43 );
        try
        {
            frame_guard.setLineNumber( 44 );
            _python_var_package_path.assign1( LOOKUP_ATTRIBUTE( _python_var_package.asObject(), _python_str_plain___path__ ) );
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
        {
            frame_guard.setLineNumber( 49 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__module_loading_sys.asObject0(), _python_str_plain_meta_path ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 49 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_finder.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 50 );
                {
                    PyObjectTempKeeper1 call7;
                    PyObjectTempKeeper0 call8;
                    if ( CHECK_IF_TRUE( PyObjectTemporary( ( call7.assign( LOOKUP_ATTRIBUTE( _python_var_finder.asObject(), _python_str_plain_find_module ) ), call8.assign( _python_var_name.asObject() ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), call8.asObject0(), _python_var_package_path.asObject() ) ) ).asObject() ) )
                {
                    return INCREASE_REFCOUNT( Py_True );
                }
                }

               CONSIDER_THREADING();
            }
        }
        {
            PyObject *_python_tmp_break_indicator = Py_False;
            frame_guard.setLineNumber( 52 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_package_path.asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 52 );
                    PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_2 == NULL )
                    {
                        _python_tmp_break_indicator = Py_True;
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                    _python_var_entry.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 53 );
                try
                {
                    frame_guard.setLineNumber( 55 );
                    {
                        PyObjectTempKeeper1 subscr19;
                        _python_var_finder.assign1( ( subscr19.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__module_loading_sys.asObject0(), _python_str_plain_path_importer_cache ) ), LOOKUP_SUBSCRIPT( subscr19.asObject0(), _python_var_entry.asObject() ) ) );
                    }
                    frame_guard.setLineNumber( 56 );
                    if ( ( _python_var_finder.asObject() == Py_None ) )
                    {
                        frame_guard.setLineNumber( 58 );
                        try
                        {
                            {
                                frame_guard.setLineNumber( 59 );
                                PyObject *_tmp_python_tmp_source_iter;
                                {
                                    PyObjectTempKeeper1 call21;
                                    PyObjectTempKeeper0 call22;
                                    _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( call21.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__module_loading_imp.asObject0(), _python_str_plain_find_module ) ), call22.assign( _python_var_module_name.asObject() ), CALL_FUNCTION_WITH_ARGS( call21.asObject0(), call22.asObject0(), PyObjectTemporary( MAKE_LIST1( _python_var_entry.asObject1() ) ).asObject() ) ) ).asObject() );
                                }
                                PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
                                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                PyObjectTemporary _python_tmp_element_3( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 2 ) );
                                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 3 );
                                _python_var_file_.assign0( _python_tmp_element_1.asObject() );
                                _python_var__.assign0( _python_tmp_element_2.asObject() );
                                _python_var__.assign0( _python_tmp_element_3.asObject() );
                            }
                            frame_guard.setLineNumber( 60 );
                            if ( CHECK_IF_TRUE( _python_var_file_.asObject() ) )
                            {
                                frame_guard.setLineNumber( 61 );
                                DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_file_.asObject(), _python_str_plain_close ) ).asObject() ) );
                            }
                            return INCREASE_REFCOUNT( Py_True );
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
                                frame_guard.setLineNumber( 64 );
                                CONSIDER_THREADING(); continue;
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
                    else
                    {
                        frame_guard.setLineNumber( 66 );
                        {
                            PyObjectTempKeeper1 call24;
                            if ( CHECK_IF_TRUE( PyObjectTemporary( ( call24.assign( LOOKUP_ATTRIBUTE( _python_var_finder.asObject(), _python_str_plain_find_module ) ), CALL_FUNCTION_WITH_ARGS( call24.asObject0(), _python_var_name.asObject() ) ) ).asObject() ) )
                        {
                            return INCREASE_REFCOUNT( Py_True );
                        }
                        else
                        {
                            frame_guard.setLineNumber( 69 );
                            CONSIDER_THREADING(); continue;
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

                    frame_guard.preserveExistingException();

#if PYTHON_VERSION >= 300
                    ExceptionRestorerFrameGuard restorer( &frame_guard );
#endif
                    _exception.toExceptionHandler();

                    if ( _exception.matches( PyExc_KeyError ) )
                    {
                        frame_guard.detachFrame();
                        {
                            PyObject *_python_tmp_break_indicator = Py_False;
                            frame_guard.setLineNumber( 72 );
                            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__module_loading_sys.asObject0(), _python_str_plain_path_hooks ) ).asObject() ) );
                            while( true )
                            {
                                {
                                    frame_guard.setLineNumber( 72 );
                                    PyObject *_tmp_unpack_3 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                    if ( _tmp_unpack_3 == NULL )
                                    {
                                        _python_tmp_break_indicator = Py_True;
                                        break;
                                    }
                                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_3 );
                                    _python_var_hook.assign0( _python_tmp_iter_value.asObject() );
                                }
                                frame_guard.setLineNumber( 73 );
                                try
                                {
                                    frame_guard.setLineNumber( 74 );
                                    {
                                        PyObjectTempKeeper0 call10;
                                        _python_var_finder.assign1( ( call10.assign( _python_var_hook.asObject() ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), _python_var_entry.asObject() ) ) );
                                    }
                                    frame_guard.setLineNumber( 76 );
                                    {
                                        PyObjectTempKeeper1 call12;
                                        if ( CHECK_IF_TRUE( PyObjectTemporary( ( call12.assign( LOOKUP_ATTRIBUTE( _python_var_finder.asObject(), _python_str_plain_find_module ) ), CALL_FUNCTION_WITH_ARGS( call12.asObject0(), _python_var_name.asObject() ) ) ).asObject() ) )
                                    {
                                        return INCREASE_REFCOUNT( Py_True );
                                    }
                                    else
                                    {
                                        frame_guard.setLineNumber( 80 );
                                        break;
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

                                    frame_guard.preserveExistingException();

#if PYTHON_VERSION >= 300
                                    ExceptionRestorerFrameGuard restorer( &frame_guard );
#endif
                                    _exception.toExceptionHandler();

                                    if ( _exception.matches( PyExc_ImportError ) )
                                    {
                                        frame_guard.detachFrame();
                                        frame_guard.setLineNumber( 83 );
                                        CONSIDER_THREADING(); continue;
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

                               CONSIDER_THREADING();
                            }
                            if ( ( _python_tmp_break_indicator == Py_True ) )
                            {
                                frame_guard.setLineNumber( 87 );
                                {
                                    PyObjectTempKeeper1 call17;
                                    if ( CHECK_IF_TRUE( PyObjectTemporary( ( call17.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__module_loading_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_isdir ) ), CALL_FUNCTION_WITH_ARGS( call17.asObject0(), _python_var_entry.asObject() ) ) ).asObject() ) )
                                {
                                    frame_guard.setLineNumber( 88 );
                                    try
                                    {
                                        {
                                            frame_guard.setLineNumber( 89 );
                                            PyObject *_tmp_python_tmp_source_iter;
                                            {
                                                PyObjectTempKeeper1 call14;
                                                PyObjectTempKeeper0 call15;
                                                _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( call14.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__module_loading_imp.asObject0(), _python_str_plain_find_module ) ), call15.assign( _python_var_module_name.asObject() ), CALL_FUNCTION_WITH_ARGS( call14.asObject0(), call15.asObject0(), PyObjectTemporary( MAKE_LIST1( _python_var_entry.asObject1() ) ).asObject() ) ) ).asObject() );
                                            }
                                            PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
                                            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                            PyObjectTemporary _python_tmp_element_3( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 2 ) );
                                            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 3 );
                                            _python_var_file_.assign0( _python_tmp_element_1.asObject() );
                                            _python_var__.assign0( _python_tmp_element_2.asObject() );
                                            _python_var__.assign0( _python_tmp_element_3.asObject() );
                                        }
                                        frame_guard.setLineNumber( 90 );
                                        if ( CHECK_IF_TRUE( _python_var_file_.asObject() ) )
                                        {
                                            frame_guard.setLineNumber( 91 );
                                            DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_file_.asObject(), _python_str_plain_close ) ).asObject() ) );
                                        }
                                        return INCREASE_REFCOUNT( Py_True );
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

               CONSIDER_THREADING();
            }
            if ( ( _python_tmp_break_indicator == Py_True ) )
            {
                return INCREASE_REFCOUNT( Py_False );
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
        frame_guard.getFrame0()->f_locals = _python_var_module_name.updateLocalsDict( _python_var_package.updateLocalsDict( _python_var_hook.updateLocalsDict( _python_var__.updateLocalsDict( _python_var_file_.updateLocalsDict( _python_var_entry.updateLocalsDict( _python_var_finder.updateLocalsDict( _python_var_package_path.updateLocalsDict( _python_var_name.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_module_has_submodule_of_module_django__utils__module_loading )
        {
           Py_DECREF( frame_function_2_module_has_submodule_of_module_django__utils__module_loading );
           frame_function_2_module_has_submodule_of_module_django__utils__module_loading = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2_module_has_submodule_of_module_django__utils__module_loading( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_package = NULL;
    PyObject *_python_par_module_name = NULL;
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
                PyErr_Format( PyExc_TypeError, "module_has_submodule() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_package == key )
            {
                if (unlikely( _python_par_package ))
                {
                    PyErr_Format( PyExc_TypeError, "module_has_submodule() got multiple values for keyword argument 'package'" );
                    goto error_exit;
                }

                _python_par_package = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_module_name == key )
            {
                if (unlikely( _python_par_module_name ))
                {
                    PyErr_Format( PyExc_TypeError, "module_has_submodule() got multiple values for keyword argument 'module_name'" );
                    goto error_exit;
                }

                _python_par_module_name = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_package, key ) )
            {
                if (unlikely( _python_par_package ))
                {
                    PyErr_Format( PyExc_TypeError, "module_has_submodule() got multiple values for keyword argument 'package'" );
                    goto error_exit;
                }

                _python_par_package = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_module_name, key ) )
            {
                if (unlikely( _python_par_module_name ))
                {
                    PyErr_Format( PyExc_TypeError, "module_has_submodule() got multiple values for keyword argument 'module_name'" );
                    goto error_exit;
                }

                _python_par_module_name = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "module_has_submodule() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "module_has_submodule() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "module_has_submodule() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "module_has_submodule() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "module_has_submodule() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "module_has_submodule() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "module_has_submodule() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "module_has_submodule() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "module_has_submodule() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "module_has_submodule() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "module_has_submodule() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "module_has_submodule() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "module_has_submodule() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_package != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "module_has_submodule() got multiple values for keyword argument 'package'" );
             goto error_exit;
         }

        _python_par_package = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_module_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "module_has_submodule() got multiple values for keyword argument 'module_name'" );
             goto error_exit;
         }

        _python_par_module_name = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_2_module_has_submodule_of_module_django__utils__module_loading( self, _python_par_package, _python_par_module_name );

error_exit:;

    Py_XDECREF( _python_par_package );
    Py_XDECREF( _python_par_module_name );

    return NULL;
}

static PyObject *dparse_function_2_module_has_submodule_of_module_django__utils__module_loading( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2_module_has_submodule_of_module_django__utils__module_loading( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_module_has_submodule_of_module_django__utils__module_loading( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_import_by_path_of_module_django__utils__module_loading(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_import_by_path_of_module_django__utils__module_loading,
        dparse_function_1_import_by_path_of_module_django__utils__module_loading,
        _python_str_plain_import_by_path,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_0f51de36e8d39fb0fc5f21087399c4d8,
        INCREASE_REFCOUNT( _python_tuple_str_empty_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__module_loading,
        _python_str_digest_60380a7b381e5fdce2e99587f259c90f
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_module_has_submodule_of_module_django__utils__module_loading(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_module_has_submodule_of_module_django__utils__module_loading,
        dparse_function_2_module_has_submodule_of_module_django__utils__module_loading,
        _python_str_plain_module_has_submodule,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_4a1c2809adeb82ba823e31d2f42bceb7,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__module_loading,
        _python_str_digest_bcac9d5e6cb5327c33fb7ca37b935727
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.utils.module_loading",   /* m_name */
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

MOD_INIT_DECL( django__utils__module_loading )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__utils__module_loading );
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

    // puts( "in initdjango__utils__module_loading" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__utils__module_loading = Py_InitModule4(
        "django.utils.module_loading",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__utils__module_loading = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__utils__module_loading = (PyDictObject *)((PyModuleObject *)_module_django__utils__module_loading)->md_dict;

    assertObject( _module_django__utils__module_loading );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_03bb9f131d782ff4dbd31e0966379285, _module_django__utils__module_loading );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__utils__module_loading );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__utils__module_loading != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__utils__module_loading, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django__utils__module_loading, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_65a5080d793fb42b9858285a0e6a49b5 );
    PyFrameObject *frame_module_django__utils__module_loading = MAKE_FRAME( _codeobj_69ec1f4c95147f1e47e1d14b4d4a543d, _module_django__utils__module_loading );

    FrameGuard frame_guard( frame_module_django__utils__module_loading );
    try
    {
        assert( Py_REFCNT( frame_module_django__utils__module_loading ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 1 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__module_loading, (Nuitka_StringObject *)_python_str_plain_imp, IMPORT_MODULE( _python_str_plain_imp, ((PyModuleObject *)_module_django__utils__module_loading)->md_dict, ((PyModuleObject *)_module_django__utils__module_loading)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 2 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__module_loading, (Nuitka_StringObject *)_python_str_plain_os, IMPORT_MODULE( _python_str_plain_os, ((PyModuleObject *)_module_django__utils__module_loading)->md_dict, ((PyModuleObject *)_module_django__utils__module_loading)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 3 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__module_loading, (Nuitka_StringObject *)_python_str_plain_sys, IMPORT_MODULE( _python_str_plain_sys, ((PyModuleObject *)_module_django__utils__module_loading)->md_dict, ((PyModuleObject *)_module_django__utils__module_loading)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 5 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__module_loading, (Nuitka_StringObject *)_python_str_plain_ImproperlyConfigured, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d9333e07c409926fdd89a4c3c526d0b5, ((PyModuleObject *)_module_django__utils__module_loading)->md_dict, ((PyModuleObject *)_module_django__utils__module_loading)->md_dict, _python_list_str_plain_ImproperlyConfigured_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ImproperlyConfigured ) );
        frame_guard.setLineNumber( 6 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__module_loading, (Nuitka_StringObject *)_python_str_plain_six, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__utils__module_loading)->md_dict, ((PyModuleObject *)_module_django__utils__module_loading)->md_dict, _python_list_str_plain_six_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_six ) );
        frame_guard.setLineNumber( 7 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__module_loading, (Nuitka_StringObject *)_python_str_plain_import_module, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_4fc502edf9b4c184659c220d993c01d3, ((PyModuleObject *)_module_django__utils__module_loading)->md_dict, ((PyModuleObject *)_module_django__utils__module_loading)->md_dict, _python_list_str_plain_import_module_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_import_module ) );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__utils__module_loading)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__utils__module_loading, (Nuitka_StringObject *)_python_str_plain_import_by_path, MAKE_FUNCTION_function_1_import_by_path_of_module_django__utils__module_loading(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__module_loading, (Nuitka_StringObject *)_python_str_plain_module_has_submodule, MAKE_FUNCTION_function_2_module_has_submodule_of_module_django__utils__module_loading(  ) );

   return MOD_RETURN_VALUE( _module_django__utils__module_loading );
}
