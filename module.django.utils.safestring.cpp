// Generated code for Python source for module 'django.utils.safestring'
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

// The _module_django__utils__safestring is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__utils__safestring;
PyDictObject *_moduledict_django__utils__safestring;

// The module level variables.
static PyObjectGlobalVariable_django__utils__safestring _mvar_django__utils__safestring_EscapeBytes( &_module_django__utils__safestring, &_python_str_plain_EscapeBytes );
static PyObjectGlobalVariable_django__utils__safestring _mvar_django__utils__safestring_EscapeData( &_module_django__utils__safestring, &_python_str_plain_EscapeData );
static PyObjectGlobalVariable_django__utils__safestring _mvar_django__utils__safestring_EscapeText( &_module_django__utils__safestring, &_python_str_plain_EscapeText );
static PyObjectGlobalVariable_django__utils__safestring _mvar_django__utils__safestring_Promise( &_module_django__utils__safestring, &_python_str_plain_Promise );
static PyObjectGlobalVariable_django__utils__safestring _mvar_django__utils__safestring_SafeBytes( &_module_django__utils__safestring, &_python_str_plain_SafeBytes );
static PyObjectGlobalVariable_django__utils__safestring _mvar_django__utils__safestring_SafeData( &_module_django__utils__safestring, &_python_str_plain_SafeData );
static PyObjectGlobalVariable_django__utils__safestring _mvar_django__utils__safestring_SafeString( &_module_django__utils__safestring, &_python_str_plain_SafeString );
static PyObjectGlobalVariable_django__utils__safestring _mvar_django__utils__safestring_SafeText( &_module_django__utils__safestring, &_python_str_plain_SafeText );
static PyObjectGlobalVariable_django__utils__safestring _mvar_django__utils__safestring___metaclass__( &_module_django__utils__safestring, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__utils__safestring _mvar_django__utils__safestring_allow_lazy( &_module_django__utils__safestring, &_python_str_plain_allow_lazy );
static PyObjectGlobalVariable_django__utils__safestring _mvar_django__utils__safestring_curry( &_module_django__utils__safestring, &_python_str_plain_curry );
static PyObjectGlobalVariable_django__utils__safestring _mvar_django__utils__safestring_six( &_module_django__utils__safestring, &_python_str_plain_six );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_EscapeData_of_module_django__utils__safestring(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_2_EscapeBytes_of_module_django__utils__safestring(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_3_EscapeText_of_module_django__utils__safestring(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_4_SafeData_of_module_django__utils__safestring(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_5_SafeBytes_of_module_django__utils__safestring(  );


NUITKA_LOCAL_MODULE PyObject *impl_class_6_SafeText_of_module_django__utils__safestring(  );


static PyObject *MAKE_FUNCTION_function_1___add___of_class_5_SafeBytes_of_module_django__utils__safestring(  );


static PyObject *MAKE_FUNCTION_function_1___add___of_class_6_SafeText_of_module_django__utils__safestring(  );


static PyObject *MAKE_FUNCTION_function_2__proxy_method_of_class_5_SafeBytes_of_module_django__utils__safestring(  );


static PyObject *MAKE_FUNCTION_function_2__proxy_method_of_class_6_SafeText_of_module_django__utils__safestring(  );


static PyObject *MAKE_FUNCTION_function_7_mark_safe_of_module_django__utils__safestring(  );


static PyObject *MAKE_FUNCTION_function_8_mark_for_escaping_of_module_django__utils__safestring(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_EscapeData_of_module_django__utils__safestring(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_safestring );
    return _python_var___module__.updateLocalsDict( PyDict_New() );
}


NUITKA_LOCAL_MODULE PyObject *impl_class_2_EscapeBytes_of_module_django__utils__safestring(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___new__( _python_str_plain___new__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_safestring );
    _python_var___doc__.assign0( _python_str_digest_b64b75ae6473d84243ff5b6ea27f22bf );
    static PyFrameObject *frame_class_2_EscapeBytes_of_module_django__utils__safestring = NULL;

    if ( isFrameUnusable( frame_class_2_EscapeBytes_of_module_django__utils__safestring ) )
    {
        if ( frame_class_2_EscapeBytes_of_module_django__utils__safestring )
        {
#if _DEBUG_REFRAME
            puts( "reframe for class_2_EscapeBytes_of_module_django__utils__safestring" );
#endif
            Py_DECREF( frame_class_2_EscapeBytes_of_module_django__utils__safestring );
        }

        frame_class_2_EscapeBytes_of_module_django__utils__safestring = MAKE_FRAME( _codeobj_0ff6083c6064bcd222e0603dc29e0ab1, _module_django__utils__safestring );
    }

    FrameGuard frame_guard( frame_class_2_EscapeBytes_of_module_django__utils__safestring );
    try
    {
        assert( Py_REFCNT( frame_class_2_EscapeBytes_of_module_django__utils__safestring ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 17 );
        {
            PyObjectTempKeeper0 call1;
            _python_var___new__.assign1( ( call1.assign( _mvar_django__utils__safestring_allow_lazy.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( LOOKUP_BUILTIN( _python_str_plain_bytes ), _python_str_plain___new__ ) ).asObject(), LOOKUP_BUILTIN( _python_str_plain_bytes ) ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var___new__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_class_2_EscapeBytes_of_module_django__utils__safestring )
        {
           Py_DECREF( frame_class_2_EscapeBytes_of_module_django__utils__safestring );
           frame_class_2_EscapeBytes_of_module_django__utils__safestring = NULL;
        }

        throw;
    }
    return _python_var___new__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) );
}


NUITKA_LOCAL_MODULE PyObject *impl_class_3_EscapeText_of_module_django__utils__safestring(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___new__( _python_str_plain___new__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_safestring );
    _python_var___doc__.assign0( _python_str_digest_7aeb3f61219d01e012597b188856b76b );
    static PyFrameObject *frame_class_3_EscapeText_of_module_django__utils__safestring = NULL;

    if ( isFrameUnusable( frame_class_3_EscapeText_of_module_django__utils__safestring ) )
    {
        if ( frame_class_3_EscapeText_of_module_django__utils__safestring )
        {
#if _DEBUG_REFRAME
            puts( "reframe for class_3_EscapeText_of_module_django__utils__safestring" );
#endif
            Py_DECREF( frame_class_3_EscapeText_of_module_django__utils__safestring );
        }

        frame_class_3_EscapeText_of_module_django__utils__safestring = MAKE_FRAME( _codeobj_dacd0b1bebc8fb8f577cb757d2c45743, _module_django__utils__safestring );
    }

    FrameGuard frame_guard( frame_class_3_EscapeText_of_module_django__utils__safestring );
    try
    {
        assert( Py_REFCNT( frame_class_3_EscapeText_of_module_django__utils__safestring ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 23 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper1 call2;
            _python_var___new__.assign1( ( call1.assign( _mvar_django__utils__safestring_allow_lazy.asObject0() ), call2.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__safestring_six.asObject0(), _python_str_plain_text_type ) ).asObject(), _python_str_plain___new__ ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__safestring_six.asObject0(), _python_str_plain_text_type ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var___new__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_class_3_EscapeText_of_module_django__utils__safestring )
        {
           Py_DECREF( frame_class_3_EscapeText_of_module_django__utils__safestring );
           frame_class_3_EscapeText_of_module_django__utils__safestring = NULL;
        }

        throw;
    }
    return _python_var___new__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) );
}


NUITKA_LOCAL_MODULE PyObject *impl_class_4_SafeData_of_module_django__utils__safestring(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_safestring );
    return _python_var___module__.updateLocalsDict( PyDict_New() );
}


NUITKA_LOCAL_MODULE PyObject *impl_class_5_SafeBytes_of_module_django__utils__safestring(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___new__( _python_str_plain___new__ );
    PyObjectLocalVariable _python_var___add__( _python_str_plain___add__ );
    PyObjectLocalVariable _python_var__proxy_method( _python_str_plain__proxy_method );
    PyObjectLocalVariable _python_var_decode( _python_str_plain_decode );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_safestring );
    _python_var___doc__.assign0( _python_str_digest_f53b5751d54df067445e6ab38acd1cd0 );
    static PyFrameObject *frame_class_5_SafeBytes_of_module_django__utils__safestring = NULL;

    if ( isFrameUnusable( frame_class_5_SafeBytes_of_module_django__utils__safestring ) )
    {
        if ( frame_class_5_SafeBytes_of_module_django__utils__safestring )
        {
#if _DEBUG_REFRAME
            puts( "reframe for class_5_SafeBytes_of_module_django__utils__safestring" );
#endif
            Py_DECREF( frame_class_5_SafeBytes_of_module_django__utils__safestring );
        }

        frame_class_5_SafeBytes_of_module_django__utils__safestring = MAKE_FRAME( _codeobj_8993f6af5e5b0a2ab6ec6802fea94f20, _module_django__utils__safestring );
    }

    FrameGuard frame_guard( frame_class_5_SafeBytes_of_module_django__utils__safestring );
    try
    {
        assert( Py_REFCNT( frame_class_5_SafeBytes_of_module_django__utils__safestring ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 40 );
        {
            PyObjectTempKeeper0 call1;
            _python_var___new__.assign1( ( call1.assign( _mvar_django__utils__safestring_allow_lazy.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( LOOKUP_BUILTIN( _python_str_plain_bytes ), _python_str_plain___new__ ) ).asObject(), LOOKUP_BUILTIN( _python_str_plain_bytes ) ) ) );
        }
        _python_var___add__.assign1( MAKE_FUNCTION_function_1___add___of_class_5_SafeBytes_of_module_django__utils__safestring(  ) );
        _python_var__proxy_method.assign1( MAKE_FUNCTION_function_2__proxy_method_of_class_5_SafeBytes_of_module_django__utils__safestring(  ) );
        frame_guard.setLineNumber( 67 );
        {
            PyObjectTempKeeper0 call4;
            PyObjectTempKeeper1 call5;
            _python_var_decode.assign1( ( call4.assign( _mvar_django__utils__safestring_curry.asObject0() ), call5.assign( MAKE_TUPLE1( _python_var__proxy_method.asObject() ) ), CALL_FUNCTION( call4.asObject0(), call5.asObject0(), PyObjectTemporary( MAKE_DICT1( PyObjectTemporary( LOOKUP_ATTRIBUTE( LOOKUP_BUILTIN( _python_str_plain_bytes ), _python_str_plain_decode ) ).asObject(), _python_str_plain_method ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_decode.updateLocalsDict( _python_var__proxy_method.updateLocalsDict( _python_var___add__.updateLocalsDict( _python_var___new__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_class_5_SafeBytes_of_module_django__utils__safestring )
        {
           Py_DECREF( frame_class_5_SafeBytes_of_module_django__utils__safestring );
           frame_class_5_SafeBytes_of_module_django__utils__safestring = NULL;
        }

        throw;
    }
    return _python_var_decode.updateLocalsDict( _python_var__proxy_method.updateLocalsDict( _python_var___add__.updateLocalsDict( _python_var___new__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) );
}


static PyObject *impl_function_1___add___of_class_5_SafeBytes_of_module_django__utils__safestring( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_rhs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_rhs( _python_str_plain_rhs, _python_par_rhs );
    PyObjectLocalVariable _python_var_t( _python_str_plain_t );

    // Actual function code.
    static PyFrameObject *frame_function_1___add___of_class_5_SafeBytes_of_module_django__utils__safestring = NULL;

    if ( isFrameUnusable( frame_function_1___add___of_class_5_SafeBytes_of_module_django__utils__safestring ) )
    {
        if ( frame_function_1___add___of_class_5_SafeBytes_of_module_django__utils__safestring )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___add___of_class_5_SafeBytes_of_module_django__utils__safestring" );
#endif
            Py_DECREF( frame_function_1___add___of_class_5_SafeBytes_of_module_django__utils__safestring );
        }

        frame_function_1___add___of_class_5_SafeBytes_of_module_django__utils__safestring = MAKE_FRAME( _codeobj_df7d8de9edce3035b51804f4975455fe, _module_django__utils__safestring );
    }

    FrameGuard frame_guard( frame_function_1___add___of_class_5_SafeBytes_of_module_django__utils__safestring );
    try
    {
        assert( Py_REFCNT( frame_function_1___add___of_class_5_SafeBytes_of_module_django__utils__safestring ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 47 );
        {
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper0 super1;
            _python_var_t.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super1.assign( _mvar_django__utils__safestring_SafeBytes.asObject0() ), BUILTIN_SUPER( super1.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain___add__ ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_rhs.asObject() ) ) );
        }
        frame_guard.setLineNumber( 48 );
        {
            PyObjectTempKeeper0 isinstance11;
            if ( ( isinstance11.assign( _python_var_rhs.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance11.asObject0(), _mvar_django__utils__safestring_SafeText.asObject0() ) ) )
        {
            frame_guard.setLineNumber( 49 );
            {
                PyObjectTempKeeper0 call5;
                return ( call5.assign( _mvar_django__utils__safestring_SafeText.asObject0() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_t.asObject() ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 50 );
            {
                PyObjectTempKeeper0 isinstance9;
                if ( ( isinstance9.assign( _python_var_rhs.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance9.asObject0(), _mvar_django__utils__safestring_SafeBytes.asObject0() ) ) )
            {
                frame_guard.setLineNumber( 51 );
                {
                    PyObjectTempKeeper0 call7;
                    return ( call7.assign( _mvar_django__utils__safestring_SafeBytes.asObject0() ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _python_var_t.asObject() ) );
                }
            }
            }
        }
        }
        frame_guard.setLineNumber( 52 );
        return _python_var_t.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_rhs.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_t.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___add___of_class_5_SafeBytes_of_module_django__utils__safestring )
        {
           Py_DECREF( frame_function_1___add___of_class_5_SafeBytes_of_module_django__utils__safestring );
           frame_function_1___add___of_class_5_SafeBytes_of_module_django__utils__safestring = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1___add___of_class_5_SafeBytes_of_module_django__utils__safestring( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_rhs = NULL;
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
                PyErr_Format( PyExc_TypeError, "__add__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__add__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_rhs == key )
            {
                if (unlikely( _python_par_rhs ))
                {
                    PyErr_Format( PyExc_TypeError, "__add__() got multiple values for keyword argument 'rhs'" );
                    goto error_exit;
                }

                _python_par_rhs = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "__add__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_rhs, key ) )
            {
                if (unlikely( _python_par_rhs ))
                {
                    PyErr_Format( PyExc_TypeError, "__add__() got multiple values for keyword argument 'rhs'" );
                    goto error_exit;
                }

                _python_par_rhs = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__add__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__add__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__add__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__add__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__add__() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__add__() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__add__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__add__() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__add__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__add__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__add__() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "__add__() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__add__() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__add__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_rhs != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__add__() got multiple values for keyword argument 'rhs'" );
             goto error_exit;
         }

        _python_par_rhs = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_1___add___of_class_5_SafeBytes_of_module_django__utils__safestring( self, _python_par_self, _python_par_rhs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_rhs );

    return NULL;
}

static PyObject *dparse_function_1___add___of_class_5_SafeBytes_of_module_django__utils__safestring( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1___add___of_class_5_SafeBytes_of_module_django__utils__safestring( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___add___of_class_5_SafeBytes_of_module_django__utils__safestring( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2__proxy_method_of_class_5_SafeBytes_of_module_django__utils__safestring( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );
    PyObjectLocalVariable _python_var_method( _python_str_plain_method );
    PyObjectLocalVariable _python_var_data( _python_str_plain_data );

    // Actual function code.
    static PyFrameObject *frame_function_2__proxy_method_of_class_5_SafeBytes_of_module_django__utils__safestring = NULL;

    if ( isFrameUnusable( frame_function_2__proxy_method_of_class_5_SafeBytes_of_module_django__utils__safestring ) )
    {
        if ( frame_function_2__proxy_method_of_class_5_SafeBytes_of_module_django__utils__safestring )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2__proxy_method_of_class_5_SafeBytes_of_module_django__utils__safestring" );
#endif
            Py_DECREF( frame_function_2__proxy_method_of_class_5_SafeBytes_of_module_django__utils__safestring );
        }

        frame_function_2__proxy_method_of_class_5_SafeBytes_of_module_django__utils__safestring = MAKE_FRAME( _codeobj_44c3493688254aaa4f48a8fd4fe28979, _module_django__utils__safestring );
    }

    FrameGuard frame_guard( frame_function_2__proxy_method_of_class_5_SafeBytes_of_module_django__utils__safestring );
    try
    {
        assert( Py_REFCNT( frame_function_2__proxy_method_of_class_5_SafeBytes_of_module_django__utils__safestring ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 60 );
        _python_var_method.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_kwargs.asObject(), _python_str_plain_pop ) ).asObject(), _python_str_plain_method ) );
        frame_guard.setLineNumber( 61 );
        {
            PyObjectTempKeeper0 call_tmp1;
            PyObjectTempKeeper1 call_tmp2;
            PyObjectTempKeeper0 call_tmp3;
            _python_var_data.assign1( ( call_tmp1.assign( _python_var_method.asObject() ), call_tmp2.assign( MAKE_TUPLE1( _python_var_self.asObject() ) ), call_tmp3.assign( _python_var_args.asObject() ), impl_function_8_complex_call_helper_pos_star_list_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), call_tmp3.asObject(), _python_var_kwargs.asObject1() ) ) );
        }
        frame_guard.setLineNumber( 62 );
        if ( BUILTIN_ISINSTANCE_BOOL( _python_var_data.asObject(), LOOKUP_BUILTIN( _python_str_plain_bytes ) ) )
        {
            frame_guard.setLineNumber( 63 );
            {
                PyObjectTempKeeper0 call5;
                return ( call5.assign( _mvar_django__utils__safestring_SafeBytes.asObject0() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_data.asObject() ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 65 );
            {
                PyObjectTempKeeper0 call7;
                return ( call7.assign( _mvar_django__utils__safestring_SafeText.asObject0() ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _python_var_data.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_data.updateLocalsDict( _python_var_method.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_2__proxy_method_of_class_5_SafeBytes_of_module_django__utils__safestring )
        {
           Py_DECREF( frame_function_2__proxy_method_of_class_5_SafeBytes_of_module_django__utils__safestring );
           frame_function_2__proxy_method_of_class_5_SafeBytes_of_module_django__utils__safestring = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2__proxy_method_of_class_5_SafeBytes_of_module_django__utils__safestring( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
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
                        PyErr_Format( PyExc_TypeError, "_proxy_method() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_proxy_method() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "_proxy_method() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "_proxy_method() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_proxy_method() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "_proxy_method() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "_proxy_method() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
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


    return impl_function_2__proxy_method_of_class_5_SafeBytes_of_module_django__utils__safestring( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_2__proxy_method_of_class_5_SafeBytes_of_module_django__utils__safestring( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_2__proxy_method_of_class_5_SafeBytes_of_module_django__utils__safestring( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_2__proxy_method_of_class_5_SafeBytes_of_module_django__utils__safestring( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_class_6_SafeText_of_module_django__utils__safestring(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___new__( _python_str_plain___new__ );
    PyObjectLocalVariable _python_var___add__( _python_str_plain___add__ );
    PyObjectLocalVariable _python_var__proxy_method( _python_str_plain__proxy_method );
    PyObjectLocalVariable _python_var_encode( _python_str_plain_encode );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_safestring );
    _python_var___doc__.assign0( _python_str_digest_a22223cafe9bcecd48b287d98b37fbca );
    static PyFrameObject *frame_class_6_SafeText_of_module_django__utils__safestring = NULL;

    if ( isFrameUnusable( frame_class_6_SafeText_of_module_django__utils__safestring ) )
    {
        if ( frame_class_6_SafeText_of_module_django__utils__safestring )
        {
#if _DEBUG_REFRAME
            puts( "reframe for class_6_SafeText_of_module_django__utils__safestring" );
#endif
            Py_DECREF( frame_class_6_SafeText_of_module_django__utils__safestring );
        }

        frame_class_6_SafeText_of_module_django__utils__safestring = MAKE_FRAME( _codeobj_3536763d68c41eba4ae1ba265bc848e5, _module_django__utils__safestring );
    }

    FrameGuard frame_guard( frame_class_6_SafeText_of_module_django__utils__safestring );
    try
    {
        assert( Py_REFCNT( frame_class_6_SafeText_of_module_django__utils__safestring ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 74 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper1 call2;
            _python_var___new__.assign1( ( call1.assign( _mvar_django__utils__safestring_allow_lazy.asObject0() ), call2.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__safestring_six.asObject0(), _python_str_plain_text_type ) ).asObject(), _python_str_plain___new__ ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__safestring_six.asObject0(), _python_str_plain_text_type ) ).asObject() ) ) );
        }
        _python_var___add__.assign1( MAKE_FUNCTION_function_1___add___of_class_6_SafeText_of_module_django__utils__safestring(  ) );
        _python_var__proxy_method.assign1( MAKE_FUNCTION_function_2__proxy_method_of_class_6_SafeText_of_module_django__utils__safestring(  ) );
        frame_guard.setLineNumber( 99 );
        {
            PyObjectTempKeeper0 call4;
            PyObjectTempKeeper1 call5;
            _python_var_encode.assign1( ( call4.assign( _mvar_django__utils__safestring_curry.asObject0() ), call5.assign( MAKE_TUPLE1( _python_var__proxy_method.asObject() ) ), CALL_FUNCTION( call4.asObject0(), call5.asObject0(), PyObjectTemporary( MAKE_DICT1( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__safestring_six.asObject0(), _python_str_plain_text_type ) ).asObject(), _python_str_plain_encode ) ).asObject(), _python_str_plain_method ) ).asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_encode.updateLocalsDict( _python_var__proxy_method.updateLocalsDict( _python_var___add__.updateLocalsDict( _python_var___new__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_class_6_SafeText_of_module_django__utils__safestring )
        {
           Py_DECREF( frame_class_6_SafeText_of_module_django__utils__safestring );
           frame_class_6_SafeText_of_module_django__utils__safestring = NULL;
        }

        throw;
    }
    return _python_var_encode.updateLocalsDict( _python_var__proxy_method.updateLocalsDict( _python_var___add__.updateLocalsDict( _python_var___new__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) );
}


static PyObject *impl_function_1___add___of_class_6_SafeText_of_module_django__utils__safestring( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_rhs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_rhs( _python_str_plain_rhs, _python_par_rhs );
    PyObjectLocalVariable _python_var_t( _python_str_plain_t );

    // Actual function code.
    static PyFrameObject *frame_function_1___add___of_class_6_SafeText_of_module_django__utils__safestring = NULL;

    if ( isFrameUnusable( frame_function_1___add___of_class_6_SafeText_of_module_django__utils__safestring ) )
    {
        if ( frame_function_1___add___of_class_6_SafeText_of_module_django__utils__safestring )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___add___of_class_6_SafeText_of_module_django__utils__safestring" );
#endif
            Py_DECREF( frame_function_1___add___of_class_6_SafeText_of_module_django__utils__safestring );
        }

        frame_function_1___add___of_class_6_SafeText_of_module_django__utils__safestring = MAKE_FRAME( _codeobj_2a652c5fed003c3d42e837ff21e73f7f, _module_django__utils__safestring );
    }

    FrameGuard frame_guard( frame_function_1___add___of_class_6_SafeText_of_module_django__utils__safestring );
    try
    {
        assert( Py_REFCNT( frame_function_1___add___of_class_6_SafeText_of_module_django__utils__safestring ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 81 );
        {
            PyObjectTempKeeper1 call3;
            PyObjectTempKeeper0 super1;
            _python_var_t.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( super1.assign( _mvar_django__utils__safestring_SafeText.asObject0() ), BUILTIN_SUPER( super1.asObject0(), _python_var_self.asObject() ) ) ).asObject(), _python_str_plain___add__ ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_rhs.asObject() ) ) );
        }
        frame_guard.setLineNumber( 82 );
        {
            PyObjectTempKeeper0 isinstance7;
            if ( ( isinstance7.assign( _python_var_rhs.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance7.asObject0(), _mvar_django__utils__safestring_SafeData.asObject0() ) ) )
        {
            frame_guard.setLineNumber( 83 );
            {
                PyObjectTempKeeper0 call5;
                return ( call5.assign( _mvar_django__utils__safestring_SafeText.asObject0() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_t.asObject() ) );
            }
        }
        }
        frame_guard.setLineNumber( 84 );
        return _python_var_t.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_rhs.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_t.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___add___of_class_6_SafeText_of_module_django__utils__safestring )
        {
           Py_DECREF( frame_function_1___add___of_class_6_SafeText_of_module_django__utils__safestring );
           frame_function_1___add___of_class_6_SafeText_of_module_django__utils__safestring = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1___add___of_class_6_SafeText_of_module_django__utils__safestring( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_rhs = NULL;
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
                PyErr_Format( PyExc_TypeError, "__add__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__add__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_rhs == key )
            {
                if (unlikely( _python_par_rhs ))
                {
                    PyErr_Format( PyExc_TypeError, "__add__() got multiple values for keyword argument 'rhs'" );
                    goto error_exit;
                }

                _python_par_rhs = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "__add__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_rhs, key ) )
            {
                if (unlikely( _python_par_rhs ))
                {
                    PyErr_Format( PyExc_TypeError, "__add__() got multiple values for keyword argument 'rhs'" );
                    goto error_exit;
                }

                _python_par_rhs = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__add__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__add__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__add__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__add__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__add__() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__add__() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__add__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__add__() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__add__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__add__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__add__() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "__add__() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__add__() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__add__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_rhs != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__add__() got multiple values for keyword argument 'rhs'" );
             goto error_exit;
         }

        _python_par_rhs = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_1___add___of_class_6_SafeText_of_module_django__utils__safestring( self, _python_par_self, _python_par_rhs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_rhs );

    return NULL;
}

static PyObject *dparse_function_1___add___of_class_6_SafeText_of_module_django__utils__safestring( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1___add___of_class_6_SafeText_of_module_django__utils__safestring( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___add___of_class_6_SafeText_of_module_django__utils__safestring( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2__proxy_method_of_class_6_SafeText_of_module_django__utils__safestring( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_args, PyObject *_python_par_kwargs )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwargs( _python_str_plain_kwargs, _python_par_kwargs );
    PyObjectLocalVariable _python_var_method( _python_str_plain_method );
    PyObjectLocalVariable _python_var_data( _python_str_plain_data );

    // Actual function code.
    static PyFrameObject *frame_function_2__proxy_method_of_class_6_SafeText_of_module_django__utils__safestring = NULL;

    if ( isFrameUnusable( frame_function_2__proxy_method_of_class_6_SafeText_of_module_django__utils__safestring ) )
    {
        if ( frame_function_2__proxy_method_of_class_6_SafeText_of_module_django__utils__safestring )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2__proxy_method_of_class_6_SafeText_of_module_django__utils__safestring" );
#endif
            Py_DECREF( frame_function_2__proxy_method_of_class_6_SafeText_of_module_django__utils__safestring );
        }

        frame_function_2__proxy_method_of_class_6_SafeText_of_module_django__utils__safestring = MAKE_FRAME( _codeobj_2f9b8544a8f1ef1700125fead30e58a8, _module_django__utils__safestring );
    }

    FrameGuard frame_guard( frame_function_2__proxy_method_of_class_6_SafeText_of_module_django__utils__safestring );
    try
    {
        assert( Py_REFCNT( frame_function_2__proxy_method_of_class_6_SafeText_of_module_django__utils__safestring ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 92 );
        _python_var_method.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_kwargs.asObject(), _python_str_plain_pop ) ).asObject(), _python_str_plain_method ) );
        frame_guard.setLineNumber( 93 );
        {
            PyObjectTempKeeper0 call_tmp1;
            PyObjectTempKeeper1 call_tmp2;
            PyObjectTempKeeper0 call_tmp3;
            _python_var_data.assign1( ( call_tmp1.assign( _python_var_method.asObject() ), call_tmp2.assign( MAKE_TUPLE1( _python_var_self.asObject() ) ), call_tmp3.assign( _python_var_args.asObject() ), impl_function_8_complex_call_helper_pos_star_list_star_dict_of_module___internal__( call_tmp1.asObject(), call_tmp2.asObject(), call_tmp3.asObject(), _python_var_kwargs.asObject1() ) ) );
        }
        frame_guard.setLineNumber( 94 );
        if ( BUILTIN_ISINSTANCE_BOOL( _python_var_data.asObject(), LOOKUP_BUILTIN( _python_str_plain_bytes ) ) )
        {
            frame_guard.setLineNumber( 95 );
            {
                PyObjectTempKeeper0 call5;
                return ( call5.assign( _mvar_django__utils__safestring_SafeBytes.asObject0() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_data.asObject() ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 97 );
            {
                PyObjectTempKeeper0 call7;
                return ( call7.assign( _mvar_django__utils__safestring_SafeText.asObject0() ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _python_var_data.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwargs.updateLocalsDict( _python_var_args.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_data.updateLocalsDict( _python_var_method.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_2__proxy_method_of_class_6_SafeText_of_module_django__utils__safestring )
        {
           Py_DECREF( frame_function_2__proxy_method_of_class_6_SafeText_of_module_django__utils__safestring );
           frame_function_2__proxy_method_of_class_6_SafeText_of_module_django__utils__safestring = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2__proxy_method_of_class_6_SafeText_of_module_django__utils__safestring( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_args = NULL;
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
                        PyErr_Format( PyExc_TypeError, "_proxy_method() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "_proxy_method() keywords must be strings" );
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
                        PyErr_Format( PyExc_TypeError, "_proxy_method() keywords must be strings" );
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

    // Check if argument self was given as keyword argument
    if ( kw_size > 0 )
    {
        PyObject *kw_arg_value = PyDict_GetItem( _python_par_kwargs, _python_str_plain_self );

        if ( kw_arg_value != NULL )
        {
            assert( _python_par_self == NULL );

            _python_par_self = INCREASE_REFCOUNT( kw_arg_value );
            PyDict_DelItem( _python_par_kwargs, _python_str_plain_self );

            kw_found += 1;
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "_proxy_method() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_proxy_method() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "_proxy_method() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
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
             PyErr_Format( PyExc_TypeError, "_proxy_method() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
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


    return impl_function_2__proxy_method_of_class_6_SafeText_of_module_django__utils__safestring( self, _python_par_self, _python_par_args, _python_par_kwargs );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwargs );

    return NULL;
}

static PyObject *dparse_function_2__proxy_method_of_class_6_SafeText_of_module_django__utils__safestring( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_2__proxy_method_of_class_6_SafeText_of_module_django__utils__safestring( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_2__proxy_method_of_class_6_SafeText_of_module_django__utils__safestring( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_7_mark_safe_of_module_django__utils__safestring( Nuitka_FunctionObject *self, PyObject *_python_par_s )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_s( _python_str_plain_s, _python_par_s );

    // Actual function code.
    static PyFrameObject *frame_function_7_mark_safe_of_module_django__utils__safestring = NULL;

    if ( isFrameUnusable( frame_function_7_mark_safe_of_module_django__utils__safestring ) )
    {
        if ( frame_function_7_mark_safe_of_module_django__utils__safestring )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_7_mark_safe_of_module_django__utils__safestring" );
#endif
            Py_DECREF( frame_function_7_mark_safe_of_module_django__utils__safestring );
        }

        frame_function_7_mark_safe_of_module_django__utils__safestring = MAKE_FRAME( _codeobj_f198fb2583466a2af4dc0d2a7e65769d, _module_django__utils__safestring );
    }

    FrameGuard frame_guard( frame_function_7_mark_safe_of_module_django__utils__safestring );
    try
    {
        assert( Py_REFCNT( frame_function_7_mark_safe_of_module_django__utils__safestring ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 115 );
        {
            PyObjectTempKeeper0 isinstance1;
            if ( ( isinstance1.assign( _python_var_s.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance1.asObject0(), _mvar_django__utils__safestring_SafeData.asObject0() ) ) )
        {
            frame_guard.setLineNumber( 116 );
            return _python_var_s.asObject1();
        }
        }
        frame_guard.setLineNumber( 117 );
        {
            PyObjectTempKeeper0 isinstance5;
            if ( ( BUILTIN_ISINSTANCE_BOOL( _python_var_s.asObject(), LOOKUP_BUILTIN( _python_str_plain_bytes ) ) || ( ( isinstance5.assign( _python_var_s.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance5.asObject0(), _mvar_django__utils__safestring_Promise.asObject0() ) ) && CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_s.asObject(), _python_str_plain__delegate_bytes ) ).asObject() ) ) ) )
        {
            frame_guard.setLineNumber( 118 );
            {
                PyObjectTempKeeper0 call3;
                return ( call3.assign( _mvar_django__utils__safestring_SafeBytes.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), _python_var_s.asObject() ) );
            }
        }
        }
        frame_guard.setLineNumber( 119 );
        {
            PyObjectTempKeeper0 isinstance11;
            PyObjectTempKeeper1 make_tuple9;
            if ( ( isinstance11.assign( _python_var_s.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance11.asObject0(), PyObjectTemporary( ( make_tuple9.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__safestring_six.asObject0(), _python_str_plain_text_type ) ), MAKE_TUPLE2( make_tuple9.asObject0(), _mvar_django__utils__safestring_Promise.asObject0() ) ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 120 );
            {
                PyObjectTempKeeper0 call7;
                return ( call7.assign( _mvar_django__utils__safestring_SafeText.asObject0() ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), _python_var_s.asObject() ) );
            }
        }
        }
        frame_guard.setLineNumber( 121 );
        {
            PyObjectTempKeeper0 call13;
            return ( call13.assign( _mvar_django__utils__safestring_SafeString.asObject0() ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), PyObjectTemporary( TO_STR( _python_var_s.asObject() ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_s.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_7_mark_safe_of_module_django__utils__safestring )
        {
           Py_DECREF( frame_function_7_mark_safe_of_module_django__utils__safestring );
           frame_function_7_mark_safe_of_module_django__utils__safestring = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_7_mark_safe_of_module_django__utils__safestring( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
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
                PyErr_Format( PyExc_TypeError, "mark_safe() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_s == key )
            {
                if (unlikely( _python_par_s ))
                {
                    PyErr_Format( PyExc_TypeError, "mark_safe() got multiple values for keyword argument 's'" );
                    goto error_exit;
                }

                _python_par_s = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_s, key ) )
            {
                if (unlikely( _python_par_s ))
                {
                    PyErr_Format( PyExc_TypeError, "mark_safe() got multiple values for keyword argument 's'" );
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
                   "mark_safe() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "mark_safe() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "mark_safe() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "mark_safe() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "mark_safe() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "mark_safe() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "mark_safe() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "mark_safe() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "mark_safe() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "mark_safe() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "mark_safe() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "mark_safe() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "mark_safe() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_s != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "mark_safe() got multiple values for keyword argument 's'" );
             goto error_exit;
         }

        _python_par_s = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_7_mark_safe_of_module_django__utils__safestring( self, _python_par_s );

error_exit:;

    Py_XDECREF( _python_par_s );

    return NULL;
}

static PyObject *dparse_function_7_mark_safe_of_module_django__utils__safestring( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_7_mark_safe_of_module_django__utils__safestring( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_7_mark_safe_of_module_django__utils__safestring( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_8_mark_for_escaping_of_module_django__utils__safestring( Nuitka_FunctionObject *self, PyObject *_python_par_s )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_s( _python_str_plain_s, _python_par_s );

    // Actual function code.
    static PyFrameObject *frame_function_8_mark_for_escaping_of_module_django__utils__safestring = NULL;

    if ( isFrameUnusable( frame_function_8_mark_for_escaping_of_module_django__utils__safestring ) )
    {
        if ( frame_function_8_mark_for_escaping_of_module_django__utils__safestring )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_8_mark_for_escaping_of_module_django__utils__safestring" );
#endif
            Py_DECREF( frame_function_8_mark_for_escaping_of_module_django__utils__safestring );
        }

        frame_function_8_mark_for_escaping_of_module_django__utils__safestring = MAKE_FRAME( _codeobj_0a6d57b19db4f05e6584a4c5036017b1, _module_django__utils__safestring );
    }

    FrameGuard frame_guard( frame_function_8_mark_for_escaping_of_module_django__utils__safestring );
    try
    {
        assert( Py_REFCNT( frame_function_8_mark_for_escaping_of_module_django__utils__safestring ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 131 );
        {
            PyObjectTempKeeper0 isinstance3;
            PyObjectTempKeeper0 make_tuple1;
            if ( ( isinstance3.assign( _python_var_s.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance3.asObject0(), PyObjectTemporary( ( make_tuple1.assign( _mvar_django__utils__safestring_SafeData.asObject0() ), MAKE_TUPLE2( make_tuple1.asObject0(), _mvar_django__utils__safestring_EscapeData.asObject0() ) ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 132 );
            return _python_var_s.asObject1();
        }
        }
        frame_guard.setLineNumber( 133 );
        {
            PyObjectTempKeeper0 isinstance7;
            if ( ( BUILTIN_ISINSTANCE_BOOL( _python_var_s.asObject(), LOOKUP_BUILTIN( _python_str_plain_bytes ) ) || ( ( isinstance7.assign( _python_var_s.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance7.asObject0(), _mvar_django__utils__safestring_Promise.asObject0() ) ) && CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_s.asObject(), _python_str_plain__delegate_bytes ) ).asObject() ) ) ) )
        {
            frame_guard.setLineNumber( 134 );
            {
                PyObjectTempKeeper0 call5;
                return ( call5.assign( _mvar_django__utils__safestring_EscapeBytes.asObject0() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_var_s.asObject() ) );
            }
        }
        }
        frame_guard.setLineNumber( 135 );
        {
            PyObjectTempKeeper0 isinstance13;
            PyObjectTempKeeper1 make_tuple11;
            if ( ( isinstance13.assign( _python_var_s.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance13.asObject0(), PyObjectTemporary( ( make_tuple11.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__safestring_six.asObject0(), _python_str_plain_text_type ) ), MAKE_TUPLE2( make_tuple11.asObject0(), _mvar_django__utils__safestring_Promise.asObject0() ) ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 136 );
            {
                PyObjectTempKeeper0 call9;
                return ( call9.assign( _mvar_django__utils__safestring_EscapeText.asObject0() ), CALL_FUNCTION_WITH_ARGS( call9.asObject0(), _python_var_s.asObject() ) );
            }
        }
        }
        frame_guard.setLineNumber( 137 );
        {
            PyObjectTempKeeper0 call15;
            return ( call15.assign( _mvar_django__utils__safestring_EscapeBytes.asObject0() ), CALL_FUNCTION_WITH_ARGS( call15.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( LOOKUP_BUILTIN( _python_str_plain_bytes ), _python_var_s.asObject() ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_s.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_8_mark_for_escaping_of_module_django__utils__safestring )
        {
           Py_DECREF( frame_function_8_mark_for_escaping_of_module_django__utils__safestring );
           frame_function_8_mark_for_escaping_of_module_django__utils__safestring = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_8_mark_for_escaping_of_module_django__utils__safestring( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
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
                PyErr_Format( PyExc_TypeError, "mark_for_escaping() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_s == key )
            {
                if (unlikely( _python_par_s ))
                {
                    PyErr_Format( PyExc_TypeError, "mark_for_escaping() got multiple values for keyword argument 's'" );
                    goto error_exit;
                }

                _python_par_s = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_s, key ) )
            {
                if (unlikely( _python_par_s ))
                {
                    PyErr_Format( PyExc_TypeError, "mark_for_escaping() got multiple values for keyword argument 's'" );
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
                   "mark_for_escaping() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "mark_for_escaping() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "mark_for_escaping() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "mark_for_escaping() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "mark_for_escaping() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "mark_for_escaping() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "mark_for_escaping() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "mark_for_escaping() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "mark_for_escaping() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "mark_for_escaping() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "mark_for_escaping() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "mark_for_escaping() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "mark_for_escaping() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_s != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "mark_for_escaping() got multiple values for keyword argument 's'" );
             goto error_exit;
         }

        _python_par_s = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_8_mark_for_escaping_of_module_django__utils__safestring( self, _python_par_s );

error_exit:;

    Py_XDECREF( _python_par_s );

    return NULL;
}

static PyObject *dparse_function_8_mark_for_escaping_of_module_django__utils__safestring( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_8_mark_for_escaping_of_module_django__utils__safestring( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_8_mark_for_escaping_of_module_django__utils__safestring( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1___add___of_class_5_SafeBytes_of_module_django__utils__safestring(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___add___of_class_5_SafeBytes_of_module_django__utils__safestring,
        dparse_function_1___add___of_class_5_SafeBytes_of_module_django__utils__safestring,
        _python_str_plain___add__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_df7d8de9edce3035b51804f4975455fe,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__safestring,
        _python_str_digest_b6d4c0aec5661e9feea5e03ec7b944ed
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___add___of_class_6_SafeText_of_module_django__utils__safestring(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___add___of_class_6_SafeText_of_module_django__utils__safestring,
        dparse_function_1___add___of_class_6_SafeText_of_module_django__utils__safestring,
        _python_str_plain___add__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_2a652c5fed003c3d42e837ff21e73f7f,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__safestring,
        _python_str_digest_3e2d32a0f4e3e9f32a63e6f5a61665a0
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2__proxy_method_of_class_5_SafeBytes_of_module_django__utils__safestring(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2__proxy_method_of_class_5_SafeBytes_of_module_django__utils__safestring,
        dparse_function_2__proxy_method_of_class_5_SafeBytes_of_module_django__utils__safestring,
        _python_str_plain__proxy_method,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_44c3493688254aaa4f48a8fd4fe28979,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__safestring,
        _python_str_digest_acffba98f9d13be087b96978f2d41ee0
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2__proxy_method_of_class_6_SafeText_of_module_django__utils__safestring(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2__proxy_method_of_class_6_SafeText_of_module_django__utils__safestring,
        dparse_function_2__proxy_method_of_class_6_SafeText_of_module_django__utils__safestring,
        _python_str_plain__proxy_method,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_2f9b8544a8f1ef1700125fead30e58a8,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__safestring,
        _python_str_digest_acffba98f9d13be087b96978f2d41ee0
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_7_mark_safe_of_module_django__utils__safestring(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_7_mark_safe_of_module_django__utils__safestring,
        dparse_function_7_mark_safe_of_module_django__utils__safestring,
        _python_str_plain_mark_safe,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_f198fb2583466a2af4dc0d2a7e65769d,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__safestring,
        _python_str_digest_2dbd8e6064169ba57e2ea686ba53b1f9
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_8_mark_for_escaping_of_module_django__utils__safestring(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_8_mark_for_escaping_of_module_django__utils__safestring,
        dparse_function_8_mark_for_escaping_of_module_django__utils__safestring,
        _python_str_plain_mark_for_escaping,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_0a6d57b19db4f05e6584a4c5036017b1,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__safestring,
        _python_str_digest_cdb90cedfd16366d935d302ff65bf46a
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.utils.safestring",   /* m_name */
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

MOD_INIT_DECL( django__utils__safestring )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__utils__safestring );
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

    // puts( "in initdjango__utils__safestring" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__utils__safestring = Py_InitModule4(
        "django.utils.safestring",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__utils__safestring = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__utils__safestring = (PyDictObject *)((PyModuleObject *)_module_django__utils__safestring)->md_dict;

    assertObject( _module_django__utils__safestring );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_33422e2c698707541621bf8ab31ea849, _module_django__utils__safestring );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__utils__safestring );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__utils__safestring != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__utils__safestring, (Nuitka_StringObject *)_python_str_plain___doc__, _python_str_digest_9b0dc49ff0dc907998d916b58dd09d75 );
    UPDATE_STRING_DICT0( _moduledict_django__utils__safestring, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_2ba731f29164db305891634bd8a6b646 );
    PyFrameObject *frame_module_django__utils__safestring = MAKE_FRAME( _codeobj_cf28eb0a84bf19e93a02ecced5f986ac, _module_django__utils__safestring );

    FrameGuard frame_guard( frame_module_django__utils__safestring );
    try
    {
        assert( Py_REFCNT( frame_module_django__utils__safestring ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 7 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__safestring, (Nuitka_StringObject *)_python_str_plain_curry, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_17c58b9ed63e22a2fe75ba31286ba1f7, ((PyModuleObject *)_module_django__utils__safestring)->md_dict, ((PyModuleObject *)_module_django__utils__safestring)->md_dict, _python_list_str_plain_curry_str_plain_Promise_str_plain_allow_lazy_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_curry ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__safestring, (Nuitka_StringObject *)_python_str_plain_Promise, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_17c58b9ed63e22a2fe75ba31286ba1f7, ((PyModuleObject *)_module_django__utils__safestring)->md_dict, ((PyModuleObject *)_module_django__utils__safestring)->md_dict, _python_list_str_plain_curry_str_plain_Promise_str_plain_allow_lazy_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_Promise ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__safestring, (Nuitka_StringObject *)_python_str_plain_allow_lazy, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_17c58b9ed63e22a2fe75ba31286ba1f7, ((PyModuleObject *)_module_django__utils__safestring)->md_dict, ((PyModuleObject *)_module_django__utils__safestring)->md_dict, _python_list_str_plain_curry_str_plain_Promise_str_plain_allow_lazy_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_allow_lazy ) );
        frame_guard.setLineNumber( 8 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__safestring, (Nuitka_StringObject *)_python_str_plain_six, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__utils__safestring)->md_dict, ((PyModuleObject *)_module_django__utils__safestring)->md_dict, _python_list_str_plain_six_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_six ) );
        {
            frame_guard.setLineNumber( 10 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_1_EscapeData_of_module_django__utils__safestring(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__utils__safestring___metaclass__.isInitialized( false ) ? _mvar_django__utils__safestring___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper0 call3;
                _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_EscapeData, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__utils__safestring, (Nuitka_StringObject *)_python_str_plain_EscapeData, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 13 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE2( LOOKUP_BUILTIN( _python_str_plain_bytes ), _mvar_django__utils__safestring_EscapeData.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_2_EscapeBytes_of_module_django__utils__safestring(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__utils__safestring___metaclass__.isInitialized( false ) ? _mvar_django__utils__safestring___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call5;
                PyObjectTempKeeper0 call7;
                _tmp_python_tmp_class = ( call5.assign( _python_tmp_metaclass.asObject() ), call7.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), _python_str_plain_EscapeBytes, call7.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__utils__safestring, (Nuitka_StringObject *)_python_str_plain_EscapeBytes, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 19 );
            PyObject *_tmp_python_tmp_bases;
            {
                PyObjectTempKeeper1 make_tuple9;
                _tmp_python_tmp_bases = ( make_tuple9.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__safestring_six.asObject0(), _python_str_plain_text_type ) ), MAKE_TUPLE2( make_tuple9.asObject0(), _mvar_django__utils__safestring_EscapeData.asObject0() ) );
            }
            PyObjectTemporary _python_tmp_bases( _tmp_python_tmp_bases );
            PyObjectTemporary _python_tmp_class_dict( impl_class_3_EscapeText_of_module_django__utils__safestring(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__utils__safestring___metaclass__.isInitialized( false ) ? _mvar_django__utils__safestring___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call11;
                PyObjectTempKeeper0 call13;
                _tmp_python_tmp_class = ( call11.assign( _python_tmp_metaclass.asObject() ), call13.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call11.asObject0(), _python_str_plain_EscapeText, call13.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__utils__safestring, (Nuitka_StringObject *)_python_str_plain_EscapeText, _python_tmp_class.asObject() );
        }
        frame_guard.setLineNumber( 25 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__safestring_six.asObject0(), _python_str_plain_PY3 ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 26 );
            UPDATE_STRING_DICT0( _moduledict_django__utils__safestring, (Nuitka_StringObject *)_python_str_plain_EscapeString, _mvar_django__utils__safestring_EscapeText.asObject0() );
        }
        else
        {
            frame_guard.setLineNumber( 28 );
            UPDATE_STRING_DICT0( _moduledict_django__utils__safestring, (Nuitka_StringObject *)_python_str_plain_EscapeString, _mvar_django__utils__safestring_EscapeBytes.asObject0() );
            frame_guard.setLineNumber( 30 );
            UPDATE_STRING_DICT0( _moduledict_django__utils__safestring, (Nuitka_StringObject *)_python_str_plain_EscapeUnicode, _mvar_django__utils__safestring_EscapeText.asObject0() );
        }
        {
            frame_guard.setLineNumber( 32 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_4_SafeData_of_module_django__utils__safestring(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__utils__safestring___metaclass__.isInitialized( false ) ? _mvar_django__utils__safestring___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call15;
                PyObjectTempKeeper0 call17;
                _tmp_python_tmp_class = ( call15.assign( _python_tmp_metaclass.asObject() ), call17.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call15.asObject0(), _python_str_plain_SafeData, call17.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__utils__safestring, (Nuitka_StringObject *)_python_str_plain_SafeData, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 35 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE2( LOOKUP_BUILTIN( _python_str_plain_bytes ), _mvar_django__utils__safestring_SafeData.asObject0() ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_5_SafeBytes_of_module_django__utils__safestring(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__utils__safestring___metaclass__.isInitialized( false ) ? _mvar_django__utils__safestring___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call19;
                PyObjectTempKeeper0 call21;
                _tmp_python_tmp_class = ( call19.assign( _python_tmp_metaclass.asObject() ), call21.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call19.asObject0(), _python_str_plain_SafeBytes, call21.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__utils__safestring, (Nuitka_StringObject *)_python_str_plain_SafeBytes, _python_tmp_class.asObject() );
        }
        {
            frame_guard.setLineNumber( 69 );
            PyObject *_tmp_python_tmp_bases;
            {
                PyObjectTempKeeper1 make_tuple23;
                _tmp_python_tmp_bases = ( make_tuple23.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__safestring_six.asObject0(), _python_str_plain_text_type ) ), MAKE_TUPLE2( make_tuple23.asObject0(), _mvar_django__utils__safestring_SafeData.asObject0() ) );
            }
            PyObjectTemporary _python_tmp_bases( _tmp_python_tmp_bases );
            PyObjectTemporary _python_tmp_class_dict( impl_class_6_SafeText_of_module_django__utils__safestring(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__utils__safestring___metaclass__.isInitialized( false ) ? _mvar_django__utils__safestring___metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call25;
                PyObjectTempKeeper0 call27;
                _tmp_python_tmp_class = ( call25.assign( _python_tmp_metaclass.asObject() ), call27.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call25.asObject0(), _python_str_plain_SafeText, call27.asObject0(), _python_tmp_class_dict.asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict_django__utils__safestring, (Nuitka_StringObject *)_python_str_plain_SafeText, _python_tmp_class.asObject() );
        }
        frame_guard.setLineNumber( 101 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__safestring_six.asObject0(), _python_str_plain_PY3 ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 102 );
            UPDATE_STRING_DICT0( _moduledict_django__utils__safestring, (Nuitka_StringObject *)_python_str_plain_SafeString, _mvar_django__utils__safestring_SafeText.asObject0() );
        }
        else
        {
            frame_guard.setLineNumber( 104 );
            UPDATE_STRING_DICT0( _moduledict_django__utils__safestring, (Nuitka_StringObject *)_python_str_plain_SafeString, _mvar_django__utils__safestring_SafeBytes.asObject0() );
            frame_guard.setLineNumber( 106 );
            UPDATE_STRING_DICT0( _moduledict_django__utils__safestring, (Nuitka_StringObject *)_python_str_plain_SafeUnicode, _mvar_django__utils__safestring_SafeText.asObject0() );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__utils__safestring)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__utils__safestring, (Nuitka_StringObject *)_python_str_plain_mark_safe, MAKE_FUNCTION_function_7_mark_safe_of_module_django__utils__safestring(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__safestring, (Nuitka_StringObject *)_python_str_plain_mark_for_escaping, MAKE_FUNCTION_function_8_mark_for_escaping_of_module_django__utils__safestring(  ) );

   return MOD_RETURN_VALUE( _module_django__utils__safestring );
}
