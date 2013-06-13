// Generated code for Python source for module 'django.utils.html_parser'
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

// The _module_django__utils__html_parser is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__utils__html_parser;
PyDictObject *_moduledict_django__utils__html_parser;

// The module level variables.
static PyObjectGlobalVariable_django__utils__html_parser _mvar_django__utils__html_parser___metaclass__( &_module_django__utils__html_parser, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__utils__html_parser _mvar_django__utils__html_parser__html_parser( &_module_django__utils__html_parser, &_python_str_plain__html_parser );
static PyObjectGlobalVariable_django__utils__html_parser _mvar_django__utils__html_parser_current_version( &_module_django__utils__html_parser, &_python_str_plain_current_version );
static PyObjectGlobalVariable_django__utils__html_parser _mvar_django__utils__html_parser_re( &_module_django__utils__html_parser, &_python_str_plain_re );
static PyObjectGlobalVariable_django__utils__html_parser _mvar_django__utils__html_parser_sys( &_module_django__utils__html_parser, &_python_str_plain_sys );
static PyObjectGlobalVariable_django__utils__html_parser _mvar_django__utils__html_parser_tagfind( &_module_django__utils__html_parser, &_python_str_plain_tagfind );
static PyObjectGlobalVariable_django__utils__html_parser _mvar_django__utils__html_parser_use_workaround( &_module_django__utils__html_parser, &_python_str_plain_use_workaround );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_HTMLParser_of_module_django__utils__html_parser(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_HTMLParser_of_module_django__utils__html_parser(  );


static PyObject *MAKE_FUNCTION_function_2_set_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser(  );


static PyObject *MAKE_FUNCTION_function_3_clear_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser(  );


static PyObject *MAKE_FUNCTION_function_4_parse_starttag_of_class_1_HTMLParser_of_module_django__utils__html_parser(  );


static PyObject *MAKE_FUNCTION_function_5_parse_endtag_of_class_1_HTMLParser_of_module_django__utils__html_parser(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_HTMLParser_of_module_django__utils__html_parser(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_set_cdata_mode( _python_str_plain_set_cdata_mode );
    PyObjectLocalVariable _python_var_clear_cdata_mode( _python_str_plain_clear_cdata_mode );
    PyObjectLocalVariable _python_var_parse_starttag( _python_str_plain_parse_starttag );
    PyObjectLocalVariable _python_var_parse_endtag( _python_str_plain_parse_endtag );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_html_parser );
    _python_var___doc__.assign0( _python_str_digest_9b8f2eac7016d95f6bd801c97762c52d );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_1_HTMLParser_of_module_django__utils__html_parser(  ) );
    _python_var_set_cdata_mode.assign1( MAKE_FUNCTION_function_2_set_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser(  ) );
    _python_var_clear_cdata_mode.assign1( MAKE_FUNCTION_function_3_clear_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser(  ) );
    _python_var_parse_starttag.assign1( MAKE_FUNCTION_function_4_parse_starttag_of_class_1_HTMLParser_of_module_django__utils__html_parser(  ) );
    _python_var_parse_endtag.assign1( MAKE_FUNCTION_function_5_parse_endtag_of_class_1_HTMLParser_of_module_django__utils__html_parser(  ) );
    return _python_var_parse_endtag.updateLocalsDict( _python_var_parse_starttag.updateLocalsDict( _python_var_clear_cdata_mode.updateLocalsDict( _python_var_set_cdata_mode.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_1_HTMLParser_of_module_django__utils__html_parser( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_1_HTMLParser_of_module_django__utils__html_parser = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_1_HTMLParser_of_module_django__utils__html_parser ) )
    {
        if ( frame_function_1___init___of_class_1_HTMLParser_of_module_django__utils__html_parser )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_1_HTMLParser_of_module_django__utils__html_parser" );
#endif
            Py_DECREF( frame_function_1___init___of_class_1_HTMLParser_of_module_django__utils__html_parser );
        }

        frame_function_1___init___of_class_1_HTMLParser_of_module_django__utils__html_parser = MAKE_FRAME( _codeobj_773ec39a253b6a779018ab7240f28259, _module_django__utils__html_parser );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_1_HTMLParser_of_module_django__utils__html_parser );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_1_HTMLParser_of_module_django__utils__html_parser ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 25 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_parser__html_parser.asObject0(), _python_str_plain_HTMLParser ) ).asObject(), _python_str_plain___init__ ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_self.asObject() ) ) );
        }
        frame_guard.setLineNumber( 26 );
        SET_ATTRIBUTE( Py_None, _python_var_self.asObject(), _python_str_plain_cdata_tag );
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

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_1_HTMLParser_of_module_django__utils__html_parser )
        {
           Py_DECREF( frame_function_1___init___of_class_1_HTMLParser_of_module_django__utils__html_parser );
           frame_function_1___init___of_class_1_HTMLParser_of_module_django__utils__html_parser = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_1_HTMLParser_of_module_django__utils__html_parser( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
    if (unlikely( args_given > 1 ))
    {
        if ( 1 == 1 )
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
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
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_1___init___of_class_1_HTMLParser_of_module_django__utils__html_parser( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_1_HTMLParser_of_module_django__utils__html_parser( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_1___init___of_class_1_HTMLParser_of_module_django__utils__html_parser( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_1_HTMLParser_of_module_django__utils__html_parser( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_set_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_tag )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_tag( _python_str_plain_tag, _python_par_tag );

    // Actual function code.
    static PyFrameObject *frame_function_2_set_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser = NULL;

    if ( isFrameUnusable( frame_function_2_set_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser ) )
    {
        if ( frame_function_2_set_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_set_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser" );
#endif
            Py_DECREF( frame_function_2_set_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser );
        }

        frame_function_2_set_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser = MAKE_FRAME( _codeobj_802ca0fd9bb29839669a58f7241a0114, _module_django__utils__html_parser );
    }

    FrameGuard frame_guard( frame_function_2_set_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser );
    try
    {
        assert( Py_REFCNT( frame_function_2_set_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 29 );
        try
        {
            frame_guard.setLineNumber( 30 );
            {
                    PyObjectTemporary tmp_identifier( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_parser__html_parser.asObject0(), _python_str_plain_interesting_cdata ) );
                    SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_interesting );
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
                frame_guard.setLineNumber( 32 );
                {
                    PyObjectTempKeeper1 call1;
                    PyObjectTempKeeper1 call2;
                    {
                        PyObjectTemporary tmp_identifier( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_parser_re.asObject0(), _python_str_plain_compile ) ), call2.assign( BINARY_OPERATION_REMAINDER( _python_str_digest_89515d1f95484a4eeda2f1d493c44702, PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_tag.asObject(), _python_str_plain_lower ) ).asObject() ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_parser_re.asObject0(), _python_str_plain_I ) ).asObject() ) ) );
                        SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_interesting );
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
        frame_guard.setLineNumber( 33 );
        {
                PyObjectTemporary tmp_identifier( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_tag.asObject(), _python_str_plain_lower ) ).asObject() ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_cdata_tag );
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
        frame_guard.getFrame0()->f_locals = _python_var_tag.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_2_set_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser )
        {
           Py_DECREF( frame_function_2_set_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser );
           frame_function_2_set_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2_set_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_tag = NULL;
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
                PyErr_Format( PyExc_TypeError, "set_cdata_mode() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "set_cdata_mode() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_tag == key )
            {
                if (unlikely( _python_par_tag ))
                {
                    PyErr_Format( PyExc_TypeError, "set_cdata_mode() got multiple values for keyword argument 'tag'" );
                    goto error_exit;
                }

                _python_par_tag = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "set_cdata_mode() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_tag, key ) )
            {
                if (unlikely( _python_par_tag ))
                {
                    PyErr_Format( PyExc_TypeError, "set_cdata_mode() got multiple values for keyword argument 'tag'" );
                    goto error_exit;
                }

                _python_par_tag = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "set_cdata_mode() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "set_cdata_mode() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "set_cdata_mode() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "set_cdata_mode() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "set_cdata_mode() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "set_cdata_mode() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "set_cdata_mode() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "set_cdata_mode() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "set_cdata_mode() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "set_cdata_mode() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "set_cdata_mode() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "set_cdata_mode() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "set_cdata_mode() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "set_cdata_mode() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_tag != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "set_cdata_mode() got multiple values for keyword argument 'tag'" );
             goto error_exit;
         }

        _python_par_tag = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_2_set_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser( self, _python_par_self, _python_par_tag );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_tag );

    return NULL;
}

static PyObject *dparse_function_2_set_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2_set_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_set_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_clear_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_3_clear_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser = NULL;

    if ( isFrameUnusable( frame_function_3_clear_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser ) )
    {
        if ( frame_function_3_clear_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_clear_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser" );
#endif
            Py_DECREF( frame_function_3_clear_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser );
        }

        frame_function_3_clear_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser = MAKE_FRAME( _codeobj_8db11766e06909c61de1a198b1177b91, _module_django__utils__html_parser );
    }

    FrameGuard frame_guard( frame_function_3_clear_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser );
    try
    {
        assert( Py_REFCNT( frame_function_3_clear_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 36 );
        {
                PyObjectTemporary tmp_identifier( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_parser__html_parser.asObject0(), _python_str_plain_interesting_normal ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_interesting );
        }
        frame_guard.setLineNumber( 37 );
        SET_ATTRIBUTE( Py_None, _python_var_self.asObject(), _python_str_plain_cdata_tag );
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

        if ( frame_guard.getFrame0() == frame_function_3_clear_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser )
        {
           Py_DECREF( frame_function_3_clear_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser );
           frame_function_3_clear_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_3_clear_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "clear_cdata_mode() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "clear_cdata_mode() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "clear_cdata_mode() got multiple values for keyword argument 'self'" );
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
                   "clear_cdata_mode() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "clear_cdata_mode() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "clear_cdata_mode() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "clear_cdata_mode() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "clear_cdata_mode() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "clear_cdata_mode() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "clear_cdata_mode() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "clear_cdata_mode() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "clear_cdata_mode() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "clear_cdata_mode() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "clear_cdata_mode() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "clear_cdata_mode() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "clear_cdata_mode() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "clear_cdata_mode() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_3_clear_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3_clear_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3_clear_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_clear_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_parse_starttag_of_class_1_HTMLParser_of_module_django__utils__html_parser( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_i )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_i( _python_str_plain_i, _python_par_i );
    PyObjectLocalVariable _python_var_endpos( _python_str_plain_endpos );
    PyObjectLocalVariable _python_var_rawdata( _python_str_plain_rawdata );
    PyObjectLocalVariable _python_var_attrs( _python_str_plain_attrs );
    PyObjectLocalVariable _python_var_match( _python_str_plain_match );
    PyObjectLocalVariable _python_var_k( _python_str_plain_k );
    PyObjectLocalVariable _python_var_tag( _python_str_plain_tag );
    PyObjectLocalVariable _python_var_m( _python_str_plain_m );
    PyObjectLocalVariable _python_var_attrname( _python_str_plain_attrname );
    PyObjectLocalVariable _python_var_rest( _python_str_plain_rest );
    PyObjectLocalVariable _python_var_attrvalue( _python_str_plain_attrvalue );
    PyObjectLocalVariable _python_var_end( _python_str_plain_end );
    PyObjectLocalVariable _python_var_lineno( _python_str_plain_lineno );
    PyObjectLocalVariable _python_var_offset( _python_str_plain_offset );

    // Actual function code.
    static PyFrameObject *frame_function_4_parse_starttag_of_class_1_HTMLParser_of_module_django__utils__html_parser = NULL;

    if ( isFrameUnusable( frame_function_4_parse_starttag_of_class_1_HTMLParser_of_module_django__utils__html_parser ) )
    {
        if ( frame_function_4_parse_starttag_of_class_1_HTMLParser_of_module_django__utils__html_parser )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_parse_starttag_of_class_1_HTMLParser_of_module_django__utils__html_parser" );
#endif
            Py_DECREF( frame_function_4_parse_starttag_of_class_1_HTMLParser_of_module_django__utils__html_parser );
        }

        frame_function_4_parse_starttag_of_class_1_HTMLParser_of_module_django__utils__html_parser = MAKE_FRAME( _codeobj_48615f8f68be0ea836f9c2aed0fbbe77, _module_django__utils__html_parser );
    }

    FrameGuard frame_guard( frame_function_4_parse_starttag_of_class_1_HTMLParser_of_module_django__utils__html_parser );
    try
    {
        assert( Py_REFCNT( frame_function_4_parse_starttag_of_class_1_HTMLParser_of_module_django__utils__html_parser ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 41 );
        SET_ATTRIBUTE( Py_None, _python_var_self.asObject(), _python_str_plain__HTMLParser__starttag_text );
        frame_guard.setLineNumber( 42 );
        {
            PyObjectTempKeeper1 call1;
            _python_var_endpos.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_check_for_whole_start_tag ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_i.asObject() ) ) );
        }
        frame_guard.setLineNumber( 43 );
        if ( RICH_COMPARE_BOOL_LT( _python_var_endpos.asObject(), _python_int_0 ) )
        {
            frame_guard.setLineNumber( 44 );
            return _python_var_endpos.asObject1();
        }
        frame_guard.setLineNumber( 45 );
        _python_var_rawdata.assign1( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_rawdata ) );
        frame_guard.setLineNumber( 46 );
        {
            PyObjectTempKeeper0 slice3;
            PyObjectTempKeeper0 slice4;
            {
                PyObjectTemporary tmp_identifier( ( slice3.assign( _python_var_rawdata.asObject() ), slice4.assign( _python_var_i.asObject() ), LOOKUP_SLICE( slice3.asObject0(), slice4.asObject0(), _python_var_endpos.asObject() ) ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain__HTMLParser__starttag_text );
        }
        }
        _python_var_attrs.assign1( PyList_New( 0 ) );
        frame_guard.setLineNumber( 50 );
        {
            PyObjectTempKeeper1 call6;
            PyObjectTempKeeper0 call7;
            _python_var_match.assign1( ( call6.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_parser_tagfind.asObject0(), _python_str_plain_match ) ), call7.assign( _python_var_rawdata.asObject() ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), call7.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( _python_var_i.asObject(), _python_int_pos_1 ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 51 );
        if ( (!( CHECK_IF_TRUE( _python_var_match.asObject() ) )) )
        {
            frame_guard.setLineNumber( 51 );
            {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_AssertionError, PyObjectTemporary( MAKE_TUPLE1( _python_str_digest_a91a08ae55ddf616fa85e512e0c4ae0a ) ).asObject() ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
        }
        frame_guard.setLineNumber( 52 );
        _python_var_k.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_match.asObject(), _python_str_plain_end ) ).asObject() ) );
        {
            frame_guard.setLineNumber( 53 );
            PyObjectTemporary _python_tmp_assign_source( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_match.asObject(), _python_str_plain_group ) ).asObject(), _python_int_pos_1 ) ).asObject(), _python_str_plain_lower ) ).asObject() ) );
            {
                    PyObject *tmp_identifier = _python_tmp_assign_source.asObject();
                    SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_lasttag );
            }
            _python_var_tag.assign0( _python_tmp_assign_source.asObject() );
        }
        frame_guard.setLineNumber( 55 );
        while( true )
        {
            frame_guard.setLineNumber( 55 );
            {
                PyObjectTempKeeper0 cmp9;
                if ( (!( ( cmp9.assign( _python_var_k.asObject() ), RICH_COMPARE_BOOL_LT( cmp9.asObject0(), _python_var_endpos.asObject() ) ) )) )
            {
                frame_guard.setLineNumber( 55 );
                break;
            }
            }
            frame_guard.setLineNumber( 56 );
            {
                PyObjectTempKeeper1 call11;
                PyObjectTempKeeper0 call12;
                _python_var_m.assign1( ( call11.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_parser__html_parser.asObject0(), _python_str_plain_attrfind ) ).asObject(), _python_str_plain_match ) ), call12.assign( _python_var_rawdata.asObject() ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), call12.asObject0(), _python_var_k.asObject() ) ) );
            }
            frame_guard.setLineNumber( 57 );
            if ( (!( CHECK_IF_TRUE( _python_var_m.asObject() ) )) )
            {
                frame_guard.setLineNumber( 58 );
                break;
            }
            {
                frame_guard.setLineNumber( 59 );
                PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_m.asObject(), _python_str_plain_group ) ).asObject(), _python_int_pos_1, _python_int_pos_2, _python_int_pos_3 ) ).asObject() ) );
                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                PyObjectTemporary _python_tmp_element_3( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 2 ) );
                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 3 );
                _python_var_attrname.assign0( _python_tmp_element_1.asObject() );
                _python_var_rest.assign0( _python_tmp_element_2.asObject() );
                _python_var_attrvalue.assign0( _python_tmp_element_3.asObject() );
            }
            frame_guard.setLineNumber( 60 );
            if ( (!( CHECK_IF_TRUE( _python_var_rest.asObject() ) )) )
            {
                _python_var_attrvalue.assign0( Py_None );
            }
            else
            {
                frame_guard.setLineNumber( 62 );
                if ( ( ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_INDEX_SLICE( _python_var_attrvalue.asObject(), 0, 1 ) ).asObject(), _python_str_chr_39 ) && RICH_COMPARE_BOOL_EQ( _python_str_chr_39, PyObjectTemporary( LOOKUP_INDEX_SLICE( _python_var_attrvalue.asObject(), -1, PY_SSIZE_T_MAX ) ).asObject() ) ) || ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_INDEX_SLICE( _python_var_attrvalue.asObject(), 0, 1 ) ).asObject(), _python_str_chr_34 ) && RICH_COMPARE_BOOL_EQ( _python_str_chr_34, PyObjectTemporary( LOOKUP_INDEX_SLICE( _python_var_attrvalue.asObject(), -1, PY_SSIZE_T_MAX ) ).asObject() ) ) ) )
                {
                    frame_guard.setLineNumber( 64 );
                    _python_var_attrvalue.assign1( LOOKUP_INDEX_SLICE( _python_var_attrvalue.asObject(), 1, -1 ) );
                }
            }
            frame_guard.setLineNumber( 65 );
            if ( CHECK_IF_TRUE( _python_var_attrvalue.asObject() ) )
            {
                frame_guard.setLineNumber( 66 );
                {
                    PyObjectTempKeeper1 call14;
                    _python_var_attrvalue.assign1( ( call14.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_unescape ) ), CALL_FUNCTION_WITH_ARGS( call14.asObject0(), _python_var_attrvalue.asObject() ) ) );
                }
            }
            frame_guard.setLineNumber( 67 );
            {
                PyObjectTempKeeper1 call18;
                PyObjectTempKeeper1 make_tuple16;
                DECREASE_REFCOUNT( ( call18.assign( LOOKUP_ATTRIBUTE( _python_var_attrs.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_ARGS( call18.asObject0(), PyObjectTemporary( ( make_tuple16.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_attrname.asObject(), _python_str_plain_lower ) ).asObject() ) ), MAKE_TUPLE2( make_tuple16.asObject0(), _python_var_attrvalue.asObject() ) ) ).asObject() ) ) );
            }
            frame_guard.setLineNumber( 68 );
            _python_var_k.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_m.asObject(), _python_str_plain_end ) ).asObject() ) );

           CONSIDER_THREADING();
        }
        frame_guard.setLineNumber( 70 );
        {
            PyObjectTempKeeper0 slice20;
            PyObjectTempKeeper0 slice21;
            _python_var_end.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( slice20.assign( _python_var_rawdata.asObject() ), slice21.assign( _python_var_k.asObject() ), LOOKUP_SLICE( slice20.asObject0(), slice21.asObject0(), _python_var_endpos.asObject() ) ) ).asObject(), _python_str_plain_strip ) ).asObject() ) );
        }
        frame_guard.setLineNumber( 71 );
        if ( SEQUENCE_CONTAINS_NOT_BOOL( _python_var_end.asObject(), _python_tuple_str_chr_62_str_digest_18f68d13217048286fcb813f5c627bc0_tuple ) )
        {
            {
                frame_guard.setLineNumber( 72 );
                PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_getpos ) ).asObject() ) ).asObject() ) );
                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                _python_var_lineno.assign0( _python_tmp_element_1.asObject() );
                _python_var_offset.assign0( _python_tmp_element_2.asObject() );
            }
            frame_guard.setLineNumber( 73 );
            if ( SEQUENCE_CONTAINS_BOOL( _python_str_chr_10, PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__HTMLParser__starttag_text ) ).asObject() ) )
            {
                frame_guard.setLineNumber( 74 );
                {
                    PyObjectTempKeeper0 op23;
                    _python_var_lineno.assign1( ( op23.assign( _python_var_lineno.asObject() ), BINARY_OPERATION_ADD( op23.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__HTMLParser__starttag_text ) ).asObject(), _python_str_plain_count ) ).asObject(), _python_str_chr_10 ) ).asObject() ) ) );
                }
                frame_guard.setLineNumber( 75 );
                {
                    PyObjectTempKeeper1 op25;
                    _python_var_offset.assign1( ( op25.assign( BUILTIN_LEN( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__HTMLParser__starttag_text ) ).asObject() ) ), BINARY_OPERATION_SUB( op25.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__HTMLParser__starttag_text ) ).asObject(), _python_str_plain_rfind ) ).asObject(), _python_str_chr_10 ) ).asObject() ) ) );
                }
            }
            else
            {
                frame_guard.setLineNumber( 78 );
                {
                    PyObjectTempKeeper0 op27;
                    _python_var_offset.assign1( ( op27.assign( _python_var_offset.asObject() ), BINARY_OPERATION_ADD( op27.asObject0(), PyObjectTemporary( BUILTIN_LEN( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain__HTMLParser__starttag_text ) ).asObject() ) ).asObject() ) ) );
                }
            }
            frame_guard.setLineNumber( 79 );
            {
                PyObjectTempKeeper1 call32;
                PyObjectTempKeeper0 slice29;
                PyObjectTempKeeper0 slice30;
                DECREASE_REFCOUNT( ( call32.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_error ) ), CALL_FUNCTION_WITH_ARGS( call32.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_bd931210ff4bc17c36836c6777de3b20, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( LOOKUP_INDEX_SLICE( PyObjectTemporary( ( slice29.assign( _python_var_rawdata.asObject() ), slice30.assign( _python_var_k.asObject() ), LOOKUP_SLICE( slice29.asObject0(), slice30.asObject0(), _python_var_endpos.asObject() ) ) ).asObject(), 0, 20 ) ).asObject() ) ).asObject() ) ).asObject() ) ) );
            }
        }
        frame_guard.setLineNumber( 81 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_end.asObject(), _python_str_plain_endswith ) ).asObject(), _python_str_digest_18f68d13217048286fcb813f5c627bc0 ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 83 );
            {
                PyObjectTempKeeper1 call34;
                PyObjectTempKeeper0 call35;
                DECREASE_REFCOUNT( ( call34.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_handle_startendtag ) ), call35.assign( _python_var_tag.asObject() ), CALL_FUNCTION_WITH_ARGS( call34.asObject0(), call35.asObject0(), _python_var_attrs.asObject() ) ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 85 );
            {
                PyObjectTempKeeper1 call37;
                PyObjectTempKeeper0 call38;
                DECREASE_REFCOUNT( ( call37.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_handle_starttag ) ), call38.assign( _python_var_tag.asObject() ), CALL_FUNCTION_WITH_ARGS( call37.asObject0(), call38.asObject0(), _python_var_attrs.asObject() ) ) );
            }
            frame_guard.setLineNumber( 86 );
            {
                PyObjectTempKeeper0 cmp42;
                if ( ( cmp42.assign( _python_var_tag.asObject() ), SEQUENCE_CONTAINS_BOOL( cmp42.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_CDATA_CONTENT_ELEMENTS ) ).asObject() ) ) )
            {
                frame_guard.setLineNumber( 87 );
                {
                    PyObjectTempKeeper1 call40;
                    DECREASE_REFCOUNT( ( call40.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_set_cdata_mode ) ), CALL_FUNCTION_WITH_ARGS( call40.asObject0(), _python_var_tag.asObject() ) ) );
                }
            }
            }
        }
        frame_guard.setLineNumber( 88 );
        return _python_var_endpos.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_i.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_offset.updateLocalsDict( _python_var_lineno.updateLocalsDict( _python_var_end.updateLocalsDict( _python_var_attrvalue.updateLocalsDict( _python_var_rest.updateLocalsDict( _python_var_attrname.updateLocalsDict( _python_var_m.updateLocalsDict( _python_var_tag.updateLocalsDict( _python_var_k.updateLocalsDict( _python_var_match.updateLocalsDict( _python_var_attrs.updateLocalsDict( _python_var_rawdata.updateLocalsDict( _python_var_endpos.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_4_parse_starttag_of_class_1_HTMLParser_of_module_django__utils__html_parser )
        {
           Py_DECREF( frame_function_4_parse_starttag_of_class_1_HTMLParser_of_module_django__utils__html_parser );
           frame_function_4_parse_starttag_of_class_1_HTMLParser_of_module_django__utils__html_parser = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_parse_starttag_of_class_1_HTMLParser_of_module_django__utils__html_parser( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_i = NULL;
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
                PyErr_Format( PyExc_TypeError, "parse_starttag() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "parse_starttag() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_i == key )
            {
                if (unlikely( _python_par_i ))
                {
                    PyErr_Format( PyExc_TypeError, "parse_starttag() got multiple values for keyword argument 'i'" );
                    goto error_exit;
                }

                _python_par_i = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "parse_starttag() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_i, key ) )
            {
                if (unlikely( _python_par_i ))
                {
                    PyErr_Format( PyExc_TypeError, "parse_starttag() got multiple values for keyword argument 'i'" );
                    goto error_exit;
                }

                _python_par_i = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "parse_starttag() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "parse_starttag() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "parse_starttag() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "parse_starttag() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "parse_starttag() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "parse_starttag() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "parse_starttag() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "parse_starttag() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "parse_starttag() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "parse_starttag() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "parse_starttag() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "parse_starttag() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "parse_starttag() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "parse_starttag() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_i != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "parse_starttag() got multiple values for keyword argument 'i'" );
             goto error_exit;
         }

        _python_par_i = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_4_parse_starttag_of_class_1_HTMLParser_of_module_django__utils__html_parser( self, _python_par_self, _python_par_i );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_i );

    return NULL;
}

static PyObject *dparse_function_4_parse_starttag_of_class_1_HTMLParser_of_module_django__utils__html_parser( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_4_parse_starttag_of_class_1_HTMLParser_of_module_django__utils__html_parser( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_parse_starttag_of_class_1_HTMLParser_of_module_django__utils__html_parser( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_parse_endtag_of_class_1_HTMLParser_of_module_django__utils__html_parser( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_i )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_i( _python_str_plain_i, _python_par_i );
    PyObjectLocalVariable _python_var_rawdata( _python_str_plain_rawdata );
    PyObjectLocalVariable _python_var_match( _python_str_plain_match );
    PyObjectLocalVariable _python_var_j( _python_str_plain_j );
    PyObjectLocalVariable _python_var_tag( _python_str_plain_tag );

    // Actual function code.
    static PyFrameObject *frame_function_5_parse_endtag_of_class_1_HTMLParser_of_module_django__utils__html_parser = NULL;

    if ( isFrameUnusable( frame_function_5_parse_endtag_of_class_1_HTMLParser_of_module_django__utils__html_parser ) )
    {
        if ( frame_function_5_parse_endtag_of_class_1_HTMLParser_of_module_django__utils__html_parser )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_parse_endtag_of_class_1_HTMLParser_of_module_django__utils__html_parser" );
#endif
            Py_DECREF( frame_function_5_parse_endtag_of_class_1_HTMLParser_of_module_django__utils__html_parser );
        }

        frame_function_5_parse_endtag_of_class_1_HTMLParser_of_module_django__utils__html_parser = MAKE_FRAME( _codeobj_bb0bafb7bc423c7bb74786c30185a9ce, _module_django__utils__html_parser );
    }

    FrameGuard frame_guard( frame_function_5_parse_endtag_of_class_1_HTMLParser_of_module_django__utils__html_parser );
    try
    {
        assert( Py_REFCNT( frame_function_5_parse_endtag_of_class_1_HTMLParser_of_module_django__utils__html_parser ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 92 );
        _python_var_rawdata.assign1( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_rawdata ) );
        frame_guard.setLineNumber( 93 );
        {
            PyObjectTempKeeper0 slice1;
            PyObjectTempKeeper0 slice2;
            if ( (!( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( ( slice1.assign( _python_var_rawdata.asObject() ), slice2.assign( _python_var_i.asObject() ), LOOKUP_SLICE( slice1.asObject0(), slice2.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( _python_var_i.asObject(), _python_int_pos_2 ) ).asObject() ) ) ).asObject(), _python_str_digest_0c69b6dc91876b91f43a07306badebf3 ) )) )
        {
            frame_guard.setLineNumber( 93 );
            {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_AssertionError, PyObjectTemporary( MAKE_TUPLE1( _python_str_digest_ef6302e6a132ce7a98e11f756abab0bf ) ).asObject() ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
        }
        }
        frame_guard.setLineNumber( 94 );
        {
            PyObjectTempKeeper1 call4;
            PyObjectTempKeeper0 call5;
            _python_var_match.assign1( ( call4.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_parser__html_parser.asObject0(), _python_str_plain_endendtag ) ).asObject(), _python_str_plain_search ) ), call5.assign( _python_var_rawdata.asObject() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), call5.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( _python_var_i.asObject(), _python_int_pos_1 ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 95 );
        if ( (!( CHECK_IF_TRUE( _python_var_match.asObject() ) )) )
        {
            return INCREASE_REFCOUNT( _python_int_neg_1 );
        }
        frame_guard.setLineNumber( 97 );
        _python_var_j.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_match.asObject(), _python_str_plain_end ) ).asObject() ) );
        frame_guard.setLineNumber( 98 );
        {
            PyObjectTempKeeper1 call7;
            PyObjectTempKeeper0 call8;
            _python_var_match.assign1( ( call7.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_parser__html_parser.asObject0(), _python_str_plain_endtagfind ) ).asObject(), _python_str_plain_match ) ), call8.assign( _python_var_rawdata.asObject() ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), call8.asObject0(), _python_var_i.asObject() ) ) );
        }
        frame_guard.setLineNumber( 99 );
        if ( (!( CHECK_IF_TRUE( _python_var_match.asObject() ) )) )
        {
            frame_guard.setLineNumber( 100 );
            if ( ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_cdata_tag ) ).asObject() != Py_None ) )
            {
                frame_guard.setLineNumber( 101 );
                {
                    PyObjectTempKeeper1 call13;
                    PyObjectTempKeeper0 slice10;
                    PyObjectTempKeeper0 slice11;
                    DECREASE_REFCOUNT( ( call13.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_handle_data ) ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), PyObjectTemporary( ( slice10.assign( _python_var_rawdata.asObject() ), slice11.assign( _python_var_i.asObject() ), LOOKUP_SLICE( slice10.asObject0(), slice11.asObject0(), _python_var_j.asObject() ) ) ).asObject() ) ) );
                }
                frame_guard.setLineNumber( 102 );
                return _python_var_j.asObject1();
            }
            frame_guard.setLineNumber( 103 );
            {
                PyObjectTempKeeper1 call18;
                PyObjectTempKeeper0 slice15;
                PyObjectTempKeeper0 slice16;
                DECREASE_REFCOUNT( ( call18.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_error ) ), CALL_FUNCTION_WITH_ARGS( call18.asObject0(), PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_0bd34fea365657be30f7d96947171adf, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( ( slice15.assign( _python_var_rawdata.asObject() ), slice16.assign( _python_var_i.asObject() ), LOOKUP_SLICE( slice15.asObject0(), slice16.asObject0(), _python_var_j.asObject() ) ) ).asObject() ) ).asObject() ) ).asObject() ) ) );
            }
        }
        frame_guard.setLineNumber( 105 );
        _python_var_tag.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_match.asObject(), _python_str_plain_group ) ).asObject(), _python_int_pos_1 ) ).asObject(), _python_str_plain_strip ) ).asObject() ) );
        frame_guard.setLineNumber( 106 );
        if ( ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_cdata_tag ) ).asObject() != Py_None ) )
        {
            frame_guard.setLineNumber( 107 );
            {
                PyObjectTempKeeper1 cmp25;
                if ( ( cmp25.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_tag.asObject(), _python_str_plain_lower ) ).asObject() ) ), RICH_COMPARE_BOOL_NE( cmp25.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_cdata_tag ) ).asObject() ) ) )
            {
                frame_guard.setLineNumber( 108 );
                {
                    PyObjectTempKeeper1 call23;
                    PyObjectTempKeeper0 slice20;
                    PyObjectTempKeeper0 slice21;
                    DECREASE_REFCOUNT( ( call23.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_handle_data ) ), CALL_FUNCTION_WITH_ARGS( call23.asObject0(), PyObjectTemporary( ( slice20.assign( _python_var_rawdata.asObject() ), slice21.assign( _python_var_i.asObject() ), LOOKUP_SLICE( slice20.asObject0(), slice21.asObject0(), _python_var_j.asObject() ) ) ).asObject() ) ) );
                }
                frame_guard.setLineNumber( 109 );
                return _python_var_j.asObject1();
            }
            }
        }
        frame_guard.setLineNumber( 111 );
        {
            PyObjectTempKeeper1 call27;
            DECREASE_REFCOUNT( ( call27.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_handle_endtag ) ), CALL_FUNCTION_WITH_ARGS( call27.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_tag.asObject(), _python_str_plain_lower ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 112 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_clear_cdata_mode ) ).asObject() ) );
        frame_guard.setLineNumber( 113 );
        return _python_var_j.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_i.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_tag.updateLocalsDict( _python_var_j.updateLocalsDict( _python_var_match.updateLocalsDict( _python_var_rawdata.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_5_parse_endtag_of_class_1_HTMLParser_of_module_django__utils__html_parser )
        {
           Py_DECREF( frame_function_5_parse_endtag_of_class_1_HTMLParser_of_module_django__utils__html_parser );
           frame_function_5_parse_endtag_of_class_1_HTMLParser_of_module_django__utils__html_parser = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5_parse_endtag_of_class_1_HTMLParser_of_module_django__utils__html_parser( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_i = NULL;
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
                PyErr_Format( PyExc_TypeError, "parse_endtag() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "parse_endtag() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_i == key )
            {
                if (unlikely( _python_par_i ))
                {
                    PyErr_Format( PyExc_TypeError, "parse_endtag() got multiple values for keyword argument 'i'" );
                    goto error_exit;
                }

                _python_par_i = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "parse_endtag() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_i, key ) )
            {
                if (unlikely( _python_par_i ))
                {
                    PyErr_Format( PyExc_TypeError, "parse_endtag() got multiple values for keyword argument 'i'" );
                    goto error_exit;
                }

                _python_par_i = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "parse_endtag() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "parse_endtag() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "parse_endtag() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "parse_endtag() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "parse_endtag() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "parse_endtag() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "parse_endtag() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "parse_endtag() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "parse_endtag() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "parse_endtag() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "parse_endtag() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "parse_endtag() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "parse_endtag() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "parse_endtag() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_i != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "parse_endtag() got multiple values for keyword argument 'i'" );
             goto error_exit;
         }

        _python_par_i = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_5_parse_endtag_of_class_1_HTMLParser_of_module_django__utils__html_parser( self, _python_par_self, _python_par_i );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_i );

    return NULL;
}

static PyObject *dparse_function_5_parse_endtag_of_class_1_HTMLParser_of_module_django__utils__html_parser( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_5_parse_endtag_of_class_1_HTMLParser_of_module_django__utils__html_parser( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_parse_endtag_of_class_1_HTMLParser_of_module_django__utils__html_parser( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_HTMLParser_of_module_django__utils__html_parser(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_1_HTMLParser_of_module_django__utils__html_parser,
        dparse_function_1___init___of_class_1_HTMLParser_of_module_django__utils__html_parser,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_773ec39a253b6a779018ab7240f28259,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__html_parser,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_set_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_set_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser,
        dparse_function_2_set_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser,
        _python_str_plain_set_cdata_mode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_802ca0fd9bb29839669a58f7241a0114,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__html_parser,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_clear_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_clear_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser,
        dparse_function_3_clear_cdata_mode_of_class_1_HTMLParser_of_module_django__utils__html_parser,
        _python_str_plain_clear_cdata_mode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_8db11766e06909c61de1a198b1177b91,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__html_parser,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_parse_starttag_of_class_1_HTMLParser_of_module_django__utils__html_parser(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_parse_starttag_of_class_1_HTMLParser_of_module_django__utils__html_parser,
        dparse_function_4_parse_starttag_of_class_1_HTMLParser_of_module_django__utils__html_parser,
        _python_str_plain_parse_starttag,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_48615f8f68be0ea836f9c2aed0fbbe77,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__html_parser,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_parse_endtag_of_class_1_HTMLParser_of_module_django__utils__html_parser(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_parse_endtag_of_class_1_HTMLParser_of_module_django__utils__html_parser,
        dparse_function_5_parse_endtag_of_class_1_HTMLParser_of_module_django__utils__html_parser,
        _python_str_plain_parse_endtag,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_bb0bafb7bc423c7bb74786c30185a9ce,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__html_parser,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.utils.html_parser",   /* m_name */
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

MOD_INIT_DECL( django__utils__html_parser )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__utils__html_parser );
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

    // puts( "in initdjango__utils__html_parser" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__utils__html_parser = Py_InitModule4(
        "django.utils.html_parser",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__utils__html_parser = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__utils__html_parser = (PyDictObject *)((PyModuleObject *)_module_django__utils__html_parser)->md_dict;

    assertObject( _module_django__utils__html_parser );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_2ca518f582dd9b12ba4d387fdae5edee, _module_django__utils__html_parser );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__utils__html_parser );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__utils__html_parser != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__utils__html_parser, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django__utils__html_parser, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_c9fd8d396f9ffd5e7275e21b22f296a4 );
    PyFrameObject *frame_module_django__utils__html_parser = MAKE_FRAME( _codeobj_daf98059dbf1432b4a15bd7debe2262c, _module_django__utils__html_parser );

    FrameGuard frame_guard( frame_module_django__utils__html_parser );
    try
    {
        assert( Py_REFCNT( frame_module_django__utils__html_parser ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 1 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__html_parser, (Nuitka_StringObject *)_python_str_plain__html_parser, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_91ddc8f1df73e2bf4268fd2741c1c593, ((PyModuleObject *)_module_django__utils__html_parser)->md_dict, ((PyModuleObject *)_module_django__utils__html_parser)->md_dict, _python_list_str_plain_html_parser_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_html_parser ) );
        frame_guard.setLineNumber( 2 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__html_parser, (Nuitka_StringObject *)_python_str_plain_re, IMPORT_MODULE( _python_str_plain_re, ((PyModuleObject *)_module_django__utils__html_parser)->md_dict, ((PyModuleObject *)_module_django__utils__html_parser)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 3 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__html_parser, (Nuitka_StringObject *)_python_str_plain_sys, IMPORT_MODULE( _python_str_plain_sys, ((PyModuleObject *)_module_django__utils__html_parser)->md_dict, ((PyModuleObject *)_module_django__utils__html_parser)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 5 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__html_parser, (Nuitka_StringObject *)_python_str_plain_current_version, LOOKUP_ATTRIBUTE( _mvar_django__utils__html_parser_sys.asObject0(), _python_str_plain_version_info ) );
        frame_guard.setLineNumber( 7 );
        {
            PyObjectTempKeeper1 keeper_0;
            PyObjectTempKeeper1 keeper_1;
            UPDATE_STRING_DICT1( _moduledict_django__utils__html_parser, (Nuitka_StringObject *)_python_str_plain_use_workaround, ( CHECK_IF_TRUE( keeper_1.assign( RICH_COMPARE_LT( _mvar_django__utils__html_parser_current_version.asObject0(), _python_tuple_int_pos_2_int_pos_7_int_pos_3_tuple ) ) ) ? keeper_1.asObject() : ( CHECK_IF_TRUE( keeper_0.assign( RICH_COMPARE_GE( _mvar_django__utils__html_parser_current_version.asObject0(), _python_tuple_int_pos_3_int_0_tuple ) ) ) ? RICH_COMPARE_LT( _mvar_django__utils__html_parser_current_version.asObject0(), _python_tuple_int_pos_3_int_pos_2_int_pos_3_tuple ) : keeper_0.asObject() ) ) );
        }
        frame_guard.setLineNumber( 12 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__html_parser, (Nuitka_StringObject *)_python_str_plain_HTMLParseError, LOOKUP_ATTRIBUTE( _mvar_django__utils__html_parser__html_parser.asObject0(), _python_str_plain_HTMLParseError ) );
        frame_guard.setLineNumber( 14 );
        if ( (!( CHECK_IF_TRUE( _mvar_django__utils__html_parser_use_workaround.asObject0() ) )) )
        {
            frame_guard.setLineNumber( 15 );
            UPDATE_STRING_DICT1( _moduledict_django__utils__html_parser, (Nuitka_StringObject *)_python_str_plain_HTMLParser, LOOKUP_ATTRIBUTE( _mvar_django__utils__html_parser__html_parser.asObject0(), _python_str_plain_HTMLParser ) );
        }
        else
        {
            frame_guard.setLineNumber( 17 );
            UPDATE_STRING_DICT1( _moduledict_django__utils__html_parser, (Nuitka_StringObject *)_python_str_plain_tagfind, CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_parser_re.asObject0(), _python_str_plain_compile ) ).asObject(), _python_str_digest_1ff4fccfe008391c2a3b00306f56873e ) );
            {
                frame_guard.setLineNumber( 19 );
                PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__html_parser__html_parser.asObject0(), _python_str_plain_HTMLParser ) ).asObject() ) );
                PyObjectTemporary _python_tmp_class_dict( impl_class_1_HTMLParser_of_module_django__utils__html_parser(  ) );
                PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__utils__html_parser___metaclass__.isInitialized( false ) ? _mvar_django__utils__html_parser___metaclass__.asObject0() : NULL ) ) ) );
                PyObject *_tmp_python_tmp_class;
                {
                    PyObjectTempKeeper0 call1;
                    PyObjectTempKeeper0 call3;
                    _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_HTMLParser, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
                }
                PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
                UPDATE_STRING_DICT0( _moduledict_django__utils__html_parser, (Nuitka_StringObject *)_python_str_plain_HTMLParser, _python_tmp_class.asObject() );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__utils__html_parser)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }

   return MOD_RETURN_VALUE( _module_django__utils__html_parser );
}
