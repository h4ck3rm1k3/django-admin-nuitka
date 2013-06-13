// Generated code for Python source for module 'django.utils._os'
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

// The _module_django__utils___os is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__utils___os;
PyDictObject *_moduledict_django__utils___os;

// The module level variables.
static PyObjectGlobalVariable_django__utils___os _mvar_django__utils___os_WindowsError( &_module_django__utils___os, &_python_str_plain_WindowsError );
static PyObjectGlobalVariable_django__utils___os _mvar_django__utils___os___metaclass__( &_module_django__utils___os, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__utils___os _mvar_django__utils___os_abspath( &_module_django__utils___os, &_python_str_plain_abspath );
static PyObjectGlobalVariable_django__utils___os _mvar_django__utils___os_abspathu( &_module_django__utils___os, &_python_str_plain_abspathu );
static PyObjectGlobalVariable_django__utils___os _mvar_django__utils___os_dirname( &_module_django__utils___os, &_python_str_plain_dirname );
static PyObjectGlobalVariable_django__utils___os _mvar_django__utils___os_force_text( &_module_django__utils___os, &_python_str_plain_force_text );
static PyObjectGlobalVariable_django__utils___os _mvar_django__utils___os_fs_encoding( &_module_django__utils___os, &_python_str_plain_fs_encoding );
static PyObjectGlobalVariable_django__utils___os _mvar_django__utils___os_isabs( &_module_django__utils___os, &_python_str_plain_isabs );
static PyObjectGlobalVariable_django__utils___os _mvar_django__utils___os_join( &_module_django__utils___os, &_python_str_plain_join );
static PyObjectGlobalVariable_django__utils___os _mvar_django__utils___os_normcase( &_module_django__utils___os, &_python_str_plain_normcase );
static PyObjectGlobalVariable_django__utils___os _mvar_django__utils___os_normpath( &_module_django__utils___os, &_python_str_plain_normpath );
static PyObjectGlobalVariable_django__utils___os _mvar_django__utils___os_os( &_module_django__utils___os, &_python_str_plain_os );
static PyObjectGlobalVariable_django__utils___os _mvar_django__utils___os_sep( &_module_django__utils___os, &_python_str_plain_sep );
static PyObjectGlobalVariable_django__utils___os _mvar_django__utils___os_six( &_module_django__utils___os, &_python_str_plain_six );
static PyObjectGlobalVariable_django__utils___os _mvar_django__utils___os_stat( &_module_django__utils___os, &_python_str_plain_stat );
static PyObjectGlobalVariable_django__utils___os _mvar_django__utils___os_sys( &_module_django__utils___os, &_python_str_plain_sys );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_WindowsError_of_module_django__utils___os(  );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_5_safe_join_of_module_django__utils___os( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_p );


static PyObject *MAKE_FUNCTION_function_2_abspathu_of_module_django__utils___os(  );


static PyObject *MAKE_FUNCTION_function_3_upath_of_module_django__utils___os(  );


static PyObject *MAKE_FUNCTION_function_4_npath_of_module_django__utils___os(  );


static PyObject *MAKE_FUNCTION_function_5_safe_join_of_module_django__utils___os(  );


static PyObject *MAKE_FUNCTION_function_6_rmtree_errorhandler_of_module_django__utils___os(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_WindowsError_of_module_django__utils___os(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain__os );
    return _python_var___module__.updateLocalsDict( PyDict_New() );
}


static PyObject *impl_function_2_abspathu_of_module_django__utils___os( Nuitka_FunctionObject *self, PyObject *_python_par_path )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_path( _python_str_plain_path, _python_par_path );

    // Actual function code.
    static PyFrameObject *frame_function_2_abspathu_of_module_django__utils___os = NULL;

    if ( isFrameUnusable( frame_function_2_abspathu_of_module_django__utils___os ) )
    {
        if ( frame_function_2_abspathu_of_module_django__utils___os )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_abspathu_of_module_django__utils___os" );
#endif
            Py_DECREF( frame_function_2_abspathu_of_module_django__utils___os );
        }

        frame_function_2_abspathu_of_module_django__utils___os = MAKE_FRAME( _codeobj_bb86fd43bd71dc610d67c35eb778ccf3, _module_django__utils___os );
    }

    FrameGuard frame_guard( frame_function_2_abspathu_of_module_django__utils___os );
    try
    {
        assert( Py_REFCNT( frame_function_2_abspathu_of_module_django__utils___os ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 33 );
        {
            PyObjectTempKeeper0 call4;
            if ( (!( CHECK_IF_TRUE( PyObjectTemporary( ( call4.assign( _mvar_django__utils___os_isabs.asObject0() ), CALL_FUNCTION_WITH_ARGS( call4.asObject0(), _python_var_path.asObject() ) ) ).asObject() ) )) )
        {
            frame_guard.setLineNumber( 34 );
            {
                PyObjectTempKeeper0 call1;
                PyObjectTempKeeper1 call2;
                _python_var_path.assign1( ( call1.assign( _mvar_django__utils___os_join.asObject0() ), call2.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils___os_os.asObject0(), _python_str_plain_getcwdu ) ).asObject() ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), call2.asObject0(), _python_var_path.asObject() ) ) );
            }
        }
        }
        frame_guard.setLineNumber( 35 );
        {
            PyObjectTempKeeper0 call6;
            return ( call6.assign( _mvar_django__utils___os_normpath.asObject0() ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), _python_var_path.asObject() ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_path.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_2_abspathu_of_module_django__utils___os )
        {
           Py_DECREF( frame_function_2_abspathu_of_module_django__utils___os );
           frame_function_2_abspathu_of_module_django__utils___os = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_2_abspathu_of_module_django__utils___os( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_path = NULL;
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
                PyErr_Format( PyExc_TypeError, "abspathu() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_path == key )
            {
                if (unlikely( _python_par_path ))
                {
                    PyErr_Format( PyExc_TypeError, "abspathu() got multiple values for keyword argument 'path'" );
                    goto error_exit;
                }

                _python_par_path = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_path, key ) )
            {
                if (unlikely( _python_par_path ))
                {
                    PyErr_Format( PyExc_TypeError, "abspathu() got multiple values for keyword argument 'path'" );
                    goto error_exit;
                }

                _python_par_path = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "abspathu() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "abspathu() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "abspathu() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "abspathu() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "abspathu() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "abspathu() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "abspathu() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "abspathu() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "abspathu() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "abspathu() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "abspathu() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "abspathu() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "abspathu() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_path != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "abspathu() got multiple values for keyword argument 'path'" );
             goto error_exit;
         }

        _python_par_path = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2_abspathu_of_module_django__utils___os( self, _python_par_path );

error_exit:;

    Py_XDECREF( _python_par_path );

    return NULL;
}

static PyObject *dparse_function_2_abspathu_of_module_django__utils___os( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2_abspathu_of_module_django__utils___os( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_abspathu_of_module_django__utils___os( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3_upath_of_module_django__utils___os( Nuitka_FunctionObject *self, PyObject *_python_par_path )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_path( _python_str_plain_path, _python_par_path );

    // Actual function code.
    static PyFrameObject *frame_function_3_upath_of_module_django__utils___os = NULL;

    if ( isFrameUnusable( frame_function_3_upath_of_module_django__utils___os ) )
    {
        if ( frame_function_3_upath_of_module_django__utils___os )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_upath_of_module_django__utils___os" );
#endif
            Py_DECREF( frame_function_3_upath_of_module_django__utils___os );
        }

        frame_function_3_upath_of_module_django__utils___os = MAKE_FRAME( _codeobj_a48a72f215ad5815e170e819a98b9b14, _module_django__utils___os );
    }

    FrameGuard frame_guard( frame_function_3_upath_of_module_django__utils___os );
    try
    {
        assert( Py_REFCNT( frame_function_3_upath_of_module_django__utils___os ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 41 );
        {
            PyObjectTempKeeper0 isinstance3;
            if ( ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils___os_six.asObject0(), _python_str_plain_PY3 ) ).asObject() ) )) && (!( ( isinstance3.assign( _python_var_path.asObject() ), BUILTIN_ISINSTANCE_BOOL( isinstance3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils___os_six.asObject0(), _python_str_plain_text_type ) ).asObject() ) ) )) ) )
        {
            frame_guard.setLineNumber( 42 );
            {
                PyObjectTempKeeper1 call1;
                return ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_path.asObject(), _python_str_plain_decode ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _mvar_django__utils___os_fs_encoding.asObject0() ) );
            }
        }
        }
        frame_guard.setLineNumber( 43 );
        return _python_var_path.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_path.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_3_upath_of_module_django__utils___os )
        {
           Py_DECREF( frame_function_3_upath_of_module_django__utils___os );
           frame_function_3_upath_of_module_django__utils___os = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_3_upath_of_module_django__utils___os( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_path = NULL;
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
                PyErr_Format( PyExc_TypeError, "upath() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_path == key )
            {
                if (unlikely( _python_par_path ))
                {
                    PyErr_Format( PyExc_TypeError, "upath() got multiple values for keyword argument 'path'" );
                    goto error_exit;
                }

                _python_par_path = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_path, key ) )
            {
                if (unlikely( _python_par_path ))
                {
                    PyErr_Format( PyExc_TypeError, "upath() got multiple values for keyword argument 'path'" );
                    goto error_exit;
                }

                _python_par_path = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "upath() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "upath() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "upath() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "upath() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "upath() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "upath() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "upath() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "upath() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "upath() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "upath() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "upath() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "upath() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "upath() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_path != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "upath() got multiple values for keyword argument 'path'" );
             goto error_exit;
         }

        _python_par_path = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_3_upath_of_module_django__utils___os( self, _python_par_path );

error_exit:;

    Py_XDECREF( _python_par_path );

    return NULL;
}

static PyObject *dparse_function_3_upath_of_module_django__utils___os( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3_upath_of_module_django__utils___os( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3_upath_of_module_django__utils___os( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_4_npath_of_module_django__utils___os( Nuitka_FunctionObject *self, PyObject *_python_par_path )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_path( _python_str_plain_path, _python_par_path );

    // Actual function code.
    static PyFrameObject *frame_function_4_npath_of_module_django__utils___os = NULL;

    if ( isFrameUnusable( frame_function_4_npath_of_module_django__utils___os ) )
    {
        if ( frame_function_4_npath_of_module_django__utils___os )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_npath_of_module_django__utils___os" );
#endif
            Py_DECREF( frame_function_4_npath_of_module_django__utils___os );
        }

        frame_function_4_npath_of_module_django__utils___os = MAKE_FRAME( _codeobj_a2a7187f8e675253d16004fa527ced38, _module_django__utils___os );
    }

    FrameGuard frame_guard( frame_function_4_npath_of_module_django__utils___os );
    try
    {
        assert( Py_REFCNT( frame_function_4_npath_of_module_django__utils___os ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 50 );
        if ( ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils___os_six.asObject0(), _python_str_plain_PY3 ) ).asObject() ) )) && (!( BUILTIN_ISINSTANCE_BOOL( _python_var_path.asObject(), LOOKUP_BUILTIN( _python_str_plain_bytes ) ) )) ) )
        {
            frame_guard.setLineNumber( 51 );
            {
                PyObjectTempKeeper1 call1;
                return ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_path.asObject(), _python_str_plain_encode ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _mvar_django__utils___os_fs_encoding.asObject0() ) );
            }
        }
        frame_guard.setLineNumber( 52 );
        return _python_var_path.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_path.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_4_npath_of_module_django__utils___os )
        {
           Py_DECREF( frame_function_4_npath_of_module_django__utils___os );
           frame_function_4_npath_of_module_django__utils___os = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_4_npath_of_module_django__utils___os( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_path = NULL;
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
                PyErr_Format( PyExc_TypeError, "npath() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_path == key )
            {
                if (unlikely( _python_par_path ))
                {
                    PyErr_Format( PyExc_TypeError, "npath() got multiple values for keyword argument 'path'" );
                    goto error_exit;
                }

                _python_par_path = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_path, key ) )
            {
                if (unlikely( _python_par_path ))
                {
                    PyErr_Format( PyExc_TypeError, "npath() got multiple values for keyword argument 'path'" );
                    goto error_exit;
                }

                _python_par_path = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "npath() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "npath() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "npath() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "npath() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "npath() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "npath() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "npath() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "npath() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "npath() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "npath() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "npath() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "npath() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "npath() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_path != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "npath() got multiple values for keyword argument 'path'" );
             goto error_exit;
         }

        _python_par_path = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_4_npath_of_module_django__utils___os( self, _python_par_path );

error_exit:;

    Py_XDECREF( _python_par_path );

    return NULL;
}

static PyObject *dparse_function_4_npath_of_module_django__utils___os( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_4_npath_of_module_django__utils___os( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_4_npath_of_module_django__utils___os( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_5_safe_join_of_module_django__utils___os( Nuitka_FunctionObject *self, PyObject *_python_par_base, PyObject *_python_par_paths )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_base( _python_str_plain_base, _python_par_base );
    PyObjectLocalParameterVariableNoDel _python_var_paths( _python_str_plain_paths, _python_par_paths );
    PyObjectLocalVariable _python_var_final_path( _python_str_plain_final_path );
    PyObjectLocalVariable _python_var_base_path( _python_str_plain_base_path );
    PyObjectLocalVariable _python_var_p( _python_str_plain_p );

    // Actual function code.
    static PyFrameObject *frame_function_5_safe_join_of_module_django__utils___os = NULL;

    if ( isFrameUnusable( frame_function_5_safe_join_of_module_django__utils___os ) )
    {
        if ( frame_function_5_safe_join_of_module_django__utils___os )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_5_safe_join_of_module_django__utils___os" );
#endif
            Py_DECREF( frame_function_5_safe_join_of_module_django__utils___os );
        }

        frame_function_5_safe_join_of_module_django__utils___os = MAKE_FRAME( _codeobj_4c5600ee13dd3750225ac9c66b5b6da2, _module_django__utils___os );
    }

    FrameGuard frame_guard( frame_function_5_safe_join_of_module_django__utils___os );
    try
    {
        assert( Py_REFCNT( frame_function_5_safe_join_of_module_django__utils___os ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 62 );
        {
            PyObjectTempKeeper0 call1;
            _python_var_base.assign1( ( call1.assign( _mvar_django__utils___os_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_base.asObject() ) ) );
        }
        frame_guard.setLineNumber( 63 );
        _python_var_paths.assign1( impl_listcontr_1_of_function_5_safe_join_of_module_django__utils___os( MAKE_ITERATOR( _python_var_paths.asObject() ), _python_var_p ) );
        frame_guard.setLineNumber( 64 );
        {
            PyObjectTempKeeper0 call6;
            PyObjectTempKeeper0 call_tmp3;
            PyObjectTempKeeper1 call_tmp4;
            _python_var_final_path.assign1( ( call6.assign( _mvar_django__utils___os_abspathu.asObject0() ), CALL_FUNCTION_WITH_ARGS( call6.asObject0(), PyObjectTemporary( ( call_tmp3.assign( _mvar_django__utils___os_join.asObject0() ), call_tmp4.assign( MAKE_TUPLE1( _python_var_base.asObject() ) ), impl_function_5_complex_call_helper_pos_star_list_of_module___internal__( call_tmp3.asObject(), call_tmp4.asObject(), _python_var_paths.asObject1() ) ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 65 );
        {
            PyObjectTempKeeper0 call8;
            _python_var_base_path.assign1( ( call8.assign( _mvar_django__utils___os_abspathu.asObject0() ), CALL_FUNCTION_WITH_ARGS( call8.asObject0(), _python_var_base.asObject() ) ) );
        }
        frame_guard.setLineNumber( 73 );
        {
            PyObjectTempKeeper0 call12;
            PyObjectTempKeeper0 call16;
            PyObjectTempKeeper1 call18;
            PyObjectTempKeeper0 call20;
            PyObjectTempKeeper0 call22;
            PyObjectTempKeeper0 call26;
            PyObjectTempKeeper0 call28;
            PyObjectTempKeeper0 call30;
            PyObjectTempKeeper1 cmp24;
            PyObjectTempKeeper1 cmp32;
            PyObjectTempKeeper0 op14;
            if ( ( (!( CHECK_IF_TRUE( PyObjectTemporary( ( call18.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call12.assign( _mvar_django__utils___os_normcase.asObject0() ), CALL_FUNCTION_WITH_ARGS( call12.asObject0(), _python_var_final_path.asObject() ) ) ).asObject(), _python_str_plain_startswith ) ), CALL_FUNCTION_WITH_ARGS( call18.asObject0(), PyObjectTemporary( ( call16.assign( _mvar_django__utils___os_normcase.asObject0() ), CALL_FUNCTION_WITH_ARGS( call16.asObject0(), PyObjectTemporary( ( op14.assign( _python_var_base_path.asObject() ), BINARY_OPERATION_ADD( op14.asObject0(), _mvar_django__utils___os_sep.asObject0() ) ) ).asObject() ) ) ).asObject() ) ) ).asObject() ) )) && ( ( cmp24.assign( ( call20.assign( _mvar_django__utils___os_normcase.asObject0() ), CALL_FUNCTION_WITH_ARGS( call20.asObject0(), _python_var_final_path.asObject() ) ) ), RICH_COMPARE_BOOL_NE( cmp24.asObject0(), PyObjectTemporary( ( call22.assign( _mvar_django__utils___os_normcase.asObject0() ), CALL_FUNCTION_WITH_ARGS( call22.asObject0(), _python_var_base_path.asObject() ) ) ).asObject() ) ) && ( cmp32.assign( ( call28.assign( _mvar_django__utils___os_dirname.asObject0() ), CALL_FUNCTION_WITH_ARGS( call28.asObject0(), PyObjectTemporary( ( call26.assign( _mvar_django__utils___os_normcase.asObject0() ), CALL_FUNCTION_WITH_ARGS( call26.asObject0(), _python_var_base_path.asObject() ) ) ).asObject() ) ) ), RICH_COMPARE_BOOL_NE( cmp32.asObject0(), PyObjectTemporary( ( call30.assign( _mvar_django__utils___os_normcase.asObject0() ), CALL_FUNCTION_WITH_ARGS( call30.asObject0(), _python_var_base_path.asObject() ) ) ).asObject() ) ) ) ) )
        {
            frame_guard.setLineNumber( 76 );
            {
                PyObjectTempKeeper0 make_tuple10;
                {
                    PyObjectTemporary tmp_exception_type( CALL_FUNCTION_WITH_POSARGS( PyExc_ValueError, PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( BINARY_OPERATION_REMAINDER( _python_str_digest_7fd9c482527f19f7c5bfeb9b9be40ebf, PyObjectTemporary( ( make_tuple10.assign( _python_var_final_path.asObject() ), MAKE_TUPLE2( make_tuple10.asObject0(), _python_var_base_path.asObject() ) ) ).asObject() ) ).asObject() ) ).asObject() ) );
                    RAISE_EXCEPTION_WITH_TYPE( tmp_exception_type.asObject(), PyObjectTemporary( MAKE_TRACEBACK( frame_guard.getFrame() ) ).asObject() );
            }
            }
        }
        }
        frame_guard.setLineNumber( 78 );
        return _python_var_final_path.asObject1();
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
        frame_guard.getFrame0()->f_locals = _python_var_paths.updateLocalsDict( _python_var_base.updateLocalsDict( _python_var_p.updateLocalsDict( _python_var_base_path.updateLocalsDict( _python_var_final_path.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_5_safe_join_of_module_django__utils___os )
        {
           Py_DECREF( frame_function_5_safe_join_of_module_django__utils___os );
           frame_function_5_safe_join_of_module_django__utils___os = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *fparse_function_5_safe_join_of_module_django__utils___os( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_base = NULL;
    PyObject *_python_par_paths = NULL;
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
                PyErr_Format( PyExc_TypeError, "safe_join() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_base == key )
            {
                if (unlikely( _python_par_base ))
                {
                    PyErr_Format( PyExc_TypeError, "safe_join() got multiple values for keyword argument 'base'" );
                    goto error_exit;
                }

                _python_par_base = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_base, key ) )
            {
                if (unlikely( _python_par_base ))
                {
                    PyErr_Format( PyExc_TypeError, "safe_join() got multiple values for keyword argument 'base'" );
                    goto error_exit;
                }

                _python_par_base = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "safe_join() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "safe_join() takes at least 1 argument (%zd given)", args_given + kw_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "safe_join() takes at least %d non-keyword arguments (%zd given)", 1, args_given + kw_found );
            }
            else
#endif
            {
                PyErr_Format( PyExc_TypeError, "safe_join() takes at least %d arguments (%zd given)", 1, args_given + kw_found );
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_base != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "safe_join() got multiple values for keyword argument 'base'" );
             goto error_exit;
         }

        _python_par_base = INCREASE_REFCOUNT( args[ 0 ] );
    }

    // Copy left over argument values to the star list parameter given.
    if ( args_given > 1 )
    {
        _python_par_paths = PyTuple_New( args_size - 1 );

        for( Py_ssize_t i = 0; i < args_size - 1; i++ )
        {
           PyTuple_SET_ITEM( _python_par_paths, i, INCREASE_REFCOUNT( args[1+i] ) );
        }
    }
    else
    {
        _python_par_paths = INCREASE_REFCOUNT( _python_tuple_empty );
    }


    return impl_function_5_safe_join_of_module_django__utils___os( self, _python_par_base, _python_par_paths );

error_exit:;

    Py_XDECREF( _python_par_base );
    Py_XDECREF( _python_par_paths );

    return NULL;
}

static PyObject *dparse_function_5_safe_join_of_module_django__utils___os( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 2)
    {
        return impl_function_5_safe_join_of_module_django__utils___os( self, INCREASE_REFCOUNT( args[ 0 ] ), MAKE_TUPLE( &args[ 1 ], size > 1 ? size-1 : 0 ) );
    }
    else
    {
        PyObject *result = fparse_function_5_safe_join_of_module_django__utils___os( self, args, size, NULL );
        return result;
    }

}



NUITKA_LOCAL_MODULE PyObject *impl_listcontr_1_of_function_5_safe_join_of_module_django__utils___os( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_p )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 63 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 63 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_p.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper0 call1;
                    APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( ( call1.assign( _mvar_django__utils___os_force_text.asObject0() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), python_closure_p.asObject() ) ) ).asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_function_6_rmtree_errorhandler_of_module_django__utils___os( Nuitka_FunctionObject *self, PyObject *_python_par_func, PyObject *_python_par_path, PyObject *_python_par_exc_info )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_func( _python_str_plain_func, _python_par_func );
    PyObjectLocalParameterVariableNoDel _python_var_path( _python_str_plain_path, _python_par_path );
    PyObjectLocalParameterVariableNoDel _python_var_exc_info( _python_str_plain_exc_info, _python_par_exc_info );
    PyObjectLocalVariable _python_var_exctype( _python_str_plain_exctype );
    PyObjectLocalVariable _python_var_value( _python_str_plain_value );

    // Actual function code.
    static PyFrameObject *frame_function_6_rmtree_errorhandler_of_module_django__utils___os = NULL;

    if ( isFrameUnusable( frame_function_6_rmtree_errorhandler_of_module_django__utils___os ) )
    {
        if ( frame_function_6_rmtree_errorhandler_of_module_django__utils___os )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_6_rmtree_errorhandler_of_module_django__utils___os" );
#endif
            Py_DECREF( frame_function_6_rmtree_errorhandler_of_module_django__utils___os );
        }

        frame_function_6_rmtree_errorhandler_of_module_django__utils___os = MAKE_FRAME( _codeobj_9f88f5e5b916a0c637262ef9875ed4e4, _module_django__utils___os );
    }

    FrameGuard frame_guard( frame_function_6_rmtree_errorhandler_of_module_django__utils___os );
    try
    {
        assert( Py_REFCNT( frame_function_6_rmtree_errorhandler_of_module_django__utils___os ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 88 );
            PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( PyObjectTemporary( LOOKUP_INDEX_SLICE( _python_var_exc_info.asObject(), 0, 2 ) ).asObject() ) );
            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
            _python_var_exctype.assign0( _python_tmp_element_1.asObject() );
            _python_var_value.assign0( _python_tmp_element_2.asObject() );
        }
        frame_guard.setLineNumber( 90 );
        if ( ( ( _python_var_exctype.asObject() != _mvar_django__utils___os_WindowsError.asObject0() ) || SEQUENCE_CONTAINS_NOT_BOOL( _python_str_digest_6aa2569be7933857f8a0db43a871d822, PyObjectTemporary( TO_STR( _python_var_value.asObject() ) ).asObject() ) ) )
        {
            RERAISE_EXCEPTION();
        }
        frame_guard.setLineNumber( 93 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper1 cmp5;
            PyObjectTempKeeper1 op3;
            if ( ( cmp5.assign( ( op3.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( call1.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils___os_os.asObject0(), _python_str_plain_stat ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_var_path.asObject() ) ) ).asObject(), _python_str_plain_st_mode ) ), BINARY_OPERATION( PyNumber_And, op3.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils___os_stat.asObject0(), _python_str_plain_S_IREAD ) ).asObject() ) ) ), RICH_COMPARE_BOOL_NE( cmp5.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils___os_stat.asObject0(), _python_str_plain_S_IREAD ) ).asObject() ) ) )
        {
            RERAISE_EXCEPTION();
        }
        }
        frame_guard.setLineNumber( 96 );
        {
            PyObjectTempKeeper1 call7;
            PyObjectTempKeeper0 call8;
            DECREASE_REFCOUNT( ( call7.assign( LOOKUP_ATTRIBUTE( _mvar_django__utils___os_os.asObject0(), _python_str_plain_chmod ) ), call8.assign( _python_var_path.asObject() ), CALL_FUNCTION_WITH_ARGS( call7.asObject0(), call8.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils___os_stat.asObject0(), _python_str_plain_S_IWRITE ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 98 );
        {
            PyObjectTempKeeper0 call10;
            DECREASE_REFCOUNT( ( call10.assign( _python_var_func.asObject() ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), _python_var_path.asObject() ) ) );
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
        frame_guard.getFrame0()->f_locals = _python_var_exc_info.updateLocalsDict( _python_var_path.updateLocalsDict( _python_var_func.updateLocalsDict( _python_var_value.updateLocalsDict( _python_var_exctype.updateLocalsDict( PyDict_New() ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_6_rmtree_errorhandler_of_module_django__utils___os )
        {
           Py_DECREF( frame_function_6_rmtree_errorhandler_of_module_django__utils___os );
           frame_function_6_rmtree_errorhandler_of_module_django__utils___os = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_6_rmtree_errorhandler_of_module_django__utils___os( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_func = NULL;
    PyObject *_python_par_path = NULL;
    PyObject *_python_par_exc_info = NULL;
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
                PyErr_Format( PyExc_TypeError, "rmtree_errorhandler() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_func == key )
            {
                if (unlikely( _python_par_func ))
                {
                    PyErr_Format( PyExc_TypeError, "rmtree_errorhandler() got multiple values for keyword argument 'func'" );
                    goto error_exit;
                }

                _python_par_func = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_path == key )
            {
                if (unlikely( _python_par_path ))
                {
                    PyErr_Format( PyExc_TypeError, "rmtree_errorhandler() got multiple values for keyword argument 'path'" );
                    goto error_exit;
                }

                _python_par_path = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_exc_info == key )
            {
                if (unlikely( _python_par_exc_info ))
                {
                    PyErr_Format( PyExc_TypeError, "rmtree_errorhandler() got multiple values for keyword argument 'exc_info'" );
                    goto error_exit;
                }

                _python_par_exc_info = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_func, key ) )
            {
                if (unlikely( _python_par_func ))
                {
                    PyErr_Format( PyExc_TypeError, "rmtree_errorhandler() got multiple values for keyword argument 'func'" );
                    goto error_exit;
                }

                _python_par_func = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_path, key ) )
            {
                if (unlikely( _python_par_path ))
                {
                    PyErr_Format( PyExc_TypeError, "rmtree_errorhandler() got multiple values for keyword argument 'path'" );
                    goto error_exit;
                }

                _python_par_path = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_exc_info, key ) )
            {
                if (unlikely( _python_par_exc_info ))
                {
                    PyErr_Format( PyExc_TypeError, "rmtree_errorhandler() got multiple values for keyword argument 'exc_info'" );
                    goto error_exit;
                }

                _python_par_exc_info = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "rmtree_errorhandler() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "rmtree_errorhandler() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "rmtree_errorhandler() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "rmtree_errorhandler() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "rmtree_errorhandler() takes exactly %d arguments (%zd given)", 3, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "rmtree_errorhandler() takes exactly %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "rmtree_errorhandler() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
            }
#else
            if ( 3 == 3 )
            {
                PyErr_Format( PyExc_TypeError, "rmtree_errorhandler() takes %d positional arguments but %zd were given", 3, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "rmtree_errorhandler() takes at most %d positional arguments (%zd given)", 3, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "rmtree_errorhandler() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "rmtree_errorhandler() takes exactly %d non-keyword arguments (%zd given)", 3, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 3 == 3 )
                {
                    PyErr_Format( PyExc_TypeError, "rmtree_errorhandler() takes exactly %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "rmtree_errorhandler() takes at least %d arguments (%zd given)", 3, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 3 ? args_given : 3;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_func != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "rmtree_errorhandler() got multiple values for keyword argument 'func'" );
             goto error_exit;
         }

        _python_par_func = INCREASE_REFCOUNT( args[ 0 ] );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_path != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "rmtree_errorhandler() got multiple values for keyword argument 'path'" );
             goto error_exit;
         }

        _python_par_path = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_exc_info != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "rmtree_errorhandler() got multiple values for keyword argument 'exc_info'" );
             goto error_exit;
         }

        _python_par_exc_info = INCREASE_REFCOUNT( args[ 2 ] );
    }


    return impl_function_6_rmtree_errorhandler_of_module_django__utils___os( self, _python_par_func, _python_par_path, _python_par_exc_info );

error_exit:;

    Py_XDECREF( _python_par_func );
    Py_XDECREF( _python_par_path );
    Py_XDECREF( _python_par_exc_info );

    return NULL;
}

static PyObject *dparse_function_6_rmtree_errorhandler_of_module_django__utils___os( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 3)
    {
        return impl_function_6_rmtree_errorhandler_of_module_django__utils___os( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_6_rmtree_errorhandler_of_module_django__utils___os( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_2_abspathu_of_module_django__utils___os(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_abspathu_of_module_django__utils___os,
        dparse_function_2_abspathu_of_module_django__utils___os,
        _python_str_plain_abspathu,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_bb86fd43bd71dc610d67c35eb778ccf3,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils___os,
        _python_str_digest_e35ec269d1030b50eadd07c47691aac8
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_upath_of_module_django__utils___os(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3_upath_of_module_django__utils___os,
        dparse_function_3_upath_of_module_django__utils___os,
        _python_str_plain_upath,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_a48a72f215ad5815e170e819a98b9b14,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils___os,
        _python_str_digest_f347a22365db428947d76d43563c41bd
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_npath_of_module_django__utils___os(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_4_npath_of_module_django__utils___os,
        dparse_function_4_npath_of_module_django__utils___os,
        _python_str_plain_npath,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_a2a7187f8e675253d16004fa527ced38,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils___os,
        _python_str_digest_03cbdf46e6b70c6048348923a84c7c18
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_5_safe_join_of_module_django__utils___os(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_5_safe_join_of_module_django__utils___os,
        dparse_function_5_safe_join_of_module_django__utils___os,
        _python_str_plain_safe_join,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_4c5600ee13dd3750225ac9c66b5b6da2,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils___os,
        _python_str_digest_66404d5f8f0f493c1b4cfb50a20c5362
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_6_rmtree_errorhandler_of_module_django__utils___os(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_6_rmtree_errorhandler_of_module_django__utils___os,
        dparse_function_6_rmtree_errorhandler_of_module_django__utils___os,
        _python_str_plain_rmtree_errorhandler,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_9f88f5e5b916a0c637262ef9875ed4e4,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__utils___os,
        _python_str_digest_50f015da2330b8723da245eae4f38fa5
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.utils._os",   /* m_name */
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

MOD_INIT_DECL( django__utils___os )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__utils___os );
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

    // puts( "in initdjango__utils___os" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__utils___os = Py_InitModule4(
        "django.utils._os",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__utils___os = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__utils___os = (PyDictObject *)((PyModuleObject *)_module_django__utils___os)->md_dict;

    assertObject( _module_django__utils___os );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_88846ba615a71fb6c28246da44176ee3, _module_django__utils___os );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__utils___os );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__utils___os != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__utils___os, (Nuitka_StringObject *)_python_str_plain___doc__, Py_None );
    UPDATE_STRING_DICT0( _moduledict_django__utils___os, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_f311e0cd36a93650eccc7f3afb57735a );
    PyFrameObject *frame_module_django__utils___os = MAKE_FRAME( _codeobj_c5f1d7dbef5821efc5b614499f0d2f7c, _module_django__utils___os );

    FrameGuard frame_guard( frame_module_django__utils___os );
    try
    {
        assert( Py_REFCNT( frame_module_django__utils___os ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 1 );
        UPDATE_STRING_DICT1( _moduledict_django__utils___os, (Nuitka_StringObject *)_python_str_plain_os, IMPORT_MODULE( _python_str_plain_os, ((PyModuleObject *)_module_django__utils___os)->md_dict, ((PyModuleObject *)_module_django__utils___os)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 2 );
        UPDATE_STRING_DICT1( _moduledict_django__utils___os, (Nuitka_StringObject *)_python_str_plain_stat, IMPORT_MODULE( _python_str_plain_stat, ((PyModuleObject *)_module_django__utils___os)->md_dict, ((PyModuleObject *)_module_django__utils___os)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 3 );
        UPDATE_STRING_DICT1( _moduledict_django__utils___os, (Nuitka_StringObject *)_python_str_plain_sys, IMPORT_MODULE( _python_str_plain_sys, ((PyModuleObject *)_module_django__utils___os)->md_dict, ((PyModuleObject *)_module_django__utils___os)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 4 );
        UPDATE_STRING_DICT1( _moduledict_django__utils___os, (Nuitka_StringObject *)_python_str_plain_join, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_55f9bb09fd8231b1e010dca4626f5961, ((PyModuleObject *)_module_django__utils___os)->md_dict, ((PyModuleObject *)_module_django__utils___os)->md_dict, _python_list_4177e340cd609560bbaac5a072ded7cc_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_join ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils___os, (Nuitka_StringObject *)_python_str_plain_normcase, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_55f9bb09fd8231b1e010dca4626f5961, ((PyModuleObject *)_module_django__utils___os)->md_dict, ((PyModuleObject *)_module_django__utils___os)->md_dict, _python_list_4177e340cd609560bbaac5a072ded7cc_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_normcase ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils___os, (Nuitka_StringObject *)_python_str_plain_normpath, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_55f9bb09fd8231b1e010dca4626f5961, ((PyModuleObject *)_module_django__utils___os)->md_dict, ((PyModuleObject *)_module_django__utils___os)->md_dict, _python_list_4177e340cd609560bbaac5a072ded7cc_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_normpath ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils___os, (Nuitka_StringObject *)_python_str_plain_abspath, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_55f9bb09fd8231b1e010dca4626f5961, ((PyModuleObject *)_module_django__utils___os)->md_dict, ((PyModuleObject *)_module_django__utils___os)->md_dict, _python_list_4177e340cd609560bbaac5a072ded7cc_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_abspath ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils___os, (Nuitka_StringObject *)_python_str_plain_isabs, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_55f9bb09fd8231b1e010dca4626f5961, ((PyModuleObject *)_module_django__utils___os)->md_dict, ((PyModuleObject *)_module_django__utils___os)->md_dict, _python_list_4177e340cd609560bbaac5a072ded7cc_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_isabs ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils___os, (Nuitka_StringObject *)_python_str_plain_sep, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_55f9bb09fd8231b1e010dca4626f5961, ((PyModuleObject *)_module_django__utils___os)->md_dict, ((PyModuleObject *)_module_django__utils___os)->md_dict, _python_list_4177e340cd609560bbaac5a072ded7cc_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_sep ) );
        UPDATE_STRING_DICT1( _moduledict_django__utils___os, (Nuitka_StringObject *)_python_str_plain_dirname, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_55f9bb09fd8231b1e010dca4626f5961, ((PyModuleObject *)_module_django__utils___os)->md_dict, ((PyModuleObject *)_module_django__utils___os)->md_dict, _python_list_4177e340cd609560bbaac5a072ded7cc_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_dirname ) );
        frame_guard.setLineNumber( 6 );
        UPDATE_STRING_DICT1( _moduledict_django__utils___os, (Nuitka_StringObject *)_python_str_plain_force_text, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_5c6adb5fc6275b5d2a085f73ed00809a, ((PyModuleObject *)_module_django__utils___os)->md_dict, ((PyModuleObject *)_module_django__utils___os)->md_dict, _python_list_str_plain_force_text_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_force_text ) );
        frame_guard.setLineNumber( 7 );
        UPDATE_STRING_DICT1( _moduledict_django__utils___os, (Nuitka_StringObject *)_python_str_plain_six, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_11a3eb3229bb1ce81f02aa3fc01149d5, ((PyModuleObject *)_module_django__utils___os)->md_dict, ((PyModuleObject *)_module_django__utils___os)->md_dict, _python_list_str_plain_six_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_six ) );
        frame_guard.setLineNumber( 9 );
        try
        {
            frame_guard.setLineNumber( 10 );
            UPDATE_STRING_DICT0( _moduledict_django__utils___os, (Nuitka_StringObject *)_python_str_plain_WindowsError, _mvar_django__utils___os_WindowsError.asObject0() );
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

            if ( _exception.matches( PyExc_NameError ) )
            {
                frame_guard.detachFrame();
                {
                    frame_guard.setLineNumber( 12 );
                    PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( PyExc_Exception ) );
                    PyObjectTemporary _python_tmp_class_dict( impl_class_1_WindowsError_of_module_django__utils___os(  ) );
                    PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__utils___os___metaclass__.isInitialized( false ) ? _mvar_django__utils___os___metaclass__.asObject0() : NULL ) ) ) );
                    PyObject *_tmp_python_tmp_class;
                    {
                        PyObjectTempKeeper0 call1;
                        PyObjectTempKeeper0 call3;
                        _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_WindowsError, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
                    }
                    PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
                    UPDATE_STRING_DICT0( _moduledict_django__utils___os, (Nuitka_StringObject *)_python_str_plain_WindowsError, _python_tmp_class.asObject() );
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
        frame_guard.setLineNumber( 15 );
        if ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils___os_six.asObject0(), _python_str_plain_PY3 ) ).asObject() ) )) )
        {
            frame_guard.setLineNumber( 16 );
            {
                PyObjectTempKeeper1 keeper_0;
                UPDATE_STRING_DICT1( _moduledict_django__utils___os, (Nuitka_StringObject *)_python_str_plain_fs_encoding, ( CHECK_IF_TRUE( keeper_0.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils___os_sys.asObject0(), _python_str_plain_getfilesystemencoding ) ).asObject() ) ) ) ? keeper_0.asObject() : CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils___os_sys.asObject0(), _python_str_plain_getdefaultencoding ) ).asObject() ) ) );
            }
        }
        frame_guard.setLineNumber( 24 );
        if ( ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils___os_six.asObject0(), _python_str_plain_PY3 ) ).asObject() ) || RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__utils___os_os.asObject0(), _python_str_plain_name ) ).asObject(), _python_str_plain_nt ) ) )
        {
            frame_guard.setLineNumber( 25 );
            UPDATE_STRING_DICT0( _moduledict_django__utils___os, (Nuitka_StringObject *)_python_str_plain_abspathu, _mvar_django__utils___os_abspath.asObject0() );
        }
        else
        {
            UPDATE_STRING_DICT1( _moduledict_django__utils___os, (Nuitka_StringObject *)_python_str_plain_abspathu, MAKE_FUNCTION_function_2_abspathu_of_module_django__utils___os(  ) );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__utils___os)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }
    UPDATE_STRING_DICT1( _moduledict_django__utils___os, (Nuitka_StringObject *)_python_str_plain_upath, MAKE_FUNCTION_function_3_upath_of_module_django__utils___os(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils___os, (Nuitka_StringObject *)_python_str_plain_npath, MAKE_FUNCTION_function_4_npath_of_module_django__utils___os(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils___os, (Nuitka_StringObject *)_python_str_plain_safe_join, MAKE_FUNCTION_function_5_safe_join_of_module_django__utils___os(  ) );
    UPDATE_STRING_DICT1( _moduledict_django__utils___os, (Nuitka_StringObject *)_python_str_plain_rmtree_errorhandler, MAKE_FUNCTION_function_6_rmtree_errorhandler_of_module_django__utils___os(  ) );

   return MOD_RETURN_VALUE( _module_django__utils___os );
}
