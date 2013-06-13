// Generated code for Python source for module 'django.utils.importlib'
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

// The _module_django__utils__importlib is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__utils__importlib;
PyDictObject *_moduledict_django__utils__importlib;

// The module level variables.
static PyObjectGlobalVariable_django__utils__importlib _mvar_django__utils__importlib__resolve_name( &_module_django__utils__importlib, &_python_str_plain__resolve_name );
static PyObjectGlobalVariable_django__utils__importlib _mvar_django__utils__importlib_sys( &_module_django__utils__importlib, &_python_str_plain_sys );

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1__resolve_name_of_module_django__utils__importlib(  );


static PyObject *MAKE_FUNCTION_function_2_import_module_of_module_django__utils__importlib(  );


// The module function definitions.
static PyObject *impl_function_1__resolve_name_of_module_django__utils__importlib( Nuitka_FunctionObject *self, PyObject *_python_par_name, PyObject *_python_par_package, PyObject *_python_par_level )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );
    PyObjectLocalParameterVariableNoDel _python_var_package( _python_str_plain_package, _python_par_package );
    PyObjectLocalParameterVariableNoDel _python_var_level( _python_str_plain_level, _python_par_level );
    PyObjectLocalVariable _python_var_dot( _python_str_plain_dot );
    PyObjectLocalVariable _python_var_x( _python_str_plain_x );

    // Actual function code.
    static PyFrameObject *frame_function_1__resolve_name_of_module_django__utils__importlib = NULL;

    if ( isFrameUnusable( frame_function_1__resolve_name_of_module_django__utils__importlib ) )
    {
        if ( frame_function_1__resolve_name_of_module_django__utils__importlib )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1__resolve_name_of_module_django__utils__importlib" );
#endif
            Py_DECREF( frame_function_1__resolve_name_of_module_django__utils__importlib );
        }

        frame_function_1__resolve_name_of_module_django__utils__importlib = MAKE_FRAME( _codeobj_aa860d6abb97b00df6f06c01ab7c005c, _module_django__utils__importlib );
    }

    FrameGuard frame_guard( frame_function_1__resolve_name_of_module_django__utils__importlib );
    try
    {
        assert( Py_REFCNT( frame_function_1__resolve_name_of_module_django__utils__importlib ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 6 );
        if ( (!( HAS_ATTRIBUTE( _python_var_package.asObject(), _python_str_plain_rindex ) )) )
        {
            frame_guard.setLineNumber( 7 );
            {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_ValueError, PyObjectTemporary( MAKE_TUPLE1( _python_str_digest_ace42eee340fc7a24d551d06a58922a5 ) ).asObject() ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
        }
        frame_guard.setLineNumber( 8 );
        _python_var_dot.assign1( BUILTIN_LEN( _python_var_package.asObject() ) );
        {
            frame_guard.setLineNumber( 9 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( BUILTIN_RANGE3( _python_var_level.asObject(), _python_int_pos_1, _python_int_neg_1 ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 9 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_x.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 10 );
                try
                {
                    frame_guard.setLineNumber( 11 );
                    {
                        PyObjectTempKeeper1 call1;
                        _python_var_dot.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_package.asObject(), _python_str_plain_rindex ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_dot, _python_int_0, _python_var_dot.asObject() ) ) );
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
                        frame_guard.setLineNumber( 13 );
                        {
                                PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_ValueError, PyObjectTemporary( MAKE_TUPLE1( _python_str_digest_bcb64d4ef586de24de20dc90e2476638 ) ).asObject() ) );
                                RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
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
        }
        frame_guard.setLineNumber( 15 );
        {
            PyObjectTempKeeper1 make_tuple8;
            PyObjectTempKeeper0 slice5;
            return BINARY_OPERATION_REMAINDER( _python_str_digest_fffb2b4b5e45eb8109d63f2497fbdbc1, PyObjectTemporary( ( make_tuple8.assign( ( slice5.assign( _python_var_package.asObject() ), LOOKUP_SLICE( slice5.asObject0(), Py_None, _python_var_dot.asObject() ) ) ), MAKE_TUPLE2( make_tuple8.asObject0(), _python_var_name.asObject() ) ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_level.updateLocalsDict( _python_var_package.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var_x.updateLocalsDict( _python_var_dot.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1__resolve_name_of_module_django__utils__importlib )
        {
           Py_DECREF( frame_function_1__resolve_name_of_module_django__utils__importlib );
           frame_function_1__resolve_name_of_module_django__utils__importlib = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1__resolve_name_of_module_django__utils__importlib( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_name = NULL;
    PyObject *_python_par_package = NULL;
    PyObject *_python_par_level = NULL;
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
                PyErr_Format( PyExc_TypeError, "_resolve_name() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_resolve_name() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_package == key )
            {
                if (unlikely( _python_par_package ))
                {
                    PyErr_Format( PyExc_TypeError, "_resolve_name() got multiple values for keyword argument 'package'" );
                    goto error_exit;
                }

                _python_par_package = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_level == key )
            {
                if (unlikely( _python_par_level ))
                {
                    PyErr_Format( PyExc_TypeError, "_resolve_name() got multiple values for keyword argument 'level'" );
                    goto error_exit;
                }

                _python_par_level = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "_resolve_name() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_package, key ) )
            {
                if (unlikely( _python_par_package ))
                {
                    PyErr_Format( PyExc_TypeError, "_resolve_name() got multiple values for keyword argument 'package'" );
                    goto error_exit;
                }

                _python_par_package = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_level, key ) )
            {
                if (unlikely( _python_par_level ))
                {
                    PyErr_Format( PyExc_TypeError, "_resolve_name() got multiple values for keyword argument 'level'" );
                    goto error_exit;
                }

                _python_par_level = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_resolve_name() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_resolve_name() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_resolve_name() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_resolve_name() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_resolve_name() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "_resolve_name() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_resolve_name() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "_resolve_name() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_resolve_name() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_resolve_name() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_resolve_name() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "_resolve_name() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_resolve_name() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "_resolve_name() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_package != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_resolve_name() got multiple values for keyword argument 'package'" );
             goto error_exit;
         }

        _python_par_package = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_level != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_resolve_name() got multiple values for keyword argument 'level'" );
             goto error_exit;
         }

        _python_par_level = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_1__resolve_name_of_module_django__utils__importlib( self, _python_par_name, _python_par_package, _python_par_level );

error_exit:;

    Py_XDECREF( _python_par_name );
    Py_XDECREF( _python_par_package );
    Py_XDECREF( _python_par_level );

    return NULL;
}

static PyObject *dparse_function_1__resolve_name_of_module_django__utils__importlib( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_1__resolve_name_of_module_django__utils__importlib( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1__resolve_name_of_module_django__utils__importlib( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_import_module_of_module_django__utils__importlib( Nuitka_FunctionObject *self, PyObject *_python_par_name, PyObject *_python_par_package )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );
    PyObjectLocalParameterVariableNoDel _python_var_package( _python_str_plain_package, _python_par_package );
    PyObjectLocalVariable _python_var_level( _python_str_plain_level );
    PyObjectLocalVariable _python_var_character( _python_str_plain_character );

    // Actual function code.
    static PyFrameObject *frame_function_2_import_module_of_module_django__utils__importlib = NULL;

    if ( isFrameUnusable( frame_function_2_import_module_of_module_django__utils__importlib ) )
    {
        if ( frame_function_2_import_module_of_module_django__utils__importlib )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_import_module_of_module_django__utils__importlib" );
#endif
            Py_DECREF( frame_function_2_import_module_of_module_django__utils__importlib );
        }

        frame_function_2_import_module_of_module_django__utils__importlib = MAKE_FRAME( _codeobj_7c4c58cde77937874fc552342f3be450, _module_django__utils__importlib );
    }

    FrameGuard frame_guard( frame_function_2_import_module_of_module_django__utils__importlib );
    try
    {
        assert( Py_REFCNT( frame_function_2_import_module_of_module_django__utils__importlib ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 26 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_name.asObject(), _python_str_plain_startswith ) ).asObject(), _python_str_dot ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 27 );
            if ( (!( CHECK_IF_TRUE( _python_var_package.asObject() ) )) )
            {
                frame_guard.setLineNumber( 28 );
                {
                        PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_TypeError, PyObjectTemporary( MAKE_TUPLE1( _python_str_digest_b44363303fecf16bc2fa77df55a8255e ) ).asObject() ) );
                        RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
                }
            }
            _python_var_level.assign0( _python_int_0 );
            {
                frame_guard.setLineNumber( 30 );
                PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_name.asObject() ) );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 30 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        _python_var_character.assign0( _python_tmp_iter_value.asObject() );
                    }
                    frame_guard.setLineNumber( 31 );
                    if ( RICH_COMPARE_BOOL_NE( _python_var_character.asObject(), _python_str_dot ) )
                    {
                        frame_guard.setLineNumber( 32 );
                        break;
                    }
                    {
                        frame_guard.setLineNumber( 33 );
                        PyObject *_python_tmp_inplace_start = _python_var_level.asObject();
                        PyObjectTemporary _python_tmp_inplace_end( BINARY_OPERATION( PyNumber_InPlaceAdd, _python_tmp_inplace_start, _python_int_pos_1 ) );
                        if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
                        {
                            _python_var_level.assign0( _python_tmp_inplace_end.asObject() );
                        }
                    }

                   CONSIDER_THREADING();
                }
            }
            frame_guard.setLineNumber( 34 );
            {
                PyObjectTempKeeper0 call4;
                PyObjectTempKeeper1 call5;
                PyObjectTempKeeper0 call6;
                PyObjectTempKeeper0 slice1;
                _python_var_name.assign1( ( call4.assign( _mvar_django__utils__importlib__resolve_name.asObject0() ), call5.assign( ( slice1.assign( _python_var_name.asObject() ), LOOKUP_SLICE( slice1.asObject0(), _python_var_level.asObject(), Py_None ) ) ), call6.assign( _python_var_package.asObject() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), call5.asObject0(), call6.asObject0(), _python_var_level.asObject() ) ) );
            }
        }
        frame_guard.setLineNumber( 35 );
        DECREASE_REFCOUNT( IMPORT_MODULE( _python_var_name.asObject(), ((PyModuleObject *)_module_django__utils__importlib)->md_dict, PyObjectTemporary( _python_var_package.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var_character.updateLocalsDict( _python_var_level.updateLocalsDict( PyDict_New() ) ) ) ) ).asObject(), PyObjectTemporary( PyList_New( 0 ) ).asObject(), _python_int_neg_1 ) );
        frame_guard.setLineNumber( 36 );
        {
            PyObjectTempKeeper1 subscr8;
            return ( subscr8.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__importlib_sys.asObject0(), _python_str_plain_modules ) ), LOOKUP_SUBSCRIPT( subscr8.asObject0(), _python_var_name.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_package.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var_character.updateLocalsDict( _python_var_level.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_import_module_of_module_django__utils__importlib )
        {
           Py_DECREF( frame_function_2_import_module_of_module_django__utils__importlib );
           frame_function_2_import_module_of_module_django__utils__importlib = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_import_module_of_module_django__utils__importlib( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_name = NULL;
    PyObject *_python_par_package = NULL;
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
                PyErr_Format( PyExc_TypeError, "import_module() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "import_module() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_package == key )
            {
                if (unlikely( _python_par_package ))
                {
                    PyErr_Format( PyExc_TypeError, "import_module() got multiple values for keyword argument 'package'" );
                    goto error_exit;
                }

                _python_par_package = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "import_module() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_package, key ) )
            {
                if (unlikely( _python_par_package ))
                {
                    PyErr_Format( PyExc_TypeError, "import_module() got multiple values for keyword argument 'package'" );
                    goto error_exit;
                }

                _python_par_package = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "import_module() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "import_module() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "import_module() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "import_module() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "import_module() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "import_module() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "import_module() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "import_module() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "import_module() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "import_module() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "import_module() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "import_module() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "import_module() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "import_module() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_package != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "import_module() got multiple values for keyword argument 'package'" );
             goto error_exit;
         }

        _python_par_package = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_package == NULL )
    {
        _python_par_package = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_package );
    }


    return impl_function_2_import_module_of_module_django__utils__importlib( self, _python_par_name, _python_par_package );

error_exit:;

    Py_XDECREF( _python_par_name );
    Py_XDECREF( _python_par_package );

    return NULL;
}

static PyObject *dparse_function_2_import_module_of_module_django__utils__importlib( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2_import_module_of_module_django__utils__importlib( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_import_module_of_module_django__utils__importlib( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1__resolve_name_of_module_django__utils__importlib(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1__resolve_name_of_module_django__utils__importlib,
        dparse_function_1__resolve_name_of_module_django__utils__importlib,
        _python_str_plain__resolve_name,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_aa860d6abb97b00df6f06c01ab7c005c,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__importlib,
        _python_str_digest_ddb4233473c8f66a47f16b7a9fe7909f
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_import_module_of_module_django__utils__importlib(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_import_module_of_module_django__utils__importlib,
        dparse_function_2_import_module_of_module_django__utils__importlib,
        _python_str_plain_import_module,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_7c4c58cde77937874fc552342f3be450,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__importlib,
        _python_str_digest_63173133d92ebf88930c635a2061c0ff
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.utils.importlib",   /* m_name */
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

MOD_INIT_DECL( django__utils__importlib )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__utils__importlib );
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

    // puts( "in initdjango__utils__importlib" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__utils__importlib = Py_InitModule4(
        "django.utils.importlib",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__utils__importlib = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__utils__importlib = (PyDictObject *)((PyModuleObject *)_module_django__utils__importlib)->md_dict;

    assertObject( _module_django__utils__importlib );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_4fc502edf9b4c184659c220d993c01d3, _module_django__utils__importlib );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__utils__importlib );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__utils__importlib != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__utils__importlib, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django__utils__importlib, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_aef7f44bf7d124cc837f09f38d5a92f1 );
    PyFrameObject *frame_module_django__utils__importlib = MAKE_FRAME( _codeobj_61a031dc9f2a1b99251ede60fbd186f5, _module_django__utils__importlib );

    FrameGuard frame_guard( frame_module_django__utils__importlib );
    try
    {
        assert( Py_REFCNT( frame_module_django__utils__importlib ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 2 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__importlib, (Nuitka_StringObject *)_python_str_plain_sys, IMPORT_MODULE( _python_str_plain_sys, ((PyModuleObject *)_module_django__utils__importlib)->md_dict, ((PyModuleObject *)_module_django__utils__importlib)->md_dict, Py_None, _python_int_neg_1 ) );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__utils__importlib)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__utils__importlib, (Nuitka_StringObject *)_python_str_plain__resolve_name, MAKE_FUNCTION_function_1__resolve_name_of_module_django__utils__importlib(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__importlib, (Nuitka_StringObject *)_python_str_plain_import_module, MAKE_FUNCTION_function_2_import_module_of_module_django__utils__importlib(  ) );

   return MOD_RETURN_VALUE( _module_django__utils__importlib );
}
