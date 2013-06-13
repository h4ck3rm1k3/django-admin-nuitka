// Generated code for Python source for module 'django.core.files.move'
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

// The _module_django__core__files__move is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__core__files__move;
PyDictObject *_moduledict_django__core__files__move;

// The module level variables.
static PyObjectGlobalVariable_django__core__files__move _mvar_django__core__files__move__samefile( &_module_django__core__files__move, &_python_str_plain__samefile );
static PyObjectGlobalVariable_django__core__files__move _mvar_django__core__files__move_copystat( &_module_django__core__files__move, &_python_str_plain_copystat );
static PyObjectGlobalVariable_django__core__files__move _mvar_django__core__files__move_locks( &_module_django__core__files__move, &_python_str_plain_locks );
static PyObjectGlobalVariable_django__core__files__move _mvar_django__core__files__move_os( &_module_django__core__files__move, &_python_str_plain_os );
static PyObjectGlobalVariable_django__core__files__move _mvar_django__core__files__move_stat( &_module_django__core__files__move, &_python_str_plain_stat );

// The module function declarations.
static PyObject *MAKE_FUNCTION_function_1_copystat_of_module_django__core__files__move(  );


static PyObject *MAKE_FUNCTION_function_2__samefile_of_module_django__core__files__move(  );


static PyObject *MAKE_FUNCTION_function_3_file_move_safe_of_module_django__core__files__move(  );


// The module function definitions.
static PyObject *impl_function_1_copystat_of_module_django__core__files__move( Nuitka_FunctionObject *self, PyObject *_python_par_src, PyObject *_python_par_dst )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_src( _python_str_plain_src, _python_par_src );
    PyObjectLocalParameterVariableNoDel _python_var_dst( _python_str_plain_dst, _python_par_dst );
    PyObjectLocalVariable _python_var_st( _python_str_plain_st );
    PyObjectLocalVariable _python_var_mode( _python_str_plain_mode );

    // Actual function code.
    static PyFrameObject *frame_function_1_copystat_of_module_django__core__files__move = NULL;

    if ( isFrameUnusable( frame_function_1_copystat_of_module_django__core__files__move ) )
    {
        if ( frame_function_1_copystat_of_module_django__core__files__move )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1_copystat_of_module_django__core__files__move" );
#endif
            Py_DECREF( frame_function_1_copystat_of_module_django__core__files__move );
        }

        frame_function_1_copystat_of_module_django__core__files__move = MAKE_FRAME( _codeobj_69f06c62af1d1ed8f004f052562d0161, _module_django__core__files__move );
    }

    FrameGuard frame_guard( frame_function_1_copystat_of_module_django__core__files__move );
    try
    {
        assert( Py_REFCNT( frame_function_1_copystat_of_module_django__core__files__move ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 17 );
        {
            PyObjectTempKeeper1 call1;
            _python_var_st.assign1( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__files__move_os.asObject0(), _python_str_plain_stat ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_src.asObject() ) ) );
        }
        frame_guard.setLineNumber( 18 );
        {
            PyObjectTempKeeper1 call3;
            _python_var_mode.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__files__move_stat.asObject0(), _python_str_plain_S_IMODE ) ), CALL_FUNCTION_WITH_ARGS( call3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_st.asObject(), _python_str_plain_st_mode ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 19 );
        if ( HAS_ATTRIBUTE( _mvar_django__core__files__move_os.asObject0(), _python_str_plain_utime ) )
        {
            frame_guard.setLineNumber( 20 );
            {
                PyObjectTempKeeper1 call7;
                PyObjectTempKeeper0 call8;
                PyObjectTempKeeper1 make_tuple5;
                DECREASE_REFCOUNT( ( call7.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__files__move_os.asObject0(), _python_str_plain_utime ) ), call8.assign( _python_var_dst.asObject() ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), call8.asObject0(), PyObjectTemporary( ( make_tuple5.assign( LOOKUP_ATTRIBUTE( _python_var_st.asObject(), _python_str_plain_st_atime ) ), MAKE_TUPLE2( make_tuple5.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_st.asObject(), _python_str_plain_st_mtime ) ).asObject() ) ) ).asObject() ) ) );
            }
        }
        frame_guard.setLineNumber( 21 );
        if ( HAS_ATTRIBUTE( _mvar_django__core__files__move_os.asObject0(), _python_str_plain_chmod ) )
        {
            frame_guard.setLineNumber( 22 );
            {
                PyObjectTempKeeper1 call10;
                PyObjectTempKeeper0 call11;
                DECREASE_REFCOUNT( ( call10.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__files__move_os.asObject0(), _python_str_plain_chmod ) ), call11.assign( _python_var_dst.asObject() ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), call11.asObject0(), _python_var_mode.asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_dst.updateLocalsDict( _python_var_src.updateLocalsDict( _python_var_mode.updateLocalsDict( _python_var_st.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1_copystat_of_module_django__core__files__move )
        {
           Py_DECREF( frame_function_1_copystat_of_module_django__core__files__move );
           frame_function_1_copystat_of_module_django__core__files__move = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1_copystat_of_module_django__core__files__move( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_src = NULL;
    PyObject *_python_par_dst = NULL;
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
                PyErr_Format( PyExc_TypeError, "copystat() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_src == key )
            {
                if (unlikely( _python_par_src ))
                {
                    PyErr_Format( PyExc_TypeError, "copystat() got multiple values for keyword argument 'src'" );
                    goto error_exit;
                }

                _python_par_src = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_dst == key )
            {
                if (unlikely( _python_par_dst ))
                {
                    PyErr_Format( PyExc_TypeError, "copystat() got multiple values for keyword argument 'dst'" );
                    goto error_exit;
                }

                _python_par_dst = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_src, key ) )
            {
                if (unlikely( _python_par_src ))
                {
                    PyErr_Format( PyExc_TypeError, "copystat() got multiple values for keyword argument 'src'" );
                    goto error_exit;
                }

                _python_par_src = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_dst, key ) )
            {
                if (unlikely( _python_par_dst ))
                {
                    PyErr_Format( PyExc_TypeError, "copystat() got multiple values for keyword argument 'dst'" );
                    goto error_exit;
                }

                _python_par_dst = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "copystat() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "copystat() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "copystat() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "copystat() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "copystat() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "copystat() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "copystat() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "copystat() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "copystat() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "copystat() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "copystat() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "copystat() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "copystat() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_src != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "copystat() got multiple values for keyword argument 'src'" );
             goto error_exit;
         }

        _python_par_src = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_dst != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "copystat() got multiple values for keyword argument 'dst'" );
             goto error_exit;
         }

        _python_par_dst = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_1_copystat_of_module_django__core__files__move( self, _python_par_src, _python_par_dst );

error_exit:;

    Py_XDECREF( _python_par_src );
    Py_XDECREF( _python_par_dst );

    return NULL;
}

static PyObject *dparse_function_1_copystat_of_module_django__core__files__move( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_1_copystat_of_module_django__core__files__move( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1_copystat_of_module_django__core__files__move( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2__samefile_of_module_django__core__files__move( Nuitka_FunctionObject *self, PyObject *_python_par_src, PyObject *_python_par_dst )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_src( _python_str_plain_src, _python_par_src );
    PyObjectLocalParameterVariableNoDel _python_var_dst( _python_str_plain_dst, _python_par_dst );

    // Actual function code.
    static PyFrameObject *frame_function_2__samefile_of_module_django__core__files__move = NULL;

    if ( isFrameUnusable( frame_function_2__samefile_of_module_django__core__files__move ) )
    {
        if ( frame_function_2__samefile_of_module_django__core__files__move )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2__samefile_of_module_django__core__files__move" );
#endif
            Py_DECREF( frame_function_2__samefile_of_module_django__core__files__move );
        }

        frame_function_2__samefile_of_module_django__core__files__move = MAKE_FRAME( _codeobj_9d4b68034ca89a8e7dfc40692b198193, _module_django__core__files__move );
    }

    FrameGuard frame_guard( frame_function_2__samefile_of_module_django__core__files__move );
    try
    {
        assert( Py_REFCNT( frame_function_2__samefile_of_module_django__core__files__move ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 28 );
        if ( HAS_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__move_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_samefile ) )
        {
            frame_guard.setLineNumber( 29 );
            try
            {
                frame_guard.setLineNumber( 30 );
                {
                    PyObjectTempKeeper1 call1;
                    PyObjectTempKeeper0 call2;
                    return ( call1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__move_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_samefile ) ), call2.assign( _python_var_src.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _python_var_dst.asObject() ) );
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

                if ( _exception.matches( PyExc_OSError ) )
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
        }
        frame_guard.setLineNumber( 35 );
        {
            PyObjectTempKeeper1 call10;
            PyObjectTempKeeper1 call4;
            PyObjectTempKeeper1 call6;
            PyObjectTempKeeper1 call8;
            PyObjectTempKeeper1 cmp12;
            return ( cmp12.assign( ( call6.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__move_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_normcase ) ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), PyObjectTemporary( ( call4.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__move_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_abspath ) ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), _python_var_src.asObject() ) ) ).asObject() ) ) ), RICH_COMPARE_EQ( cmp12.asObject0(), PyObjectTemporary( ( call10.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__move_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_normcase ) ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), PyObjectTemporary( ( call8.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__move_os.asObject0(), _python_str_plain_path ) ).asObject(), _python_str_plain_abspath ) ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), _python_var_dst.asObject() ) ) ).asObject() ) ) ).asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_dst.updateLocalsDict( _python_var_src.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_2__samefile_of_module_django__core__files__move )
        {
           Py_DECREF( frame_function_2__samefile_of_module_django__core__files__move );
           frame_function_2__samefile_of_module_django__core__files__move = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2__samefile_of_module_django__core__files__move( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_src = NULL;
    PyObject *_python_par_dst = NULL;
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
                PyErr_Format( PyExc_TypeError, "_samefile() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_src == key )
            {
                if (unlikely( _python_par_src ))
                {
                    PyErr_Format( PyExc_TypeError, "_samefile() got multiple values for keyword argument 'src'" );
                    goto error_exit;
                }

                _python_par_src = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_dst == key )
            {
                if (unlikely( _python_par_dst ))
                {
                    PyErr_Format( PyExc_TypeError, "_samefile() got multiple values for keyword argument 'dst'" );
                    goto error_exit;
                }

                _python_par_dst = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_src, key ) )
            {
                if (unlikely( _python_par_src ))
                {
                    PyErr_Format( PyExc_TypeError, "_samefile() got multiple values for keyword argument 'src'" );
                    goto error_exit;
                }

                _python_par_src = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_dst, key ) )
            {
                if (unlikely( _python_par_dst ))
                {
                    PyErr_Format( PyExc_TypeError, "_samefile() got multiple values for keyword argument 'dst'" );
                    goto error_exit;
                }

                _python_par_dst = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "_samefile() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "_samefile() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "_samefile() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "_samefile() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "_samefile() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_samefile() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_samefile() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "_samefile() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "_samefile() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "_samefile() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "_samefile() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "_samefile() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "_samefile() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_src != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_samefile() got multiple values for keyword argument 'src'" );
             goto error_exit;
         }

        _python_par_src = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_dst != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "_samefile() got multiple values for keyword argument 'dst'" );
             goto error_exit;
         }

        _python_par_dst = INCREASE_REFCOUNT( args[ 1 ] );
    }


    return impl_function_2__samefile_of_module_django__core__files__move( self, _python_par_src, _python_par_dst );

error_exit:;

    Py_XDECREF( _python_par_src );
    Py_XDECREF( _python_par_dst );

    return NULL;
}

static PyObject *dparse_function_2__samefile_of_module_django__core__files__move( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_2__samefile_of_module_django__core__files__move( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2__samefile_of_module_django__core__files__move( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_file_move_safe_of_module_django__core__files__move( Nuitka_FunctionObject *self, PyObject *_python_par_old_file_name, PyObject *_python_par_new_file_name, PyObject *_python_par_chunk_size, PyObject *_python_par_allow_overwrite )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_old_file_name( _python_str_plain_old_file_name, _python_par_old_file_name );
    PyObjectLocalParameterVariableNoDel _python_var_new_file_name( _python_str_plain_new_file_name, _python_par_new_file_name );
    PyObjectLocalParameterVariableNoDel _python_var_chunk_size( _python_str_plain_chunk_size, _python_par_chunk_size );
    PyObjectLocalParameterVariableNoDel _python_var_allow_overwrite( _python_str_plain_allow_overwrite, _python_par_allow_overwrite );
    PyObjectLocalVariable _python_var_old_file( _python_str_plain_old_file );
    PyObjectLocalVariable _python_var_fd( _python_str_plain_fd );
    PyObjectLocalVariable _python_var_current_chunk( _python_str_plain_current_chunk );
    PyObjectLocalVariable _python_var_e( _python_str_plain_e );

    // Actual function code.
    static PyFrameObject *frame_function_3_file_move_safe_of_module_django__core__files__move = NULL;

    if ( isFrameUnusable( frame_function_3_file_move_safe_of_module_django__core__files__move ) )
    {
        if ( frame_function_3_file_move_safe_of_module_django__core__files__move )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_file_move_safe_of_module_django__core__files__move" );
#endif
            Py_DECREF( frame_function_3_file_move_safe_of_module_django__core__files__move );
        }

        frame_function_3_file_move_safe_of_module_django__core__files__move = MAKE_FRAME( _codeobj_011011c33c0d7547258aae2629571def, _module_django__core__files__move );
    }

    FrameGuard frame_guard( frame_function_3_file_move_safe_of_module_django__core__files__move );
    try
    {
        assert( Py_REFCNT( frame_function_3_file_move_safe_of_module_django__core__files__move ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 50 );
        {
            PyObjectTempKeeper0 call1;
            PyObjectTempKeeper0 call2;
            if ( CHECK_IF_TRUE( PyObjectTemporary( ( call1.assign( _mvar_django__core__files__move__samefile.asObject0() ), call2.assign( _python_var_old_file_name.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _python_var_new_file_name.asObject() ) ) ).asObject() ) )
        {
            return INCREASE_REFCOUNT( Py_None );
        }
        }
        frame_guard.setLineNumber( 53 );
        try
        {
            frame_guard.setLineNumber( 54 );
            {
                PyObjectTempKeeper1 call4;
                PyObjectTempKeeper0 call5;
                DECREASE_REFCOUNT( ( call4.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__files__move_os.asObject0(), _python_str_plain_rename ) ), call5.assign( _python_var_old_file_name.asObject() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), call5.asObject0(), _python_var_new_file_name.asObject() ) ) );
            }
            return INCREASE_REFCOUNT( Py_None );
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

            if ( _exception.matches( PyExc_OSError ) )
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
        {
            frame_guard.setLineNumber( 62 );
            PyObjectTemporary _python_tmp_with_source( OPEN_FILE( _python_var_old_file_name.asObject(), _python_str_plain_rb, NULL ) );
            PyObjectTemporary _python_tmp_with_exit( LOOKUP_SPECIAL( _python_tmp_with_source.asObject(), _python_str_plain___exit__ ) );
            PyObjectTemporary _python_tmp_with_enter( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_SPECIAL( _python_tmp_with_source.asObject(), _python_str_plain___enter__ ) ).asObject() ) );
            PyObject *_python_tmp_indicator = Py_True;
            PythonExceptionKeeper _caught_1;


            try
            {
                try
                {
                    _python_var_old_file.assign0( _python_tmp_with_enter.asObject() );
                    frame_guard.setLineNumber( 64 );
                    {
                        PyObjectTempKeeper1 call13;
                        PyObjectTempKeeper0 call14;
                        PyObjectTempKeeper1 op11;
                        PyObjectTempKeeper1 op7;
                        PyObjectTempKeeper1 op9;
                        _python_var_fd.assign1( ( call13.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__files__move_os.asObject0(), _python_str_plain_open ) ), call14.assign( _python_var_new_file_name.asObject() ), CALL_FUNCTION_WITH_ARGS( call13.asObject0(), call14.asObject0(), PyObjectTemporary( ( op11.assign( ( op9.assign( ( op7.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__files__move_os.asObject0(), _python_str_plain_O_WRONLY ) ), BINARY_OPERATION( PyNumber_Or, op7.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__move_os.asObject0(), _python_str_plain_O_CREAT ) ).asObject() ) ) ), BINARY_OPERATION( PyNumber_Or, op9.asObject0(), PyObjectTemporary( BUILTIN_GETATTR( _mvar_django__core__files__move_os.asObject0(), _python_str_plain_O_BINARY, _python_int_0 ) ).asObject() ) ) ), BINARY_OPERATION( PyNumber_Or, op11.asObject0(), PyObjectTemporary( ( (!( CHECK_IF_TRUE( _python_var_allow_overwrite.asObject() ) )) ? LOOKUP_ATTRIBUTE( _mvar_django__core__files__move_os.asObject0(), _python_str_plain_O_EXCL ) : INCREASE_REFCOUNT( _python_int_0 ) ) ).asObject() ) ) ).asObject() ) ) );
                    }
                    frame_guard.setLineNumber( 66 );
                    PythonExceptionKeeper _caught_2;


                    try
                    {
                        frame_guard.setLineNumber( 67 );
                        {
                            PyObjectTempKeeper1 call20;
                            PyObjectTempKeeper0 call21;
                            DECREASE_REFCOUNT( ( call20.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__files__move_locks.asObject0(), _python_str_plain_lock ) ), call21.assign( _python_var_fd.asObject() ), CALL_FUNCTION_WITH_ARGS( call20.asObject0(), call21.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__move_locks.asObject0(), _python_str_plain_LOCK_EX ) ).asObject() ) ) );
                        }
                        _python_var_current_chunk.assign0( Py_None );
                        frame_guard.setLineNumber( 69 );
                        while( true )
                        {
                            frame_guard.setLineNumber( 69 );
                            if ( (!( RICH_COMPARE_BOOL_NE( _python_var_current_chunk.asObject(), _python_str_empty ) )) )
                            {
                                frame_guard.setLineNumber( 69 );
                                break;
                            }
                            frame_guard.setLineNumber( 70 );
                            {
                                PyObjectTempKeeper1 call23;
                                _python_var_current_chunk.assign1( ( call23.assign( LOOKUP_ATTRIBUTE( _python_var_old_file.asObject(), _python_str_plain_read ) ), CALL_FUNCTION_WITH_ARGS( call23.asObject0(), _python_var_chunk_size.asObject() ) ) );
                            }
                            frame_guard.setLineNumber( 71 );
                            {
                                PyObjectTempKeeper1 call25;
                                PyObjectTempKeeper0 call26;
                                DECREASE_REFCOUNT( ( call25.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__files__move_os.asObject0(), _python_str_plain_write ) ), call26.assign( _python_var_fd.asObject() ), CALL_FUNCTION_WITH_ARGS( call25.asObject0(), call26.asObject0(), _python_var_current_chunk.asObject() ) ) );
                            }

                           CONSIDER_THREADING();
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

                        _caught_2.save( _exception );

#if PYTHON_VERSION >= 300
                        frame_guard.preserveExistingException();

                        _exception.toExceptionHandler();
#endif
                    }

                    // Final code:
                    frame_guard.setLineNumber( 73 );
                    {
                        PyObjectTempKeeper1 call16;
                        DECREASE_REFCOUNT( ( call16.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__files__move_locks.asObject0(), _python_str_plain_unlock ) ), CALL_FUNCTION_WITH_ARGS( call16.asObject0(), _python_var_fd.asObject() ) ) );
                    }
                    frame_guard.setLineNumber( 74 );
                    {
                        PyObjectTempKeeper1 call18;
                        DECREASE_REFCOUNT( ( call18.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__files__move_os.asObject0(), _python_str_plain_close ) ), CALL_FUNCTION_WITH_ARGS( call18.asObject0(), _python_var_fd.asObject() ) ) );
                    }
                    _caught_2.rethrow();
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

                    if ( _exception.matches( PyExc_BaseException ) )
                    {
                        frame_guard.detachFrame();
                        _python_tmp_indicator = Py_False;
                        if ( (!( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_ARGS( _python_tmp_with_exit.asObject(), _exception.getType(), _exception.getValue(), (PyObject *)_exception.getTraceback() ) ).asObject() ) )) )
                        {
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

                _caught_1.save( _exception );

#if PYTHON_VERSION >= 300
                frame_guard.preserveExistingException();

                _exception.toExceptionHandler();
#endif
            }

            // Final code:
            if ( ( _python_tmp_indicator == Py_True ) )
            {
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_ARGS( _python_tmp_with_exit.asObject(), Py_None, Py_None, Py_None ) );
            }
            _caught_1.rethrow();
        }
        frame_guard.setLineNumber( 75 );
        {
            PyObjectTempKeeper0 call28;
            PyObjectTempKeeper0 call29;
            DECREASE_REFCOUNT( ( call28.assign( _mvar_django__core__files__move_copystat.asObject0() ), call29.assign( _python_var_old_file_name.asObject() ), CALL_FUNCTION_WITH_ARGS( call28.asObject0(), call29.asObject0(), _python_var_new_file_name.asObject() ) ) );
        }
        frame_guard.setLineNumber( 77 );
        try
        {
            frame_guard.setLineNumber( 78 );
            {
                PyObjectTempKeeper1 call31;
                DECREASE_REFCOUNT( ( call31.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__files__move_os.asObject0(), _python_str_plain_remove ) ), CALL_FUNCTION_WITH_ARGS( call31.asObject0(), _python_var_old_file_name.asObject() ) ) );
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

            if ( _exception.matches( PyExc_OSError ) )
            {
                frame_guard.detachFrame();
                _python_var_e.assign0( _exception.getValue() );
                frame_guard.setLineNumber( 84 );
                if ( ( RICH_COMPARE_BOOL_NE( PyObjectTemporary( BUILTIN_GETATTR( _python_var_e.asObject(), _python_str_plain_winerror, _python_int_0 ) ).asObject(), _python_int_pos_32 ) && RICH_COMPARE_BOOL_NE( PyObjectTemporary( BUILTIN_GETATTR( _python_var_e.asObject(), _python_str_plain_errno, _python_int_0 ) ).asObject(), _python_int_pos_13 ) ) )
                {
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
        frame_guard.getFrame0()->f_locals = _python_var_allow_overwrite.updateLocalsDict( _python_var_chunk_size.updateLocalsDict( _python_var_new_file_name.updateLocalsDict( _python_var_old_file_name.updateLocalsDict( _python_var_e.updateLocalsDict( _python_var_current_chunk.updateLocalsDict( _python_var_fd.updateLocalsDict( _python_var_old_file.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_file_move_safe_of_module_django__core__files__move )
        {
           Py_DECREF( frame_function_3_file_move_safe_of_module_django__core__files__move );
           frame_function_3_file_move_safe_of_module_django__core__files__move = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_3_file_move_safe_of_module_django__core__files__move( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_old_file_name = NULL;
    PyObject *_python_par_new_file_name = NULL;
    PyObject *_python_par_chunk_size = NULL;
    PyObject *_python_par_allow_overwrite = NULL;
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
                PyErr_Format( PyExc_TypeError, "file_move_safe() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_old_file_name == key )
            {
                if (unlikely( _python_par_old_file_name ))
                {
                    PyErr_Format( PyExc_TypeError, "file_move_safe() got multiple values for keyword argument 'old_file_name'" );
                    goto error_exit;
                }

                _python_par_old_file_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_new_file_name == key )
            {
                if (unlikely( _python_par_new_file_name ))
                {
                    PyErr_Format( PyExc_TypeError, "file_move_safe() got multiple values for keyword argument 'new_file_name'" );
                    goto error_exit;
                }

                _python_par_new_file_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_chunk_size == key )
            {
                if (unlikely( _python_par_chunk_size ))
                {
                    PyErr_Format( PyExc_TypeError, "file_move_safe() got multiple values for keyword argument 'chunk_size'" );
                    goto error_exit;
                }

                _python_par_chunk_size = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_allow_overwrite == key )
            {
                if (unlikely( _python_par_allow_overwrite ))
                {
                    PyErr_Format( PyExc_TypeError, "file_move_safe() got multiple values for keyword argument 'allow_overwrite'" );
                    goto error_exit;
                }

                _python_par_allow_overwrite = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_old_file_name, key ) )
            {
                if (unlikely( _python_par_old_file_name ))
                {
                    PyErr_Format( PyExc_TypeError, "file_move_safe() got multiple values for keyword argument 'old_file_name'" );
                    goto error_exit;
                }

                _python_par_old_file_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_new_file_name, key ) )
            {
                if (unlikely( _python_par_new_file_name ))
                {
                    PyErr_Format( PyExc_TypeError, "file_move_safe() got multiple values for keyword argument 'new_file_name'" );
                    goto error_exit;
                }

                _python_par_new_file_name = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_chunk_size, key ) )
            {
                if (unlikely( _python_par_chunk_size ))
                {
                    PyErr_Format( PyExc_TypeError, "file_move_safe() got multiple values for keyword argument 'chunk_size'" );
                    goto error_exit;
                }

                _python_par_chunk_size = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_allow_overwrite, key ) )
            {
                if (unlikely( _python_par_allow_overwrite ))
                {
                    PyErr_Format( PyExc_TypeError, "file_move_safe() got multiple values for keyword argument 'allow_overwrite'" );
                    goto error_exit;
                }

                _python_par_allow_overwrite = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "file_move_safe() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "file_move_safe() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "file_move_safe() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "file_move_safe() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "file_move_safe() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "file_move_safe() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "file_move_safe() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "file_move_safe() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "file_move_safe() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 4 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "file_move_safe() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "file_move_safe() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "file_move_safe() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "file_move_safe() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 4 ? args_given : 4;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_old_file_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "file_move_safe() got multiple values for keyword argument 'old_file_name'" );
             goto error_exit;
         }

        _python_par_old_file_name = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_new_file_name != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "file_move_safe() got multiple values for keyword argument 'new_file_name'" );
             goto error_exit;
         }

        _python_par_new_file_name = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_chunk_size != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "file_move_safe() got multiple values for keyword argument 'chunk_size'" );
             goto error_exit;
         }

        _python_par_chunk_size = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_allow_overwrite != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "file_move_safe() got multiple values for keyword argument 'allow_overwrite'" );
             goto error_exit;
         }

        _python_par_allow_overwrite = INCREASE_REFCOUNT( args[ 3 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_chunk_size == NULL )
    {
        _python_par_chunk_size = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_chunk_size );
    }
    if ( _python_par_allow_overwrite == NULL )
    {
        _python_par_allow_overwrite = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_allow_overwrite );
    }


    return impl_function_3_file_move_safe_of_module_django__core__files__move( self, _python_par_old_file_name, _python_par_new_file_name, _python_par_chunk_size, _python_par_allow_overwrite );

error_exit:;

    Py_XDECREF( _python_par_old_file_name );
    Py_XDECREF( _python_par_new_file_name );
    Py_XDECREF( _python_par_chunk_size );
    Py_XDECREF( _python_par_allow_overwrite );

    return NULL;
}

static PyObject *dparse_function_3_file_move_safe_of_module_django__core__files__move( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 4)
    {
        return impl_function_3_file_move_safe_of_module_django__core__files__move( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_file_move_safe_of_module_django__core__files__move( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1_copystat_of_module_django__core__files__move(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1_copystat_of_module_django__core__files__move,
        dparse_function_1_copystat_of_module_django__core__files__move,
        _python_str_plain_copystat,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_69f06c62af1d1ed8f004f052562d0161,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__move,
        _python_str_digest_a299926ddfeac9112293af6de8adab34
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2__samefile_of_module_django__core__files__move(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2__samefile_of_module_django__core__files__move,
        dparse_function_2__samefile_of_module_django__core__files__move,
        _python_str_plain__samefile,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_9d4b68034ca89a8e7dfc40692b198193,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__move,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_file_move_safe_of_module_django__core__files__move(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_file_move_safe_of_module_django__core__files__move,
        dparse_function_3_file_move_safe_of_module_django__core__files__move,
        _python_str_plain_file_move_safe,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_011011c33c0d7547258aae2629571def,
        INCREASE_REFCOUNT( _python_tuple_int_pos_65536_false_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__move,
        _python_str_digest_8522c0b82bfe7fbfb239ae87d323673d
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.core.files.move",   /* m_name */
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

MOD_INIT_DECL( django__core__files__move )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__core__files__move );
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

    // puts( "in initdjango__core__files__move" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__core__files__move = Py_InitModule4(
        "django.core.files.move",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__core__files__move = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__core__files__move = (PyDictObject *)((PyModuleObject *)_module_django__core__files__move)->md_dict;

    assertObject( _module_django__core__files__move );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_386d457b783565083e69ea56b897319d, _module_django__core__files__move );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__core__files__move );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__core__files__move != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__core__files__move, (Nuitka_StringObject *)_python_str_plain___doc__, _python_str_digest_203890aa969ca73a4c9bc30c1989d76a );
    UPDATE_STRING_DICT0( _moduledict_django__core__files__move, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_817296d3ced0592629e61504eb3cf7e7 );
    PyFrameObject *frame_module_django__core__files__move = MAKE_FRAME( _codeobj_3a1ca71becd8875148603c1f544fdeef, _module_django__core__files__move );

    FrameGuard frame_guard( frame_module_django__core__files__move );
    try
    {
        assert( Py_REFCNT( frame_module_django__core__files__move ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 8 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__move, (Nuitka_StringObject *)_python_str_plain_os, IMPORT_MODULE( _python_str_plain_os, ((PyModuleObject *)_module_django__core__files__move)->md_dict, ((PyModuleObject *)_module_django__core__files__move)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 9 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__move, (Nuitka_StringObject *)_python_str_plain_locks, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_1c708a450f106db73723c5b9289df76d, ((PyModuleObject *)_module_django__core__files__move)->md_dict, ((PyModuleObject *)_module_django__core__files__move)->md_dict, _python_list_str_plain_locks_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_locks ) );
        frame_guard.setLineNumber( 11 );
        try
        {
            frame_guard.setLineNumber( 12 );
            UPDATE_STRING_DICT1( _moduledict_django__core__files__move, (Nuitka_StringObject *)_python_str_plain_copystat, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_shutil, ((PyModuleObject *)_module_django__core__files__move)->md_dict, ((PyModuleObject *)_module_django__core__files__move)->md_dict, _python_list_str_plain_copystat_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_copystat ) );
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
                frame_guard.setLineNumber( 14 );
                UPDATE_STRING_DICT1( _moduledict_django__core__files__move, (Nuitka_StringObject *)_python_str_plain_stat, IMPORT_MODULE( _python_str_plain_stat, ((PyModuleObject *)_module_django__core__files__move)->md_dict, ((PyModuleObject *)_module_django__core__files__move)->md_dict, Py_None, _python_int_neg_1 ) );
                UPDATE_STRING_DICT1( _moduledict_django__core__files__move, (Nuitka_StringObject *)_python_str_plain_copystat, MAKE_FUNCTION_function_1_copystat_of_module_django__core__files__move(  ) );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__core__files__move)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__core__files__move, (Nuitka_StringObject *)_python_str_plain___all__, LIST_COPY( _python_list_str_plain_file_move_safe_list ) );
    UPDATE_STRING_DICT1( _moduledict_django__core__files__move, (Nuitka_StringObject *)_python_str_plain__samefile, MAKE_FUNCTION_function_2__samefile_of_module_django__core__files__move(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__core__files__move, (Nuitka_StringObject *)_python_str_plain_file_move_safe, MAKE_FUNCTION_function_3_file_move_safe_of_module_django__core__files__move(  ) );

   return MOD_RETURN_VALUE( _module_django__core__files__move );
}
