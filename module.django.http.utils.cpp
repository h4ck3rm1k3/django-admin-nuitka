// Generated code for Python source for module 'django.http.utils'
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

// The _module_django__http__utils is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__http__utils;
PyDictObject *_moduledict_django__http__utils;

// The module level variables.


// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_3_fix_IE_for_attach_of_module_django__http__utils( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_offending_headers, PyObjectLocalVariable &python_closure_value );


static PyObject *MAKE_FUNCTION_function_1_fix_location_header_of_module_django__http__utils(  );


static PyObject *MAKE_FUNCTION_function_2_conditional_content_removal_of_module_django__http__utils(  );


static PyObject *MAKE_FUNCTION_function_3_fix_IE_for_attach_of_module_django__http__utils(  );


static PyObject *MAKE_FUNCTION_function_4_fix_IE_for_vary_of_module_django__http__utils(  );


// The module function definitions.
static PyObject *impl_function_1_fix_location_header_of_module_django__http__utils( Nuitka_FunctionObject *self, PyObject *_python_par_request, PyObject *_python_par_response )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_request( _python_str_plain_request, _python_par_request );
    PyObjectLocalParameterVariableNoDel _python_var_response( _python_str_plain_response, _python_par_response );

    // Actual function code.
    static PyFrameObject *frame_function_1_fix_location_header_of_module_django__http__utils = NULL;

    if ( isFrameUnusable( frame_function_1_fix_location_header_of_module_django__http__utils ) )
    {
        if ( frame_function_1_fix_location_header_of_module_django__http__utils )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_fix_location_header_of_module_django__http__utils" );
#endif
            Py_DECREF( frame_function_1_fix_location_header_of_module_django__http__utils );
        }

        frame_function_1_fix_location_header_of_module_django__http__utils = MAKE_FRAME( _codeobj_1bea0f193f2f7cde594749f2b6c4ffab, _module_django__http__utils );
    }

    FrameGuard frame_guard( frame_function_1_fix_location_header_of_module_django__http__utils );
    try
    {
        assert( Py_REFCNT( frame_function_1_fix_location_header_of_module_django__http__utils ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 20 );
        if ( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain_Location, _python_var_response.asObject() ) && CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_request.asObject(), _python_str_plain_get_host ) ).asObject() ) ).asObject() ) ) )
        {
            frame_guard.setLineNumber( 21 );
            {
                PyObjectTempKeeper1 call1;
                {
                    PyObjectTemporary tmp_identifier( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_request.asObject(), _python_str_plain_build_absolute_uri ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_response.asObject(), _python_str_plain_Location ) ).asObject() ) ) );
                    SET_SUBSCRIPT( tmp_identifier.asObject(), _python_var_response.asObject(), _python_str_plain_Location );
            }
            }
        }
        frame_guard.setLineNumber( 22 );
        return _python_var_response.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_response.updateLocalsDict( _python_var_request.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_1_fix_location_header_of_module_django__http__utils )
        {
           Py_DECREF( frame_function_1_fix_location_header_of_module_django__http__utils );
           frame_function_1_fix_location_header_of_module_django__http__utils = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_1_fix_location_header_of_module_django__http__utils( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_request = NULL;
    PyObject *_python_par_response = NULL;
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
                PyErr_Format( PyExc_TypeError, "fix_location_header() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "fix_location_header() got multiple values for keyword argument 'request'" );
                    goto error_exit;
                }

                _python_par_request = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_response == key )
            {
                if (unlikely( _python_par_response ))
                {
                    PyErr_Format( PyExc_TypeError, "fix_location_header() got multiple values for keyword argument 'response'" );
                    goto error_exit;
                }

                _python_par_response = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_request, key ) )
            {
                if (unlikely( _python_par_request ))
                {
                    PyErr_Format( PyExc_TypeError, "fix_location_header() got multiple values for keyword argument 'request'" );
                    goto error_exit;
                }

                _python_par_request = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_response, key ) )
            {
                if (unlikely( _python_par_response ))
                {
                    PyErr_Format( PyExc_TypeError, "fix_location_header() got multiple values for keyword argument 'response'" );
                    goto error_exit;
                }

                _python_par_response = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "fix_location_header() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "fix_location_header() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "fix_location_header() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "fix_location_header() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "fix_location_header() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "fix_location_header() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "fix_location_header() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "fix_location_header() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "fix_location_header() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "fix_location_header() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "fix_location_header() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "fix_location_header() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "fix_location_header() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "fix_location_header() got multiple values for keyword argument 'request'" );
             goto error_exit;
         }

        _python_par_request = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_response != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "fix_location_header() got multiple values for keyword argument 'response'" );
             goto error_exit;
         }

        _python_par_response = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_1_fix_location_header_of_module_django__http__utils( self, _python_par_request, _python_par_response );

error_exit:;

    Py_XDECREF( _python_par_request );
    Py_XDECREF( _python_par_response );

    return NULL;
}

static PyObject *dparse_function_1_fix_location_header_of_module_django__http__utils( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1_fix_location_header_of_module_django__http__utils( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_fix_location_header_of_module_django__http__utils( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_conditional_content_removal_of_module_django__http__utils( Nuitka_FunctionObject *self, PyObject *_python_par_request, PyObject *_python_par_response )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_request( _python_str_plain_request, _python_par_request );
    PyObjectLocalParameterVariableNoDel _python_var_response( _python_str_plain_response, _python_par_response );

    // Actual function code.
    static PyFrameObject *frame_function_2_conditional_content_removal_of_module_django__http__utils = NULL;

    if ( isFrameUnusable( frame_function_2_conditional_content_removal_of_module_django__http__utils ) )
    {
        if ( frame_function_2_conditional_content_removal_of_module_django__http__utils )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_conditional_content_removal_of_module_django__http__utils" );
#endif
            Py_DECREF( frame_function_2_conditional_content_removal_of_module_django__http__utils );
        }

        frame_function_2_conditional_content_removal_of_module_django__http__utils = MAKE_FRAME( _codeobj_b227547af2153c2110f6bc6113c6e164, _module_django__http__utils );
    }

    FrameGuard frame_guard( frame_function_2_conditional_content_removal_of_module_django__http__utils );
    try
    {
        assert( Py_REFCNT( frame_function_2_conditional_content_removal_of_module_django__http__utils ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 30 );
        {
            PyObjectTempKeeper1 keeper_0;
            if ( ( ( RICH_COMPARE_BOOL_LE( _python_int_pos_100, keeper_0.assign( LOOKUP_ATTRIBUTE( _python_var_response.asObject(), _python_str_plain_status_code ) ) ) && RICH_COMPARE_BOOL_LT( PyObjectTemporary( keeper_0.asObject() ).asObject(), _python_int_pos_200 ) ) || SEQUENCE_CONTAINS_BOOL( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_response.asObject(), _python_str_plain_status_code ) ).asObject(), _python_tuple_int_pos_204_int_pos_304_tuple ) ) )
        {
            frame_guard.setLineNumber( 31 );
            if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_response.asObject(), _python_str_plain_streaming ) ).asObject() ) )
            {
                frame_guard.setLineNumber( 32 );
                SET_ATTRIBUTE( PyObjectTemporary( PyList_New( 0 ) ).asObject(), _python_var_response.asObject(), _python_str_plain_streaming_content );
            }
            else
            {
                frame_guard.setLineNumber( 34 );
                SET_ATTRIBUTE( _python_str_empty, _python_var_response.asObject(), _python_str_plain_content );
            }
            frame_guard.setLineNumber( 35 );
            SET_SUBSCRIPT( _python_str_plain_0, _python_var_response.asObject(), _python_str_digest_850985cd851d0fe440f03f77762e2590 );
        }
        }
        frame_guard.setLineNumber( 36 );
        if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_request.asObject(), _python_str_plain_method ) ).asObject(), _python_str_plain_HEAD ) )
        {
            frame_guard.setLineNumber( 37 );
            if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_response.asObject(), _python_str_plain_streaming ) ).asObject() ) )
            {
                frame_guard.setLineNumber( 38 );
                SET_ATTRIBUTE( PyObjectTemporary( PyList_New( 0 ) ).asObject(), _python_var_response.asObject(), _python_str_plain_streaming_content );
            }
            else
            {
                frame_guard.setLineNumber( 40 );
                SET_ATTRIBUTE( _python_str_empty, _python_var_response.asObject(), _python_str_plain_content );
            }
        }
        frame_guard.setLineNumber( 41 );
        return _python_var_response.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_response.updateLocalsDict( _python_var_request.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_2_conditional_content_removal_of_module_django__http__utils )
        {
           Py_DECREF( frame_function_2_conditional_content_removal_of_module_django__http__utils );
           frame_function_2_conditional_content_removal_of_module_django__http__utils = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_conditional_content_removal_of_module_django__http__utils( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_request = NULL;
    PyObject *_python_par_response = NULL;
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
                PyErr_Format( PyExc_TypeError, "conditional_content_removal() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "conditional_content_removal() got multiple values for keyword argument 'request'" );
                    goto error_exit;
                }

                _python_par_request = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_response == key )
            {
                if (unlikely( _python_par_response ))
                {
                    PyErr_Format( PyExc_TypeError, "conditional_content_removal() got multiple values for keyword argument 'response'" );
                    goto error_exit;
                }

                _python_par_response = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_request, key ) )
            {
                if (unlikely( _python_par_request ))
                {
                    PyErr_Format( PyExc_TypeError, "conditional_content_removal() got multiple values for keyword argument 'request'" );
                    goto error_exit;
                }

                _python_par_request = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_response, key ) )
            {
                if (unlikely( _python_par_response ))
                {
                    PyErr_Format( PyExc_TypeError, "conditional_content_removal() got multiple values for keyword argument 'response'" );
                    goto error_exit;
                }

                _python_par_response = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "conditional_content_removal() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "conditional_content_removal() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "conditional_content_removal() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "conditional_content_removal() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "conditional_content_removal() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "conditional_content_removal() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "conditional_content_removal() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "conditional_content_removal() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "conditional_content_removal() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "conditional_content_removal() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "conditional_content_removal() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "conditional_content_removal() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "conditional_content_removal() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "conditional_content_removal() got multiple values for keyword argument 'request'" );
             goto error_exit;
         }

        _python_par_request = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_response != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "conditional_content_removal() got multiple values for keyword argument 'response'" );
             goto error_exit;
         }

        _python_par_response = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_2_conditional_content_removal_of_module_django__http__utils( self, _python_par_request, _python_par_response );

error_exit:;

    Py_XDECREF( _python_par_request );
    Py_XDECREF( _python_par_response );

    return NULL;
}

static PyObject *dparse_function_2_conditional_content_removal_of_module_django__http__utils( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2_conditional_content_removal_of_module_django__http__utils( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_conditional_content_removal_of_module_django__http__utils( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_fix_IE_for_attach_of_module_django__http__utils( Nuitka_FunctionObject *self, PyObject *_python_par_request, PyObject *_python_par_response )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_request( _python_str_plain_request, _python_par_request );
    PyObjectLocalParameterVariableNoDel _python_var_response( _python_str_plain_response, _python_par_response );
    PyObjectLocalVariable _python_var_useragent( _python_str_plain_useragent );
    PyObjectLocalVariable _python_var_offending_headers( _python_str_plain_offending_headers );
    PyObjectLocalVariable _python_var_cache_control_values( _python_str_plain_cache_control_values );
    PyObjectLocalVariable _python_var_value( _python_str_plain_value );

    // Actual function code.
    static PyFrameObject *frame_function_3_fix_IE_for_attach_of_module_django__http__utils = NULL;

    if ( isFrameUnusable( frame_function_3_fix_IE_for_attach_of_module_django__http__utils ) )
    {
        if ( frame_function_3_fix_IE_for_attach_of_module_django__http__utils )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_fix_IE_for_attach_of_module_django__http__utils" );
#endif
            Py_DECREF( frame_function_3_fix_IE_for_attach_of_module_django__http__utils );
        }

        frame_function_3_fix_IE_for_attach_of_module_django__http__utils = MAKE_FRAME( _codeobj_505422bf0a43e3b6e5360548882968d9, _module_django__http__utils );
    }

    FrameGuard frame_guard( frame_function_3_fix_IE_for_attach_of_module_django__http__utils );
    try
    {
        assert( Py_REFCNT( frame_function_3_fix_IE_for_attach_of_module_django__http__utils ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 50 );
        _python_var_useragent.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_request.asObject(), _python_str_plain_META ) ).asObject(), _python_str_plain_get ) ).asObject(), _python_str_plain_HTTP_USER_AGENT, _python_str_empty ) ).asObject(), _python_str_plain_upper ) ).asObject() ) );
        frame_guard.setLineNumber( 51 );
        if ( ( SEQUENCE_CONTAINS_NOT_BOOL( _python_str_plain_MSIE, _python_var_useragent.asObject() ) && SEQUENCE_CONTAINS_NOT_BOOL( _python_str_plain_CHROMEFRAME, _python_var_useragent.asObject() ) ) )
        {
            frame_guard.setLineNumber( 52 );
            return _python_var_response.asObject1();
        }
        _python_var_offending_headers.assign0( _python_tuple_bdc9dfda6a66a288f56010a2e0067dc0_tuple );
        frame_guard.setLineNumber( 55 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_response.asObject(), _python_str_plain_has_header ) ).asObject(), _python_str_digest_c76fb3291cd7ba548abd533e97b4caed ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 56 );
            try
            {
                frame_guard.setLineNumber( 57 );
                DEL_SUBSCRIPT( _python_var_response.asObject(), _python_str_plain_Pragma );
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
            frame_guard.setLineNumber( 60 );
            if ( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_response.asObject(), _python_str_plain_has_header ) ).asObject(), _python_str_digest_6a98894cd6b4628f0b5117412aab083e ) ).asObject() ) )
            {
                frame_guard.setLineNumber( 61 );
                _python_var_cache_control_values.assign1( impl_listcontr_1_of_function_3_fix_IE_for_attach_of_module_django__http__utils( MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_response.asObject(), _python_str_digest_6a98894cd6b4628f0b5117412aab083e ) ).asObject(), _python_str_plain_split ) ).asObject(), _python_str_chr_44 ) ).asObject() ), _python_var_offending_headers, _python_var_value ) );
                frame_guard.setLineNumber( 65 );
                if ( (!( CHECK_IF_TRUE( PyObjectTemporary( BUILTIN_LEN( _python_var_cache_control_values.asObject() ) ).asObject() ) )) )
                {
                    frame_guard.setLineNumber( 66 );
                    DEL_SUBSCRIPT( _python_var_response.asObject(), _python_str_digest_6a98894cd6b4628f0b5117412aab083e );
                }
                else
                {
                    frame_guard.setLineNumber( 68 );
                    {
                        PyObjectTempKeeper1 call1;
                        {
                            PyObjectTemporary tmp_identifier( ( call1.assign( LOOKUP_ATTRIBUTE( _python_str_digest_fc763cb31e9938f37737394681228f83, _python_str_plain_join ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_cache_control_values.asObject() ) ) );
                            SET_SUBSCRIPT( tmp_identifier.asObject(), _python_var_response.asObject(), _python_str_digest_6a98894cd6b4628f0b5117412aab083e );
                    }
                    }
                }
            }
        }
        frame_guard.setLineNumber( 70 );
        return _python_var_response.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_response.updateLocalsDict( _python_var_request.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_cache_control_values.updateLocalsDict( _python_var_offending_headers.updateLocalsDict( _python_var_useragent.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_fix_IE_for_attach_of_module_django__http__utils )
        {
           Py_DECREF( frame_function_3_fix_IE_for_attach_of_module_django__http__utils );
           frame_function_3_fix_IE_for_attach_of_module_django__http__utils = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_fix_IE_for_attach_of_module_django__http__utils( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_request = NULL;
    PyObject *_python_par_response = NULL;
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
                PyErr_Format( PyExc_TypeError, "fix_IE_for_attach() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "fix_IE_for_attach() got multiple values for keyword argument 'request'" );
                    goto error_exit;
                }

                _python_par_request = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_response == key )
            {
                if (unlikely( _python_par_response ))
                {
                    PyErr_Format( PyExc_TypeError, "fix_IE_for_attach() got multiple values for keyword argument 'response'" );
                    goto error_exit;
                }

                _python_par_response = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_request, key ) )
            {
                if (unlikely( _python_par_request ))
                {
                    PyErr_Format( PyExc_TypeError, "fix_IE_for_attach() got multiple values for keyword argument 'request'" );
                    goto error_exit;
                }

                _python_par_request = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_response, key ) )
            {
                if (unlikely( _python_par_response ))
                {
                    PyErr_Format( PyExc_TypeError, "fix_IE_for_attach() got multiple values for keyword argument 'response'" );
                    goto error_exit;
                }

                _python_par_response = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "fix_IE_for_attach() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "fix_IE_for_attach() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "fix_IE_for_attach() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "fix_IE_for_attach() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "fix_IE_for_attach() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "fix_IE_for_attach() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "fix_IE_for_attach() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "fix_IE_for_attach() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "fix_IE_for_attach() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "fix_IE_for_attach() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "fix_IE_for_attach() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "fix_IE_for_attach() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "fix_IE_for_attach() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "fix_IE_for_attach() got multiple values for keyword argument 'request'" );
             goto error_exit;
         }

        _python_par_request = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_response != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "fix_IE_for_attach() got multiple values for keyword argument 'response'" );
             goto error_exit;
         }

        _python_par_response = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_3_fix_IE_for_attach_of_module_django__http__utils( self, _python_par_request, _python_par_response );

error_exit:;

    Py_XDECREF( _python_par_request );
    Py_XDECREF( _python_par_response );

    return NULL;
}

static PyObject *dparse_function_3_fix_IE_for_attach_of_module_django__http__utils( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_3_fix_IE_for_attach_of_module_django__http__utils( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_fix_IE_for_attach_of_module_django__http__utils( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_3_fix_IE_for_attach_of_module_django__http__utils( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_offending_headers,PyObjectLocalVariable &python_closure_value )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 61 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 61 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_value.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper1 cmp1;
                    if ( ( cmp1.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( python_closure_value.asObject(), _python_str_plain_strip ) ).asObject() ) ).asObject(), _python_str_plain_lower ) ).asObject() ) ), SEQUENCE_CONTAINS_NOT_BOOL( cmp1.asObject0(), python_closure_offending_headers.asObject() ) ) )
                {
                    frame_guard.setLineNumber( 61 );
                    APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( python_closure_value.asObject(), _python_str_plain_strip ) ).asObject() ) ).asObject() ), Py_None;
                }
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_4_fix_IE_for_vary_of_module_django__http__utils( Nuitka_FunctionObject *self, PyObject *_python_par_request, PyObject *_python_par_response )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_request( _python_str_plain_request, _python_par_request );
    PyObjectLocalParameterVariableNoDel _python_var_response( _python_str_plain_response, _python_par_response );
    PyObjectLocalVariable _python_var_useragent( _python_str_plain_useragent );
    PyObjectLocalVariable _python_var_safe_mime_types( _python_str_plain_safe_mime_types );
    PyObjectLocalVariable _python_var_mime_type( _python_str_plain_mime_type );

    // Actual function code.
    static PyFrameObject *frame_function_4_fix_IE_for_vary_of_module_django__http__utils = NULL;

    if ( isFrameUnusable( frame_function_4_fix_IE_for_vary_of_module_django__http__utils ) )
    {
        if ( frame_function_4_fix_IE_for_vary_of_module_django__http__utils )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_fix_IE_for_vary_of_module_django__http__utils" );
#endif
            Py_DECREF( frame_function_4_fix_IE_for_vary_of_module_django__http__utils );
        }

        frame_function_4_fix_IE_for_vary_of_module_django__http__utils = MAKE_FRAME( _codeobj_5d54d6ff62407f46c2db35cd6ffa6a47, _module_django__http__utils );
    }

    FrameGuard frame_guard( frame_function_4_fix_IE_for_vary_of_module_django__http__utils );
    try
    {
        assert( Py_REFCNT( frame_function_4_fix_IE_for_vary_of_module_django__http__utils ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 80 );
        _python_var_useragent.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_request.asObject(), _python_str_plain_META ) ).asObject(), _python_str_plain_get ) ).asObject(), _python_str_plain_HTTP_USER_AGENT, _python_str_empty ) ).asObject(), _python_str_plain_upper ) ).asObject() ) );
        frame_guard.setLineNumber( 81 );
        if ( ( SEQUENCE_CONTAINS_NOT_BOOL( _python_str_plain_MSIE, _python_var_useragent.asObject() ) && SEQUENCE_CONTAINS_NOT_BOOL( _python_str_plain_CHROMEFRAME, _python_var_useragent.asObject() ) ) )
        {
            frame_guard.setLineNumber( 82 );
            return _python_var_response.asObject1();
        }
        _python_var_safe_mime_types.assign0( _python_tuple_a9fdf2620ee82ee906f016d350f8b020_tuple );
        frame_guard.setLineNumber( 89 );
        _python_var_mime_type.assign1( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_response.asObject(), _python_str_plain_get ) ).asObject(), _python_str_digest_dc105ac52c237f9f09c74b0767f64f74, _python_str_empty ) ).asObject(), _python_str_plain_partition ) ).asObject(), _python_str_chr_59 ) ).asObject(), _python_int_0, 0 ) );
        frame_guard.setLineNumber( 90 );
        {
            PyObjectTempKeeper0 cmp1;
            if ( ( cmp1.assign( _python_var_mime_type.asObject() ), SEQUENCE_CONTAINS_NOT_BOOL( cmp1.asObject0(), _python_var_safe_mime_types.asObject() ) ) )
        {
            frame_guard.setLineNumber( 91 );
            try
            {
                frame_guard.setLineNumber( 92 );
                DEL_SUBSCRIPT( _python_var_response.asObject(), _python_str_plain_Vary );
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
        }
        }
        frame_guard.setLineNumber( 96 );
        return _python_var_response.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_response.updateLocalsDict( _python_var_request.updateLocalsDict( _python_var_mime_type.updateLocalsDict( _python_var_safe_mime_types.updateLocalsDict( _python_var_useragent.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_4_fix_IE_for_vary_of_module_django__http__utils )
        {
           Py_DECREF( frame_function_4_fix_IE_for_vary_of_module_django__http__utils );
           frame_function_4_fix_IE_for_vary_of_module_django__http__utils = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_fix_IE_for_vary_of_module_django__http__utils( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_request = NULL;
    PyObject *_python_par_response = NULL;
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
                PyErr_Format( PyExc_TypeError, "fix_IE_for_vary() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "fix_IE_for_vary() got multiple values for keyword argument 'request'" );
                    goto error_exit;
                }

                _python_par_request = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_response == key )
            {
                if (unlikely( _python_par_response ))
                {
                    PyErr_Format( PyExc_TypeError, "fix_IE_for_vary() got multiple values for keyword argument 'response'" );
                    goto error_exit;
                }

                _python_par_response = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_request, key ) )
            {
                if (unlikely( _python_par_request ))
                {
                    PyErr_Format( PyExc_TypeError, "fix_IE_for_vary() got multiple values for keyword argument 'request'" );
                    goto error_exit;
                }

                _python_par_request = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_response, key ) )
            {
                if (unlikely( _python_par_response ))
                {
                    PyErr_Format( PyExc_TypeError, "fix_IE_for_vary() got multiple values for keyword argument 'response'" );
                    goto error_exit;
                }

                _python_par_response = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "fix_IE_for_vary() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "fix_IE_for_vary() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "fix_IE_for_vary() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "fix_IE_for_vary() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "fix_IE_for_vary() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "fix_IE_for_vary() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "fix_IE_for_vary() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "fix_IE_for_vary() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "fix_IE_for_vary() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "fix_IE_for_vary() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "fix_IE_for_vary() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "fix_IE_for_vary() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "fix_IE_for_vary() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "fix_IE_for_vary() got multiple values for keyword argument 'request'" );
             goto error_exit;
         }

        _python_par_request = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_response != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "fix_IE_for_vary() got multiple values for keyword argument 'response'" );
             goto error_exit;
         }

        _python_par_response = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_4_fix_IE_for_vary_of_module_django__http__utils( self, _python_par_request, _python_par_response );

error_exit:;

    Py_XDECREF( _python_par_request );
    Py_XDECREF( _python_par_response );

    return NULL;
}

static PyObject *dparse_function_4_fix_IE_for_vary_of_module_django__http__utils( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_4_fix_IE_for_vary_of_module_django__http__utils( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_fix_IE_for_vary_of_module_django__http__utils( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_fix_location_header_of_module_django__http__utils(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_fix_location_header_of_module_django__http__utils,
        dparse_function_1_fix_location_header_of_module_django__http__utils,
        _python_str_plain_fix_location_header,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_1bea0f193f2f7cde594749f2b6c4ffab,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__utils,
        _python_str_digest_606b321b5d9fbd5d57c2365a287a1f17
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_conditional_content_removal_of_module_django__http__utils(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_conditional_content_removal_of_module_django__http__utils,
        dparse_function_2_conditional_content_removal_of_module_django__http__utils,
        _python_str_plain_conditional_content_removal,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_b227547af2153c2110f6bc6113c6e164,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__utils,
        _python_str_digest_eb8427dbc2129340bd3fdd1e2752348d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_fix_IE_for_attach_of_module_django__http__utils(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_fix_IE_for_attach_of_module_django__http__utils,
        dparse_function_3_fix_IE_for_attach_of_module_django__http__utils,
        _python_str_plain_fix_IE_for_attach,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_505422bf0a43e3b6e5360548882968d9,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__utils,
        _python_str_digest_8b01f3b0f0617172fc9a81ebc5618a56
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_fix_IE_for_vary_of_module_django__http__utils(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_fix_IE_for_vary_of_module_django__http__utils,
        dparse_function_4_fix_IE_for_vary_of_module_django__http__utils,
        _python_str_plain_fix_IE_for_vary,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_5d54d6ff62407f46c2db35cd6ffa6a47,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__http__utils,
        _python_str_digest_f5dc115610a4056c8a2b852dd7cbca3b
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.http.utils",   /* m_name */
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

MOD_INIT_DECL( django__http__utils )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__http__utils );
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

    // puts( "in initdjango__http__utils" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__http__utils = Py_InitModule4(
        "django.http.utils",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__http__utils = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__http__utils = (PyDictObject *)((PyModuleObject *)_module_django__http__utils)->md_dict;

    assertObject( _module_django__http__utils );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_6933cf8b490800fa3e9ba6a44929bef4, _module_django__http__utils );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__http__utils );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__http__utils != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__http__utils, (Nuitka_StringObject *)_python_str_plain___doc__, _python_str_digest_772a3e33c00d96489bf7e173ae80c17f );
    UPDATE_STRING_DICT0( _moduledict_django__http__utils, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_bfd8d1a1a67622fffad188d797dad23b );
    UPDATE_STRING_DICT1( _moduledict_django__http__utils, (Nuitka_StringObject *)_python_str_plain_fix_location_header, MAKE_FUNCTION_function_1_fix_location_header_of_module_django__http__utils(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__http__utils, (Nuitka_StringObject *)_python_str_plain_conditional_content_removal, MAKE_FUNCTION_function_2_conditional_content_removal_of_module_django__http__utils(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__http__utils, (Nuitka_StringObject *)_python_str_plain_fix_IE_for_attach, MAKE_FUNCTION_function_3_fix_IE_for_attach_of_module_django__http__utils(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__http__utils, (Nuitka_StringObject *)_python_str_plain_fix_IE_for_vary, MAKE_FUNCTION_function_4_fix_IE_for_vary_of_module_django__http__utils(  ) );

   return MOD_RETURN_VALUE( _module_django__http__utils );
}
