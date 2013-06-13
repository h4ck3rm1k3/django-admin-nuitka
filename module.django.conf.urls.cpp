// Generated code for Python source for module 'django.conf.urls'
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

// The _module_django__conf__urls is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__conf__urls;
PyDictObject *_moduledict_django__conf__urls;

// The module level variables.
static PyObjectGlobalVariable_django__conf__urls _mvar_django__conf__urls_ImproperlyConfigured( &_module_django__conf__urls, &_python_str_plain_ImproperlyConfigured );
static PyObjectGlobalVariable_django__conf__urls _mvar_django__conf__urls_LocaleRegexURLResolver( &_module_django__conf__urls, &_python_str_plain_LocaleRegexURLResolver );
static PyObjectGlobalVariable_django__conf__urls _mvar_django__conf__urls_RegexURLPattern( &_module_django__conf__urls, &_python_str_plain_RegexURLPattern );
static PyObjectGlobalVariable_django__conf__urls _mvar_django__conf__urls_RegexURLResolver( &_module_django__conf__urls, &_python_str_plain_RegexURLResolver );
static PyObjectGlobalVariable_django__conf__urls _mvar_django__conf__urls_import_module( &_module_django__conf__urls, &_python_str_plain_import_module );
static PyObjectGlobalVariable_django__conf__urls _mvar_django__conf__urls_six( &_module_django__conf__urls, &_python_str_plain_six );
static PyObjectGlobalVariable_django__conf__urls _mvar_django__conf__urls_url( &_module_django__conf__urls, &_python_str_plain_url );

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_include_of_module_django__conf__urls(  );


static PyObject *MAKE_FUNCTION_function_2_patterns_of_module_django__conf__urls(  );


static PyObject *MAKE_FUNCTION_function_3_url_of_module_django__conf__urls(  );


// The module function definitions.
static PyObject *impl_function_1_include_of_module_django__conf__urls( Nuitka_FunctionObject *self, PyObject *_python_par_arg, PyObject *_python_par_namespace, PyObject *_python_par_app_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_arg( _python_str_plain_arg, _python_par_arg );
    PyObjectLocalParameterVariableNoDel _python_var_namespace( _python_str_plain_namespace, _python_par_namespace );
    PyObjectLocalParameterVariableNoDel _python_var_app_name( _python_str_plain_app_name, _python_par_app_name );
    PyObjectLocalVariable _python_var_urlconf_module( _python_str_plain_urlconf_module );
    PyObjectLocalVariable _python_var_patterns( _python_str_plain_patterns );
    PyObjectLocalVariable _python_var_url_pattern( _python_str_plain_url_pattern );

    // Actual function code.
    static PyFrameObject *frame_function_1_include_of_module_django__conf__urls = NULL;

    if ( isFrameUnusable( frame_function_1_include_of_module_django__conf__urls ) )
    {
        if ( frame_function_1_include_of_module_django__conf__urls )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_include_of_module_django__conf__urls" );
#endif
            Py_DECREF( frame_function_1_include_of_module_django__conf__urls );
        }

        frame_function_1_include_of_module_django__conf__urls = MAKE_FRAME( _codeobj_55983d3ae7508a9504ae5a6b0ebb7304, _module_django__conf__urls );
    }

    FrameGuard frame_guard( frame_function_1_include_of_module_django__conf__urls );
    try
    {
        assert( Py_REFCNT( frame_function_1_include_of_module_django__conf__urls ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 16 );
        if ( BUILTIN_ISINSTANCE_BOOL( _python_var_arg.asObject(), LOOKUP_BUILTIN( _python_str_plain_tuple ) ) )
        {
            frame_guard.setLineNumber( 18 );
            if ( CHECK_IF_TRUE( _python_var_namespace.asObject() ) )
            {
                frame_guard.setLineNumber( 19 );
                {
                        PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__urls_ImproperlyConfigured.asObject0(), _python_str_digest_544b11825565ef1b18de359e55e3f68b ) );
                        RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                }
            }
            {
                frame_guard.setLineNumber( 20 );
                PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_var_arg.asObject() ) );
                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                PyObjectTemporary _python_tmp_element_3( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 2 ) );
                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 3 );
                _python_var_urlconf_module.assign0( _python_tmp_element_1.asObject() );
                _python_var_app_name.assign0( _python_tmp_element_2.asObject() );
                _python_var_namespace.assign0( _python_tmp_element_3.asObject() );
            }
        }
        else
        {
            frame_guard.setLineNumber( 23 );
            _python_var_urlconf_module.assign0( _python_var_arg.asObject() );
        }
        frame_guard.setLineNumber( 25 );
        {
            PyObjectTempKeeper0 isinstance3;
            if ( ( isinstance3.assign( _python_var_urlconf_module.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__conf__urls_six.asObject0(), _python_str_plain_string_types ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 26 );
            {
                PyObjectTempKeeper0 call1;
                _python_var_urlconf_module.assign1( ( call1.assign( _mvar_django__conf__urls_import_module.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_urlconf_module.asObject() ) ) );
            }
        }
        }
        frame_guard.setLineNumber( 27 );
        {
            PyObjectTempKeeper0 getattr5;
            _python_var_patterns.assign1( ( getattr5.assign( _python_var_urlconf_module.asObject() ), BUILTIN_GETATTR( getattr5.asObject0(), _python_str_plain_urlpatterns, _python_var_urlconf_module.asObject() ) ) );
        }
        frame_guard.setLineNumber( 31 );
        if ( BUILTIN_ISINSTANCE_BOOL( _python_var_patterns.asObject(), PyObjectTemporary( MAKE_TUPLE2( LOOKUP_BUILTIN( _python_str_plain_list ), LOOKUP_BUILTIN( _python_str_plain_tuple ) ) ).asObject() ) )
        {
            {
                frame_guard.setLineNumber( 32 );
                PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_patterns.asObject() ) );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 32 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        _python_var_url_pattern.assign0( _python_tmp_iter_value.asObject() );
                    }
                    frame_guard.setLineNumber( 35 );
                    {
                        PyObjectTempKeeper0 isinstance8;
                        if ( ( isinstance8.assign( _python_var_url_pattern.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance8.asObject0(), _mvar_django__conf__urls_LocaleRegexURLResolver.asObject0() ) ) )
                    {
                        frame_guard.setLineNumber( 36 );
                        {
                                PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_ARGS( _mvar_django__conf__urls_ImproperlyConfigured.asObject0(), _python_str_digest_c04734c6455ba456ce4662e614eb639a ) );
                                RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                        }
                    }
                    }

                   CONSIDER_THREADING();
                }
            }
        }
        frame_guard.setLineNumber( 39 );
        {
            PyObjectTempKeeper0 make_tuple10;
            PyObjectTempKeeper0 make_tuple11;
            return ( make_tuple10.assign( _python_var_urlconf_module.asObject() ), make_tuple11.assign( _python_var_app_name.asObject() ), MAKE_TUPLE3( make_tuple10.asObject0(), make_tuple11.asObject0(), _python_var_namespace.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_app_name.updateLocalsDict( _python_var_namespace.updateLocalsDict( _python_var_arg.updateLocalsDict( _python_var_url_pattern.updateLocalsDict( _python_var_patterns.updateLocalsDict( _python_var_urlconf_module.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_include_of_module_django__conf__urls )
        {
           Py_DECREF( frame_function_1_include_of_module_django__conf__urls );
           frame_function_1_include_of_module_django__conf__urls = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1_include_of_module_django__conf__urls( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_arg = NULL;
    PyObject *_python_par_namespace = NULL;
    PyObject *_python_par_app_name = NULL;
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
                PyErr_Format( PyExc_TypeError, "include() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_arg == key )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "include() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_namespace == key )
            {
                if (unlikely( _python_par_namespace ))
                {
                    PyErr_Format( PyExc_TypeError, "include() got multiple values for keyword argument 'namespace'" );
                    goto error_exit;
                }

                _python_par_namespace = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_app_name == key )
            {
                if (unlikely( _python_par_app_name ))
                {
                    PyErr_Format( PyExc_TypeError, "include() got multiple values for keyword argument 'app_name'" );
                    goto error_exit;
                }

                _python_par_app_name = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_arg, key ) )
            {
                if (unlikely( _python_par_arg ))
                {
                    PyErr_Format( PyExc_TypeError, "include() got multiple values for keyword argument 'arg'" );
                    goto error_exit;
                }

                _python_par_arg = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_namespace, key ) )
            {
                if (unlikely( _python_par_namespace ))
                {
                    PyErr_Format( PyExc_TypeError, "include() got multiple values for keyword argument 'namespace'" );
                    goto error_exit;
                }

                _python_par_namespace = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_app_name, key ) )
            {
                if (unlikely( _python_par_app_name ))
                {
                    PyErr_Format( PyExc_TypeError, "include() got multiple values for keyword argument 'app_name'" );
                    goto error_exit;
                }

                _python_par_app_name = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "include() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "include() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "include() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "include() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "include() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "include() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "include() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "include() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "include() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "include() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "include() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "include() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "include() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 3 ? args_given : 3;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_arg != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "include() got multiple values for keyword argument 'arg'" );
             goto error_exit;
         }

        _python_par_arg = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_namespace != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "include() got multiple values for keyword argument 'namespace'" );
             goto error_exit;
         }

        _python_par_namespace = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_app_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "include() got multiple values for keyword argument 'app_name'" );
             goto error_exit;
         }

        _python_par_app_name = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_namespace == NULL )
    {
        _python_par_namespace = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_namespace );
    }
    if ( _python_par_app_name == NULL )
    {
        _python_par_app_name = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_app_name );
    }


    return impl_function_1_include_of_module_django__conf__urls( self, _python_par_arg, _python_par_namespace, _python_par_app_name );

error_exit:;

    Py_XDECREF( _python_par_arg );
    Py_XDECREF( _python_par_namespace );
    Py_XDECREF( _python_par_app_name );

    return NULL;
}

static PyObject *dparse_function_1_include_of_module_django__conf__urls( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_1_include_of_module_django__conf__urls( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_include_of_module_django__conf__urls( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_patterns_of_module_django__conf__urls( Nuitka_FunctionObject *self, PyObject *_python_par_prefix, PyObject *_python_par_args )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_prefix( _python_str_plain_prefix, _python_par_prefix );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalVariable _python_var_pattern_list( _python_str_plain_pattern_list );
    PyObjectLocalVariable _python_var_t( _python_str_plain_t );

    // Actual function code.
    _python_var_pattern_list.assign1( PyList_New( 0 ) );
    static PyFrameObject *frame_function_2_patterns_of_module_django__conf__urls = NULL;

    if ( isFrameUnusable( frame_function_2_patterns_of_module_django__conf__urls ) )
    {
        if ( frame_function_2_patterns_of_module_django__conf__urls )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_patterns_of_module_django__conf__urls" );
#endif
            Py_DECREF( frame_function_2_patterns_of_module_django__conf__urls );
        }

        frame_function_2_patterns_of_module_django__conf__urls = MAKE_FRAME( _codeobj_c74b851f13cf1caf2b6860ce3c166c33, _module_django__conf__urls );
    }

    FrameGuard frame_guard( frame_function_2_patterns_of_module_django__conf__urls );
    try
    {
        assert( Py_REFCNT( frame_function_2_patterns_of_module_django__conf__urls ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 43 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_args.asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 43 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_t.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 44 );
                if ( BUILTIN_ISINSTANCE_BOOL( _python_var_t.asObject(), PyObjectTemporary( MAKE_TUPLE2( LOOKUP_BUILTIN( _python_str_plain_list ), LOOKUP_BUILTIN( _python_str_plain_tuple ) ) ).asObject() ) )
                {
                    frame_guard.setLineNumber( 45 );
                    {
                        PyObjectTempKeeper0 call_tmp1;
                        PyObjectTempKeeper1 call_tmp2;
                        _python_var_t.assign1( ( call_tmp1.assign( _mvar_django__conf__urls_url.asObject0() ), call_tmp2.assign( MAKE_DICT1( _python_var_prefix.asObject(), _python_str_plain_prefix ) ), impl_function_12_complex_call_helper_keywords_star_list_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), _python_var_t.asObject1() ) ) );
                    }
                }
                else
                {
                    frame_guard.setLineNumber( 46 );
                    {
                        PyObjectTempKeeper0 isinstance6;
                        if ( ( isinstance6.assign( _python_var_t.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance6.asObject0(), _mvar_django__conf__urls_RegexURLPattern.asObject0() ) ) )
                    {
                        frame_guard.setLineNumber( 47 );
                        {
                            PyObjectTempKeeper1 call4;
                            DECREASE_REFCOUNT( ( call4.assign( LOOKUP_ATTRIBUTE( _python_var_t.asObject(), _python_str_plain_add_prefix ) ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), _python_var_prefix.asObject() ) ) );
                        }
                    }
                    }
                }
                frame_guard.setLineNumber( 48 );
                {
                    PyObjectTempKeeper1 call8;
                    DECREASE_REFCOUNT( ( call8.assign( LOOKUP_ATTRIBUTE( _python_var_pattern_list.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), _python_var_t.asObject() ) ) );
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 49 );
        return _python_var_pattern_list.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_args.updateLocalsDict( _python_var_prefix.updateLocalsDict( _python_var_t.updateLocalsDict( _python_var_pattern_list.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_patterns_of_module_django__conf__urls )
        {
           Py_DECREF( frame_function_2_patterns_of_module_django__conf__urls );
           frame_function_2_patterns_of_module_django__conf__urls = NULL;
        }

        _exception.toPython();
        return NULL;
    }
}
static PyObject *fparse_function_2_patterns_of_module_django__conf__urls( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_prefix = NULL;
    PyObject *_python_par_args = NULL;
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
                PyErr_Format( PyExc_TypeError, "patterns() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_prefix == key )
            {
                if (unlikely( _python_par_prefix ))
                {
                    PyErr_Format( PyExc_TypeError, "patterns() got multiple values for keyword argument 'prefix'" );
                    goto error_exit;
                }

                _python_par_prefix = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_prefix, key ) )
            {
                if (unlikely( _python_par_prefix ))
                {
                    PyErr_Format( PyExc_TypeError, "patterns() got multiple values for keyword argument 'prefix'" );
                    goto error_exit;
                }

                _python_par_prefix = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "patterns() got an unexpected keyword argument '%s'",
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

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "patterns() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "patterns() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "patterns() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_prefix != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "patterns() got multiple values for keyword argument 'prefix'" );
             goto error_exit;
         }

        _python_par_prefix = INCREASE_REFCOUNT( args[ 0 ] );
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 1 )
    {
        _python_par_args = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_2_patterns_of_module_django__conf__urls( self, _python_par_prefix, _python_par_args );

error_exit:;

    Py_XDECREF( _python_par_prefix );
    Py_XDECREF( _python_par_args );

    return NULL;
}

static PyObject *dparse_function_2_patterns_of_module_django__conf__urls( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2_patterns_of_module_django__conf__urls( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ) );
    }
    else
    {
        PyObject *result = fparse_function_2_patterns_of_module_django__conf__urls( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_url_of_module_django__conf__urls( Nuitka_FunctionObject *self, PyObject *_python_par_regex, PyObject *_python_par_view, PyObject *_python_par_kwargs, PyObject *_python_par_name, PyObject *_python_par_prefix )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_regex( _python_str_plain_regex, _python_par_regex );
    PyObjectLocalParameterVariableNoDel _python_var_view( _python_str_plain_view, _python_par_view );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );
    PyObjectLocalParameterVariableNoDel _python_var_prefix( _python_str_plain_prefix, _python_par_prefix );
    PyObjectLocalVariable _python_var_urlconf_module( _python_str_plain_urlconf_module );
    PyObjectLocalVariable _python_var_app_name( _python_str_plain_app_name );
    PyObjectLocalVariable _python_var_namespace( _python_str_plain_namespace );

    // Actual function code.
    static PyFrameObject *frame_function_3_url_of_module_django__conf__urls = NULL;

    if ( isFrameUnusable( frame_function_3_url_of_module_django__conf__urls ) )
    {
        if ( frame_function_3_url_of_module_django__conf__urls )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_url_of_module_django__conf__urls" );
#endif
            Py_DECREF( frame_function_3_url_of_module_django__conf__urls );
        }

        frame_function_3_url_of_module_django__conf__urls = MAKE_FRAME( _codeobj_98f0d406605e73d66779e7b81cc946d7, _module_django__conf__urls );
    }

    FrameGuard frame_guard( frame_function_3_url_of_module_django__conf__urls );
    try
    {
        assert( Py_REFCNT( frame_function_3_url_of_module_django__conf__urls ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 52 );
        if ( BUILTIN_ISINSTANCE_BOOL( _python_var_view.asObject(), PyObjectTemporary( MAKE_TUPLE2( LOOKUP_BUILTIN( _python_str_plain_list ), LOOKUP_BUILTIN( _python_str_plain_tuple ) ) ).asObject() ) )
        {
            {
                frame_guard.setLineNumber( 54 );
                PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_var_view.asObject() ) );
                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                PyObjectTemporary _python_tmp_element_3( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 2 ) );
                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 3 );
                _python_var_urlconf_module.assign0( _python_tmp_element_1.asObject() );
                _python_var_app_name.assign0( _python_tmp_element_2.asObject() );
                _python_var_namespace.assign0( _python_tmp_element_3.asObject() );
            }
            frame_guard.setLineNumber( 55 );
            {
                PyObjectTempKeeper0 call8;
                PyObjectTempKeeper1 call9;
                PyObjectTempKeeper0 make_dict1;
                PyObjectTempKeeper0 make_tuple5;
                PyObjectTempKeeper0 make_tuple6;
                return ( call8.assign( _mvar_django__conf__urls_RegexURLResolver.asObject0() ), call9.assign( ( make_tuple5.assign( _python_var_regex.asObject() ), make_tuple6.assign( _python_var_urlconf_module.asObject() ), MAKE_TUPLE3( make_tuple5.asObject0(), make_tuple6.asObject0(), _python_var_kwargs.asObject() ) ) ), CALL_FUNCTION( call8.asObject0(), call9.asObject0(), PyObjectTemporary( ( make_dict1.assign( _python_var_app_name.asObject() ), MAKE_DICT2( make_dict1.asObject0(), _python_str_plain_app_name, _python_var_namespace.asObject(), _python_str_plain_namespace ) ) ).asObject() ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 57 );
            {
                PyObjectTempKeeper0 isinstance15;
                if ( ( isinstance15.assign( _python_var_view.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance15.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__conf__urls_six.asObject0(), _python_str_plain_string_types ) ).asObject() ) ) )
            {
                frame_guard.setLineNumber( 58 );
                if ( (!( CHECK_IF_TRUE( _python_var_view.asObject() ) )) )
                {
                    frame_guard.setLineNumber( 59 );
                    {
                        PyObjectTempKeeper0 call11;
                        {
                            PyObjectTemporary tmp_exception_type( ( call11.assign( _mvar_django__conf__urls_ImproperlyConfigured.asObject0() ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_6858f51168206190eebe46eac85ec5ec, _python_var_regex.asObject() ) ).asObject() ) ) );
                            RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                    }
                    }
                }
                frame_guard.setLineNumber( 60 );
                if ( CHECK_IF_TRUE( _python_var_prefix.asObject() ) )
                {
                    frame_guard.setLineNumber( 61 );
                    {
                        PyObjectTempKeeper1 op13;
                        _python_var_view.assign1( ( op13.assign( BINARY_OPERATION_ADD( _python_var_prefix.asObject(), _python_str_dot ) ), BINARY_OPERATION_ADD( op13.asObject0(), _python_var_view.asObject() ) ) );
                    }
                }
            }
            }
            frame_guard.setLineNumber( 62 );
            {
                PyObjectTempKeeper0 call17;
                PyObjectTempKeeper0 call18;
                PyObjectTempKeeper0 call19;
                PyObjectTempKeeper0 call20;
                return ( call17.assign( _mvar_django__conf__urls_RegexURLPattern.asObject0() ), call18.assign( _python_var_regex.asObject() ), call19.assign( _python_var_view.asObject() ), call20.assign( _python_var_kwargs.asObject() ), CALL_FUNCTION_WITH_ARGS( call17.asObject0(), call18.asObject0(), call19.asObject0(), call20.asObject0(), _python_var_name.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_prefix.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var_kwargs.updateLocalsDict( _python_var_view.updateLocalsDict( _python_var_regex.updateLocalsDict( _python_var_namespace.updateLocalsDict( _python_var_app_name.updateLocalsDict( _python_var_urlconf_module.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_url_of_module_django__conf__urls )
        {
           Py_DECREF( frame_function_3_url_of_module_django__conf__urls );
           frame_function_3_url_of_module_django__conf__urls = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_url_of_module_django__conf__urls( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_regex = NULL;
    PyObject *_python_par_view = NULL;
    PyObject *_python_par_kwargs = NULL;
    PyObject *_python_par_name = NULL;
    PyObject *_python_par_prefix = NULL;
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
                PyErr_Format( PyExc_TypeError, "url() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_regex == key )
            {
                if (unlikely( _python_par_regex ))
                {
                    PyErr_Format( PyExc_TypeError, "url() got multiple values for keyword argument 'regex'" );
                    goto error_exit;
                }

                _python_par_regex = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_view == key )
            {
                if (unlikely( _python_par_view ))
                {
                    PyErr_Format( PyExc_TypeError, "url() got multiple values for keyword argument 'view'" );
                    goto error_exit;
                }

                _python_par_view = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_kwargs == key )
            {
                if (unlikely( _python_par_kwargs ))
                {
                    PyErr_Format( PyExc_TypeError, "url() got multiple values for keyword argument 'kwargs'" );
                    goto error_exit;
                }

                _python_par_kwargs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_name == key )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "url() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_prefix == key )
            {
                if (unlikely( _python_par_prefix ))
                {
                    PyErr_Format( PyExc_TypeError, "url() got multiple values for keyword argument 'prefix'" );
                    goto error_exit;
                }

                _python_par_prefix = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_regex, key ) )
            {
                if (unlikely( _python_par_regex ))
                {
                    PyErr_Format( PyExc_TypeError, "url() got multiple values for keyword argument 'regex'" );
                    goto error_exit;
                }

                _python_par_regex = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_view, key ) )
            {
                if (unlikely( _python_par_view ))
                {
                    PyErr_Format( PyExc_TypeError, "url() got multiple values for keyword argument 'view'" );
                    goto error_exit;
                }

                _python_par_view = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_kwargs, key ) )
            {
                if (unlikely( _python_par_kwargs ))
                {
                    PyErr_Format( PyExc_TypeError, "url() got multiple values for keyword argument 'kwargs'" );
                    goto error_exit;
                }

                _python_par_kwargs = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "url() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_prefix, key ) )
            {
                if (unlikely( _python_par_prefix ))
                {
                    PyErr_Format( PyExc_TypeError, "url() got multiple values for keyword argument 'prefix'" );
                    goto error_exit;
                }

                _python_par_prefix = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "url() got an unexpected keyword argument '%s'",
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
    if (unlikely( args_given > 5 ))
    {
        if ( 5 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "url() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "url() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "url() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "url() takes exactly %d arguments (%zd given)", 5, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 5 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "url() takes exactly %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "url() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
#else
            if ( 5 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "url() takes %d positional arguments but %zd were given", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "url() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 5 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "url() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "url() takes exactly %d non-keyword arguments (%zd given)", 5, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 5 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "url() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "url() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 5 ? args_given : 5;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_regex != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "url() got multiple values for keyword argument 'regex'" );
             goto error_exit;
         }

        _python_par_regex = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_view != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "url() got multiple values for keyword argument 'view'" );
             goto error_exit;
         }

        _python_par_view = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_kwargs != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "url() got multiple values for keyword argument 'kwargs'" );
             goto error_exit;
         }

        _python_par_kwargs = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "url() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_prefix != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "url() got multiple values for keyword argument 'prefix'" );
             goto error_exit;
         }

        _python_par_prefix = INCREASE_REFCOUNT( args[ 4 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_kwargs == NULL )
    {
        _python_par_kwargs = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_kwargs );
    }
    if ( _python_par_name == NULL )
    {
        _python_par_name = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_name );
    }
    if ( _python_par_prefix == NULL )
    {
        _python_par_prefix = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 2 ) );
        assertObject( _python_par_prefix );
    }


    return impl_function_3_url_of_module_django__conf__urls( self, _python_par_regex, _python_par_view, _python_par_kwargs, _python_par_name, _python_par_prefix );

error_exit:;

    Py_XDECREF( _python_par_regex );
    Py_XDECREF( _python_par_view );
    Py_XDECREF( _python_par_kwargs );
    Py_XDECREF( _python_par_name );
    Py_XDECREF( _python_par_prefix );

    return NULL;
}

static PyObject *dparse_function_3_url_of_module_django__conf__urls( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5)
    {
        return impl_function_3_url_of_module_django__conf__urls( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_url_of_module_django__conf__urls( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_include_of_module_django__conf__urls(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_include_of_module_django__conf__urls,
        dparse_function_1_include_of_module_django__conf__urls,
        _python_str_plain_include,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_55983d3ae7508a9504ae5a6b0ebb7304,
        INCREASE_REFCOUNT( _python_tuple_none_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__conf__urls,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_patterns_of_module_django__conf__urls(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_patterns_of_module_django__conf__urls,
        dparse_function_2_patterns_of_module_django__conf__urls,
        _python_str_plain_patterns,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_c74b851f13cf1caf2b6860ce3c166c33,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__conf__urls,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_url_of_module_django__conf__urls(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_url_of_module_django__conf__urls,
        dparse_function_3_url_of_module_django__conf__urls,
        _python_str_plain_url,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_98f0d406605e73d66779e7b81cc946d7,
        INCREASE_REFCOUNT( _python_tuple_none_none_str_empty_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__conf__urls,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.conf.urls",   /* m_name */
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

MOD_INIT_DECL( django__conf__urls )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__conf__urls );
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

    // puts( "in initdjango__conf__urls" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__conf__urls = Py_InitModule4(
        "django.conf.urls",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__conf__urls = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__conf__urls = (PyDictObject *)((PyModuleObject *)_module_django__conf__urls)->md_dict;

    assertObject( _module_django__conf__urls );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_01599186b3c074190085ecf32c7324eb, _module_django__conf__urls );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__conf__urls );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__conf__urls != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__conf__urls, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django__conf__urls, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_fca16f7108bcd7f0048b106654f3ac54 );
    UPDATE_STRING_DICT1( _moduledict_django__conf__urls, (Nuitka_StringObject *)_python_str_plain___path__, LIST_COPY( _python_list_str_digest_7c39d3a96bf6a4da2ee1b6724b484f88_list ) );
    PyFrameObject *frame_module_django__conf__urls = MAKE_FRAME( _codeobj_1b44248d5a9a0ef8aa22fec4fbacf837, _module_django__conf__urls );

    FrameGuard frame_guard( frame_module_django__conf__urls );
    try
    {
        assert( Py_REFCNT( frame_module_django__conf__urls ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 1 );
        UPDATE_STRING_DICT1( _moduledict_django__conf__urls, (Nuitka_StringObject *)_python_str_plain_RegexURLPattern, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_4c07869702570273c29e851966a4b9ca, ((PyModuleObject *)_module_django__conf__urls)->md_dict, ((PyModuleObject *)_module_django__conf__urls)->md_dict, _python_list_d16575092cc04679041cf29ed0854469_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_RegexURLPattern ) );
        UPDATE_STRING_DICT1( _moduledict_django__conf__urls, (Nuitka_StringObject *)_python_str_plain_RegexURLResolver, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_4c07869702570273c29e851966a4b9ca, ((PyModuleObject *)_module_django__conf__urls)->md_dict, ((PyModuleObject *)_module_django__conf__urls)->md_dict, _python_list_d16575092cc04679041cf29ed0854469_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_RegexURLResolver ) );
        UPDATE_STRING_DICT1( _moduledict_django__conf__urls, (Nuitka_StringObject *)_python_str_plain_LocaleRegexURLResolver, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_4c07869702570273c29e851966a4b9ca, ((PyModuleObject *)_module_django__conf__urls)->md_dict, ((PyModuleObject *)_module_django__conf__urls)->md_dict, _python_list_d16575092cc04679041cf29ed0854469_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_LocaleRegexURLResolver ) );
        frame_guard.setLineNumber( 3 );
        UPDATE_STRING_DICT1( _moduledict_django__conf__urls, (Nuitka_StringObject *)_python_str_plain_ImproperlyConfigured, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_d9333e07c409926fdd89a4c3c526d0b5, ((PyModuleObject *)_module_django__conf__urls)->md_dict, ((PyModuleObject *)_module_django__conf__urls)->md_dict, _python_list_str_plain_ImproperlyConfigured_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_ImproperlyConfigured ) );
        frame_guard.setLineNumber( 4 );
        UPDATE_STRING_DICT1( _moduledict_django__conf__urls, (Nuitka_StringObject *)_python_str_plain_import_module, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_4fc502edf9b4c184659c220d993c01d3, ((PyModuleObject *)_module_django__conf__urls)->md_dict, ((PyModuleObject *)_module_django__conf__urls)->md_dict, _python_list_str_plain_import_module_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_import_module ) );
        frame_guard.setLineNumber( 5 );
        UPDATE_STRING_DICT1( _moduledict_django__conf__urls, (Nuitka_StringObject *)_python_str_plain_six, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__conf__urls)->md_dict, ((PyModuleObject *)_module_django__conf__urls)->md_dict, _python_list_str_plain_six_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_six ) );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__conf__urls)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__conf__urls, (Nuitka_StringObject *)_python_str_plain___all__, LIST_COPY( _python_list_0df9779fa6c0f348db1e25b83a4a3ceb_list ) );
    UPDATE_STRING_DICT0( _moduledict_django__conf__urls, (Nuitka_StringObject *)_python_str_plain_handler400, _python_str_digest_a4b709db76fd9756fcc3331353dcdf5c );
    UPDATE_STRING_DICT0( _moduledict_django__conf__urls, (Nuitka_StringObject *)_python_str_plain_handler403, _python_str_digest_2a9279f1e79e5577a1469ce0270fead0 );
    UPDATE_STRING_DICT0( _moduledict_django__conf__urls, (Nuitka_StringObject *)_python_str_plain_handler404, _python_str_digest_8781bf26ca02cb69676757bec3b52585 );
    UPDATE_STRING_DICT0( _moduledict_django__conf__urls, (Nuitka_StringObject *)_python_str_plain_handler500, _python_str_digest_2b7b686398eaf7497942992a157a23c1 );
    UPDATE_STRING_DICT1( _moduledict_django__conf__urls, (Nuitka_StringObject *)_python_str_plain_include, MAKE_FUNCTION_function_1_include_of_module_django__conf__urls(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__conf__urls, (Nuitka_StringObject *)_python_str_plain_patterns, MAKE_FUNCTION_function_2_patterns_of_module_django__conf__urls(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__conf__urls, (Nuitka_StringObject *)_python_str_plain_url, MAKE_FUNCTION_function_3_url_of_module_django__conf__urls(  ) );

   return MOD_RETURN_VALUE( _module_django__conf__urls );
}
