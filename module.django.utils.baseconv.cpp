// Generated code for Python source for module 'django.utils.baseconv'
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

// The _module_django__utils__baseconv is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__utils__baseconv;
PyDictObject *_moduledict_django__utils__baseconv;

// The module level variables.
static PyObjectGlobalVariable_django__utils__baseconv _mvar_django__utils__baseconv_BASE16_ALPHABET( &_module_django__utils__baseconv, &_python_str_plain_BASE16_ALPHABET );
static PyObjectGlobalVariable_django__utils__baseconv _mvar_django__utils__baseconv_BASE2_ALPHABET( &_module_django__utils__baseconv, &_python_str_plain_BASE2_ALPHABET );
static PyObjectGlobalVariable_django__utils__baseconv _mvar_django__utils__baseconv_BASE36_ALPHABET( &_module_django__utils__baseconv, &_python_str_plain_BASE36_ALPHABET );
static PyObjectGlobalVariable_django__utils__baseconv _mvar_django__utils__baseconv_BASE56_ALPHABET( &_module_django__utils__baseconv, &_python_str_plain_BASE56_ALPHABET );
static PyObjectGlobalVariable_django__utils__baseconv _mvar_django__utils__baseconv_BASE62_ALPHABET( &_module_django__utils__baseconv, &_python_str_plain_BASE62_ALPHABET );
static PyObjectGlobalVariable_django__utils__baseconv _mvar_django__utils__baseconv_BASE64_ALPHABET( &_module_django__utils__baseconv, &_python_str_plain_BASE64_ALPHABET );
static PyObjectGlobalVariable_django__utils__baseconv _mvar_django__utils__baseconv_BaseConverter( &_module_django__utils__baseconv, &_python_str_plain_BaseConverter );
static PyObjectGlobalVariable_django__utils__baseconv _mvar_django__utils__baseconv___metaclass__( &_module_django__utils__baseconv, &_python_str_plain___metaclass__ );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_BaseConverter_of_module_django__utils__baseconv(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_BaseConverter_of_module_django__utils__baseconv(  );


static PyObject *MAKE_FUNCTION_function_2___repr___of_class_1_BaseConverter_of_module_django__utils__baseconv(  );


static PyObject *MAKE_FUNCTION_function_3_encode_of_class_1_BaseConverter_of_module_django__utils__baseconv(  );


static PyObject *MAKE_FUNCTION_function_4_decode_of_class_1_BaseConverter_of_module_django__utils__baseconv(  );


static PyObject *MAKE_FUNCTION_function_5_convert_of_class_1_BaseConverter_of_module_django__utils__baseconv(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_BaseConverter_of_module_django__utils__baseconv(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var_decimal_digits( _python_str_plain_decimal_digits );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var___repr__( _python_str_plain___repr__ );
    PyObjectLocalVariable _python_var_encode( _python_str_plain_encode );
    PyObjectLocalVariable _python_var_decode( _python_str_plain_decode );
    PyObjectLocalVariable _python_var_convert( _python_str_plain_convert );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_baseconv );
    _python_var_decimal_digits.assign0( _python_str_plain_0123456789 );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_1_BaseConverter_of_module_django__utils__baseconv(  ) );
    _python_var___repr__.assign1( MAKE_FUNCTION_function_2___repr___of_class_1_BaseConverter_of_module_django__utils__baseconv(  ) );
    _python_var_encode.assign1( MAKE_FUNCTION_function_3_encode_of_class_1_BaseConverter_of_module_django__utils__baseconv(  ) );
    _python_var_decode.assign1( MAKE_FUNCTION_function_4_decode_of_class_1_BaseConverter_of_module_django__utils__baseconv(  ) );
    _python_var_convert.assign1( MAKE_FUNCTION_function_5_convert_of_class_1_BaseConverter_of_module_django__utils__baseconv(  ) );
    return _python_var_convert.updateLocalsDict( _python_var_decode.updateLocalsDict( _python_var_encode.updateLocalsDict( _python_var___repr__.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var_decimal_digits.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_1_BaseConverter_of_module_django__utils__baseconv( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_digits, PyObject *_python_par_sign )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_digits( _python_str_plain_digits, _python_par_digits );
    PyObjectLocalParameterVariableNoDel _python_var_sign( _python_str_plain_sign, _python_par_sign );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_1_BaseConverter_of_module_django__utils__baseconv = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_1_BaseConverter_of_module_django__utils__baseconv ) )
    {
        if ( frame_function_1___init___of_class_1_BaseConverter_of_module_django__utils__baseconv )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_1_BaseConverter_of_module_django__utils__baseconv" );
#endif
            Py_DECREF( frame_function_1___init___of_class_1_BaseConverter_of_module_django__utils__baseconv );
        }

        frame_function_1___init___of_class_1_BaseConverter_of_module_django__utils__baseconv = MAKE_FRAME( _codeobj_ce3d378bdd1dc84071a89a34666dc864, _module_django__utils__baseconv );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_1_BaseConverter_of_module_django__utils__baseconv );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_1_BaseConverter_of_module_django__utils__baseconv ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 51 );
        {
                PyObject *tmp_identifier = _python_var_sign.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_sign );
        }
        frame_guard.setLineNumber( 52 );
        {
                PyObject *tmp_identifier = _python_var_digits.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_digits );
        }
        frame_guard.setLineNumber( 53 );
        {
            PyObjectTempKeeper0 cmp1;
            if ( ( cmp1.assign( _python_var_sign.asObject() ), SEQUENCE_CONTAINS_BOOL( cmp1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_digits ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 54 );
            {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_ValueError, PyObjectTemporary( MAKE_TUPLE1( _python_str_digest_1a2aefb802724433dbd6a86b7ee7209f ) ).asObject() ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
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

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_sign.updateLocalsDict( _python_var_digits.updateLocalsDict( _python_var_self.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_1_BaseConverter_of_module_django__utils__baseconv )
        {
           Py_DECREF( frame_function_1___init___of_class_1_BaseConverter_of_module_django__utils__baseconv );
           frame_function_1___init___of_class_1_BaseConverter_of_module_django__utils__baseconv = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_1_BaseConverter_of_module_django__utils__baseconv( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_digits = NULL;
    PyObject *_python_par_sign = NULL;
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
            if ( found == false && _python_str_plain_digits == key )
            {
                if (unlikely( _python_par_digits ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'digits'" );
                    goto error_exit;
                }

                _python_par_digits = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_sign == key )
            {
                if (unlikely( _python_par_sign ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'sign'" );
                    goto error_exit;
                }

                _python_par_sign = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_digits, key ) )
            {
                if (unlikely( _python_par_digits ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'digits'" );
                    goto error_exit;
                }

                _python_par_digits = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_sign, key ) )
            {
                if (unlikely( _python_par_sign ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'sign'" );
                    goto error_exit;
                }

                _python_par_sign = value;

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
            if ( 3 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 2 )
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
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
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
                if ( 3 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__init__() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
         if (unlikely( _python_par_digits != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'digits'" );
             goto error_exit;
         }

        _python_par_digits = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_sign != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'sign'" );
             goto error_exit;
         }

        _python_par_sign = INCREASE_REFCOUNT( args[ 2 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_sign == NULL )
    {
        _python_par_sign = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_sign );
    }


    return impl_function_1___init___of_class_1_BaseConverter_of_module_django__utils__baseconv( self, _python_par_self, _python_par_digits, _python_par_sign );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_digits );
    Py_XDECREF( _python_par_sign );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_1_BaseConverter_of_module_django__utils__baseconv( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_1___init___of_class_1_BaseConverter_of_module_django__utils__baseconv( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_1_BaseConverter_of_module_django__utils__baseconv( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2___repr___of_class_1_BaseConverter_of_module_django__utils__baseconv( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_2___repr___of_class_1_BaseConverter_of_module_django__utils__baseconv = NULL;

    if ( isFrameUnusable( frame_function_2___repr___of_class_1_BaseConverter_of_module_django__utils__baseconv ) )
    {
        if ( frame_function_2___repr___of_class_1_BaseConverter_of_module_django__utils__baseconv )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2___repr___of_class_1_BaseConverter_of_module_django__utils__baseconv" );
#endif
            Py_DECREF( frame_function_2___repr___of_class_1_BaseConverter_of_module_django__utils__baseconv );
        }

        frame_function_2___repr___of_class_1_BaseConverter_of_module_django__utils__baseconv = MAKE_FRAME( _codeobj_4296d37f80322a34698d7dfebd42131b, _module_django__utils__baseconv );
    }

    FrameGuard frame_guard( frame_function_2___repr___of_class_1_BaseConverter_of_module_django__utils__baseconv );
    try
    {
        assert( Py_REFCNT( frame_function_2___repr___of_class_1_BaseConverter_of_module_django__utils__baseconv ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 57 );
        {
            PyObjectTempKeeper1 make_tuple1;
            return BINARY_OPERATION_REMAINDER( _python_str_digest_94e6db966c19bc808bbc3b051ec5f9e4, PyObjectTemporary( ( make_tuple1.assign( BUILTIN_LEN( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_digits ) ).asObject() ) ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_digits ) ).asObject() ) ) ).asObject() );
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

        if ( frame_guard.getFrame0() == frame_function_2___repr___of_class_1_BaseConverter_of_module_django__utils__baseconv )
        {
           Py_DECREF( frame_function_2___repr___of_class_1_BaseConverter_of_module_django__utils__baseconv );
           frame_function_2___repr___of_class_1_BaseConverter_of_module_django__utils__baseconv = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2___repr___of_class_1_BaseConverter_of_module_django__utils__baseconv( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__repr__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__repr__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__repr__() got multiple values for keyword argument 'self'" );
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
                   "__repr__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__repr__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__repr__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__repr__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__repr__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__repr__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__repr__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__repr__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__repr__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__repr__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__repr__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__repr__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__repr__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__repr__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2___repr___of_class_1_BaseConverter_of_module_django__utils__baseconv( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2___repr___of_class_1_BaseConverter_of_module_django__utils__baseconv( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2___repr___of_class_1_BaseConverter_of_module_django__utils__baseconv( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2___repr___of_class_1_BaseConverter_of_module_django__utils__baseconv( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_encode_of_class_1_BaseConverter_of_module_django__utils__baseconv( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_i )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_i( _python_str_plain_i, _python_par_i );
    PyObjectLocalVariable _python_var_neg( _python_str_plain_neg );
    PyObjectLocalVariable _python_var_value( _python_str_plain_value );

    // Actual function code.
    static PyFrameObject *frame_function_3_encode_of_class_1_BaseConverter_of_module_django__utils__baseconv = NULL;

    if ( isFrameUnusable( frame_function_3_encode_of_class_1_BaseConverter_of_module_django__utils__baseconv ) )
    {
        if ( frame_function_3_encode_of_class_1_BaseConverter_of_module_django__utils__baseconv )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_encode_of_class_1_BaseConverter_of_module_django__utils__baseconv" );
#endif
            Py_DECREF( frame_function_3_encode_of_class_1_BaseConverter_of_module_django__utils__baseconv );
        }

        frame_function_3_encode_of_class_1_BaseConverter_of_module_django__utils__baseconv = MAKE_FRAME( _codeobj_984ed975f527f5b270c3388d4854b5f1, _module_django__utils__baseconv );
    }

    FrameGuard frame_guard( frame_function_3_encode_of_class_1_BaseConverter_of_module_django__utils__baseconv );
    try
    {
        assert( Py_REFCNT( frame_function_3_encode_of_class_1_BaseConverter_of_module_django__utils__baseconv ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 60 );
            PyObject *_tmp_python_tmp_source_iter;
            {
                PyObjectTempKeeper1 call1;
                PyObjectTempKeeper0 call2;
                PyObjectTempKeeper1 call3;
                _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_convert ) ), call2.assign( _python_var_i.asObject() ), call3.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_decimal_digits ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), call3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_digits ) ).asObject(), _python_str_chr_45 ) ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
            _python_var_neg.assign0( _python_tmp_element_1.asObject() );
            _python_var_value.assign0( _python_tmp_element_2.asObject() );
        }
        frame_guard.setLineNumber( 61 );
        if ( CHECK_IF_TRUE( _python_var_neg.asObject() ) )
        {
            frame_guard.setLineNumber( 62 );
            {
                PyObjectTempKeeper1 op6;
                return ( op6.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_sign ) ), BINARY_OPERATION_ADD( op6.asObject0(), _python_var_value.asObject() ) );
            }
        }
        frame_guard.setLineNumber( 63 );
        return _python_var_value.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_i.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_neg.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_encode_of_class_1_BaseConverter_of_module_django__utils__baseconv )
        {
           Py_DECREF( frame_function_3_encode_of_class_1_BaseConverter_of_module_django__utils__baseconv );
           frame_function_3_encode_of_class_1_BaseConverter_of_module_django__utils__baseconv = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_encode_of_class_1_BaseConverter_of_module_django__utils__baseconv( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "encode() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "encode() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "encode() got multiple values for keyword argument 'i'" );
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
                    PyErr_Format( PyExc_TypeError, "encode() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "encode() got multiple values for keyword argument 'i'" );
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
                   "encode() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "encode() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "encode() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "encode() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "encode() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "encode() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "encode() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "encode() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "encode() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "encode() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "encode() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "encode() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "encode() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "encode() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_i != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "encode() got multiple values for keyword argument 'i'" );
             goto error_exit;
         }

        _python_par_i = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_3_encode_of_class_1_BaseConverter_of_module_django__utils__baseconv( self, _python_par_self, _python_par_i );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_i );

    return NULL;
}

static PyObject *dparse_function_3_encode_of_class_1_BaseConverter_of_module_django__utils__baseconv( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_3_encode_of_class_1_BaseConverter_of_module_django__utils__baseconv( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_encode_of_class_1_BaseConverter_of_module_django__utils__baseconv( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_decode_of_class_1_BaseConverter_of_module_django__utils__baseconv( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_s )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_s( _python_str_plain_s, _python_par_s );
    PyObjectLocalVariable _python_var_neg( _python_str_plain_neg );
    PyObjectLocalVariable _python_var_value( _python_str_plain_value );

    // Actual function code.
    static PyFrameObject *frame_function_4_decode_of_class_1_BaseConverter_of_module_django__utils__baseconv = NULL;

    if ( isFrameUnusable( frame_function_4_decode_of_class_1_BaseConverter_of_module_django__utils__baseconv ) )
    {
        if ( frame_function_4_decode_of_class_1_BaseConverter_of_module_django__utils__baseconv )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_decode_of_class_1_BaseConverter_of_module_django__utils__baseconv" );
#endif
            Py_DECREF( frame_function_4_decode_of_class_1_BaseConverter_of_module_django__utils__baseconv );
        }

        frame_function_4_decode_of_class_1_BaseConverter_of_module_django__utils__baseconv = MAKE_FRAME( _codeobj_ab10d7d09007ebb3d3934eecb1a2cd96, _module_django__utils__baseconv );
    }

    FrameGuard frame_guard( frame_function_4_decode_of_class_1_BaseConverter_of_module_django__utils__baseconv );
    try
    {
        assert( Py_REFCNT( frame_function_4_decode_of_class_1_BaseConverter_of_module_django__utils__baseconv ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 66 );
            PyObject *_tmp_python_tmp_source_iter;
            {
                PyObjectTempKeeper1 call1;
                PyObjectTempKeeper0 call2;
                PyObjectTempKeeper1 call3;
                PyObjectTempKeeper1 call4;
                _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_convert ) ), call2.assign( _python_var_s.asObject() ), call3.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_digits ) ), call4.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_decimal_digits ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), call3.asObject0(), call4.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_sign ) ).asObject() ) ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
            _python_var_neg.assign0( _python_tmp_element_1.asObject() );
            _python_var_value.assign0( _python_tmp_element_2.asObject() );
        }
        frame_guard.setLineNumber( 67 );
        if ( CHECK_IF_TRUE( _python_var_neg.asObject() ) )
        {
            frame_guard.setLineNumber( 68 );
            _python_var_value.assign1( BINARY_OPERATION_ADD( _python_str_chr_45, _python_var_value.asObject() ) );
        }
        frame_guard.setLineNumber( 69 );
        return TO_INT( _python_var_value.asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_s.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_neg.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_4_decode_of_class_1_BaseConverter_of_module_django__utils__baseconv )
        {
           Py_DECREF( frame_function_4_decode_of_class_1_BaseConverter_of_module_django__utils__baseconv );
           frame_function_4_decode_of_class_1_BaseConverter_of_module_django__utils__baseconv = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_decode_of_class_1_BaseConverter_of_module_django__utils__baseconv( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "decode() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "decode() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "decode() got multiple values for keyword argument 's'" );
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
                    PyErr_Format( PyExc_TypeError, "decode() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "decode() got multiple values for keyword argument 's'" );
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
                   "decode() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "decode() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "decode() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "decode() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "decode() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "decode() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "decode() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "decode() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "decode() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "decode() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "decode() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "decode() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "decode() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "decode() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_s != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "decode() got multiple values for keyword argument 's'" );
             goto error_exit;
         }

        _python_par_s = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_4_decode_of_class_1_BaseConverter_of_module_django__utils__baseconv( self, _python_par_self, _python_par_s );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_s );

    return NULL;
}

static PyObject *dparse_function_4_decode_of_class_1_BaseConverter_of_module_django__utils__baseconv( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_4_decode_of_class_1_BaseConverter_of_module_django__utils__baseconv( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_decode_of_class_1_BaseConverter_of_module_django__utils__baseconv( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_convert_of_class_1_BaseConverter_of_module_django__utils__baseconv( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_number, PyObject *_python_par_from_digits, PyObject *_python_par_to_digits, PyObject *_python_par_sign )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_number( _python_str_plain_number, _python_par_number );
    PyObjectLocalParameterVariableNoDel _python_var_from_digits( _python_str_plain_from_digits, _python_par_from_digits );
    PyObjectLocalParameterVariableNoDel _python_var_to_digits( _python_str_plain_to_digits, _python_par_to_digits );
    PyObjectLocalParameterVariableNoDel _python_var_sign( _python_str_plain_sign, _python_par_sign );
    PyObjectLocalVariable _python_var_neg( _python_str_plain_neg );
    PyObjectLocalVariable _python_var_x( _python_str_plain_x );
    PyObjectLocalVariable _python_var_digit( _python_str_plain_digit );
    PyObjectLocalVariable _python_var_res( _python_str_plain_res );

    // Actual function code.
    static PyFrameObject *frame_function_5_convert_of_class_1_BaseConverter_of_module_django__utils__baseconv = NULL;

    if ( isFrameUnusable( frame_function_5_convert_of_class_1_BaseConverter_of_module_django__utils__baseconv ) )
    {
        if ( frame_function_5_convert_of_class_1_BaseConverter_of_module_django__utils__baseconv )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_convert_of_class_1_BaseConverter_of_module_django__utils__baseconv" );
#endif
            Py_DECREF( frame_function_5_convert_of_class_1_BaseConverter_of_module_django__utils__baseconv );
        }

        frame_function_5_convert_of_class_1_BaseConverter_of_module_django__utils__baseconv = MAKE_FRAME( _codeobj_258d487674ff04c9ed06d9a7d4fc203d, _module_django__utils__baseconv );
    }

    FrameGuard frame_guard( frame_function_5_convert_of_class_1_BaseConverter_of_module_django__utils__baseconv );
    try
    {
        assert( Py_REFCNT( frame_function_5_convert_of_class_1_BaseConverter_of_module_django__utils__baseconv ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 72 );
        {
            PyObjectTempKeeper1 cmp1;
            if ( ( cmp1.assign( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( TO_STR( _python_var_number.asObject() ) ).asObject(), _python_int_0, 0 ) ), RICH_COMPARE_BOOL_EQ( cmp1.asObject0(), _python_var_sign.asObject() ) ) )
        {
            frame_guard.setLineNumber( 73 );
            _python_var_number.assign1( LOOKUP_INDEX_SLICE( PyObjectTemporary( TO_STR( _python_var_number.asObject() ) ).asObject(), 1, PY_SSIZE_T_MAX ) );
            _python_var_neg.assign0( _python_int_pos_1 );
        }
        else
        {
            _python_var_neg.assign0( _python_int_0 );
        }
        }
        _python_var_x.assign0( _python_int_0 );
        {
            frame_guard.setLineNumber( 80 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( PyObjectTemporary( TO_STR( _python_var_number.asObject() ) ).asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 80 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_digit.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 81 );
                {
                    PyObjectTempKeeper1 call5;
                    PyObjectTempKeeper0 op3;
                    PyObjectTempKeeper1 op7;
                    _python_var_x.assign1( ( op7.assign( ( op3.assign( _python_var_x.asObject() ), BINARY_OPERATION_MUL( op3.asObject0(), PyObjectTemporary( BUILTIN_LEN( _python_var_from_digits.asObject() ) ).asObject() ) ) ), BINARY_OPERATION_ADD( op7.asObject0(), PyObjectTemporary( ( call5.assign( LOOKUP_ATTRIBUTE( _python_var_from_digits.asObject(), _python_str_plain_index ) ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_digit.asObject() ) ) ).asObject() ) ) );
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 84 );
        if ( RICH_COMPARE_BOOL_EQ( _python_var_x.asObject(), _python_int_0 ) )
        {
            frame_guard.setLineNumber( 85 );
            _python_var_res.assign1( LOOKUP_SUBSCRIPT_CONST( _python_var_to_digits.asObject(), _python_int_0, 0 ) );
        }
        else
        {
            _python_var_res.assign0( _python_str_empty );
            frame_guard.setLineNumber( 88 );
            while( true )
            {
                frame_guard.setLineNumber( 88 );
                if ( (!( RICH_COMPARE_BOOL_GT( _python_var_x.asObject(), _python_int_0 ) )) )
                {
                    frame_guard.setLineNumber( 88 );
                    break;
                }
                frame_guard.setLineNumber( 89 );
                {
                    PyObjectTempKeeper0 op9;
                    _python_var_digit.assign1( ( op9.assign( _python_var_x.asObject() ), BINARY_OPERATION_REMAINDER( op9.asObject0(), PyObjectTemporary( BUILTIN_LEN( _python_var_to_digits.asObject() ) ).asObject() ) ) );
                }
                frame_guard.setLineNumber( 90 );
                {
                    PyObjectTempKeeper1 op13;
                    PyObjectTempKeeper0 subscr11;
                    _python_var_res.assign1( ( op13.assign( ( subscr11.assign( _python_var_to_digits.asObject() ), LOOKUP_SUBSCRIPT( subscr11.asObject0(), _python_var_digit.asObject() ) ) ), BINARY_OPERATION_ADD( op13.asObject0(), _python_var_res.asObject() ) ) );
                }
                frame_guard.setLineNumber( 91 );
                {
                    PyObjectTempKeeper0 op15;
                    _python_var_x.assign1( TO_INT( PyObjectTemporary( ( op15.assign( _python_var_x.asObject() ), BINARY_OPERATION( PyNumber_FloorDivide, op15.asObject0(), PyObjectTemporary( BUILTIN_LEN( _python_var_to_digits.asObject() ) ).asObject() ) ) ).asObject() ) );
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 92 );
        {
            PyObjectTempKeeper0 make_tuple17;
            return ( make_tuple17.assign( _python_var_neg.asObject() ), MAKE_TUPLE2( make_tuple17.asObject0(), _python_var_res.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_sign.updateLocalsDict( _python_var_to_digits.updateLocalsDict( _python_var_from_digits.updateLocalsDict( _python_var_number.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_res.updateLocalsDict( _python_var_digit.updateLocalsDict( _python_var_x.updateLocalsDict( _python_var_neg.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_5_convert_of_class_1_BaseConverter_of_module_django__utils__baseconv )
        {
           Py_DECREF( frame_function_5_convert_of_class_1_BaseConverter_of_module_django__utils__baseconv );
           frame_function_5_convert_of_class_1_BaseConverter_of_module_django__utils__baseconv = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5_convert_of_class_1_BaseConverter_of_module_django__utils__baseconv( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_number = NULL;
    PyObject *_python_par_from_digits = NULL;
    PyObject *_python_par_to_digits = NULL;
    PyObject *_python_par_sign = NULL;
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
                PyErr_Format( PyExc_TypeError, "convert() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "convert() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_number == key )
            {
                if (unlikely( _python_par_number ))
                {
                    PyErr_Format( PyExc_TypeError, "convert() got multiple values for keyword argument 'number'" );
                    goto error_exit;
                }

                _python_par_number = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_from_digits == key )
            {
                if (unlikely( _python_par_from_digits ))
                {
                    PyErr_Format( PyExc_TypeError, "convert() got multiple values for keyword argument 'from_digits'" );
                    goto error_exit;
                }

                _python_par_from_digits = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_to_digits == key )
            {
                if (unlikely( _python_par_to_digits ))
                {
                    PyErr_Format( PyExc_TypeError, "convert() got multiple values for keyword argument 'to_digits'" );
                    goto error_exit;
                }

                _python_par_to_digits = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_sign == key )
            {
                if (unlikely( _python_par_sign ))
                {
                    PyErr_Format( PyExc_TypeError, "convert() got multiple values for keyword argument 'sign'" );
                    goto error_exit;
                }

                _python_par_sign = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "convert() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_number, key ) )
            {
                if (unlikely( _python_par_number ))
                {
                    PyErr_Format( PyExc_TypeError, "convert() got multiple values for keyword argument 'number'" );
                    goto error_exit;
                }

                _python_par_number = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_from_digits, key ) )
            {
                if (unlikely( _python_par_from_digits ))
                {
                    PyErr_Format( PyExc_TypeError, "convert() got multiple values for keyword argument 'from_digits'" );
                    goto error_exit;
                }

                _python_par_from_digits = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_to_digits, key ) )
            {
                if (unlikely( _python_par_to_digits ))
                {
                    PyErr_Format( PyExc_TypeError, "convert() got multiple values for keyword argument 'to_digits'" );
                    goto error_exit;
                }

                _python_par_to_digits = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_sign, key ) )
            {
                if (unlikely( _python_par_sign ))
                {
                    PyErr_Format( PyExc_TypeError, "convert() got multiple values for keyword argument 'sign'" );
                    goto error_exit;
                }

                _python_par_sign = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "convert() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "convert() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "convert() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "convert() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "convert() takes exactly %d arguments (%zd given)", 5, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 5 == 5 )
            {
                PyErr_Format( PyExc_TypeError, "convert() takes exactly %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "convert() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
#else
            if ( 5 == 5 )
            {
                PyErr_Format( PyExc_TypeError, "convert() takes %d positional arguments but %zd were given", 5, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "convert() takes at most %d positional arguments (%zd given)", 5, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 5 ))
    {
        if ( 5 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "convert() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "convert() takes exactly %d non-keyword arguments (%zd given)", 5, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 5 == 5 )
                {
                    PyErr_Format( PyExc_TypeError, "convert() takes exactly %d arguments (%zd given)", 5, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "convert() takes at least %d arguments (%zd given)", 5, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 5 ? args_given : 5;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "convert() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_number != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "convert() got multiple values for keyword argument 'number'" );
             goto error_exit;
         }

        _python_par_number = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_from_digits != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "convert() got multiple values for keyword argument 'from_digits'" );
             goto error_exit;
         }

        _python_par_from_digits = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_to_digits != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "convert() got multiple values for keyword argument 'to_digits'" );
             goto error_exit;
         }

        _python_par_to_digits = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_sign != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "convert() got multiple values for keyword argument 'sign'" );
             goto error_exit;
         }

        _python_par_sign = INCREASE_REFCOUNT( args[ 4 ] );
    }


    return impl_function_5_convert_of_class_1_BaseConverter_of_module_django__utils__baseconv( self, _python_par_self, _python_par_number, _python_par_from_digits, _python_par_to_digits, _python_par_sign );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_number );
    Py_XDECREF( _python_par_from_digits );
    Py_XDECREF( _python_par_to_digits );
    Py_XDECREF( _python_par_sign );

    return NULL;
}

static PyObject *dparse_function_5_convert_of_class_1_BaseConverter_of_module_django__utils__baseconv( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 5)
    {
        return impl_function_5_convert_of_class_1_BaseConverter_of_module_django__utils__baseconv( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_5_convert_of_class_1_BaseConverter_of_module_django__utils__baseconv( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_BaseConverter_of_module_django__utils__baseconv(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_1_BaseConverter_of_module_django__utils__baseconv,
        dparse_function_1___init___of_class_1_BaseConverter_of_module_django__utils__baseconv,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ce3d378bdd1dc84071a89a34666dc864,
        INCREASE_REFCOUNT( _python_tuple_str_chr_45_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__baseconv,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2___repr___of_class_1_BaseConverter_of_module_django__utils__baseconv(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2___repr___of_class_1_BaseConverter_of_module_django__utils__baseconv,
        dparse_function_2___repr___of_class_1_BaseConverter_of_module_django__utils__baseconv,
        _python_str_plain___repr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_4296d37f80322a34698d7dfebd42131b,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__baseconv,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_encode_of_class_1_BaseConverter_of_module_django__utils__baseconv(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_encode_of_class_1_BaseConverter_of_module_django__utils__baseconv,
        dparse_function_3_encode_of_class_1_BaseConverter_of_module_django__utils__baseconv,
        _python_str_plain_encode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_984ed975f527f5b270c3388d4854b5f1,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__baseconv,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_decode_of_class_1_BaseConverter_of_module_django__utils__baseconv(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_decode_of_class_1_BaseConverter_of_module_django__utils__baseconv,
        dparse_function_4_decode_of_class_1_BaseConverter_of_module_django__utils__baseconv,
        _python_str_plain_decode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ab10d7d09007ebb3d3934eecb1a2cd96,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__baseconv,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_convert_of_class_1_BaseConverter_of_module_django__utils__baseconv(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_convert_of_class_1_BaseConverter_of_module_django__utils__baseconv,
        dparse_function_5_convert_of_class_1_BaseConverter_of_module_django__utils__baseconv,
        _python_str_plain_convert,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_258d487674ff04c9ed06d9a7d4fc203d,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__baseconv,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.utils.baseconv",   /* m_name */
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

MOD_INIT_DECL( django__utils__baseconv )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__utils__baseconv );
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

    // puts( "in initdjango__utils__baseconv" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__utils__baseconv = Py_InitModule4(
        "django.utils.baseconv",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__utils__baseconv = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__utils__baseconv = (PyDictObject *)((PyModuleObject *)_module_django__utils__baseconv)->md_dict;

    assertObject( _module_django__utils__baseconv );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_69786a21098d3b9e9abfd1729281d7ad, _module_django__utils__baseconv );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__utils__baseconv );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__utils__baseconv != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__utils__baseconv, (Nuitka_StringObject *)_python_str_plain___doc__, _python_str_digest_fca51da74d43acf0fffd2a3970da2ad7 );
    UPDATE_STRING_DICT0( _moduledict_django__utils__baseconv, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_baf3d157e866c978c4c05e969b98740d );
    UPDATE_STRING_DICT0( _moduledict_django__utils__baseconv, (Nuitka_StringObject *)_python_str_plain_BASE2_ALPHABET, _python_str_plain_01 );
    UPDATE_STRING_DICT0( _moduledict_django__utils__baseconv, (Nuitka_StringObject *)_python_str_plain_BASE16_ALPHABET, _python_str_plain_0123456789ABCDEF );
    UPDATE_STRING_DICT0( _moduledict_django__utils__baseconv, (Nuitka_StringObject *)_python_str_plain_BASE56_ALPHABET, _python_str_digest_11f1909baaea32067335b63fb1d1e492 );
    UPDATE_STRING_DICT0( _moduledict_django__utils__baseconv, (Nuitka_StringObject *)_python_str_plain_BASE36_ALPHABET, _python_str_plain_0123456789abcdefghijklmnopqrstuvwxyz );
    UPDATE_STRING_DICT0( _moduledict_django__utils__baseconv, (Nuitka_StringObject *)_python_str_plain_BASE62_ALPHABET, _python_str_digest_46cf18a9b447991b450cad3facf5937e );
    PyFrameObject *frame_module_django__utils__baseconv = MAKE_FRAME( _codeobj_46e0ca600da2ec2aa8317eed0339bffd, _module_django__utils__baseconv );

    FrameGuard frame_guard( frame_module_django__utils__baseconv );
    try
    {
        assert( Py_REFCNT( frame_module_django__utils__baseconv ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 45 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__baseconv, (Nuitka_StringObject *)_python_str_plain_BASE64_ALPHABET, BINARY_OPERATION_ADD( _mvar_django__utils__baseconv_BASE62_ALPHABET.asObject0(), _python_str_digest_43c7f08c8084d703e949ecd3fad7a5b5 ) );
        {
            frame_guard.setLineNumber( 47 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_1_BaseConverter_of_module_django__utils__baseconv(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__utils__baseconv___metaclass__.isInitialized( false ) ? _mvar_django__utils__baseconv___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_BaseConverter, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__utils__baseconv, (Nuitka_StringObject *)_python_str_plain_BaseConverter, _python_tmp_class.asObject() );
        }
        frame_guard.setLineNumber( 94 );
        {
            PyObjectTempKeeper0 call5;
            UPDATE_STRING_DICT1( _moduledict_django__utils__baseconv, (Nuitka_StringObject *)_python_str_plain_base2, ( call5.assign( _mvar_django__utils__baseconv_BaseConverter.asObject0() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _mvar_django__utils__baseconv_BASE2_ALPHABET.asObject0() ) ) );
        }
        frame_guard.setLineNumber( 95 );
        {
            PyObjectTempKeeper0 call7;
            UPDATE_STRING_DICT1( _moduledict_django__utils__baseconv, (Nuitka_StringObject *)_python_str_plain_base16, ( call7.assign( _mvar_django__utils__baseconv_BaseConverter.asObject0() ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _mvar_django__utils__baseconv_BASE16_ALPHABET.asObject0() ) ) );
        }
        frame_guard.setLineNumber( 96 );
        {
            PyObjectTempKeeper0 call9;
            UPDATE_STRING_DICT1( _moduledict_django__utils__baseconv, (Nuitka_StringObject *)_python_str_plain_base36, ( call9.assign( _mvar_django__utils__baseconv_BaseConverter.asObject0() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _mvar_django__utils__baseconv_BASE36_ALPHABET.asObject0() ) ) );
        }
        frame_guard.setLineNumber( 97 );
        {
            PyObjectTempKeeper0 call11;
            UPDATE_STRING_DICT1( _moduledict_django__utils__baseconv, (Nuitka_StringObject *)_python_str_plain_base56, ( call11.assign( _mvar_django__utils__baseconv_BaseConverter.asObject0() ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), _mvar_django__utils__baseconv_BASE56_ALPHABET.asObject0() ) ) );
        }
        frame_guard.setLineNumber( 98 );
        {
            PyObjectTempKeeper0 call13;
            UPDATE_STRING_DICT1( _moduledict_django__utils__baseconv, (Nuitka_StringObject *)_python_str_plain_base62, ( call13.assign( _mvar_django__utils__baseconv_BaseConverter.asObject0() ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), _mvar_django__utils__baseconv_BASE62_ALPHABET.asObject0() ) ) );
        }
        frame_guard.setLineNumber( 99 );
        {
            PyObjectTempKeeper0 call15;
            UPDATE_STRING_DICT1( _moduledict_django__utils__baseconv, (Nuitka_StringObject *)_python_str_plain_base64, ( call15.assign( _mvar_django__utils__baseconv_BaseConverter.asObject0() ), CALL_FUNCTION( call15.asObject0(), PyObjectTemporary( MAKE_TUPLE1( _mvar_django__utils__baseconv_BASE64_ALPHABET.asObject0() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_2a11a8a17c5c329407f2abe004b48b61 ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__utils__baseconv)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }

   return MOD_RETURN_VALUE( _module_django__utils__baseconv );
}
