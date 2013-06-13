// Generated code for Python source for module 'django.utils.translation.trans_null'
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

// The _module_django__utils__translation__trans_null is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__utils__translation__trans_null;
PyDictObject *_moduledict_django__utils__translation__trans_null;

// The module level variables.
static PyObjectGlobalVariable_django__utils__translation__trans_null _mvar_django__utils__translation__trans_null_SafeData( &_module_django__utils__translation__trans_null, &_python_str_plain_SafeData );
static PyObjectGlobalVariable_django__utils__translation__trans_null _mvar_django__utils__translation__trans_null_TECHNICAL_ID_MAP( &_module_django__utils__translation__trans_null, &_python_str_plain_TECHNICAL_ID_MAP );
static PyObjectGlobalVariable_django__utils__translation__trans_null _mvar_django__utils__translation__trans_null_force_text( &_module_django__utils__translation__trans_null, &_python_str_plain_force_text );
static PyObjectGlobalVariable_django__utils__translation__trans_null _mvar_django__utils__translation__trans_null_gettext( &_module_django__utils__translation__trans_null, &_python_str_plain_gettext );
static PyObjectGlobalVariable_django__utils__translation__trans_null _mvar_django__utils__translation__trans_null_mark_safe( &_module_django__utils__translation__trans_null, &_python_str_plain_mark_safe );
static PyObjectGlobalVariable_django__utils__translation__trans_null _mvar_django__utils__translation__trans_null_ngettext( &_module_django__utils__translation__trans_null, &_python_str_plain_ngettext );
static PyObjectGlobalVariable_django__utils__translation__trans_null _mvar_django__utils__translation__trans_null_settings( &_module_django__utils__translation__trans_null, &_python_str_plain_settings );
static PyObjectGlobalVariable_django__utils__translation__trans_null _mvar_django__utils__translation__trans_null_ugettext( &_module_django__utils__translation__trans_null, &_python_str_plain_ugettext );
static PyObjectGlobalVariable_django__utils__translation__trans_null _mvar_django__utils__translation__trans_null_ungettext( &_module_django__utils__translation__trans_null, &_python_str_plain_ungettext );

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_10_gettext_of_module_django__utils__translation__trans_null(  );


static PyObject *MAKE_FUNCTION_function_11_ugettext_of_module_django__utils__translation__trans_null(  );


static PyObject *MAKE_FUNCTION_function_12_to_locale_of_module_django__utils__translation__trans_null(  );


static PyObject *MAKE_FUNCTION_function_13_get_language_from_request_of_module_django__utils__translation__trans_null(  );


static PyObject *MAKE_FUNCTION_function_14_get_language_from_path_of_module_django__utils__translation__trans_null(  );


static PyObject *MAKE_FUNCTION_function_1_ngettext_of_module_django__utils__translation__trans_null(  );


static PyObject *MAKE_FUNCTION_function_2_ungettext_of_module_django__utils__translation__trans_null(  );


static PyObject *MAKE_FUNCTION_function_3_pgettext_of_module_django__utils__translation__trans_null(  );


static PyObject *MAKE_FUNCTION_function_4_npgettext_of_module_django__utils__translation__trans_null(  );


static PyObject *MAKE_FUNCTION_lambda_5_lambda_of_module_django__utils__translation__trans_null(  );


static PyObject *MAKE_FUNCTION_lambda_6_lambda_of_module_django__utils__translation__trans_null(  );


static PyObject *MAKE_FUNCTION_lambda_7_lambda_of_module_django__utils__translation__trans_null(  );


static PyObject *MAKE_FUNCTION_lambda_8_lambda_of_module_django__utils__translation__trans_null(  );


static PyObject *MAKE_FUNCTION_lambda_9_lambda_of_module_django__utils__translation__trans_null(  );


// The module function definitions.
static PyObject *impl_function_1_ngettext_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject *_python_par_singular, PyObject *_python_par_plural, PyObject *_python_par_number )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_singular( _python_str_plain_singular, _python_par_singular );
    PyObjectLocalParameterVariableNoDel _python_var_plural( _python_str_plain_plural, _python_par_plural );
    PyObjectLocalParameterVariableNoDel _python_var_number( _python_str_plain_number, _python_par_number );

    // Actual function code.
    static PyFrameObject *frame_function_1_ngettext_of_module_django__utils__translation__trans_null = NULL;

    if ( isFrameUnusable( frame_function_1_ngettext_of_module_django__utils__translation__trans_null ) )
    {
        if ( frame_function_1_ngettext_of_module_django__utils__translation__trans_null )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_ngettext_of_module_django__utils__translation__trans_null" );
#endif
            Py_DECREF( frame_function_1_ngettext_of_module_django__utils__translation__trans_null );
        }

        frame_function_1_ngettext_of_module_django__utils__translation__trans_null = MAKE_FRAME( _codeobj_245c6a588125476c39786440192d7472, _module_django__utils__translation__trans_null );
    }

    FrameGuard frame_guard( frame_function_1_ngettext_of_module_django__utils__translation__trans_null );
    try
    {
        assert( Py_REFCNT( frame_function_1_ngettext_of_module_django__utils__translation__trans_null ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 10 );
        if ( RICH_COMPARE_BOOL_EQ( _python_var_number.asObject(), _python_int_pos_1 ) )
        {
            frame_guard.setLineNumber( 10 );
            return _python_var_singular.asObject1();
        }
        frame_guard.setLineNumber( 11 );
        return _python_var_plural.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_number.updateLocalsDict( _python_var_plural.updateLocalsDict( _python_var_singular.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_ngettext_of_module_django__utils__translation__trans_null )
        {
           Py_DECREF( frame_function_1_ngettext_of_module_django__utils__translation__trans_null );
           frame_function_1_ngettext_of_module_django__utils__translation__trans_null = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1_ngettext_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_singular = NULL;
    PyObject *_python_par_plural = NULL;
    PyObject *_python_par_number = NULL;
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
                PyErr_Format( PyExc_TypeError, "ngettext() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_singular == key )
            {
                if (unlikely( _python_par_singular ))
                {
                    PyErr_Format( PyExc_TypeError, "ngettext() got multiple values for keyword argument 'singular'" );
                    goto error_exit;
                }

                _python_par_singular = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_plural == key )
            {
                if (unlikely( _python_par_plural ))
                {
                    PyErr_Format( PyExc_TypeError, "ngettext() got multiple values for keyword argument 'plural'" );
                    goto error_exit;
                }

                _python_par_plural = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_number == key )
            {
                if (unlikely( _python_par_number ))
                {
                    PyErr_Format( PyExc_TypeError, "ngettext() got multiple values for keyword argument 'number'" );
                    goto error_exit;
                }

                _python_par_number = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_singular, key ) )
            {
                if (unlikely( _python_par_singular ))
                {
                    PyErr_Format( PyExc_TypeError, "ngettext() got multiple values for keyword argument 'singular'" );
                    goto error_exit;
                }

                _python_par_singular = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_plural, key ) )
            {
                if (unlikely( _python_par_plural ))
                {
                    PyErr_Format( PyExc_TypeError, "ngettext() got multiple values for keyword argument 'plural'" );
                    goto error_exit;
                }

                _python_par_plural = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_number, key ) )
            {
                if (unlikely( _python_par_number ))
                {
                    PyErr_Format( PyExc_TypeError, "ngettext() got multiple values for keyword argument 'number'" );
                    goto error_exit;
                }

                _python_par_number = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "ngettext() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "ngettext() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "ngettext() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "ngettext() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "ngettext() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "ngettext() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "ngettext() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "ngettext() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "ngettext() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "ngettext() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "ngettext() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "ngettext() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "ngettext() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 3 ? args_given : 3;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_singular != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "ngettext() got multiple values for keyword argument 'singular'" );
             goto error_exit;
         }

        _python_par_singular = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_plural != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "ngettext() got multiple values for keyword argument 'plural'" );
             goto error_exit;
         }

        _python_par_plural = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_number != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "ngettext() got multiple values for keyword argument 'number'" );
             goto error_exit;
         }

        _python_par_number = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_1_ngettext_of_module_django__utils__translation__trans_null( self, _python_par_singular, _python_par_plural, _python_par_number );

error_exit:;

    Py_XDECREF( _python_par_singular );
    Py_XDECREF( _python_par_plural );
    Py_XDECREF( _python_par_number );

    return NULL;
}

static PyObject *dparse_function_1_ngettext_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_1_ngettext_of_module_django__utils__translation__trans_null( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_ngettext_of_module_django__utils__translation__trans_null( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_ungettext_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject *_python_par_singular, PyObject *_python_par_plural, PyObject *_python_par_number )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_singular( _python_str_plain_singular, _python_par_singular );
    PyObjectLocalParameterVariableNoDel _python_var_plural( _python_str_plain_plural, _python_par_plural );
    PyObjectLocalParameterVariableNoDel _python_var_number( _python_str_plain_number, _python_par_number );

    // Actual function code.
    static PyFrameObject *frame_function_2_ungettext_of_module_django__utils__translation__trans_null = NULL;

    if ( isFrameUnusable( frame_function_2_ungettext_of_module_django__utils__translation__trans_null ) )
    {
        if ( frame_function_2_ungettext_of_module_django__utils__translation__trans_null )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_ungettext_of_module_django__utils__translation__trans_null" );
#endif
            Py_DECREF( frame_function_2_ungettext_of_module_django__utils__translation__trans_null );
        }

        frame_function_2_ungettext_of_module_django__utils__translation__trans_null = MAKE_FRAME( _codeobj_7feaa5e2638c14d58acc47e5d96fcedf, _module_django__utils__translation__trans_null );
    }

    FrameGuard frame_guard( frame_function_2_ungettext_of_module_django__utils__translation__trans_null );
    try
    {
        assert( Py_REFCNT( frame_function_2_ungettext_of_module_django__utils__translation__trans_null ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 15 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper0 call2;
            PyObjectTempKeeper0 call3;
            PyObjectTempKeeper0 call5;
            return ( call5.assign( _mvar_django__utils__translation__trans_null_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call5.asObject0(), PyObjectTemporary( ( call1.assign( _mvar_django__utils__translation__trans_null_ngettext.asObject0() ), call2.assign( _python_var_singular.asObject() ), call3.assign( _python_var_plural.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), call3.asObject0(), _python_var_number.asObject() ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_number.updateLocalsDict( _python_var_plural.updateLocalsDict( _python_var_singular.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_ungettext_of_module_django__utils__translation__trans_null )
        {
           Py_DECREF( frame_function_2_ungettext_of_module_django__utils__translation__trans_null );
           frame_function_2_ungettext_of_module_django__utils__translation__trans_null = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_ungettext_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_singular = NULL;
    PyObject *_python_par_plural = NULL;
    PyObject *_python_par_number = NULL;
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
                PyErr_Format( PyExc_TypeError, "ungettext() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_singular == key )
            {
                if (unlikely( _python_par_singular ))
                {
                    PyErr_Format( PyExc_TypeError, "ungettext() got multiple values for keyword argument 'singular'" );
                    goto error_exit;
                }

                _python_par_singular = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_plural == key )
            {
                if (unlikely( _python_par_plural ))
                {
                    PyErr_Format( PyExc_TypeError, "ungettext() got multiple values for keyword argument 'plural'" );
                    goto error_exit;
                }

                _python_par_plural = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_number == key )
            {
                if (unlikely( _python_par_number ))
                {
                    PyErr_Format( PyExc_TypeError, "ungettext() got multiple values for keyword argument 'number'" );
                    goto error_exit;
                }

                _python_par_number = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_singular, key ) )
            {
                if (unlikely( _python_par_singular ))
                {
                    PyErr_Format( PyExc_TypeError, "ungettext() got multiple values for keyword argument 'singular'" );
                    goto error_exit;
                }

                _python_par_singular = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_plural, key ) )
            {
                if (unlikely( _python_par_plural ))
                {
                    PyErr_Format( PyExc_TypeError, "ungettext() got multiple values for keyword argument 'plural'" );
                    goto error_exit;
                }

                _python_par_plural = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_number, key ) )
            {
                if (unlikely( _python_par_number ))
                {
                    PyErr_Format( PyExc_TypeError, "ungettext() got multiple values for keyword argument 'number'" );
                    goto error_exit;
                }

                _python_par_number = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "ungettext() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "ungettext() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "ungettext() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "ungettext() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "ungettext() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "ungettext() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "ungettext() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "ungettext() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "ungettext() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "ungettext() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "ungettext() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "ungettext() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "ungettext() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 3 ? args_given : 3;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_singular != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "ungettext() got multiple values for keyword argument 'singular'" );
             goto error_exit;
         }

        _python_par_singular = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_plural != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "ungettext() got multiple values for keyword argument 'plural'" );
             goto error_exit;
         }

        _python_par_plural = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_number != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "ungettext() got multiple values for keyword argument 'number'" );
             goto error_exit;
         }

        _python_par_number = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_2_ungettext_of_module_django__utils__translation__trans_null( self, _python_par_singular, _python_par_plural, _python_par_number );

error_exit:;

    Py_XDECREF( _python_par_singular );
    Py_XDECREF( _python_par_plural );
    Py_XDECREF( _python_par_number );

    return NULL;
}

static PyObject *dparse_function_2_ungettext_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_2_ungettext_of_module_django__utils__translation__trans_null( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_ungettext_of_module_django__utils__translation__trans_null( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_pgettext_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject *_python_par_context, PyObject *_python_par_message )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_context( _python_str_plain_context, _python_par_context );
    PyObjectLocalParameterVariableNoDel _python_var_message( _python_str_plain_message, _python_par_message );

    // Actual function code.
    static PyFrameObject *frame_function_3_pgettext_of_module_django__utils__translation__trans_null = NULL;

    if ( isFrameUnusable( frame_function_3_pgettext_of_module_django__utils__translation__trans_null ) )
    {
        if ( frame_function_3_pgettext_of_module_django__utils__translation__trans_null )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_pgettext_of_module_django__utils__translation__trans_null" );
#endif
            Py_DECREF( frame_function_3_pgettext_of_module_django__utils__translation__trans_null );
        }

        frame_function_3_pgettext_of_module_django__utils__translation__trans_null = MAKE_FRAME( _codeobj_b0f9b4b9fefed19e3ada5f76a88a7dc1, _module_django__utils__translation__trans_null );
    }

    FrameGuard frame_guard( frame_function_3_pgettext_of_module_django__utils__translation__trans_null );
    try
    {
        assert( Py_REFCNT( frame_function_3_pgettext_of_module_django__utils__translation__trans_null ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 18 );
        {
            PyObjectTempKeeper0 call1;
            return ( call1.assign( _mvar_django__utils__translation__trans_null_ugettext.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_message.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_message.updateLocalsDict( _python_var_context.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_3_pgettext_of_module_django__utils__translation__trans_null )
        {
           Py_DECREF( frame_function_3_pgettext_of_module_django__utils__translation__trans_null );
           frame_function_3_pgettext_of_module_django__utils__translation__trans_null = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_pgettext_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_context = NULL;
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
                PyErr_Format( PyExc_TypeError, "pgettext() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_context == key )
            {
                if (unlikely( _python_par_context ))
                {
                    PyErr_Format( PyExc_TypeError, "pgettext() got multiple values for keyword argument 'context'" );
                    goto error_exit;
                }

                _python_par_context = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_message == key )
            {
                if (unlikely( _python_par_message ))
                {
                    PyErr_Format( PyExc_TypeError, "pgettext() got multiple values for keyword argument 'message'" );
                    goto error_exit;
                }

                _python_par_message = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_context, key ) )
            {
                if (unlikely( _python_par_context ))
                {
                    PyErr_Format( PyExc_TypeError, "pgettext() got multiple values for keyword argument 'context'" );
                    goto error_exit;
                }

                _python_par_context = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_message, key ) )
            {
                if (unlikely( _python_par_message ))
                {
                    PyErr_Format( PyExc_TypeError, "pgettext() got multiple values for keyword argument 'message'" );
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
                   "pgettext() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "pgettext() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "pgettext() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "pgettext() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "pgettext() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "pgettext() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "pgettext() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "pgettext() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "pgettext() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "pgettext() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "pgettext() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "pgettext() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "pgettext() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_context != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "pgettext() got multiple values for keyword argument 'context'" );
             goto error_exit;
         }

        _python_par_context = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_message != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "pgettext() got multiple values for keyword argument 'message'" );
             goto error_exit;
         }

        _python_par_message = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_3_pgettext_of_module_django__utils__translation__trans_null( self, _python_par_context, _python_par_message );

error_exit:;

    Py_XDECREF( _python_par_context );
    Py_XDECREF( _python_par_message );

    return NULL;
}

static PyObject *dparse_function_3_pgettext_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_3_pgettext_of_module_django__utils__translation__trans_null( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_pgettext_of_module_django__utils__translation__trans_null( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_npgettext_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject *_python_par_context, PyObject *_python_par_singular, PyObject *_python_par_plural, PyObject *_python_par_number )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_context( _python_str_plain_context, _python_par_context );
    PyObjectLocalParameterVariableNoDel _python_var_singular( _python_str_plain_singular, _python_par_singular );
    PyObjectLocalParameterVariableNoDel _python_var_plural( _python_str_plain_plural, _python_par_plural );
    PyObjectLocalParameterVariableNoDel _python_var_number( _python_str_plain_number, _python_par_number );

    // Actual function code.
    static PyFrameObject *frame_function_4_npgettext_of_module_django__utils__translation__trans_null = NULL;

    if ( isFrameUnusable( frame_function_4_npgettext_of_module_django__utils__translation__trans_null ) )
    {
        if ( frame_function_4_npgettext_of_module_django__utils__translation__trans_null )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_npgettext_of_module_django__utils__translation__trans_null" );
#endif
            Py_DECREF( frame_function_4_npgettext_of_module_django__utils__translation__trans_null );
        }

        frame_function_4_npgettext_of_module_django__utils__translation__trans_null = MAKE_FRAME( _codeobj_59d70dccd9dab874a60369bc106f3da2, _module_django__utils__translation__trans_null );
    }

    FrameGuard frame_guard( frame_function_4_npgettext_of_module_django__utils__translation__trans_null );
    try
    {
        assert( Py_REFCNT( frame_function_4_npgettext_of_module_django__utils__translation__trans_null ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 21 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper0 call2;
            PyObjectTempKeeper0 call3;
            return ( call1.assign( _mvar_django__utils__translation__trans_null_ungettext.asObject0() ), call2.assign( _python_var_singular.asObject() ), call3.assign( _python_var_plural.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), call3.asObject0(), _python_var_number.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_number.updateLocalsDict( _python_var_plural.updateLocalsDict( _python_var_singular.updateLocalsDict( _python_var_context.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_4_npgettext_of_module_django__utils__translation__trans_null )
        {
           Py_DECREF( frame_function_4_npgettext_of_module_django__utils__translation__trans_null );
           frame_function_4_npgettext_of_module_django__utils__translation__trans_null = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_npgettext_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_context = NULL;
    PyObject *_python_par_singular = NULL;
    PyObject *_python_par_plural = NULL;
    PyObject *_python_par_number = NULL;
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
                PyErr_Format( PyExc_TypeError, "npgettext() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_context == key )
            {
                if (unlikely( _python_par_context ))
                {
                    PyErr_Format( PyExc_TypeError, "npgettext() got multiple values for keyword argument 'context'" );
                    goto error_exit;
                }

                _python_par_context = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_singular == key )
            {
                if (unlikely( _python_par_singular ))
                {
                    PyErr_Format( PyExc_TypeError, "npgettext() got multiple values for keyword argument 'singular'" );
                    goto error_exit;
                }

                _python_par_singular = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_plural == key )
            {
                if (unlikely( _python_par_plural ))
                {
                    PyErr_Format( PyExc_TypeError, "npgettext() got multiple values for keyword argument 'plural'" );
                    goto error_exit;
                }

                _python_par_plural = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_number == key )
            {
                if (unlikely( _python_par_number ))
                {
                    PyErr_Format( PyExc_TypeError, "npgettext() got multiple values for keyword argument 'number'" );
                    goto error_exit;
                }

                _python_par_number = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_context, key ) )
            {
                if (unlikely( _python_par_context ))
                {
                    PyErr_Format( PyExc_TypeError, "npgettext() got multiple values for keyword argument 'context'" );
                    goto error_exit;
                }

                _python_par_context = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_singular, key ) )
            {
                if (unlikely( _python_par_singular ))
                {
                    PyErr_Format( PyExc_TypeError, "npgettext() got multiple values for keyword argument 'singular'" );
                    goto error_exit;
                }

                _python_par_singular = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_plural, key ) )
            {
                if (unlikely( _python_par_plural ))
                {
                    PyErr_Format( PyExc_TypeError, "npgettext() got multiple values for keyword argument 'plural'" );
                    goto error_exit;
                }

                _python_par_plural = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_number, key ) )
            {
                if (unlikely( _python_par_number ))
                {
                    PyErr_Format( PyExc_TypeError, "npgettext() got multiple values for keyword argument 'number'" );
                    goto error_exit;
                }

                _python_par_number = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "npgettext() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "npgettext() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "npgettext() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "npgettext() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "npgettext() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "npgettext() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "npgettext() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "npgettext() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "npgettext() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 4 ))
    {
        if ( 4 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "npgettext() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "npgettext() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 4 )
                {
                    PyErr_Format( PyExc_TypeError, "npgettext() takes exactly %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "npgettext() takes at least %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 4 ? args_given : 4;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_context != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "npgettext() got multiple values for keyword argument 'context'" );
             goto error_exit;
         }

        _python_par_context = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_singular != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "npgettext() got multiple values for keyword argument 'singular'" );
             goto error_exit;
         }

        _python_par_singular = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_plural != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "npgettext() got multiple values for keyword argument 'plural'" );
             goto error_exit;
         }

        _python_par_plural = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_number != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "npgettext() got multiple values for keyword argument 'number'" );
             goto error_exit;
         }

        _python_par_number = INCREASE_REFCOUNT( args[ 3 ] );
    }


    return impl_function_4_npgettext_of_module_django__utils__translation__trans_null( self, _python_par_context, _python_par_singular, _python_par_plural, _python_par_number );

error_exit:;

    Py_XDECREF( _python_par_context );
    Py_XDECREF( _python_par_singular );
    Py_XDECREF( _python_par_plural );
    Py_XDECREF( _python_par_number );

    return NULL;
}

static PyObject *dparse_function_4_npgettext_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_4_npgettext_of_module_django__utils__translation__trans_null( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_npgettext_of_module_django__utils__translation__trans_null( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_lambda_5_lambda_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject *_python_par_x )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_x( _python_str_plain_x, _python_par_x );

    // Actual function code.
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_lambda_5_lambda_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_x = NULL;
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
            if ( found == false && _python_str_plain_x == key )
            {
                if (unlikely( _python_par_x ))
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'x'" );
                    goto error_exit;
                }

                _python_par_x = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_x, key ) )
            {
                if (unlikely( _python_par_x ))
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'x'" );
                    goto error_exit;
                }

                _python_par_x = value;

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
         if (unlikely( _python_par_x != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'x'" );
             goto error_exit;
         }

        _python_par_x = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_lambda_5_lambda_of_module_django__utils__translation__trans_null( self, _python_par_x );

error_exit:;

    Py_XDECREF( _python_par_x );

    return NULL;
}

static PyObject *dparse_lambda_5_lambda_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_lambda_5_lambda_of_module_django__utils__translation__trans_null( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_lambda_5_lambda_of_module_django__utils__translation__trans_null( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_lambda_6_lambda_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.


    // Actual function code.
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_lambda_6_lambda_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        PyErr_Format( PyExc_TypeError, "<lambda>() takes no arguments (%zd given)", args_given + kw_size );
#else
        if ( kw_size == 0 )
        {
           PyErr_Format( PyExc_TypeError, "<lambda>() takes 0 positional arguments but %zd was given", args_given );
        }
        else
        {
           PyObject *tmp_iter = PyObject_GetIter( kw );
           PyObject *tmp_arg_name = PyIter_Next( tmp_iter );
           Py_DECREF( tmp_iter );

           PyErr_Format( PyExc_TypeError, "<lambda>() got an unexpected keyword argument '%s'", Nuitka_String_AsString( tmp_arg_name ) );

           Py_DECREF( tmp_arg_name );
        }
#endif
        goto error_exit;
    }


    return impl_lambda_6_lambda_of_module_django__utils__translation__trans_null( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_lambda_6_lambda_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0)
    {
        return impl_lambda_6_lambda_of_module_django__utils__translation__trans_null( self );
    }
    else
    {
        PyObject *result = fparse_lambda_6_lambda_of_module_django__utils__translation__trans_null( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_lambda_7_lambda_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.


    // Actual function code.
    static PyFrameObject *frame_lambda_7_lambda_of_module_django__utils__translation__trans_null = NULL;

    if ( isFrameUnusable( frame_lambda_7_lambda_of_module_django__utils__translation__trans_null ) )
    {
        if ( frame_lambda_7_lambda_of_module_django__utils__translation__trans_null )
        {
#if _DEBUG_REFRAME
            puts( "reframe for lambda_7_lambda_of_module_django__utils__translation__trans_null" );
#endif
            Py_DECREF( frame_lambda_7_lambda_of_module_django__utils__translation__trans_null );
        }

        frame_lambda_7_lambda_of_module_django__utils__translation__trans_null = MAKE_FRAME( _codeobj_baafa9c4aaf22ac8b9c124d6facaa2c4, _module_django__utils__translation__trans_null );
    }

    FrameGuard frame_guard( frame_lambda_7_lambda_of_module_django__utils__translation__trans_null );
    try
    {
        assert( Py_REFCNT( frame_lambda_7_lambda_of_module_django__utils__translation__trans_null ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 25 );
        return LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_null_settings.asObject0(), _python_str_plain_LANGUAGE_CODE );
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

        if ( frame_guard.getFrame0() == frame_lambda_7_lambda_of_module_django__utils__translation__trans_null )
        {
           Py_DECREF( frame_lambda_7_lambda_of_module_django__utils__translation__trans_null );
           frame_lambda_7_lambda_of_module_django__utils__translation__trans_null = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_lambda_7_lambda_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        PyErr_Format( PyExc_TypeError, "<lambda>() takes no arguments (%zd given)", args_given + kw_size );
#else
        if ( kw_size == 0 )
        {
           PyErr_Format( PyExc_TypeError, "<lambda>() takes 0 positional arguments but %zd was given", args_given );
        }
        else
        {
           PyObject *tmp_iter = PyObject_GetIter( kw );
           PyObject *tmp_arg_name = PyIter_Next( tmp_iter );
           Py_DECREF( tmp_iter );

           PyErr_Format( PyExc_TypeError, "<lambda>() got an unexpected keyword argument '%s'", Nuitka_String_AsString( tmp_arg_name ) );

           Py_DECREF( tmp_arg_name );
        }
#endif
        goto error_exit;
    }


    return impl_lambda_7_lambda_of_module_django__utils__translation__trans_null( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_lambda_7_lambda_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0)
    {
        return impl_lambda_7_lambda_of_module_django__utils__translation__trans_null( self );
    }
    else
    {
        PyObject *result = fparse_lambda_7_lambda_of_module_django__utils__translation__trans_null( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_lambda_8_lambda_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self )
{
    // No context is used.

    // Local variable declarations.


    // Actual function code.
    static PyFrameObject *frame_lambda_8_lambda_of_module_django__utils__translation__trans_null = NULL;

    if ( isFrameUnusable( frame_lambda_8_lambda_of_module_django__utils__translation__trans_null ) )
    {
        if ( frame_lambda_8_lambda_of_module_django__utils__translation__trans_null )
        {
#if _DEBUG_REFRAME
            puts( "reframe for lambda_8_lambda_of_module_django__utils__translation__trans_null" );
#endif
            Py_DECREF( frame_lambda_8_lambda_of_module_django__utils__translation__trans_null );
        }

        frame_lambda_8_lambda_of_module_django__utils__translation__trans_null = MAKE_FRAME( _codeobj_9d439d9df75677b7b4d2cb9efd6d58e4, _module_django__utils__translation__trans_null );
    }

    FrameGuard frame_guard( frame_lambda_8_lambda_of_module_django__utils__translation__trans_null );
    try
    {
        assert( Py_REFCNT( frame_lambda_8_lambda_of_module_django__utils__translation__trans_null ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 26 );
        {
            PyObjectTempKeeper1 cmp1;
            return INCREASE_REFCOUNT( ( cmp1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_null_settings.asObject0(), _python_str_plain_LANGUAGE_CODE ) ), SEQUENCE_CONTAINS( cmp1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_null_settings.asObject0(), _python_str_plain_LANGUAGES_BIDI ) ).asObject() ) ) );
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

        if ( frame_guard.getFrame0() == frame_lambda_8_lambda_of_module_django__utils__translation__trans_null )
        {
           Py_DECREF( frame_lambda_8_lambda_of_module_django__utils__translation__trans_null );
           frame_lambda_8_lambda_of_module_django__utils__translation__trans_null = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_lambda_8_lambda_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;

    if (unlikely( args_given + kw_size > 0 ))
    {
#if PYTHON_VERSION < 330
        PyErr_Format( PyExc_TypeError, "<lambda>() takes no arguments (%zd given)", args_given + kw_size );
#else
        if ( kw_size == 0 )
        {
           PyErr_Format( PyExc_TypeError, "<lambda>() takes 0 positional arguments but %zd was given", args_given );
        }
        else
        {
           PyObject *tmp_iter = PyObject_GetIter( kw );
           PyObject *tmp_arg_name = PyIter_Next( tmp_iter );
           Py_DECREF( tmp_iter );

           PyErr_Format( PyExc_TypeError, "<lambda>() got an unexpected keyword argument '%s'", Nuitka_String_AsString( tmp_arg_name ) );

           Py_DECREF( tmp_arg_name );
        }
#endif
        goto error_exit;
    }


    return impl_lambda_8_lambda_of_module_django__utils__translation__trans_null( self );

error_exit:;


    return NULL;
}

static PyObject *dparse_lambda_8_lambda_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 0)
    {
        return impl_lambda_8_lambda_of_module_django__utils__translation__trans_null( self );
    }
    else
    {
        PyObject *result = fparse_lambda_8_lambda_of_module_django__utils__translation__trans_null( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_lambda_9_lambda_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject *_python_par_x )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_x( _python_str_plain_x, _python_par_x );

    // Actual function code.
    return INCREASE_REFCOUNT( Py_True );
}
static PyObject *fparse_lambda_9_lambda_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_x = NULL;
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
            if ( found == false && _python_str_plain_x == key )
            {
                if (unlikely( _python_par_x ))
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'x'" );
                    goto error_exit;
                }

                _python_par_x = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_x, key ) )
            {
                if (unlikely( _python_par_x ))
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'x'" );
                    goto error_exit;
                }

                _python_par_x = value;

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
         if (unlikely( _python_par_x != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'x'" );
             goto error_exit;
         }

        _python_par_x = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_lambda_9_lambda_of_module_django__utils__translation__trans_null( self, _python_par_x );

error_exit:;

    Py_XDECREF( _python_par_x );

    return NULL;
}

static PyObject *dparse_lambda_9_lambda_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_lambda_9_lambda_of_module_django__utils__translation__trans_null( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_lambda_9_lambda_of_module_django__utils__translation__trans_null( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_10_gettext_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject *_python_par_message )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_message( _python_str_plain_message, _python_par_message );
    PyObjectLocalVariable _python_var_result( _python_str_plain_result );

    // Actual function code.
    static PyFrameObject *frame_function_10_gettext_of_module_django__utils__translation__trans_null = NULL;

    if ( isFrameUnusable( frame_function_10_gettext_of_module_django__utils__translation__trans_null ) )
    {
        if ( frame_function_10_gettext_of_module_django__utils__translation__trans_null )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_10_gettext_of_module_django__utils__translation__trans_null" );
#endif
            Py_DECREF( frame_function_10_gettext_of_module_django__utils__translation__trans_null );
        }

        frame_function_10_gettext_of_module_django__utils__translation__trans_null = MAKE_FRAME( _codeobj_28e47f0338fd3de96eaad26945e71d26, _module_django__utils__translation__trans_null );
    }

    FrameGuard frame_guard( frame_function_10_gettext_of_module_django__utils__translation__trans_null );
    try
    {
        assert( Py_REFCNT( frame_function_10_gettext_of_module_django__utils__translation__trans_null ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 41 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper0 call2;
            _python_var_result.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_null_TECHNICAL_ID_MAP.asObject0(), _python_str_plain_get ) ), call2.assign( _python_var_message.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _python_var_message.asObject() ) ) );
        }
        frame_guard.setLineNumber( 42 );
        {
            PyObjectTempKeeper0 isinstance6;
            if ( ( isinstance6.assign( _python_var_message.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance6.asObject0(), _mvar_django__utils__translation__trans_null_SafeData.asObject0() ) ) )
        {
            frame_guard.setLineNumber( 43 );
            {
                PyObjectTempKeeper0 call4;
                return ( call4.assign( _mvar_django__utils__translation__trans_null_mark_safe.asObject0() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), _python_var_result.asObject() ) );
            }
        }
        }
        frame_guard.setLineNumber( 44 );
        return _python_var_result.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_message.updateLocalsDict( _python_var_result.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_10_gettext_of_module_django__utils__translation__trans_null )
        {
           Py_DECREF( frame_function_10_gettext_of_module_django__utils__translation__trans_null );
           frame_function_10_gettext_of_module_django__utils__translation__trans_null = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_10_gettext_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "gettext() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "gettext() got multiple values for keyword argument 'message'" );
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
                    PyErr_Format( PyExc_TypeError, "gettext() got multiple values for keyword argument 'message'" );
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
                   "gettext() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "gettext() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "gettext() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "gettext() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "gettext() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "gettext() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "gettext() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "gettext() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "gettext() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "gettext() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "gettext() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "gettext() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "gettext() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "gettext() got multiple values for keyword argument 'message'" );
             goto error_exit;
         }

        _python_par_message = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_10_gettext_of_module_django__utils__translation__trans_null( self, _python_par_message );

error_exit:;

    Py_XDECREF( _python_par_message );

    return NULL;
}

static PyObject *dparse_function_10_gettext_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_10_gettext_of_module_django__utils__translation__trans_null( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_10_gettext_of_module_django__utils__translation__trans_null( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_11_ugettext_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject *_python_par_message )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_message( _python_str_plain_message, _python_par_message );

    // Actual function code.
    static PyFrameObject *frame_function_11_ugettext_of_module_django__utils__translation__trans_null = NULL;

    if ( isFrameUnusable( frame_function_11_ugettext_of_module_django__utils__translation__trans_null ) )
    {
        if ( frame_function_11_ugettext_of_module_django__utils__translation__trans_null )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_11_ugettext_of_module_django__utils__translation__trans_null" );
#endif
            Py_DECREF( frame_function_11_ugettext_of_module_django__utils__translation__trans_null );
        }

        frame_function_11_ugettext_of_module_django__utils__translation__trans_null = MAKE_FRAME( _codeobj_b1a38a1a3425eab49a6b1ac2bb7ca498, _module_django__utils__translation__trans_null );
    }

    FrameGuard frame_guard( frame_function_11_ugettext_of_module_django__utils__translation__trans_null );
    try
    {
        assert( Py_REFCNT( frame_function_11_ugettext_of_module_django__utils__translation__trans_null ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 47 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper0 call3;
            return ( call3.assign( _mvar_django__utils__translation__trans_null_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( ( call1.assign( _mvar_django__utils__translation__trans_null_gettext.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_message.asObject() ) ) ).asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_11_ugettext_of_module_django__utils__translation__trans_null )
        {
           Py_DECREF( frame_function_11_ugettext_of_module_django__utils__translation__trans_null );
           frame_function_11_ugettext_of_module_django__utils__translation__trans_null = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_11_ugettext_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "ugettext() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "ugettext() got multiple values for keyword argument 'message'" );
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
                    PyErr_Format( PyExc_TypeError, "ugettext() got multiple values for keyword argument 'message'" );
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
                   "ugettext() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "ugettext() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "ugettext() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "ugettext() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "ugettext() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "ugettext() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "ugettext() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "ugettext() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "ugettext() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "ugettext() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "ugettext() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "ugettext() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "ugettext() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "ugettext() got multiple values for keyword argument 'message'" );
             goto error_exit;
         }

        _python_par_message = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_11_ugettext_of_module_django__utils__translation__trans_null( self, _python_par_message );

error_exit:;

    Py_XDECREF( _python_par_message );

    return NULL;
}

static PyObject *dparse_function_11_ugettext_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_11_ugettext_of_module_django__utils__translation__trans_null( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_11_ugettext_of_module_django__utils__translation__trans_null( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_12_to_locale_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject *_python_par_language )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_language( _python_str_plain_language, _python_par_language );
    PyObjectLocalVariable _python_var_p( _python_str_plain_p );

    // Actual function code.
    static PyFrameObject *frame_function_12_to_locale_of_module_django__utils__translation__trans_null = NULL;

    if ( isFrameUnusable( frame_function_12_to_locale_of_module_django__utils__translation__trans_null ) )
    {
        if ( frame_function_12_to_locale_of_module_django__utils__translation__trans_null )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_12_to_locale_of_module_django__utils__translation__trans_null" );
#endif
            Py_DECREF( frame_function_12_to_locale_of_module_django__utils__translation__trans_null );
        }

        frame_function_12_to_locale_of_module_django__utils__translation__trans_null = MAKE_FRAME( _codeobj_de0c72c89cc719caa75fb1617acffde3, _module_django__utils__translation__trans_null );
    }

    FrameGuard frame_guard( frame_function_12_to_locale_of_module_django__utils__translation__trans_null );
    try
    {
        assert( Py_REFCNT( frame_function_12_to_locale_of_module_django__utils__translation__trans_null ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 52 );
        _python_var_p.assign1( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_language.asObject(), _python_str_plain_find ) ).asObject(), _python_str_chr_45 ) );
        frame_guard.setLineNumber( 53 );
        if ( RICH_COMPARE_BOOL_GE( _python_var_p.asObject(), _python_int_0 ) )
        {
            frame_guard.setLineNumber( 54 );
            {
                PyObjectTempKeeper1 op7;
                PyObjectTempKeeper0 slice1;
                PyObjectTempKeeper0 slice4;
                return ( op7.assign( BINARY_OPERATION_ADD( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( slice1.assign( _python_var_language.asObject() ), LOOKUP_SLICE( slice1.asObject0(), Py_None, _python_var_p.asObject() ) ) ).asObject(), _python_str_plain_lower ) ).asObject() ) ).asObject(), _python_str_plain__ ) ), BINARY_OPERATION_ADD( op7.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( slice4.assign( _python_var_language.asObject() ), LOOKUP_SLICE( slice4.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( _python_var_p.asObject(), _python_int_pos_1 ) ).asObject(), Py_None ) ) ).asObject(), _python_str_plain_upper ) ).asObject() ) ).asObject() ) );
            }
        }
        else
        {
            frame_guard.setLineNumber( 56 );
            return CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_language.asObject(), _python_str_plain_lower ) ).asObject() );
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
        frame_guard.getFrame0()->f_locals = _python_var_language.updateLocalsDict( _python_var_p.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_12_to_locale_of_module_django__utils__translation__trans_null )
        {
           Py_DECREF( frame_function_12_to_locale_of_module_django__utils__translation__trans_null );
           frame_function_12_to_locale_of_module_django__utils__translation__trans_null = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_12_to_locale_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_language = NULL;
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
                PyErr_Format( PyExc_TypeError, "to_locale() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_language == key )
            {
                if (unlikely( _python_par_language ))
                {
                    PyErr_Format( PyExc_TypeError, "to_locale() got multiple values for keyword argument 'language'" );
                    goto error_exit;
                }

                _python_par_language = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_language, key ) )
            {
                if (unlikely( _python_par_language ))
                {
                    PyErr_Format( PyExc_TypeError, "to_locale() got multiple values for keyword argument 'language'" );
                    goto error_exit;
                }

                _python_par_language = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "to_locale() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "to_locale() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "to_locale() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "to_locale() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "to_locale() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "to_locale() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "to_locale() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "to_locale() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "to_locale() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "to_locale() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "to_locale() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "to_locale() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "to_locale() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_language != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "to_locale() got multiple values for keyword argument 'language'" );
             goto error_exit;
         }

        _python_par_language = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_12_to_locale_of_module_django__utils__translation__trans_null( self, _python_par_language );

error_exit:;

    Py_XDECREF( _python_par_language );

    return NULL;
}

static PyObject *dparse_function_12_to_locale_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_12_to_locale_of_module_django__utils__translation__trans_null( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_12_to_locale_of_module_django__utils__translation__trans_null( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_13_get_language_from_request_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject *_python_par_request, PyObject *_python_par_check_path )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_request( _python_str_plain_request, _python_par_request );
    PyObjectLocalParameterVariableNoDel _python_var_check_path( _python_str_plain_check_path, _python_par_check_path );

    // Actual function code.
    static PyFrameObject *frame_function_13_get_language_from_request_of_module_django__utils__translation__trans_null = NULL;

    if ( isFrameUnusable( frame_function_13_get_language_from_request_of_module_django__utils__translation__trans_null ) )
    {
        if ( frame_function_13_get_language_from_request_of_module_django__utils__translation__trans_null )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_13_get_language_from_request_of_module_django__utils__translation__trans_null" );
#endif
            Py_DECREF( frame_function_13_get_language_from_request_of_module_django__utils__translation__trans_null );
        }

        frame_function_13_get_language_from_request_of_module_django__utils__translation__trans_null = MAKE_FRAME( _codeobj_d61a2d61161450f15a846cc28c907b7a, _module_django__utils__translation__trans_null );
    }

    FrameGuard frame_guard( frame_function_13_get_language_from_request_of_module_django__utils__translation__trans_null );
    try
    {
        assert( Py_REFCNT( frame_function_13_get_language_from_request_of_module_django__utils__translation__trans_null ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 59 );
        return LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_null_settings.asObject0(), _python_str_plain_LANGUAGE_CODE );
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
        frame_guard.getFrame0()->f_locals = _python_var_check_path.updateLocalsDict( _python_var_request.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_13_get_language_from_request_of_module_django__utils__translation__trans_null )
        {
           Py_DECREF( frame_function_13_get_language_from_request_of_module_django__utils__translation__trans_null );
           frame_function_13_get_language_from_request_of_module_django__utils__translation__trans_null = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_13_get_language_from_request_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_request = NULL;
    PyObject *_python_par_check_path = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_language_from_request() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_request == key )
            {
                if (unlikely( _python_par_request ))
                {
                    PyErr_Format( PyExc_TypeError, "get_language_from_request() got multiple values for keyword argument 'request'" );
                    goto error_exit;
                }

                _python_par_request = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_check_path == key )
            {
                if (unlikely( _python_par_check_path ))
                {
                    PyErr_Format( PyExc_TypeError, "get_language_from_request() got multiple values for keyword argument 'check_path'" );
                    goto error_exit;
                }

                _python_par_check_path = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_request, key ) )
            {
                if (unlikely( _python_par_request ))
                {
                    PyErr_Format( PyExc_TypeError, "get_language_from_request() got multiple values for keyword argument 'request'" );
                    goto error_exit;
                }

                _python_par_request = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_check_path, key ) )
            {
                if (unlikely( _python_par_check_path ))
                {
                    PyErr_Format( PyExc_TypeError, "get_language_from_request() got multiple values for keyword argument 'check_path'" );
                    goto error_exit;
                }

                _python_par_check_path = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_language_from_request() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_language_from_request() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_language_from_request() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_language_from_request() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_language_from_request() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_language_from_request() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_language_from_request() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_language_from_request() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_language_from_request() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_language_from_request() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_language_from_request() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_language_from_request() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_language_from_request() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_request != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_language_from_request() got multiple values for keyword argument 'request'" );
             goto error_exit;
         }

        _python_par_request = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_check_path != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_language_from_request() got multiple values for keyword argument 'check_path'" );
             goto error_exit;
         }

        _python_par_check_path = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_check_path == NULL )
    {
        _python_par_check_path = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_check_path );
    }


    return impl_function_13_get_language_from_request_of_module_django__utils__translation__trans_null( self, _python_par_request, _python_par_check_path );

error_exit:;

    Py_XDECREF( _python_par_request );
    Py_XDECREF( _python_par_check_path );

    return NULL;
}

static PyObject *dparse_function_13_get_language_from_request_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_13_get_language_from_request_of_module_django__utils__translation__trans_null( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_13_get_language_from_request_of_module_django__utils__translation__trans_null( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_14_get_language_from_path_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject *_python_par_request, PyObject *_python_par_supported )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_request( _python_str_plain_request, _python_par_request );
    PyObjectLocalParameterVariableNoDel _python_var_supported( _python_str_plain_supported, _python_par_supported );

    // Actual function code.
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_14_get_language_from_path_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_request = NULL;
    PyObject *_python_par_supported = NULL;
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
                PyErr_Format( PyExc_TypeError, "get_language_from_path() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_request == key )
            {
                if (unlikely( _python_par_request ))
                {
                    PyErr_Format( PyExc_TypeError, "get_language_from_path() got multiple values for keyword argument 'request'" );
                    goto error_exit;
                }

                _python_par_request = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_supported == key )
            {
                if (unlikely( _python_par_supported ))
                {
                    PyErr_Format( PyExc_TypeError, "get_language_from_path() got multiple values for keyword argument 'supported'" );
                    goto error_exit;
                }

                _python_par_supported = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_request, key ) )
            {
                if (unlikely( _python_par_request ))
                {
                    PyErr_Format( PyExc_TypeError, "get_language_from_path() got multiple values for keyword argument 'request'" );
                    goto error_exit;
                }

                _python_par_request = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_supported, key ) )
            {
                if (unlikely( _python_par_supported ))
                {
                    PyErr_Format( PyExc_TypeError, "get_language_from_path() got multiple values for keyword argument 'supported'" );
                    goto error_exit;
                }

                _python_par_supported = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "get_language_from_path() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "get_language_from_path() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "get_language_from_path() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "get_language_from_path() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "get_language_from_path() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_language_from_path() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_language_from_path() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "get_language_from_path() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "get_language_from_path() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "get_language_from_path() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "get_language_from_path() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "get_language_from_path() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "get_language_from_path() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_request != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_language_from_path() got multiple values for keyword argument 'request'" );
             goto error_exit;
         }

        _python_par_request = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_supported != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "get_language_from_path() got multiple values for keyword argument 'supported'" );
             goto error_exit;
         }

        _python_par_supported = INCREASE_REFCOUNT( args[ 1 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_supported == NULL )
    {
        _python_par_supported = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_supported );
    }


    return impl_function_14_get_language_from_path_of_module_django__utils__translation__trans_null( self, _python_par_request, _python_par_supported );

error_exit:;

    Py_XDECREF( _python_par_request );
    Py_XDECREF( _python_par_supported );

    return NULL;
}

static PyObject *dparse_function_14_get_language_from_path_of_module_django__utils__translation__trans_null( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_14_get_language_from_path_of_module_django__utils__translation__trans_null( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_14_get_language_from_path_of_module_django__utils__translation__trans_null( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_10_gettext_of_module_django__utils__translation__trans_null(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_10_gettext_of_module_django__utils__translation__trans_null,
        dparse_function_10_gettext_of_module_django__utils__translation__trans_null,
        _python_str_plain_gettext,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_28e47f0338fd3de96eaad26945e71d26,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_null,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_11_ugettext_of_module_django__utils__translation__trans_null(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_11_ugettext_of_module_django__utils__translation__trans_null,
        dparse_function_11_ugettext_of_module_django__utils__translation__trans_null,
        _python_str_plain_ugettext,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b1a38a1a3425eab49a6b1ac2bb7ca498,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_null,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_12_to_locale_of_module_django__utils__translation__trans_null(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_12_to_locale_of_module_django__utils__translation__trans_null,
        dparse_function_12_to_locale_of_module_django__utils__translation__trans_null,
        _python_str_plain_to_locale,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_de0c72c89cc719caa75fb1617acffde3,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_null,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_13_get_language_from_request_of_module_django__utils__translation__trans_null(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_13_get_language_from_request_of_module_django__utils__translation__trans_null,
        dparse_function_13_get_language_from_request_of_module_django__utils__translation__trans_null,
        _python_str_plain_get_language_from_request,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_d61a2d61161450f15a846cc28c907b7a,
        INCREASE_REFCOUNT( _python_tuple_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_null,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_14_get_language_from_path_of_module_django__utils__translation__trans_null(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_14_get_language_from_path_of_module_django__utils__translation__trans_null,
        dparse_function_14_get_language_from_path_of_module_django__utils__translation__trans_null,
        _python_str_plain_get_language_from_path,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_1c57b4a6174e9ec01c4990d81a824fd5,
        INCREASE_REFCOUNT( _python_tuple_none_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_null,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1_ngettext_of_module_django__utils__translation__trans_null(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_ngettext_of_module_django__utils__translation__trans_null,
        dparse_function_1_ngettext_of_module_django__utils__translation__trans_null,
        _python_str_plain_ngettext,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_245c6a588125476c39786440192d7472,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_null,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_ungettext_of_module_django__utils__translation__trans_null(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_ungettext_of_module_django__utils__translation__trans_null,
        dparse_function_2_ungettext_of_module_django__utils__translation__trans_null,
        _python_str_plain_ungettext,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_7feaa5e2638c14d58acc47e5d96fcedf,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_null,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_pgettext_of_module_django__utils__translation__trans_null(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_pgettext_of_module_django__utils__translation__trans_null,
        dparse_function_3_pgettext_of_module_django__utils__translation__trans_null,
        _python_str_plain_pgettext,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b0f9b4b9fefed19e3ada5f76a88a7dc1,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_null,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_npgettext_of_module_django__utils__translation__trans_null(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_npgettext_of_module_django__utils__translation__trans_null,
        dparse_function_4_npgettext_of_module_django__utils__translation__trans_null,
        _python_str_plain_npgettext,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_59d70dccd9dab874a60369bc106f3da2,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_null,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_5_lambda_of_module_django__utils__translation__trans_null(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_lambda_5_lambda_of_module_django__utils__translation__trans_null,
        dparse_lambda_5_lambda_of_module_django__utils__translation__trans_null,
        _python_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_be619631bbdec4bf0d53d8cafcef90f6,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_null,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_6_lambda_of_module_django__utils__translation__trans_null(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_lambda_6_lambda_of_module_django__utils__translation__trans_null,
        dparse_lambda_6_lambda_of_module_django__utils__translation__trans_null,
        _python_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_7a50154c66fe71a4bdf92335a9a843f8,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_null,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_7_lambda_of_module_django__utils__translation__trans_null(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_lambda_7_lambda_of_module_django__utils__translation__trans_null,
        dparse_lambda_7_lambda_of_module_django__utils__translation__trans_null,
        _python_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_baafa9c4aaf22ac8b9c124d6facaa2c4,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_null,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_8_lambda_of_module_django__utils__translation__trans_null(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_lambda_8_lambda_of_module_django__utils__translation__trans_null,
        dparse_lambda_8_lambda_of_module_django__utils__translation__trans_null,
        _python_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_9d439d9df75677b7b4d2cb9efd6d58e4,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_null,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_9_lambda_of_module_django__utils__translation__trans_null(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_lambda_9_lambda_of_module_django__utils__translation__trans_null,
        dparse_lambda_9_lambda_of_module_django__utils__translation__trans_null,
        _python_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ea7d177842ce3d4b89c80e3fa217c612,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__translation__trans_null,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.utils.translation.trans_null",   /* m_name */
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

MOD_INIT_DECL( django__utils__translation__trans_null )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__utils__translation__trans_null );
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

    // puts( "in initdjango__utils__translation__trans_null" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__utils__translation__trans_null = Py_InitModule4(
        "django.utils.translation.trans_null",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__utils__translation__trans_null = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__utils__translation__trans_null = (PyDictObject *)((PyModuleObject *)_module_django__utils__translation__trans_null)->md_dict;

    assertObject( _module_django__utils__translation__trans_null );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_8c91f3d525bc20f1f7a9ff63552d5056, _module_django__utils__translation__trans_null );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__utils__translation__trans_null );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__utils__translation__trans_null != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__utils__translation__trans_null, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django__utils__translation__trans_null, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_a260ca67db2865215b00cb28e29183b3 );
    PyFrameObject *frame_module_django__utils__translation__trans_null = MAKE_FRAME( _codeobj_f4826a2d5af3d80a707fa80b0cfe0b65, _module_django__utils__translation__trans_null );

    FrameGuard frame_guard( frame_module_django__utils__translation__trans_null );
    try
    {
        assert( Py_REFCNT( frame_module_django__utils__translation__trans_null ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 5 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_null, (Nuitka_StringObject *)_python_str_plain_settings, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_262bd828f67160809670905d543ae3a0, ((PyModuleObject *)_module_django__utils__translation__trans_null)->md_dict, ((PyModuleObject *)_module_django__utils__translation__trans_null)->md_dict, _python_list_str_plain_settings_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_settings ) );
        frame_guard.setLineNumber( 6 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_null, (Nuitka_StringObject *)_python_str_plain_force_text, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__utils__translation__trans_null)->md_dict, ((PyModuleObject *)_module_django__utils__translation__trans_null)->md_dict, _python_list_str_plain_force_text_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_force_text ) );
        frame_guard.setLineNumber( 7 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_null, (Nuitka_StringObject *)_python_str_plain_mark_safe, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_33422e2c698707541621bf8ab31ea849, ((PyModuleObject *)_module_django__utils__translation__trans_null)->md_dict, ((PyModuleObject *)_module_django__utils__translation__trans_null)->md_dict, _python_list_str_plain_mark_safe_str_plain_SafeData_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_mark_safe ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_null, (Nuitka_StringObject *)_python_str_plain_SafeData, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_33422e2c698707541621bf8ab31ea849, ((PyModuleObject *)_module_django__utils__translation__trans_null)->md_dict, ((PyModuleObject *)_module_django__utils__translation__trans_null)->md_dict, _python_list_str_plain_mark_safe_str_plain_SafeData_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_SafeData ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_null, (Nuitka_StringObject *)_python_str_plain_ngettext, MAKE_FUNCTION_function_1_ngettext_of_module_django__utils__translation__trans_null(  ) );
        frame_guard.setLineNumber( 12 );
        UPDATE_STRING_DICT0( _moduledict_django__utils__translation__trans_null, (Nuitka_StringObject *)_python_str_plain_ngettext_lazy, _mvar_django__utils__translation__trans_null_ngettext.asObject0() );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_null, (Nuitka_StringObject *)_python_str_plain_ungettext, MAKE_FUNCTION_function_2_ungettext_of_module_django__utils__translation__trans_null(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_null, (Nuitka_StringObject *)_python_str_plain_pgettext, MAKE_FUNCTION_function_3_pgettext_of_module_django__utils__translation__trans_null(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_null, (Nuitka_StringObject *)_python_str_plain_npgettext, MAKE_FUNCTION_function_4_npgettext_of_module_django__utils__translation__trans_null(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_null, (Nuitka_StringObject *)_python_str_plain_activate, MAKE_FUNCTION_lambda_5_lambda_of_module_django__utils__translation__trans_null(  ) );
        {
            PyObjectTemporary _python_tmp_assign_source( MAKE_FUNCTION_lambda_6_lambda_of_module_django__utils__translation__trans_null(  ) );
            UPDATE_STRING_DICT0( _moduledict_django__utils__translation__trans_null, (Nuitka_StringObject *)_python_str_plain_deactivate, _python_tmp_assign_source.asObject() );
            UPDATE_STRING_DICT0( _moduledict_django__utils__translation__trans_null, (Nuitka_StringObject *)_python_str_plain_deactivate_all, _python_tmp_assign_source.asObject() );
        }
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_null, (Nuitka_StringObject *)_python_str_plain_get_language, MAKE_FUNCTION_lambda_7_lambda_of_module_django__utils__translation__trans_null(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_null, (Nuitka_StringObject *)_python_str_plain_get_language_bidi, MAKE_FUNCTION_lambda_8_lambda_of_module_django__utils__translation__trans_null(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_null, (Nuitka_StringObject *)_python_str_plain_check_for_language, MAKE_FUNCTION_lambda_9_lambda_of_module_django__utils__translation__trans_null(  ) );
        frame_guard.setLineNumber( 31 );
        {
            PyObjectTempKeeper1 make_dict1;
            PyObjectTempKeeper1 make_dict3;
            PyObjectTempKeeper1 make_dict5;
            PyObjectTempKeeper1 make_dict7;
            PyObjectTempKeeper1 make_dict9;
            UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_null, (Nuitka_StringObject *)_python_str_plain_TECHNICAL_ID_MAP, ( make_dict1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_null_settings.asObject0(), _python_str_plain_DATETIME_FORMAT ) ), make_dict3.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_null_settings.asObject0(), _python_str_plain_DATE_FORMAT ) ), make_dict5.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_null_settings.asObject0(), _python_str_plain_DATETIME_FORMAT ) ), make_dict7.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_null_settings.asObject0(), _python_str_plain_TIME_FORMAT ) ), make_dict9.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_null_settings.asObject0(), _python_str_plain_YEAR_MONTH_FORMAT ) ), MAKE_DICT6( make_dict1.asObject0(), _python_str_plain_DATE_WITH_TIME_FULL, make_dict3.asObject0(), _python_str_plain_DATE_FORMAT, make_dict5.asObject0(), _python_str_plain_DATETIME_FORMAT, make_dict7.asObject0(), _python_str_plain_TIME_FORMAT, make_dict9.asObject0(), _python_str_plain_YEAR_MONTH_FORMAT, PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__translation__trans_null_settings.asObject0(), _python_str_plain_MONTH_DAY_FORMAT ) ).asObject(), _python_str_plain_MONTH_DAY_FORMAT ) ) );
        }
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_null, (Nuitka_StringObject *)_python_str_plain_gettext, MAKE_FUNCTION_function_10_gettext_of_module_django__utils__translation__trans_null(  ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_null, (Nuitka_StringObject *)_python_str_plain_ugettext, MAKE_FUNCTION_function_11_ugettext_of_module_django__utils__translation__trans_null(  ) );
        {
            frame_guard.setLineNumber( 49 );
            PyObject *_python_tmp_assign_source = _mvar_django__utils__translation__trans_null_gettext.asObject0();
            UPDATE_STRING_DICT0( _moduledict_django__utils__translation__trans_null, (Nuitka_StringObject *)_python_str_plain_gettext_noop, _python_tmp_assign_source );
            UPDATE_STRING_DICT0( _moduledict_django__utils__translation__trans_null, (Nuitka_StringObject *)_python_str_plain_gettext_lazy, _python_tmp_assign_source );
            UPDATE_STRING_DICT0( _moduledict_django__utils__translation__trans_null, (Nuitka_StringObject *)_python_str_plain__, _python_tmp_assign_source );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__utils__translation__trans_null)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_null, (Nuitka_StringObject *)_python_str_plain_to_locale, MAKE_FUNCTION_function_12_to_locale_of_module_django__utils__translation__trans_null(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_null, (Nuitka_StringObject *)_python_str_plain_get_language_from_request, MAKE_FUNCTION_function_13_get_language_from_request_of_module_django__utils__translation__trans_null(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__translation__trans_null, (Nuitka_StringObject *)_python_str_plain_get_language_from_path, MAKE_FUNCTION_function_14_get_language_from_path_of_module_django__utils__translation__trans_null(  ) );

   return MOD_RETURN_VALUE( _module_django__utils__translation__trans_null );
}
