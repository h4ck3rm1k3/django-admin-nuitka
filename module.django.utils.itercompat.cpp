// Generated code for Python source for module 'django.utils.itercompat'
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

// The _module_django__utils__itercompat is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__utils__itercompat;
PyDictObject *_moduledict_django__utils__itercompat;

// The module level variables.
static PyObjectGlobalVariable_django__utils__itercompat _mvar_django__utils__itercompat_DeprecationWarning( &_module_django__utils__itercompat, &_python_str_plain_DeprecationWarning );
static PyObjectGlobalVariable_django__utils__itercompat _mvar_django__utils__itercompat_collections( &_module_django__utils__itercompat, &_python_str_plain_collections );
static PyObjectGlobalVariable_django__utils__itercompat _mvar_django__utils__itercompat_itertools( &_module_django__utils__itercompat, &_python_str_plain_itertools );
static PyObjectGlobalVariable_django__utils__itercompat _mvar_django__utils__itercompat_sys( &_module_django__utils__itercompat, &_python_str_plain_sys );
static PyObjectGlobalVariable_django__utils__itercompat _mvar_django__utils__itercompat_warnings( &_module_django__utils__itercompat, &_python_str_plain_warnings );

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_is_iterable_of_module_django__utils__itercompat(  );


static PyObject *MAKE_FUNCTION_function_2_is_iterator_of_module_django__utils__itercompat(  );


static PyObject *MAKE_FUNCTION_function_3_product_of_module_django__utils__itercompat(  );


// The module function definitions.
static PyObject *impl_function_1_is_iterable_of_module_django__utils__itercompat( Nuitka_FunctionObject *self, PyObject *_python_par_x )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_x( _python_str_plain_x, _python_par_x );

    // Actual function code.
    static PyFrameObject *frame_function_1_is_iterable_of_module_django__utils__itercompat = NULL;

    if ( isFrameUnusable( frame_function_1_is_iterable_of_module_django__utils__itercompat ) )
    {
        if ( frame_function_1_is_iterable_of_module_django__utils__itercompat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_is_iterable_of_module_django__utils__itercompat" );
#endif
            Py_DECREF( frame_function_1_is_iterable_of_module_django__utils__itercompat );
        }

        frame_function_1_is_iterable_of_module_django__utils__itercompat = MAKE_FRAME( _codeobj_9c32fc9cb5f2342b1227798645c9857d, _module_django__utils__itercompat );
    }

    FrameGuard frame_guard( frame_function_1_is_iterable_of_module_django__utils__itercompat );
    try
    {
        assert( Py_REFCNT( frame_function_1_is_iterable_of_module_django__utils__itercompat ) == 2 ); // Frame stack
        {
            PyObject *_python_tmp_unhandled_indicator = Py_True;
            frame_guard.setLineNumber( 15 );
            try
            {
                frame_guard.setLineNumber( 16 );
                DECREASE_REFCOUNT( MAKE_ITERATOR( _python_var_x.asObject() ) );
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

                if ( _exception.matches( PyExc_TypeError ) )
                {
                    frame_guard.detachFrame();
                    _python_tmp_unhandled_indicator = Py_False;
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
            if ( ( _python_tmp_unhandled_indicator == Py_True ) )
            {
                return INCREASE_REFCOUNT( Py_True );
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
        frame_guard.getFrame0()->f_locals = _python_var_x.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_1_is_iterable_of_module_django__utils__itercompat )
        {
           Py_DECREF( frame_function_1_is_iterable_of_module_django__utils__itercompat );
           frame_function_1_is_iterable_of_module_django__utils__itercompat = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1_is_iterable_of_module_django__utils__itercompat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "is_iterable() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "is_iterable() got multiple values for keyword argument 'x'" );
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
                    PyErr_Format( PyExc_TypeError, "is_iterable() got multiple values for keyword argument 'x'" );
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
                   "is_iterable() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "is_iterable() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "is_iterable() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "is_iterable() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "is_iterable() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "is_iterable() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "is_iterable() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "is_iterable() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "is_iterable() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "is_iterable() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "is_iterable() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "is_iterable() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "is_iterable() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "is_iterable() got multiple values for keyword argument 'x'" );
             goto error_exit;
         }

        _python_par_x = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_1_is_iterable_of_module_django__utils__itercompat( self, _python_par_x );

error_exit:;

    Py_XDECREF( _python_par_x );

    return NULL;
}

static PyObject *dparse_function_1_is_iterable_of_module_django__utils__itercompat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_1_is_iterable_of_module_django__utils__itercompat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_is_iterable_of_module_django__utils__itercompat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_is_iterator_of_module_django__utils__itercompat( Nuitka_FunctionObject *self, PyObject *_python_par_x )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_x( _python_str_plain_x, _python_par_x );

    // Actual function code.
    static PyFrameObject *frame_function_2_is_iterator_of_module_django__utils__itercompat = NULL;

    if ( isFrameUnusable( frame_function_2_is_iterator_of_module_django__utils__itercompat ) )
    {
        if ( frame_function_2_is_iterator_of_module_django__utils__itercompat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_is_iterator_of_module_django__utils__itercompat" );
#endif
            Py_DECREF( frame_function_2_is_iterator_of_module_django__utils__itercompat );
        }

        frame_function_2_is_iterator_of_module_django__utils__itercompat = MAKE_FRAME( _codeobj_17c875fff63dc2b91d056fdd8c618d15, _module_django__utils__itercompat );
    }

    FrameGuard frame_guard( frame_function_2_is_iterator_of_module_django__utils__itercompat );
    try
    {
        assert( Py_REFCNT( frame_function_2_is_iterator_of_module_django__utils__itercompat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 29 );
        if ( RICH_COMPARE_BOOL_GE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__itercompat_sys.asObject0(), _python_str_plain_version_info ) ).asObject(), _python_tuple_int_pos_2_int_pos_7_tuple ) )
        {
            frame_guard.setLineNumber( 30 );
            {
                PyObjectTempKeeper0 isinstance1;
                return INCREASE_REFCOUNT( BOOL_FROM( ( isinstance1.assign( _python_var_x.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__itercompat_collections.asObject0(), _python_str_plain_Iterator ) ).asObject() ) ) ) );
            }
        }
        frame_guard.setLineNumber( 31 );
        {
            PyObjectTempKeeper0 isinstance3;
            PyObjectTempKeeper0 keeper_0;
            return INCREASE_REFCOUNT( ( CHECK_IF_TRUE( keeper_0.assign( BOOL_FROM( ( isinstance3.assign( _python_var_x.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils__itercompat_collections.asObject0(), _python_str_plain_Iterator ) ).asObject() ) ) ) ) ) ? BOOL_FROM( HAS_ATTRIBUTE( _python_var_x.asObject(), _python_str_plain___iter__ ) ) : keeper_0.asObject0() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_x.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_2_is_iterator_of_module_django__utils__itercompat )
        {
           Py_DECREF( frame_function_2_is_iterator_of_module_django__utils__itercompat );
           frame_function_2_is_iterator_of_module_django__utils__itercompat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_is_iterator_of_module_django__utils__itercompat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "is_iterator() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "is_iterator() got multiple values for keyword argument 'x'" );
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
                    PyErr_Format( PyExc_TypeError, "is_iterator() got multiple values for keyword argument 'x'" );
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
                   "is_iterator() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "is_iterator() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "is_iterator() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "is_iterator() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "is_iterator() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "is_iterator() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "is_iterator() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "is_iterator() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "is_iterator() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "is_iterator() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "is_iterator() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "is_iterator() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "is_iterator() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "is_iterator() got multiple values for keyword argument 'x'" );
             goto error_exit;
         }

        _python_par_x = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2_is_iterator_of_module_django__utils__itercompat( self, _python_par_x );

error_exit:;

    Py_XDECREF( _python_par_x );

    return NULL;
}

static PyObject *dparse_function_2_is_iterator_of_module_django__utils__itercompat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2_is_iterator_of_module_django__utils__itercompat( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_is_iterator_of_module_django__utils__itercompat( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_product_of_module_django__utils__itercompat( Nuitka_FunctionObject *self, PyObject *_python_par_args, PyObject *_python_par_kwds )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_args( _python_str_plain_args, _python_par_args );
    PyObjectLocalParameterVariableNoDel _python_var_kwds( _python_str_plain_kwds, _python_par_kwds );

    // Actual function code.
    static PyFrameObject *frame_function_3_product_of_module_django__utils__itercompat = NULL;

    if ( isFrameUnusable( frame_function_3_product_of_module_django__utils__itercompat ) )
    {
        if ( frame_function_3_product_of_module_django__utils__itercompat )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_product_of_module_django__utils__itercompat" );
#endif
            Py_DECREF( frame_function_3_product_of_module_django__utils__itercompat );
        }

        frame_function_3_product_of_module_django__utils__itercompat = MAKE_FRAME( _codeobj_5a5f61172920b2d32f83c6e8f0ec339a, _module_django__utils__itercompat );
    }

    FrameGuard frame_guard( frame_function_3_product_of_module_django__utils__itercompat );
    try
    {
        assert( Py_REFCNT( frame_function_3_product_of_module_django__utils__itercompat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 34 );
        {
            PyObjectTempKeeper1 call1;
            DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__itercompat_warnings.asObject0(), _python_str_plain_warn ) ), CALL_FUNCTION( call1.asObject0(), PyObjectTemporary( MAKE_TUPLE2( _python_str_digest_1f7aab590a0bde4187091844fc2b876d, _mvar_django__utils__itercompat_DeprecationWarning.asObject0() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_f154c9a58c9419d7e391901d7b7fe49e ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 36 );
        {
            PyObjectTempKeeper1 call_tmp4;
            PyObjectTempKeeper0 call_tmp5;
            return ( call_tmp4.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils__itercompat_itertools.asObject0(), _python_str_plain_product ) ), call_tmp5.assign( _python_var_args.asObject() ), impl_function_1_complex_call_helper_star_list_star_dict_of_module___internal__( call_tmp4.asObject(), call_tmp5.asObject(), _python_var_kwds.asObject1() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_kwds.updateLocalsDict( _python_var_args.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_3_product_of_module_django__utils__itercompat )
        {
           Py_DECREF( frame_function_3_product_of_module_django__utils__itercompat );
           frame_function_3_product_of_module_django__utils__itercompat = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_product_of_module_django__utils__itercompat( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_args = NULL;
    PyObject *_python_par_kwds = NULL;

    if ( kw == NULL )
    {
        _python_par_kwds = PyDict_New();
    }
    else
    {
        if ( ((PyDictObject *)kw)->ma_used > 0 )
        {
#if PYTHON_VERSION < 330
            _python_par_kwds = _PyDict_NewPresized( ((PyDictObject *)kw)->ma_used  );

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
                        PyErr_Format( PyExc_TypeError, "product() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_kwds, entry->me_key, entry->me_value );

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
                    PyErr_Format( PyExc_TypeError, "product() keywords must be strings" );
                    goto error_exit;
                }

                split_copy->ma_values[ i ] = INCREASE_REFCOUNT_X( mp->ma_values[ i ] );
            }

            _python_par_kwds = (PyObject *)split_copy;
        }
        else
        {
            _python_par_kwds = PyDict_New();

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
                        PyErr_Format( PyExc_TypeError, "product() keywords must be strings" );
                        goto error_exit;
                    }

                    int res = PyDict_SetItem( _python_par_kwds, entry->me_key, value );

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
            _python_par_kwds = PyDict_New();
        }
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 0 ))
    {
        if ( 0 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "product() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "product() takes at least %d non-keyword arguments (%zd given)", 0, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "product() takes at least %d arguments (%zd given)", 0, args_given + kw_found );
            }
        }

        goto error_exit;
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 0 )
    {
        _python_par_args = PyTuple_New( args_size - 0 );

        for( Py_ssize_t i = 0; i < args_size - 0; i++ )
        {
           PyTuple_SET_ITEM( _python_par_args, i, INCREASE_REFCOUNT( args[0+i] ) );
        }
    }
    else
    {
        _python_par_args = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_3_product_of_module_django__utils__itercompat( self, _python_par_args, _python_par_kwds );

error_exit:;

    Py_XDECREF( _python_par_args );
    Py_XDECREF( _python_par_kwds );

    return NULL;
}

static PyObject *dparse_function_3_product_of_module_django__utils__itercompat( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_3_product_of_module_django__utils__itercompat( self, MAKE_TUPLE( &args[ 0 ], size > 0 ? size-0 : 0 ), PyDict_New() );
    }
    else
    {
        PyObject *result = fparse_function_3_product_of_module_django__utils__itercompat( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_is_iterable_of_module_django__utils__itercompat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_is_iterable_of_module_django__utils__itercompat,
        dparse_function_1_is_iterable_of_module_django__utils__itercompat,
        _python_str_plain_is_iterable,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_9c32fc9cb5f2342b1227798645c9857d,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__itercompat,
        _python_str_digest_57cc71e691f2eaf92fdcef83c6838492
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_is_iterator_of_module_django__utils__itercompat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_is_iterator_of_module_django__utils__itercompat,
        dparse_function_2_is_iterator_of_module_django__utils__itercompat,
        _python_str_plain_is_iterator,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_17c875fff63dc2b91d056fdd8c618d15,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__itercompat,
        _python_str_digest_baf09ebe167bdcba33f69447e183e8c9
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_product_of_module_django__utils__itercompat(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_product_of_module_django__utils__itercompat,
        dparse_function_3_product_of_module_django__utils__itercompat,
        _python_str_plain_product,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_5a5f61172920b2d32f83c6e8f0ec339a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils__itercompat,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.utils.itercompat",   /* m_name */
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

MOD_INIT_DECL( django__utils__itercompat )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__utils__itercompat );
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

    // puts( "in initdjango__utils__itercompat" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__utils__itercompat = Py_InitModule4(
        "django.utils.itercompat",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__utils__itercompat = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__utils__itercompat = (PyDictObject *)((PyModuleObject *)_module_django__utils__itercompat)->md_dict;

    assertObject( _module_django__utils__itercompat );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_0599d93f624d0369bf099e5d99880ff0, _module_django__utils__itercompat );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__utils__itercompat );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__utils__itercompat != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__utils__itercompat, (Nuitka_StringObject *)_python_str_plain___doc__, _python_str_digest_fffbaf876637fea849b8c90c4dc4d995 );
    UPDATE_STRING_DICT0( _moduledict_django__utils__itercompat, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_76fbb93e38675484101cdc177f4ef95c );
    PyFrameObject *frame_module_django__utils__itercompat = MAKE_FRAME( _codeobj_0522fd6e8dd709cb2af241b0512e12b1, _module_django__utils__itercompat );

    FrameGuard frame_guard( frame_module_django__utils__itercompat );
    try
    {
        assert( Py_REFCNT( frame_module_django__utils__itercompat ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 7 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__itercompat, (Nuitka_StringObject *)_python_str_plain_collections, IMPORT_MODULE( _python_str_plain_collections, ((PyModuleObject *)_module_django__utils__itercompat)->md_dict, ((PyModuleObject *)_module_django__utils__itercompat)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 8 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__itercompat, (Nuitka_StringObject *)_python_str_plain_itertools, IMPORT_MODULE( _python_str_plain_itertools, ((PyModuleObject *)_module_django__utils__itercompat)->md_dict, ((PyModuleObject *)_module_django__utils__itercompat)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 9 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__itercompat, (Nuitka_StringObject *)_python_str_plain_sys, IMPORT_MODULE( _python_str_plain_sys, ((PyModuleObject *)_module_django__utils__itercompat)->md_dict, ((PyModuleObject *)_module_django__utils__itercompat)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 10 );
        UPDATE_STRING_DICT1( _moduledict_django__utils__itercompat, (Nuitka_StringObject *)_python_str_plain_warnings, IMPORT_MODULE( _python_str_plain_warnings, ((PyModuleObject *)_module_django__utils__itercompat)->md_dict, ((PyModuleObject *)_module_django__utils__itercompat)->md_dict, Py_None, _python_int_neg_1 ) );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__utils__itercompat)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__utils__itercompat, (Nuitka_StringObject *)_python_str_plain_is_iterable, MAKE_FUNCTION_function_1_is_iterable_of_module_django__utils__itercompat(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__itercompat, (Nuitka_StringObject *)_python_str_plain_is_iterator, MAKE_FUNCTION_function_2_is_iterator_of_module_django__utils__itercompat(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils__itercompat, (Nuitka_StringObject *)_python_str_plain_product, MAKE_FUNCTION_function_3_product_of_module_django__utils__itercompat(  ) );

   return MOD_RETURN_VALUE( _module_django__utils__itercompat );
}
