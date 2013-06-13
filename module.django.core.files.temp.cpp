// Generated code for Python source for module 'django.core.files.temp'
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

// The _module_django__core__files__temp is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access
// needs to go through it except for cases where the module cannot possibly
// have changed in the mean time.

PyObject *_module_django__core__files__temp;
PyDictObject *_moduledict_django__core__files__temp;

// The module level variables.
static PyObjectGlobalVariable_django__core__files__temp _mvar_django__core__files__temp_FileProxyMixin( &_module_django__core__files__temp, &_python_str_plain_FileProxyMixin );
static PyObjectGlobalVariable_django__core__files__temp _mvar_django__core__files__temp_TemporaryFile( &_module_django__core__files__temp, &_python_str_plain_TemporaryFile );
static PyObjectGlobalVariable_django__core__files__temp _mvar_django__core__files__temp___metaclass__( &_module_django__core__files__temp, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable_django__core__files__temp _mvar_django__core__files__temp_os( &_module_django__core__files__temp, &_python_str_plain_os );
static PyObjectGlobalVariable_django__core__files__temp _mvar_django__core__files__temp_tempfile( &_module_django__core__files__temp, &_python_str_plain_tempfile );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_TemporaryFile_of_module_django__core__files__temp(  );


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_TemporaryFile_of_module_django__core__files__temp(  );


static PyObject *MAKE_FUNCTION_function_2_close_of_class_1_TemporaryFile_of_module_django__core__files__temp(  );


static PyObject *MAKE_FUNCTION_function_3___del___of_class_1_TemporaryFile_of_module_django__core__files__temp(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_TemporaryFile_of_module_django__core__files__temp(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___doc__( _python_str_plain___doc__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_unlink( _python_str_plain_unlink );
    PyObjectLocalVariable _python_var_close( _python_str_plain_close );
    PyObjectLocalVariable _python_var___del__( _python_str_plain___del__ );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain_temp );
    _python_var___doc__.assign0( _python_str_digest_f67bdba0ed946de60a28ca559021f5a8 );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_1_TemporaryFile_of_module_django__core__files__temp(  ) );
    static PyFrameObject *frame_class_1_TemporaryFile_of_module_django__core__files__temp = NULL;

    if ( isFrameUnusable( frame_class_1_TemporaryFile_of_module_django__core__files__temp ) )
    {
        if ( frame_class_1_TemporaryFile_of_module_django__core__files__temp )
        {
#if _DEBUG_REFRAME
            puts( "reframe for class_1_TemporaryFile_of_module_django__core__files__temp" );
#endif
            Py_DECREF( frame_class_1_TemporaryFile_of_module_django__core__files__temp );
        }

        frame_class_1_TemporaryFile_of_module_django__core__files__temp = MAKE_FRAME( _codeobj_aa1e7635c5334ffd8b0cd9dd6dc41a76, _module_django__core__files__temp );
    }

    FrameGuard frame_guard( frame_class_1_TemporaryFile_of_module_django__core__files__temp );
    try
    {
        assert( Py_REFCNT( frame_class_1_TemporaryFile_of_module_django__core__files__temp ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 35 );
        _python_var_unlink.assign1( LOOKUP_ATTRIBUTE( _mvar_django__core__files__temp_os.asObject0(), _python_str_plain_unlink ) );
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
        frame_guard.getFrame0()->f_locals = _python_var___del__.updateLocalsDict( _python_var_close.updateLocalsDict( _python_var_unlink.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_class_1_TemporaryFile_of_module_django__core__files__temp )
        {
           Py_DECREF( frame_class_1_TemporaryFile_of_module_django__core__files__temp );
           frame_class_1_TemporaryFile_of_module_django__core__files__temp = NULL;
        }

        throw;
    }
    _python_var_close.assign1( MAKE_FUNCTION_function_2_close_of_class_1_TemporaryFile_of_module_django__core__files__temp(  ) );
    _python_var___del__.assign1( MAKE_FUNCTION_function_3___del___of_class_1_TemporaryFile_of_module_django__core__files__temp(  ) );
    return _python_var___del__.updateLocalsDict( _python_var_close.updateLocalsDict( _python_var_unlink.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___doc__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) ) ) ) );
}


static PyObject *impl_function_1___init___of_class_1_TemporaryFile_of_module_django__core__files__temp( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_mode, PyObject *_python_par_bufsize, PyObject *_python_par_suffix, PyObject *_python_par_prefix, PyObject *_python_par_dir )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_mode( _python_str_plain_mode, _python_par_mode );
    PyObjectLocalParameterVariableNoDel _python_var_bufsize( _python_str_plain_bufsize, _python_par_bufsize );
    PyObjectLocalParameterVariableNoDel _python_var_suffix( _python_str_plain_suffix, _python_par_suffix );
    PyObjectLocalParameterVariableNoDel _python_var_prefix( _python_str_plain_prefix, _python_par_prefix );
    PyObjectLocalParameterVariableNoDel _python_var_dir( _python_str_plain_dir, _python_par_dir );
    PyObjectLocalVariable _python_var_fd( _python_str_plain_fd );
    PyObjectLocalVariable _python_var_name( _python_str_plain_name );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_1_TemporaryFile_of_module_django__core__files__temp = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_1_TemporaryFile_of_module_django__core__files__temp ) )
    {
        if ( frame_function_1___init___of_class_1_TemporaryFile_of_module_django__core__files__temp )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_1_TemporaryFile_of_module_django__core__files__temp" );
#endif
            Py_DECREF( frame_function_1___init___of_class_1_TemporaryFile_of_module_django__core__files__temp );
        }

        frame_function_1___init___of_class_1_TemporaryFile_of_module_django__core__files__temp = MAKE_FRAME( _codeobj_894b59486d35c71b10fca85e035693ab, _module_django__core__files__temp );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_1_TemporaryFile_of_module_django__core__files__temp );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_1_TemporaryFile_of_module_django__core__files__temp ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 26 );
            PyObject *_tmp_python_tmp_source_iter;
            {
                PyObjectTempKeeper1 call7;
                PyObjectTempKeeper0 make_dict1;
                PyObjectTempKeeper0 make_dict3;
                _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( call7.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__files__temp_tempfile.asObject0(), _python_str_plain_mkstemp ) ), CALL_FUNCTION( call7.asObject0(), _python_tuple_empty, PyObjectTemporary( ( make_dict1.assign( _python_var_suffix.asObject() ), make_dict3.assign( _python_var_prefix.asObject() ), MAKE_DICT3( make_dict1.asObject0(), _python_str_plain_suffix, make_dict3.asObject0(), _python_str_plain_prefix, _python_var_dir.asObject(), _python_str_plain_dir ) ) ).asObject() ) ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
            _python_var_fd.assign0( _python_tmp_element_1.asObject() );
            _python_var_name.assign0( _python_tmp_element_2.asObject() );
        }
        frame_guard.setLineNumber( 28 );
        {
                PyObject *tmp_identifier = _python_var_name.asObject();
                SET_ATTRIBUTE( tmp_identifier, _python_var_self.asObject(), _python_str_plain_name );
        }
        frame_guard.setLineNumber( 29 );
        {
            PyObjectTempKeeper1 call10;
            PyObjectTempKeeper0 call11;
            PyObjectTempKeeper0 call12;
            {
                PyObjectTemporary tmp_identifier( ( call10.assign( LOOKUP_ATTRIBUTE( _mvar_django__core__files__temp_os.asObject0(), _python_str_plain_fdopen ) ), call11.assign( _python_var_fd.asObject() ), call12.assign( _python_var_mode.asObject() ), CALL_FUNCTION_WITH_ARGS( call10.asObject0(), call11.asObject0(), call12.asObject0(), _python_var_bufsize.asObject() ) ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_file );
        }
        }
        frame_guard.setLineNumber( 30 );
        SET_ATTRIBUTE( Py_False, _python_var_self.asObject(), _python_str_plain_close_called );
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
        frame_guard.getFrame0()->f_locals = _python_var_dir.updateLocalsDict( _python_var_prefix.updateLocalsDict( _python_var_suffix.updateLocalsDict( _python_var_bufsize.updateLocalsDict( _python_var_mode.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_name.updateLocalsDict( _python_var_fd.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_1_TemporaryFile_of_module_django__core__files__temp )
        {
           Py_DECREF( frame_function_1___init___of_class_1_TemporaryFile_of_module_django__core__files__temp );
           frame_function_1___init___of_class_1_TemporaryFile_of_module_django__core__files__temp = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_1___init___of_class_1_TemporaryFile_of_module_django__core__files__temp( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
{
    assert( kw == NULL || PyDict_Check( kw ) );

    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_mode = NULL;
    PyObject *_python_par_bufsize = NULL;
    PyObject *_python_par_suffix = NULL;
    PyObject *_python_par_prefix = NULL;
    PyObject *_python_par_dir = NULL;
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
            if ( found == false && _python_str_plain_mode == key )
            {
                if (unlikely( _python_par_mode ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'mode'" );
                    goto error_exit;
                }

                _python_par_mode = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_bufsize == key )
            {
                if (unlikely( _python_par_bufsize ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'bufsize'" );
                    goto error_exit;
                }

                _python_par_bufsize = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_suffix == key )
            {
                if (unlikely( _python_par_suffix ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'suffix'" );
                    goto error_exit;
                }

                _python_par_suffix = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_prefix == key )
            {
                if (unlikely( _python_par_prefix ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'prefix'" );
                    goto error_exit;
                }

                _python_par_prefix = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_dir == key )
            {
                if (unlikely( _python_par_dir ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'dir'" );
                    goto error_exit;
                }

                _python_par_dir = value;

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
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_mode, key ) )
            {
                if (unlikely( _python_par_mode ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'mode'" );
                    goto error_exit;
                }

                _python_par_mode = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_bufsize, key ) )
            {
                if (unlikely( _python_par_bufsize ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'bufsize'" );
                    goto error_exit;
                }

                _python_par_bufsize = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_suffix, key ) )
            {
                if (unlikely( _python_par_suffix ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'suffix'" );
                    goto error_exit;
                }

                _python_par_suffix = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_prefix, key ) )
            {
                if (unlikely( _python_par_prefix ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'prefix'" );
                    goto error_exit;
                }

                _python_par_prefix = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_dir, key ) )
            {
                if (unlikely( _python_par_dir ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'dir'" );
                    goto error_exit;
                }

                _python_par_dir = value;

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
    if (unlikely( args_given > 6 ))
    {
        if ( 6 == 1 )
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
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 6, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 6 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
#else
            if ( 6 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes %d positional arguments but %zd were given", 6, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 6, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 6 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d non-keyword arguments (%zd given)", 6, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 6 == 1 )
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
    args_usable_count = args_given < 6 ? args_given : 6;

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
         if (unlikely( _python_par_mode != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'mode'" );
             goto error_exit;
         }

        _python_par_mode = INCREASE_REFCOUNT( args[ 1 ] );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_bufsize != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'bufsize'" );
             goto error_exit;
         }

        _python_par_bufsize = INCREASE_REFCOUNT( args[ 2 ] );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_suffix != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'suffix'" );
             goto error_exit;
         }

        _python_par_suffix = INCREASE_REFCOUNT( args[ 3 ] );
    }
    if (likely( 4 < args_usable_count ))
    {
         if (unlikely( _python_par_prefix != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'prefix'" );
             goto error_exit;
         }

        _python_par_prefix = INCREASE_REFCOUNT( args[ 4 ] );
    }
    if (likely( 5 < args_usable_count ))
    {
         if (unlikely( _python_par_dir != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'dir'" );
             goto error_exit;
         }

        _python_par_dir = INCREASE_REFCOUNT( args[ 5 ] );
    }
    // Assign values not given to defaults
    if ( _python_par_mode == NULL )
    {
        _python_par_mode = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 0 ) );
        assertObject( _python_par_mode );
    }
    if ( _python_par_bufsize == NULL )
    {
        _python_par_bufsize = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 1 ) );
        assertObject( _python_par_bufsize );
    }
    if ( _python_par_suffix == NULL )
    {
        _python_par_suffix = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 2 ) );
        assertObject( _python_par_suffix );
    }
    if ( _python_par_prefix == NULL )
    {
        _python_par_prefix = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 3 ) );
        assertObject( _python_par_prefix );
    }
    if ( _python_par_dir == NULL )
    {
        _python_par_dir = INCREASE_REFCOUNT( PyTuple_GET_ITEM( self->m_defaults, 4 ) );
        assertObject( _python_par_dir );
    }


    return impl_function_1___init___of_class_1_TemporaryFile_of_module_django__core__files__temp( self, _python_par_self, _python_par_mode, _python_par_bufsize, _python_par_suffix, _python_par_prefix, _python_par_dir );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_mode );
    Py_XDECREF( _python_par_bufsize );
    Py_XDECREF( _python_par_suffix );
    Py_XDECREF( _python_par_prefix );
    Py_XDECREF( _python_par_dir );

    return NULL;
}

static PyObject *dparse_function_1___init___of_class_1_TemporaryFile_of_module_django__core__files__temp( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 6)
    {
        return impl_function_1___init___of_class_1_TemporaryFile_of_module_django__core__files__temp( self, INCREASE_REFCOUNT( args[ 0 ] ), INCREASE_REFCOUNT( args[ 1 ] ), INCREASE_REFCOUNT( args[ 2 ] ), INCREASE_REFCOUNT( args[ 3 ] ), INCREASE_REFCOUNT( args[ 4 ] ), INCREASE_REFCOUNT( args[ 5 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_1___init___of_class_1_TemporaryFile_of_module_django__core__files__temp( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_2_close_of_class_1_TemporaryFile_of_module_django__core__files__temp( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_2_close_of_class_1_TemporaryFile_of_module_django__core__files__temp = NULL;

    if ( isFrameUnusable( frame_function_2_close_of_class_1_TemporaryFile_of_module_django__core__files__temp ) )
    {
        if ( frame_function_2_close_of_class_1_TemporaryFile_of_module_django__core__files__temp )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_close_of_class_1_TemporaryFile_of_module_django__core__files__temp" );
#endif
            Py_DECREF( frame_function_2_close_of_class_1_TemporaryFile_of_module_django__core__files__temp );
        }

        frame_function_2_close_of_class_1_TemporaryFile_of_module_django__core__files__temp = MAKE_FRAME( _codeobj_f956594a206db7562533b422415ca69b, _module_django__core__files__temp );
    }

    FrameGuard frame_guard( frame_function_2_close_of_class_1_TemporaryFile_of_module_django__core__files__temp );
    try
    {
        assert( Py_REFCNT( frame_function_2_close_of_class_1_TemporaryFile_of_module_django__core__files__temp ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 38 );
        if ( (!( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_close_called ) ).asObject() ) )) )
        {
            frame_guard.setLineNumber( 39 );
            SET_ATTRIBUTE( Py_True, _python_var_self.asObject(), _python_str_plain_close_called );
            frame_guard.setLineNumber( 40 );
            try
            {
                frame_guard.setLineNumber( 41 );
                DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_file ) ).asObject(), _python_str_plain_close ) ).asObject() ) );
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

                if ( _exception.matches( PyExc_OSError ) || _exception.matches( PyExc_IOError ) )
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
            frame_guard.setLineNumber( 44 );
            try
            {
                frame_guard.setLineNumber( 45 );
                {
                    PyObjectTempKeeper1 call1;
                    DECREASE_REFCOUNT( ( call1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_unlink ) ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_name ) ).asObject() ) ) );
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

        if ( frame_guard.getFrame0() == frame_function_2_close_of_class_1_TemporaryFile_of_module_django__core__files__temp )
        {
           Py_DECREF( frame_function_2_close_of_class_1_TemporaryFile_of_module_django__core__files__temp );
           frame_function_2_close_of_class_1_TemporaryFile_of_module_django__core__files__temp = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_2_close_of_class_1_TemporaryFile_of_module_django__core__files__temp( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "close() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "close() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "close() got multiple values for keyword argument 'self'" );
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
                   "close() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "close() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "close() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "close() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "close() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "close() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "close() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "close() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "close() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "close() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "close() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "close() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "close() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "close() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_2_close_of_class_1_TemporaryFile_of_module_django__core__files__temp( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_2_close_of_class_1_TemporaryFile_of_module_django__core__files__temp( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_2_close_of_class_1_TemporaryFile_of_module_django__core__files__temp( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_2_close_of_class_1_TemporaryFile_of_module_django__core__files__temp( self, args, size, NULL );
        return result;
    }

}



static PyObject *impl_function_3___del___of_class_1_TemporaryFile_of_module_django__core__files__temp( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_3___del___of_class_1_TemporaryFile_of_module_django__core__files__temp = NULL;

    if ( isFrameUnusable( frame_function_3___del___of_class_1_TemporaryFile_of_module_django__core__files__temp ) )
    {
        if ( frame_function_3___del___of_class_1_TemporaryFile_of_module_django__core__files__temp )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3___del___of_class_1_TemporaryFile_of_module_django__core__files__temp" );
#endif
            Py_DECREF( frame_function_3___del___of_class_1_TemporaryFile_of_module_django__core__files__temp );
        }

        frame_function_3___del___of_class_1_TemporaryFile_of_module_django__core__files__temp = MAKE_FRAME( _codeobj_72dbdb4b3836be800c4e8332a22d46a6, _module_django__core__files__temp );
    }

    FrameGuard frame_guard( frame_function_3___del___of_class_1_TemporaryFile_of_module_django__core__files__temp );
    try
    {
        assert( Py_REFCNT( frame_function_3___del___of_class_1_TemporaryFile_of_module_django__core__files__temp ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 50 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_close ) ).asObject() ) );
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

        if ( frame_guard.getFrame0() == frame_function_3___del___of_class_1_TemporaryFile_of_module_django__core__files__temp )
        {
           Py_DECREF( frame_function_3___del___of_class_1_TemporaryFile_of_module_django__core__files__temp );
           frame_function_3___del___of_class_1_TemporaryFile_of_module_django__core__files__temp = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *fparse_function_3___del___of_class_1_TemporaryFile_of_module_django__core__files__temp( Nuitka_FunctionObject *self, PyObject **args, Py_ssize_t args_size, PyObject *kw )
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
                PyErr_Format( PyExc_TypeError, "__del__() keywords must be strings" );
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
                    PyErr_Format( PyExc_TypeError, "__del__() got multiple values for keyword argument 'self'" );
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
                    PyErr_Format( PyExc_TypeError, "__del__() got multiple values for keyword argument 'self'" );
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
                   "__del__() got an unexpected keyword argument '%s'",
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
            PyErr_Format( PyExc_TypeError, "__del__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__del__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__del__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__del__() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__del__() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__del__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "__del__() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__del__() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
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
            PyErr_Format( PyExc_TypeError, "__del__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__del__() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "__del__() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__del__() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
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
             PyErr_Format( PyExc_TypeError, "__del__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( args[ 0 ] );
    }


    return impl_function_3___del___of_class_1_TemporaryFile_of_module_django__core__files__temp( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}

static PyObject *dparse_function_3___del___of_class_1_TemporaryFile_of_module_django__core__files__temp( Nuitka_FunctionObject *self, PyObject **args, int size )
{
    if ( size == 1)
    {
        return impl_function_3___del___of_class_1_TemporaryFile_of_module_django__core__files__temp( self, INCREASE_REFCOUNT( args[ 0 ] ) );
    }
    else
    {
        PyObject *result = fparse_function_3___del___of_class_1_TemporaryFile_of_module_django__core__files__temp( self, args, size, NULL );
        return result;
    }

}




static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_TemporaryFile_of_module_django__core__files__temp(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_1___init___of_class_1_TemporaryFile_of_module_django__core__files__temp,
        dparse_function_1___init___of_class_1_TemporaryFile_of_module_django__core__files__temp,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_894b59486d35c71b10fca85e035693ab,
        INCREASE_REFCOUNT( _python_tuple_5f4fafafd6bbd5d84c9c94a4c8925258_tuple ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__temp,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_close_of_class_1_TemporaryFile_of_module_django__core__files__temp(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_2_close_of_class_1_TemporaryFile_of_module_django__core__files__temp,
        dparse_function_2_close_of_class_1_TemporaryFile_of_module_django__core__files__temp,
        _python_str_plain_close,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_f956594a206db7562533b422415ca69b,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__temp,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3___del___of_class_1_TemporaryFile_of_module_django__core__files__temp(  )
{
    PyObject *result = Nuitka_Function_New(
        fparse_function_3___del___of_class_1_TemporaryFile_of_module_django__core__files__temp,
        dparse_function_3___del___of_class_1_TemporaryFile_of_module_django__core__files__temp,
        _python_str_plain___del__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_72dbdb4b3836be800c4e8332a22d46a6,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module_django__core__files__temp,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "django.core.files.temp",   /* m_name */
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

MOD_INIT_DECL( django__core__files__temp )
{

#if defined( _NUITKA_EXE ) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Packages can be imported recursively in deep executables.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( _module_django__core__files__temp );
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

    // puts( "in initdjango__core__files__temp" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module_django__core__files__temp = Py_InitModule4(
        "django.core.files.temp",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module_django__core__files__temp = PyModule_Create( &_moduledef );
#endif

    _moduledict_django__core__files__temp = (PyDictObject *)((PyModuleObject *)_module_django__core__files__temp)->md_dict;

    assertObject( _module_django__core__files__temp );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module
// doesn't automatically enter "sys.modules" with the object that it should, so
// do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_digest_9fb1f82209f8be99ccdcaa7a73d367dd, _module_django__core__files__temp );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module_django__core__files__temp );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module_django__core__files__temp != _module___main__ )
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
    UPDATE_STRING_DICT0( _moduledict_django__core__files__temp, (Nuitka_StringObject *)_python_str_plain___doc__, _python_str_digest_7f241f2c2e9d0984e7b2c11da81edac7 );
    UPDATE_STRING_DICT0( _moduledict_django__core__files__temp, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_743a05aef463d38c4f50f26936431c0f );
    PyFrameObject *frame_module_django__core__files__temp = MAKE_FRAME( _codeobj_1c91f8206caab2137a96be61f56abe5d, _module_django__core__files__temp );

    FrameGuard frame_guard( frame_module_django__core__files__temp );
    try
    {
        assert( Py_REFCNT( frame_module_django__core__files__temp ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 12 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__temp, (Nuitka_StringObject *)_python_str_plain_os, IMPORT_MODULE( _python_str_plain_os, ((PyModuleObject *)_module_django__core__files__temp)->md_dict, ((PyModuleObject *)_module_django__core__files__temp)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 13 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__temp, (Nuitka_StringObject *)_python_str_plain_tempfile, IMPORT_MODULE( _python_str_plain_tempfile, ((PyModuleObject *)_module_django__core__files__temp)->md_dict, ((PyModuleObject *)_module_django__core__files__temp)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 14 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__temp, (Nuitka_StringObject *)_python_str_plain_FileProxyMixin, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_digest_2c70e1f0604e0be0b0c6cc4c0a46a857, ((PyModuleObject *)_module_django__core__files__temp)->md_dict, ((PyModuleObject *)_module_django__core__files__temp)->md_dict, _python_list_str_plain_FileProxyMixin_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_FileProxyMixin ) );
        UPDATE_STRING_DICT0( _moduledict_django__core__files__temp, (Nuitka_StringObject *)_python_str_plain___all__, _python_tuple_str_plain_NamedTemporaryFile_str_plain_gettempdir_tuple );
        frame_guard.setLineNumber( 18 );
        if ( RICH_COMPARE_BOOL_EQ( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar_django__core__files__temp_os.asObject0(), _python_str_plain_name ) ).asObject(), _python_str_plain_nt ) )
        {
            {
                frame_guard.setLineNumber( 19 );
                PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( _mvar_django__core__files__temp_FileProxyMixin.asObject0() ) );
                PyObjectTemporary _python_tmp_class_dict( impl_class_1_TemporaryFile_of_module_django__core__files__temp(  ) );
                PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar_django__core__files__temp___metaclass__.isInitialized( false ) ? _mvar_django__core__files__temp___metaclass__.asObject0() : NULL ) ) ) );
                PyObject *_tmp_python_tmp_class;
                {
                    PyObjectTempKeeper0 call1;
                    PyObjectTempKeeper0 call3;
                    _tmp_python_tmp_class = ( call1.assign( _python_tmp_metaclass.asObject() ), call3.assign( _python_tmp_bases.asObject() ), CALL_FUNCTION_WITH_ARGS( call1.asObject0(), _python_str_plain_TemporaryFile, call3.asObject0(), _python_tmp_class_dict.asObject() ) );
                }
                PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
                UPDATE_STRING_DICT0( _moduledict_django__core__files__temp, (Nuitka_StringObject *)_python_str_plain_TemporaryFile, _python_tmp_class.asObject() );
            }
            frame_guard.setLineNumber( 52 );
            UPDATE_STRING_DICT0( _moduledict_django__core__files__temp, (Nuitka_StringObject *)_python_str_plain_NamedTemporaryFile, _mvar_django__core__files__temp_TemporaryFile.asObject0() );
        }
        else
        {
            frame_guard.setLineNumber( 54 );
            UPDATE_STRING_DICT1( _moduledict_django__core__files__temp, (Nuitka_StringObject *)_python_str_plain_NamedTemporaryFile, LOOKUP_ATTRIBUTE( _mvar_django__core__files__temp_tempfile.asObject0(), _python_str_plain_NamedTemporaryFile ) );
        }
        frame_guard.setLineNumber( 56 );
        UPDATE_STRING_DICT1( _moduledict_django__core__files__temp, (Nuitka_StringObject *)_python_str_plain_gettempdir, LOOKUP_ATTRIBUTE( _mvar_django__core__files__temp_tempfile.asObject0(), _python_str_plain_gettempdir ) );
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
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module_django__core__files__temp)->md_dict );
#endif

    // Return the error.
        _exception.toPython();
        return MOD_RETURN_VALUE( NULL );
    }

   return MOD_RETURN_VALUE( _module_django__core__files__temp );
}
