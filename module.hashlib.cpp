// Generated code for Python source for module 'hashlib'
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

// The _module_hashlib is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_hashlib;
PyDictObject *_moduledict_hashlib;

// The module level variables.
static PyObjectGlobalVariable_hashlib _mvar_hashlib___get_builtin_constructor( &_module_hashlib, &_python_str_plain___get_builtin_constructor );
static PyObjectGlobalVariable_hashlib _mvar_hashlib___hash_new( &_module_hashlib, &_python_str_plain___hash_new );
static PyObjectGlobalVariable_hashlib _mvar_hashlib___py_new( &_module_hashlib, &_python_str_plain___py_new );
static PyObjectGlobalVariable_hashlib _mvar_hashlib__hashlib( &_module_hashlib, &_python_str_plain__hashlib );
static PyObjectGlobalVariable_hashlib _mvar_hashlib_f( &_module_hashlib, &_python_str_plain_f );
static PyObjectGlobalVariable_hashlib _mvar_hashlib_funcName( &_module_hashlib, &_python_str_plain_funcName );
static PyObjectGlobalVariable_hashlib _mvar_hashlib_opensslFuncName( &_module_hashlib, &_python_str_plain_opensslFuncName );

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1___get_builtin_constructor_of_module_hashlib(  );


static PyObject *MAKE_FUNCTION_function_2___py_new_of_module_hashlib(  );


static PyObject *MAKE_FUNCTION_function_3___hash_new_of_module_hashlib(  );


static PyObject *MAKE_FUNCTION_lambda_4_lambda_of_module_hashlib(  );


// The module function definitions.
static PyObject *impl_function_1___get_builtin_constructor_of_module_hashlib( Nuitka_FunctionObject *self, PyObject *_python_par_name )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );
    PyObjectLocalVariable _python_var__sha( _python_str_plain__sha );
    PyObjectLocalVariable _python_var__md5( _python_str_plain__md5 );
    PyObjectLocalVariable _python_var__sha256( _python_str_plain__sha256 );
    PyObjectLocalVariable _python_var_bs( _python_str_plain_bs );
    PyObjectLocalVariable _python_var__sha512( _python_str_plain__sha512 );

    // Actual function code.
    static PyFrameObject *frame_function_1___get_builtin_constructor_of_module_hashlib = NULL;

    if ( isFrameUnusable( frame_function_1___get_builtin_constructor_of_module_hashlib ) )
    {
        if ( frame_function_1___get_builtin_constructor_of_module_hashlib )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___get_builtin_constructor_of_module_hashlib" );
#endif
            Py_DECREF( frame_function_1___get_builtin_constructor_of_module_hashlib );
        }

        frame_function_1___get_builtin_constructor_of_module_hashlib = MAKE_FRAME( _codeobj_c7b01308d8f4bf582676007b32186d9e, _module_hashlib );
    }

    FrameGuard frame_guard( frame_function_1___get_builtin_constructor_of_module_hashlib );
    try
    {
        assert( Py_REFCNT( frame_function_1___get_builtin_constructor_of_module_hashlib ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 59 );
        if ( SEQUENCE_CONTAINS_BOOL( _python_var_name.asObject(), _python_tuple_str_plain_SHA1_str_plain_sha1_tuple ) )
        {
            frame_guard.setLineNumber( 60 );
            _python_var__sha.assign1( IMPORT_MODULE( _python_str_plain__sha, ((PyModuleObject *)_module_hashlib)->md_dict, PyObjectTemporary( _python_var_name.updateLocalsDict( _python_var__sha512.updateLocalsDict( _python_var_bs.updateLocalsDict( _python_var__sha256.updateLocalsDict( _python_var__md5.updateLocalsDict( _python_var__sha.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ).asObject(), Py_None, _python_int_neg_1 ) );
            frame_guard.setLineNumber( 61 );
            return LOOKUP_ATTRIBUTE( _python_var__sha.asObject(), _python_str_plain_new );
        }
        else
        {
            frame_guard.setLineNumber( 62 );
            if ( SEQUENCE_CONTAINS_BOOL( _python_var_name.asObject(), _python_tuple_str_plain_MD5_str_plain_md5_tuple ) )
            {
                frame_guard.setLineNumber( 63 );
                _python_var__md5.assign1( IMPORT_MODULE( _python_str_plain__md5, ((PyModuleObject *)_module_hashlib)->md_dict, PyObjectTemporary( _python_var_name.updateLocalsDict( _python_var__sha512.updateLocalsDict( _python_var_bs.updateLocalsDict( _python_var__sha256.updateLocalsDict( _python_var__md5.updateLocalsDict( _python_var__sha.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ).asObject(), Py_None, _python_int_neg_1 ) );
                frame_guard.setLineNumber( 64 );
                return LOOKUP_ATTRIBUTE( _python_var__md5.asObject(), _python_str_plain_new );
            }
            else
            {
                frame_guard.setLineNumber( 65 );
                if ( SEQUENCE_CONTAINS_BOOL( _python_var_name.asObject(), _python_tuple_c7931cbcf818fd59842c671b2727e356_tuple ) )
                {
                    frame_guard.setLineNumber( 66 );
                    _python_var__sha256.assign1( IMPORT_MODULE( _python_str_plain__sha256, ((PyModuleObject *)_module_hashlib)->md_dict, PyObjectTemporary( _python_var_name.updateLocalsDict( _python_var__sha512.updateLocalsDict( _python_var_bs.updateLocalsDict( _python_var__sha256.updateLocalsDict( _python_var__md5.updateLocalsDict( _python_var__sha.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ).asObject(), Py_None, _python_int_neg_1 ) );
                    frame_guard.setLineNumber( 67 );
                    _python_var_bs.assign1( LOOKUP_INDEX_SLICE( _python_var_name.asObject(), 3, PY_SSIZE_T_MAX ) );
                    frame_guard.setLineNumber( 68 );
                    if ( RICH_COMPARE_BOOL_EQ( _python_var_bs.asObject(), _python_str_plain_256 ) )
                    {
                        frame_guard.setLineNumber( 69 );
                        return LOOKUP_ATTRIBUTE( _python_var__sha256.asObject(), _python_str_plain_sha256 );
                    }
                    else
                    {
                        frame_guard.setLineNumber( 70 );
                        if ( RICH_COMPARE_BOOL_EQ( _python_var_bs.asObject(), _python_str_plain_224 ) )
                        {
                            frame_guard.setLineNumber( 71 );
                            return LOOKUP_ATTRIBUTE( _python_var__sha256.asObject(), _python_str_plain_sha224 );
                        }
                    }
                }
                else
                {
                    frame_guard.setLineNumber( 72 );
                    if ( SEQUENCE_CONTAINS_BOOL( _python_var_name.asObject(), _python_tuple_8a06731c572bf3f4b5a63230f4e95427_tuple ) )
                    {
                        frame_guard.setLineNumber( 73 );
                        _python_var__sha512.assign1( IMPORT_MODULE( _python_str_plain__sha512, ((PyModuleObject *)_module_hashlib)->md_dict, PyObjectTemporary( _python_var_name.updateLocalsDict( _python_var__sha512.updateLocalsDict( _python_var_bs.updateLocalsDict( _python_var__sha256.updateLocalsDict( _python_var__md5.updateLocalsDict( _python_var__sha.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ).asObject(), Py_None, _python_int_neg_1 ) );
                        frame_guard.setLineNumber( 74 );
                        _python_var_bs.assign1( LOOKUP_INDEX_SLICE( _python_var_name.asObject(), 3, PY_SSIZE_T_MAX ) );
                        frame_guard.setLineNumber( 75 );
                        if ( RICH_COMPARE_BOOL_EQ( _python_var_bs.asObject(), _python_str_plain_512 ) )
                        {
                            frame_guard.setLineNumber( 76 );
                            return LOOKUP_ATTRIBUTE( _python_var__sha512.asObject(), _python_str_plain_sha512 );
                        }
                        else
                        {
                            frame_guard.setLineNumber( 77 );
                            if ( RICH_COMPARE_BOOL_EQ( _python_var_bs.asObject(), _python_str_plain_384 ) )
                            {
                                frame_guard.setLineNumber( 78 );
                                return LOOKUP_ATTRIBUTE( _python_var__sha512.asObject(), _python_str_plain_sha384 );
                            }
                        }
                    }
                }
            }
        }
        frame_guard.setLineNumber( 80 );
        RAISE_EXCEPTION_WITH_VALUE( PyExc_ValueError, _python_str_digest_24b0cc57090fcfede7bc6e10eea184df, PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_name.updateLocalsDict( _python_var__sha512.updateLocalsDict( _python_var_bs.updateLocalsDict( _python_var__sha256.updateLocalsDict( _python_var__md5.updateLocalsDict( _python_var__sha.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___get_builtin_constructor_of_module_hashlib )
        {
           Py_DECREF( frame_function_1___get_builtin_constructor_of_module_hashlib );
           frame_function_1___get_builtin_constructor_of_module_hashlib = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1___get_builtin_constructor_of_module_hashlib( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
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
                PyErr_Format( PyExc_TypeError, "__get_builtin_constructor() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__get_builtin_constructor() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__get_builtin_constructor() got multiple values for keyword argument 'name'" );
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
                   "__get_builtin_constructor() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__get_builtin_constructor() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__get_builtin_constructor() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__get_builtin_constructor() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__get_builtin_constructor() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__get_builtin_constructor() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__get_builtin_constructor() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__get_builtin_constructor() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__get_builtin_constructor() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__get_builtin_constructor() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__get_builtin_constructor() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__get_builtin_constructor() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__get_builtin_constructor() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__get_builtin_constructor() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_1___get_builtin_constructor_of_module_hashlib( self, _python_par_name );

error_exit:;

    Py_XDECREF( _python_par_name );

    return NULL;
}

static PyObject *dparse_function_1___get_builtin_constructor_of_module_hashlib( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_1___get_builtin_constructor_of_module_hashlib( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___get_builtin_constructor_of_module_hashlib( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___py_new_of_module_hashlib( Nuitka_FunctionObject *self, PyObject *_python_par_name, PyObject *_python_par_string )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );
    PyObjectLocalParameterVariableNoDel _python_var_string( _python_str_plain_string, _python_par_string );

    // Actual function code.
    static PyFrameObject *frame_function_2___py_new_of_module_hashlib = NULL;

    if ( isFrameUnusable( frame_function_2___py_new_of_module_hashlib ) )
    {
        if ( frame_function_2___py_new_of_module_hashlib )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2___py_new_of_module_hashlib" );
#endif
            Py_DECREF( frame_function_2___py_new_of_module_hashlib );
        }

        frame_function_2___py_new_of_module_hashlib = MAKE_FRAME( _codeobj_6c31c12bff43ef9ae2d08de5cd79504a, _module_hashlib );
    }

    FrameGuard frame_guard( frame_function_2___py_new_of_module_hashlib );
    try
    {
        assert( Py_REFCNT( frame_function_2___py_new_of_module_hashlib ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 87 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper1 call3;
            return ( call3.assign( ( call1.assign( _mvar_hashlib___get_builtin_constructor.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_name.asObject() ) ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_string.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_string.updateLocalsDict( _python_var_name.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_2___py_new_of_module_hashlib )
        {
           Py_DECREF( frame_function_2___py_new_of_module_hashlib );
           frame_function_2___py_new_of_module_hashlib = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2___py_new_of_module_hashlib( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_name = NULL;
    PyObject *_python_par_string = NULL;
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
                PyErr_Format( PyExc_TypeError, "__py_new() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__py_new() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_string == key )
            {
                if (unlikely( _python_par_string ))
                {
                    PyErr_Format( PyExc_TypeError, "__py_new() got multiple values for keyword argument 'string'" );
                    goto error_exit;
                }

                _python_par_string = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__py_new() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_string, key ) )
            {
                if (unlikely( _python_par_string ))
                {
                    PyErr_Format( PyExc_TypeError, "__py_new() got multiple values for keyword argument 'string'" );
                    goto error_exit;
                }

                _python_par_string = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__py_new() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__py_new() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__py_new() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__py_new() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__py_new() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__py_new() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__py_new() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__py_new() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__py_new() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__py_new() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__py_new() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__py_new() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__py_new() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__py_new() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_string != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__py_new() got multiple values for keyword argument 'string'" );
             goto error_exit;
         }

        _python_par_string = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_string == NULL )
    {
        _python_par_string = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_string );
    }


    return impl_function_2___py_new_of_module_hashlib( self, _python_par_name, _python_par_string );

error_exit:;

    Py_XDECREF( _python_par_name );
    Py_XDECREF( _python_par_string );

    return NULL;
}

static PyObject *dparse_function_2___py_new_of_module_hashlib( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2___py_new_of_module_hashlib( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___py_new_of_module_hashlib( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3___hash_new_of_module_hashlib( Nuitka_FunctionObject *self, PyObject *_python_par_name, PyObject *_python_par_string )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_name( _python_str_plain_name, _python_par_name );
    PyObjectLocalParameterVariableNoDel _python_var_string( _python_str_plain_string, _python_par_string );

    // Actual function code.
    static PyFrameObject *frame_function_3___hash_new_of_module_hashlib = NULL;

    if ( isFrameUnusable( frame_function_3___hash_new_of_module_hashlib ) )
    {
        if ( frame_function_3___hash_new_of_module_hashlib )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3___hash_new_of_module_hashlib" );
#endif
            Py_DECREF( frame_function_3___hash_new_of_module_hashlib );
        }

        frame_function_3___hash_new_of_module_hashlib = MAKE_FRAME( _codeobj_2c7b22376e9bc2e747f930f790748da3, _module_hashlib );
    }

    FrameGuard frame_guard( frame_function_3___hash_new_of_module_hashlib );
    try
    {
        assert( Py_REFCNT( frame_function_3___hash_new_of_module_hashlib ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 94 );
        try
        {
            frame_guard.setLineNumber( 95 );
            {
                PyObjectTempKeeper1 call5;
                PyObjectTempKeeper0 call6;
                return ( call5.assign( LOOKUP_ATTRIBUTE( _mvar_hashlib__hashlib.asObject0(), _python_str_plain_new ) ), call6.assign( _python_var_name.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), call6.asObject0(), _python_var_string.asObject() ) );
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
                frame_guard.setLineNumber( 101 );
                {
                    PyObjectTempKeeper0 call1;
                    PyObjectTempKeeper1 call3;
                    return ( call3.assign( ( call1.assign( _mvar_hashlib___get_builtin_constructor.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_name.asObject() ) ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_string.asObject() ) );
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

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_string.updateLocalsDict( _python_var_name.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_3___hash_new_of_module_hashlib )
        {
           Py_DECREF( frame_function_3___hash_new_of_module_hashlib );
           frame_function_3___hash_new_of_module_hashlib = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_3___hash_new_of_module_hashlib( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_name = NULL;
    PyObject *_python_par_string = NULL;
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
                PyErr_Format( PyExc_TypeError, "__hash_new() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__hash_new() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_string == key )
            {
                if (unlikely( _python_par_string ))
                {
                    PyErr_Format( PyExc_TypeError, "__hash_new() got multiple values for keyword argument 'string'" );
                    goto error_exit;
                }

                _python_par_string = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_name, key ) )
            {
                if (unlikely( _python_par_name ))
                {
                    PyErr_Format( PyExc_TypeError, "__hash_new() got multiple values for keyword argument 'name'" );
                    goto error_exit;
                }

                _python_par_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_string, key ) )
            {
                if (unlikely( _python_par_string ))
                {
                    PyErr_Format( PyExc_TypeError, "__hash_new() got multiple values for keyword argument 'string'" );
                    goto error_exit;
                }

                _python_par_string = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__hash_new() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__hash_new() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__hash_new() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__hash_new() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__hash_new() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__hash_new() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__hash_new() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__hash_new() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__hash_new() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__hash_new() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__hash_new() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__hash_new() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__hash_new() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__hash_new() got multiple values for keyword argument 'name'" );
             goto error_exit;
         }

        _python_par_name = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_string != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__hash_new() got multiple values for keyword argument 'string'" );
             goto error_exit;
         }

        _python_par_string = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_string == NULL )
    {
        _python_par_string = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_string );
    }


    return impl_function_3___hash_new_of_module_hashlib( self, _python_par_name, _python_par_string );

error_exit:;

    Py_XDECREF( _python_par_name );
    Py_XDECREF( _python_par_string );

    return NULL;
}

static PyObject *dparse_function_3___hash_new_of_module_hashlib( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_3___hash_new_of_module_hashlib( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3___hash_new_of_module_hashlib( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_lambda_4_lambda_of_module_hashlib( Nuitka_FunctionObject *self, PyObject *_python_par_n )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_n( _python_str_plain_n, _python_par_n );

    // Actual function code.
    static PyFrameObject *frame_lambda_4_lambda_of_module_hashlib = NULL;

    if ( isFrameUnusable( frame_lambda_4_lambda_of_module_hashlib ) )
    {
        if ( frame_lambda_4_lambda_of_module_hashlib )
        {
#if _DEBUG_REFRAME
            puts( "reframe for lambda_4_lambda_of_module_hashlib" );
#endif
            Py_DECREF( frame_lambda_4_lambda_of_module_hashlib );
        }

        frame_lambda_4_lambda_of_module_hashlib = MAKE_FRAME( _codeobj_d83c927b001e8c74f3f447a821c76314, _module_hashlib );
    }

    FrameGuard frame_guard( frame_lambda_4_lambda_of_module_hashlib );
    try
    {
        assert( Py_REFCNT( frame_lambda_4_lambda_of_module_hashlib ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 109 );
        return CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_n.asObject(), _python_str_plain_startswith ) ).asObject(), _python_str_plain_openssl_ );
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
        frame_guard.getFrame0()->f_locals = _python_var_n.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_lambda_4_lambda_of_module_hashlib )
        {
           Py_DECREF( frame_lambda_4_lambda_of_module_hashlib );
           frame_lambda_4_lambda_of_module_hashlib = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_lambda_4_lambda_of_module_hashlib( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_n = NULL;
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
            if ( found == false && _python_str_plain_n == key )
            {
                if (unlikely( _python_par_n ))
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'n'" );
                    goto error_exit;
                }

                _python_par_n = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_n, key ) )
            {
                if (unlikely( _python_par_n ))
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'n'" );
                    goto error_exit;
                }

                _python_par_n = value;

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
         if (unlikely( _python_par_n != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'n'" );
             goto error_exit;
         }

        _python_par_n = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_lambda_4_lambda_of_module_hashlib( self, _python_par_n );

error_exit:;

    Py_XDECREF( _python_par_n );

    return NULL;
}

static PyObject *dparse_lambda_4_lambda_of_module_hashlib( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_lambda_4_lambda_of_module_hashlib( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_lambda_4_lambda_of_module_hashlib( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1___get_builtin_constructor_of_module_hashlib(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___get_builtin_constructor_of_module_hashlib,
        dparse_function_1___get_builtin_constructor_of_module_hashlib,
        _python_str_plain___get_builtin_constructor,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_c7b01308d8f4bf582676007b32186d9e,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_hashlib,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___py_new_of_module_hashlib(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___py_new_of_module_hashlib,
        dparse_function_2___py_new_of_module_hashlib,
        _python_str_plain___py_new,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_6c31c12bff43ef9ae2d08de5cd79504a,
        INCREASE_REFCOUNT( _python_tuple_str_empty_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_hashlib,
        _python_str_digest_664bd26a654ac0867a4edfa981996993
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3___hash_new_of_module_hashlib(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3___hash_new_of_module_hashlib,
        dparse_function_3___hash_new_of_module_hashlib,
        _python_str_plain___hash_new,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_2c7b22376e9bc2e747f930f790748da3,
        INCREASE_REFCOUNT( _python_tuple_str_empty_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_hashlib,
        _python_str_digest_664bd26a654ac0867a4edfa981996993
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_4_lambda_of_module_hashlib(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_lambda_4_lambda_of_module_hashlib,
        dparse_lambda_4_lambda_of_module_hashlib,
        _python_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d83c927b001e8c74f3f447a821c76314,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_hashlib,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "hashlib",   /* m_name */
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

MOD_INIT_DECL( hashlib )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_hashlib );
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

    // puts( "in inithashlib" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_hashlib = Py_InitModule4(
        "hashlib",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_hashlib = PyModule_Create( &_moduledef );
#endif

    _moduledict_hashlib = (PyDictObject *)((PyModuleObject *)_module_hashlib)->md_dict;

    assertObject( _module_hashlib );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_plain_hashlib, _module_hashlib );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_hashlib );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_hashlib != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_hashlib, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_hashlib, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_b5b6d2218da3aafade2a85df661fc9a5 );
    UPDATE_STRING_DICT0( _moduledict_hashlib, (Nuitka_StringObject *)_python_str_plain___doc__, _python_str_digest_3173c49521347c1e5bd4860253f56d3b );
    UPDATE_STRING_DICT1( _moduledict_hashlib, (Nuitka_StringObject *)_python_str_plain___get_builtin_constructor, MAKE_FUNCTION_function_1___get_builtin_constructor_of_module_hashlib(  ) );
    UPDATE_STRING_DICT1( _moduledict_hashlib, (Nuitka_StringObject *)_python_str_plain___py_new, MAKE_FUNCTION_function_2___py_new_of_module_hashlib(  ) );
    UPDATE_STRING_DICT1( _moduledict_hashlib, (Nuitka_StringObject *)_python_str_plain___hash_new, MAKE_FUNCTION_function_3___hash_new_of_module_hashlib(  ) );
    PyFrameObject *frame_module_hashlib = MAKE_FRAME( _codeobj_adb87a725cc5ee6cf8cf3f2fde556a55, _module_hashlib );

    FrameGuard frame_guard( frame_module_hashlib );
    try
    {
        assert( Py_REFCNT( frame_module_hashlib ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 104 );
        try
        {
            frame_guard.setLineNumber( 105 );
            UPDATE_STRING_DICT1( _moduledict_hashlib, (Nuitka_StringObject *)_python_str_plain__hashlib, IMPORT_MODULE( _python_str_plain__hashlib, ((PyModuleObject *)_module_hashlib)->md_dict, ((PyModuleObject *)_module_hashlib)->md_dict, Py_None, _python_int_neg_1 ) );
            frame_guard.setLineNumber( 107 );
            UPDATE_STRING_DICT0( _moduledict_hashlib, (Nuitka_StringObject *)_python_str_plain_new, _mvar_hashlib___hash_new.asObject0() );
            {
                frame_guard.setLineNumber( 109 );
                PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_filter ), PyObjectTemporary( MAKE_FUNCTION_lambda_4_lambda_of_module_hashlib(  ) ).asObject(), PyObjectTemporary( BUILTIN_DIR1( _mvar_hashlib__hashlib.asObject0() ) ).asObject() ) ).asObject() ) );
                while( true )
                {
                    {
                        frame_guard.setLineNumber( 109 );
                        PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                        if ( _tmp_unpack_1 == NULL )
                        {
                            break;
                        }
                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                        UPDATE_STRING_DICT0( _moduledict_hashlib, (Nuitka_StringObject *)_python_str_plain_opensslFuncName, _python_tmp_iter_value.asObject() );
                    }
                    frame_guard.setLineNumber( 110 );
                    UPDATE_STRING_DICT1( _moduledict_hashlib, (Nuitka_StringObject *)_python_str_plain_funcName, LOOKUP_INDEX_SLICE( _mvar_hashlib_opensslFuncName.asObject0(), 8, PY_SSIZE_T_MAX ) );
                    frame_guard.setLineNumber( 111 );
                    try
                    {
                        frame_guard.setLineNumber( 114 );
                        {
                            PyObjectTempKeeper0 getattr1;
                            UPDATE_STRING_DICT1( _moduledict_hashlib, (Nuitka_StringObject *)_python_str_plain_f, ( getattr1.assign( _mvar_hashlib__hashlib.asObject0() ), BUILTIN_GETATTR( getattr1.asObject0(), _mvar_hashlib_opensslFuncName.asObject0(), NULL ) ) );
                        }
                        frame_guard.setLineNumber( 115 );
                        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( _mvar_hashlib_f.asObject0() ) );
                        frame_guard.setLineNumber( 117 );
                        {
                            PyObjectTemporary globals( INCREASE_REFCOUNT( ((PyModuleObject *)_module_hashlib)->md_dict ) );
                            PyObjectTemporary locals( INCREASE_REFCOUNT( ((PyModuleObject *)_module_hashlib)->md_dict ) );

                            PyObjectTemporary code( COMPILE_CODE( PyObjectTemporary( BINARY_OPERATION_ADD( _mvar_hashlib_funcName.asObject0(), _python_str_digest_7add3edad1c7b120cf21f6207f1d5fe9 ) ).asObject(), _python_str_angle_string, _python_str_plain_exec, 0 ) );

                            PyObject *result = EVAL_CODE( code.asObject(), globals.asObject(), locals.asObject() );
                            Py_DECREF( result );
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
                            frame_guard.setLineNumber( 119 );
                            try
                            {
                                frame_guard.setLineNumber( 121 );
                                {
                                    PyObjectTemporary globals( INCREASE_REFCOUNT( ((PyModuleObject *)_module_hashlib)->md_dict ) );
                                    PyObjectTemporary locals( INCREASE_REFCOUNT( ((PyModuleObject *)_module_hashlib)->md_dict ) );

                                    PyObjectTemporary code( COMPILE_CODE( PyObjectTemporary( BINARY_OPERATION_ADD( _mvar_hashlib_funcName.asObject0(), _python_str_digest_e9511326847dfad0d6784ae524e60116 ) ).asObject(), _python_str_angle_string, _python_str_plain_exec, 0 ) );

                                    PyObject *result = EVAL_CODE( code.asObject(), globals.asObject(), locals.asObject() );
                                    Py_DECREF( result );
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
            frame_guard.setLineNumber( 126 );
            _mvar_hashlib_f.del( false );
            frame_guard.setLineNumber( 127 );
            _mvar_hashlib_opensslFuncName.del( false );
            frame_guard.setLineNumber( 128 );
            _mvar_hashlib_funcName.del( false );
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
                frame_guard.setLineNumber( 133 );
                UPDATE_STRING_DICT0( _moduledict_hashlib, (Nuitka_StringObject *)_python_str_plain_new, _mvar_hashlib___py_new.asObject0() );
                frame_guard.setLineNumber( 136 );
                UPDATE_STRING_DICT1( _moduledict_hashlib, (Nuitka_StringObject *)_python_str_plain_md5, CALL_FUNCTION_WITH_ARGS( _mvar_hashlib___get_builtin_constructor.asObject0(), _python_str_plain_md5 ) );
                frame_guard.setLineNumber( 137 );
                UPDATE_STRING_DICT1( _moduledict_hashlib, (Nuitka_StringObject *)_python_str_plain_sha1, CALL_FUNCTION_WITH_ARGS( _mvar_hashlib___get_builtin_constructor.asObject0(), _python_str_plain_sha1 ) );
                frame_guard.setLineNumber( 138 );
                UPDATE_STRING_DICT1( _moduledict_hashlib, (Nuitka_StringObject *)_python_str_plain_sha224, CALL_FUNCTION_WITH_ARGS( _mvar_hashlib___get_builtin_constructor.asObject0(), _python_str_plain_sha224 ) );
                frame_guard.setLineNumber( 139 );
                UPDATE_STRING_DICT1( _moduledict_hashlib, (Nuitka_StringObject *)_python_str_plain_sha256, CALL_FUNCTION_WITH_ARGS( _mvar_hashlib___get_builtin_constructor.asObject0(), _python_str_plain_sha256 ) );
                frame_guard.setLineNumber( 140 );
                UPDATE_STRING_DICT1( _moduledict_hashlib, (Nuitka_StringObject *)_python_str_plain_sha384, CALL_FUNCTION_WITH_ARGS( _mvar_hashlib___get_builtin_constructor.asObject0(), _python_str_plain_sha384 ) );
                frame_guard.setLineNumber( 141 );
                UPDATE_STRING_DICT1( _moduledict_hashlib, (Nuitka_StringObject *)_python_str_plain_sha512, CALL_FUNCTION_WITH_ARGS( _mvar_hashlib___get_builtin_constructor.asObject0(), _python_str_plain_sha512 ) );
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

#if 0
    // TODO: Recognize the need for it
        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_hashlib)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }

   return MOD_RETURN_VALUE( _module_hashlib );
}
